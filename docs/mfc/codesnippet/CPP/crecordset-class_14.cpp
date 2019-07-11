// rs is a CRecordset or a CRecordset-derived object

// Change the rowset size to 5
rs.SetRowsetSize(5);

// Open the recordset
rs.Open(CRecordset::dynaset, NULL, CRecordset::useMultiRowFetch);

// Move to the first record in the recordset
rs.MoveFirst();

// Move to the sixth record
rs.Move(5);
// Other equivalent ways to move to the sixth record:
rs.Move(6, SQL_FETCH_ABSOLUTE);
rs.SetAbsolutePosition(6);
// In this case, the sixth record is the first record in the next rowset,
// so the following are also equivalent:
rs.MoveFirst();
rs.Move(1, SQL_FETCH_NEXT);

rs.MoveFirst();
rs.MoveNext();