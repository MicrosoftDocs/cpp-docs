class CMyDialog : public CDialogImpl<CMyDialog>
{
public:
   enum { IDD = IDD_MYDLG };

   BEGIN_MSG_MAP(CMyDialog)
      MESSAGE_HANDLER(WM_INITDIALOG, OnInitDialog)
      COMMAND_HANDLER(IDCANCEL, BN_CLICKED, OnBnClickedCancel)
   END_MSG_MAP()

   LRESULT OnInitDialog(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, 
      BOOL& /*bHandled*/)
   {
      // Do some initialization code
      return 1;
   }
public:
   LRESULT OnBnClickedCancel(WORD /*wNotifyCode*/, WORD /*wID*/, HWND /*hWndCtl*/, BOOL& /*bHandled*/);
};