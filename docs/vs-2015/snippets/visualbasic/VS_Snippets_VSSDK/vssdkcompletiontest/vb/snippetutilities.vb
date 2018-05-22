Imports Microsoft.VisualStudio.OLE.Interop
Imports Microsoft.VisualStudio.Text.Editor
Imports Microsoft.VisualStudio.TextManager.Interop
Imports Microsoft.VisualStudio.Language.Intellisense
Imports Microsoft.VisualStudio
Imports System.Runtime.InteropServices
Imports Microsoft.VisualStudio.Shell
Imports Microsoft.VisualStudio.Text

'<Snippet26>
Imports Microsoft.VisualStudio.Text.Operations
Imports MSXML
'</Snippet26>

'<Snippet22>
Module SnippetUtilities
    '</Snippet22>

    '<Snippet23>
    Friend Const LanguageServiceGuidStr As String = "00000000-0000-0000-0000-00000000"
    '</Snippet23>
End Module

Namespace ImplementingCodeSnippetsPart1
    '<Snippet24>
    <ProvideLanguageCodeExpansion(
    SnippetUtilities.LanguageServiceGuidStr,
    "TestSnippets",
    0,
    "TestSnippets",
    "%InstallRoot%\TestSnippets\Snippets\%LCID%\SnippetsIndex.xml",
    SearchPaths:="%InstallRoot%\TestSnippets\Snippets\%LCID%\",
    ForceCreateDirs:="%InstallRoot%\TestSnippets\Snippets\%LCID%\")>
    Friend Class TestCompletionCommandHandler
        Implements IOleCommandTarget
        '</Snippet24>

        Private m_nextCommandHandler As IOleCommandTarget
        Private m_textView As ITextView
        Private m_provider As TestCompletionHandlerProvider
        Private m_session As ICompletionSession

        Friend Sub New(ByVal textViewAdapter As IVsTextView, ByVal textView As ITextView, ByVal provider As TestCompletionHandlerProvider)
            Me.m_textView = textView
            Me.m_provider = provider

            'add the command to the command chain
            textViewAdapter.AddCommandFilter(Me, m_nextCommandHandler)
        End Sub

        '<Snippet25>
        Public Function QueryStatus(ByRef pguidCmdGroup As Guid, ByVal cCmds As UInteger, ByVal prgCmds As OLECMD(), ByVal pCmdText As IntPtr) As Integer Implements IOleCommandTarget.QueryStatus
            If Not VsShellUtilities.IsInAutomationFunction(m_provider.ServiceProvider) Then
                If pguidCmdGroup = VSConstants.VSStd2K AndAlso cCmds > 0 Then
                    ' make the Insert Snippet command appear on the context menu 
                    If CUInt(prgCmds(0).cmdID) = CUInt(VSConstants.VSStd2KCmdID.INSERTSNIPPET) Then
                        prgCmds(0).cmdf = CInt(Constants.MSOCMDF_ENABLED) Or CInt(Constants.MSOCMDF_SUPPORTED)
                        Return VSConstants.S_OK
                    End If
                End If
            End If

            Return m_nextCommandHandler.QueryStatus(pguidCmdGroup, cCmds, prgCmds, pCmdText)
        End Function
        '</Snippet25>

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

        Private Sub OnSessionDismissed(ByVal sender As Object, ByVal e As EventArgs)
            RemoveHandler m_session.Dismissed, AddressOf OnSessionDismissed
            m_session = Nothing
        End Sub
    End Class
End Namespace

Namespace ImplementingCodeSnippetsPart2
    '<Snippet27>
    <ProvideLanguageCodeExpansion(
    SnippetUtilities.LanguageServiceGuidStr,
    "TestSnippets",
    0,
    "TestSnippets",
    "%InstallRoot%\TestSnippets\Snippets\%LCID%\SnippetsIndex.xml",
    SearchPaths:="%InstallRoot%\TestSnippets\Snippets\%LCID%\",
    ForceCreateDirs:="%InstallRoot%\TestSnippets\Snippets\%LCID%\")>
    Friend Class TestCompletionCommandHandler
        Implements IOleCommandTarget
        Implements IVsExpansionClient
        '</Snippet27>

        Private m_nextCommandHandler As IOleCommandTarget
        Private m_textView As ITextView
        Private m_provider As TestCompletionHandlerProvider
        Private m_session As ICompletionSession

        '<Snippet29>
        Dim m_vsTextView As IVsTextView
        Dim m_exManager As IVsExpansionManager
        Dim m_exSession As IVsExpansionSession
        '</Snippet29>

        '<Snippet30>
        Friend Sub New(ByVal textViewAdapter As IVsTextView, ByVal textView As ITextView, ByVal provider As TestCompletionHandlerProvider)
            Me.m_textView = textView
            Me.m_provider = provider
            Me.m_vsTextView = textViewAdapter

            Dim textManager As IVsTextManager2 = DirectCast(m_provider.ServiceProvider.GetService(GetType(SVsTextManager)), IVsTextManager2)
            textManager.GetExpansionManager(m_exManager)
            m_exSession = Nothing

            'add the command to the command chain
            textViewAdapter.AddCommandFilter(Me, m_nextCommandHandler)
        End Sub
        '</Snippet30>

        Public Function QueryStatus(ByRef pguidCmdGroup As Guid, ByVal cCmds As UInteger, ByVal prgCmds As OLECMD(), ByVal pCmdText As IntPtr) As Integer Implements IOleCommandTarget.QueryStatus
            If Not VsShellUtilities.IsInAutomationFunction(m_provider.ServiceProvider) Then
                If pguidCmdGroup = VSConstants.VSStd2K AndAlso cCmds > 0 Then
                    ' make the Insert Snippet command appear on the context menu 
                    If CUInt(prgCmds(0).cmdID) = CUInt(VSConstants.VSStd2KCmdID.INSERTSNIPPET) Then
                        prgCmds(0).cmdf = CInt(Constants.MSOCMDF_ENABLED) Or CInt(Constants.MSOCMDF_SUPPORTED)
                        Return VSConstants.S_OK
                    End If
                End If
            End If

            Return m_nextCommandHandler.QueryStatus(pguidCmdGroup, cCmds, prgCmds, pCmdText)
        End Function

        Public Function Exec(ByRef pguidCmdGroup As Guid, ByVal nCmdID As UInteger, ByVal nCmdexecopt As UInteger, ByVal pvaIn As IntPtr, ByVal pvaOut As IntPtr) As Integer Implements IOleCommandTarget.Exec
            If VsShellUtilities.IsInAutomationFunction(m_provider.ServiceProvider) Then
                Return m_nextCommandHandler.Exec(pguidCmdGroup, nCmdID, nCmdexecopt, pvaIn, pvaOut)
            End If
            'make a copy of this so we can look at it after forwarding some commands
            Dim commandID As UInteger = nCmdID
            Dim typedChar As Char = Char.MinValue
            'make sure the input is a char before getting it
            '<Snippet31>
            'code previously written for Exec
            If pguidCmdGroup = VSConstants.VSStd2K AndAlso nCmdID = CUInt(VSConstants.VSStd2KCmdID.TYPECHAR) Then
                typedChar = ChrW(CUShort(Marshal.GetObjectForNativeVariant(pvaIn)))
            End If
            'the snippet picker code starts here
            If nCmdID = CUInt(VSConstants.VSStd2KCmdID.INSERTSNIPPET) Then
                Dim textManager As IVsTextManager2 = DirectCast(m_provider.ServiceProvider.GetService(GetType(SVsTextManager)), IVsTextManager2)

                textManager.GetExpansionManager(m_exManager)
                m_exManager.InvokeInsertionUI(
                    m_vsTextView,
                    Me,
                    New Guid(SnippetUtilities.LanguageServiceGuidStr),
                    Nothing,
                    0,
                    0,
                    Nothing,
                    0,
                    0,
                    "TestSnippets",
                    String.Empty)
                Return VSConstants.S_OK
            End If
            '</Snippet31>

            '<Snippet32>
            'the expansion insertion is handled in OnItemChosen
            'if the expansion session is still active, handle tab/backtab/return/cancel
            If m_exSession IsNot Nothing Then
                If nCmdID = CUInt(VSConstants.VSStd2KCmdID.BACKTAB) Then
                    m_exSession.GoToPreviousExpansionField()
                    Return VSConstants.S_OK
                ElseIf nCmdID = CUInt(VSConstants.VSStd2KCmdID.TAB) Then
                    m_exSession.GoToNextExpansionField(0)
                    'false to support cycling through all the fields
                    Return VSConstants.S_OK
                ElseIf nCmdID = CUInt(VSConstants.VSStd2KCmdID.[RETURN]) OrElse nCmdID = CUInt(VSConstants.VSStd2KCmdID.CANCEL) Then
                    If m_exSession.EndCurrentExpansion(0) = VSConstants.S_OK Then
                        m_exSession = Nothing
                        Return VSConstants.S_OK
                    End If
                End If
            End If
            '</Snippet32>

            '<Snippet33>
            'neither an expansion session nor a completion session is open, but we got a tab, so check whether the last word typed is a snippet shortcut 
            If m_session Is Nothing AndAlso m_exSession Is Nothing AndAlso nCmdID = CUInt(VSConstants.VSStd2KCmdID.TAB) Then
                'get the word that was just added 
                Dim pos As CaretPosition = m_textView.Caret.Position
                Dim word As TextExtent = m_provider.NavigatorService.GetTextStructureNavigator(m_textView.TextBuffer).GetExtentOfWord(pos.BufferPosition - 1)
                Dim textString As String = word.Span.GetText()
                'if it is a code snippet, insert it, otherwise carry on
                If InsertAnyExpansion(textString, Nothing, Nothing) Then
                    Return VSConstants.S_OK
                End If
            End If
            '</Snippet33>

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

        Private Sub OnSessionDismissed(ByVal sender As Object, ByVal e As EventArgs)
            RemoveHandler m_session.Dismissed, AddressOf OnSessionDismissed
            m_session = Nothing
        End Sub

        '<Snippet34>
        Public Function EndExpansion() As Integer Implements IVsExpansionClient.EndExpansion
            m_exSession = Nothing
            Return VSConstants.S_OK
        End Function

        Public Function FormatSpan(ByVal pBuffer As IVsTextLines, ByVal ts As TextSpan()) As Integer Implements IVsExpansionClient.FormatSpan
            Return VSConstants.S_OK
        End Function

        Public Function GetExpansionFunction(ByVal xmlFunctionNode As IXMLDOMNode, ByVal bstrFieldName As String, ByRef pFunc As IVsExpansionFunction) As Integer Implements IVsExpansionClient.GetExpansionFunction
            pFunc = Nothing
            Return VSConstants.S_OK
        End Function

        Public Function IsValidKind(ByVal pBuffer As IVsTextLines, ByVal ts As TextSpan(), ByVal bstrKind As String, ByRef pfIsValidKind As Integer) As Integer Implements IVsExpansionClient.IsValidKind
            pfIsValidKind = 1
            Return VSConstants.S_OK
        End Function

        Public Function IsValidType(ByVal pBuffer As IVsTextLines, ByVal ts() As TextSpan, ByVal rgTypes() As String, ByVal iCountTypes As Integer, ByRef pfIsValidType As Integer) As Integer Implements IVsExpansionClient.IsValidType
            pfIsValidType = 1
            Return VSConstants.S_OK
        End Function

        Public Function OnAfterInsertion(ByVal pSession As IVsExpansionSession) As Integer Implements IVsExpansionClient.OnAfterInsertion
            Return VSConstants.S_OK
        End Function

        Public Function OnBeforeInsertion(ByVal pSession As IVsExpansionSession) As Integer Implements IVsExpansionClient.OnBeforeInsertion
            Return VSConstants.S_OK
        End Function

        Public Function PositionCaretForEditing(ByVal pBuffer As IVsTextLines, ByVal ts As TextSpan()) As Integer Implements IVsExpansionClient.PositionCaretForEditing
            Return VSConstants.S_OK
        End Function
        '</Snippet34>

        '<Snippet35>
        Public Function OnItemChosen(ByVal pszTitle As String, ByVal pszPath As String) As Integer Implements IVsExpansionClient.OnItemChosen
            InsertAnyExpansion(Nothing, pszTitle, pszPath)
            Return VSConstants.S_OK
        End Function
        '</Snippet35>

        '<Snippet36>
        Private Function InsertAnyExpansion(ByVal shortcut As String, ByVal title As String, ByVal path As String) As Boolean
            Dim endColumn As Integer, startLine As Integer
            'get the column number from  the IVsTextView, not the ITextView
            m_vsTextView.GetCaretPos(startLine, endColumn)

            Dim addSpan As New TextSpan()
            addSpan.iStartIndex = endColumn
            addSpan.iEndIndex = endColumn
            addSpan.iStartLine = startLine
            addSpan.iEndLine = startLine

            'get the expansion from the shortcut
            If shortcut IsNot Nothing Then
                'reset the TextSpan to the width of the shortcut, because we're going to replace the shortcut with the expansion
                addSpan.iStartIndex = addSpan.iEndIndex - shortcut.Length

                m_exManager.GetExpansionByShortcut(
                    Me,
                    New Guid(SnippetUtilities.LanguageServiceGuidStr),
                    shortcut,
                    m_vsTextView,
                    New TextSpan() {addSpan},
                    0,
                    path,
                    title)
            End If
            If title IsNot Nothing AndAlso path IsNot Nothing Then
                Dim textLines As IVsTextLines = Nothing
                m_vsTextView.GetBuffer(textLines)
                Dim bufferExpansion As IVsExpansion = DirectCast(textLines, IVsExpansion)

                If bufferExpansion IsNot Nothing Then
                    Dim hr As Integer = bufferExpansion.InsertNamedExpansion(
                        title,
                        path,
                        addSpan,
                        Me,
                        New Guid(SnippetUtilities.LanguageServiceGuidStr),
                        0,
                        m_exSession)
                    If VSConstants.S_OK = hr Then
                        Return True
                    End If
                End If
            End If
            Return False
        End Function
        '</Snippet36>
    End Class
End Namespace