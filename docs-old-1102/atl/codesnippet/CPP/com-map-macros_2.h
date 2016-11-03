class ATL_NO_VTABLE CEntry2Example :
   public CEntry2ExampleBase, // CEntry2ExampleBase derives from IDispatch
   public IDispatchImpl<IEntry2Example, &IID_IEntry2Example, &LIBID_NVC_ATL_WindowingLib, /*wMajor =*/ 1, /*wMinor =*/ 0>,
   public CComCoClass<CEntry2Example, &CLSID_Entry2Example>
{
public:
   CEntry2Example()
   {
   }

BEGIN_COM_MAP(CEntry2Example)
   COM_INTERFACE_ENTRY(IEntry2Example)
   COM_INTERFACE_ENTRY2(IDispatch, IEntry2Example)
END_COM_MAP()
};