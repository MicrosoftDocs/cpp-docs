   CPrintDialog dlg(FALSE);
   CPrintDialog dlg(FALSE);
   if (dlg.DoModal() == IDOK)
   {
      // Get a handle to the printer device context (DC).
      HDC hdc = dlg.GetPrinterDC();
      ASSERT(hdc);

      // Do something with the HDC...

      // Clean up.
      CDC::FromHandle(hdc)->DeleteDC();
   }