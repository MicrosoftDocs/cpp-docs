#pragma once

class CMyExtSnapinExtData;

class CMySnapinBase
{
public:
   CMySnapinBase() {}
   CSnapInItem* GetExtNodeObject(IDataObject*, CMyExtSnapinExtData*) { return NULL; }
   static GUID* m_NODETYPE;
   static WCHAR* m_SZNODETYPE;
   static WCHAR* m_SZDISPLAY_NAME;
   static CLSID* m_SNAPIN_CLASSID;
};

// <Snippet105>
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
// </Snippet105>

// <Snippet106>
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
// </Snippet106>
