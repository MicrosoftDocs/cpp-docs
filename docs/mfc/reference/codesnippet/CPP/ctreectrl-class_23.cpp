// find the currently selected item
HTREEITEM hCurSel = m_TreeCtrl.GetNextItem(TVI_ROOT, TVGN_CARET);

// report it to the user
if (hCurSel == NULL)
{
   AfxMessageBox(_T("There is no selected item"));
}
else
{
   CString str;
   str.Format(_T("The currently selected item is \"%s\""),
              (LPCTSTR)m_TreeCtrl.GetItemText(hCurSel));
   AfxMessageBox((LPCTSTR)str);
}