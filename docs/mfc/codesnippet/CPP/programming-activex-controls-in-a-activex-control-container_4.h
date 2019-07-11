class CContainerDlg : public CDialog
{
   DECLARE_DYNAMIC(CContainerDlg)

public:
   CContainerDlg(CWnd* pParent = NULL);   // standard constructor
   virtual ~CContainerDlg();

   virtual void OnFinalRelease();

   // Dialog Data
   enum { IDD = IDD_CONTAINER_DIALOG };

protected:
   virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

   DECLARE_MESSAGE_MAP()
   DECLARE_DISPATCH_MAP()
   DECLARE_INTERFACE_MAP()
public:
   CCirc m_circctl;