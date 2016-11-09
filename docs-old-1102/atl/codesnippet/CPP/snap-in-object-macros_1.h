class CMyExtSnapinExtData : 
   public CSnapInItemImpl<CMyExtSnapinExtData>,
   public CMySnapinBase
{
public:
   CMyExtSnapinExtData() {}
};

class CMyExtSnapin : 
   public CComObjectRoot,
   public CSnapInObjectRoot<1, CMyExtSnapin>,
   public IComponentDataImpl<CMyExtSnapin, CMyExtSnapin>
{
public:
   CMyExtSnapin() {}

   BEGIN_COM_MAP(CMyExtSnapin)
   END_COM_MAP()

   EXTENSION_SNAPIN_DATACLASS(CMyExtSnapinExtData)

   BEGIN_EXTENSION_SNAPIN_NODEINFO_MAP(CMyExtSnapin)
      EXTENSION_SNAPIN_NODEINFO_ENTRY(CMyExtSnapinExtData)
   END_EXTENSION_SNAPIN_NODEINFO_MAP()
};