// OnColorClicked() is a member function of CColorPage (a
// CPropertyPage-derived class). It is called whenever a radio button
// is selected on the page. Call SetModified() to enable the Apply 
// button whenever a new selection is made. m_Color is a member
// variable of CColorPage and it is to store the selected RGB color.
// Its entry in the message map looks like this:
// ON_CONTROL_RANGE(BN_CLICKED, IDC_BLACK, IDC_GREEN, CColorPage::OnColorClicked)
void CColorPage::OnColorClicked(UINT nCmdID)
{
   COLORREF color = m_Color;
   switch (nCmdID)
   {
   case IDC_RADIOBLACK:
      color = RGB(0, 0, 0);
      m_radioColor = crBlack;
      break;

   case IDC_RADIORED:
      color = RGB(255, 0, 0);
      m_radioColor = crRed;
      break;

   case IDC_RADIOGREEN:
      color = RGB(0, 255, 0);
      m_radioColor = crGreen;
      break;

   case IDC_RADIOBLUE:
      color = RGB(0, 0, 255);
      m_radioColor = crBlue;
      break;
   }

   if (color != m_Color)
   {
      m_Color = color;
      SetModified();    // Enable Apply Now button.
   }

   UpdateData(FALSE);
}