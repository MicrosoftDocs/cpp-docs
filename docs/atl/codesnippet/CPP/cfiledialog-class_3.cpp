void CMyClass::OnFileOpen()
{
   // szFilters is a text string that includes two file name filters:
   // "*.my" for "MyType Files" and "*.*' for "All Files."
   TCHAR szFilters[]= _T("MyType Files (*.my)|*.my|All Files (*.*)|*.*||");

   // Create an Open dialog; the default file name extension is ".my".
   CFileDialog fileDlg(TRUE, _T("my"), _T("*.my"),
      OFN_FILEMUSTEXIST | OFN_HIDEREADONLY, szFilters);
   
   // Display the file dialog. When user clicks OK, fileDlg.DoModal() 
   // returns IDOK.
   if(fileDlg.DoModal() == IDOK)
   {
      CString pathName = fileDlg.GetPathName();
   
      // Implement opening and reading file in here.

      //Change the window's title to the opened file's title.
      CString fileName = fileDlg.GetFileTitle();
   
      SetWindowText(fileName);
   }
}