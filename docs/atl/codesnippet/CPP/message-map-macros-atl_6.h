class ATL_NO_VTABLE CPolyProp :
   public CComObjectRootEx<CComSingleThreadModel>,
   public CComCoClass<CPolyProp, &CLSID_PolyProp>,
   public IPropertyPageImpl<CPolyProp>,
   public CDialogImpl<CPolyProp>
{
public:
BEGIN_COM_MAP(CPolyProp)
   COM_INTERFACE_ENTRY(IPropertyPage)
END_COM_MAP()

BEGIN_MSG_MAP(CPolyProp)
   COMMAND_HANDLER(IDC_SIDES, EN_CHANGE, OnEnChangeSides)
   CHAIN_MSG_MAP(IPropertyPageImpl<CPolyProp>)
END_MSG_MAP()

   // When a CPolyProp object receives a WM_COMMAND message identified 
   // by IDC_SIDES and EN_CHANGE, the message is directed to 
   // CPolyProp::OnEnChangeSides for the actual processing.
   LRESULT OnEnChangeSides(WORD /*wNotifyCode*/, WORD /*wID*/, HWND /*hWndCtl*/, 
      BOOL& /*bHandled*/);