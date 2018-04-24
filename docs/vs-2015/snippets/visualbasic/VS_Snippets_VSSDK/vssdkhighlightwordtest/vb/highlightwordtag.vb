'<Snippet1>
Imports System
Imports System.Collections.Generic
Imports System.ComponentModel.Composition
Imports System.Linq
Imports System.Threading
Imports System.Windows.Media
Imports Microsoft.VisualStudio.Text
Imports Microsoft.VisualStudio.Text.Classification
Imports Microsoft.VisualStudio.Text.Editor
Imports Microsoft.VisualStudio.Text.Operations
Imports Microsoft.VisualStudio.Text.Tagging
Imports Microsoft.VisualStudio.Utilities
'</Snippet1>

'<Snippet2>
Friend Class HighlightWordTag
    Inherits TextMarkerTag
    '</Snippet2>

    '<Snippet5>
    Public Sub New()
        MyBase.New("MarkerFormatDefinition/HighlightWordFormatDefinition")
    End Sub
    '</Snippet5>
End Class

'<Snippet3>
<Export(GetType(EditorFormatDefinition))>
<Name("MarkerFormatDefinition/HighlightWordFormatDefinition")>
<UserVisible(True)>
Friend Class HighlightWordFormatDefinition
    Inherits MarkerFormatDefinition
    '</Snippet3>

    '<Snippet4>
    Public Sub New()
        Me.BackgroundColor = Colors.LightBlue
        Me.ForegroundColor = Colors.DarkBlue
        Me.DisplayName = "Highlight Word"
        Me.ZOrder = 5
    End Sub
    '</Snippet4>
End Class

'<Snippet6>
Friend Class HighlightWordTagger
    Implements ITagger(Of HighlightWordTag)
    '</Snippet6>

    '<Snippet7>
    Private _View As ITextView
    Private Property View() As ITextView
        Get
            Return _View
        End Get
        Set(ByVal value As ITextView)
            _View = value
        End Set
    End Property
    Private _SourceBuffer As ITextBuffer
    Private Property SourceBuffer() As ITextBuffer
        Get
            Return _SourceBuffer
        End Get
        Set(ByVal value As ITextBuffer)
            _SourceBuffer = value
        End Set
    End Property
    Private _TextSearchService As ITextSearchService
    Private Property TextSearchService() As ITextSearchService
        Get
            Return _TextSearchService
        End Get
        Set(ByVal value As ITextSearchService)
            _TextSearchService = value
        End Set
    End Property
    Private _TextStructureNavigator As ITextStructureNavigator
    Private Property TextStructureNavigator() As ITextStructureNavigator
        Get
            Return _TextStructureNavigator
        End Get
        Set(ByVal value As ITextStructureNavigator)
            _TextStructureNavigator = value
        End Set
    End Property
    Private _WordSpans As NormalizedSnapshotSpanCollection
    Private Property WordSpans() As NormalizedSnapshotSpanCollection
        Get
            Return _WordSpans
        End Get
        Set(ByVal value As NormalizedSnapshotSpanCollection)
            _WordSpans = value
        End Set
    End Property
    Private _CurrentWord As System.Nullable(Of SnapshotSpan)
    Private Property CurrentWord() As System.Nullable(Of SnapshotSpan)
        Get
            Return _CurrentWord
        End Get
        Set(ByVal value As System.Nullable(Of SnapshotSpan))
            _CurrentWord = value
        End Set
    End Property
    Private _RequestedPoint As SnapshotPoint
    Private Property RequestedPoint() As SnapshotPoint
        Get
            Return _RequestedPoint
        End Get
        Set(ByVal value As SnapshotPoint)
            _RequestedPoint = value
        End Set
    End Property
    Private updateLock As New Object()
    '</Snippet7>

    '<Snippet8>
    Public Sub New(ByVal view As ITextView, ByVal sourceBuffer As ITextBuffer, ByVal textSearchService As ITextSearchService, ByVal textStructureNavigator As ITextStructureNavigator)
        Me.View = view
        Me.SourceBuffer = sourceBuffer
        Me.TextSearchService = textSearchService
        Me.TextStructureNavigator = textStructureNavigator
        Me.WordSpans = New NormalizedSnapshotSpanCollection()
        Me.CurrentWord = Nothing
        AddHandler Me.View.Caret.PositionChanged, AddressOf CaretPositionChanged
        AddHandler Me.View.LayoutChanged, AddressOf ViewLayoutChanged
    End Sub
    '</Snippet8>

    '<Snippet9>
    Private Sub ViewLayoutChanged(ByVal sender As Object, ByVal e As TextViewLayoutChangedEventArgs)
        ' If a new snapshot wasn't generated, then skip this layout
        If e.NewSnapshot IsNot e.OldSnapshot Then
            UpdateAtCaretPosition(View.Caret.Position)
        End If
    End Sub

    Private Sub CaretPositionChanged(ByVal sender As Object, ByVal e As CaretPositionChangedEventArgs)
        UpdateAtCaretPosition(e.NewPosition)
    End Sub
    '</Snippet9>

    '<Snippet10>
    Public Event TagsChanged(ByVal sender As Object, ByVal e As SnapshotSpanEventArgs) _
        Implements ITagger(Of HighlightWordTag).TagsChanged
    '</Snippet10>

    '<Snippet11>
    Private Sub UpdateAtCaretPosition(ByVal caretPosition As CaretPosition)
        Dim point As System.Nullable(Of SnapshotPoint) = caretPosition.Point.GetPoint(SourceBuffer, caretPosition.Affinity)

        If Not point.HasValue Then
            Exit Sub
        End If

        ' If the new caret position is still within the current word (and on the same snapshot), we don't need to check it
        If CurrentWord.HasValue AndAlso CurrentWord.Value.Snapshot Is View.TextSnapshot AndAlso point.Value > CurrentWord.Value.Start AndAlso point.Value < CurrentWord.Value.[End] Then
            Exit Sub
        End If

        RequestedPoint = point.Value
        UpdateWordAdornments()
    End Sub

    Private Sub UpdateWordAdornments()
        Dim currentRequest As SnapshotPoint = RequestedPoint
        Dim wordSpans As New List(Of SnapshotSpan)()
        'Find all words in the buffer like the one the caret is on
        Dim word As TextExtent = TextStructureNavigator.GetExtentOfWord(currentRequest)
        Dim foundWord As Boolean = True
        'If we've selected something not worth highlighting, we might have missed a "word" by a little bit
        If Not WordExtentIsValid(currentRequest, word) Then
            'Before we retry, make sure it is worthwhile
            If word.Span.Start <> currentRequest OrElse currentRequest = currentRequest.GetContainingLine().Start OrElse Char.IsWhiteSpace((currentRequest - 1).GetChar()) Then
                foundWord = False
            Else
                ' Try again, one character previous. 
                'If the caret is at the end of a word, pick up the word.
                word = TextStructureNavigator.GetExtentOfWord(currentRequest - 1)

                'If the word still isn't valid, we're done
                If Not WordExtentIsValid(currentRequest, word) Then
                    foundWord = False
                End If
            End If
        End If

        If Not foundWord Then
            'If we couldn't find a word, clear out the existing markers
            SynchronousUpdate(currentRequest, New NormalizedSnapshotSpanCollection(), Nothing)
            Exit Sub
        End If

        Dim currentWord__1 As SnapshotSpan = word.Span
        'If this is the current word, and the caret moved within a word, we're done.
        If CurrentWord.HasValue AndAlso currentWord__1 = CurrentWord Then
            Exit Sub
        End If

        'Find the new spans
        Dim findData As New FindData(currentWord__1.GetText(), currentWord__1.Snapshot)
        findData.FindOptions = FindOptions.WholeWord Or FindOptions.MatchCase

        wordSpans.AddRange(TextSearchService.FindAll(findData))

        'If another change hasn't happened, do a real update
        If currentRequest = RequestedPoint Then
            SynchronousUpdate(currentRequest, New NormalizedSnapshotSpanCollection(wordSpans), currentWord__1)
        End If
    End Sub
    Private Shared Function WordExtentIsValid(ByVal currentRequest As SnapshotPoint, ByVal word As TextExtent) As Boolean
        Return word.IsSignificant AndAlso currentRequest.Snapshot.GetText(word.Span).Any(Function(c) Char.IsLetter(c))
    End Function
    '</Snippet11>

    '<Snippet12>
    Private Sub SynchronousUpdate(ByVal currentRequest As SnapshotPoint, ByVal newSpans As NormalizedSnapshotSpanCollection, ByVal newCurrentWord As System.Nullable(Of SnapshotSpan))
        SyncLock updateLock
            If currentRequest <> RequestedPoint Then
                Exit Sub
            End If

            WordSpans = newSpans
            CurrentWord = newCurrentWord

            RaiseEvent TagsChanged(Me, New SnapshotSpanEventArgs(New SnapshotSpan(SourceBuffer.CurrentSnapshot, 0, SourceBuffer.CurrentSnapshot.Length)))
        End SyncLock
    End Sub
    '</Snippet12>

    '<Snippet13>
    Public Function GetTags(ByVal spans As NormalizedSnapshotSpanCollection) As IEnumerable(Of ITagSpan(Of HighlightWordTag)) Implements ITagger(Of HighlightWordTag).GetTags
        If CurrentWord Is Nothing Then
            Return Nothing
            Exit Function
        End If

        ' Hold on to a "snapshot" of the word spans and current word, so that we maintain the same
        ' collection throughout
        Dim currentWord__1 As SnapshotSpan = CurrentWord.Value
        Dim wordSpans__2 As NormalizedSnapshotSpanCollection = WordSpans

        If spans.Count = 0 OrElse WordSpans.Count = 0 Then
            Return Nothing
            Exit Function
        End If

        ' If the requested snapshot isn't the same as the one our words are on, translate our spans to the expected snapshot
        If spans(0).Snapshot IsNot wordSpans__2(0).Snapshot Then
            wordSpans__2 = New NormalizedSnapshotSpanCollection(wordSpans__2.[Select](Function(span) span.TranslateTo(spans(0).Snapshot, SpanTrackingMode.EdgeExclusive)))

            currentWord__1 = currentWord__1.TranslateTo(spans(0).Snapshot, SpanTrackingMode.EdgeExclusive)
        End If
        'in order to emulate the C# yield return functionality,
        'create a list and add all the relevant spans to it, then return the list
        Dim list As List(Of TagSpan(Of HighlightWordTag))
        list = New List(Of TagSpan(Of HighlightWordTag))()

        If spans.OverlapsWith(New NormalizedSnapshotSpanCollection(currentWord__1)) Then
            list.Add(New TagSpan(Of HighlightWordTag)(CurrentWord, New HighlightWordTag()))
        End If

        For Each span As SnapshotSpan In NormalizedSnapshotSpanCollection.Overlap(spans, wordSpans__2)
            list.Add(New TagSpan(Of HighlightWordTag)(span, New HighlightWordTag()))
        Next
        Return List
    End Function
    '</Snippet13>
End Class

'<Snippet14>
<Export(GetType(IViewTaggerProvider))>
<ContentType("text")>
<TagType(GetType(TextMarkerTag))>
Friend Class HighlightWordTaggerProvider
    Implements IViewTaggerProvider
    '</Snippet14>

    '<Snippet15>
    Private _TextSearchService As ITextSearchService
    <Import()> _
    Friend Property TextSearchService() As ITextSearchService
        Get
            Return _TextSearchService
        End Get
        Set(ByVal value As ITextSearchService)
            _TextSearchService = value
        End Set
    End Property

    Private _TextStructureNavigatorSelector As ITextStructureNavigatorSelectorService
    <Import()>
    Friend Property TextStructureNavigatorSelector() As ITextStructureNavigatorSelectorService
        Get
            Return _TextStructureNavigatorSelector
        End Get
        Set(ByVal value As ITextStructureNavigatorSelectorService)
            _TextStructureNavigatorSelector = value
        End Set
    End Property
    '</Snippet15>

    '<Snippet16>
    Public Function CreateTagger(Of T As ITag)(ByVal textView As ITextView, ByVal buffer As ITextBuffer) As ITagger(Of T) Implements IViewTaggerProvider.CreateTagger
        'provide highlighting only on the top buffer
        If textView.TextBuffer IsNot buffer Then
            Return Nothing
        End If

        Dim textStructureNavigator As ITextStructureNavigator = TextStructureNavigatorSelector.GetTextStructureNavigator(buffer)

        Return TryCast(New HighlightWordTagger(textView, buffer, TextSearchService, textStructureNavigator), ITagger(Of T))
    End Function
    '</Snippet16>
End Class
