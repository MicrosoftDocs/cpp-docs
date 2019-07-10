CMultiCustomer rs(&m_dbCust);

// Set the rowset size
rs.SetRowsetSize(5);

// Open the recordset
rs.Open(CRecordset::dynaset, NULL, CRecordset::useMultiRowFetch);

// loop through the recordset by rowsets
while (!rs.IsEOF())
{
   for (int rowCount = 0; rowCount < (int)rs.GetRowsFetched(); rowCount++)
   {
      // do something
   }

   rs.MoveNext();
}

rs.Close();