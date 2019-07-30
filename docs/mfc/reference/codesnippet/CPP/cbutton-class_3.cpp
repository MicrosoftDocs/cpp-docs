// NOTE: CMyButton is a class derived from CButton. The CMyButton
// object was created as follows:
//
// CMyButton myButton;
// myButton.Create(_T("My button"),
//      WS_CHILD|WS_VISIBLE|BS_PUSHBUTTON|BS_OWNERDRAW,
//      CRect(10,10,100,30), pParentWnd, 1);
//

// This example implements the DrawItem method for a CButton-derived
// class that draws the button's text using the color red.
void CMyButton::DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct)
{
   UINT uStyle = DFCS_BUTTONPUSH;

   // This code only works with buttons.
   ASSERT(lpDrawItemStruct->CtlType == ODT_BUTTON);

   // If drawing selected, add the pushed style to DrawFrameControl.
   if (lpDrawItemStruct->itemState & ODS_SELECTED)
      uStyle |= DFCS_PUSHED;

   // Draw the button frame.
   ::DrawFrameControl(lpDrawItemStruct->hDC, &lpDrawItemStruct->rcItem,
                      DFC_BUTTON, uStyle);

   // Get the button's text.
   CString strText;
   GetWindowText(strText);

   // Draw the button text using the text color red.
   COLORREF crOldColor = ::SetTextColor(lpDrawItemStruct->hDC, RGB(255, 0, 0));
   ::DrawText(lpDrawItemStruct->hDC, strText, strText.GetLength(),
              &lpDrawItemStruct->rcItem, DT_SINGLELINE | DT_VCENTER | DT_CENTER);
   ::SetTextColor(lpDrawItemStruct->hDC, crOldColor);
}