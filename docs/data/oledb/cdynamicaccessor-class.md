---
description: "Learn more about: CDynamicAccessor Class"
title: "CDynamicAccessor Class"
ms.date: "11/04/2016"
f1_keywords: ["ATL.CDynamicAccessor", "ATL::CDynamicAccessor", "CDynamicAccessor", "ATL::CDynamicAccessor::AddBindEntry", "CDynamicAccessor.AddBindEntry", "CDynamicAccessor::AddBindEntry", "ATL.CDynamicAccessor.AddBindEntry", "CDynamicAccessor::CDynamicAccessor", "ATL::CDynamicAccessor::CDynamicAccessor", "ATL.CDynamicAccessor.CDynamicAccessor", "CDynamicAccessor.CDynamicAccessor", "ATL::CDynamicAccessor::Close", "ATL.CDynamicAccessor.Close", "CDynamicAccessor.Close", "CDynamicAccessor::Close", "ATL.CDynamicAccessor.GetBlobHandling", "CDynamicAccessor::GetBlobHandling", "ATL::CDynamicAccessor::GetBlobHandling", "GetBlobHandling", "CDynamicAccessor.GetBlobHandling", "ATL::CDynamicAccessor::GetBlobSizeLimit", "CDynamicAccessor.GetBlobSizeLimit", "CDynamicAccessor::GetBlobSizeLimit", "GetBlobSizeLimit", "ATL.CDynamicAccessor.GetBlobSizeLimit", "CDynamicAccessor.GetBookmark", "GetBookmark", "CDynamicAccessor::GetBookmark", "ATL.CDynamicAccessor.GetBookmark", "ATL::CDynamicAccessor::GetBookmark", "ATL.CDynamicAccessor.GetColumnCount", "ATL::CDynamicAccessor::GetColumnCount", "CDynamicAccessor::GetColumnCount", "CDynamicAccessor.GetColumnCount", "GetColumnCount", "CDynamicAccessor.GetColumnFlags", "ATL::CDynamicAccessor::GetColumnFlags", "ATL.CDynamicAccessor.GetColumnFlags", "CDynamicAccessor::GetColumnFlags", "ATL.CDynamicAccessor.GetColumnInfo", "ATL::CDynamicAccessor::GetColumnInfo", "CDynamicAccessor.GetColumnInfo", "CDynamicAccessor::GetColumnInfo", "ATL::CDynamicAccessor::GetColumnName", "GetColumnName", "ATL.CDynamicAccessor.GetColumnName", "CDynamicAccessor::GetColumnName", "CDynamicAccessor.GetColumnName", "ATL.CDynamicAccessor.GetColumnType", "CDynamicAccessor::GetColumnType", "GetColumnType", "CDynamicAccessor.GetColumnType", "ATL::CDynamicAccessor::GetColumnType", "CDynamicAccessor.GetLength", "ATL.CDynamicAccessor.GetLength", "CDynamicAccessor::GetLength", "ATL::CDynamicAccessor::GetLength", "CDynamicAccessor.GetOrdinal", "ATL::CDynamicAccessor::GetOrdinal", "CDynamicAccessor::GetOrdinal", "ATL.CDynamicAccessor.GetOrdinal", "GetOrdinal", "ATL::CDynamicAccessor::GetStatus", "CDynamicAccessor.GetStatus", "ATL.CDynamicAccessor.GetStatus", "CDynamicAccessor::GetStatus", "GetValue", "CDynamicAccessor::GetValue<ctype>", "ATL.CDynamicAccessor.GetValue<ctype>", "CDynamicAccessor.GetValue", "CDynamicAccessor::GetValue", "ATL.CDynamicAccessor.GetValue", "ATL::CDynamicAccessor::GetValue", "ATL::CDynamicAccessor::GetValue<ctype>", "CDynamicAccessor::SetBlobHandling", "CDynamicAccessor.SetBlobHandling", "ATL::CDynamicAccessor::SetBlobHandling", "SetBlobHandling", "ATL.CDynamicAccessor.SetBlobHandling", "CDynamicAccessor::SetBlobSizeLimit", "SetBlobSizeLimit", "CDynamicAccessor.SetBlobSizeLimit", "ATL.CDynamicAccessor.SetBlobSizeLimit", "ATL::CDynamicAccessor::SetBlobSizeLimit", "ATL::CDynamicAccessor::SetLength", "CDynamicAccessor.SetLength", "CDynamicAccessor::SetLength", "ATL.CDynamicAccessor.SetLength", "CDynamicAccessor::SetStatus", "ATL::CDynamicAccessor::SetStatus", "CDynamicAccessor.SetStatus", "ATL.CDynamicAccessor.SetStatus", "ATL.CDynamicAccessor.SetValue", "ATL::CDynamicAccessor::SetValue", "ATL::CDynamicAccessor::SetValue<ctype>", "CDynamicAccessor.SetValue", "ATL.CDynamicAccessor.SetValue<ctype>", "CDynamicAccessor::SetValue", "CDynamicAccessor::SetValue<ctype>"]
helpviewer_keywords: ["CDynamicAccessor class", "AddBindEntry method", "CDynamicAccessor class, constructor", "Close method", "GetBlobHandling method", "GetBlobSizeLimit method", "GetBookmark method", "GetColumnCount method", "GetColumnFlags method", "GetColumnInfo method", "GetColumnName method", "GetColumnType method", "GetLength method", "GetOrdinal method", "GetStatus method", "GetValue method", "SetBlobHandling method", "SetBlobSizeLimit method", "SetLength method", "SetStatus method", "SetValue method"]
ms.assetid: 374b13b7-1f09-457d-9e6b-df260ff4d178
---
# CDynamicAccessor Class

Allows you to access a data source when you have no knowledge of the database schema (the database's underlying structure).

## Syntax

```cpp
class CDynamicAccessor : public CAccessorBase
```

## Requirements

**Header**: atldbcli.h

## Members

### Methods

| Name | Description |
|-|-|
|[AddBindEntry](#addbindentry)|Adds a bind entry to the output columns when overriding the default accessor.|
|[CDynamicAccessor](#cdynamicaccessor)|Instantiates and initializes the `CDynamicAccessor` object.|
|[Close](#close)|Unbinds all the columns, releases the allocated memory, and releases the [IAccessor](/previous-versions/windows/desktop/ms719672(v=vs.85)) interface pointer in the class.|
|[GetBlobHandling](#getblobhandling)|Retrieves the BLOB handling value for the current row.|
|[GetBlobSizeLimit](#getblobsizelimit)|Retrieves the maximum BLOB size in bytes.|
|[GetBookmark](#getbookmark)|Retrieves the bookmark for the current row.|
|[GetColumnCount](#getcolumncount)|Retrieves the number of columns in the rowset.|
|[GetColumnFlags](#getcolumnflags)|Retrieves the column characteristics.|
|[GetColumnInfo](#getcolumninfo)|Retrieves the column metadata.|
|[GetColumnName](#getcolumnname)|Retrieves the name of a specified column.|
|[GetColumnType](#getcolumntype)|Retrieves the data type of a specified column.|
|[GetLength](#getlength)|Retrieves the maximum possible length of a column in bytes.|
|[GetOrdinal](#getordinal)|Retrieves the column index given a column name.|
|[GetStatus](#getstatus)|Retrieves the status of a specified column.|
|[GetValue](#getvalue)|Retrieves the data from the buffer.|
|[SetBlobHandling](#setblobhandling)|Sets the BLOB handling value for the current row.|
|[SetBlobSizeLimit](#setblobsizelimit)|Sets the maximum BLOB size in bytes.|
|[SetLength](#setlength)|Sets the length of the column in bytes.|
|[SetStatus](#setstatus)|Sets the status of a specified column.|
|[SetValue](#setvalue)|Stores the data to the buffer.|

## Remarks

Use `CDynamicAccessor` methods to obtain column information such as column names, column count, data type, and so on. You then use this column information to create an accessor dynamically at run time.

The column information is stored in a buffer that is created and managed by this class. Obtain data from the buffer using [GetValue](#getvalue).

For a discussion and examples of using the dynamic accessor classes, see [Using Dynamic Accessors](../../data/oledb/using-dynamic-accessors.md).

## <a name="addbindentry"></a> CDynamicAccessor::AddBindEntry

Adds a bind entry to the output columns.

### Syntax

```cpp
HRESULT AddBindEntry(const DBCOLUMNINFO& info) throw();
```

#### Parameters

*info*<br/>
[in] A `DBCOLUMNINFO` structure containing column information. See "DBCOLUMNINFO Structures" in [IColumnsInfo::GetColumnInfo](/previous-versions/windows/desktop/ms722704\(v=vs.85\)) in the *OLE DB Programmer's Reference*.

### Return Value

One of the standard HRESULT values.

### Remarks

Use this method when overriding the default accessor created with `CDynamicAccessor` (see [How Do I Fetch Data?](../../data/oledb/fetching-data.md)).

## <a name="cdynamicaccessor"></a> CDynamicAccessor::CDynamicAccessor

Instantiates and initializes the `CDynamicAccessor` object.

### Syntax

```cpp
CDynamicAccessor(DBBLOBHANDLINGENUM eBlobHandling = DBBLOBHANDLING_DEFAULT,
   DBLENGTH nBlobSize = 8000);
```

#### Parameters

*eBlobHandling*<br/>
Specifies how the binary large object (BLOB) data is to be handled. The default value is DBBLOBHANDLING_DEFAULT. See [SetBlobHandling](#setblobhandling) for a description of the DBBLOBHANDLINGENUM values.

*nBlobSize*<br/>
The maximum BLOB size in bytes; column data over this value is treated as a BLOB. The default value is 8,000. See [SetBlobSizeLimit](#setblobsizelimit) for details.

### Remarks

If you use the constructor to initialize the `CDynamicAccessor` object, you can specify how it will bind BLOBs. BLOBs can contain binary data such as graphics, sound, or compiled code. The default behavior is to treat columns more than 8,000 bytes as BLOBs and try to bind them to an `ISequentialStream` object. However, you can specify a different value to be the BLOB size.

You can also specify how `CDynamicAccessor` handles column data that qualifies as BLOB data: it can handle BLOB data in the default manner; it can skip (does not bind) BLOB data; or it can bind BLOB data in provider-allocated memory.

## <a name="close"></a> CDynamicAccessor::Close

Unbinds all the columns, releases the allocated memory, and releases the [IAccessor](/previous-versions/windows/desktop/ms719672(v=vs.85)) interface pointer in the class.

### Syntax

```cpp
void Close() throw();
```

## <a name="getblobhandling"></a> CDynamicAccessor::GetBlobHandling

Retrieves the BLOB handling value for the current row.

### Syntax

```cpp
const DBBLOBHANDLINGENUM GetBlobHandling() const;
```

### Remarks

Returns the BLOB handling value *eBlobHandling* as set by [SetBlobHandling](#setblobhandling).

## <a name="getblobsizelimit"></a> CDynamicAccessor::GetBlobSizeLimit

Retrieves the maximum BLOB size in bytes.

### Syntax

```cpp
const DBLENGTH GetBlobSizeLimit() const;
```

### Remarks

Returns the BLOB handling value *nBlobSize* as set by [SetBlobSizeLimit](#setblobsizelimit).

## <a name="getbookmark"></a> CDynamicAccessor::GetBookmark

Retrieves the bookmark for the current row.

### Syntax

```cpp
HRESULT GetBookmark(CBookmark< >* pBookmark) const throw();
```

#### Parameters

*pBookmark*<br/>
[out] A pointer to the [CBookmark](../../data/oledb/cbookmark-class.md) object.

### Return Value

One of the standard HRESULT values.

### Remarks

You need to set `DBPROP_IRowsetLocate` to VARIANT_TRUE to retrieve a bookmark.

## <a name="getcolumncount"></a> CDynamicAccessor::GetColumnCount

Retrieves the number of columns.

### Syntax

```cpp
DBORDINAL GetColumnCount() const throw();
```

### Return Value

The number of columns retrieved.

## <a name="getcolumnflags"></a> CDynamicAccessor::GetColumnFlags

Retrieves the column characteristics.

### Syntax

```cpp
bool GetColumnFlags(DBORDINAL nColumn,
   DBCOLUMNFLAGS* pFlags) const throw();
```

#### Parameters

*nColumn*<br/>
[in] The column number. Column numbers start with 1. A value of 0 refers to the bookmark column, if any.

*pFlags*<br/>
[out] A pointer to a bitmask that describes column characteristics. See "DBCOLUMNFLAGS Enumerated Type" in [IColumnsInfo::GetColumnInfo](/previous-versions/windows/desktop/ms722704\(v=vs.85\)) in the *OLE DB Programmer's Reference*.

### Return Value

Returns **`true`** if the column characteristics are successfully retrieved. Otherwise, it returns **`false`**.

### Remarks

The column number is offset from one. Column zero is a special case; it is the bookmark if available.

## <a name="getcolumninfo"></a> CDynamicAccessor::GetColumnInfo

Returns the column metadata needed by most consumers.

### Syntax

```cpp
HRESULT GetColumnInfo(IRowset* pRowset,
   DBORDINAL* pColumns,
   DBCOLUMNINFO** ppColumnInfo,
   OLECHAR** ppStringsBuffer) throw();
```

#### Parameters

*pRowset*<br/>
[in] A pointer to the [IRowset](/previous-versions/windows/desktop/ms720986(v=vs.85)) interface.

*pColumns*<br/>
[out] A pointer to memory in which to return the number of columns in the rowset; this number includes the bookmark column, if there is one.

*ppColumnInfo*<br/>
[out] A pointer to memory in which to return an array of `DBCOLUMNINFO` structures. See "DBCOLUMNINFO Structures" in [IColumnsInfo::GetColumnInfo](/previous-versions/windows/desktop/ms722704\(v=vs.85\)) in the *OLE DB Programmer's Reference*.

*ppStringsBuffer*<br/>
[out] A pointer to memory in which to return a pointer to storage for all string values (names used either within *columnid* or for *pwszName*) within a single allocation block.

### Return Value

One of the standard HRESULT values.

### Remarks

See [IColumnsInfo::GetColumnInfo](/previous-versions/windows/desktop/ms722704\(v=vs.85\)) in the *OLE DB Programmer's Reference* for information on the data types `DBORDINAL`, `DBCOLUMNINFO`, and `OLECHAR`.

## <a name="getcolumnname"></a> CDynamicAccessor::GetColumnName

Retrieves the name of the specified column.

### Syntax

```cpp
LPOLESTR GetColumnName(DBORDINAL nColumn) const throw();
```

#### Parameters

*nColumn*<br/>
[in] The column number. Column numbers start with 1. A value of 0 refers to the bookmark column, if any.

### Return Value

The name of the specified column.

## <a name="getcolumntype"></a> CDynamicAccessor::GetColumnType

Retrieves the data type of a specified column.

### Syntax

```cpp
bool GetColumnType(DBORDINAL nColumn,
   DBTYPE* pType) const throw();
```

#### Parameters

*nColumn*<br/>
[in] The column number. Column numbers start with 1. A value of 0 refers to the bookmark column, if any.

*pType*<br/>
[out] A pointer to the data type of the specified column.

### Return Value

Returns **`true`** on success or **`false`** on failure.

## <a name="getlength"></a> CDynamicAccessor::GetLength

Retrieves the length of the specified column.

### Syntax

```cpp
bool GetLength(DBORDINAL nColumn,
   DBLENGTH* pLength) const throw();

bool GetLength(const CHAR* pColumnName,
   DBLENGTH* pLength) const throw();

bool GetLength(const WCHAR* pColumnName,
   DBLENGTH* pLength) const throw();
```

#### Parameters

*nColumn*<br/>
[in] The column number. Column numbers start with 1. A value of 0 refers to the bookmark column, if any.

*pColumnName*<br/>
[in] A pointer to a character string containing the column name.

*pLength*<br/>
[out] A pointer to the integer containing the length of the column in bytes.

### Return Value

Returns **`true`** if the specified column is found. Otherwise, this function returns **`false`**.

### Remarks

The first override takes the column number, and the second and third overrides take the column name in ANSI or Unicode format, respectively.

## <a name="getordinal"></a> CDynamicAccessor::GetOrdinal

Retrieves the column number given a column name.

### Syntax

```cpp
bool GetOrdinal(const CHAR* pColumnName,
   DBORDINAL* pOrdinal) const throw();

bool GetOrdinal(const WCHAR* pColumnName,
   DBORDINAL* pOrdinal) const throw();
```

#### Parameters

*pColumnName*<br/>
[in] A pointer to a character string containing the column name.

*pOrdinal*<br/>
[out] A pointer to the column number.

### Return Value

Returns **`true`** if a column with the specified name is found. Otherwise, this function returns **`false`**.

## <a name="getstatus"></a> CDynamicAccessor::GetStatus

Retrieves the status of the specified column.

### Syntax

```cpp
bool GetStatus(DBORDINAL nColumn,
   DBSTATUS* pStatus) const throw();

bool GetStatus(const CHAR* pColumnName,
   DBSTATUS* pStatus) const throw();

bool GetStatus(const WCHAR* pColumnName,
   DBSTATUS* pStatus) const throw();
```

#### Parameters

*nColumn*<br/>
[in] The column number. Column numbers start with 1. A value of 0 refers to the bookmark column, if any.

*pColumnName*<br/>
[in] A pointer to a character string containing the column name.

*pStatus*<br/>
[out] A pointer to the variable containing the column status. See [DBSTATUS](/previous-versions/windows/desktop/ms722617(v=vs.85)) in the *OLE DB Programmer's Reference* for more information.

### Return Value

Returns **`true`** if the specified column is found. Otherwise, this function returns **`false`**.

## <a name="getvalue"></a> CDynamicAccessor::GetValue

Retrieves the data for a specified column.

### Syntax

```cpp
void* GetValue(DBORDINAL nColumn) const throw();

void* GetValue(const CHAR* pColumnName) const throw();

void* GetValue(const WCHAR* pColumnName) const throw();

template < class ctype >
bool GetValue(DBORDINAL nColumn, ctype* pData) const throw();

template < class ctype >
bool GetValue(const CHAR* pColumnName, ctype* pData) const throw();

template < class ctype >
bool GetValue(const WCHAR* pColumnName, ctype* pData) const throw();
```

#### Parameters

*ctype*<br/>
[in] A templated parameter that handles any data type except string types (`CHAR*`, `WCHAR*`), which require special handling. `GetValue` uses the appropriate data type based on what you specify here.

*nColumn*<br/>
[in] The column number. Column numbers start with 1. A value of 0 refers to the bookmark column, if any.

*pColumnName*<br/>
[in] The column name.

*pData*<br/>
[out] The pointer to the contents of the specified column.

### Return Value

If you want to pass string data, use the nontemplated versions of `GetValue`. The nontemplated versions of this method return **`void*`**, which points to the part of the buffer that contains the specified column data. Returns NULL if the column is not found.

For all other data types, it is simpler to use the templated versions of `GetValue`. The templated versions return **`true`** on success or **`false`** on failure.

### Remarks

Use the nontemplated versions to return columns that contain strings and the templated versions for columns that contain other data types.

In debug mode, you will get an assertion if the size of *pData* is unequal to the size of the column to which it points.

## <a name="setblobhandling"></a> CDynamicAccessor::SetBlobHandling

Sets the BLOB handling value for the current row.

### Syntax

```cpp
bool SetBlobHandling(DBBLOBHANDLINGENUM eBlobHandling);
```

#### Parameters

*eBlobHandling*<br/>
Specifies how the BLOB data is to be handled. It can take the following values:

- DBBLOBHANDLING_DEFAULT: Handle column data larger than *nBlobSize* (as set by `SetBlobSizeLimit`) as BLOB data and retrieve it through an `ISequentialStream` or `IStream` object. This option will attempt to bind every column containing data larger than *nBlobSize* or listed as DBTYPE_IUNKNOWN as BLOB data.

- DBBLOBHANDLING_NOSTREAMS: Handle column data larger than *nBlobSize* (as set by `SetBlobSizeLimit`) as BLOB data and retrieve it through reference in provider-allocated, consumer-owned memory. This option is useful for tables that have more than one BLOB column, and the provider supports only one `ISequentialStream` object per accessor.

- DBBLOBHANDLING_SKIP: Skip (do not bind) columns qualifying as containing BLOBs (the accessor will not bind or retrieve the column value but it will still retrieve the column status and length).

### Remarks

You should call `SetBlobHandling` before calling `Open`.

The constructor method [CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md) sets the BLOB handling value to DBBLOBHANDLING_DEFAULT.

## <a name="setblobsizelimit"></a> CDynamicAccessor::SetBlobSizeLimit

Sets the maximum BLOB size in bytes.

### Syntax

```cpp
void SetBlobSizeLimit(DBLENGTH nBlobSize);
```

#### Parameters

*nBlobSize*<br/>
Specifies the BLOB size limit.

### Remarks

Sets the maximum BLOB size in bytes; column data larger than this value is treated as a BLOB. Some providers give extremely large sizes for columns (such as 2 GB). Rather than attempting to allocate memory for a column this size, you would typically try to bind these columns as BLOBs. In that way you don't have to allocate all the memory, but you can still read all the data without fear of truncation. However, there are some cases in which you might want to force `CDynamicAccessor` to bind large columns in their native data types. To do this, call `SetBlobSizeLimit` before calling `Open`.

The constructor method [CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md) sets the maximum BLOB size to a default value of 8,000 bytes.

## <a name="setlength"></a> CDynamicAccessor::SetLength

Sets the length of the specified column.

### Syntax

```cpp
bool SetLength(DBORDINAL nColumn,
   DBLENGTH nLength)throw();

bool SetLength(const CHAR* pColumnName,
   DBLENGTH nLength) throw();

bool SetLength(const WCHAR* pColumnName,
   DBLENGTH nLength) throw();
```

#### Parameters

*nColumn*<br/>
[in] The column number. Column numbers start with 1. A value of 0 refers to the bookmark column, if any.

*nLength*<br/>
[in] The length of the column in bytes.

*pColumnName*<br/>
[in] A pointer to a character string containing the column name.

### Return Value

Returns **`true`** if the specified column length is set successfully. Otherwise, this function returns **`false`**.

## <a name="setstatus"></a> CDynamicAccessor::SetStatus

Sets the status of the specified column.

### Syntax

```cpp
bool SetStatus(DBORDINAL nColumn,
   DBSTATUS status)throw();

bool SetStatus(const CHAR* pColumnName,
   DBSTATUS status) throw();

bool SetStatus(const WCHAR* pColumnName,
   DBSTATUS status) throw();
```

#### Parameters

*nColumn*<br/>
[in] The column number. Column numbers start with 1. A value of 0 refers to the bookmark column, if any.

*status*<br/>
[in] The column status. See [DBSTATUS](/previous-versions/windows/desktop/ms722617(v=vs.85)) in the *OLE DB Programmer's Reference* for more information.

*pColumnName*<br/>
[in] A pointer to a character string containing the column name.

### Return Value

Returns **`true`** if the specified column status is set successfully. Otherwise, this function returns **`false`**.

## <a name="setvalue"></a> CDynamicAccessor::SetValue

Stores data to a specified column.

### Syntax

```cpp
template <class ctype>
bool SetValue(
   DBORDINAL nColumn,
   constctype& data) throw( );

template <class ctype>
bool SetValue(
   const CHAR * pColumnName,
   const ctype& data) throw( );

template <class ctype>
bool SetValue(
   const WCHAR *pColumnName,
   const ctype& data) throw( );
```

#### Parameters

*ctype*<br/>
[in] A templated parameter that handles any data type except string types (`CHAR*`, `WCHAR*`), which require special handling. `GetValue` uses the appropriate data type based on what you specify here.

*pColumnName*<br/>
[in] A pointer to a character string containing the column name.

*data*<br/>
[in] The pointer to the memory containing the data.

*nColumn*<br/>
[in] The column number. Column numbers start with 1. A value of 0 refers to the bookmark column, if any.

### Return Value

If you want to set string data, use the nontemplated versions of `GetValue`. The nontemplated versions of this method return **`void*`**, which points to the part of the buffer that contains the specified column data. Returns NULL if the column is not found.

For all other data types, it is simpler to use the templated versions of `GetValue`. The templated versions return **`true`** on success or **`false`** on failure.

## See also

[OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[OLE DB Consumer Templates Reference](../../data/oledb/ole-db-consumer-templates-reference.md)<br/>
[CAccessor Class](../../data/oledb/caccessor-class.md)<br/>
[CDynamicParameterAccessor Class](../../data/oledb/cdynamicparameteraccessor-class.md)<br/>
[CManualAccessor Class](../../data/oledb/cmanualaccessor-class.md)
