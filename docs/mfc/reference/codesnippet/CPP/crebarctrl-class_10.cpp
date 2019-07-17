CReBarCtrl &refReBarCtrl = m_wndReBar.GetReBarCtrl();
UINT nCount = refReBarCtrl.GetBandCount();

for (UINT i = 0; i < nCount; i++)
   refReBarCtrl.RestoreBand(i);