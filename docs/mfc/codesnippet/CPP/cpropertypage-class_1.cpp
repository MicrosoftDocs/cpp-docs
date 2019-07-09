// Declare a CPropertySheet object.
CPropertySheet sheet(_T("Simple PropertySheet"));

// Create three CPropertyPage objects whose template IDs are specified
// in rgID array, and add each page to the CPropertySheet object. 
const int c_cPages = 3;
CPropertyPage   pages[c_cPages];
UINT rgID[c_cPages] = { IDD_STYLE, IDD_COLOR, IDD_SHAPE };
for (int i = 0; i < c_cPages; i++)
{
   pages[i].Construct(rgID[i]);
   sheet.AddPage(&pages[i]);
}

// Display a modal CPropertySheet dialog.
sheet.DoModal();