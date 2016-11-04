class ATL_NO_VTABLE CAtlEdit :
   OtherInheritedClasses
   public CComControl<CAtlEdit>
   // CComControl derives from CWindowImpl, which derives from CMessageMap
{
public:
   // Declare a contained window data member
   CContainedWindow m_ctlEdit;

   // Initialize the contained window:
   // 1. Pass "Edit" to specify that the contained 
   //    window should be based on the standard 
   //    Windows Edit box
   // 2. Pass 'this' pointer to specify that CAtlEdit 
   //    contains the message map to be used for the 
   //    contained window's message processing
   // 3. Pass the identifier of the message map. '1'
   //    identifies the alternate message map declared
   //    with ALT_MSG_MAP(1)
   CAtlEdit()
      : m_ctlEdit(_T("Edit"), this, 1)
   {
      m_bWindowOnly = TRUE;
   }

// Declare the default message map, identified by '0'
BEGIN_MSG_MAP(CAtlEdit)
   MESSAGE_HANDLER(WM_CREATE, OnCreate)
   MESSAGE_HANDLER(WM_SETFOCUS, OnSetFocus)
   CHAIN_MSG_MAP(CComControl<CAtlEdit>)
// Declare an alternate message map, identified by '1'
ALT_MSG_MAP(1)
   MESSAGE_HANDLER(WM_CHAR, OnChar)
END_MSG_MAP()