CCustomer rsCustSet(&m_dbCust);

// Open the recordset
rsCustSet.Open();

// Use the recordset ...

// Set the sort order and Requery the recordset
rsCustSet.m_strSort = _T("L_Name, ContactFirstName");
if (!rsCustSet.CanRestart())
return;    // Unable to requery

if (!rsCustSet.Requery())
// Requery failed, so take action
AfxMessageBox(_T("Requery failed!"));