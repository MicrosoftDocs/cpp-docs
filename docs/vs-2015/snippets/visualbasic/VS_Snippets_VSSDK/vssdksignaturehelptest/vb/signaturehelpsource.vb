'<Snippet1>
Imports System
Imports System.Collections.Generic
Imports System.Linq
Imports System.Text
Imports System.Collections.ObjectModel
Imports System.ComponentModel.Composition
Imports System.Runtime.InteropServices
Imports Microsoft.VisualStudio.Language.Intellisense
Imports Microsoft.VisualStudio.Text
Imports Microsoft.VisualStudio.Text.Editor
Imports Microsoft.VisualStudio.Utilities
Imports Microsoft.VisualStudio.Editor
Imports Microsoft.VisualStudio.Text.Operations
Imports Microsoft.VisualStudio
Imports Microsoft.VisualStudio.TextManager.Interop
Imports Microsoft.VisualStudio.OLE.Interop
'</Snippet1>

'<Snippet2>
Friend Class TestParameter
    Implements IParameter
    '</Snippet2>

    '<Snippet3>
    Public Sub New(ByVal documentation As String, ByVal locus As Span, ByVal name As String, ByVal signature As ISignature)
        Me.privateDocumentation = documentation
        Me.privateLocus = locus
        Me.privateName = name
        Me.privateSignature = signature
    End Sub
    '</Snippet3>

    '<Snippet4>
    Private privateDocumentation As String
    ReadOnly Property Documentation() As String Implements IParameter.Documentation
        Get
            Return privateDocumentation
        End Get

    End Property
    Private privateLocus As Span
    ReadOnly Property Locus() As Span Implements IParameter.Locus
        Get
            Return privateLocus
        End Get
    End Property
    Private privateName As String
    ReadOnly Property Name() As String Implements IParameter.Name
        Get
            Return privateName
        End Get
    End Property
    Private privateSignature As ISignature
    ReadOnly Property Signature() As ISignature Implements IParameter.Signature
        Get
            Return privateSignature
        End Get
    End Property
    Private privatePrettyPrintedLocus As Span
    ReadOnly Property PrettyPrintedLocus() As Span Implements IParameter.PrettyPrintedLocus
        Get
            Return privatePrettyPrintedLocus
        End Get
    End Property
    '</Snippet4>
End Class

'<Snippet5>
Friend Class TestSignature
    Implements ISignature
    '</Snippet5>

    '<Snippet6>
    Private m_subjectBuffer As ITextBuffer
    Private m_currentParameter As IParameter
    Private m_content As String
    Private m_documentation As String
    Friend m_applicableToSpan As ITrackingSpan
    Friend m_parameters As ReadOnlyCollection(Of IParameter)
    Private m_printContent As String
    '</Snippet6>

    '<Snippet7>
    Friend Sub New(ByVal subjectBuffer As ITextBuffer, ByVal content As String, ByVal doc As String, ByVal parameters As ReadOnlyCollection(Of IParameter))
        m_subjectBuffer = subjectBuffer
        m_content = content
        m_documentation = doc
        m_parameters = parameters
        AddHandler m_subjectBuffer.Changed, AddressOf OnSubjectBufferChanged
    End Sub
    '</Snippet7>

    '<Snippet8>
    Public Event CurrentParameterChanged As EventHandler(Of CurrentParameterChangedEventArgs) Implements ISignature.CurrentParameterChanged
    '</Snippet8>

    '<Snippet9>
    ReadOnly Property CurrentParameter() As IParameter Implements ISignature.CurrentParameter
        Get
            Return m_currentParameter
        End Get
    End Property
    '</Snippet9>

    '<Snippet10>
    Private Sub RaiseCurrentParameterChanged(ByVal prevCurrentParameter As IParameter, ByVal newCurrentParameter As IParameter)
        Dim tempHandler As EventHandler(Of CurrentParameterChangedEventArgs) = Me.CurrentParameterChangedEvent
        If tempHandler IsNot Nothing Then
            tempHandler(Me, New CurrentParameterChangedEventArgs(prevCurrentParameter, newCurrentParameter))
        End If
    End Sub
    '</Snippet10>

    '<Snippet11>
    Friend Sub ComputeCurrentParameter()
        If Parameters.Count = 0 Then
            Me.m_currentParameter = Nothing
            Return
        End If

        'the number of commas in the string is the index of the current parameter
        Dim sigText As String = ApplicableToSpan.GetText(m_subjectBuffer.CurrentSnapshot)

        Dim currentIndex As Integer = 0
        Dim commaCount As Integer = 0
        Do While currentIndex < sigText.Length
            Dim commaIndex As Integer = sigText.IndexOf(","c, currentIndex)
            If commaIndex = -1 Then
                Exit Do
            End If
            commaCount += 1
            currentIndex = commaIndex + 1
        Loop

        If commaCount < Parameters.Count Then
            Me.m_currentParameter = Parameters(commaCount)
        Else
            'too many commas, so use the last parameter as the current one.
            Me.m_currentParameter = Parameters(Parameters.Count - 1)
        End If
    End Sub
    '</Snippet11>

    '<Snippet12>
    Friend Sub OnSubjectBufferChanged(ByVal sender As Object, ByVal e As TextContentChangedEventArgs)
        Me.ComputeCurrentParameter()
    End Sub
    '</Snippet12>

    '<Snippet13>
    ReadOnly Property ApplicableToSpan() As ITrackingSpan Implements ISignature.ApplicableToSpan
        Get
            Return (m_applicableToSpan)
        End Get
    End Property
    '</Snippet13>

    '<Snippet14>
    ReadOnly Property Content() As String Implements ISignature.Content
        Get
            Return (m_content)
        End Get
    End Property

    ReadOnly Property Documentation() As String Implements ISignature.Documentation
        Get
            Return (m_documentation)
        End Get
    End Property

    ReadOnly Property Parameters() As ReadOnlyCollection(Of IParameter) Implements ISignature.Parameters
        Get
            Return (m_parameters)
        End Get
    End Property

    ReadOnly Property PrettyPrintedContent() As String Implements ISignature.PrettyPrintedContent
        Get
            Return (m_printContent)
        End Get
    End Property
    '</Snippet14>
End Class

'<Snippet15>
Friend Class TestSignatureHelpSource
    Implements ISignatureHelpSource
    '</Snippet15>

    '<Snippet16>
    Private m_textBuffer As ITextBuffer
    '</Snippet16>

    '<Snippet17>
    Public Sub New(ByVal textBuffer As ITextBuffer)
        m_textBuffer = textBuffer
    End Sub
    '</Snippet17>

    '<Snippet18>
    Public Sub AugmentSignatureHelpSession(ByVal session As ISignatureHelpSession, ByVal signatures As IList(Of ISignature)) Implements ISignatureHelpSource.AugmentSignatureHelpSession
        Dim snapshot As ITextSnapshot = m_textBuffer.CurrentSnapshot
        Dim position As Integer = session.GetTriggerPoint(m_textBuffer).GetPosition(snapshot)

        Dim applicableToSpan As ITrackingSpan = m_textBuffer.CurrentSnapshot.CreateTrackingSpan(New Span(position, 0), SpanTrackingMode.EdgeInclusive, 0)

        signatures.Add(CreateSignature(m_textBuffer, "add(int firstInt, int secondInt)", "Documentation for adding integers.", applicableToSpan))
        signatures.Add(CreateSignature(m_textBuffer, "add(double firstDouble, double secondDouble)", "Documentation for adding doubles.", applicableToSpan))
    End Sub
    '</Snippet18>

    '<Snippet19>
    Private Function CreateSignature(ByVal textBuffer As ITextBuffer, ByVal methodSig As String, ByVal methodDoc As String, ByVal span As ITrackingSpan) As TestSignature
        Dim sig As New TestSignature(textBuffer, methodSig, methodDoc, Nothing)
        AddHandler textBuffer.Changed, AddressOf sig.OnSubjectBufferChanged

        'find the parameters in the method signature (expect methodname(one, two)
        Dim pars() As String = methodSig.Split(New Char() {"("c, ","c, ")"c})
        Dim paramList As New List(Of IParameter)()

        Dim locusSearchStart As Integer = 0
        For i As Integer = 1 To pars.Length - 1
            Dim param As String = pars(i).Trim()

            If String.IsNullOrEmpty(param) Then
                Continue For
            End If

            'find where this parameter is located in the method signature
            Dim locusStart As Integer = methodSig.IndexOf(param, locusSearchStart)
            If locusStart >= 0 Then
                Dim locus As New Span(locusStart, param.Length)
                locusSearchStart = locusStart + param.Length
                paramList.Add(New TestParameter("Documentation for the parameter.", locus, param, sig))
            End If
        Next i

        sig.m_Parameters = New ReadOnlyCollection(Of IParameter)(paramList)
        sig.m_ApplicableToSpan = span
        sig.ComputeCurrentParameter()
        Return sig
    End Function
    '</Snippet19>

    '<Snippet20>
    Public Function GetBestMatch(ByVal session As ISignatureHelpSession) As ISignature Implements ISignatureHelpSource.GetBestMatch
        If session.Signatures.Count > 0 Then
            Dim applicableToSpan As ITrackingSpan = session.Signatures(0).ApplicableToSpan
            Dim text As String = applicableToSpan.GetText(applicableToSpan.TextBuffer.CurrentSnapshot)

            If text.Trim().Equals("add") Then 'get only "add"
                Return session.Signatures(0)
            End If
        End If
        Return Nothing
    End Function
    '</Snippet20>

    '<Snippet21>
    Private m_isDisposed As Boolean

    Public Sub Dispose() Implements IDisposable.Dispose
        If Not m_isDisposed Then
            GC.SuppressFinalize(Me)
            m_isDisposed = True
        End If
    End Sub
    '</Snippet21>
End Class

'<Snippet22>
<Export(GetType(ISignatureHelpSourceProvider)), Name("Signature Help source"), Order(Before:="default"), ContentType("text")>
Friend Class TestSignatureHelpSourceProvider
    Implements ISignatureHelpSourceProvider
    '</Snippet22>

    '<Snippet23>
    Public Function TryCreateSignatureHelpSource(ByVal textBuffer As ITextBuffer) As ISignatureHelpSource Implements ISignatureHelpSourceProvider.TryCreateSignatureHelpSource
        Return New TestSignatureHelpSource(textBuffer)
    End Function
    '</Snippet23>
End Class

'<Snippet24>
Friend NotInheritable Class TestSignatureHelpCommandHandler
    Implements IOleCommandTarget
    '</Snippet24>

    '<Snippet25>
    Private m_nextCommandHandler As IOleCommandTarget
    Private m_textView As ITextView
    Private m_broker As ISignatureHelpBroker
    Private m_session As ISignatureHelpSession
    Private m_navigator As ITextStructureNavigator
    '</Snippet25>

    '<Snippet26>
    Friend Sub New(ByVal textViewAdapter As IVsTextView, ByVal textView As ITextView, ByVal nav As ITextStructureNavigator, ByVal broker As ISignatureHelpBroker)
        Me.m_textView = textView
        Me.m_broker = broker
        Me.m_navigator = nav

        'add this to the filter chain
        textViewAdapter.AddCommandFilter(Me, m_nextCommandHandler)
    End Sub
    '</Snippet26>

    '<Snippet27>
    Public Function Exec(ByRef pguidCmdGroup As Guid, ByVal nCmdID As UInteger, ByVal nCmdexecopt As UInteger, ByVal pvaIn As IntPtr, ByVal pvaOut As IntPtr) As Integer Implements IOleCommandTarget.Exec
        Dim typedChar As Char = Char.MinValue

        If pguidCmdGroup = VSConstants.VSStd2K AndAlso nCmdID = CUInt(VSConstants.VSStd2KCmdID.TYPECHAR) Then
            typedChar = CChar(ChrW(CUShort(Marshal.GetObjectForNativeVariant(pvaIn))))
            If typedChar.Equals("("c) Then
                'move the point back so it's in the preceding word
                Dim point As SnapshotPoint = m_textView.Caret.Position.BufferPosition - 1
                Dim extent As TextExtent = m_navigator.GetExtentOfWord(point)
                Dim word As String = extent.Span.GetText()
                If word.Equals("add") Then
                    m_session = m_broker.TriggerSignatureHelp(m_textView)
                End If

            ElseIf typedChar.Equals(")"c) AndAlso m_session IsNot Nothing Then
                m_session.Dismiss()
                m_session = Nothing
            End If
        End If
        Return m_nextCommandHandler.Exec(pguidCmdGroup, nCmdID, nCmdexecopt, pvaIn, pvaOut)
    End Function
    '</Snippet27>

    '<Snippet28>
    Public Function QueryStatus(ByRef pguidCmdGroup As Guid, ByVal cCmds As UInteger, ByVal prgCmds() As OLECMD, ByVal pCmdText As IntPtr) As Integer Implements IOleCommandTarget.QueryStatus
        Return m_nextCommandHandler.QueryStatus(pguidCmdGroup, cCmds, prgCmds, pCmdText)
    End Function
    '</Snippet28>
End Class

'<Snippet29>
<Export(GetType(IVsTextViewCreationListener)), Name("Signature Help controller"), TextViewRole(PredefinedTextViewRoles.Editable), ContentType("text")>
Friend Class TestSignatureHelpCommandProvider
    Implements IVsTextViewCreationListener
    '</Snippet29>

    '<Snippet30>
    <Import()>
    Friend AdapterService As IVsEditorAdaptersFactoryService

    <Import()>
    Friend Property NavigatorService() As ITextStructureNavigatorSelectorService

    <Import()>
    Friend SignatureHelpBroker As ISignatureHelpBroker
    '</Snippet30>

    '<Snippet31>
    Public Sub VsTextViewCreated(ByVal textViewAdapter As IVsTextView) Implements IVsTextViewCreationListener.VsTextViewCreated
        Dim textView As ITextView = AdapterService.GetWpfTextView(textViewAdapter)
        If textView Is Nothing Then
            Return
        End If

        textView.Properties.GetOrCreateSingletonProperty(Function() New TestSignatureHelpCommandHandler(textViewAdapter, textView, NavigatorService.GetTextStructureNavigator(textView.TextBuffer), SignatureHelpBroker))
    End Sub
    '</Snippet31>
End Class