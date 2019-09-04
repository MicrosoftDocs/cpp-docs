// Using m_hdbc for a direct ODBC API call.
// m_dbCust is the CDatabase object; m_hdbc is
// its HDBC member variable
nRetCode = ::SQLGetInfo(m_dbCust.m_hdbc, SQL_ODBC_SQL_CONFORMANCE,
                        &nValue, sizeof(nValue), &cbValue);