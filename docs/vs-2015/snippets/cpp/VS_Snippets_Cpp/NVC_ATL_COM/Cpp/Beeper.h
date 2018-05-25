// Beeper.h : Declaration of the CBeeper

#pragma once
#include "resource.h"       // main symbols

#include "NVC_ATL_COM.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif



// CBeeper
class CBeeper;

// <Snippet43>
class CBeeper2 :
   public ISupportErrorInfo,
   public CComTearOffObjectBase<CBeeper>
{
public:
   CBeeper2() {}
   STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid)
   {
      return (InlineIsEqualGUID(IID_IBeeper, riid)) ? S_OK : S_FALSE;
   }

BEGIN_COM_MAP(CBeeper2)
   COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()
};

// <Snippet47>
class ATL_NO_VTABLE CBeeper :
   public CComObjectRootEx<CComSingleThreadModel>,
   public CComCoClass<CBeeper, &CLSID_Beeper>,
   public IDispatchImpl<IBeeper, &IID_IBeeper, &LIBID_NVC_ATL_COMLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
// </Snippet47>
{
public:
   CBeeper()
   {
   }

DECLARE_REGISTRY_RESOURCEID(IDR_BEEPER)

DECLARE_NOT_AGGREGATABLE(CBeeper)

// <Snippet1>
BEGIN_COM_MAP(CBeeper)
   COM_INTERFACE_ENTRY(IBeeper)
   COM_INTERFACE_ENTRY(IDispatch)
   COM_INTERFACE_ENTRY_TEAR_OFF(IID_ISupportErrorInfo, CBeeper2)
END_COM_MAP()
// </Snippet1>

// ISupportsErrorInfo
   STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);


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
// </Snippet43>

OBJECT_ENTRY_AUTO(__uuidof(Beeper), CBeeper)
