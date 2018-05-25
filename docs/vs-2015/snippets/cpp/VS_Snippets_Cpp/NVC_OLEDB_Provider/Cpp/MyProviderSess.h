// MyProviderSess.h : Declaration of the CMyProviderSession

#pragma once

#include "resource.h"       // main symbols
#include "MyProviderRS.h"
#include <strsafe.h>

class CMyProviderSessionTRSchemaRowset;
class CMyProviderSessionColSchemaRowset;
class CMyProviderSessionPTSchemaRowset;


// CMyProviderSession
class ATL_NO_VTABLE CMyProviderSession : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public IGetDataSourceImpl<CMyProviderSession>,
	public IOpenRowsetImpl<CMyProviderSession>,
	public ISessionPropertiesImpl<CMyProviderSession>,
	public IObjectWithSiteSessionImpl<CMyProviderSession>,
	public IDBSchemaRowsetImpl<CMyProviderSession>,
	public IDBCreateCommandImpl<CMyProviderSession, CMyProviderCommand>
{
public:
	CMyProviderSession()
	{
	}

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return FInit();
	}
	
	void FinalRelease() 
	{
	}

	STDMETHOD(OpenRowset)(IUnknown *pUnk, DBID *pTID, DBID *pInID, REFIID riid,
					   ULONG cSets, DBPROPSET rgSets[], IUnknown **ppRowset)
	{
		CMyProviderRowset* pRowset;
		return CreateRowset(pUnk, pTID, pInID, riid, cSets, rgSets, ppRowset, pRowset);
	}

	void SetRestrictions(ULONG cRestrictions, GUID* rguidSchema, ULONG* rgRestrictions)
	{
		for (ULONG l=0; l<cRestrictions; l++)
		{
			// We support restrictions on the table name but nothing else
			if (InlineIsEqualGUID(rguidSchema[l], DBSCHEMA_TABLES))
				rgRestrictions[l] = 0x04;
			else if (InlineIsEqualGUID(rguidSchema[l], DBSCHEMA_COLUMNS))
				rgRestrictions[l] = 0x04;
			else if (InlineIsEqualGUID(rguidSchema[l], DBSCHEMA_PROVIDER_TYPES))
				rgRestrictions[l] = 0x00;
		}
	}

BEGIN_PROPSET_MAP(CMyProviderSession)
	BEGIN_PROPERTY_SET(DBPROPSET_SESSION)
		PROPERTY_INFO_ENTRY(SESS_AUTOCOMMITISOLEVELS)
	END_PROPERTY_SET(DBPROPSET_SESSION)
END_PROPSET_MAP()

BEGIN_COM_MAP(CMyProviderSession)
	COM_INTERFACE_ENTRY(IGetDataSource)
	COM_INTERFACE_ENTRY(IOpenRowset)
	COM_INTERFACE_ENTRY(ISessionProperties)
	COM_INTERFACE_ENTRY(IObjectWithSite)
	COM_INTERFACE_ENTRY(IDBCreateCommand)
	COM_INTERFACE_ENTRY(IDBSchemaRowset)
END_COM_MAP()

BEGIN_SCHEMA_MAP(CMyProviderSession)
	SCHEMA_ENTRY(DBSCHEMA_TABLES, CMyProviderSessionTRSchemaRowset)
	SCHEMA_ENTRY(DBSCHEMA_COLUMNS, CMyProviderSessionColSchemaRowset)
	SCHEMA_ENTRY(DBSCHEMA_PROVIDER_TYPES, CMyProviderSessionPTSchemaRowset)
END_SCHEMA_MAP()

};

class CMyProviderSessionTRSchemaRowset : 
	public CSchemaRowsetImpl< CMyProviderSessionTRSchemaRowset, CTABLESRow, CMyProviderSession>
{
public:
BEGIN_PROPSET_MAP(CMyProviderSessionTRSchemaRowset)
	BEGIN_PROPERTY_SET(DBPROPSET_ROWSET)
		PROPERTY_INFO_ENTRY(IAccessor)
		PROPERTY_INFO_ENTRY(IColumnsInfo)
		PROPERTY_INFO_ENTRY(IConvertType)
		PROPERTY_INFO_ENTRY(IRowset)
		PROPERTY_INFO_ENTRY(IRowsetIdentity)
		PROPERTY_INFO_ENTRY(IRowsetInfo)
		PROPERTY_INFO_ENTRY(CANFETCHBACKWARDS)
		PROPERTY_INFO_ENTRY(CANHOLDROWS)
		PROPERTY_INFO_ENTRY(CANSCROLLBACKWARDS)
		PROPERTY_INFO_ENTRY_VALUE(MAXOPENROWS, 0)
		PROPERTY_INFO_ENTRY_VALUE(MAXROWS, 0)
	END_PROPERTY_SET(DBPROPSET_ROWSET)
END_PROPSET_MAP()

	HRESULT Execute(LONG* pcRowsAffected, ULONG, const VARIANT*)
	{
		CMyProviderWindowsFile wf;
		CTABLESRow trData;
		HRESULT hr;
		hr = StringCchCopy(trData.m_szType,sizeof(trData.m_szType)/sizeof(trData.m_szType[0]),OLESTR("TABLE"));
		if (FAILED(hr))
			return E_FAIL;
		hr = StringCchCopy(trData.m_szDesc,sizeof(trData.m_szDesc)/sizeof(trData.m_szDesc[0]),OLESTR("The Directory Table"));
		if (FAILED(hr))
			return E_FAIL;

		HANDLE hFile = INVALID_HANDLE_VALUE;
		TCHAR szDir[MAX_PATH + 1];
		TCHAR szWildcard[] = _T("\\*.*");
		DWORD cchWildcard = sizeof(szWildcard)/sizeof(szWildcard[0]);
		DWORD cbCurDir = GetCurrentDirectory(MAX_PATH - cchWildcard, szDir);
		if (!cbCurDir || cbCurDir >= (MAX_PATH - cchWildcard))
			return E_FAIL;
		hr = StringCchCat(szDir,sizeof(szDir)/sizeof(szDir[0]),szWildcard);
		if (FAILED(hr))
			return E_FAIL;
		hFile = FindFirstFile(szDir, &wf);
		if (hFile == INVALID_HANDLE_VALUE)
			return E_FAIL; // User doesn't have a c:\ drive
		FindClose(hFile);
		hr = StringCchCopyNW(trData.m_szTable,sizeof(trData.m_szTable)/sizeof(trData.m_szTable[0]),CT2WEX<MAX_PATH + 1>(szDir),SIZEOF_MEMBER(CTABLESRow, m_szTable));
		if (FAILED(hr))
			return E_FAIL;
		
		if (!m_rgRowData.Add(trData))
			return E_OUTOFMEMORY;
		*pcRowsAffected = 1;
		return S_OK;
	}

	DBSTATUS GetDBStatus(CSimpleRow*, ATLCOLUMNINFO* pInfo)
	{
		if (pInfo->iOrdinal == 1 || pInfo->iOrdinal == 2)
			return DBSTATUS_S_ISNULL;
		return DBSTATUS_S_OK;
	}
};


class CMyProviderSessionColSchemaRowset : 
	public CSchemaRowsetImpl< CMyProviderSessionColSchemaRowset, CCOLUMNSRow, CMyProviderSession>
{
public:
BEGIN_PROPSET_MAP(CMyProviderSessionColSchemaRowset)
	BEGIN_PROPERTY_SET(DBPROPSET_ROWSET)
		PROPERTY_INFO_ENTRY(IAccessor)
		PROPERTY_INFO_ENTRY(IColumnsInfo)
		PROPERTY_INFO_ENTRY(IConvertType)
		PROPERTY_INFO_ENTRY(IRowset)
		PROPERTY_INFO_ENTRY(IRowsetIdentity)
		PROPERTY_INFO_ENTRY(IRowsetInfo)
		PROPERTY_INFO_ENTRY(CANFETCHBACKWARDS)
		PROPERTY_INFO_ENTRY(CANHOLDROWS)
		PROPERTY_INFO_ENTRY(CANSCROLLBACKWARDS)
		PROPERTY_INFO_ENTRY_VALUE(MAXOPENROWS, 0)
		PROPERTY_INFO_ENTRY_VALUE(MAXROWS, 0)
	END_PROPERTY_SET(DBPROPSET_ROWSET)
END_PROPSET_MAP()

	HRESULT Execute(LONG* pcRowsAffected, ULONG, const VARIANT*)
	{
		CMyProviderWindowsFile wf;
		HANDLE hFile = INVALID_HANDLE_VALUE;
		TCHAR szDir[MAX_PATH + 1];
		TCHAR szWildcard[] = _T("\\*.*");
		DWORD cchWildcard = sizeof(szWildcard)/sizeof(szWildcard[0]);
		DWORD cbCurDir = GetCurrentDirectory(MAX_PATH - cchWildcard, szDir);
		if (!cbCurDir || cbCurDir >= (MAX_PATH - cchWildcard))
			return E_FAIL;
		HRESULT hr = StringCchCat(szDir,sizeof(szDir)/sizeof(szDir[0]),szWildcard);
		if (FAILED(hr))
			return E_FAIL;
		hFile = FindFirstFile(szDir, &wf);
		if (hFile == INVALID_HANDLE_VALUE)
			return E_FAIL; // User doesn't have a c:\ drive
		FindClose(hFile);// szDir has got the tablename

		DBID dbid;
		memset(&dbid, 0, sizeof(DBID));
		CT2WEX<MAX_PATH + 1> wszDir(szDir);
		dbid.uName.pwszName = wszDir;
		dbid.eKind = DBKIND_NAME;
		return InitFromRowset < _RowsetArrayType > (m_rgRowData, &dbid, NULL, m_spUnkSite, pcRowsAffected);
	}
	DBSTATUS GetDBStatus(CSimpleRow*, ATLCOLUMNINFO* pInfo)
	{
		switch(pInfo->iOrdinal)
		{
		case 1:
		case 2:
		case 19:
		case 20:
		case 22:
		case 23:
		case 25:
		case 26:
			return DBSTATUS_S_ISNULL;
		default:
			return DBSTATUS_S_OK;
		}

	}
};

class CMyProviderSessionPTSchemaRowset : 
	public CSchemaRowsetImpl< CMyProviderSessionPTSchemaRowset, CPROVIDER_TYPERow, CMyProviderSession>
{
public:
BEGIN_PROPSET_MAP(CMyProviderSessionPTSchemaRowset)
	BEGIN_PROPERTY_SET(DBPROPSET_ROWSET)
		PROPERTY_INFO_ENTRY(IAccessor)
		PROPERTY_INFO_ENTRY(IColumnsInfo)
		PROPERTY_INFO_ENTRY(IConvertType)
		PROPERTY_INFO_ENTRY(IRowset)
		PROPERTY_INFO_ENTRY(IRowsetIdentity)
		PROPERTY_INFO_ENTRY(IRowsetInfo)
		PROPERTY_INFO_ENTRY(CANFETCHBACKWARDS)
		PROPERTY_INFO_ENTRY(CANHOLDROWS)
		PROPERTY_INFO_ENTRY(CANSCROLLBACKWARDS)
		PROPERTY_INFO_ENTRY_VALUE(MAXOPENROWS, 0)
		PROPERTY_INFO_ENTRY_VALUE(MAXROWS, 0)
	END_PROPERTY_SET(DBPROPSET_ROWSET)
END_PROPSET_MAP()

	HRESULT Execute(LONG* /*pcRowsAffected*/, ULONG, const VARIANT*)
	{
		return S_OK;
	}
};

