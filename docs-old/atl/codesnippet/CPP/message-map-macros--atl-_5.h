class CMyContainerClass : public CWindowImpl<CMyContainerClass>
{
public:
   CMyContainedClass m_obj;

   BEGIN_MSG_MAP(CMyContainerClass)
      MESSAGE_HANDLER(WM_PAINT, OnPaint)
      // chain to default message map of m_obj
      CHAIN_MSG_MAP_MEMBER(m_obj)
   ALT_MSG_MAP(1)
      // chain to default message map of m_obj
      CHAIN_MSG_MAP_MEMBER(m_obj)
   ALT_MSG_MAP(2)
      MESSAGE_HANDLER(WM_CHAR, OnChar)
      // chain to alternate message map of m_obj
      CHAIN_MSG_MAP_ALT_MEMBER(m_obj, 1)
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