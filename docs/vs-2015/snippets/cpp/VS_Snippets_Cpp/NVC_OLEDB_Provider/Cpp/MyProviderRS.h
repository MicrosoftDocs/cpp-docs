// MyProviderRS.h : Declaration of the CMyProviderRowset

#pragma once

#include "resource.h"       // main symbols
#include "NVC_OLEDB_Provider.h"

class CMyProviderWindowsFile: 
	public WIN32_FIND_DATA
{
public:

// <Snippet4>
BEGIN_PROVIDER_COLUMN_MAP(CMyProviderWindowsFile)
	PROVIDER_COLUMN_ENTRY("FileAttributes", 1, dwFileAttributes)
	PROVIDER_COLUMN_ENTRY("FileSizeHigh", 2, nFileSizeHigh)
	PROVIDER_COLUMN_ENTRY("FileSizeLow", 3, nFileSizeLow)
	PROVIDER_COLUMN_ENTRY_STR("FileName", 4, cFileName)
	PROVIDER_COLUMN_ENTRY_STR("AltFileName", 5, cAlternateFileName)
END_PROVIDER_COLUMN_MAP()
// </Snippet4>

};

// CMyProviderCommand
class ATL_NO_VTABLE CMyProviderCommand : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public IAccessorImpl<CMyProviderCommand>,
	public ICommandTextImpl<CMyProviderCommand>,
	public ICommandPropertiesImpl<CMyProviderCommand>,
	public IObjectWithSiteImpl<CMyProviderCommand>,
	public IConvertTypeImpl<CMyProviderCommand>,
	public IColumnsInfoImpl<CMyProviderCommand>,
	public IInternalCommandConnectionImpl<CMyProviderCommand>

{
public:

BEGIN_COM_MAP(CMyProviderCommand)
	COM_INTERFACE_ENTRY(ICommand)
	COM_INTERFACE_ENTRY(IObjectWithSite)
	COM_INTERFACE_ENTRY(IAccessor)
	COM_INTERFACE_ENTRY(ICommandProperties)
	COM_INTERFACE_ENTRY2(ICommandText, ICommand)
	COM_INTERFACE_ENTRY(IColumnsInfo)
	COM_INTERFACE_ENTRY(IConvertType)
	COM_INTERFACE_ENTRY(IInternalConnection)
END_COM_MAP()

// ICommand
public:

	HRESULT FinalConstruct()
	{
		HRESULT hr = CConvertHelper::FinalConstruct();
		if (FAILED (hr))
			return hr;
		hr = IAccessorImpl<CMyProviderCommand>::FinalConstruct();
		if (FAILED(hr))
			return hr;
		return CUtlProps<CMyProviderCommand>::FInit();
	}
	void FinalRelease()
	{
		IAccessorImpl<CMyProviderCommand>::FinalRelease();
	}

	HRESULT WINAPI Execute(IUnknown * pUnkOuter, REFIID riid, DBPARAMS * pParams, 
						  LONG * pcRowsAffected, IUnknown ** ppRowset);

	static ATLCOLUMNINFO* GetColumnInfo(CMyProviderCommand* pv, ULONG* pcInfo)
	{
		return CMyProviderWindowsFile::GetColumnInfo(pv,pcInfo);
	}

BEGIN_PROPSET_MAP(CMyProviderCommand)
	BEGIN_PROPERTY_SET(DBPROPSET_ROWSET)
		PROPERTY_INFO_ENTRY(IAccessor)
		PROPERTY_INFO_ENTRY(IColumnsInfo)
		PROPERTY_INFO_ENTRY(IConvertType)
		PROPERTY_INFO_ENTRY(IRowset)
		PROPERTY_INFO_ENTRY(IRowsetIdentity)
		PROPERTY_INFO_ENTRY(IRowsetInfo)
		PROPERTY_INFO_ENTRY(IRowsetLocate)
		PROPERTY_INFO_ENTRY(BOOKMARKS)
		PROPERTY_INFO_ENTRY(BOOKMARKSKIPPED)
		PROPERTY_INFO_ENTRY(BOOKMARKTYPE)
		PROPERTY_INFO_ENTRY(CANFETCHBACKWARDS)
		PROPERTY_INFO_ENTRY(CANHOLDROWS)
		PROPERTY_INFO_ENTRY(CANSCROLLBACKWARDS)
		PROPERTY_INFO_ENTRY(LITERALBOOKMARKS)
		PROPERTY_INFO_ENTRY(ORDEREDBOOKMARKS)
	END_PROPERTY_SET(DBPROPSET_ROWSET)
END_PROPSET_MAP()

};

class CMyProviderRowset : 
	public CRowsetImpl< CMyProviderRowset, CMyProviderWindowsFile, CMyProviderCommand>
{
public:

	HRESULT Execute(DBPARAMS * /*pParams*/, LONG* pcRowsAffected)
	{
		HANDLE hFile;

		CW2TEX<_MAX_PATH> szDir(m_strCommandText == L"" ? L"*.*" : m_strCommandText);

		CMyProviderWindowsFile wf;
		hFile = FindFirstFile(szDir, &wf);
		if (hFile == INVALID_HANDLE_VALUE)
			return DB_E_ERRORSINCOMMAND;
		LONG cFiles = 1;
		BOOL bMoreFiles = TRUE;
		while (bMoreFiles)
		{
			_ATLTRY
			{
				m_rgRowData.Add(wf);
			}
			_ATLCATCH( e )
			{
				_ATLDELETEEXCEPTION( e )
				return E_OUTOFMEMORY;
			}
			bMoreFiles = FindNextFile(hFile, &wf);
			cFiles++;
		}
		FindClose(hFile);
		if (pcRowsAffected != NULL)
			*pcRowsAffected = cFiles;
		return S_OK;
	}

// <Snippet1>
   static ATLCOLUMNINFO* GetColumnInfo(CMyProviderRowset* pRowset, DBORDINAL* pcCols)
   {
      // Add your implementation here and/or call the base class

      return CRowsetImpl::GetColumnInfo(pRowset, pcCols);
   }
// </Snippet1>
};


