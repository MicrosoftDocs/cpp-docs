CString str;
CString msg = _T("The set and retrieved item expanded image ")
              _T("indexes are%s equal.");
int nSetItem = 0;
m_treeCtrl.SetItemExpandedImageIndex(hCountry, nSetItem);
int nItem = m_treeCtrl.GetItemExpandedImageIndex(hCountry);
if (nItem == nSetItem)
   str.Format(msg, _T(""));
else
   str.Format(msg, _T(" not"));
AfxMessageBox(str, MB_ICONINFORMATION);