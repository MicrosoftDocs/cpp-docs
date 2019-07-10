nRetCode = ::SQLGetInfo(m_dbCust.m_hdbc, SQL_ODBC_SQL_CONFORMANCE,
   &nValue, sizeof(nValue), &cbValue);