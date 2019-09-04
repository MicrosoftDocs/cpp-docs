void CDCView::DoStartDoc()
{
   // get the default printer
   CPrintDialog dlg(FALSE);
   dlg.GetDefaults();

   // is a default printer set up?
   HDC hdcPrinter = dlg.GetPrinterDC();
   if (hdcPrinter == NULL)
   {
      MessageBox(_T("Buy a printer!"));
   }
   else
   {
      // create a CDC and attach it to the default printer
      CDC dcPrinter;
      dcPrinter.Attach(hdcPrinter);

      // call StartDoc() to begin printing
      DOCINFO docinfo;
      memset(&docinfo, 0, sizeof(docinfo));
      docinfo.cbSize = sizeof(docinfo);
      docinfo.lpszDocName = _T("CDC::StartDoc() Code Fragment");

      // if it fails, complain and exit gracefully
      if (dcPrinter.StartDoc(&docinfo) < 0)
      {
         MessageBox(_T("Printer wouldn't initialize"));
      }
      else
      {
         // start a page
         if (dcPrinter.StartPage() < 0)
         {
            MessageBox(_T("Could not start page"));
            dcPrinter.AbortDoc();
         }
         else
         {
            // actually do some printing
            CGdiObject *pOldFont = dcPrinter.SelectStockObject(SYSTEM_FONT);

            dcPrinter.TextOut(50, 50, _T("Hello World!"), 12);

            dcPrinter.EndPage();
            dcPrinter.EndDoc();
            dcPrinter.SelectObject(pOldFont);
         }
      }
   }
}