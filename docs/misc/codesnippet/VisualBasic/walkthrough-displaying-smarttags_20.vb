    Public Sub Invoke() Implements ISmartTagAction.Invoke
        m_span.TextBuffer.Replace(m_span.GetSpan(m_snapshot), m_upper)
    End Sub