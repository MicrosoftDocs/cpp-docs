// Add three pages to a CPropertySheet object, then show the 
// CPropertySheet object as a modal dialog.  CStylePage, CShapePage,  
// and CColorPage are CPropertyPage-derived classes created 
// by the Add Class wizard.  

CPropertySheet dlgPropertySheet(_T("Simple PropertySheet"));

CStylePage     stylePage;
CColorPage     colorPage;
CShapePage     shapePage;
dlgPropertySheet.AddPage(&stylePage);
dlgPropertySheet.AddPage(&colorPage);
dlgPropertySheet.AddPage(&shapePage);

dlgPropertySheet.DoModal();