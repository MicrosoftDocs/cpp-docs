CCustomer rsCustSet(&m_dbCust);

// Set the sort string
rsCustSet.m_strSort = _T("L_Name, ContactFirstName");

// Run the sorted query
rsCustSet.Open(CRecordset::snapshot, _T("Customer"));