void CMyRichEditView::OnPageSetupDlg()
{
   CPageSetupDialog psd(PSD_INTHOUSANDTHSOFINCHES | PSD_MARGINS |
      PSD_ENABLEPAGEPAINTHOOK, this);

   // Initialize margins
   psd.m_psd.rtMargin.top = 1000;
   psd.m_psd.rtMargin.left = 1250;
   psd.m_psd.rtMargin.right = 1250;
   psd.m_psd.rtMargin.bottom = 1000;
   psd.m_psd.lpfnPagePaintHook = (LPPAGEPAINTHOOK)PaintHook;

   if (IDOK == psd.DoModal())
   {
      // Propagate changes to the app
      AfxGetApp()->SelectPrinter(psd.m_psd.hDevNames, psd.m_psd.hDevMode);
   }
   else
   {
      TRACE(_T("CommDlgExtendedError returned error %d from ")
         _T("CPageSetupDialog::DoModal().\n"),
         (int)CommDlgExtendedError());
   }
}