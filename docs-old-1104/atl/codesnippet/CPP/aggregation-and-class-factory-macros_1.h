class ATL_NO_VTABLE CNoAggClass :
   public CComObjectRoot,
   public CComCoClass<CNoAggClass, &CLSID_NoAggClass>
{
public:
   CNoAggClass()
   {
   }

   DECLARE_NOT_AGGREGATABLE(CNoAggClass)
};