// Declare the default message map, identified by '0'
BEGIN_MSG_MAP(CAtlEdit)
   MESSAGE_HANDLER(WM_CREATE, OnCreate)
   MESSAGE_HANDLER(WM_SETFOCUS, OnSetFocus)
   CHAIN_MSG_MAP(CComControl<CAtlEdit>)
// Declare an alternate message map, identified by '1'
ALT_MSG_MAP(1)
   MESSAGE_HANDLER(WM_CHAR, OnChar)
END_MSG_MAP()