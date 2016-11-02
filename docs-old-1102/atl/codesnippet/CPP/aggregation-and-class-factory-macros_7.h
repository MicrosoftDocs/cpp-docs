class ATL_NO_VTABLE CMySingletonClass :
   public CComObjectRootEx<CComSingleThreadModel>,
   public CComCoClass<CMySingletonClass, &CLSID_MySingletonClass>,
   public IMySingletonClass
{
public:
   DECLARE_CLASSFACTORY_SINGLETON(CMySingletonClass)

   // Remainder of class declaration omitted.