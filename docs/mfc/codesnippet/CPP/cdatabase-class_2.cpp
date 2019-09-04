// Initialize when needed
CDatabase *CMyDatabaseDoc::GetDatabase()
{
   // Connect the object to a data source
   if (!m_dbCust.IsOpen() && !m_dbCust.OpenEx(NULL))
      return NULL;

   return &m_dbCust;
}