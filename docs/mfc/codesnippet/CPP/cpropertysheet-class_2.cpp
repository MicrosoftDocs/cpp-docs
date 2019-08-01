const int c_cSheets = 3;
CPropertySheet   grpropsheet[c_cSheets];
// no need to call Construct for this next one
CPropertySheet   someSheet(_T("Some sheet"));

LPTSTR rgszSheets[c_cSheets] = {
   _T("Sheet 1"),
   _T("Sheet 2"),
   _T("Sheet 3")
};

for (int i = 0; i < c_cSheets; i++)
   grpropsheet[i].Construct(rgszSheets[i]);