// rsSnap, rsLName, and rsDefault are CRecordset or CRecordset-derived 
// objects

// Open rs using the default SQL statement, implement bookmarks, and turn 
// off automatic dirty field checking
rsSnap.Open(CRecordset::snapshot, NULL, CRecordset::useBookmarks |
   CRecordset::noDirtyFieldCheck);

// Pass a complete SELECT statement and open as a dynaset
rsLName.Open(CRecordset::dynaset, _T("Select L_Name from Customer"));

// Accept all defaults
rsDefault.Open();