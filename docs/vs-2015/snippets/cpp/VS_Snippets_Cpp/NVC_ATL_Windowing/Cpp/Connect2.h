// Connect2.h : Declaration of the CConnect2

#pragma once
#include "resource.h"       // main symbols

#include "NVC_ATL_Windowing.h"
#include "_IConnect2Events_CP.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif



// CConnect2

// <Snippet120>
// <Snippet85>
class ATL_NO_VTABLE CConnect2 :
   public CComObjectRootEx<CComSingleThreadModel>,
   public CComCoClass<CConnect2, &CLSID_Connect2>,
   public IConnectionPointContainerImpl<CConnect2>,
   public IPropertyNotifySinkCP<CConnect2>
// </Snippet85>
{
public:
   BEGIN_CONNECTION_POINT_MAP(CConnect2)
      CONNECTION_POINT_ENTRY(IID_IPropertyNotifySink)
   END_CONNECTION_POINT_MAP()

   // Remainder of class declaration omitted.
// </Snippet120>

   CConnect2()
   {
   }

DECLARE_REGISTRY_RESOURCEID(IDR_CONNECT2)


BEGIN_COM_MAP(CConnect2)
   COM_INTERFACE_ENTRY(IConnectionPointContainer)
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

OBJECT_ENTRY_AUTO(__uuidof(Connect2), CConnect2)
