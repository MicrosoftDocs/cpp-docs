// CustomerTable.h : Declaration of the CCustomerTable

#pragma once

// code generated on Monday, November 20, 2006, 1:59 PM

class CCustomerTableAccessor
{
public:
   LONG m_BillingID;
   TCHAR m_ContactFirstName[31];
   LONG m_CustomerID;
   TCHAR m_L_Name[51];
   TCHAR m_PostalCode[21];

   // The following wizard-generated data members contain status
   // values for the corresponding fields in the column map. You
   // can use these values to hold NULL values that the database
   // returns or to hold error information when the compiler returns
   // errors. See Field Status Data Members in Wizard-Generated
   // Accessors in the Visual C++ documentation for more information
   // on using these fields.
   // NOTE: You must initialize these fields before setting/inserting data!

   DBSTATUS m_dwBillingIDStatus;
   DBSTATUS m_dwContactFirstNameStatus;
   DBSTATUS m_dwCustomerIDStatus;
   DBSTATUS m_dwL_NameStatus;
   DBSTATUS m_dwPostalCodeStatus;

   // The following wizard-generated data members contain length
   // values for the corresponding fields in the column map.
   // NOTE: For variable-length columns, you must initialize these
   //       fields before setting/inserting data!

   DBLENGTH m_dwBillingIDLength;
   DBLENGTH m_dwContactFirstNameLength;
   DBLENGTH m_dwCustomerIDLength;
   DBLENGTH m_dwL_NameLength;
   DBLENGTH m_dwPostalCodeLength;


   void GetRowsetProperties(CDBPropSet* pPropSet)
   {
      pPropSet->AddProperty(DBPROP_CANFETCHBACKWARDS, true, DBPROPOPTIONS_OPTIONAL);
      pPropSet->AddProperty(DBPROP_CANSCROLLBACKWARDS, true, DBPROPOPTIONS_OPTIONAL);
      pPropSet->AddProperty(DBPROP_IRowsetChange, true, DBPROPOPTIONS_OPTIONAL);
      pPropSet->AddProperty(DBPROP_UPDATABILITY, DBPROPVAL_UP_INSERT);
   }

   HRESULT OpenDataSource()
   {
      CDataSource _db;
      HRESULT hr;
      hr = _db.OpenFromInitializationString(L"Provider=Microsoft.Jet.OLEDB.4.0;User ID=Admin;Data Source=Snippet.mdb;Mode=Share Deny None;Extended Properties=\"\";Jet OLEDB:System database=\"\";Jet OLEDB:Registry Path=\"\";Jet OLEDB:Database Password=\"\";Jet OLEDB:Engine Type=5;Jet OLEDB:Database Locking Mode=1;Jet OLEDB:Global Partial Bulk Ops=2;Jet OLEDB:Global Bulk Transactions=1;Jet OLEDB:New Database Password=\"\";Jet OLEDB:Create System Database=False;Jet OLEDB:Encrypt Database=False;Jet OLEDB:Don't Copy Locale on Compact=False;Jet OLEDB:Compact Without Replica Repair=False;Jet OLEDB:SFP=False");
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

   BEGIN_COLUMN_MAP(CCustomerTableAccessor)
      COLUMN_ENTRY_LENGTH_STATUS(5, m_BillingID, m_dwBillingIDLength, m_dwBillingIDStatus)
      COLUMN_ENTRY_LENGTH_STATUS(2, m_ContactFirstName, m_dwContactFirstNameLength, m_dwContactFirstNameStatus)
      COLUMN_ENTRY_LENGTH_STATUS(1, m_CustomerID, m_dwCustomerIDLength, m_dwCustomerIDStatus)
      COLUMN_ENTRY_LENGTH_STATUS(4, m_L_Name, m_dwL_NameLength, m_dwL_NameStatus)
      COLUMN_ENTRY_LENGTH_STATUS(3, m_PostalCode, m_dwPostalCodeLength, m_dwPostalCodeStatus)
   END_COLUMN_MAP()
};

class CCustomerTable : public CTable<CAccessor<CCustomerTableAccessor> >
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
      return OpenRowset();
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


