---
description: "Learn more about: CDaoQueryDef Class"
title: "CDaoQueryDef Class"
ms.date: "11/04/2016"
f1_keywords: ["CDaoQueryDef", "AFXDAO/CDaoQueryDef", "AFXDAO/CDaoQueryDef::CDaoQueryDef", "AFXDAO/CDaoQueryDef::Append", "AFXDAO/CDaoQueryDef::CanUpdate", "AFXDAO/CDaoQueryDef::Close", "AFXDAO/CDaoQueryDef::Create", "AFXDAO/CDaoQueryDef::Execute", "AFXDAO/CDaoQueryDef::GetConnect", "AFXDAO/CDaoQueryDef::GetDateCreated", "AFXDAO/CDaoQueryDef::GetDateLastUpdated", "AFXDAO/CDaoQueryDef::GetFieldCount", "AFXDAO/CDaoQueryDef::GetFieldInfo", "AFXDAO/CDaoQueryDef::GetName", "AFXDAO/CDaoQueryDef::GetODBCTimeout", "AFXDAO/CDaoQueryDef::GetParameterCount", "AFXDAO/CDaoQueryDef::GetParameterInfo", "AFXDAO/CDaoQueryDef::GetParamValue", "AFXDAO/CDaoQueryDef::GetRecordsAffected", "AFXDAO/CDaoQueryDef::GetReturnsRecords", "AFXDAO/CDaoQueryDef::GetSQL", "AFXDAO/CDaoQueryDef::GetType", "AFXDAO/CDaoQueryDef::IsOpen", "AFXDAO/CDaoQueryDef::Open", "AFXDAO/CDaoQueryDef::SetConnect", "AFXDAO/CDaoQueryDef::SetName", "AFXDAO/CDaoQueryDef::SetODBCTimeout", "AFXDAO/CDaoQueryDef::SetParamValue", "AFXDAO/CDaoQueryDef::SetReturnsRecords", "AFXDAO/CDaoQueryDef::SetSQL", "AFXDAO/CDaoQueryDef::m_pDAOQueryDef", "AFXDAO/CDaoQueryDef::m_pDatabase"]
helpviewer_keywords: ["CDaoQueryDef [MFC], CDaoQueryDef", "CDaoQueryDef [MFC], Append", "CDaoQueryDef [MFC], CanUpdate", "CDaoQueryDef [MFC], Close", "CDaoQueryDef [MFC], Create", "CDaoQueryDef [MFC], Execute", "CDaoQueryDef [MFC], GetConnect", "CDaoQueryDef [MFC], GetDateCreated", "CDaoQueryDef [MFC], GetDateLastUpdated", "CDaoQueryDef [MFC], GetFieldCount", "CDaoQueryDef [MFC], GetFieldInfo", "CDaoQueryDef [MFC], GetName", "CDaoQueryDef [MFC], GetODBCTimeout", "CDaoQueryDef [MFC], GetParameterCount", "CDaoQueryDef [MFC], GetParameterInfo", "CDaoQueryDef [MFC], GetParamValue", "CDaoQueryDef [MFC], GetRecordsAffected", "CDaoQueryDef [MFC], GetReturnsRecords", "CDaoQueryDef [MFC], GetSQL", "CDaoQueryDef [MFC], GetType", "CDaoQueryDef [MFC], IsOpen", "CDaoQueryDef [MFC], Open", "CDaoQueryDef [MFC], SetConnect", "CDaoQueryDef [MFC], SetName", "CDaoQueryDef [MFC], SetODBCTimeout", "CDaoQueryDef [MFC], SetParamValue", "CDaoQueryDef [MFC], SetReturnsRecords", "CDaoQueryDef [MFC], SetSQL", "CDaoQueryDef [MFC], m_pDAOQueryDef", "CDaoQueryDef [MFC], m_pDatabase"]
ms.assetid: 9676a4a3-c712-44d4-8c5d-d1cc78288d3a
---
# CDaoQueryDef Class

Represents a query definition, or "querydef," usually one saved in a database.

## Syntax

```
class CDaoQueryDef : public CObject
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CDaoQueryDef::CDaoQueryDef](#cdaoquerydef)|Constructs a `CDaoQueryDef` object. Next call `Open` or `Create`, depending on your needs.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CDaoQueryDef::Append](#append)|Appends the querydef to the database's QueryDefs collection as a saved query.|
|[CDaoQueryDef::CanUpdate](#canupdate)|Returns nonzero if the query can update the database.|
|[CDaoQueryDef::Close](#close)|Closes the querydef object. Destroy the C++ object when you finish with it.|
|[CDaoQueryDef::Create](#create)|Creates the underlying DAO querydef object. Use the querydef as a temporary query, or call `Append` to save it in the database.|
|[CDaoQueryDef::Execute](#execute)|Executes the query defined by the querydef object.|
|[CDaoQueryDef::GetConnect](#getconnect)|Returns the connection string associated with the querydef. The connection string identifies the data source. (For SQL pass-through queries only; otherwise an empty string.)|
|[CDaoQueryDef::GetDateCreated](#getdatecreated)|Returns the date the saved query was created.|
|[CDaoQueryDef::GetDateLastUpdated](#getdatelastupdated)|Returns the date the saved query was last updated.|
|[CDaoQueryDef::GetFieldCount](#getfieldcount)|Returns the number of fields defined by the querydef.|
|[CDaoQueryDef::GetFieldInfo](#getfieldinfo)|Returns information about a specified field defined in the query.|
|[CDaoQueryDef::GetName](#getname)|Returns the name of the querydef.|
|[CDaoQueryDef::GetODBCTimeout](#getodbctimeout)|Returns the timeout value used by ODBC (for an ODBC query) when the querydef is executed. This determines how long to allow for the query's action to complete.|
|[CDaoQueryDef::GetParameterCount](#getparametercount)|Returns the number of parameters defined for the query.|
|[CDaoQueryDef::GetParameterInfo](#getparameterinfo)|Returns information about a specified parameter to the query.|
|[CDaoQueryDef::GetParamValue](#getparamvalue)|Returns the value of a specified parameter to the query.|
|[CDaoQueryDef::GetRecordsAffected](#getrecordsaffected)|Returns the number of records affected by an action query.|
|[CDaoQueryDef::GetReturnsRecords](#getreturnsrecords)|Returns nonzero if the query defined by the querydef returns records.|
|[CDaoQueryDef::GetSQL](#getsql)|Returns the SQL string that specifies the query defined by the querydef.|
|[CDaoQueryDef::GetType](#gettype)|Returns the query type: delete, update, append, make-table, and so on.|
|[CDaoQueryDef::IsOpen](#isopen)|Returns nonzero if the querydef is open and can be executed.|
|[CDaoQueryDef::Open](#open)|Opens an existing querydef stored in the database's QueryDefs collection.|
|[CDaoQueryDef::SetConnect](#setconnect)|Sets the connection string for a SQL pass-through query on an ODBC data source.|
|[CDaoQueryDef::SetName](#setname)|Sets the name of the saved query, replacing the name in use when the querydef was created.|
|[CDaoQueryDef::SetODBCTimeout](#setodbctimeout)|Sets the timeout value used by ODBC (for an ODBC query) when the querydef is executed.|
|[CDaoQueryDef::SetParamValue](#setparamvalue)|Sets the value of a specified parameter to the query.|
|[CDaoQueryDef::SetReturnsRecords](#setreturnsrecords)|Specifies whether the querydef returns records. Setting this attribute to TRUE is only valid for SQL pass-through queries.|
|[CDaoQueryDef::SetSQL](#setsql)|Sets the SQL string that specifies the query defined by the querydef.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CDaoQueryDef::m_pDAOQueryDef](#m_pdaoquerydef)|A pointer to the OLE interface for the underlying DAO querydef object.|
|[CDaoQueryDef::m_pDatabase](#m_pdatabase)|A pointer to the `CDaoDatabase` object with which the querydef is associated. The querydef might be saved in the database or not.|

## Remarks

A querydef is a data access object that contains the SQL statement that describes a query, and its properties, such as "Date Created" and "ODBC Timeout." You can also create temporary querydef objects without saving them, but it is convenient — and much more efficient — to save commonly reused queries in a database. A [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) object maintains a collection, called the QueryDefs collection, that contains its saved querydefs.

> [!NOTE]
> The DAO database classes are distinct from the MFC database classes based on Open Database Connectivity (ODBC). All DAO database class names have the "CDao" prefix. You can still access ODBC data sources with the DAO classes. In general, the MFC classes based on DAO are more capable than the MFC classes based on ODBC; the DAO-based classes can access data, including through ODBC drivers, via their own database engine. The DAO-based classes also support Data Definition Language (DDL) operations, such as adding tables via the classes, without having to call DAO directly.

## Usage

Use querydef objects either to work with an existing saved query or to create a new saved query or temporary query:

1. In all cases, first construct a `CDaoQueryDef` object, supplying a pointer to the [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) object to which the query belongs.

1. Then do the following, depending on what you want:

   - To use an existing saved query, call the querydef object's [Open](#open) member function, supplying the name of the saved query.

   - To create a new saved query, call the querydef object's [Create](#create) member function, supplying the name of the query. Then call [Append](#append) to save the query by appending it to the database's QueryDefs collection. `Create` puts the querydef into an open state, so after calling `Create` you do not call `Open`.

   - To create a temporary querydef, call `Create`. Pass an empty string for the query name. Do not call `Append`.

When you finish using a querydef object, call its [Close](#close) member function; then destroy the querydef object.

> [!TIP]
> The easiest way to create saved queries is to create them and store them in your database using Microsoft Access. Then you can open and use them in your MFC code.

## Purposes

You can use a querydef object for any of the following purposes:

- To create a `CDaoRecordset` object

- To call the object's `Execute` member function to directly execute an action query or a SQL pass-through query

You can use a querydef object for any type of query, including select, action, crosstab, delete, update, append, make-table, data definition, SQL pass-through, union, and bulk queries. The query's type is determined by the content of the SQL statement that you supply. For information about query types, see the `Execute` and [GetType](#gettype) member functions. Recordsets are commonly used for row-returning queries, usually those using the **SELECT ... FROM** keywords. `Execute` is most commonly used for bulk operations. For more information, see [Execute](#execute) and [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md).

## Querydefs and Recordsets

To use a querydef object to create a `CDaoRecordset` object, you typically create or open a querydef as described above. Then construct a recordset object, passing a pointer to your querydef object when you call [CDaoRecordset::Open](../../mfc/reference/cdaorecordset-class.md#open). The querydef you pass must be in an open state. For more information, see class [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md).

You cannot use a querydef to create a recordset (the most common use for a querydef) unless it is in an open state. Put the querydef into an open state by calling either `Open` or `Create`.

## External Databases

Querydef objects are the preferred way to use the native SQL dialect of an external database engine. For example, you can create a Transact SQL query (as used on Microsoft SQL Server) and store it in a querydef object. When you need to use a SQL query not based on the Microsoft Jet database engine, you must provide a connection string that points to the external data source. Queries with valid connection strings bypass the database engine and pass the query directly to the external database server for processing.

> [!TIP]
> The preferred way to work with ODBC tables is to attach them to a Microsoft Jet (.MDB) database.

For related information, see the topics "QueryDef Object", "QueryDefs Collection", and "CdbDatabase Object" in the DAO SDK.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

`CDaoQueryDef`

## Requirements

**Header:** afxdao.h

## <a name="append"></a> CDaoQueryDef::Append

Call this member function after you call [Create](#create) to create a new querydef object.

```
virtual void Append();
```

### Remarks

`Append` saves the querydef in the database by appending the object to the database's QueryDefs collection. You can use the querydef as a temporary object without appending it, but if you want it to persist, you must call `Append`.

If you attempt to append a temporary querydef object, MFC throws an exception of type [CDaoException](../../mfc/reference/cdaoexception-class.md).

## <a name="canupdate"></a> CDaoQueryDef::CanUpdate

Call this member function to determine whether you can modify the querydef — such as changing its name or SQL string.

```
BOOL CanUpdate();
```

### Return Value

Nonzero if you are permitted to modify the querydef; otherwise 0.

### Remarks

You can modify the querydef if:

- It is not based on a database that is open read-only.

- You have update permissions for the database.

   This depends on whether you have implemented security features. MFC does not provide support for security; you must implement it yourself by calling DAO directly or by using Microsoft Access. See the topic "Permissions Property" in DAO Help.

## <a name="cdaoquerydef"></a> CDaoQueryDef::CDaoQueryDef

Constructs a `CDaoQueryDef` object.

```
CDaoQueryDef(CDaoDatabase* pDatabase);
```

### Parameters

*pDatabase*<br/>
A pointer to an open [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) object.

### Remarks

The object can represent an existing querydef stored in the database's QueryDefs collection, a new query to be stored in the collection, or a temporary query, not to be stored. Your next step depends on the type of querydef:

- If the object represents an existing querydef, call the object's [Open](#open) member function to initialize it.

- If the object represents a new querydef to be saved, call the object's [Create](#create) member function. This adds the object to the database's QueryDefs collection. Then call `CDaoQueryDef` member functions to set the object's attributes. Finally, call [Append](#append).

- If the object represents a temporary querydef (not to be saved in the database), call `Create`, passing an empty string for the query's name. After calling `Create`, initialize the querydef by directly setting its attributes. Do not call `Append`.

To set the attributes of the querydef, you can use the [SetName](#setname), [SetSQL](#setsql), [SetConnect](#setconnect), [SetODBCTimeout](#setodbctimeout), and [SetReturnsRecords](#setreturnsrecords) member functions.

When you finish with the querydef object, call its [Close](#close) member function. If you have a pointer to the querydef, use the **`delete`** operator to destroy the C++ object.

## <a name="close"></a> CDaoQueryDef::Close

Call this member function when you finish using the querydef object.

```
virtual void Close();
```

### Remarks

Closing the querydef releases the underlying DAO object but does not destroy the saved DAO querydef object or the C++ `CDaoQueryDef` object. This is not the same as [CDaoDatabase::DeleteQueryDef](../../mfc/reference/cdaodatabase-class.md#deletequerydef), which deletes the querydef from the database's QueryDefs collection in DAO (if not a temporary querydef).

## <a name="create"></a> CDaoQueryDef::Create

Call this member function to create a new saved query or a new temporary query.

```
virtual void Create(
    LPCTSTR lpszName = NULL,
    LPCTSTR lpszSQL = NULL);
```

### Parameters

*lpszName*<br/>
The unique name of the query saved in the database. For details about the string, see the topic "CreateQueryDef Method" in DAO Help. If you accept the default value, an empty string, a temporary querydef is created. Such a query is not saved in the QueryDefs collection.

*lpszSQL*<br/>
The SQL string that defines the query. If you accept the default value of NULL, you must later call [SetSQL](#setsql) to set the string. Until then, the query is undefined. You can, however, use the undefined query to open a recordset; see Remarks for details. The SQL statement must be defined before you can append the querydef to the QueryDefs collection.

### Remarks

If you pass a name in *lpszName*, you can then call [Append](#append) to save the querydef in the database's QueryDefs collection. Otherwise, the object is a temporary querydef and is not saved. In either case, the querydef is in an open state, and you can either use it to create a [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) object or call the querydef's [Execute](#execute) member function.

If you do not supply a SQL statement in *lpszSQL*, you cannot run the query with `Execute` but you can use it to create a recordset. In that case, MFC uses the recordset's default SQL statement.

## <a name="execute"></a> CDaoQueryDef::Execute

Call this member function to run the query defined by the querydef object.

```
virtual void Execute(int nOptions = dbFailOnError);
```

### Parameters

*nOptions*<br/>
An integer that determines the characteristics of the query. For related information, see the topic "Execute Method" in DAO Help. You can use the bitwise-OR operator ( **&#124;**) to combine the following constants for this argument:

- `dbDenyWrite` Deny write permission to other users.

- `dbInconsistent` Inconsistent updates.

- `dbConsistent` Consistent updates.

- `dbSQLPassThrough` SQL pass-through. Causes the SQL statement to be passed to an ODBC database for processing.

- `dbFailOnError` Default value. Roll back updates if an error occurs and report the error to the user.

- `dbSeeChanges` Generate a run-time error if another user is changing data you are editing.

> [!NOTE]
> For an explanation of the terms "inconsistent" and "consistent," see the topic "Execute Method" in DAO Help.

### Remarks

Querydef objects used for execution in this manner can only represent one of the following query types:

- Action queries

- SQL pass-through queries

`Execute` does not work for queries that return records, such as select queries. `Execute` is commonly used for bulk operation queries, such as **UPDATE**, **INSERT**, or **SELECT INTO**, or for data definition language (DDL) operations.

> [!TIP]
> The preferred way to work with ODBC data sources is to attach tables to a Microsoft Jet (.MDB) database. For more information, see the topic "Accessing External Databases with DAO" in DAO Help.

Call the [GetRecordsAffected](#getrecordsaffected) member function of the querydef object to determine the number of records affected by the most recent `Execute` call. For example, `GetRecordsAffected` returns information about the number of records deleted, updated, or inserted when executing an action query. The count returned will not reflect changes in related tables when cascade updates or deletes are in effect.

If you include both `dbInconsistent` and `dbConsistent` or if you include neither, the result is the default, `dbInconsistent`.

`Execute` does not return a recordset. Using `Execute` on a query that selects records causes MFC to throw an exception of type [CDaoException](../../mfc/reference/cdaoexception-class.md).

## <a name="getconnect"></a> CDaoQueryDef::GetConnect

Call this member function to get the connection string associated with the querydef's data source.

```
CString GetConnect();
```

### Return Value

A [CString](../../atl-mfc-shared/reference/cstringt-class.md) containing the connection string for the querydef.

### Remarks

This function is used only with ODBC data sources and certain ISAM drivers. It is not used with Microsoft Jet (.MDB) databases; in this case, `GetConnect` returns an empty string. For more information, see [SetConnect](#setconnect).

> [!TIP]
> The preferred way to work with ODBC tables is to attach them to an .MDB database. For more information, see the topic "Accessing External Databases with DAO" in DAO Help.

For information about connection strings, see the topic "Connect Property" in DAO Help.

## <a name="getdatecreated"></a> CDaoQueryDef::GetDateCreated

Call this member function to get the date the querydef object was created.

```
COleDateTime GetDateCreated();
```

### Return Value

A [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) object containing the date and time the querydef was created.

### Remarks

For related information, see the topic "DateCreated, LastUpdated Properties" in DAO Help.

## <a name="getdatelastupdated"></a> CDaoQueryDef::GetDateLastUpdated

Call this member function to get the date the querydef object was last updated — when any of its properties were changed, such as its name, its SQL string, or its connection string.

```
COleDateTime GetDateLastUpdated();
```

### Return Value

A [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) object containing the date and time the querydef was last updated.

### Remarks

For related information, see the topic "DateCreated, LastUpdated Properties" in DAO Help.

## <a name="getfieldcount"></a> CDaoQueryDef::GetFieldCount

Call this member function to retrieve the number of fields in the query.

```
short GetFieldCount();
```

### Return Value

The number of fields defined in the query.

### Remarks

`GetFieldCount` is useful for looping through all fields in the querydef. For that purpose, use `GetFieldCount` in conjunction with [GetFieldInfo](#getfieldinfo).

## <a name="getfieldinfo"></a> CDaoQueryDef::GetFieldInfo

Call this member function to obtain various kinds of information about a field defined in the querydef.

```cpp
void GetFieldInfo(
    int nIndex,
    CDaoFieldInfo& fieldinfo,
    DWORD dwInfoOptions = AFX_DAO_PRIMARY_INFO);

void GetFieldInfo(
    LPCTSTR lpszName,
    CDaoFieldInfo& fieldinfo,
    DWORD dwInfoOptions = AFX_DAO_PRIMARY_INFO);
```

### Parameters

*nIndex*<br/>
The zero-based index of the desired field in the querydef's Fields collection, for lookup by index.

*fieldinfo*<br/>
A reference to a `CDaoFieldInfo` object that returns the information requested.

*dwInfoOptions*<br/>
Options that specify which information about the field to retrieve. The available options are listed here along with what they cause the function to return:

- AFX_DAO_PRIMARY_INFO (Default) Name, Type, Size, Attributes

- AFX_DAO_SECONDARY_INFO Primary information plus: Ordinal Position, Required, Allow Zero Length, Source Field, Foreign Name, Source Table, Collating Order

- AFX_DAO_ALL_INFO Primary and secondary information plus: Default Value, Validation Text, Validation Rule

*lpszName*<br/>
A string containing the name of the desired field, for lookup by name. You can use a [CString](../../atl-mfc-shared/reference/cstringt-class.md).

### Remarks

For a description of the information returned in *fieldinfo*, see the [CDaoFieldInfo](../../mfc/reference/cdaofieldinfo-structure.md) structure. This structure has members that correspond to the descriptive information under *dwInfoOptions* above. If you request one level of information, you get any prior levels of information as well.

## <a name="getname"></a> CDaoQueryDef::GetName

Call this member function to retrieve the name of the query represented by the querydef.

```
CString GetName();
```

### Return Value

The name of the query.

### Remarks

Querydef names are unique user-defined names. For more information about querydef names, see the topic "Name Property" in DAO Help.

## <a name="getodbctimeout"></a> CDaoQueryDef::GetODBCTimeout

Call this member function to retrieve the current time limit before a query to an ODBC data source times out.

```
short GetODBCTimeout();
```

### Return Value

The number of seconds before a query times out.

### Remarks

For information about this time limit, see the topic "ODBCTimeout Property" in DAO Help.

> [!TIP]
> The preferred way to work with ODBC tables is to attach them to a Microsoft Jet (.MDB) database. For more information, see the topic "Accessing External Databases with DAO" in DAO Help.

## <a name="getparametercount"></a> CDaoQueryDef::GetParameterCount

Call this member function to retrieve the number of parameters in the saved query.

```
short GetParameterCount();
```

### Return Value

The number of parameters defined in the query.

### Remarks

`GetParameterCount` is useful for looping through all parameters in the querydef. For that purpose, use `GetParameterCount` in conjunction with [GetParameterInfo](#getparameterinfo).

For related information, see the topics "Parameter Object", "Parameters Collection", and "PARAMETERS Declaration (SQL)" in DAO Help.

## <a name="getparameterinfo"></a> CDaoQueryDef::GetParameterInfo

Call this member function to obtain information about a parameter defined in the querydef.

```cpp
void GetParameterInfo(
    int nIndex,
    CDaoParameterInfo& paraminfo,
    DWORD dwInfoOptions = AFX_DAO_PRIMARY_INFO);

void GetParameterInfo(
    LPCTSTR lpszName,
    CDaoParameterInfo& paraminfo,
    DWORD dwInfoOptions = AFX_DAO_PRIMARY_INFO);
```

### Parameters

*nIndex*<br/>
The zero-based index of the desired parameter in the querydef's Parameters collection, for lookup by index.

*paraminfo*<br/>
A reference to a [CDaoParameterInfo](../../mfc/reference/cdaoparameterinfo-structure.md) object that returns the information requested.

*dwInfoOptions*<br/>
Options that specify which information about the parameter to retrieve. The available option is listed here along with what it causes the function to return:

- AFX_DAO_PRIMARY_INFO (Default) Name, Type

*lpszName*<br/>
A string containing the name of the desired parameter, for lookup by name. You can use a [CString](../../atl-mfc-shared/reference/cstringt-class.md).

### Remarks

For a description of the information returned in *paraminfo*, see the [CDaoParameterInfo](../../mfc/reference/cdaoparameterinfo-structure.md) structure. This structure has members that correspond to the descriptive information under *dwInfoOptions* above.

For related information, see the topic "PARAMETERS Declaration (SQL)" in DAO Help.

## <a name="getparamvalue"></a> CDaoQueryDef::GetParamValue

Call this member function to retrieve the current value of the specified parameter stored in the querydef's Parameters collection.

```
virtual COleVariant GetParamValue(LPCTSTR lpszName);
virtual COleVariant GetParamValue(int nIndex);
```

### Parameters

*lpszName*<br/>
The name of the parameter whose value you want, for lookup by name.

*nIndex*<br/>
The zero-based index of the parameter in the querydef's Parameters collection, for lookup by index. You can obtain this value with calls to [GetParameterCount](#getparametercount) and [GetParameterInfo](#getparameterinfo).

### Return Value

An object of class [COleVariant](../../mfc/reference/colevariant-class.md) that contains the parameter's value.

### Remarks

You can access the parameter either by name or by its ordinal position in the collection.

For related information, see the topic "PARAMETERS Declaration (SQL)" in DAO Help.

## <a name="getrecordsaffected"></a> CDaoQueryDef::GetRecordsAffected

Call this member function to determine how many records were affected by the last call of [Execute](#execute).

```
long GetRecordsAffected();
```

### Return Value

The number of records affected.

### Remarks

The count returned will not reflect changes in related tables when cascade updates or deletes are in effect.

For related information see the topic "RecordsAffected Property" in DAO Help.

## <a name="getreturnsrecords"></a> CDaoQueryDef::GetReturnsRecords

Call this member function to determine whether the querydef is based on a query that returns records.

```
BOOL GetReturnsRecords();
```

### Return Value

Nonzero if the querydef is based on a query that returns records; otherwise 0.

### Remarks

This member function is only used for SQL pass-through queries. For more information about SQL queries, see the [Execute](#execute) member function. For more information about working with SQL pass-through queries, see the [SetReturnsRecords](#setreturnsrecords) member function.

For related information, see the topic "ReturnsRecords Property" in DAO Help.

## <a name="getsql"></a> CDaoQueryDef::GetSQL

Call this member function to retrieve the SQL statement that defines the query on which the querydef is based.

```
CString GetSQL();
```

### Return Value

The SQL statement that defines the query on which the querydef is based.

### Remarks

You will then probably parse the string for keywords, table names, and so on.

For related information, see the topics "SQL Property", "Comparison of Microsoft Jet Database Engine SQL and ANSI SQL", and "Querying a Database with SQL in Code" in DAO Help.

## <a name="gettype"></a> CDaoQueryDef::GetType

Call this member function to determine the query type of the querydef.

```
short GetType();
```

### Return Value

The type of the query defined by the querydef. For values, see Remarks.

### Remarks

The query type is set by what you specify in the querydef's SQL string when you create the querydef or call an existing querydef's [SetSQL](#setsql) member function. The query type returned by this function can be one of the following values:

- `dbQSelect` Select

- `dbQAction` Action

- `dbQCrosstab` Crosstab

- `dbQDelete` Delete

- `dbQUpdate` Update

- `dbQAppend` Append

- `dbQMakeTable` Make-table

- `dbQDDL` Data-definition

- `dbQSQLPassThrough` Pass-through

- `dbQSetOperation` Union

- `dbQSPTBulk` Used with `dbQSQLPassThrough` to specify a query that does not return records.

> [!NOTE]
> To create a SQL pass-through query, don't set the `dbSQLPassThrough` constant. This is set automatically by the Microsoft Jet database engine when you create a querydef object and set the connection string.

For information about SQL strings, see [GetSQL](#getsql). For information about query types, see [Execute](#execute).

## <a name="isopen"></a> CDaoQueryDef::IsOpen

Call this member function to determine whether the `CDaoQueryDef` object is currently open.

```
BOOL IsOpen() const;
```

### Return Value

Nonzero if the `CDaoQueryDef` object is currently open; otherwise 0.

### Remarks

A querydef must be in an open state before you use it to call [Execute](#execute) or to create a [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) object. To put a querydef into an open state call either [Create](#create) (for a new querydef) or [Open](#open) (for an existing querydef).

## <a name="m_pdatabase"></a> CDaoQueryDef::m_pDatabase

Contains a pointer to the [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) object associated with the querydef object.

### Remarks

Use this pointer if you need to access the database directly — for example, to obtain pointers to other querydef or recordset objects in the database's collections.

## <a name="m_pdaoquerydef"></a> CDaoQueryDef::m_pDAOQueryDef

Contains a pointer to the OLE interface for the underlying DAO querydef object.

### Remarks

This pointer is provided for completeness and consistency with the other classes. However, because MFC rather fully encapsulates DAO querydefs, you are unlikely to need it. If you do use it, do so cautiously — in particular, do not change the value of the pointer unless you know what you are doing.

## <a name="open"></a> CDaoQueryDef::Open

Call this member function to open a querydef previously saved in the database's QueryDefs collection.

```
virtual void Open(LPCTSTR lpszName = NULL);
```

### Parameters

*lpszName*<br/>
A string that contains the name of the saved querydef to open. You can use a [CString](../../atl-mfc-shared/reference/cstringt-class.md).

### Remarks

Once the querydef is open, you can call its [Execute](#execute) member function or use the querydef to create a [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) object.

## <a name="setconnect"></a> CDaoQueryDef::SetConnect

Call this member function to set the querydef object's connection string.

```cpp
void SetConnect(LPCTSTR lpszConnect);
```

### Parameters

*lpszConnect*<br/>
A string that contains a connection string for the associated [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) object.

### Remarks

The connection string is used to pass additional information to ODBC and certain ISAM drivers as needed. It is not used for Microsoft Jet (.MDB) databases.

> [!TIP]
> The preferred way to work with ODBC tables is to attach them to an .MDB database.

Before executing a querydef that represents a SQL pass-through query to an ODBC data source, set the connection string with `SetConnect` and call [SetReturnsRecords](#setreturnsrecords) to specify whether the query returns records.

For more information about the connection string's structure and examples of connection string components, see the topic "Connect Property" in DAO Help.

## <a name="setname"></a> CDaoQueryDef::SetName

Call this member function if you want to change the name of a querydef that is not temporary.

```cpp
void SetName(LPCTSTR lpszName);
```

### Parameters

*lpszName*<br/>
A string that contains the new name for a nontemporary query in the associated [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) object.

### Remarks

Querydef names are unique, user-defined names. You can call `SetName` before the querydef object is appended to the QueryDefs collection.

## <a name="setodbctimeout"></a> CDaoQueryDef::SetODBCTimeout

Call this member function to set the time limit before a query to an ODBC data source times out.

```cpp
void SetODBCTimeout(short nODBCTimeout);
```

### Parameters

*nODBCTimeout*<br/>
The number of seconds before a query times out.

### Remarks

This member function lets you override the default number of seconds before subsequent operations on the connected data source "time out." An operation might time out due to network access problems, excessive query processing time, and so on. Call `SetODBCTimeout` prior to executing a query with this querydef if you want to change the query timeout value. (As ODBC reuses connections, the timeout value is the same for all clients on the same connection.)

The default value for query timeouts is 60 seconds.

## <a name="setparamvalue"></a> CDaoQueryDef::SetParamValue

Call this member function to set the value of a parameter in the querydef at run time.

```
virtual void SetParamValue(
    LPCTSTR lpszName,
    const COleVariant& varValue);

virtual void SetParamValue(
    int nIndex,
    const COleVariant& varValue);
```

### Parameters

*lpszName*<br/>
The name of the parameter whose value you want to set.

*varValue*<br/>
The value to set; see Remarks.

*nIndex*<br/>
The ordinal position of the parameter in the querydef's Parameters collection. You can obtain this value with calls to [GetParameterCount](#getparametercount) and [GetParameterInfo](#getparameterinfo).

### Remarks

The parameter must already have been established as part of the querydef's SQL string. You can access the parameter either by name or by its ordinal position in the collection.

Specify the value to set as a `COleVariant` object. For information about setting the desired value and type in your `COleVariant` object, see class [COleVariant](../../mfc/reference/colevariant-class.md).

## <a name="setreturnsrecords"></a> CDaoQueryDef::SetReturnsRecords

Call this member function as part of the process of setting up a SQL pass-through query to an external database.

```cpp
void SetReturnsRecords(BOOL bReturnsRecords);
```

### Parameters

*bReturnsRecords*<br/>
Pass TRUE if the query on an external database returns records; otherwise, FALSE.

### Remarks

In such a case, you must create the querydef and set its properties using other `CDaoQueryDef` member functions. For a description of external databases, see [SetConnect](#setconnect).

## <a name="setsql"></a> CDaoQueryDef::SetSQL

Call this member function to set the SQL statement that the querydef executes.

```cpp
void SetSQL(LPCTSTR lpszSQL);
```

### Parameters

*lpszSQL*<br/>
A string containing a complete SQL statement, suitable for execution. The syntax of this string depends on the DBMS that your query targets. For a discussion of syntax used in the Microsoft Jet database engine, see the topic "Building SQL Statements in Code" in DAO Help.

### Remarks

A typical use of `SetSQL` is setting up a querydef object for use in a SQL pass-through query. (For the syntax of SQL pass-through queries on your target DBMS, see the documentation for your DBMS.)

## See also

[CObject Class](../../mfc/reference/cobject-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CDaoRecordset Class](../../mfc/reference/cdaorecordset-class.md)<br/>
[CDaoDatabase Class](../../mfc/reference/cdaodatabase-class.md)<br/>
[CDaoTableDef Class](../../mfc/reference/cdaotabledef-class.md)<br/>
[CDaoException Class](../../mfc/reference/cdaoexception-class.md)
