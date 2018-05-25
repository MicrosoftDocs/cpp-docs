'<Snippet27>
Imports System
Imports System.Collections.Generic
Imports System.Windows.Media
Imports Microsoft.VisualStudio.Text
Imports Microsoft.VisualStudio.Text.Editor
Imports Microsoft.VisualStudio.Text.Formatting
'</Snippet27>

'<Snippet28>
Friend Class CommentAdornmentManager
    '</Snippet28>

    '<Snippet29>
    Private ReadOnly view As IWpfTextView
    Private ReadOnly layer As IAdornmentLayer
    Private ReadOnly provider As CommentAdornmentProvider
    '</Snippet29>

    '<Snippet30>
    Private Sub New(ByVal view As IWpfTextView)
        Me.view = view
        AddHandler Me.view.LayoutChanged, AddressOf OnLayoutChanged
        AddHandler Me.view.Closed, AddressOf OnClosed

        Me.layer = view.GetAdornmentLayer("CommentAdornmentLayer")

        Me.provider = CommentAdornmentProvider.Create(view)
        AddHandler Me.provider.CommentsChanged, AddressOf OnCommentsChanged
    End Sub
    '</Snippet30>

    '<Snippet31>
    Public Shared Function Create(ByVal view As IWpfTextView) As CommentAdornmentManager
        Return view.Properties.GetOrCreateSingletonProperty(Of CommentAdornmentManager)(Function() New CommentAdornmentManager(view))
    End Function
    '</Snippet31>

    '<Snippet32>
    Private Sub OnCommentsChanged(ByVal sender As Object, ByVal e As CommentsChangedEventArgs)
        'Remove the comment (when the adornment was added, the comment adornment was used as the tag).
        If e.CommentRemoved IsNot Nothing Then
            Me.layer.RemoveAdornmentsByTag(e.CommentRemoved)
        End If

        'Draw the newly added comment (this will appear immediately: the view does not need to do a layout).
        If e.CommentAdded IsNot Nothing Then
            Me.DrawComment(e.CommentAdded)
        End If
    End Sub
    '</Snippet32>

    '<Snippet33>
    Private Sub OnClosed(ByVal sender As Object, ByVal e As EventArgs)
        Me.provider.Detach()
        RemoveHandler Me.view.LayoutChanged, AddressOf OnLayoutChanged
        RemoveHandler Me.view.Closed, AddressOf OnClosed
    End Sub
    '</Snippet33>

    '<Snippet34>
    Private Sub OnLayoutChanged(ByVal sender As Object, ByVal e As TextViewLayoutChangedEventArgs)
        'Get all of the comments that intersect any of the new or reformatted lines of text.
        Dim newComments As New List(Of CommentAdornment)()

        'The event args contain a list of modified lines and a NormalizedSpanCollection of the spans of the modified lines. 
        'Use the latter to find the comments that intersect the new or reformatted lines of text.
        For Each span As Span In e.NewOrReformattedSpans
            newComments.AddRange(Me.provider.GetComments(New SnapshotSpan(Me.view.TextSnapshot, span)))
        Next span

        'It is possible to get duplicates in this list if a comment spanned 3 lines, and the first and last lines were modified but the middle line was not.
        'Sort the list and skip duplicates.
        newComments.Sort(Function(a As CommentAdornment, b As CommentAdornment) a.GetHashCode().CompareTo(b.GetHashCode()))

        Dim lastComment As CommentAdornment = Nothing
        For Each comment As CommentAdornment In newComments
            If comment IsNot lastComment Then
                lastComment = comment
                Me.DrawComment(comment)
            End If
        Next comment
    End Sub
    '</Snippet34>

    '<Snippet35>
    Private Sub DrawComment(ByVal comment As CommentAdornment)
        Dim span As SnapshotSpan = comment.Span.GetSpan(Me.view.TextSnapshot)
        Dim g As Geometry = Me.view.TextViewLines.GetMarkerGeometry(span)

        If g IsNot Nothing Then
            'Find the rightmost coordinate of all the lines that intersect the adornment.
            Dim maxRight As Double = 0.0
            For Each line As ITextViewLine In Me.view.TextViewLines.GetTextViewLinesIntersectingSpan(span)
                maxRight = Math.Max(maxRight, line.Right)
            Next line

            'Create the visualization.
            Dim block As New CommentBlock(maxRight, Me.view.ViewportRight, g, comment.Author, comment.Text)

            'Add it to the layer.
            Me.layer.AddAdornment(span, comment, block)
        End If
    End Sub
    '</Snippet35>
End Class