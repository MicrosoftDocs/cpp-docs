// This example assumes that there is a CTabCtrl member of the
// CTabDlg class named m_TabCtrl.  On a button handler
// called OnDeleteItem of the dialog box the tab control will
// delete the 0 indexed item.

void CTabDlg::OnDeleteItem()
{
   // Delete the first item in the tab control.
   m_TabCtrl.DeleteItem(0);
}