    public ITagger<T> CreateTagger<T>(ITextView textView, ITextBuffer buffer) where T : ITag
    {
        if (buffer == null || textView == null)
        {
            return null;
        }

        //make sure we are tagging only the top buffer
        if (buffer == textView.TextBuffer)
        {
            return new TestSmartTagger(buffer, textView, this) as ITagger<T>;
        }
        else return null;
    }