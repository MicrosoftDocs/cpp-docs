// Connect1.h : Declaration of the CConnect1

#pragma once
#include "resource.h"       // main symbols

#include "NVC_ATL_Windowing.h"
#include "_IConnect1Events_CP.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif



// CConnect1

// <Snippet84>
class ATL_NO_VTABLE CConnect1 :
   public CComObjectRootEx<CComSingleThreadModel>,
   public CComCoClass<CConnect1, &CLSID_Connect1>,
   public IConnectionPointContainerImpl<CConnect1>,
   public IConnectionPointImpl<CConnect1, &IID_IPropertyNotifySink>,
   public IConnect1
{
public:
   CConnect1()
   {
   }

DECLARE_REGISTRY_RESOURCEID(IDR_CONNECT1)


BEGIN_COM_MAP(CConnect1)
   COM_INTERFACE_ENTRY(IConnect1)
   COM_INTERFACE_ENTRY(IConnectionPointContainer)
END_COM_MAP()

BEGIN_CONNECTION_POINT_MAP(CConnect1)
   CONNECTION_POINT_ENTRY(IID_IPropertyNotifySink)
END_CONNECTION_POINT_MAP()


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
// </Snippet84>

OBJECT_ENTRY_AUTO(__uuidof(Connect1), CConnect1)