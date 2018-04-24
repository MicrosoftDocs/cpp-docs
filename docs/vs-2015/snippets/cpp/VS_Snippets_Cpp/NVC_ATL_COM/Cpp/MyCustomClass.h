// MyCustomClass.h : Declaration of the CMyCustomClass

#pragma once
#include "resource.h"       // main symbols

#include "NVC_ATL_COM.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

class CMyClassFactory : public CComClassFactory
{
public:
   CMyClassFactory() {}
};

// CMyCustomClass

// <Snippet8>
class ATL_NO_VTABLE CMyCustomClass :
   public CComObjectRootEx<CComSingleThreadModel>,
   public CComCoClass<CMyCustomClass, &CLSID_MyCustomClass>,
   public IDispatchImpl<IMyCustomClass, &IID_IMyCustomClass, &LIBID_NVC_ATL_COMLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
   DECLARE_CLASSFACTORY_EX(CMyClassFactory)

   // Remainder of class declaration omitted.
// </Snippet8>

   CMyCustomClass()
   {
   }

DECLARE_REGISTRY_RESOURCEID(IDR_MYCUSTOMCLASS)


BEGIN_COM_MAP(CMyCustomClass)
   COM_INTERFACE_ENTRY(IMyCustomClass)
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

};

OBJECT_ENTRY_AUTO(__uuidof(MyCustomClass), CMyCustomClass)
