void CMyDialog::OnDtnFormatqueryDatetimepicker1(NMHDR *pNMHDR, LRESULT *pResult)
{
   LPNMDATETIMEFORMATQUERY pDTFormatQuery =
       reinterpret_cast<LPNMDATETIMEFORMATQUERY>(pNMHDR);
   CDC *pDC = NULL;
   CFont *pFont = NULL;
   CFont *pOrigFont = NULL;

   //  Prepare the device context for the GetTextExtentPoint32 call.
   pDC = GetDC();
   if (NULL == pDC)
   {
      return;
   }

   pFont = GetFont();
   if (NULL == pFont)
   {
      pFont = new CFont();
      VERIFY(pFont->CreateStockObject(DEFAULT_GUI_FONT));
   }

   pOrigFont = pDC->SelectObject(pFont);

   // Check to see if this is the callback segment desired. If so,
   // use the longest text segment to determine the maximum
   // width of the callback field, and then place the information into
   // the NMDATETIMEFORMATQUERY structure.
   if (!_tcscmp(_T("X"), pDTFormatQuery->pszFormat))
   {
      ::GetTextExtentPoint32(pDC->m_hDC, _T("366"), 3, &pDTFormatQuery->szMax);
   }

   // Reset the font in the device context then release the context.
   pDC->SelectObject(pOrigFont);
   ReleaseDC(pDC);

   *pResult = 0;
}