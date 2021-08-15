---
description: "Learn more about: CXMLAccessor Class"
title: "CXMLAccessor Class"
ms.date: "11/04/2016"
f1_keywords: ["ATL::CXMLAccessor", "CXMLAccessor", "ATL.CXMLAccessor", "ATL.CXMLAccessor.GetXMLColumnData", "CXMLAccessor::GetXMLColumnData", "CXMLAccessor.GetXMLColumnData", "ATL::CXMLAccessor::GetXMLColumnData", "GetXMLColumnData", "ATL::CXMLAccessor::GetXMLRowData", "ATL.CXMLAccessor.GetXMLRowData", "CXMLAccessor::GetXMLRowData", "CXMLAccessor.GetXMLRowData", "GetXMLRowData"]
helpviewer_keywords: ["CXMLAccessor class", "GetXMLColumnData method", "GetXMLRowData method"]
ms.assetid: c88c082c-ec2f-4351-8947-a330b15e448a
---
# CXMLAccessor Class

Allows you to access data sources as string data when you have no knowledge of the data store's schema (underlying structure).

## Syntax

```cpp
class CXMLAccessor : public CDynamicStringAccessorW
```

## Requirements

**Header**: atldbcli.h

## Members

### Methods

| Name | Description |
|-|-|
|[GetXMLColumnData](#getxmlcolumndata)|Retrieves the column information.|
|[GetXMLRowData](#getxmlrowdata)|Retrieves the entire contents of a table by rows.|

## Remarks

However, `CXMLAccessor` differs from `CDynamicStringAccessorW` in that it converts all data accessed from the data store as XML-formatted (tagged) data. This is especially useful for output to XML-aware Web pages. The XML tag names will match the data store's column names as closely as possible.

Use `CDynamicAccessor` methods to obtain column information. You use this column information to create an accessor dynamically at run time.

The column information is stored in a buffer created and managed by this class. Obtain column information using [GetXMLColumnData](#getxmlcolumndata) or obtain column data by rows using [GetXMLRowData](#getxmlrowdata).

## Example

[!code-cpp[NVC_OLEDB_Consumer#14](../../data/oledb/codesnippet/cpp/cxmlaccessor-class_1.cpp)]

## <a name="getxmlcolumndata"></a> CXMLAccessor::GetXMLColumnData

Retrieves the column type information of a table as XML-formatted string data, by column.

### Syntax

```cpp
HRESULT GetXMLColumnData(CSimpleStringW& strOutput) throw();
```

#### Parameters

*strOutput*<br/>
[out] A reference to a string buffer containing the column type information to be retrieved. The string is formatted with XML tag names that match the data store's column names.

### Return Value

One of the standard HRESULT values.

### Remarks

The following shows how the column type information is formatted in XML. `type` specifies the column's data type. Note that the data types are based on OLE DB data types, not those of the database being accessed.

`<columninfo>`

`<column type = I2/> ColumnName`

`</columninfo>`

## <a name="getxmlrowdata"></a> CXMLAccessor::GetXMLRowData

Retrieves the entire contents of a table as XML-formatted string data, by row.

### Syntax

```cpp
HRESULT GetXMLRowData(CSimpleStringW& strOutput,
   bool bAppend = false) throw();
```

#### Parameters

*strOutput*<br/>
[out] A reference to a buffer containing the table data to be retrieved. The data is formatted as string data with XML tag names that match the data store's column names.

*bAppend*<br/>
[in] A Boolean value specifying whether to append a string to the end of the output data.

### Return Value

One of the standard HRESULT values.

### Remarks

The following shows how the row data is formatted in XML. `DATA` below represents the row data. Use move methods to move to the desired row.

`<row>`

`<column name>DATA</column name>`

`</row>`

## See also

[OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[OLE DB Consumer Templates Reference](../../data/oledb/ole-db-consumer-templates-reference.md)<br/>
[CAccessor Class](../../data/oledb/caccessor-class.md)<br/>
[CDynamicAccessor Class](../../data/oledb/cdynamicaccessor-class.md)<br/>
[CDynamicParameterAccessor Class](../../data/oledb/cdynamicparameteraccessor-class.md)<br/>
[CDynamicStringAccessor Class](../../data/oledb/cdynamicstringaccessor-class.md)<br/>
[CDynamicStringAccessorA Class](../../data/oledb/cdynamicstringaccessora-class.md)<br/>
[CDynamicStringAccessorW Class](../../data/oledb/cdynamicstringaccessorw-class.md)<br/>
[CManualAccessor Class](../../data/oledb/cmanualaccessor-class.md)
