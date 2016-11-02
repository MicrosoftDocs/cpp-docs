    public IEnumerable<ITagSpan<TestSmartTag>> GetTags(NormalizedSnapshotSpanCollection spans)
    {
        ITextSnapshot snapshot = m_buffer.CurrentSnapshot;
        if (snapshot.Length == 0)
            yield break; //don't do anything if the buffer is empty

        //set up the navigator
        ITextStructureNavigator navigator = m_provider.NavigatorService.GetTextStructureNavigator(m_buffer);

        foreach (var span in spans)
        {
            ITextCaret caret = m_view.Caret;
            SnapshotPoint point;

            if (caret.Position.BufferPosition > 0)
                point = caret.Position.BufferPosition - 1;
            else
                yield break;

            TextExtent extent = navigator.GetExtentOfWord(point);
            //don't display the tag if the extent has whitespace
            if (extent.IsSignificant)
                yield return new TagSpan<TestSmartTag>(extent.Span, new TestSmartTag(GetSmartTagActions(extent.Span)));
            else yield break;
        }
    }