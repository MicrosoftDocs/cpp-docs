// Declare a CPropertySheet object titled "Simple PropertySheet".
CPropertySheet dlgPropertySheet1(_T("Simple PropertySheet"));

// Declare a CPropertySheet object whose title is specified in the
// IDS_PROPERTYSHEET_TITLE string resource, and the second page is
// initially on top.  
CPropertySheet dlgPropertySheet2(IDS_PROPERTYSHEET_TITLE, this, 1);