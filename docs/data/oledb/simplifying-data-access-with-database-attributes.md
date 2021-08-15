---
description: "Learn more about: Simplifying Data Access with Database Attributes"
title: "Simplifying Data Access with Database Attributes"
ms.date: "10/19/2018"
helpviewer_keywords: ["attributes [C++], database", "attributes [C++], data access", "databases [C++], attributes", "data [C++], simplifying access", "data access [C++], database attributes", "database attributes [C++]", "OLE DB consumers [C++], database attributes", "attributes [C++], OLE DB consumer"]
ms.assetid: 560d2456-e307-4cb7-ba7b-4d0ed674697f
---
# Simplifying Data Access with Database Attributes

This topic demonstrates the use of database attributes to simplify database operations.

The basic way to access information from a database is to create a command (or table) class and a user record class for a particular table in the database. The database attributes simplify some of the template declarations that you previously had to do.

To demonstrate the use of database attributes, the following sections show two equivalent table and user record class declarations: the first uses attributes and the second uses OLE DB Templates. Such declaration code is typically placed in a header file named for the table or command object, for example, Authors.h.

By comparing the two files, you can see how much simpler it's to use attributes. Among the differences are:

- Using attributes, you only have to declare one class: `CAuthors`, while with templates you have to declare two: `CAuthorsNoAttrAccessor` and `CAuthorsNoAttr`.

- The `db_source` call in the attributed version is equivalent to the `OpenDataSource()` call in the template declaration.

- The `db_table` call in the attributed version is equivalent to the following template declaration:

    ```cpp
    class CAuthorsNoAttr : public CTable<CAccessor<CAuthorsNoAttrAccessor>>
    ```

- The `db_column` calls in the attributed version are equivalent to the column map (see `BEGIN_COLUMN_MAP ... END_COLUMN_MAP`) in the template declaration.

The attributes inject a user record class declaration for you. The user record class is equal to `CAuthorsNoAttrAccessor` in the template declaration. If your table class is `CAuthors`, the injected user record class is named `CAuthorsAccessor`, and you can only view its declaration in injected code. For more information, see "Attribute-Injected User Record Classes" in [User Records](../../data/oledb/user-records.md).

In both the attributed and the templated code, you must set rowset properties using `CDBPropSet::AddProperty`.

For information about the attributes discussed in this topic, see [OLE DB Consumer Attributes](../../windows/attributes/ole-db-consumer-attributes.md).

> [!NOTE]
> The following `include` statements are required to compile the examples below:

> ```cpp
> #include <atlbase.h>
> #include <atlplus.h>
> #include <atldbcli.h>
> ```

## Table and Accessor Declaration Using Attributes

The following code calls `db_source` and `db_table` on the table class. `db_source` specifies the data source and connection to be used. `db_table` injects the appropriate template code to declare a table class. `db_column` specify the column map and inject the accessor declaration. You can use OLE DB consumer attributes in any project that supports ATL.

Here is the table and accessor declaration using attributes:

```cpp
//////////////////////////////////////////////////////////////////////
// Table and accessor declaration using attributes
// authors.h
//////////////////////////////////////////////////////////////////////

// Table class declaration
// (Note that you must provide your own connection string for db_source.)
[
   db_source(L"your connection string"),
   db_table("Authors")
]
class CAuthors
{
public:
   DBSTATUS m_dwAuIDStatus;
   DBSTATUS m_dwAuthorStatus;
   DBSTATUS m_dwYearBornStatus;
   DBLENGTH m_dwAuIDLength;
   DBLENGTH m_dwAuthorLength;
   DBLENGTH m_dwYearBornLength;
   [db_column("1", status = "m_dwAuIDStatus", length = "m_dwAuIDLength")] LONG m_AuID;
   [db_column("2", status = "m_dwAuthorStatus", length = "m_dwAuthorLength")] TCHAR m_Author[51];
   [db_column("3", status = "m_dwYearBornStatus", length = "m_dwYearBornLength")] SHORT m_YearBorn;
   void GetRowsetProperties(CDBPropSet* pPropSet)
   {
      pPropSet->AddProperty(DBPROP_CANFETCHBACKWARDS, true);
      pPropSet->AddProperty(DBPROP_CANSCROLLBACKWARDS, true);
      pPropSet->AddProperty(DBPROP_IRowsetChange, true);
   }
};
```

## Table and Accessor Declaration Using Templates

Here is the table and accessor declaration using templates.

```cpp
//////////////////////////////////////////////////////////////////////
// Table and user record class declaration using templates
// authors.h
//////////////////////////////////////////////////////////////////////

// User record class declaration
class CAuthorsNoAttrAccessor
{
public:
   DWORD m_dwAuIDStatus;
   DWORD m_dwAuthorStatus;
   DWORD m_dwYearBornStatus;
   DWORD m_dwAuIDLength;
   DWORD m_dwAuthorLength;
   DWORD m_dwYearBornLength;
   LONG m_AuID;
   TCHAR m_Author[51];
   SHORT m_YearBorn;
   void GetRowsetProperties(CDBPropSet* pPropSet)
   {
      pPropSet->AddProperty(DBPROP_CANFETCHBACKWARDS, true);
      pPropSet->AddProperty(DBPROP_CANSCROLLBACKWARDS, true);
      pPropSet->AddProperty(DBPROP_IRowsetChange, true);
   }
   HRESULT OpenDataSource()
   {
      CDataSource _db;

HRESULT hr;
      hr = _db.OpenFromInitializationString(L"your connection string");
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
   BEGIN_COLUMN_MAP(CAuthorsNoAttrAccessor)
      COLUMN_ENTRY_LENGTH_STATUS(1, m_AuID, m_dwAuIDLength, m_dwAuIDStatus)
      COLUMN_ENTRY_LENGTH_STATUS(2, m_Author, m_dwAuthorLength, m_dwAuthorStatus)
      COLUMN_ENTRY_LENGTH_STATUS(3, m_YearBorn, m_dwYearBornLength, m_dwYearBornStatus)
   END_COLUMN_MAP()
};
class CAuthorsNoAttr : public CTable<CAccessor<CAuthorsNoAttrAccessor>>
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
            propset.AddProperty(DBPROP_IRowsetLocate, true);
         }
         GetRowsetProperties(&propset);
         return OpenRowset(&propset);
      }
      __if_not_exists(GetRowsetProperties)
      {
         __if_exists(HasBookmark)
         {
            CDBPropSet propset(DBPROPSET_ROWSET);
            propset.AddProperty(DBPROP_IRowsetLocate, true);
            return OpenRowset(&propset);
         }
      }
      return OpenRowset();
   }
   HRESULT OpenRowset(DBPROPSET *pPropSet = NULL)
   {
HRESULT hr = Open(m_session, "Authors", pPropSet);
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
```

## See also

[OLE DB Consumer Attributes](../../windows/attributes/ole-db-consumer-attributes.md)
