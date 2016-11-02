   // Declare a CPropertySheet object with a caption "Simple PropertySheet".
   CPropertySheet dlgPropertySheet(_T("Simple PropertySheet"));

   // Add three pages to the CPropertySheet object. CStylePage, CColorPage,
   // and CShapePage are CPropertyPage-derived classes created
   // by the Add Class wizard.
   CStylePage     stylePage;
   CColorPage     colorPage;
   CShapePage     shapePage;
   dlgPropertySheet.AddPage(&stylePage);
   dlgPropertySheet.AddPage(&colorPage);
   dlgPropertySheet.AddPage(&shapePage);

   // Change the caption of the CPropertySheet object 
   // from "Simple PropertySheet" to "Simple Properties".
   dlgPropertySheet.SetTitle(_T("Simple"), PSH_PROPTITLE);

   // Show the CPropertySheet object as MODAL.
   dlgPropertySheet.DoModal();