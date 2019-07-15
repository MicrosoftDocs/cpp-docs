// change text color to white and background to dark blue
m_TreeCtrl.SetTextColor(RGB(255, 255, 255));
ASSERT(m_TreeCtrl.GetTextColor() == RGB(255, 255, 255));
m_TreeCtrl.SetBkColor(RGB(0, 0, 128));
ASSERT(m_TreeCtrl.GetBkColor() == RGB(0, 0, 128));

// force repaint immediately
m_TreeCtrl.Invalidate();