// Given two member objects m_calCtrl1 and m_calCtrl2, we can
// create them in one of two ways.

// Providing a point has the control with its top-left corner
// at that point and sized automatically to show one month
// page.

CPoint pt(10, 10);
VERIFY(m_calCtrl1.Create(WS_TABSTOP | WS_CHILD | WS_VISIBLE |
                             WS_BORDER | MCS_DAYSTATE,
                         pt, this, IDC_MONTHCALCTRL1));

// Providing a rectangle lets us completely control the size.
// The control will paint as many complete month pages in the
// control's area as possible.

CRect rect(300, 100, 470, 200);
VERIFY(m_calCtrl2.Create(WS_TABSTOP | WS_CHILD | WS_VISIBLE |
                             WS_BORDER | MCS_MULTISELECT,
                         rect, this, IDC_MONTHCALCTRL2));