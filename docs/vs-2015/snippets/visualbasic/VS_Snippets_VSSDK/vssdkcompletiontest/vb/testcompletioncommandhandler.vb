'<Snippet11>
Imports System
Imports System.Collections.Generic
Imports System.Linq
Imports System.Text
Imports System.ComponentModel.Composition
Imports System.Runtime.InteropServices
Imports Microsoft.VisualStudio
Imports Microsoft.VisualStudio.Editor
Imports Microsoft.VisualStudio.Language.Intellisense
Imports Microsoft.VisualStudio.OLE.Interop
Imports Microsoft.VisualStudio.Shell
Imports Microsoft.VisualStudio.Text
Imports Microsoft.VisualStudio.Text.Editor
Imports Microsoft.VisualStudio.TextManager.Interop
Imports Microsoft.VisualStudio.Utilities
'</Snippet11>

Imports Microsoft.VisualStudio.Text.Operations

'<Snippet12>
<Export(GetType(IVsTextViewCreationListener))>
<Name("token completion handler")>
<ContentType("plaintext")> <TextViewRole(PredefinedTextViewRoles.Editable)>
Friend Class TestCompletionHandlerProvider
    Implements IVsTextViewCreationListener
    '</Snippet12>

    '<Snippet13>
    <Import()>
    Friend AdapterService As IVsEditorAdaptersFactoryService = Nothing
    <Import()>
    Friend Property CompletionBroker() As ICompletionBroker
    <Import()>
    Friend Property ServiceProvider() As SVsServiceProvider
    '</Snippet13>

    '<Snippet28>
    <Import()>
    Friend Property NavigatorService As ITextStructureNavigatorSelectorService
    '</Snippet28>

    '<Snippet14>
    Public Sub VsTextViewCreated(ByVal textViewAdapter As IVsTextView) Implements IVsTextViewCreationListener.VsTextViewCreated
        Dim textView As ITextView = AdapterService.GetWpfTextView(textViewAdapter)
        If textView Is Nothing Then
            Return
        End If

        Dim createCommandHandler As Func(Of TestCompletionCommandHandler) = Function() New TestCompletionCommandHandler(textViewAdapter, textView, Me)
        textView.Properties.GetOrCreateSingletonProperty(createCommandHandler)
    End Sub
    '</Snippet14>
End Class

'<Snippet15>
Friend Class TestCompletionCommandHandler
    Implements IOleCommandTarget
    '</Snippet15>

    '<Snippet16>
    Private m_nextCommandHandler As IOleCommandTarget
    Private m_textView As ITextView
    Private m_provider As TestCompletionHandlerProvider
    Private m_session As ICompletionSession
    '</Snippet16>

    '<Snippet17>
    Friend Sub New(ByVal textViewAdapter As IVsTextView, ByVal textView As ITextView, ByVal provider As TestCompletionHandlerProvider)
        Me.m_textView = textView
        Me.m_provider = provider

        'add the command to the command chain
        textViewAdapter.AddCommandFilter(Me, m_nextCommandHandler)
    End Sub
    '</Snippet17>

    '<Snippet18>
    Public Function QueryStatus(ByRef pguidCmdGroup As Guid, ByVal cCmds As UInteger, ByVal prgCmds() As OLECMD, ByVal pCmdText As IntPtr) As Integer Implements IOleCommandTarget.QueryStatus
        Return m_nextCommandHandler.QueryStatus(pguidCmdGroup, cCmds, prgCmds, pCmdText)
    End Function
    '</Snippet18>

    '<Snippet19>
    Public Function Exec(ByRef pguidCmdGroup As Guid, ByVal nCmdID As UInteger, ByVal nCmdexecopt As UInteger, ByVal pvaIn As IntPtr, ByVal pvaOut As IntPtr) As Integer Implements IOleCommandTarget.Exec
        If VsShellUtilities.IsInAutomationFunction(m_provider.ServiceProvider) Then
            Return m_nextCommandHandler.Exec(pguidCmdGroup, nCmdID, nCmdexecopt, pvaIn, pvaOut)
        End If
        'make a copy of this so we can look at it after forwarding some commands
        Dim commandID As UInteger = nCmdID
        Dim typedChar As Char = Char.MinValue
        'make sure the input is a char before getting it
        If pguidCmdGroup = VSConstants.VSStd2K AndAlso nCmdID = CUInt(VSConstants.VSStd2KCmdID.TYPECHAR) Then
            typedChar = CChar(ChrW(CUShort(Marshal.GetObjectForNativeVariant(pvaIn))))
        End If

        'check for a commit character
        If nCmdID = CUInt(VSConstants.VSStd2KCmdID.RETURN) OrElse nCmdID = CUInt(VSConstants.VSStd2KCmdID.TAB) OrElse (Char.IsWhiteSpace(typedChar) OrElse Char.IsPunctuation(typedChar)) Then
            'check for a a selection
            If m_session IsNot Nothing AndAlso (Not m_session.IsDismissed) Then
                'if the selection is fully selected, commit the current session
                If m_session.SelectedCompletionSet.SelectionStatus.IsSelected Then
                    m_session.Commit()
                    'also, don't add the character to the buffer
                    Return VSConstants.S_OK
                Else
                    'if there is no selection, dismiss the session
                    m_session.Dismiss()
                End If
            End If
        End If

        'pass along the command so the char is added to the buffer
        Dim retVal As Integer = m_nextCommandHandler.Exec(pguidCmdGroup, nCmdID, nCmdexecopt, pvaIn, pvaOut)
        Dim handled As Boolean = False
        If (Not typedChar.Equals(Char.MinValue)) AndAlso Char.IsLetterOrDigit(typedChar) Then
            If m_session Is Nothing OrElse m_session.IsDismissed Then ' If there is no active session, bring up completion
                Me.TriggerCompletion()
                m_session.Filter()
            Else 'the completion session is already active, so just filter
                m_session.Filter()
            End If
            handled = True
        ElseIf commandID = CUInt(VSConstants.VSStd2KCmdID.BACKSPACE) OrElse commandID = CUInt(VSConstants.VSStd2KCmdID.DELETE) Then 'redo the filter if there is a deletion
            If m_session IsNot Nothing AndAlso (Not m_session.IsDismissed) Then
                m_session.Filter()
            End If
            handled = True
        End If
        If handled Then
            Return VSConstants.S_OK
        End If
        Return retVal
    End Function
    '</Snippet19>

    '<Snippet20>
    Private Function TriggerCompletion() As Boolean
        'the caret must be in a non-projection location 
        Dim caretPoint As SnapshotPoint? = m_textView.Caret.Position.Point.GetPoint(Function(textBuffer) ((Not textBuffer.ContentType.IsOfType("projection"))), PositionAffinity.Predecessor)
        If Not caretPoint.HasValue Then
            Return False
        End If

        m_session = m_provider.CompletionBroker.CreateCompletionSession(m_textView, caretPoint.Value.Snapshot.CreateTrackingPoint(caretPoint.Value.Position, PointTrackingMode.Positive), True)

        'subscribe to the Dismissed event on the session 
        AddHandler m_session.Dismissed, AddressOf OnSessionDismissed
        m_session.Start()

        Return True
    End Function
    '</Snippet20>

    '<Snippet21>
    Private Sub OnSessionDismissed(ByVal sender As Object, ByVal e As EventArgs)
        RemoveHandler m_session.Dismissed, AddressOf OnSessionDismissed
        m_session = Nothing
    End Sub
    '</Snippet21>
End Class