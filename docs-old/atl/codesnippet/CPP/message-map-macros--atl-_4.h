class CMyExtClass : public CMyBaseClass
{
public:
  BEGIN_MSG_MAP(CMyExtClass)
     MESSAGE_HANDLER(WM_PAINT, OnPaint)
     // chain to default message map in CMyBaseClass
     CHAIN_MSG_MAP(CMyBaseClass)
  ALT_MSG_MAP(1)
     // chain to first alternative message map in CMyBaseClass
     CHAIN_MSG_MAP(CMyBaseClass)
  ALT_MSG_MAP(2)
     MESSAGE_HANDLER(WM_CHAR, OnChar)
     // chain to alternate message map in CMyBaseClass
     CHAIN_MSG_MAP_ALT(CMyBaseClass, 1)
  END_MSG_MAP()

   LRESULT OnPaint(UINT /*nMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, 
      BOOL& /*bHandled*/)
   {
      return 0;   
   }

   LRESULT OnChar(UINT /*nMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, 
      BOOL& /*bHandled*/)
   {
      return 0;   
   }
};