    public TestSmartTagger(ITextBuffer buffer, ITextView view, TestSmartTaggerProvider provider)
    {
        m_buffer = buffer;
        m_view = view;
        m_provider = provider;
        m_view.LayoutChanged += OnLayoutChanged;
    }