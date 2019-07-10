// To edit a record, first set up the edit buffer
rsCustSet.Edit();

// Then edit field data members for the record
rsCustSet.m_BillingID = 2795;
rsCustSet.m_ContactFirstName = _T("Jones Mfg");

// Finally, complete the operation
if (!rsCustSet.Update())
{
   // Handle the failure to update
   AfxMessageBox(_T("Couldn't update record!"));
}