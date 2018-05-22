// MySingletonClass.h : Declaration of the CMySingletonClass

#pragma once
#include "resource.h"       // main symbols

#include "NVC_ATL_COM.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif



// CMySingletonClass

// <Snippet10>
class ATL_NO_VTABLE CMySingletonClass :
   public CComObjectRootEx<CComSingleThreadModel>,
   public CComCoClass<CMySingletonClass, &CLSID_MySingletonClass>,
   public IMySingletonClass
{
public:
   DECLARE_CLASSFACTORY_SINGLETON(CMySingletonClass)

   // Remainder of class declaration omitted.
// </Snippet10>

   CMySingletonClass()
   {
   }

DECLARE_REGISTRY_RESOURCEID(IDR_MYSINGLETONCLASS)

DECLARE_NOT_AGGREGATABLE(CMySingletonClass)

BEGIN_COM_MAP(CMySingletonClass)
   COM_INTERFACE_ENTRY(IMySingletonClass)
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

OBJECT_ENTRY_AUTO(__uuidof(MySingletonClass), CMySingletonClass)
