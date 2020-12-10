---
description: "Learn more about: CDaoTableDef Class"
title: "CDaoTableDef Class"
ms.date: "11/04/2016"
f1_keywords: ["CDaoTableDef", "AFXDAO/CDaoTableDef", "AFXDAO/CDaoTableDef::CDaoTableDef", "AFXDAO/CDaoTableDef::Append", "AFXDAO/CDaoTableDef::CanUpdate", "AFXDAO/CDaoTableDef::Close", "AFXDAO/CDaoTableDef::Create", "AFXDAO/CDaoTableDef::CreateField", "AFXDAO/CDaoTableDef::CreateIndex", "AFXDAO/CDaoTableDef::DeleteField", "AFXDAO/CDaoTableDef::DeleteIndex", "AFXDAO/CDaoTableDef::GetAttributes", "AFXDAO/CDaoTableDef::GetConnect", "AFXDAO/CDaoTableDef::GetDateCreated", "AFXDAO/CDaoTableDef::GetDateLastUpdated", "AFXDAO/CDaoTableDef::GetFieldCount", "AFXDAO/CDaoTableDef::GetFieldInfo", "AFXDAO/CDaoTableDef::GetIndexCount", "AFXDAO/CDaoTableDef::GetIndexInfo", "AFXDAO/CDaoTableDef::GetName", "AFXDAO/CDaoTableDef::GetRecordCount", "AFXDAO/CDaoTableDef::GetSourceTableName", "AFXDAO/CDaoTableDef::GetValidationRule", "AFXDAO/CDaoTableDef::GetValidationText", "AFXDAO/CDaoTableDef::IsOpen", "AFXDAO/CDaoTableDef::Open", "AFXDAO/CDaoTableDef::RefreshLink", "AFXDAO/CDaoTableDef::SetAttributes", "AFXDAO/CDaoTableDef::SetConnect", "AFXDAO/CDaoTableDef::SetName", "AFXDAO/CDaoTableDef::SetSourceTableName", "AFXDAO/CDaoTableDef::SetValidationRule", "AFXDAO/CDaoTableDef::SetValidationText", "AFXDAO/CDaoTableDef::m_pDAOTableDef", "AFXDAO/CDaoTableDef::m_pDatabase"]
helpviewer_keywords: ["CDaoTableDef [MFC], CDaoTableDef", "CDaoTableDef [MFC], Append", "CDaoTableDef [MFC], CanUpdate", "CDaoTableDef [MFC], Close", "CDaoTableDef [MFC], Create", "CDaoTableDef [MFC], CreateField", "CDaoTableDef [MFC], CreateIndex", "CDaoTableDef [MFC], DeleteField", "CDaoTableDef [MFC], DeleteIndex", "CDaoTableDef [MFC], GetAttributes", "CDaoTableDef [MFC], GetConnect", "CDaoTableDef [MFC], GetDateCreated", "CDaoTableDef [MFC], GetDateLastUpdated", "CDaoTableDef [MFC], GetFieldCount", "CDaoTableDef [MFC], GetFieldInfo", "CDaoTableDef [MFC], GetIndexCount", "CDaoTableDef [MFC], GetIndexInfo", "CDaoTableDef [MFC], GetName", "CDaoTableDef [MFC], GetRecordCount", "CDaoTableDef [MFC], GetSourceTableName", "CDaoTableDef [MFC], GetValidationRule", "CDaoTableDef [MFC], GetValidationText", "CDaoTableDef [MFC], IsOpen", "CDaoTableDef [MFC], Open", "CDaoTableDef [MFC], RefreshLink", "CDaoTableDef [MFC], SetAttributes", "CDaoTableDef [MFC], SetConnect", "CDaoTableDef [MFC], SetName", "CDaoTableDef [MFC], SetSourceTableName", "CDaoTableDef [MFC], SetValidationRule", "CDaoTableDef [MFC], SetValidationText", "CDaoTableDef [MFC], m_pDAOTableDef", "CDaoTableDef [MFC], m_pDatabase"]
ms.assetid: 7c5d2254-8475-43c4-8a6c-2d32ead194c9
---
# CDaoTableDef Class

Represents the stored definition of a base table or an attached table.

## Syntax

```
class CDaoTableDef : public CObject
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CDaoTableDef::CDaoTableDef](#cdaotabledef)|Constructs a `CDaoTableDef` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CDaoTableDef::Append](#append)|Adds a new table to the database.|
|[CDaoTableDef::CanUpdate](#canupdate)|Returns nonzero if the table can be updated (you can modify the definition of fields or the table properties).|
|[CDaoTableDef::Close](#close)|Closes an open tabledef.|
|[CDaoTableDef::Create](#create)|Creates a table which can be added to the database using [Append](#append).|
|[CDaoTableDef::CreateField](#createfield)|Called to create a field for a table.|
|[CDaoTableDef::CreateIndex](#createindex)|Called to create an index for a table.|
|[CDaoTableDef::DeleteField](#deletefield)|Called to delete a field from a table.|
|[CDaoTableDef::DeleteIndex](#deleteindex)|Called to delete an index from a table.|
|[CDaoTableDef::GetAttributes](#getattributes)|Returns a value that indicates one or more characteristics of a `CDaoTableDef` object.|
|[CDaoTableDef::GetConnect](#getconnect)|Returns a value that provides information about the source of a table.|
|[CDaoTableDef::GetDateCreated](#getdatecreated)|Returns the date and time the base table underlying a `CDaoTableDef` object was created.|
|[CDaoTableDef::GetDateLastUpdated](#getdatelastupdated)|Returns the date and time of the most recent change made to the design of the base table.|
|[CDaoTableDef::GetFieldCount](#getfieldcount)|Returns a value that represents the number of fields in the table.|
|[CDaoTableDef::GetFieldInfo](#getfieldinfo)|Returns specific kinds of information about the fields in the table.|
|[CDaoTableDef::GetIndexCount](#getindexcount)|Returns the number of indexes for the table.|
|[CDaoTableDef::GetIndexInfo](#getindexinfo)|Returns specific kinds of information about the indexes for the table.|
|[CDaoTableDef::GetName](#getname)|Returns the user-defined name of the table.|
|[CDaoTableDef::GetRecordCount](#getrecordcount)|Returns the number of records in the table.|
|[CDaoTableDef::GetSourceTableName](#getsourcetablename)|Returns a value that specifies the name of the attached table in the source database.|
|[CDaoTableDef::GetValidationRule](#getvalidationrule)|Returns a value that validates the data in a field as it is changed or added to a table.|
|[CDaoTableDef::GetValidationText](#getvalidationtext)|Returns a value that specifies the text of the message that your application displays if the value of a Field object does not satisfy the specified validation rule.|
|[CDaoTableDef::IsOpen](#isopen)|Returns nonzero if the table is open.|
|[CDaoTableDef::Open](#open)|Opens an existing tabledef stored in the database's TableDef's collection.|
|[CDaoTableDef::RefreshLink](#refreshlink)|Updates the connection information for an attached table.|
|[CDaoTableDef::SetAttributes](#setattributes)|Sets a value that indicates one or more characteristics of a `CDaoTableDef` object.|
|[CDaoTableDef::SetConnect](#setconnect)|Sets a value that provides information about the source of a table.|
|[CDaoTableDef::SetName](#setname)|Sets the name of the table.|
|[CDaoTableDef::SetSourceTableName](#setsourcetablename)|Sets a value that specifies the name of an attached table in the source database.|
|[CDaoTableDef::SetValidationRule](#setvalidationrule)|Sets a value that validates the data in a field as it is changed or added to a table.|
|[CDaoTableDef::SetValidationText](#setvalidationtext)|Sets a value that specifies the text of the message that your application displays if the value of a Field object does not satisfy the specified validation rule.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CDaoTableDef::m_pDAOTableDef](#m_pdaotabledef)|A pointer to the DAO interface underlying the tabledef object.|
|[CDaoTableDef::m_pDatabase](#m_pdatabase)|Source database for this table.|

## Remarks

Each DAO database object maintains a collection, called TableDefs, that contains all saved DAO tabledef objects.

You manipulate a table definition using a `CDaoTableDef` object. For example, you can:

- Examine the field and index structure of any local, attached, or external table in a database.

- Call the `SetConnect` and `SetSourceTableName` member functions for attached tables, and use the `RefreshLink` member function to update connections to attached tables.

- Call the `CanUpdate` member function to determine if you can edit field definitions in the table.

- Get or set validation conditions using the `GetValidationRule` and `SetValidationRule`, and the `GetValidationText` and `SetValidationText` member functions.

- Use the `Open` member function to create a table-, dynaset-, or snapshot-type `CDaoRecordset` object.

    > [!NOTE]
    >  The DAO database classes are distinct from the MFC database classes based on Open Database Connectivity (ODBC). All DAO database class names have the "CDao" prefix. You can still access ODBC data sources with the DAO classes; the DAO classes generally offer superior capabilities because they are specific to the Microsoft Jet database engine.

### To use tabledef objects either to work with an existing table or to create a new table

1. In all cases, first construct a `CDaoTableDef` object, supplying a pointer to a [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) object to which the table belongs.

1. Then do the following, depending on what you want:

   - To use an existing saved table, call the tabledef object's [Open](#open) member function, supplying the name of the saved table.

   - To create a new table, call the tabledef object's [Create](#create) member function, supplying the name of the table. Call [CreateField](#createfield) and [CreateIndex](#createindex) to add fields and indexes to the table.

   - Call [Append](#append) to save the table by appending it to the database's TableDefs collection. `Create` puts the tabledef into an open state, so after calling `Create` you do not call `Open`.

        > [!TIP]
        >  The easiest way to create saved tables is to create them and store them in your database using Microsoft Access. Then you can open and use them in your MFC code.

To use the tabledef object you have opened or created, create and open a `CDaoRecordset` object, specifying the name of the tabledef with a `dbOpenTable` value in the *nOpenType* parameter.

To use a tabledef object to create a `CDaoRecordset` object, you typically create or open a tabledef as described above, then construct a recordset object, passing a pointer to your tabledef object when you call [CDaoRecordset::Open](../../mfc/reference/cdaorecordset-class.md#open). The tabledef you pass must be in an open state. For more information, see class [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md).

When you finish using a tabledef object, call its [Close](../../mfc/reference/cdaorecordset-class.md#close) member function; then destroy the tabledef object.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

`CDaoTableDef`

## Requirements

**Header:** afxdao.h

## <a name="append"></a> CDaoTableDef::Append

Call this member function after you call [Create](#create) to create a new tabledef object to save the tabledef in the database.

```
virtual void Append();
```

### Remarks

The function appends the object to the database's TableDefs collection. You can use the tabledef as a temporary object while defining it by not appending it, but if you want to save and use it, you must call `Append`.

> [!NOTE]
> If you attempt to append an unnamed tabledef (containing a null or empty string), MFC throws an exception.

For related information, see the topic "Append Method" in DAO Help.

## <a name="canupdate"></a> CDaoTableDef::CanUpdate

Call this member function to determine whether the definition of the table underlying a `CDaoTableDef` object can be changed.

```
BOOL CanUpdate();
```

### Return Value

Nonzero if the table structure (schema) can be modified (add or delete fields and indexes), otherwise 0.

### Remarks

By default, a newly created table underlying a `CDaoTableDef` object can be updated, and an attached table underlying a `CDaoTableDef` object cannot be updated. A `CDaoTableDef` object may be updatable, even if the resulting recordset is not updatable.

For related information, see the topic "Updatable Property" in DAO Help.

## <a name="cdaotabledef"></a> CDaoTableDef::CDaoTableDef

Constructs a `CDaoTableDef` object.

```
CDaoTableDef(CDaoDatabase* pDatabase);
```

### Parameters

*pDatabase*<br/>
A pointer to a [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) object.

### Remarks

After constructing the object, you must call the [Create](#create) or [Open](#open) member function. When you finish with the object, you must call its [Close](#close) member function and destroy the `CDaoTableDef` object.

## <a name="close"></a> CDaoTableDef::Close

Call this member function to close and release the tabledef object.

```
virtual void Close();
```

### Remarks

Usually after calling `Close`, you delete the tabledef object if it was allocated with **`new`**.

You can call [Open](#open) again after calling `Close`. This lets you reuse the tabledef object.

For related information, see the topic "Close Method" in DAO Help.

## <a name="create"></a> CDaoTableDef::Create

Call this member function to create a new saved table.

```
virtual void Create(
    LPCTSTR lpszName,
    long lAttributes = 0,
    LPCTSTR lpszSrcTable = NULL,
    LPCTSTR lpszConnect = NULL);
```

### Parameters

*lpszName*<br/>
A pointer to a string containing the name of the table.

*lAttributes*<br/>
A value corresponding to characteristics of the table represented by the tabledef object. You can use the bitwise-OR to combine any of the following constants:

|Constant|Description|
|--------------|-----------------|
|`dbAttachExclusive`|For databases that use the Microsoft Jet database engine, indicates the table is an attached table opened for exclusive use.|
|`dbAttachSavePWD`|For databases that use the Microsoft Jet database engine, indicates that the user ID and password for the attached table are saved with the connection information.|
|`dbSystemObject`|Indicates the table is a system table provided by the Microsoft Jet database engine.|
|`dbHiddenObject`|Indicates the table is a hidden table provided by the Microsoft Jet database engine.|

*lpszSrcTable*<br/>
A pointer to a string containing the source table name. By default this value is initialized as NULL.

*lpszConnect*<br/>
A pointer to a string containing the default connection string. By default this value is initialized as NULL.

### Remarks

Once you have named the tabledef, you can then call [Append](#append) to save the tabledef in the database's TableDefs collection. After calling `Append`, the tabledef is in an open state, and you can use it to create a [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) object.

For related information, see the topic "CreateTableDef Method" in DAO Help.

## <a name="createfield"></a> CDaoTableDef::CreateField

Call this member function to add a field to the table.

```cpp
void CreateField(
    LPCTSTR lpszName,
    short nType,
    long lSize,
    long lAttributes = 0);

void CreateField(CDaoFieldInfo& fieldinfo);
```

### Parameters

*lpszName*<br/>
A pointer to a string expression specifying the name of this field.

*nType*<br/>
A value indicating the data type of the field. The setting can be one of these values:

|Type|Size (bytes)|Description|
|----------|--------------------|-----------------|
|`dbBoolean`|1 byte|BOOL|
|`dbByte`|BYTE|
|`dbInteger`|2|int|
|`dbLong`|4|long|
|`dbCurrency`|8|Currency ( [COleCurrency](../../mfc/reference/colecurrency-class.md))|
|`dbSingle`|4|float|
|`dbDouble`|8|double|
|`dbDate`|8|Date/Time ( [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md))|
|`dbText`|1 - 255|Text ( [CString](../../atl-mfc-shared/reference/cstringt-class.md))|
|`dbLongBinary`|0|Long Binary (OLE Object), [CLongBinary](../../mfc/reference/clongbinary-class.md) or [CByteArray](../../mfc/reference/cbytearray-class.md)|
|`dbMemo`|0|Memo ( [CString](../../atl-mfc-shared/reference/cstringt-class.md))|

*lSize*<br/>
A value that indicates the maximum size, in bytes, of a field that contains text, or the fixed size of a field that contains text or numeric values. The *lSize* parameter is ignored for all but text fields.

*lAttributes*<br/>
A value corresponding to characteristics of the field and that can be combined using a bitwise-OR.

|Constant|Description|
|--------------|-----------------|
|`dbFixedField`|The field size is fixed (default for Numeric fields).|
|`dbVariableField`|The field size is variable (Text fields only).|
|`dbAutoIncrField`|The field value for new records is automatically incremented to a unique long integer that cannot be changed. Only supported for Microsoft Jet database tables.|
|`dbUpdatableField`|The field value can be changed.|
|`dbDescending`|The field is sorted in descending (Z - A or 100 - 0) order (applies only to a Field object in a Fields collection of an Index object). If you omit this constant, the field is sorted in ascending (A - Z or 0 - 100) order (default).|

*fieldinfo*<br/>
A reference to a [CDaoFieldInfo](../../mfc/reference/cdaofieldinfo-structure.md) structure.

### Remarks

A `DAOField` (OLE) object is created and appended to the Fields collection of the `DAOTableDef` (OLE) object. Besides its use for examining object properties, you can also use `CDaoFieldInfo` to construct an input parameter for creating new fields in a tabledef. The first version of `CreateField` is simpler to use, but if you want finer control, you can use the second version of `CreateField`, which takes a `CDaoFieldInfo` parameter.

If you use the version of `CreateField` that takes a `CDaoFieldInfo` parameter, you must carefully set each of the following members of the `CDaoFieldInfo` structure:

- `m_strName`

- `m_nType`

- `m_lSize`

- `m_lAttributes`

- `m_bAllowZeroLength`

The remaining members of `CDaoFieldInfo` should be set to **0**, FALSE, or an empty string, as appropriate for the member, or a `CDaoException` may occur.

For related information, see the topic "CreateField Method" in DAO Help.

## <a name="createindex"></a> CDaoTableDef::CreateIndex

Call this function to add an index to a table.

```cpp
void CreateIndex(CDaoIndexInfo& indexinfo);
```

### Parameters

*indexinfo*<br/>
A reference to a [CDaoIndexInfo](../../mfc/reference/cdaoindexinfo-structure.md) structure.

### Remarks

Indexes specify the order of records accessed from database tables and whether or not duplicate records are accepted. Indexes also provide efficient access to data.

You do not have to create indexes for tables, but in large, unindexed tables, accessing a specific record or creating a recordset can take a long time. On the other hand, creating too many indexes slows down update, append, and delete operations as all indexes are automatically updated. Consider these factors as you decide which indexes to create.

The following members of the `CDaoIndexInfo` structure must be set:

- `m_strName` A name must be supplied.

- `m_pFieldInfos` Must point to an array of `CDaoIndexFieldInfo` structures.

- `m_nFields` Must specify the number of fields in the array of `CDaoFieldInfo` structures.

The remaining members will be ignored if set to FALSE. In addition, the `m_lDistinctCount` member is ignored during creation of the index.

## <a name="deletefield"></a> CDaoTableDef::DeleteField

Call this member function to remove a field and make it inaccessible.

```cpp
void DeleteField(LPCTSTR lpszName);
void DeleteField(int nIndex);
```

### Parameters

*lpszName*<br/>
A pointer to a string expression that is the name of an existing field.

*nIndex*<br/>
The index of the field in the table's zero-based Fields collection, for lookup by index.

### Remarks

You can use this member function on a new object that has not been appended to the database or when [CanUpdate](#canupdate) returns nonzero.

For related information, see the topic "Delete Method" in DAO Help.

## <a name="deleteindex"></a> CDaoTableDef::DeleteIndex

Call this member function to delete an index in an underlying table.

```cpp
void DeleteIndex(LPCTSTR lpszName);
void DeleteIndex(int nIndex);
```

### Parameters

*lpszName*<br/>
A pointer to a string expression that is the name of an existing index.

*nIndex*<br/>
The array index of the index object in the database's zero-based TableDefs collection, for lookup by index.

### Remarks

You can use this member function on a new object that hasn't been appended to the database or when [CanUpdate](#canupdate) returns nonzero.

For related information, see the topic "Delete Method" in DAO Help.

## <a name="getattributes"></a> CDaoTableDef::GetAttributes

For a `CDaoTableDef` object, the return value specifies characteristics of the table represented by the `CDaoTableDef` object and can be a sum of these constants:

```
long GetAttributes();
```

### Return Value

Returns a value that indicates one or more characteristics of a `CDaoTableDef` object.

### Remarks

|Constant|Description|
|--------------|-----------------|
|`dbAttachExclusive`|For databases that use the Microsoft Jet database engine, indicates the table is an attached table opened for exclusive use.|
|`dbAttachSavePWD`|For databases that use the Microsoft Jet database engine, indicates that the user ID and password for the attached table are saved with the connection information.|
|`dbSystemObject`|Indicates the table is a system table provided by the Microsoft Jet database engine.|
|`dbHiddenObject`|Indicates the table is a hidden table provided by the Microsoft Jet database engine.|
|`dbAttachedTable`|Indicates the table is an attached table from a non-ODBC database, such as a Paradox database.|
|`dbAttachedODBC`|Indicates the table is an attached table from an ODBC database, such as Microsoft SQL Server.|

A system table is a table created by the Microsoft Jet database engine to contain various internal information.

A hidden table is a table created for temporary use by the Microsoft Jet database engine.

For related information, see the topic "Attributes Property" in DAO Help.

## <a name="getconnect"></a> CDaoTableDef::GetConnect

Call this member function to obtain the connection string for a data source.

```
CString GetConnect();
```

### Return Value

A `CString` object containing the path and database type for the table.

### Remarks

For a `CDaoTableDef` object that represents an attached table, the `CString` object consists of one or two parts (a database type specifier and a path to the database).

The path as shown in the table below is the full path for the directory containing the database files and must be preceded by the identifier "DATABASE=". In some cases (as with Microsoft Jet and Microsoft Excel databases), a specific filename is included in the database path argument.

The table in [CDaoTableDef::SetConnect](#setconnect) shows possible database types and their corresponding database specifiers and paths:

For Microsoft Jet database base tables, the specifier is a empty string ("").

If a password is required but not provided, the ODBC driver displays a login dialog box the first time a table is accessed and again if the connection is closed and reopened. If an attached table has the `dbAttachSavePWD` attribute, the login prompt will not appear when the table is reopened.

For related information, see the topic "Connect Property" in DAO Help.

## <a name="getdatecreated"></a> CDaoTableDef::GetDateCreated

Call this function to determine the date and time the table underlying the `CDaoTableDef` object was created.

```
COleDateTime GetDateCreated();
```

### Return Value

A value containing the date and time of the creation of the table underlying the `CDaoTableDef` object.

### Remarks

The date and time settings are derived from the computer on which the base table was created or last updated. In a multiuser environment, users should get these settings directly from the file server to avoid discrepancies; that is, all clients should use a "standard" time source — perhaps from one server.

For related information, see the topic "DateCreated, LastUpdated Properties" in DAO Help.

## <a name="getdatelastupdated"></a> CDaoTableDef::GetDateLastUpdated

Call this function to determine the date and time the table underlying the `CDaoTableDef` object was last updated.

```
COleDateTime GetDateLastUpdated();
```

### Return Value

A value that contains the date and time the table underlying the `CDaoTableDef` object was last updated.

### Remarks

The date and time settings are derived from the computer on which the base table was created or last updated. In a multiuser environment, users should get these settings directly from the file server to avoid discrepancies; that is, all clients should use a "standard" time source — perhaps from one server.

For related information, see the topic "DateCreated, LastUpdated Properties" in DAO Help.

## <a name="getfieldcount"></a> CDaoTableDef::GetFieldCount

Call this member function to retrieve the number of fields defined in the table.

```
short GetFieldCount();
```

### Return Value

The number of fields in the table.

### Remarks

If its value is 0, there are no objects in the collection.

For related information, see the topic "Count Property" in DAO Help.

## <a name="getfieldinfo"></a> CDaoTableDef::GetFieldInfo

Call this member function to obtain various kinds of information about a field defined in the tabledef.

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
The index of the field object in the table's zero-based Fields collection, for lookup by index.

*fieldinfo*<br/>
A reference to a [CDaoFieldInfo](../../mfc/reference/cdaofieldinfo-structure.md) structure.

*dwInfoOptions*<br/>
Options that specify which information about the field to retrieve. The available options are listed here along with what they cause the function to return:

- `AFX_DAO_PRIMARY_INFO` (Default) Name, Type, Size, Attributes. Use this option for fastest performance.

- `AFX_DAO_SECONDARY_INFO` Primary information, plus: Ordinal Position, Required, Allow Zero Length, Collating Order, Foreign Name, Source Field, Source Table

- `AFX_DAO_ALL_INFO` Primary and secondary information, plus: Validation Rule, Validation Text, Default Value

*lpszName*<br/>
A pointer to the name of the field object, for lookup by name. The name is a string with up to 64 characters that uniquely names the field.

### Remarks

One version of the function lets you look up a field by index. The other version lets you look up a field by name.

For a description of the information returned, see the [CDaoFieldInfo](../../mfc/reference/cdaofieldinfo-structure.md) structure. This structure has members that correspond to the items of information listed above in the description of *dwInfoOptions*. When you request information at one level, you get information for any prior levels as well.

For related information, see the topic "Attributes Property" in DAO Help.

## <a name="getindexcount"></a> CDaoTableDef::GetIndexCount

Call this member function to obtain the number of indexes for a table.

```
short GetIndexCount();
```

### Return Value

The number of indexes for the table.

### Remarks

If its value is 0, there are no indexes in the collection.

For related information, see the topic "Count Property" in DAO Help.

## <a name="getindexinfo"></a> CDaoTableDef::GetIndexInfo

Call this member function to obtain various kinds of information about an index defined in the tabledef.

```cpp
void GetIndexInfo(
    int nIndex,
    CDaoIndexInfo& indexinfo,
    DWORD dwInfoOptions = AFX_DAO_PRIMARY_INFO);

void GetIndexInfo(
    LPCTSTR lpszName,
    CDaoIndexInfo& indexinfo,
    DWORD dwInfoOptions = AFX_DAO_PRIMARY_INFO);
```

### Parameters

*nIndex*<br/>
The numeric index of the Index object in the table's zero-based Indexes collection, for lookup by its position in the collection.

*indexinfo*<br/>
A reference to a [CDaoIndexInfo](../../mfc/reference/cdaoindexinfo-structure.md) structure.

*dwInfoOptions*<br/>
Options that specify which information about the index to retrieve. The available options are listed here along with what they cause the function to return:

- `AFX_DAO_PRIMARY_INFO` Name, Field Info, Fields. Use this option for fastest performance.

- `AFX_DAO_SECONDARY_INFO` Primary information, plus: Primary, Unique, Clustered, Ignore Nulls, Required, Foreign

- `AFX_DAO_ALL_INFO` Primary and secondary information, plus: Distinct Count

*lpszName*<br/>
A pointer to the name of the index object, for lookup by name.

### Remarks

One version of the function lets you look up an index by its position in the collection. The other version lets you look up an index by name.

For a description of the information returned, see the [CDaoIndexInfo](../../mfc/reference/cdaoindexinfo-structure.md) structure. This structure has members that correspond to the items of information listed above in the description of *dwInfoOptions*. When you request information at one level, you get information for any prior levels as well.

For related information, see the topic "Attributes Property" in DAO Help.

## <a name="getname"></a> CDaoTableDef::GetName

Call this member function to obtain the user-defined name of the underlying table.

```
CString GetName();
```

### Return Value

A user-defined name for a table.

### Remarks

This name starts with a letter and can contain a maximum of 64 characters. It can include numbers and underscore characters but cannot include punctuation or spaces.

For related information, see the topic "Name Property" in DAO Help.

## <a name="getrecordcount"></a> CDaoTableDef::GetRecordCount

Call this member function to find out how many records are in a `CDaoTableDef` object.

```
long GetRecordCount();
```

### Return Value

The number of records accessed in a tabledef object.

### Remarks

Calling `GetRecordCount` for a table-type `CDaoTableDef` object reflects the approximate number of records in the table and is affected immediately as table records are added and deleted. Rolled back transactions will appear as part of the record count until you call [CDaoWorkSpace::CompactDatabase](../../mfc/reference/cdaoworkspace-class.md#compactdatabase). A `CDaoTableDef` object with no records has a record count property setting of 0. When working with attached tables or ODBC databases, `GetRecordCount` always returns -1.

For related information, see the topic "RecordCount Property" in DAO Help.

## <a name="getsourcetablename"></a> CDaoTableDef::GetSourceTableName

Call this member function to retrieve the name of an attached table in a source database.

```
CString GetSourceTableName();
```

### Return Value

A `CString` object that specifies the source name of an attached table, or an empty string if a native data table.

### Remarks

An attached table is a table in another database linked to a Microsoft Jet database. Data for attached tables remains in the external database, where it can be manipulated by other applications.

For related information, see the topic "SourceTableName Property" in DAO Help.

## <a name="getvalidationrule"></a> CDaoTableDef::GetValidationRule

Call this member function to retrieve the validation rule for a tabledef.

```
CString GetValidationRule();
```

### Return Value

A `CString` object that validates the data in a field as it is changed or added to a table.

### Remarks

Validation rules are used in connection with update operations. If a tabledef contains a validation rule, updates to that tabledef must match predetermined criteria before the data is changed. If the change does not match the criteria, an exception containing the value of [GetValidationText](#getvalidationtext) is thrown. For a `CDaoTableDef` object, this `CString` is read-only for an attached table and read/write for a base table.

For related information, see the topic "ValidationRule Property" in DAO Help.

## <a name="getvalidationtext"></a> CDaoTableDef::GetValidationText

Call this function to retrieve the string to display when a user enters data that does not match the validation rule.

```
CString GetValidationText();
```

### Return Value

A `CString` object that specifies the text displayed if the user enters data that does not match the validation rule.

### Remarks

For a `CDaoTableDef` object, this `CString` is read-only for an attached table and read/write for a base table.

For related information, see the topic "ValidationText Property" in DAO Help.

## <a name="isopen"></a> CDaoTableDef::IsOpen

Call this member function to determine whether the `CDaoTableDef` object is currently open.

```
BOOL IsOpen() const;
```

### Return Value

Nonzero if the `CDaoTableDef` object is open; otherwise 0.

### Remarks

## <a name="m_pdatabase"></a> CDaoTableDef::m_pDatabase

Contains a pointer to the [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) object for this table.

### Remarks

## <a name="m_pdaotabledef"></a> CDaoTableDef::m_pDAOTableDef

Contains a pointer to the OLE interface for the DAO tabledef object underlying the `CDaoTableDef` object.

### Remarks

Use this pointer if you need to access the DAO interface directly.

## <a name="open"></a> CDaoTableDef::Open

Call this member function to open a tabledef previously saved in the database's TableDef's collection.

```
virtual void Open(LPCTSTR lpszName);
```

### Parameters

*lpszName*<br/>
A pointer to a string that specifies a table name.

### Remarks

## <a name="refreshlink"></a> CDaoTableDef::RefreshLink

Call this member function to update the connection information for an attached table.

```cpp
void RefreshLink();
```

### Remarks

You change the connection information for an attached table by calling [SetConnect](#setconnect) on the corresponding `CDaoTableDef` object and then using the `RefreshLink` member function to update the information. When you call `RefreshLink`, the attached table's properties are not changed.

To force the modified connect information to take effect, all open [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) objects based on this tabledef must be closed.

For related information, see the topic "RefreshLink Method" in DAO Help.

## <a name="setattributes"></a> CDaoTableDef::SetAttributes

Sets a value that indicates one or more characteristics of a `CDaoTableDef` object.

```cpp
void SetAttributes(long lAttributes);
```

### Parameters

*lAttributes*<br/>
Characteristics of the table represented by the `CDaoTableDef` object and can be a sum of these constants:

|Constant|Description|
|--------------|-----------------|
|`dbAttachExclusive`|For databases that use the Microsoft Jet database engine, indicates the table is an attached table opened for exclusive use.|
|`dbAttachSavePWD`|For databases that use the Microsoft Jet database engine, indicates that the user ID and password for the attached table are saved with the connection information.|
|`dbSystemObject`|Indicates the table is a system table provided by the Microsoft Jet database engine.|
|`dbHiddenObject`|Indicates the table is a hidden table provided by the Microsoft Jet database engine.|

### Remarks

When setting multiple attributes, you can combine them by summing the appropriate constants using the bitwise-OR operator. Setting `dbAttachExclusive` on a nonattached table produces an exception. Combining the following values also produce an exception:

- **dbAttachExclusive &#124; dbAttachedODBC**

- **dbAttachSavePWD &#124; dbAttachedTable**

For related information, see the topic "Attributes Property" in DAO Help.

## <a name="setconnect"></a> CDaoTableDef::SetConnect

For a `CDaoTableDef` object that represents an attached table, the string object consists of one or two parts (a database type specifier and a path to the database).

```cpp
void SetConnect(LPCTSTR lpszConnect);
```

### Parameters

*lpszConnect*<br/>
A pointer to a string expression that specifies additional parameters to pass to ODBC or installable ISAM drivers.

### Remarks

The path as shown in the table below is the full path for the directory containing the database files and must be preceded by the identifier "DATABASE=". In some cases (as with Microsoft Jet and Microsoft Excel databases), a specific filename is included in the database path argument.

> [!NOTE]
> Do not include whitespace around the equal sign in path statements of the form "DATABASE=drive:\\\path". This will result in an exception being thrown and the connection failing.

The following table shows possible database types and their corresponding database specifiers and paths:

|Database type|Specifier|Path|
|-------------------|---------------|----------|
|Database using the Jet database engine|"[ `database`];"|" `drive`:\\\ *path*\\\ *filename*.MDB"|
|dBASE III|"dBASE III;"|" `drive`:\\\ *path*"|
|dBASE IV|"dBASE IV;"|" `drive`:\\\ *path*"|
|dBASE 5|"dBASE 5.0;"|" `drive`:\\\ *path*"|
|Paradox 3.x|"Paradox 3.x;"|" `drive`:\\\ *path*"|
|Paradox 4.x|"Paradox 4.x;"|" `drive`:\\\ *path*"|
|Paradox 5.x|"Paradox 5.x;"|" `drive`:\\\ *path*"|
|Excel 3.0|"Excel 3.0;"|" `drive`:\\\ *path*\\\ *filename*.XLS"|
|Excel 4.0|"Excel 4.0;"|" `drive`:\\\ *path*\\\ *filename*.XLS"|
|Excel 5.0 or Excel 95|"Excel 5.0;"|" `drive`:\\\ *path*\\\ *filename*.XLS"|
|Excel 97|"Excel 8.0;"|" `drive`:\\\ *path*\ *filename*.XLS"|
|HTML Import|"HTML Import;"|" `drive`:\\\ *path*\ *filename*"|
|HTML Export|"HTML Export;"|" `drive`:\\\ *path*"|
|Text|"Text;"|"drive:\\\path"|
|ODBC|"ODBC; DATABASE= `database`; UID= *user*;PWD= *password*; DSN= *datasourcename;* LOGINTIMEOUT= *seconds;*" (This may not be a complete connection string for all servers; it is just an example. It is very important not to have spaces between the parameters.)|None|
|Exchange|"Exchange;<br /><br /> MAPILEVEL= *folderpath*;<br /><br /> [TABLETYPE={ 0 &#124; 1 };]<br /><br /> [PROFILE= *profile*;]<br /><br /> [PWD= *password*;]<br /><br /> [DATABASE= `database`;]"|*"drive*:\\\ *path*\\\ *filename*.MDB"|

> [!NOTE]
> Btrieve is no longer supported as of DAO 3.5.

You must use a double backslash (\\\\) in the connection strings. If you have modified the properties of an existing connection using `SetConnect`, you must subsequently call [RefreshLink](#refreshlink). If you are initializing the connection properties using `SetConnect`, you need not call `RefreshLink`, but should you choose to do so, first append the tabledef.

If a password is required but not provided, the ODBC driver displays a login dialog box the first time a table is accessed and again if the connection is closed and reopened.

You can set the connection string for a `CDaoTableDef` object by providing a source argument to the `Create` member function. You can check the setting to determine the type, path, user ID, password, or ODBC data source of the database. For more information, see the documentation for the specific driver.

For related information, see the topic "Connect Property" in DAO Help.

## <a name="setname"></a> CDaoTableDef::SetName

Call this member function to set a user-defined name for a table.

```cpp
void SetName(LPCTSTR lpszName);
```

### Parameters

*lpszName*<br/>
A pointer to a string expression that specifies a name for a table.

### Remarks

The name must start with a letter and can contain a maximum of 64 characters. It can include numbers and underscore characters but cannot include punctuation or spaces.

For related information, see the topic "Name Property" in DAO Help.

## <a name="setsourcetablename"></a> CDaoTableDef::SetSourceTableName

Call this member function to specify the name of an attached table or the name of the base table on which the `CDaoTableDef` object is based, as it exists in the original source of the data.

```cpp
void SetSourceTableName(LPCTSTR lpszSrcTableName);
```

### Parameters

*lpszSrcTableName*<br/>
A pointer to a string expression that specifies a table name in the external database. For a base table, the setting is an empty string ("").

### Remarks

You must then call [RefreshLink](#refreshlink). This property setting is empty for a base table and read/write for an attached table or an object not appended to a collection.

For related information, see the topic "SourceTableName Property" in DAO Help.

## <a name="setvalidationrule"></a> CDaoTableDef::SetValidationRule

Call this member function to set a validation rule for a tabledef.

```cpp
void SetValidationRule(LPCTSTR lpszValidationRule);
```

### Parameters

*lpszValidationRule*<br/>
A pointer to a string expression that validates an operation.

### Remarks

Validation rules are used in connection with update operations. If a tabledef contains a validation rule, updates to that tabledef must match predetermined criteria before the data is changed. If the change does not match the criteria, an exception containing the text of [GetValidationText](#getvalidationtext) is displayed.

Validation is supported only for databases that use the Microsoft Jet database engine. The expression cannot refer to user-defined functions, domain aggregate functions, SQL aggregate functions, or queries. A validation rule for a `CDaoTableDef` object can refer to multiple fields in that object.

For example, for fields named *hire_date* and *termination_date*, a validation rule might be:

[!code-cpp[NVC_MFCDatabase#34](../../mfc/codesnippet/cpp/cdaotabledef-class_1.cpp)]

For related information, see the topic "ValidationRule Property" in DAO Help.

## <a name="setvalidationtext"></a> CDaoTableDef::SetValidationText

Call this member function to set the exception text of a validation rule for a `CDaoTableDef` object with an underlying base table supported by the Microsoft Jet database engine.

```cpp
void SetValidationText(LPCTSTR lpszValidationText);
```

### Parameters

*lpszValidationText*<br/>
A pointer to a string expression that specifies the text displayed if entered data is invalid.

### Remarks

You cannot set the validation text of an attached table.

For related information, see the topic "ValidationText Property" in DAO Help.

## See also

[CObject Class](../../mfc/reference/cobject-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CDaoDatabase Class](../../mfc/reference/cdaodatabase-class.md)<br/>
[CDaoRecordset Class](../../mfc/reference/cdaorecordset-class.md)
