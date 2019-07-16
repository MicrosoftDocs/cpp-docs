// First obtain a pointer to a printer DC.
CPageSetupDialog psDlg;
if (IDOK == psDlg.DoModal())
{
   CDC *pMyPrinterDC = CDC::FromHandle(psDlg.CreatePrinterDC());

   // Get line width information from the printer.
   long lLineWidth = ::MulDiv(pMyPrinterDC->GetDeviceCaps(PHYSICALWIDTH),
                              1440, pMyPrinterDC->GetDeviceCaps(LOGPIXELSX));

   // Set the printer as the target device.
   m_myRichEditCtrl.SetTargetDevice(*pMyPrinterDC, lLineWidth);

   pMyPrinterDC->DeleteDC();
}