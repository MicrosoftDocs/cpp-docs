---
description: "Learn more about: CDynamicStringAccessor Class"
title: "CDynamicStringAccessor Class"
ms.date: "11/04/2016"
f1_keywords: ["CDynamicStringAccessor", "CDynamicStringAccessor.GetString", "CDynamicStringAccessor::GetString", "CDynamicStringAccessor::SetString", "CDynamicStringAccessor.SetString"]
helpviewer_keywords: ["CDynamicStringAccessor class", "GetString method", "SetString method"]
ms.assetid: 138dc4de-c7c3-478c-863e-431e48249027
---
# CDynamicStringAccessor Class

Allows you to access a data source when you have no knowledge of the database schema (the database's underlying structure).

## Syntax

```cpp
template< typename BaseType, DBTYPEENUM OleDbType >
class CDynamicStringAccessorT : public CDynamicAccessor
```

## Requirements

**Header**: atldbcli.h

## Members

### Methods

| Name | Description |
|-|-|
|[GetString](#getstring)|Retrieves the specified column data as a string.|
|[SetString](#setstring)|Sets the specified column data as a string.|

## Remarks

While [CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md) requests data in the native format reported by the provider, `CDynamicStringAccessor` requests that the provider fetch all data accessed from the data store as string data. This is especially useful for simple tasks that do not require calculation of values in the data store, such as displaying or printing the data store's contents.

The native type of column data in the data store does not matter; as long as the provider can support the data conversion, it will supply the data in string format. If the provider does not support the conversion from the native data type to a string (which is not common), the requesting call will return the success value DB_S_ERRORSOCCURED, and the status for the corresponding column will indicate a conversion problem with DBSTATUS_E_CANTCONVERTVALUE.

Use `CDynamicStringAccessor` methods to obtain column information. You use this column information to create an accessor dynamically at run time.

The column information is stored in a buffer created and managed by this class. Obtain data from the buffer using [GetString](#getstring), or store it to the buffer using [SetString](#setstring).

For a discussion and examples of using the dynamic accessor classes, see [Using Dynamic Accessors](../../data/oledb/using-dynamic-accessors.md).

## <a name="getstring"></a> CDynamicStringAccessor::GetString

Retrieves the specified column data as a string.

### Syntax

```cpp
BaseType* GetString(DBORDINAL nColumn) const throw();

BaseType* GetString(const CHAR* pColumnName) const throw();

BaseType* GetString(const WCHAR* pColumnName) const throw();
```

#### Parameters

*nColumn*<br/>
[in] The column number. Column numbers start with 1. A value of 0 refers to the bookmark column, if any.

*pColumnName*<br/>
[in] A pointer to a character string that contains the column name.

### Return Value

A pointer to the string value retrieved from the specified column. The value is of type `BaseType`, which will be **CHAR** or **WCHAR** depending on whether _UNICODE is defined or not. Returns NULL if the specified column is not found.

### Remarks

The second override form takes the column name as an ANSI string. The third override form takes the column name as a Unicode string.

## <a name="setstring"></a> CDynamicStringAccessor::SetString

Sets the specified column data as a string.

### Syntax

```cpp
HRESULT SetString(DBORDINAL nColumn,
   BaseType* data) throw();

HRESULT SetString(const CHAR* pColumnName,
   BaseType* data) throw();

HRESULT SetString(const WCHAR* pColumnName,
   BaseType* data) throw();
```

#### Parameters

*nColumn*<br/>
[in] The column number. Column numbers start with 1. The special value of 0 refers to the bookmark column, if any.

*pColumnName*<br/>
[in] A pointer to a character string that contains the column name.

*data*<br/>
[in] A pointer to the string data to be written to the specified column.

### Return Value

A pointer to the string value to which to set the specified column. The value is of type `BaseType`, which will be **CHAR** or **WCHAR** depending on whether _UNICODE is defined or not.

### Remarks

The second override form takes the column name as an ANSI string and the third override form takes the column name as a Unicode string.

If _SECURE_ATL is defined to have a nonzero value, a runtime assertion failure will be generated if the input *data* string is longer than the maximum allowable length of the referenced data column. Otherwise, the input string will be truncated if it is longer than the maximum allowable length.

## See also

[OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[OLE DB Consumer Templates Reference](../../data/oledb/ole-db-consumer-templates-reference.md)<br/>
[CAccessor Class](../../data/oledb/caccessor-class.md)<br/>
[CDynamicParameterAccessor Class](../../data/oledb/cdynamicparameteraccessor-class.md)<br/>
[CManualAccessor Class](../../data/oledb/cmanualaccessor-class.md)<br/>
[CDynamicAccessor Class](../../data/oledb/cdynamicaccessor-class.md)<br/>
[CDynamicStringAccessorA Class](../../data/oledb/cdynamicstringaccessora-class.md)<br/>
[CDynamicStringAccessorW Class](../../data/oledb/cdynamicstringaccessorw-class.md)<br/>
[CXMLAccessor Class](../../data/oledb/cxmlaccessor-class.md)
