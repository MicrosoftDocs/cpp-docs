// MySink.h : Declaration of the CMySink

#pragma once
#include "resource.h"       // main symbols

#include "NVC_ATL_Windowing.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif



// CMySink

class ATL_NO_VTABLE CMySink :
   public CComObjectRootEx<CComSingleThreadModel>,
   public CComCoClass<CMySink, &CLSID_MySink>,
   public _IMyComponentEvents
{
public:
   CMySink()
   {
   }

   DECLARE_REGISTRY_RESOURCEID(IDR_MYSINK)


   BEGIN_COM_MAP(CMySink)
      COM_INTERFACE_ENTRY(_IMyComponentEvents)
   END_COM_MAP()



   DECLARE_PROTECT_FINAL_CONSTRUCT()

   HRESULT FinalConstruct()
   {
      return S_OK;
   }

   void FinalRelease()
   {
   }


   // _IMyComponentEvents Methods
public:
   STDMETHOD(ShowMyMsg)( BSTR bstrMsg)
   {
      ::MessageBox(NULL, OLE2CW(bstrMsg), L"MySink", MB_OK);

      return S_OK;
   }
};

OBJECT_ENTRY_AUTO(__uuidof(MySink), CMySink)
