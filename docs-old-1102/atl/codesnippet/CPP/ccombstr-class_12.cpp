   CComBSTR bstrTemp;

   // IDS_PROJNAME proj name stored as resource in string table
   bstrTemp.LoadString(IDS_PROJNAME);

   // the above is equivalent to:
   // bstrTemp.LoadString(_Module.m_hInstResource, IDS_PROJNAME);

   // display message box w/ proj name as title & text
   ::MessageBox(NULL, CW2CT(bstrTemp), CW2CT(bstrTemp), MB_OK);   