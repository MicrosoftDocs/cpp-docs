---
description: "Learn more about: CBulkRowset Class"
title: "CBulkRowset Class"
ms.date: "11/04/2016"
f1_keywords: ["ATL::CBulkRowset", "ATL.CBulkRowset", "ATL::CBulkRowset<TAccessor>", "CBulkRowset", "ATL.CBulkRowset<TAccessor>", "CBulkRowset::AddRefRows", "CBulkRowset.AddRefRows", "ATL.CBulkRowset<TAccessor>.AddRefRows", "ATL::CBulkRowset::AddRefRows", "CBulkRowset<TAccessor>::AddRefRows", "ATL.CBulkRowset.AddRefRows", "ATL::CBulkRowset<TAccessor>::AddRefRows", "ATL.CBulkRowset<TAccessor>.CBulkRowset", "ATL::CBulkRowset::CBulkRowset", "CBulkRowset.CBulkRowset", "CBulkRowset::CBulkRowset", "ATL.CBulkRowset.CBulkRowset", "ATL::CBulkRowset<TAccessor>::CBulkRowset", "CBulkRowset<TAccessor>::CBulkRowset", "ATL.CBulkRowset.MoveFirst", "CBulkRowset<TAccessor>.MoveFirst", "ATL.CBulkRowset<TAccessor>.MoveFirst", "ATL::CBulkRowset::MoveFirst", "ATL::CBulkRowset<TAccessor>::MoveFirst", "CBulkRowset::MoveFirst", "CBulkRowset<TAccessor>::MoveFirst", "CBulkRowset.MoveFirst", "CBulkRowset.MoveLast", "ATL.CBulkRowset.MoveLast", "ATL::CBulkRowset<TAccessor>::MoveLast", "CBulkRowset::MoveLast", "CBulkRowset<TAccessor>.MoveLast", "ATL::CBulkRowset::MoveLast", "ATL.CBulkRowset<TAccessor>.MoveLast", "CBulkRowset<TAccessor>::MoveLast", "ATL.CBulkRowset<TAccessor>.MoveNext", "ATL::CBulkRowset::MoveNext", "CBulkRowset::MoveNext", "ATL.CBulkRowset.MoveNext", "CBulkRowset.MoveNext", "ATL::CBulkRowset<TAccessor>::MoveNext", "CBulkRowset<TAccessor>.MoveNext", "CBulkRowset<TAccessor>::MoveNext", "CBulkRowset::MovePrev", "CBulkRowset<TAccessor>::MovePrev", "ATL::CBulkRowset<TAccessor>::MovePrev", "CBulkRowset<TAccessor>.MovePrev", "ATL::CBulkRowset::MovePrev", "CBulkRowset.MovePrev", "ATL.CBulkRowset.MovePrev", "ATL.CBulkRowset<TAccessor>.MovePrev", "CBulkRowset<TAccessor>::MoveToBookmark", "CBulkRowset.MoveToBookmark", "ATL.CBulkRowset.MoveToBookmark", "CBulkRowset::MoveToBookmark", "ATL::CBulkRowset<TAccessor>::MoveToBookmark", "ATL::CBulkRowset::MoveToBookmark", "CBulkRowset.MoveToRatio", "ATL::CBulkRowset::MoveToRatio", "CBulkRowset::MoveToRatio", "ATL.CBulkRowset<TAccessor>.MoveToRatio", "ATL::CBulkRowset<TAccessor>::MoveToRatio", "ATL.CBulkRowset.MoveToRatio", "CBulkRowset<TAccessor>::MoveToRatio", "ATL.CBulkRowset<TAccessor>.ReleaseRows", "ATL::CBulkRowset<TAccessor>::ReleaseRows", "ATL.CBulkRowset.ReleaseRows", "CBulkRowset<TAccessor>::ReleaseRows", "ATL::CBulkRowset::ReleaseRows", "CBulkRowset::ReleaseRows", "CBulkRowset.ReleaseRows", "ATL.CBulkRowset.SetRows", "CBulkRowset::SetRows", "CBulkRowset<TAccessor>.SetRows", "ATL.CBulkRowset<TAccessor>.SetRows", "CBulkRowset<TAccessor>::SetRows", "ATL::CBulkRowset<TAccessor>::SetRows", "ATL::CBulkRowset::SetRows", "CBulkRowset.SetRows", "SetRows"]
helpviewer_keywords: ["CBulkRowset class", "AddRefRows method", "CBulkRowset class, constructor", "MoveFirst method", "MoveLast method", "MoveNext method", "MovePrev method", "MoveToBookmark method", "MoveToRatio method", "ReleaseRows method", "SetRows method"]
ms.assetid: c6bde426-c543-4022-a98a-9519d9e2ae59
---
# CBulkRowset Class

Fetches and manipulates rows to work on data in bulk by retrieving multiple row handles with a single call.

## Syntax

```cpp
template <class TAccessor>
class CBulkRowset : public CRowset<TAccessor>
```

### Parameters

*TAccessor*<br/>
An accessor class.

## Requirements

**Header:** atldbcli.h

## Members

### Methods

| Name | Description |
|-|-|
|[AddRefRows](#addrefrows)|Increments the reference count.|
|[CBulkRowset](#cbulkrowset)|Constructor.|
|[MoveFirst](#movefirst)|Retrieves the first row of data, performing a new bulk fetch if necessary.|
|[MoveLast](#movelast)|Moves to the last row.|
|[MoveNext](#movenext)|Retrieves the next row of data.|
|[MovePrev](#moveprev)|Moves to the previous row.|
|[MoveToBookmark](#movetobookmark)|Fetches the row marked by a bookmark or the row at a specified offset from that bookmark.|
|[MoveToRatio](#movetoratio)|Fetches rows starting from a fractional position in the rowset.|
|[ReleaseRows](#releaserows)|Sets the current row (`m_nCurrentRow`) to zero and releases all rows.|
|[SetRows](#setrows)|Sets the number of row handles to be retrieved by one call.|

## Example

The following example demonstrates use of the `CBulkRowset` class.

[!code-cpp[NVC_OLEDB_Consumer#1](../../data/oledb/codesnippet/cpp/cbulkrowset-class_1.cpp)]

## <a name="addrefrows"></a> CBulkRowset::AddRefRows

Calls [IRowset::AddRefRows](/previous-versions/windows/desktop/ms719619(v=vs.85)) to increment the reference count for all rows currently retrieved from the bulk rowset.

### Syntax

```cpp
HRESULT AddRefRows() throw();
```

### Return Value

A standard HRESULT.

## <a name="cbulkrowset"></a> CBulkRowset::CBulkRowset

Creates a new `CBulkRowset` object and sets the default row count to 10.

### Syntax

```cpp
CBulkRowset();
```

## <a name="movefirst"></a> CBulkRowset::MoveFirst

Retrieves the first row of data.

### Syntax

```cpp
HRESULT MoveFirst() throw();
```

### Return Value

A standard HRESULT.

## <a name="movelast"></a> CBulkRowset::MoveLast

Moves to the last row.

### Syntax

```cpp
HRESULT MoveLast() throw();
```

### Return Value

A standard HRESULT.

## <a name="movenext"></a> CBulkRowset::MoveNext

Retrieves the next row of data.

### Syntax

```cpp
HRESULT MoveNext() throw();
```

### Return Value

A standard HRESULT. When the end of the rowset has been reached, returns DB_S_ENDOFROWSET.

## <a name="moveprev"></a> CBulkRowset::MovePrev

Moves to the previous row.

### Syntax

```cpp
HRESULT MovePrev() throw();
```

### Return Value

A standard HRESULT.

## <a name="movetobookmark"></a> CBulkRowset::MoveToBookmark

Fetches the row marked by a bookmark or the row at a specified offset (*lSkip*) from that bookmark.

### Syntax

```cpp
HRESULT MoveToBookmark(const CBookmarkBase& bookmark,
   DBCOUNTITEM lSkip = 0) throw();
```

#### Parameters

*bookmark*<br/>
[in] A bookmark marking the location from which you want to fetch data.

*lSkip*<br/>
[in] The number count of rows from the bookmark to the target row. If *lSkip* is zero, the first row fetched is the bookmarked row. If *lSkip* is 1, the first row fetched is the row after the bookmarked row. If *lSkip* is -1, the first row fetched is the row before the bookmarked row.

### Return Value

See [IRowset::GetData](/previous-versions/windows/desktop/ms716988(v=vs.85)) in the *OLE DB Programmer's Reference*.

## <a name="movetoratio"></a> CBulkRowset::MoveToRatio

Fetches rows starting from a fractional position in the rowset.

### Syntax

```cpp
HRESULT MoveToRatio(DBCOUNTITEM nNumerator,
   DBCOUNTITEM nDenominator)throw();
```

#### Parameters

*nNumerator*<br/>
[in] The numerator used to determine the fractional position from which to fetch data.

*nDenominator*<br/>
[in] The denominator used to determine the fractional position from which to fetch data.

### Return Value

A standard HRESULT.

### Remarks

`MoveToRatio` fetches the rows roughly according to the following formula:

`(nNumerator *  RowsetSize ) / nDenominator`

Where `RowsetSize` is the size of the rowset, measured in rows. The accuracy of this formula depends on the specific provider. For details, see [IRowsetScroll::GetRowsAtRatio](/previous-versions/windows/desktop/ms709602(v=vs.85)) in the *OLE DB Programmer's Reference*.

## <a name="releaserows"></a> CBulkRowset::ReleaseRows

Calls [IRowset::ReleaseRows](/previous-versions/windows/desktop/ms719771(v=vs.85)) to decrement the reference count for all rows currently retrieved from the bulk rowset.

### Syntax

```cpp
HRESULT ReleaseRows() throw();
```

### Return Value

A standard HRESULT.

## <a name="setrows"></a> CBulkRowset::SetRows

Sets the number of row handles retrieved by each call.

### Syntax

```cpp
void SetRows(DBROWCOUNT nRows) throw();
```

#### Parameters

*nRows*<br/>
[in] The new size of the rowset (number of rows).

### Remarks

If you call this function, it must be before the rowset is opened.

## See also

[OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[OLE DB Consumer Templates Reference](../../data/oledb/ole-db-consumer-templates-reference.md)
