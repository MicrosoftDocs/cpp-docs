// m_dbCust is a CDatabase object embedded in a CDocument class.

// Connect the object to a read-only data source where
// the ODBC connection dialog box will always remain hidden
m_dbCust.OpenEx(_T("DSN=MFC_ODBCTest;UID=JOES"),
                CDatabase::openReadOnly | CDatabase::noOdbcDialog);