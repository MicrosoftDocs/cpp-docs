// Create a derived CRecordset object
CCustomer rsCustSet(&m_dbCust);
rsCustSet.Open();

if (rsCustSet.IsEOF() || !rsCustSet.CanUpdate() ||
   !rsCustSet.CanTransact())
{
   return;
}

m_dbCust.BeginTrans();

// Perhaps scroll to a new record...
// Delete the current record
rsCustSet.Delete();

// Finished commands for this transaction
if (IDYES == AfxMessageBox(_T("Commit transaction?"), MB_YESNO))
m_dbCust.CommitTrans();
else // User changed mind
m_dbCust.Rollback();