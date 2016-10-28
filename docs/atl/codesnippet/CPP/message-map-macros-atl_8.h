class CMyBaseWindow : public CWindowImpl<CMyBaseWindow>
{
public:
   BEGIN_MSG_MAP(CMyBaseWindow)
      MESSAGE_HANDLER(WM_CREATE, OnCreate)
   END_MSG_MAP()

   // When a CMyBaseWindow object receives a WM_CREATE message, the message
   // is directed to CMyBaseWindow::OnCreate for the actual processing.
   LRESULT OnCreate(UINT /*nMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, 
      BOOL& /*bHandled*/)
   {
      return 0;   
   }
};