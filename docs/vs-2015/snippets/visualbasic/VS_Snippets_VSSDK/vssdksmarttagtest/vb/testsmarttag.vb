'<Snippet1>
Imports System
Imports System.Collections.Generic
Imports System.ComponentModel.Composition
Imports System.Collections.ObjectModel
Imports System.Windows.Media
Imports Microsoft.VisualStudio.Language.Intellisense
Imports Microsoft.VisualStudio.Text
Imports Microsoft.VisualStudio.Text.Editor
Imports Microsoft.VisualStudio.Text.Operations
Imports Microsoft.VisualStudio.Text.Tagging
Imports Microsoft.VisualStudio.Utilities
'</Snippet1>

'<Snippet2>
Friend Class TestSmartTag
    Inherits SmartTag
    '</Snippet2>

    '<Snippet3>
    Public Sub New(ByVal actionSets As ReadOnlyCollection(Of SmartTagActionSet))
        MyBase.New(SmartTagType.Factoid, actionSets)
    End Sub
    '</Snippet3>
End Class

'<Snippet4>
Friend Class TestSmartTagger
    Implements ITagger(Of TestSmartTag), IDisposable
    '</Snippet4>

    '<Snippet5>
    Private m_buffer As ITextBuffer
    Private m_view As ITextView
    Private m_provider As TestSmartTaggerProvider
    Private m_disposed As Boolean
    '</Snippet5>

    '<Snippet6>
    Public Sub New(ByVal buffer As ITextBuffer, ByVal view As ITextView, ByVal provider As TestSmartTaggerProvider)
        m_buffer = buffer
        m_view = view
        m_provider = provider
        AddHandler m_view.LayoutChanged, AddressOf OnLayoutChanged
    End Sub
    '</Snippet6>

    '<Snippet7>
    Public Function GetTags(ByVal spans As NormalizedSnapshotSpanCollection) As IEnumerable(Of ITagSpan(Of TestSmartTag)) Implements ITagger(Of TestSmartTag).GetTags
        Dim snapshot As ITextSnapshot = m_buffer.CurrentSnapshot
        If snapshot.Length = 0 Then
            Return Nothing
            Exit Function
        End If

        'set up the navigator
        Dim navigator As ITextStructureNavigator = m_provider.NavigatorService.GetTextStructureNavigator(m_buffer)

        'set up a list to contain the tags
        Dim list As List(Of TagSpan(Of TestSmartTag))
        list = New List(Of TagSpan(Of TestSmartTag))()

        For Each span In spans
            Dim caret As ITextCaret = m_view.Caret
            Dim point As SnapshotPoint

            If CInt(caret.Position.BufferPosition) > 0 Then
                point = caret.Position.BufferPosition - 1
            Else
                Exit For
            End If

            Dim extent As TextExtent = navigator.GetExtentOfWord(point)
            'don't display the tag if the extent has whitespace
            If extent.IsSignificant Then
                list.Add(New TagSpan(Of TestSmartTag)(extent.Span, New TestSmartTag(GetSmartTagActions(extent.Span))))
            Else
                Exit For
            End If
        Next span

        Return list
    End Function
    '</Snippet7>

    '<Snippet8>
    Private Function GetSmartTagActions(ByVal span As SnapshotSpan) As ReadOnlyCollection(Of SmartTagActionSet)
        Dim actionSetList As New List(Of SmartTagActionSet)()
        Dim actionList As New List(Of ISmartTagAction)()

        Dim trackingSpan As ITrackingSpan = span.Snapshot.CreateTrackingSpan(span, SpanTrackingMode.EdgeInclusive)
        actionList.Add(New UpperCaseSmartTagAction(trackingSpan))
        actionList.Add(New LowerCaseSmartTagAction(trackingSpan))
        Dim actionSet As New SmartTagActionSet(actionList.AsReadOnly())
        actionSetList.Add(actionSet)
        Return actionSetList.AsReadOnly()
    End Function
    '</Snippet8>

    '<Snippet9>
    Public Event TagsChanged As EventHandler(Of SnapshotSpanEventArgs) Implements ITagger(Of TestSmartTag).TagsChanged
    '</Snippet9>

    '<Snippet10>
    Private Sub OnLayoutChanged(ByVal sender As Object, ByVal e As TextViewLayoutChangedEventArgs)
        Dim snapshot As ITextSnapshot = e.NewSnapshot
        'don't do anything if this is just a change in case
        If Not snapshot.GetText().ToLower().Equals(e.OldSnapshot.GetText().ToLower()) Then
            Dim span As New SnapshotSpan(snapshot, New Span(0, snapshot.Length))
            Dim handler As EventHandler(Of SnapshotSpanEventArgs) = Me.TagsChangedEvent
            If handler IsNot Nothing Then
                handler(Me, New SnapshotSpanEventArgs(span))
            End If
        End If
    End Sub
    '</Snippet10>

    '<Snippet11>
    Public Sub Dispose() Implements IDisposable.Dispose
        Dispose(True)
        GC.SuppressFinalize(Me)
    End Sub

    Private Sub Dispose(ByVal disposing As Boolean)
        If disposing Then
            RemoveHandler m_view.LayoutChanged, AddressOf OnLayoutChanged
            m_view = Nothing
        End If

        m_disposed = True
    End Sub
    '</Snippet11>
End Class

'<Snippet12>
<Export(GetType(IViewTaggerProvider))>
<ContentType("text")>
<Order(Before:="default")>
<TagType(GetType(SmartTag))>
Friend Class TestSmartTaggerProvider
    Implements IViewTaggerProvider
    '</Snippet12>

    '<Snippet13>
    <Import(GetType(ITextStructureNavigatorSelectorService))>
    Friend Property NavigatorService() As ITextStructureNavigatorSelectorService
    '</Snippet13>

    '<Snippet14>
    Public Function CreateTagger(Of T As ITag)(ByVal textView As ITextView, ByVal buffer As ITextBuffer) As ITagger(Of T) Implements IViewTaggerProvider.CreateTagger
        If buffer Is Nothing OrElse textView Is Nothing Then
            Return Nothing
        End If

        'make sure we are tagging only the top buffer
        If buffer Is textView.TextBuffer Then
            Return New TestSmartTagger(buffer, textView, Me)
        Else
            Return Nothing
        End If
    End Function
    '</Snippet14>
End Class

'<Snippet15>
Friend Class UpperCaseSmartTagAction
    Implements ISmartTagAction
    '</Snippet15>

    '<Snippet17>
    Private m_span As ITrackingSpan
    Private m_upper As String
    Private m_display As String
    Private m_snapshot As ITextSnapshot
    '</Snippet17>

    '<Snippet18>
    Public Sub New(ByVal span As ITrackingSpan)
        m_span = span
        m_snapshot = span.TextBuffer.CurrentSnapshot
        m_upper = span.GetText(m_snapshot).ToUpper()
        m_display = "Convert to upper case"
    End Sub
    '</Snippet18>

    '<Snippet19>
    Public ReadOnly Property DisplayText() As String Implements ISmartTagAction.DisplayText
        Get
            Return m_display
        End Get
    End Property
    Public ReadOnly Property Icon() As ImageSource Implements ISmartTagAction.Icon
        Get
            Return Nothing
        End Get
    End Property
    Public ReadOnly Property IsEnabled() As Boolean Implements ISmartTagAction.IsEnabled
        Get
            Return True
        End Get
    End Property

    Private privateSource As ISmartTagSource
    Public Property Source() As ISmartTagSource
        Get
            Return privateSource
        End Get
        Private Set(ByVal value As ISmartTagSource)
            privateSource = value
        End Set
    End Property

    Public ReadOnly Property ActionSets() As ReadOnlyCollection(Of SmartTagActionSet) Implements ISmartTagAction.ActionSets
        Get
            Return Nothing
        End Get
    End Property
    '</Snippet19>

    '<Snippet20>
    Public Sub Invoke() Implements ISmartTagAction.Invoke
        m_span.TextBuffer.Replace(m_span.GetSpan(m_snapshot), m_upper)
    End Sub
    '</Snippet20>
End Class

'<Snippet16>
Friend Class LowerCaseSmartTagAction
    Implements ISmartTagAction
    '</Snippet16>

    Private m_span As ITrackingSpan
    Private m_lower As String
    Private m_display As String
    Private m_snapshot As ITextSnapshot

    Public Sub New(ByVal span As ITrackingSpan)
        m_span = span
        m_snapshot = span.TextBuffer.CurrentSnapshot
        m_lower = span.GetText(m_snapshot).ToLower()
        m_display = "Convert to lower case"
    End Sub

    Public ReadOnly Property DisplayText() As String Implements ISmartTagAction.DisplayText
        Get
            Return m_display
        End Get
    End Property
    Public ReadOnly Property Icon() As ImageSource Implements ISmartTagAction.Icon
        Get
            Return Nothing
        End Get
    End Property
    Public ReadOnly Property IsEnabled() As Boolean Implements ISmartTagAction.IsEnabled
        Get
            Return True
        End Get
    End Property

    Private privateSource As ISmartTagSource
    Public Property Source() As ISmartTagSource
        Get
            Return privateSource
        End Get
        Private Set(ByVal value As ISmartTagSource)
            privateSource = value
        End Set
    End Property

    Public ReadOnly Property ActionSets() As ReadOnlyCollection(Of SmartTagActionSet) Implements ISmartTagAction.ActionSets
        Get
            Return Nothing
        End Get
    End Property

    Public Sub Invoke() Implements ISmartTagAction.Invoke
        m_span.TextBuffer.Replace(m_span.GetSpan(m_snapshot), m_lower)
    End Sub
End Class