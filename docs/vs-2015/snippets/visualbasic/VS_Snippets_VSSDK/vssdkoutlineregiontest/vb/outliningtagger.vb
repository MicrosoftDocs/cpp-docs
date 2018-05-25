'<Snippet1>
Imports System
Imports System.Collections.Generic
Imports System.Linq
Imports System.Text
Imports System.ComponentModel.Composition
Imports Microsoft.VisualStudio.Text.Outlining
Imports Microsoft.VisualStudio.Text.Tagging
Imports Microsoft.VisualStudio.Utilities
Imports Microsoft.VisualStudio.Text
'</Snippet1>

'<Snippet2>
Friend NotInheritable Class OutliningTagger
    Implements ITagger(Of IOutliningRegionTag)
    '</Snippet2>

    '<Snippet3>
    'the characters that start the outlining region
    Private startHide As String = "["
    'the characters that end the outlining region
    Private endHide As String = "]"
    'the characters that are displayed when the region is collapsed
    Private ellipsis As String = "..."
    'the contents of the tooltip for the collapsed span
    Private hoverText As String = "hover text"
    Private buffer As ITextBuffer
    Private snapshot As ITextSnapshot
    Private regions As List(Of Region)
    '</Snippet3>

    '<Snippet4>
    Public Sub New(ByVal buffer As ITextBuffer)
        Me.buffer = buffer
        Me.snapshot = buffer.CurrentSnapshot
        Me.regions = New List(Of Region)()
        Me.ReParse()
        AddHandler Me.buffer.Changed, AddressOf BufferChanged
    End Sub
    '</Snippet4>

    '<Snippet5>
    Public Function GetTags(ByVal spans As NormalizedSnapshotSpanCollection) As IEnumerable(Of ITagSpan(Of IOutliningRegionTag)) Implements ITagger(Of Microsoft.VisualStudio.Text.Tagging.IOutliningRegionTag).GetTags
        If spans.Count = 0 Then
            Return Nothing
            Exit Function
        End If
        Dim currentRegions As List(Of Region) = Me.regions
        Dim currentSnapshot As ITextSnapshot = Me.snapshot
        Dim entire As SnapshotSpan = New SnapshotSpan(spans(0).Start, spans(spans.Count - 1).[End]).TranslateTo(currentSnapshot, SpanTrackingMode.EdgeExclusive)
        Dim startLineNumber As Integer = entire.Start.GetContainingLine().LineNumber
        Dim endLineNumber As Integer = entire.[End].GetContainingLine().LineNumber

        Dim list As List(Of ITagSpan(Of IOutliningRegionTag))
        list = New List(Of ITagSpan(Of IOutliningRegionTag))()

        For Each region In currentRegions
            If region.StartLine <= endLineNumber AndAlso region.EndLine >= startLineNumber Then
                Dim startLine = currentSnapshot.GetLineFromLineNumber(region.StartLine)
                Dim endLine = currentSnapshot.GetLineFromLineNumber(region.EndLine)

                'the region starts at the beginning of the "[", and goes until the *end* of the line that contains the "]".
                list.Add(New TagSpan(Of IOutliningRegionTag)(New SnapshotSpan(startLine.Start + region.StartOffset, endLine.End),
                New OutliningRegionTag(False, False, ellipsis, hoverText)))
            End If
        Next
        Return list
    End Function
    '</Snippet5>

    '<Snippet6>
    Public Event TagsChanged As EventHandler(Of SnapshotSpanEventArgs) Implements ITagger(Of IOutliningRegionTag).TagsChanged
    '</Snippet6>

    '<Snippet7>
    Private Sub BufferChanged(ByVal sender As Object, ByVal e As TextContentChangedEventArgs)
        ' If this isn't the most up-to-date version of the buffer, then ignore it for now (we'll eventually get another change event).
        If e.After IsNot buffer.CurrentSnapshot Then
            Exit Sub
        End If
        Me.ReParse()
    End Sub
    '</Snippet7>

    '<Snippet8>
    Private Sub ReParse()
        Dim newSnapshot As ITextSnapshot = buffer.CurrentSnapshot
        Dim newRegions As New List(Of Region)()

        'keep the current (deepest) partial region, which will have
        ' references to any parent partial regions.
        Dim currentRegion As PartialRegion = Nothing

        For Each line In newSnapshot.Lines
            Dim regionStart As Integer = -1
            Dim text As String = line.GetText()

            'lines that contain a "[" denote the start of a new region.
            If text.IndexOf(startHide, StringComparison.Ordinal) <> -1 Then
                regionStart = text.IndexOf(startHide, StringComparison.Ordinal)
                Dim currentLevel As Integer = If((currentRegion IsNot Nothing), currentRegion.Level, 1)
                Dim newLevel As Integer
                If Not TryGetLevel(text, regionStart, newLevel) Then
                    newLevel = currentLevel + 1
                End If

                'levels are the same and we have an existing region;
                'end the current region and start the next
                If currentLevel = newLevel AndAlso currentRegion IsNot Nothing Then
                    Dim newRegion = New Region()
                    newRegion.Level = currentRegion.Level
                    newRegion.StartLine = currentRegion.StartLine
                    newRegion.StartOffset = currentRegion.StartOffset
                    newRegion.EndLine = line.LineNumber
                    newRegions.Add(newRegion)

                    currentRegion = New PartialRegion()
                    currentRegion.Level = newLevel
                    currentRegion.StartLine = line.LineNumber
                    currentRegion.StartOffset = regionStart
                    currentRegion.PartialParent = currentRegion.PartialParent

                Else
                    'this is a new (sub)region
                    currentRegion = New PartialRegion()
                    currentRegion.Level = newLevel
                    currentRegion.StartLine = line.LineNumber
                    currentRegion.StartOffset = regionStart
                    currentRegion.PartialParent = currentRegion
                End If
                'lines that contain "]" denote the end of a region
            ElseIf (text.IndexOf(endHide, StringComparison.Ordinal)) <> -1 Then
                regionStart = text.IndexOf(endHide, StringComparison.Ordinal)
                Dim currentLevel As Integer = If((currentRegion IsNot Nothing), currentRegion.Level, 1)
                Dim closingLevel As Integer
                If Not TryGetLevel(text, regionStart, closingLevel) Then
                    closingLevel = currentLevel
                End If

                'the regions match
                If currentRegion IsNot Nothing AndAlso currentLevel = closingLevel Then
                    Dim newRegion As Region
                    newRegion = New Region()
                    newRegion.Level = currentLevel
                    newRegion.StartLine = currentRegion.StartLine
                    newRegion.StartOffset = currentRegion.StartOffset
                    newRegion.EndLine = line.LineNumber
                    newRegions.Add(newRegion)

                    currentRegion = currentRegion.PartialParent
                End If
            End If
        Next
        'determine the changed span, and send a changed event with the new spans
        Dim oldSpans As New List(Of Span)(Me.regions.[Select](Function(r) AsSnapshotSpan(r, Me.snapshot).TranslateTo(newSnapshot, SpanTrackingMode.EdgeExclusive).Span))
        Dim newSpans As New List(Of Span)(newRegions.[Select](Function(r) AsSnapshotSpan(r, newSnapshot).Span))

        Dim oldSpanCollection As New NormalizedSpanCollection(oldSpans)
        Dim newSpanCollection As New NormalizedSpanCollection(newSpans)

        'the changed regions are regions that appear in one set or the other, but not both.
        Dim removed As NormalizedSpanCollection = NormalizedSpanCollection.Difference(oldSpanCollection, newSpanCollection)

        Dim changeStart As Integer = Integer.MaxValue
        Dim changeEnd As Integer = -1

        If removed.Count > 0 Then
            changeStart = removed(0).Start
            changeEnd = removed(removed.Count - 1).[End]
        End If

        If newSpans.Count > 0 Then
            changeStart = Math.Min(changeStart, newSpans(0).Start)
            changeEnd = Math.Max(changeEnd, newSpans(newSpans.Count - 1).[End])
        End If

        Me.snapshot = newSnapshot
        Me.regions = newRegions

        If changeStart <= changeEnd Then
            Dim snap As ITextSnapshot = Me.snapshot
            RaiseEvent TagsChanged(Me, New SnapshotSpanEventArgs(New SnapshotSpan(Me.snapshot, Span.FromBounds(changeStart, changeEnd))))
        End If
    End Sub
    '</Snippet8>

    '<Snippet9>
    Private Shared Function TryGetLevel(ByVal text As String, ByVal startIndex As Integer, ByRef level As Integer) As Boolean
        level = -1
        If text.Length > startIndex + 3 Then
            If Integer.TryParse(text.Substring(startIndex + 1), level) Then
                Return True
            End If
        End If

        Return False
    End Function
    '</Snippet9>

    '<Snippet10>
    Private Shared Function AsSnapshotSpan(ByVal region As Region, ByVal snapshot As ITextSnapshot) As SnapshotSpan
        Dim startLine = snapshot.GetLineFromLineNumber(region.StartLine)
        Dim endLine = If((region.StartLine = region.EndLine), startLine, snapshot.GetLineFromLineNumber(region.EndLine))
        Return New SnapshotSpan(startLine.Start + region.StartOffset, endLine.[End])
    End Function
    '</Snippet10>

    '<Snippet11>
    Private Class PartialRegion
        Private _StartLine As Integer
        Public Property StartLine() As Integer
            Get
                Return _StartLine
            End Get
            Set(ByVal value As Integer)
                _StartLine = value
            End Set
        End Property
        Private _StartOffset As Integer
        Public Property StartOffset() As Integer
            Get
                Return _StartOffset
            End Get
            Set(ByVal value As Integer)
                _StartOffset = value
            End Set
        End Property
        Private _Level As Integer
        Public Property Level() As Integer
            Get
                Return _Level
            End Get
            Set(ByVal value As Integer)
                _Level = value
            End Set
        End Property
        Private _PartialParent As PartialRegion
        Public Property PartialParent() As PartialRegion
            Get
                Return _PartialParent
            End Get
            Set(ByVal value As PartialRegion)
                _PartialParent = value
            End Set
        End Property
    End Class

    Private Class Region
        Inherits PartialRegion
        Private _EndLine As Integer
        Public Property EndLine() As Integer
            Get
                Return _EndLine
            End Get
            Set(ByVal value As Integer)
                _EndLine = value
            End Set
        End Property
    End Class
    '</Snippet11>
End Class

'<Snippet12>
<Export(GetType(ITaggerProvider))> _
<TagType(GetType(IOutliningRegionTag))> _
<ContentType("text")> _
Friend NotInheritable Class OutliningTaggerProvider
    Implements ITaggerProvider
    '</Snippet12>

    '<Snippet13>
    Public Function CreateTagger(Of T As ITag)(ByVal buffer As ITextBuffer) As ITagger(Of T) Implements ITaggerProvider.CreateTagger
        'create a single tagger for each buffer.
        Dim sc As Func(Of ITagger(Of T)) = Function() TryCast(New OutliningTagger(buffer), ITagger(Of T))
        Return buffer.Properties.GetOrCreateSingletonProperty(Of ITagger(Of T))(sc)
    End Function
    '</Snippet13>
End Class
