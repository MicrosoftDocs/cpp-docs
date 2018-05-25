'<Snippet1>
Imports Microsoft.VisualStudio.Text
'</Snippet1>

'<Snippet2>
Friend Class CommentAdornment
    '</Snippet2>

    '<Snippet3>
    Public ReadOnly Span As ITrackingSpan
    Public ReadOnly Author As String
    Public ReadOnly Text As String
    '</Snippet3>

    '<Snippet4>
    Public Sub New(ByVal span As SnapshotSpan, ByVal author As String, ByVal text As String)
        Me.Span = span.Snapshot.CreateTrackingSpan(span, SpanTrackingMode.EdgeExclusive)
        Me.Author = author
        Me.Text = text
    End Sub
    '</Snippet4>
End Class