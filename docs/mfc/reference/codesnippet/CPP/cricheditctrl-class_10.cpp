// First obtain a pointer to a printer DC.
CPageSetupDialog psDlg;
if (IDOK == psDlg.DoModal())
{
   CDC *pMyPrinterDC = CDC::FromHandle(psDlg.CreatePrinterDC());

   FORMATRANGE fr;

   // Get the page width and height from the printer.
   long lPageWidth = ::MulDiv(pMyPrinterDC->GetDeviceCaps(PHYSICALWIDTH),
                              1440, pMyPrinterDC->GetDeviceCaps(LOGPIXELSX));
   long lPageHeight = ::MulDiv(pMyPrinterDC->GetDeviceCaps(PHYSICALHEIGHT),
                               1440, pMyPrinterDC->GetDeviceCaps(LOGPIXELSY));
   CRect rcPage(0, 0, lPageWidth, lPageHeight);

   // Format the text and render it to the printer.
   fr.hdc = pMyPrinterDC->m_hDC;
   fr.hdcTarget = pMyPrinterDC->m_hDC;
   fr.rc = rcPage;
   fr.rcPage = rcPage;
   fr.chrg.cpMin = 0;
   fr.chrg.cpMax = -1;
   m_myRichEditCtrl.FormatRange(&fr, TRUE);

   // Update the display with the new formatting.
   RECT rcClient;
   m_myRichEditCtrl.GetClientRect(&rcClient);
   m_myRichEditCtrl.DisplayBand(&rcClient);

   pMyPrinterDC->DeleteDC();
}