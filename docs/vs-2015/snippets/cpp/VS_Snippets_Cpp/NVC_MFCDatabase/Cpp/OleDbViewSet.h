// OleDbViewSet.h: interface of the CProduct class
//


#pragma once

// code generated on Tuesday, August 29, 2006, 3:19 PM

class CProductAccessor
{
public:
	LONG m_CustomerID;
	TCHAR m_ContactFirstName[31];
	TCHAR m_PostalCode[21];
	TCHAR m_L_Name[51];
	LONG m_BillingID;

	// The following wizard-generated data members contain status
	// values for the corresponding fields in the column map. You
	// can use these values to hold NULL values that the database
	// returns or to hold error information when the compiler returns
	// errors. See Field Status Data Members in Wizard-Generated
	// Accessors in the Visual C++ documentation for more information
	// on using these fields.
	// NOTE: You must initialize these fields before setting/inserting data!

	DBSTATUS m_dwCustomerIDStatus;
	DBSTATUS m_dwContactFirstNameStatus;
	DBSTATUS m_dwPostalCodeStatus;
	DBSTATUS m_dwL_NameStatus;
	DBSTATUS m_dwBillingIDStatus;

	// The following wizard-generated data members contain length
	// values for the corresponding fields in the column map.
	// NOTE: For variable-length columns, you must initialize these
	//       fields before setting/inserting data!

	DBLENGTH m_dwCustomerIDLength;
	DBLENGTH m_dwContactFirstNameLength;
	DBLENGTH m_dwPostalCodeLength;
	DBLENGTH m_dwL_NameLength;
	DBLENGTH m_dwBillingIDLength;


	void GetRowsetProperties(CDBPropSet* pPropSet)
	{
		pPropSet->AddProperty(DBPROP_CANFETCHBACKWARDS, true, DBPROPOPTIONS_OPTIONAL);
		pPropSet->AddProperty(DBPROP_CANSCROLLBACKWARDS, true, DBPROPOPTIONS_OPTIONAL);
	}

	HRESULT OpenDataSource()
	{
		CDataSource _db;
		HRESULT hr;
// The connection string below may contain plain text passwords and/or
// other sensitive information. Please remove the #error after reviewing
// the connection string for any security related issues. You may want to
// store the password in some other form or use a different user authentication.
      hr = _db.OpenFromInitializationString(L"Provider=MSDASQL.1;Persist Security Info=False;Data Source=MFC_ODBCTest;Extended Properties=\"DSN=MFC_ODBCTest;DBQ=Snippet.mdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;\"");
		if (FAILED(hr))
		{
#ifdef _DEBUG
			AtlTraceErrorRecords(hr);
#endif
			return hr;
		}
		return m_session.Open(_db);
	}

	void CloseDataSource()
	{
		m_session.Close();
	}

	operator const CSession&()
	{
		return m_session;
	}

	CSession m_session;

	BEGIN_COLUMN_MAP(CProductAccessor)
		COLUMN_ENTRY_LENGTH_STATUS(1, m_CustomerID, m_dwCustomerIDLength, m_dwCustomerIDStatus)
		COLUMN_ENTRY_LENGTH_STATUS(2, m_ContactFirstName, m_dwContactFirstNameLength, m_dwContactFirstNameStatus)
		COLUMN_ENTRY_LENGTH_STATUS(3, m_PostalCode, m_dwPostalCodeLength, m_dwPostalCodeStatus)
		COLUMN_ENTRY_LENGTH_STATUS(4, m_L_Name, m_dwL_NameLength, m_dwL_NameStatus)
		COLUMN_ENTRY_LENGTH_STATUS(5, m_BillingID, m_dwBillingIDLength, m_dwBillingIDStatus)
	END_COLUMN_MAP()
};

class CProduct : public CTable<CAccessor<CProductAccessor> >
{
public:
	HRESULT OpenAll()
	{
		HRESULT hr;
		hr = OpenDataSource();
		if (FAILED(hr))
			return hr;
		__if_exists(GetRowsetProperties)
		{
			CDBPropSet propset(DBPROPSET_ROWSET);
			__if_exists(HasBookmark)
			{
				if( HasBookmark() )
					propset.AddProperty(DBPROP_IRowsetLocate, true);
			}
			GetRowsetProperties(&propset);
			return OpenRowset(&propset);
		}
		__if_not_exists(GetRowsetProperties)
		{
			__if_exists(HasBookmark)
			{
				if( HasBookmark() )
				{
					CDBPropSet propset(DBPROPSET_ROWSET);
					propset.AddProperty(DBPROP_IRowsetLocate, true);
					return OpenRowset(&propset);
				}
			}
		}
	}

	HRESULT OpenRowset(DBPROPSET *pPropSet = NULL)
	{
		HRESULT hr = Open(m_session, L"Customer", pPropSet);
#ifdef _DEBUG
		if(FAILED(hr))
			AtlTraceErrorRecords(hr);
#endif
		return hr;
	}

	void CloseAll()
	{
		Close();
		CloseDataSource();
	}
};

