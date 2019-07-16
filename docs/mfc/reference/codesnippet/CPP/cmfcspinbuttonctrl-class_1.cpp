CMFCSpinButtonCtrl *pWndSpin = new CMFCSpinButtonCtrl;
CRect rectSpin(1, 1, 10, 10);
CMFCPropertyGridCtrl *pWndList = new CMFCPropertyGridCtrl();
if (!pWndSpin->Create(WS_CHILD | WS_VISIBLE | UDS_ARROWKEYS | UDS_SETBUDDYINT | UDS_NOTHOUSANDS, rectSpin, pWndList, AFX_PROPLIST_ID_INPLACE))
{
   return 0;
}