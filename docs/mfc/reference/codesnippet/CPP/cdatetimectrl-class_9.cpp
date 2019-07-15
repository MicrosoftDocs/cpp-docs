// Add extra initialization here

// Associate a menu with the splitbutton control.
m_splitbutton.SetDropDownMenu(IDR_MENU1, 0);

// Resize the date-time picker control.
SIZE sz;
m_dateTimeCtrl.GetIdealSize(&sz);
if ((sz.cx != 0) && (sz.cy != 0))
{
   m_dateTimeCtrl.SetWindowPos(
       this,
       0, 0, sz.cx, sz.cy,
       (SWP_NOMOVE | SWP_NOZORDER | SWP_NOREPOSITION | SWP_NOACTIVATE));
}

// End of extra initialization