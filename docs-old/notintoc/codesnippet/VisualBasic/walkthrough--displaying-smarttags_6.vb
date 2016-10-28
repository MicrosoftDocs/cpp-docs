    Public Sub New(ByVal buffer As ITextBuffer, ByVal view As ITextView, ByVal provider As TestSmartTaggerProvider)
        m_buffer = buffer
        m_view = view
        m_provider = provider
        AddHandler m_view.LayoutChanged, AddressOf OnLayoutChanged
    End Sub