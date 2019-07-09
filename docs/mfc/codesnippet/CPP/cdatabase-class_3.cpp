// Close the current connection
m_dbCust.Close();

// Perhaps connect the object to a
// different data source
m_dbCust.OpenEx(_T("DSN=MFC_ODBCTest;UID=JOES"));