// MyProviderDS.h : Declaration of the CMyProviderSource

#pragma once

#include "resource.h"       // main symbols
#include "MyProviderRS.h"
#include "MyProviderSess.h"


// CMyProviderSource

class ATL_NO_VTABLE CMyProviderSource : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CMyProviderSource, &CLSID_MyProvider>,
	public IDBCreateSessionImpl<CMyProviderSource, CMyProviderSession>,
	public IDBInitializeImpl<CMyProviderSource>,
	public IDBPropertiesImpl<CMyProviderSource>,
	public IPersistImpl<CMyProviderSource>,
	public IInternalConnectionImpl<CMyProviderSource>
{
public:
	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return FInit();
	}
	
	void FinalRelease() 
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_MYPROVIDER)
BEGIN_COM_MAP(CMyProviderSource)
	COM_INTERFACE_ENTRY(IDBCreateSession)
	COM_INTERFACE_ENTRY(IDBInitialize)
	COM_INTERFACE_ENTRY(IDBProperties)
	COM_INTERFACE_ENTRY(IPersist)
	COM_INTERFACE_ENTRY(IInternalConnection)
END_COM_MAP()

// <Snippet3>
BEGIN_PROPSET_MAP(CMyProviderSource)
	BEGIN_PROPERTY_SET(DBPROPSET_DATASOURCEINFO)
		PROPERTY_INFO_ENTRY(ACTIVESESSIONS)
		PROPERTY_INFO_ENTRY(DATASOURCEREADONLY)
		PROPERTY_INFO_ENTRY(BYREFACCESSORS)
		PROPERTY_INFO_ENTRY(OUTPUTPARAMETERAVAILABILITY)
		PROPERTY_INFO_ENTRY(PROVIDEROLEDBVER)
		PROPERTY_INFO_ENTRY(DSOTHREADMODEL)
		PROPERTY_INFO_ENTRY(SUPPORTEDTXNISOLEVELS)
		PROPERTY_INFO_ENTRY(USERNAME)
	END_PROPERTY_SET(DBPROPSET_DATASOURCEINFO)
	BEGIN_PROPERTY_SET(DBPROPSET_DBINIT)
		PROPERTY_INFO_ENTRY(AUTH_PASSWORD)
		PROPERTY_INFO_ENTRY(AUTH_PERSIST_SENSITIVE_AUTHINFO)
		PROPERTY_INFO_ENTRY(AUTH_USERID)
		PROPERTY_INFO_ENTRY(INIT_DATASOURCE)
		PROPERTY_INFO_ENTRY(INIT_HWND)
		PROPERTY_INFO_ENTRY(INIT_LCID)
		PROPERTY_INFO_ENTRY(INIT_LOCATION)
		PROPERTY_INFO_ENTRY(INIT_MODE)
		PROPERTY_INFO_ENTRY(INIT_PROMPT)
		PROPERTY_INFO_ENTRY(INIT_PROVIDERSTRING)
		PROPERTY_INFO_ENTRY(INIT_TIMEOUT)
	END_PROPERTY_SET(DBPROPSET_DBINIT)
	CHAIN_PROPERTY_SET(CMyProviderSession)
	CHAIN_PROPERTY_SET(CMyProviderCommand)
END_PROPSET_MAP()
// </Snippet3>

public:
// <Snippet2>
   HRESULT OnPropertyChanged(ULONG /*iCurSet*/, DBPROP* pDBProp)
   {
      ATLASSERT(pDBProp != NULL);

      DWORD dwPropertyID = pDBProp->dwPropertyID;

      if (dwPropertyID == DBPROP_IRowsetLocate || 
         dwPropertyID == DBPROP_LITERALBOOKMARKS ||
         dwPropertyID == DBPROP_ORDEREDBOOKMARKS)
      {
         CComVariant var = pDBProp->vValue;

         if (var.boolVal == VARIANT_TRUE)
         {
            // Set the bookmarks property as these are chained
            CComVariant bookVar(true);
            CDBPropSet set(DBPROPSET_ROWSET);
            set.AddProperty(DBPROP_BOOKMARKS, bookVar);

            return SetProperties(1, &set);
         }
      }

      return S_OK;
   }
// </Snippet2>
};

OBJECT_ENTRY_AUTO(__uuidof(MyProvider), CMyProviderSource)
