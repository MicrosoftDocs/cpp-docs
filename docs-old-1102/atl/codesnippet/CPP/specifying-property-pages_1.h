class ATL_NO_VTABLE CMyCtrl :
   OtherInterfaces
   public ISpecifyPropertyPagesImpl<CMyCtrl>
{
public:

BEGIN_COM_MAP(CMyCtrl)
   OtherComMapEntries
   COM_INTERFACE_ENTRY(ISpecifyPropertyPages)
END_COM_MAP()

BEGIN_PROP_MAP(CMyCtrl)
   OtherPropMapEntries
   PROP_PAGE(CLSID_DatePage)
   PROP_PAGE(CLSID_StockColorPage)
END_PROP_MAP()

   // Remainder of class declaration omitted.