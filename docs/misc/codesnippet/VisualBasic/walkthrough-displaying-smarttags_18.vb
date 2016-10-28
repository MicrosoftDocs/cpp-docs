    Public Sub New(ByVal span As ITrackingSpan)
        m_span = span
        m_snapshot = span.TextBuffer.CurrentSnapshot
        m_upper = span.GetText(m_snapshot).ToUpper()
        m_display = "Convert to upper case"
    End Sub