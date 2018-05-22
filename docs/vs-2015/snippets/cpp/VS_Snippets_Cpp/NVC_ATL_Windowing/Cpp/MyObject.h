// MyObject.h : Declaration of the CMyObject

#pragma once
#include "resource.h"       // main symbols

#include "NVC_ATL_Windowing.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif



// CMyObject

class ATL_NO_VTABLE CMyObject :
   public CComObjectRootEx<CComSingleThreadModel>,
   public CComCoClass<CMyObject, &CLSID_MyObject>,
   public IDispatchImpl<IMyObject, &IID_IMyObject, &LIBID_NVC_ATL_WindowingLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
   CMyObject()
   {
   }

DECLARE_REGISTRY_RESOURCEID(IDR_MYOBJECT)

// <Snippet110>
BEGIN_COM_MAP(CMyObject)
   COM_INTERFACE_ENTRY(IMyObject)
   COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()
// </Snippet110>


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

OBJECT_ENTRY_AUTO(__uuidof(MyObject), CMyObject)
