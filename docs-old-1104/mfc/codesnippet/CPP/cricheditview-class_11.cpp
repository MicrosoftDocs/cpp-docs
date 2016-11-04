BOOL CMyRichEditView::OnPreparePrinting(CPrintInfo* pInfo)
{
   // Set the printing margins (720 twips = 1/2 inch).
   SetMargins(CRect(720, 720, 720, 720));

   // Change the paper orientation to landscape mode
   // See the example for CWinApp::GetPrinterDeviceDefaults
   ((CMyWinApp*)AfxGetApp())->SetLandscapeMode();

   // Change the paper size in the CRichEditView to 
   // reflect landscape mode
   CSize csPaper = GetPaperSize();
   int temp;
   temp = csPaper.cx; csPaper.cx = csPaper.cy; csPaper.cy = temp;
   SetPaperSize(csPaper);

   return DoPreparePrinting(pInfo);
}