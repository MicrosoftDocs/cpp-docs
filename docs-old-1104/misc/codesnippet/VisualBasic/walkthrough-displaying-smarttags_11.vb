    Public Sub Dispose() Implements IDisposable.Dispose
        Dispose(True)
        GC.SuppressFinalize(Me)
    End Sub

    Private Sub Dispose(ByVal disposing As Boolean)
        If disposing Then
            RemoveHandler m_view.LayoutChanged, AddressOf OnLayoutChanged
            m_view = Nothing
        End If

        m_disposed = True
    End Sub