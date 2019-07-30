// m_dbCust is a CDatabase object embedded in a CDocument class

if (bDefault)
{
   // Connect the object to a data source (no password)
   // the ODBC connection dialog box will always remain hidden
   m_dbCust.Open(_T("MFC_ODBCTest"), FALSE, FALSE, _T("ODBC;UID=JOES"));
}
else
{
   // ...Or, query the user for all connection information
   m_dbCust.Open(NULL);
}