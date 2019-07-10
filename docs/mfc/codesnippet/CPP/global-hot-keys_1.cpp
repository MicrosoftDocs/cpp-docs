WORD wKeyAndShift = static_cast<WORD>(m_HotKeyCtrl.GetHotKey());
this->SendMessage(WM_SETHOTKEY, wKeyAndShift);