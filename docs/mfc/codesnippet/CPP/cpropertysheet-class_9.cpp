// This code fragment shows how to change CPropertySheet's settings 
// before it is shown.  After the changes, CPropertySheet has the 
// caption "Simple Properties", no "Apply" button, and the 
// second page (CColorPage) initially on top.  

CPropertySheet dlgPropertySheet(_T("Simple PropertySheet"));

CStylePage stylePage;
CColorPage colorPage;
CShapePage shapePage;
dlgPropertySheet.AddPage(&stylePage);
dlgPropertySheet.AddPage(&colorPage);
dlgPropertySheet.AddPage(&shapePage);

dlgPropertySheet.m_psh.dwFlags |= PSH_NOAPPLYNOW | PSH_PROPTITLE;
dlgPropertySheet.m_psh.pszCaption = _T("Simple");
dlgPropertySheet.m_psh.nStartPage = 1;

dlgPropertySheet.DoModal();