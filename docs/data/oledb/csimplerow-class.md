---
description: "Learn more about: CSimpleRow Class"
title: "CSimpleRow Class"
ms.date: "11/04/2016"
f1_keywords: ["CSimpleRow", "ATL::CSimpleRow", "ATL.CSimpleRow", "CSimpleRow::AddRefRow", "AddRefRow", "ATL.CSimpleRow.AddRefRow", "ATL::CSimpleRow::AddRefRow", "CSimpleRow.AddRefRow", "CSimpleRow.Compare", "CSimpleRow::Compare", "ATL::CSimpleRow::CSimpleRow", "CSimpleRow.CSimpleRow", "ATL.CSimpleRow.CSimpleRow", "CSimpleRow::CSimpleRow", "ATL::CSimpleRow::ReleaseRow", "CSimpleRow::ReleaseRow", "ReleaseRow", "CSimpleRow.ReleaseRow", "ATL.CSimpleRow.ReleaseRow", "CSimpleRow.m_dwRef", "CSimpleRow::m_dwRef", "CSimpleRow::m_iRowset", "CSimpleRow.m_iRowset"]
helpviewer_keywords: ["CSimpleRow class", "AddRefRow method", "Compare method", "CSimpleRow class, constructor", "ReleaseRow method", "m_dwRef", "m_iRowset"]
ms.assetid: 06d9621d-60cc-4508-8b0c-528d1b1a809b
---
# CSimpleRow Class

Provides a default implementation for the row handle, which is used in the [IRowsetImpl](../../data/oledb/irowsetimpl-class.md) class.

## Syntax

```cpp
class CSimpleRow
```

## Requirements

**Header:** atldb.h

## Members

### Methods

| Name | Description |
|-|-|
|[AddRefRow](#addrefrow)|Adds a reference count to an existing row handle.|
|[Compare](#compare)|Compares two rows to see if they refer to the same row instance.|
|[CSimpleRow](#csimplerow)|The constructor.|
|[ReleaseRow](#releaserow)|Releases rows.|

### Data Members

| Name | Description |
|-|-|
|[m_dwRef](#dwref)|Reference count to an existing row handle.|
|[m_iRowset](#irowset)|An index to the rowset representing the cursor.|

## Remarks

A row handle is logically a unique tag for a result row. `IRowsetImpl` creates a new `CSimpleRow` for every row requested in [IRowsetImpl::GetNextRows](./irowsetimpl-class.md#getnextrows). `CSimpleRow` can also be replaced with your own implementation of the row handle, as it is a default template argument to `IRowsetImpl`. The only requirement to replacing this class is to have the replacement class provide a constructor that accepts a single parameter of type **LONG**.

## <a name="addrefrow"></a> CSimpleRow::AddRefRow

Adds a reference count to an existing row handle in a thread-safe manner.

### Syntax

```cpp
DWORD AddRefRow();
```

## <a name="compare"></a> CSimpleRow::Compare

Compares two rows to see if they refer to the same row instance.

### Syntax

```cpp
HRESULT Compare(CSimpleRow* pRow);
```

#### Parameters

*pRow*<br/>
A pointer to a `CSimpleRow` object.

### Return Value

An HRESULT value, usually S_OK, indicating the two rows are the same row instance, or S_FALSE, indicating the two rows are different. See [IRowsetIdentity::IsSameRow](/previous-versions/windows/desktop/ms719629(v=vs.85)) in the *OLE DB Programmer's Reference* for other possible return values.

## <a name="csimplerow"></a> CSimpleRow::CSimpleRow

The constructor.

### Syntax

```cpp
CSimpleRow(DBCOUNTITEM iRowsetCur);
```

#### Parameters

*iRowsetCur*<br/>
[in] Index to the current rowset.

### Remarks

Sets [m_iRowset](#irowset) to *iRowsetCur*.

## <a name="releaserow"></a> CSimpleRow::ReleaseRow

Releases rows in a thread-safe manner.

### Syntax

```cpp
DWORD ReleaseRow();
```

## <a name="dwref"></a> CSimpleRow::m_dwRef

Reference count to an existing row handle.

### Syntax

```cpp
DWORD m_dwRef;
```

## <a name="irowset"></a> CSimpleRow::m_iRowset

Index to the rowset representing the cursor.

### Syntax

```cpp
KeyType m_iRowset;
```

## See also

[OLE DB Provider Templates](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)<br/>
[IRowsetImpl Class](../../data/oledb/irowsetimpl-class.md)
