// MySuppErrClass.h : Declaration of the CMySuppErrClass

#pragma once
#include "resource.h"       // main symbols

#include "NVC_ATL_COM.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif



// CMySuppErrClass

// <Snippet48>
class ATL_NO_VTABLE CMySuppErrClass :
   public CComObjectRootEx<CComSingleThreadModel>,
   public CComCoClass<CMySuppErrClass, &CLSID_MySuppErrClass>,
   public ISupportErrorInfoImpl<&IID_IMySuppErrClass>,
   public IDispatchImpl<IMySuppErrClass, &IID_IMySuppErrClass, &LIBID_NVC_ATL_COMLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
// </Snippet48>
{
public:
   CMySuppErrClass()
   {
   }

DECLARE_REGISTRY_RESOURCEID(IDR_MYSUPPERRCLASS)


BEGIN_COM_MAP(CMySuppErrClass)
   COM_INTERFACE_ENTRY(IMySuppErrClass)
   COM_INTERFACE_ENTRY(IDispatch)
   COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

// ISupportsErrorInfo
   STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);


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

OBJECT_ENTRY_AUTO(__uuidof(MySuppErrClass), CMySuppErrClass)
