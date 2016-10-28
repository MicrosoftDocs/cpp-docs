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