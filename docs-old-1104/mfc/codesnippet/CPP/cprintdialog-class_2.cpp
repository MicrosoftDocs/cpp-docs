   // Display the Windows Print dialog box with "All" radio button 
   // initially selected. All other radio buttons are disabled.
   CPrintDialog dlg(FALSE);
   if (dlg.DoModal() == IDOK)
   {
      // Create a printer device context (DC) based on the information
      // selected from the Print dialog.
      HDC hdc = dlg.CreatePrinterDC();
      ASSERT(hdc);
   }