// Outer.h : Declaration of the COuter

#pragma once
#include "resource.h"       // main symbols

#include "NVC_ATL_COM.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

class COuter;

class CTearOff :
   public ITearOff,
   public CComTearOffObjectBase<COuter>
{
public:
   CTearOff() {}

BEGIN_COM_MAP(CTearOff)
   COM_INTERFACE_ENTRY(ITearOff)
END_COM_MAP()
};

// COuter

class ATL_NO_VTABLE COuter :
   public CComObjectRootEx<CComSingleThreadModel>,
   public CComCoClass<COuter, &CLSID_Outer>,
   public IOuter
{
public:
   COuter()
   {
      punkTearOff = NULL;
   }

   IUnknown* punkTearOff;

   IUnknown* GetControllingUnknown() { return this; }

// <Snippet54>
BEGIN_COM_MAP(COuter)
   COM_INTERFACE_ENTRY(IOuter)
   COM_INTERFACE_ENTRY_CACHED_TEAR_OFF(IID_ITearOff, CTearOff, punkTearOff)
END_COM_MAP()
// </Snippet54>

DECLARE_REGISTRY_RESOURCEID(IDR_OUTER)

DECLARE_NOT_AGGREGATABLE(COuter)


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

OBJECT_ENTRY_AUTO(__uuidof(Outer), COuter)
