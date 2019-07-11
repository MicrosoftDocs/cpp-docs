// Display the Windows Print dialog box with "Pages" radio button
// initially selected. "All" and "Pages" radio buttons are
// enabled as well.
CPrintDialog dlg(FALSE, PD_PAGENUMS | PD_USEDEVMODECOPIES);
dlg.m_pd.nMinPage = dlg.m_pd.nFromPage = 1;
dlg.m_pd.nMaxPage = dlg.m_pd.nToPage = 10;
if (dlg.DoModal() == IDOK)
{
   // Determine the starting and ending page numbers for the range 
   // of pages to be printed.

   int from_page = -1, to_page = -1;
   if (dlg.PrintAll())              // print all pages in the document
   {
      from_page = dlg.m_pd.nMinPage;
      to_page = dlg.m_pd.nMaxPage;
   }
   else if (dlg.PrintRange())       // print only a range of pages 
   {                                // in the document 
      from_page = dlg.GetFromPage();
      to_page = dlg.GetToPage();
   }
   else if (dlg.PrintSelection())   // print only the currently selected 
                                    // items
   {
      from_page = to_page = -1;     // -1 to denote unknown yet
   }

   TRACE(_T("Print from %d to %d\n"), from_page, to_page);
}