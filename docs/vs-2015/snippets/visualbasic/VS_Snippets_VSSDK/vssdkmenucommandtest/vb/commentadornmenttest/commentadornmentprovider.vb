'<Snippet15>
Imports System
Imports System.Collections.Generic
Imports System.Collections.ObjectModel
Imports Microsoft.VisualStudio.Text
Imports Microsoft.VisualStudio.Text.Editor
'</Snippet15>

'<Snippet16>
Friend Class CommentAdornmentProvider
    '</Snippet16>

    '<Snippet17>
    Private buffer As ITextBuffer
    Private comments As IList(Of CommentAdornment) = New List(Of CommentAdornment)()
    '</Snippet17>

    '<Snippet18>
    Private Sub New(ByVal buffer As ITextBuffer)
        Me.buffer = buffer
        'listen to the Changed event so we can react to deletions.
        AddHandler Me.buffer.Changed, AddressOf OnBufferChanged
    End Sub
    '</Snippet18>

    '<Snippet19>
    Public Shared Function Create(ByVal view As IWpfTextView) As CommentAdornmentProvider
        Return view.Properties.GetOrCreateSingletonProperty(Of CommentAdornmentProvider)(Function() New CommentAdornmentProvider(view.TextBuffer))
    End Function
    '</Snippet19>

    '<Snippet20>
    Public Sub Detach()
        If Me.buffer IsNot Nothing Then
            'remove the Changed listener
            RemoveHandler Me.buffer.Changed, AddressOf OnBufferChanged
            Me.buffer = Nothing
        End If
    End Sub
    '</Snippet20>

    '<Snippet21>
    Private Sub OnBufferChanged(ByVal sender As Object, ByVal e As TextContentChangedEventArgs)
        'Make a list of all comments that have a span of at least one character after applying the change. There is no need to raise a changed event for the deleted adornments. The adornments are deleted only if a text change would cause the view to reformat the line and discard the adornments.
        Dim keptComments As IList(Of CommentAdornment) = New List(Of CommentAdornment)(Me.comments.Count)

        For Each comment As CommentAdornment In Me.comments
            Dim span As Span = comment.Span.GetSpan(e.After)
            'if a comment does not span at least one character, its text was deleted.
            If span.Length <> 0 Then
                keptComments.Add(comment)
            End If
        Next comment

        Me.comments = keptComments
    End Sub
    '</Snippet21>

    '<Snippet22>
    Public Event CommentsChanged As EventHandler(Of CommentsChangedEventArgs)
    '</Snippet22>

    '<Snippet23>
    Public Sub Add(ByVal span As SnapshotSpan, ByVal author As String, ByVal text As String)
        If span.Length = 0 Then
            Throw New ArgumentOutOfRangeException("span")
        End If
        If author Is Nothing Then
            Throw New ArgumentNullException("author")
        End If
        If text Is Nothing Then
            Throw New ArgumentNullException("text")
        End If

        'Create a comment adornment given the span, author and text.
        Dim comment As New CommentAdornment(span, author, text)

        'Add it to the list of comments.
        Me.comments.Add(comment)

        'Raise the changed event.
        Dim commentsChanged As EventHandler(Of CommentsChangedEventArgs) = Me.CommentsChangedEvent
        If CommentsChangedEvent IsNot Nothing Then
            CommentsChangedEvent(Me, New CommentsChangedEventArgs(comment, Nothing))
        End If
    End Sub
    '</Snippet23>

    '<Snippet24>
    Public Sub RemoveComments(ByVal span As SnapshotSpan)
        Dim commentsChanged As EventHandler(Of CommentsChangedEventArgs) = Me.CommentsChangedEvent

        'Get a list of all the comments that are being kept 
        Dim keptComments As IList(Of CommentAdornment) = New List(Of CommentAdornment)(Me.comments.Count)

        For Each comment As CommentAdornment In Me.comments
            'find out if the given span overlaps with the comment text span. If two spans are adjacent, they do not overlap. To consider adjacent spans, use IntersectsWith.
            If comment.Span.GetSpan(span.Snapshot).OverlapsWith(span) Then
                'Raise the change event to delete this comment.
                If CommentsChangedEvent IsNot Nothing Then
                    CommentsChangedEvent(Me, New CommentsChangedEventArgs(Nothing, comment))
                End If
            Else
                keptComments.Add(comment)
            End If
        Next comment

        Me.comments = keptComments
    End Sub
    '</Snippet24>

    '<Snippet25>
    Public Function GetComments(ByVal span As SnapshotSpan) As Collection(Of CommentAdornment)
        Dim overlappingComments As IList(Of CommentAdornment) = New List(Of CommentAdornment)()
        For Each comment As CommentAdornment In Me.comments
            If comment.Span.GetSpan(span.Snapshot).OverlapsWith(span) Then
                overlappingComments.Add(comment)
            End If
        Next comment

        Return New Collection(Of CommentAdornment)(overlappingComments)
    End Function
    '</Snippet25>
End Class

'<Snippet26>
Friend Class CommentsChangedEventArgs
    Inherits EventArgs
    Public ReadOnly CommentAdded As CommentAdornment
    Public ReadOnly CommentRemoved As CommentAdornment

    Public Sub New(ByVal added As CommentAdornment, ByVal removed As CommentAdornment)
        Me.CommentAdded = added
        Me.CommentRemoved = removed
    End Sub
End Class
'</Snippet26>