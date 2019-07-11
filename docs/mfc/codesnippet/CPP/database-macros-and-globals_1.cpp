RETCODE nRetCode;

AFX_ODBC_CALL(::SQLColumns(prs->m_hstmt, (SQLTCHAR*)NULL, SQL_NTS, (SQLTCHAR*)NULL,
   SQL_NTS, (SQLTCHAR*)strTableName.GetBuffer(), SQL_NTS, (SQLTCHAR*)NULL, SQL_NTS));

if (!prs->Check(nRetCode))
{
   AfxThrowDBException(nRetCode, prs->m_pDatabase, prs->m_hstmt);
   TRACE(_T("SQLColumns failed\n"));
}