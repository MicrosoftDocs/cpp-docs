CCustomer rsCustSet(&m_dbCust);

// Set the filter
rsCustSet.m_strFilter = _T("L_Name = 'Flanders'");

// Run the filtered query
rsCustSet.Open(CRecordset::snapshot, _T("Customer"));