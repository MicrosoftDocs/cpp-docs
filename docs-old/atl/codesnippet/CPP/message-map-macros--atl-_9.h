class CMyDialog2 : public CDialogImpl<CMyDialog2>
{
public:
   enum { IDD = IDD_MYDLG };

   BEGIN_MSG_MAP(CMyDialog2)
      NOTIFY_HANDLER(IDC_TREE1, NM_CLICK, OnNMClickTree1)
   END_MSG_MAP()

public:
   // When a CMyDialog2 object receives a WM_NOTIFY message 
   // identified by IDC_TREE1 and NM_CLICK, the message is 
   // directed to CMyDialog2::OnNMClickTree1 for the actual
   // processing.
   LRESULT OnNMClickTree1(int /*idCtrl*/, LPNMHDR pNMHDR, BOOL& /*bHandled*/);
};