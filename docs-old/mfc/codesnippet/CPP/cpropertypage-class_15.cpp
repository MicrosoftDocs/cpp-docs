   // This is an example of trapping the PSM_QUERYSIBLINGS in one of
   // the pages. CColorPage is a CPropertyPage-derived class.  Upon 
   // receiving this message, wParam contains the value passed to 
   // QuerySiblings() call. CColorPage will check this value and return
   // FALSE only if the value is greater than 1.
   ON_MESSAGE(PSM_QUERYSIBLINGS, &CColorPage::OnQuerySiblings)