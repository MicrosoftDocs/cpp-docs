---
description: "Learn more about: CAccessorRowset Class"
title: "CAccessorRowset Class"
ms.date: "11/04/2016"
f1_keywords: ["CAccessorRowset", "ATL.CAccessorRowset", "ATL::CAccessorRowset", "CAccessorRowset.Bind", "CAccessorRowset::Bind", "CAccessorRowset::CAccessorRowset", "CAccessorRowset.CAccessorRowset", "ATL.CAccessorRowset.CAccessorRowset", "ATL::CAccessorRowset::CAccessorRowset", "CAccessorRowset.Close", "CAccessorRowset::Close", "CAccessorRowset::FreeRecordMemory", "CAccessorRowset.FreeRecordMemory", "CAccessorRowset.GetColumnInfo", "CAccessorRowset::GetColumnInfo"]
helpviewer_keywords: ["CAccessorRowset class", "CAccessorRowset class, methods", "CAccessorRowset class, members", "Bind method", "CAccessorRowset class, constructor", "Close method", "FreeRecordMemory method", "GetColumnInfo method"]
ms.assetid: bd4f58ed-cebf-4d43-8985-1e5fcbf06953
---
# CAccessorRowset Class

Encapsulates a rowset and its associated accessors in a single class.

## Syntax

```cpp
template <class TAccessor = CNoAccessor,
   template <typename T> class TRowset = CRowset>
class CAccessorRowset : public TAccessor, public TRowset<TAccessor>
```

### Parameters

*TAccessor*<br/>
An accessor class.

*TRowset*<br/>
A rowset class.

## Requirements

**Header:** atldbcli.h

## Members

### Methods

| Name | Description |
|--|--|
| [Bind](#bind) | Creates bindings (used when `bBind` is specified as **`false`** in [CCommand::Open](./ccommand-class.md#open)). |
| [CAccessorRowset](#caccessorrowset) | Constructor. |
| [Close](#close) | Closes the rowset and any accessors. |
| [FreeRecordMemory](#freerecordmemory) | Frees any columns in the current record that need to be freed. |
| [GetColumnInfo](#getcolumninfo) | Implements [IColumnsInfo::GetColumnInfo](/previous-versions/windows/desktop/ms722704\(v=vs.85\)). |

## Remarks

Class `TAccessor` manages the accessor. Class *TRowset* manages the rowset.

## <a name="bind"></a> CAccessorRowset::Bind

Creates the bindings if you specified `bBind` as **`false`** in [CCommand::Open](./ccommand-class.md#open).

### Syntax

```cpp
HRESULT Bind();
```

### Return Value

A standard HRESULT.

## <a name="caccessorrowset"></a> CAccessorRowset::CAccessorRowset

Initializes the `CAccessorRowset` object.

### Syntax

```cpp
CAccessorRowset();
```

## <a name="close"></a> CAccessorRowset::Close

Releases any active accessors and the rowset.

### Syntax

```cpp
void Close();
```

### Remarks

Releases any associated memory.

## <a name="freerecordmemory"></a> CAccessorRowset::FreeRecordMemory

Frees any columns in the current record that need to be freed.

### Syntax

```cpp
void FreeRecordMemory();
```

## <a name="getcolumninfo"></a> CAccessorRowset::GetColumnInfo

Gets column information from the opened rowset.

### Syntax

```cpp
HRESULT GetColumnInfo(DBORDINAL* pulColumns,
   DBCOLUMNINFO** ppColumnInfo,
   LPOLESTR* ppStrings) const;

HRESULT GetColumnInfo(DBORDINAL* pColumns,
   DBCOLUMNINFO** ppColumnInfo);
```

#### Parameters

See [IColumnsInfo::GetColumnInfo](/previous-versions/windows/desktop/ms722704\(v=vs.85\)) in the *OLE DB Programmer's Reference*.

### Return Value

A standard HRESULT.

### Remarks

The user must free the returned column information and string buffer. Use the second version of this method when you use [CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md) and need to override the bindings.

For more information, see [IColumnsInfo::GetColumnInfo](/previous-versions/windows/desktop/ms722704\(v=vs.85\)) in the *OLE DB Programmer's Reference*.

## See also

[OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[OLE DB Consumer Templates Reference](../../data/oledb/ole-db-consumer-templates-reference.md)
