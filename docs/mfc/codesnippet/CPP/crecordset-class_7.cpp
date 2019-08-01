// Create and open a database object;
// do not load the cursor library
CDatabase db;
db.OpenEx(NULL, CDatabase::forceOdbcDialog);

// Create and open a recordset object
// directly from CRecordset. Note that a
// table must exist in a connected database.
// Use forwardOnly type recordset for best
// performance, since only MoveNext is required
CRecordset rs(&db);
rs.Open(CRecordset::forwardOnly, _T("SELECT * FROM Customer"));

// Create a CDBVariant object to
// store field data
CDBVariant varValue;

// Loop through the recordset,
// using GetFieldValue and
// GetODBCFieldCount to retrieve
// data in all columns
short nFields = rs.GetODBCFieldCount();
while (!rs.IsEOF())
{
   for (short index = 0; index < nFields; index++)
   {
      rs.GetFieldValue(index, varValue);
      // do something with varValue
   }
   rs.MoveNext();
}

rs.Close();
db.Close();