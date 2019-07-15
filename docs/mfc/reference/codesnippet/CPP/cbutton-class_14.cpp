// Double the size of the split button drop-down arrow.
SIZE sz;
bRC = m_splitButton.GetSplitSize(&sz); // current size
sz.cx = sz.cx * 2;
sz.cy = sz.cy * 2;
bRC = m_splitButton.SetSplitSize(&sz);