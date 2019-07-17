// This example move a combo box so that the upper left
// corner of the combo box is at a specific point.

// The point to move the combo box to.
CPoint myPoint(30, 10);

CRect r;

m_pComboBox->GetDroppedControlRect(&r);

m_pComboBox->GetParent()->ScreenToClient(&r);
r.OffsetRect(myPoint - r.TopLeft());
m_pComboBox->MoveWindow(&r);