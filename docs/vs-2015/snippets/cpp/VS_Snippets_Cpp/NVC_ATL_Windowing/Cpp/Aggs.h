#pragma once

class ATL_NO_VTABLE COuter1 :
   public CComObjectRootEx<CComSingleThreadModel>
{
public:
   COuter1()
   {
      m_punkAgg = NULL;
   }

   IUnknown* m_punkAgg;

// <Snippet112>
BEGIN_COM_MAP(COuter1)
   COM_INTERFACE_ENTRY_AGGREGATE(__uuidof(IAgg), m_punkAgg)
END_COM_MAP()
// </Snippet112>

   DECLARE_PROTECT_FINAL_CONSTRUCT()

   HRESULT FinalConstruct()
   {
      return S_OK;
   }

   void FinalRelease()
   {
   }

public:

};

class ATL_NO_VTABLE COuter2 :
   public CComObjectRootEx<CComSingleThreadModel>
{
public:
   COuter2()
   {
      m_punkAggBlind = NULL;
   }

   IUnknown* m_punkAggBlind;

// <Snippet113>
BEGIN_COM_MAP(COuter2)
   COM_INTERFACE_ENTRY_AGGREGATE_BLIND(m_punkAggBlind)
END_COM_MAP()
// </Snippet113>

   DECLARE_PROTECT_FINAL_CONSTRUCT()

   HRESULT FinalConstruct()
   {
      return S_OK;
   }

   void FinalRelease()
   {
   }

public:

};

class ATL_NO_VTABLE COuter3 :
   public CComObjectRootEx<CComSingleThreadModel>
{
public:
   COuter3()
   {
      m_punkAutoAgg = NULL;
   }

   IUnknown* m_punkAutoAgg;
   LPUNKNOWN GetControllingUnknown() { return NULL; }

// <Snippet114>
BEGIN_COM_MAP(COuter3)
   COM_INTERFACE_ENTRY_AUTOAGGREGATE(__uuidof(IAutoAgg), m_punkAutoAgg, CLSID_CAutoAgg)
END_COM_MAP()
// </Snippet114>

   DECLARE_PROTECT_FINAL_CONSTRUCT()

   HRESULT FinalConstruct()
   {
      return S_OK;
   }

   void FinalRelease()
   {
   }

public:

};

class ATL_NO_VTABLE COuter4 :
   public CComObjectRootEx<CComSingleThreadModel>
{
public:
   COuter4()
   {
      m_punkAutoAggB = NULL;
   }

   IUnknown* m_punkAutoAggB;
   LPUNKNOWN GetControllingUnknown() { return NULL; }

// <Snippet115>
BEGIN_COM_MAP(COuter4)
   COM_INTERFACE_ENTRY_AUTOAGGREGATE_BLIND(m_punkAutoAggB, CLSID_CAutoAggB)
END_COM_MAP()
// </Snippet115>

   DECLARE_PROTECT_FINAL_CONSTRUCT()

   HRESULT FinalConstruct()
   {
      return S_OK;
   }

   void FinalRelease()
   {
   }

public:

};
