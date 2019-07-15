CString strPath;
// The this pointer points to the CExplorerView class which extends the CView class.
// CMFCShellListCtrl m_wndList
if (m_wndList.GetCurrentFolder(strPath) &&
    theApp.GetShellManager()->BrowseForFolder(strPath,
                                              this, strPath, _T("Copy the selected item(s) to the folder:")))
{
   MessageBox(CString(_T("The selected path is: ")) + strPath);
}