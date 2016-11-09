class ATL_NO_VTABLE COnlyAggClass :
   public CComObjectRoot,
   public CComCoClass<COnlyAggClass, &CLSID_OnlyAggClass>
{
public:
   COnlyAggClass()
   {
   }

   DECLARE_ONLY_AGGREGATABLE(COnlyAggClass)
};