// CBuddySink.h : Declaration of the CCBuddySink

#pragma once
#include "resource.h"       // main symbols

#include "NVC_ATL_Windowing.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif



// CCBuddySink

class ATL_NO_VTABLE CCBuddySink :
   public CComObjectRootEx<CComSingleThreadModel>,
   public CComCoClass<CCBuddySink, &CLSID_CBuddySink>,
   public IDispatchImpl<ICBuddySink, &IID_ICBuddySink, &LIBID_NVC_ATL_WindowingLib, /*wMajor =*/ 1, /*wMinor =*/ 0>,
   public IDispatchImpl<DBuddyEvents, &__uuidof(DBuddyEvents), &LIBID_NVC_ATL_WindowingLib, /* wMajor = */ 1, /* wMinor = */ 0>,
   public IDispEventImpl<54, CCBuddySink>
{
public:
   CCBuddySink()
   {
   }

   DECLARE_REGISTRY_RESOURCEID(IDR_CBUDDYSINK)


   BEGIN_COM_MAP(CCBuddySink)
      COM_INTERFACE_ENTRY(ICBuddySink)
      COM_INTERFACE_ENTRY2(IDispatch, DBuddyEvents)
      COM_INTERFACE_ENTRY(DBuddyEvents)
   END_COM_MAP()

   BEGIN_SINK_MAP(CCBuddySink)
   END_SINK_MAP()



   DECLARE_PROTECT_FINAL_CONSTRUCT()

   HRESULT FinalConstruct()
   {
      return S_OK;
   }

   void FinalRelease()
   {
   }

public:


   // DBuddyEvents Methods
public:
};

OBJECT_ENTRY_AUTO(__uuidof(CBuddySink), CCBuddySink)
