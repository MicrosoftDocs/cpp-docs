    public void Dispose()
    {
        Dispose(true);
        GC.SuppressFinalize(this);
    }

    private void Dispose(bool disposing)
    {
        if (!this.m_disposed)
        {
            if (disposing)
            {
                m_view.LayoutChanged -= OnLayoutChanged;
                m_view = null;
            }

            m_disposed = true;
        }
    }