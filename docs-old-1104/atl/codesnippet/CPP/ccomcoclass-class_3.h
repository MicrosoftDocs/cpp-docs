class ATL_NO_VTABLE CMyDoc :
   public CComObjectRootEx<CComSingleThreadModel>,
   public CComCoClass<CMyDoc, &CLSID_MyDoc>,
   public IDocument
{
public:
   DECLARE_OBJECT_DESCRIPTION("My Document Object 1.0")

   // Remainder of class declaration omitted.