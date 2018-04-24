// Helper.h : Declaration of the CHelper

#pragma once
#include "resource.h"       // main symbols

#include "NVC_ATL_Windowing.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif



// CHelper

class ATL_NO_VTABLE CHelper :
   public CComObjectRootEx<CComSingleThreadModel>,
   public CComCoClass<CHelper, &CLSID_Helper>,
   public IDispatchImpl<IHelper, &IID_IHelper, &LIBID_NVC_ATL_WindowingLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
   CHelper()
   {
   }

DECLARE_REGISTRY_RESOURCEID(IDR_HELPER)


BEGIN_COM_MAP(CHelper)
   COM_INTERFACE_ENTRY(IHelper)
   COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()



   DECLARE_PROTECT_FINAL_CONSTRUCT()

   HRESULT FinalConstruct()
   {
      return S_OK;
   }

   void FinalRelease()
   {
   }

public:

public:
   STDMETHOD(ShowPage)(BSTR bstrCaption, BSTR bstrID, IUnknown* pUnk);
};

OBJECT_ENTRY_AUTO(__uuidof(Helper), CHelper)
