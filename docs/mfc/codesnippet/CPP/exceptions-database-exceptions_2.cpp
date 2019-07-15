CDaoRecordset* CMyDaoDatabaseDoc::GetRecordset()
{
   CDaoRecordset* pSet = new CCustSet(&m_db);
   try
   {
      pSet->Open();
   }
   catch (CDaoException* pe)
   {
      AfxMessageBox(pe->m_pErrorInfo->m_strDescription, MB_ICONEXCLAMATION);
      // Delete the incomplete recordset object
      delete pSet;
      pSet = NULL;
      pe->Delete();
   }
   return pSet;
}