class CMyDlg : 
   public CAxDialogImpl<CMyDlg>
{
public:
BEGIN_MSG_MAP(CMyDlg)
   MESSAGE_HANDLER(WM_INITDIALOG, OnInitDialog)
   COMMAND_HANDLER(IDOK, BN_CLICKED, OnClickedOK)
   COMMAND_HANDLER(IDCANCEL, BN_CLICKED, OnClickedCancel)
   CHAIN_MSG_MAP(CAxDialogImpl<CMyDlg>)
END_MSG_MAP()

   LRESULT OnInitDialog(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled)
   {
      CAxDialogImpl<CMyDlg>::OnInitDialog(uMsg, wParam, lParam, bHandled);

      AtlAdviseSinkMap(this, TRUE);

      bHandled = TRUE;
      return 1;  // Let the system set the focus
   }

   // Remainder of class declaration omitted.