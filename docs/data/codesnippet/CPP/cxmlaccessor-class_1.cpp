void DoCXMLAccessorTest()
{
   HRESULT hr = CoInitialize(NULL);

   CDataSource ds;
   CSession ss;

   CTable<CXMLAccessor> rs;

   // The following is an example initialization string:
   hr = ds.OpenFromInitializationString(L"Provider=Microsoft.Jet.OLEDB.4.0;"
      L"User ID=Admin;Data Source=Snippet.mdb;Mode=Share Deny None;"
      L"Extended Properties=\"\";Jet OLEDB:System database=\"\";"
      L"Jet OLEDB:Registry Path=\"\";Jet OLEDB:Database Password=\"\";"
      L"Jet OLEDB:Engine Type=5;Jet OLEDB:Database Locking Mode=1;"
      L"Jet OLEDB:Global Partial Bulk Ops=2;Jet OLEDB:Global Bulk Transactions=1;"
      L"Jet OLEDB:New Database Password=\"\";Jet OLEDB:Create System Database=False;"
      L"Jet OLEDB:Encrypt Database=False;Jet OLEDB:Don't Copy Locale on Compact=False;"
      L"Jet OLEDB:Compact Without Replica Repair=False;Jet OLEDB:SFP=False");

   hr = ss.Open(ds);
   hr = rs.Open(ss, L"Customer"); // Customer is a table name in the database.

   CStringW strColumnInfo;
   rs.GetXMLColumnData(strColumnInfo);
   wprintf_s(L"%s\n", strColumnInfo);

   hr = rs.MoveFirst();
   while(SUCCEEDED(hr) && hr != DB_S_ENDOFROWSET)
   {
      CStringW strRowData;
      rs.GetXMLRowData(strRowData);
      wprintf_s(L"%s\n", strRowData);
      hr = rs.MoveNext();
   }

   ss.Close();
   ds.Close();
   CoUninitialize();
}