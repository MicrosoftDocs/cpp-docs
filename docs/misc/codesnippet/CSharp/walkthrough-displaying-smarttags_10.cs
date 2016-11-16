    private void OnLayoutChanged(object sender, TextViewLayoutChangedEventArgs e)
    {
        ITextSnapshot snapshot = e.NewSnapshot;
        //don't do anything if this is just a change in case
        if (!snapshot.GetText().ToLower().Equals(e.OldSnapshot.GetText().ToLower()))
        {
            SnapshotSpan span = new SnapshotSpan(snapshot, new Span(0, snapshot.Length));
            EventHandler<SnapshotSpanEventArgs> handler = this.TagsChanged;
            if (handler != null)
            {
                handler(this, new SnapshotSpanEventArgs(span));
            }
        }
    }