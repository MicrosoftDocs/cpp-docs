// Assume db is an already open CDatabase object
CCourses rs(&m_dbCust);
rs.m_strNameParam = _T("History");

// Get the first result set
// NOTE: SQL Server requires forwardOnly cursor 
//       type for multiple rowset returning stored 
//       procedures
rs.Open(CRecordset::forwardOnly,
   _T("{? = CALL GetCourses( ? )}"),
   CRecordset::readOnly);

// Loop through all the data in the first result set
while (!rs.IsEOF())
{
   CString strFieldValue;
   for (short nIndex = 0; nIndex < rs.GetODBCFieldCount(); nIndex++)
   {
      rs.GetFieldValue(nIndex, strFieldValue);

      // TO DO: Use field value string.
   }
   rs.MoveNext();
}

// Retrieve other result sets...
while (rs.FlushResultSet())
{
   // must call MoveNext because cursor is invalid
   rs.MoveNext();

   while (!rs.IsEOF())
   {
      CString strFieldValue;
      for (short nIndex = 0; nIndex < rs.GetODBCFieldCount(); nIndex++)
      {
         rs.GetFieldValue(nIndex, strFieldValue);

         // TO DO: Use field value string.
      }
      rs.MoveNext();
   }
}


// All result sets have been flushed. Cannot
// use the cursor, but the output parameter,
// m_nCountParam, has now been written.
// Note that m_nCountParam is not valid until
// CRecordset::FlushResultSet has returned FALSE,
// indicating no more result sets will be returned.

// TO DO: Use m_nCountParam

// Cleanup
rs.Close();