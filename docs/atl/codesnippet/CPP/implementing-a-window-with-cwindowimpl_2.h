class CMyEdit : public CWindowImpl<CMyEdit>
{
public:
   // "Edit" is the name of the standard Windows class.
   // "MyEdit" is the name of the new Windows class
   // that will be based on the Edit class.
   DECLARE_WND_SUPERCLASS(_T("MyEdit"), _T("Edit"))

   BEGIN_MSG_MAP(CMyEdit)
      MESSAGE_HANDLER(WM_CHAR, OnChar)
   END_MSG_MAP()

   LRESULT OnChar(UINT /*nMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, 
      BOOL& /*bHandled*/)
   {
      // Do some character handling code
      return 0;
   }
};