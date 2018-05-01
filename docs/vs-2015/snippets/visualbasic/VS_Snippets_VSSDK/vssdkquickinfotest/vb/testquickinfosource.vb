'<Snippet1>
Imports System
Imports System.Collections.Generic
Imports System.Linq
Imports System.Text
Imports System.Collections.ObjectModel
Imports System.ComponentModel.Composition
Imports Microsoft.VisualStudio.Language.Intellisense
Imports Microsoft.VisualStudio.Text
Imports Microsoft.VisualStudio.Text.Editor
Imports Microsoft.VisualStudio.Text.Operations
Imports Microsoft.VisualStudio.Text.Tagging
Imports Microsoft.VisualStudio.Utilities
'</Snippet1>

'<Snippet2>
Friend Class TestQuickInfoSource
    Implements IQuickInfoSource
    '</Snippet2>

    '<Snippet3>
    Private m_provider As TestQuickInfoSourceProvider
    Private m_subjectBuffer As ITextBuffer
    Private m_dictionary As Dictionary(Of String, String)
    '</Snippet3>

    '<Snippet4>
    Public Sub New(ByVal provider As TestQuickInfoSourceProvider, ByVal subjectBuffer As ITextBuffer)
        m_provider = provider
        m_subjectBuffer = subjectBuffer

        'these are the method names and their descriptions
        m_dictionary = New Dictionary(Of String, String)()
        m_dictionary.Add("add", "int add(int firstInt, int secondInt)" & vbLf & "Adds one integer to another.")
        m_dictionary.Add("subtract", "int subtract(int firstInt, int secondInt)" & vbLf & "Subtracts one integer from another.")
        m_dictionary.Add("multiply", "int multiply(int firstInt, int secondInt)" & vbLf & "Multiplies one integer by another.")
        m_dictionary.Add("divide", "int divide(int firstInt, int secondInt)" & vbLf & "Divides one integer by another.")
    End Sub
    '</Snippet4>

    '<Snippet5>
    Public Sub AugmentQuickInfoSession(ByVal session As IQuickInfoSession, ByVal qiContent As IList(Of Object), ByRef applicableToSpan As ITrackingSpan) Implements IQuickInfoSource.AugmentQuickInfoSession
        ' Map the trigger point down to our buffer.
        Dim subjectTriggerPoint As System.Nullable(Of SnapshotPoint) = session.GetTriggerPoint(m_subjectBuffer.CurrentSnapshot)
        If Not subjectTriggerPoint.HasValue Then
            applicableToSpan = Nothing
            Exit Sub
        End If

        Dim currentSnapshot As ITextSnapshot = subjectTriggerPoint.Value.Snapshot
        Dim querySpan As New SnapshotSpan(subjectTriggerPoint.Value, 0)

        'look for occurrences of our QuickInfo words in the span
        Dim navigator As ITextStructureNavigator = m_provider.NavigatorService.GetTextStructureNavigator(m_subjectBuffer)
        Dim extent As TextExtent = navigator.GetExtentOfWord(subjectTriggerPoint.Value)
        Dim searchText As String = extent.Span.GetText()

        For Each key As String In m_dictionary.Keys
            Dim foundIndex As Integer = searchText.IndexOf(key, StringComparison.CurrentCultureIgnoreCase)
            If foundIndex > -1 Then
                'applicableToSpan = currentSnapshot.CreateTrackingSpan(querySpan.Start.Add(foundIndex).Position, 9, SpanTrackingMode.EdgeInclusive)

                applicableToSpan = currentSnapshot.CreateTrackingSpan(extent.Span.Start + foundIndex, key.Length, SpanTrackingMode.EdgeInclusive)
                Dim value As String = ""
                m_dictionary.TryGetValue(key, value)
                If value IsNot Nothing Then
                    qiContent.Add(value)
                Else
                    qiContent.Add("")
                End If

                Exit Sub
            End If
        Next

        applicableToSpan = Nothing
    End Sub
    '</Snippet5>

    '<Snippet6>
    Private m_isDisposed As Boolean
    Public Sub Dispose() Implements IDisposable.Dispose
        If Not m_isDisposed Then
            GC.SuppressFinalize(Me)
            m_isDisposed = True
        End If
    End Sub
    '</Snippet6>
End Class

'<Snippet7>
<Export(GetType(IQuickInfoSourceProvider))> _
<Name("ToolTip QuickInfo Source")> _
<Order(Before:=" Default Quick Info Presenter")> _
<ContentType("text")> _
Friend Class TestQuickInfoSourceProvider
    Implements IQuickInfoSourceProvider
    '</Snippet7>

    '<Snippet8>
    Private _NavigatorService As ITextStructureNavigatorSelectorService
    <Import()> _
    Friend Property NavigatorService() As ITextStructureNavigatorSelectorService
        Get
            Return _NavigatorService
        End Get
        Set(ByVal value As ITextStructureNavigatorSelectorService)
            _NavigatorService = value
        End Set
    End Property

    Private _TextBufferFactoryService As ITextBufferFactoryService
    <Import()> _
    Friend Property TextBufferFactoryService() As ITextBufferFactoryService
        Get
            Return _TextBufferFactoryService
        End Get
        Set(ByVal value As ITextBufferFactoryService)
            _TextBufferFactoryService = value
        End Set
    End Property
    '</Snippet8>

    '<Snippet9>
    Public Function TryCreateQuickInfoSource(ByVal textBuffer As ITextBuffer) As IQuickInfoSource Implements IQuickInfoSourceProvider.TryCreateQuickInfoSource
        Return New TestQuickInfoSource(Me, textBuffer)
    End Function
    '</Snippet9>
End Class

'<Snippet10>
Friend Class TestQuickInfoController
    Implements IIntellisenseController
    '</Snippet10>

    '<Snippet11>
    Private m_textView As ITextView
    Private m_subjectBuffers As IList(Of ITextBuffer)
    Private m_provider As TestQuickInfoControllerProvider
    Private m_session As IQuickInfoSession
    '</Snippet11>

    '<Snippet12>
    Friend Sub New(ByVal textView As ITextView, ByVal subjectBuffers As IList(Of ITextBuffer), ByVal provider As TestQuickInfoControllerProvider)
        m_textView = textView
        m_subjectBuffers = subjectBuffers
        m_provider = provider

        AddHandler m_textView.MouseHover, AddressOf Me.OnTextViewMouseHover
    End Sub
    '</Snippet12>

    '<Snippet13>
    Private Sub OnTextViewMouseHover(ByVal sender As Object, ByVal e As MouseHoverEventArgs)
        'find the mouse position by mapping down to the subject buffer
        Dim point As System.Nullable(Of SnapshotPoint) = m_textView.BufferGraph.MapDownToFirstMatch(New SnapshotPoint(m_textView.TextSnapshot, e.Position), PointTrackingMode.Positive, Function(snapshot) m_subjectBuffers.Contains(snapshot.TextBuffer), PositionAffinity.Predecessor)

        If point IsNot Nothing Then
            Dim triggerPoint As ITrackingPoint = point.Value.Snapshot.CreateTrackingPoint(point.Value.Position, PointTrackingMode.Positive)

            If Not m_provider.QuickInfoBroker.IsQuickInfoActive(m_textView) Then
                m_session = m_provider.QuickInfoBroker.TriggerQuickInfo(m_textView, triggerPoint, True)
            End If
        End If
    End Sub
    '</Snippet13>

    '<Snippet14>
    Public Sub Detach(ByVal textView As ITextView) Implements IIntellisenseController.Detach
        If m_textView Is textView Then
            AddHandler m_textView.MouseHover, AddressOf Me.OnTextViewMouseHover
            m_textView = Nothing
        End If
    End Sub
    '</Snippet14>

    '<Snippet15>
    Public Sub ConnectSubjectBuffer(ByVal subjectBuffer As ITextBuffer) Implements IIntellisenseController.ConnectSubjectBuffer

    End Sub

    Public Sub DisconnectSubjectBuffer(ByVal subjectBuffer As ITextBuffer) Implements IIntellisenseController.DisconnectSubjectBuffer

    End Sub
    '</Snippet15>
End Class

'<Snippet16>
<Export(GetType(IIntellisenseControllerProvider))> _
<Name("ToolTip QuickInfo Controller")> _
<ContentType("text")> _
Friend Class TestQuickInfoControllerProvider
    Implements IIntellisenseControllerProvider
    '</Snippet16>

    '<Snippet17>
    Private _QuickInfoBroker As IQuickInfoBroker
    <Import()> _
    Friend Property QuickInfoBroker() As IQuickInfoBroker
        Get
            Return _QuickInfoBroker
        End Get
        Set(ByVal value As IQuickInfoBroker)
            _QuickInfoBroker = value
        End Set
    End Property
    '</Snippet17>

    '<Snippet18>
    Public Function TryCreateIntellisenseController(ByVal textView As ITextView, ByVal subjectBuffers As IList(Of ITextBuffer)) As IIntellisenseController Implements IIntellisenseControllerProvider.TryCreateIntellisenseController
        Return New TestQuickInfoController(textView, subjectBuffers, Me)
    End Function
    '</Snippet18>
End Class