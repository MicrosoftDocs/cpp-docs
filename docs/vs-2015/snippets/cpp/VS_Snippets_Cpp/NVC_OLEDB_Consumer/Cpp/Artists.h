// Artists.h : Declaration of the CArtists

#pragma once

// code generated on Monday, November 20, 2006, 2:33 PM

class CArtistsGenAccessor
{
public:
   SHORT m_Age;
   TCHAR m_FirstName[21];
   TCHAR m_LastName[31];

   // The following wizard-generated data members contain status
   // values for the corresponding fields in the column map. You
   // can use these values to hold NULL values that the database
   // returns or to hold error information when the compiler returns
   // errors. See Field Status Data Members in Wizard-Generated
   // Accessors in the Visual C++ documentation for more information
   // on using these fields.
   // NOTE: You must initialize these fields before setting/inserting data!

   DBSTATUS m_dwAgeStatus;
   DBSTATUS m_dwFirstNameStatus;
   DBSTATUS m_dwLastNameStatus;

   // The following wizard-generated data members contain length
   // values for the corresponding fields in the column map.
   // NOTE: For variable-length columns, you must initialize these
   //       fields before setting/inserting data!

   DBLENGTH m_dwAgeLength;
   DBLENGTH m_dwFirstNameLength;
   DBLENGTH m_dwLastNameLength;


   void GetRowsetProperties(CDBPropSet* pPropSet)
   {
      pPropSet->AddProperty(DBPROP_CANFETCHBACKWARDS, true, DBPROPOPTIONS_OPTIONAL);
      pPropSet->AddProperty(DBPROP_CANSCROLLBACKWARDS, true, DBPROPOPTIONS_OPTIONAL);
      pPropSet->AddProperty(DBPROP_IRowsetChange, true, DBPROPOPTIONS_OPTIONAL);
      pPropSet->AddProperty(DBPROP_UPDATABILITY, DBPROPVAL_UP_CHANGE | DBPROPVAL_UP_INSERT | DBPROPVAL_UP_DELETE);
   }

   HRESULT OpenDataSource()
   {
      CDataSource _db;
      HRESULT hr;
      hr = _db.OpenFromInitializationString(L"Provider=Microsoft.Jet.OLEDB.4.0;User ID=Admin;Data Source=C:\\Documents and Settings\\Laren\\My Documents\\Visual Studio 2005\\Projects\\NVC_OLEDB_Consumer\\Cpp\\Snippet.mdb;Mode=Share Deny None;Extended Properties=\"\";Jet OLEDB:System database=\"\";Jet OLEDB:Registry Path=\"\";Jet OLEDB:Database Password=\"\";Jet OLEDB:Engine Type=5;Jet OLEDB:Database Locking Mode=1;Jet OLEDB:Global Partial Bulk Ops=2;Jet OLEDB:Global Bulk Transactions=1;Jet OLEDB:New Database Password=\"\";Jet OLEDB:Create System Database=False;Jet OLEDB:Encrypt Database=False;Jet OLEDB:Don't Copy Locale on Compact=False;Jet OLEDB:Compact Without Replica Repair=False;Jet OLEDB:SFP=False");
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

   DEFINE_COMMAND_EX(CArtistsGenAccessor, L" \
   SELECT \
      Age, \
      FirstName, \
      LastName \
      FROM Artists")


   // In order to fix several issues with some providers, the code below may bind
   // columns in a different order than reported by the provider

   BEGIN_COLUMN_MAP(CArtistsGenAccessor)
      COLUMN_ENTRY_LENGTH_STATUS(1, m_Age, m_dwAgeLength, m_dwAgeStatus)
      COLUMN_ENTRY_LENGTH_STATUS(2, m_FirstName, m_dwFirstNameLength, m_dwFirstNameStatus)
      COLUMN_ENTRY_LENGTH_STATUS(3, m_LastName, m_dwLastNameLength, m_dwLastNameStatus)
   END_COLUMN_MAP()
};

// <Snippet15>
class CArtistsAccessor
{
public:
// Data Elements
   TCHAR m_szFirstName[21];
   TCHAR m_szLastName[31];
   short m_nAge;

// Output binding map
BEGIN_ACCESSOR_MAP(CArtistsAccessor, 2)
   BEGIN_ACCESSOR(0, true)
      COLUMN_ENTRY(1, m_szFirstName)
      COLUMN_ENTRY(2, m_szLastName)
   END_ACCESSOR()
   BEGIN_ACCESSOR(1, false) // Not an auto accessor
      COLUMN_ENTRY(3, m_nAge)
   END_ACCESSOR()
END_ACCESSOR_MAP()

   HRESULT OpenDataSource()
   {
      CDataSource _db;
      _db.Open();
      return m_session.Open(_db);
   }

   void CloseDataSource()
   {
      m_session.Close();
   }

   CSession m_session;

   DEFINE_COMMAND_EX(CArtistsAccessor, L" \
   SELECT \
      FirstName, \
      LastName, \
      Age \
      FROM Artists")
};
// </Snippet15>

// <Snippet16>
class CArtistsColumn
{
public:
// Data Elements
   short m_nAge;
   TCHAR m_szFirstName[21];
   TCHAR m_szLastName[31];

// Output binding map
BEGIN_COLUMN_MAP(CArtistsColumn)
   COLUMN_ENTRY(1, m_nAge)
   COLUMN_ENTRY(2, m_szFirstName)
   COLUMN_ENTRY(3, m_szLastName)
END_COLUMN_MAP()

// Parameter binding map
BEGIN_PARAM_MAP(CArtistsColumn)
   COLUMN_ENTRY(1, m_nAge)
END_PARAM_MAP()

   HRESULT OpenDataSource()
   {
      CDataSource _db;
      _db.Open();
      return m_session.Open(_db);
   }

   void CloseDataSource()
   {
      m_session.Close();
   }

   CSession m_session;

   DEFINE_COMMAND_EX(CArtistsColumn, L" \
   SELECT \
      Age, \
      FirstName, \
      LastName \
      FROM Artists \
      WHERE Age < ?")
};
// </Snippet16>

// <Snippet17>
class CArtistsBookmark
{
public:
// Data Elements
   CBookmark<4> m_bookmark;
   short m_nAge;
   TCHAR m_szFirstName[21];
   TCHAR m_szLastName[31];

// Output binding map
BEGIN_COLUMN_MAP(CArtistsBookmark)
   BOOKMARK_ENTRY(m_bookmark)
   COLUMN_ENTRY(1, m_nAge)
   COLUMN_ENTRY(2, m_szFirstName)
   COLUMN_ENTRY(3, m_szLastName)
END_COLUMN_MAP()

   void GetRowsetProperties(CDBPropSet* pPropSet)
   {
      pPropSet->AddProperty(DBPROP_BOOKMARKS, true);
   }

   HRESULT OpenDataSource()
   {
      CDataSource _db;
      _db.Open();
      return m_session.Open(_db);
   }

   void CloseDataSource()
   {
      m_session.Close();
   }

   CSession m_session;

   DEFINE_COMMAND_EX(CArtistsBookmark, L" \
   SELECT \
      Age, \
      FirstName, \
      LastName \
      FROM Artists")
};
// </Snippet17>

// <Snippet18>
class CArtistsProperty
{
public:
   short m_nReturn;
   short m_nAge;
   TCHAR m_szFirstName[21];
   TCHAR m_szLastName[31];

BEGIN_PARAM_MAP(CArtistsProperty)
   SET_PARAM_TYPE(DBPARAMIO_OUTPUT)
   COLUMN_ENTRY(1, m_nReturn)
   SET_PARAM_TYPE(DBPARAMIO_INPUT)
   COLUMN_ENTRY(2, m_nAge)
END_PARAM_MAP()

BEGIN_COLUMN_MAP(CArtistsProperty)
   COLUMN_ENTRY(1, m_szFirstName)
   COLUMN_ENTRY(2, m_szLastName)
END_COLUMN_MAP()

   HRESULT OpenDataSource()
   {
      CDataSource _db;
      _db.Open();
      return m_session.Open(_db);
   }

   void CloseDataSource()
   {
      m_session.Close();
   }

   CSession m_session;

   DEFINE_COMMAND_EX(CArtistsProperty, L" \
      { ? = SELECT Age FROM Artists WHERE Age < ? }")
};
// </Snippet18>

//class CArtists : public CCommand<CAccessor<CArtistsGenAccessor> >
class CArtists : public CCommand<CAccessor<CArtistsAccessor> >
//class CArtists : public CCommand<CAccessor<CArtistsColumn> >
//class CArtists : public CCommand<CAccessor<CArtistsBookmark> >
//class CArtists : public CCommand<CAccessor<CArtistsProperty> >
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
      HRESULT hr = Open(m_session, NULL, pPropSet);
#ifdef _DEBUG
      if(FAILED(hr))
         AtlTraceErrorRecords(hr);
#endif
      return hr;
   }

   void CloseAll()
   {
      Close();
      ReleaseCommand();
      CloseDataSource();
   }
};


