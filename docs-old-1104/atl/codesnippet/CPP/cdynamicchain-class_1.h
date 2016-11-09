class CMyChainWnd : public CWindowImpl<CMyChainWnd>,
   public CDynamicChain
{
public:
   CMyChainWnd() {}

   BEGIN_MSG_MAP(CMyChainWnd)
      MESSAGE_HANDLER(WM_PAINT, OnPaint)
      MESSAGE_HANDLER(WM_SETFOCUS, OnSetFocus)
      // dynamically chain to the default
      // message map in another object
      CHAIN_MSG_MAP_DYNAMIC(1313)
                // '1313' identifies the object
                // and the message map that will be
                // chained to. '1313' is defined
                // through the SetChainEntry method
   END_MSG_MAP()

   LRESULT OnPaint(UINT /*nMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, 
      BOOL& /*bHandled*/)
   {
      // Do some painting code
      return 0;
   }

   LRESULT OnSetFocus(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, 
      BOOL& /*bHandled*/)
   { 
      return 0;
   }
};