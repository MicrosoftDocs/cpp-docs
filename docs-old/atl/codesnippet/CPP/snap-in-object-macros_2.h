class CMySnapinData : 
   public CSnapInItemImpl<CMySnapinData>,
   public CMySnapinBase
{
public:
   CMySnapinData() {}

   BEGIN_SNAPINTOOLBARID_MAP(CMySnapinData)
      // IDR_MYSNAPINTOOLBAR is the resource ID of a toolbar resource.
      SNAPINTOOLBARID_ENTRY(IDR_MYSNAPINTOOLBAR)
   END_SNAPINTOOLBARID_MAP()
};