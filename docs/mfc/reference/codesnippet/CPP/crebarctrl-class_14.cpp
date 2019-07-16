REBARINFO rbi = {0};
rbi.cbSize = sizeof(REBARINFO);
rbi.fMask = 0;
rbi.himl = 0;
m_wndReBar.GetReBarCtrl().SetBarInfo(&rbi);