CRecordset* CMyDatabaseDoc::GetRecordset()
{
   CCourses* pSet = new CCourses(&m_dbCust);
   try
   {
      pSet->Open();
   }
   catch (CDBException* e)
   {
      AfxMessageBox(e->m_strError, MB_ICONEXCLAMATION);
      // Delete the incomplete recordset object
      delete pSet;
      pSet = NULL;
      e->Delete();
   }
   return pSet;
}