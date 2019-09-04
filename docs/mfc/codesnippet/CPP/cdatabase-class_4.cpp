try
{
   m_dbCust.ExecuteSQL(
       _T("UPDATE Taxes ")
       _T("SET Rate = '36' ")
       _T("WHERE Name = 'Federal'"));
}
catch (CDBException *pe)
{
   // The error code is in pe->m_nRetCode
   pe->ReportError();
   pe->Delete();
}