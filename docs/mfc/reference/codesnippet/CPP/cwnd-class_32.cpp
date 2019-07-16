//CMyFileDialog is a CFileDialog-derived class
//OnInitDialog is the handler for WM_INITDIALOG
BOOL CMyFileDialog::OnInitDialog()
{
   CFileDialog::OnInitDialog();

   CWnd *pWndParent = GetParent();

   //make sure you add #include <dlgs.h> for IDs 'edt1' & 'stc3'

   //disables the 'file name' edit and static control
   //of the standard file open dialog

   //get handle of 'file name' combobox control & disable it
   CWnd *pWnd = pWndParent->GetDlgItem(cmb13);
   pWnd->EnableWindow(FALSE);

   //get handle of 'file name' static control & disable it
   pWnd = pWndParent->GetDlgItem(stc3);
   pWnd->EnableWindow(FALSE);

   return TRUE;
}