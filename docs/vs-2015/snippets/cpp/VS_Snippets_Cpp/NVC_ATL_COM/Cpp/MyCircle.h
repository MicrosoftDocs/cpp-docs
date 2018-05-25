// MyCircle.h : Declaration of the CMyCircle

#pragma once
#include "resource.h"       // main symbols

#include "NVC_ATL_COM.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif



// CMyCircle

// <Snippet38>
class ATL_NO_VTABLE CMyCircle :
   public CComObjectRootEx<CComSingleThreadModel>,
   public CComCoClass<CMyCircle, &CLSID_MyCircle>,
   public IDispatchImpl<IMyCircle, &IID_IMyCircle, &LIBID_NVC_ATL_COMLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
   CMyCircle()
   {
   }

DECLARE_REGISTRY_RESOURCEID(IDR_MYCIRCLE)

DECLARE_NOT_AGGREGATABLE(CMyCircle)

BEGIN_COM_MAP(CMyCircle)
   COM_INTERFACE_ENTRY(IMyCircle)
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
   STDMETHOD(get_XCenter)(double* pVal);
};
// </Snippet38>

OBJECT_ENTRY_AUTO(__uuidof(MyCircle), CMyCircle)
