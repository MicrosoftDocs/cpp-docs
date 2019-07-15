UINT nCount = m_wndReBar.GetReBarCtrl().GetBandCount();

if (nCount > 0)
   m_wndReBar.GetReBarCtrl().DeleteBand(nCount - 1);