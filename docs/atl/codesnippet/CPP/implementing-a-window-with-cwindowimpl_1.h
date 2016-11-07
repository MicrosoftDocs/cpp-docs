class CMyCustomWnd : public CWindowImpl<CMyCustomWnd>
{
public:
   // Optionally specify name of the new Windows class
   DECLARE_WND_CLASS(_T("MyName")) 
              // If this macro is not specified in your
              // class, ATL will generate a class name

   BEGIN_MSG_MAP(CMyCustomWnd)
      MESSAGE_HANDLER(WM_PAINT, OnPaint)
   END_MSG_MAP()

   LRESULT OnPaint(UINT /*nMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, 
      BOOL& /*bHandled*/)
   {
      // Do some painting code
      return 0;
   }

};