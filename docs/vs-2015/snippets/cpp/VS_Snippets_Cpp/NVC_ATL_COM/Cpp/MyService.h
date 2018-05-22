// MyService.h : Declaration of the CMyService

#pragma once
#include "resource.h"       // main symbols

#include "NVC_ATL_COM.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif



// CMyService

class ATL_NO_VTABLE CMyService :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CMyService, &CLSID_MyService>,
   public IServiceProviderImpl<CMyService>,
	public IMyService,
   public IBindHost
{
public:
	CMyService()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_MYSERVICE)

IUnknown* m_spClientSite;

// <Snippet57>
BEGIN_SERVICE_MAP(CMyService)
   SERVICE_ENTRY(SID_SBindHost)  // This object supports the SBindHost service
   SERVICE_ENTRY_CHAIN(m_spClientSite) // Everything else, just ask the container
END_SERVICE_MAP()
// </Snippet57>

BEGIN_COM_MAP(CMyService)
	COM_INTERFACE_ENTRY(IMyService)
   COM_INTERFACE_ENTRY(IBindHost)
END_COM_MAP()

   STDMETHOD(CreateMoniker)( 
      /* [in] */ LPOLESTR szName,
      /* [in] */ IBindCtx *pBC,
      /* [out] */ IMoniker **ppmk,
      /* [in] */ DWORD dwReserved)
   {
      UNREFERENCED_PARAMETER(szName);
      UNREFERENCED_PARAMETER(pBC);
      UNREFERENCED_PARAMETER(ppmk);
      UNREFERENCED_PARAMETER(dwReserved);
      ATLTRACENOTIMPL(_T("IBindHost::CreateMoniker"));
   }

   STDMETHOD(MonikerBindToStorage)( 
      /* [in] */ IMoniker *pMk,
      /* [in] */ IBindCtx *pBC,
      /* [in] */ IBindStatusCallback *pBSC,
      /* [in] */ REFIID riid,
      /* [out] */ void **ppvObj)
   {
      UNREFERENCED_PARAMETER(pMk);
      UNREFERENCED_PARAMETER(pBC);
      UNREFERENCED_PARAMETER(pBSC);
      UNREFERENCED_PARAMETER(riid);
      UNREFERENCED_PARAMETER(ppvObj);
      ATLTRACENOTIMPL(_T("IBindHost::MonikerBindToStorage"));
   }

   STDMETHOD(MonikerBindToObject)( 
      /* [in] */ IMoniker *pMk,
      /* [in] */ IBindCtx *pBC,
      /* [in] */ IBindStatusCallback *pBSC,
      /* [in] */ REFIID riid,
      /* [out] */ void **ppvObj)
   {
      UNREFERENCED_PARAMETER(pMk);
      UNREFERENCED_PARAMETER(pBC);
      UNREFERENCED_PARAMETER(pBSC);
      UNREFERENCED_PARAMETER(riid);
      UNREFERENCED_PARAMETER(ppvObj);
      ATLTRACENOTIMPL(_T("IBindHost::MonikerBindToObject"));
   }


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

OBJECT_ENTRY_AUTO(__uuidof(MyService), CMyService)
