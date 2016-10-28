class ATL_NO_VTABLE CMyDescribedClass :
   public CComObjectRoot,
   public CComCoClass<CMyDescribedClass, &CLSID_MyDescribedClass>
{
public:
   CMyDescribedClass()
   {
   }

   // Override CComCoClass::GetObjectDescription
   DECLARE_OBJECT_DESCRIPTION("My Described Object 1.0")
};