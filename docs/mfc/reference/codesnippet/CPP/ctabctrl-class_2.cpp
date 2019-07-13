// Assuming you have a member variable m_TabCtrl, that is a CTabCtrl
// object, you can use the following to create a tab control.

m_TabCtrl.Create(TCS_TABS | TCS_FIXEDWIDTH | WS_CHILD | WS_VISIBLE,
                 rect, this, IDC_MYTAB);

// This creates a tab control with the given styles, and with
// an ID of IDC_MYTAB.