// MyAggObject.h : Declaration of the CMyAggObject

#pragma once
#include "resource.h"       // main symbols

#include "NVC_ATL_COM.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif



// CMyAggObject

// <Snippet40>
class ATL_NO_VTABLE CMyAggObject :
   public CComObjectRootEx<CComSingleThreadModel>,
   public CComCoClass<CMyAggObject, &CLSID_MyAggObject>,
   public IDispatchImpl<IMyAggObject, &IID_IMyAggObject, &LIBID_NVC_ATL_COMLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
   DECLARE_GET_CONTROLLING_UNKNOWN()
   HRESULT FinalConstruct()
   {
      return CoCreateInstance(CLSID_MyCustomClass, GetControllingUnknown(), 
         CLSCTX_ALL, IID_IUnknown, (void**)&m_pMyCustomClass);
   }

   IMyCustomClass* m_pMyCustomClass;

   // Remainder of class declaration omitted.
// </Snippet40>
   
   CMyAggObject()
   {
   }

DECLARE_REGISTRY_RESOURCEID(IDR_MYAGGOBJECT)


BEGIN_COM_MAP(CMyAggObject)
   COM_INTERFACE_ENTRY(IMyAggObject)
   COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()



   DECLARE_PROTECT_FINAL_CONSTRUCT()

   void FinalRelease()
   {
   }

public:

};

OBJECT_ENTRY_AUTO(__uuidof(MyAggObject), CMyAggObject)
