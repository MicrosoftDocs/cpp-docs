---
description: "Learn more about: IRowsetLocateImpl Class"
title: "IRowsetLocateImpl Class"
ms.date: "11/04/2016"
f1_keywords: ["IRowsetLocateImpl", "ATL.IRowsetLocateImpl.Compare", "IRowsetLocateImpl::Compare", "IRowsetLocateImpl.Compare", "ATL::IRowsetLocateImpl::Compare", "GetRowsAt", "IRowsetLocateImpl.GetRowsAt", "ATL::IRowsetLocateImpl::GetRowsAt", "IRowsetLocateImpl::GetRowsAt", "ATL.IRowsetLocateImpl.GetRowsAt", "IRowsetLocateImpl::GetRowsByBookmark", "IRowsetLocateImpl.GetRowsByBookmark", "GetRowsByBookmark", "IRowsetLocateImpl::Hash", "IRowsetLocateImpl.Hash", "m_rgBookmarks", "IRowsetLocateImpl::m_rgBookmarks", "ATL.IRowsetLocateImpl.m_rgBookmarks", "ATL::IRowsetLocateImpl::m_rgBookmarks", "IRowsetLocateImpl.m_rgBookmarks"]
helpviewer_keywords: ["providers, bookmarks", "IRowsetLocateImpl class", "bookmarks, OLE DB", "Compare method", "GetRowsAt method", "GetRowsByBookmark method", "Hash method", "m_rgbookmarks"]
ms.assetid: a8aa3149-7ce8-4976-a680-2da193fd3234
---
# IRowsetLocateImpl Class

Implements the OLE DB [IRowsetLocate](/previous-versions/windows/desktop/ms721190(v=vs.85)) interface, which fetches arbitrary rows from a rowset.

## Syntax

```cpp
template <
   class T,
   class RowsetInterface,
   class RowClass = CSimpleRow,
   class MapClass = CAtlMap < RowClass::KeyType, RowClass* >,
   class BookmarkKeyType = LONG,
   class BookmarkType = LONG,
   class BookmarkMapClass = CAtlMap < RowClass::KeyType, RowClass* >>
class ATL_NO_VTABLE IRowsetLocateImpl : public IRowsetImpl<
       T,
       RowsetInterface,
       RowClass,
       MapClass>
```

### Parameters

*T*<br/>
A class derived from `IRowsetLocateImpl`.

*RowsetInterface*<br/>
A class derived from `IRowsetImpl`.

*RowClass*<br/>
The storage unit for the `HROW`.

*MapClass*<br/>
The storage unit for all row handles held by the provider.

*BookmarkKeyType*<br/>
The type of the bookmark, such as a LONG or a string. Ordinary bookmarks must have a length of at least two bytes. (Single-byte length is reserved for the OLE DB [standard bookmarks](/previous-versions/windows/desktop/ms712954(v=vs.85))`DBBMK_FIRST`, `DBBMK_LAST`, and `DBBMK_INVALID`.)

*BookmarkType*<br/>
The mapping mechanism for maintaining bookmark-to-data relationships.

*BookmarkMapClass*<br/>
The storage unit for all row handles held by the bookmark.

## Requirements

**Header**: atldb.h

## Members

### Interface Methods

| Name | Description |
|-|-|
|[Compare](#compare)|Compares two bookmarks.|
|[GetRowsAt](#getrowsat)|Fetches rows starting with the row specified by an offset from a bookmark.|
|[GetRowsByBookmark](#getrowsbybookmark)|Fetches the rows that match the specified bookmarks.|
|[Hash](#hash)|Returns hash values for the specified bookmarks.|

### Data Members

| Name | Description |
|-|-|
|[m_rgBookmarks](#rgbookmarks)|An array of bookmarks.|

## Remarks

`IRowsetLocateImpl` is the OLE DB Templates implementation of the [IRowsetLocate](/previous-versions/windows/desktop/ms721190(v=vs.85)) interface. `IRowsetLocate` is used to fetch arbitrary rows from a rowset. A rowset that does not implement this interface is a `sequential` rowset. When `IRowsetLocate` is present on a rowset, column 0 is the bookmark for the rows; reading this column will obtain a bookmark value that can be used to reposition to the same row.

`IRowsetLocateImpl` is used to implement bookmark support in providers. Bookmarks are placeholders (indices on a rowset) that enable the consumer to return quickly to a row, allowing high-speed access to data. The provider determines what bookmarks can uniquely identify a row. Using `IRowsetLocateImpl` methods, you can compare bookmarks, fetch rows by offset, fetch rows by bookmark, and return hash values for bookmarks.

To support OLE DB bookmarks in a rowset, make the rowset inherit from this class.

For information on implementing bookmark support, see [Provider Support for Bookmarks](../../data/oledb/provider-support-for-bookmarks.md) in the *Visual C++ Programmer's Guide* and [Bookmarks](/previous-versions/windows/desktop/ms709728(v=vs.85)) in the *OLE DB Programmer's Reference* in the Platform SDK.

## <a name="compare"></a> IRowsetLocateImpl::Compare

Compares two bookmarks.

### Syntax

```cpp
STDMETHOD (Compare )(HCHAPTER /* hReserved */,
   DBBKMARK cbBookmark1,
   const BYTE* pBookmark1,
   DBBKMARK cbBookmark2,
   const BYTE* pBookmark2,
   DBCOMPARE* pComparison);
```

#### Parameters

See [IRowsetLocate::Compare](/previous-versions/windows/desktop/ms709539(v=vs.85)) in the *OLE DB Programmer's Reference*.

### Remarks

Either of the bookmarks can be a standard OLE DB-defined [standard bookmark](/previous-versions/windows/desktop/ms712954(v=vs.85)) (`DBBMK_FIRST`, `DBBMK_LAST`, or `DBBMK_INVALID`). The value returned in `pComparison` indicates the relationship between the two bookmarks:

- DBCOMPARE_LT (`cbBookmark1` is before `cbBookmark2`.)

- DBCOMPARE_EQ (`cbBookmark1` is equal to `cbBookmark2`.)

- DBCOMPARE_GT (`cbBookmark1` is after `cbBookmark2`.)

- DBCOMPARE_NE (The bookmarks are equal and not ordered.)

- DBCOMPARE_NOTCOMPARABLE (The bookmarks cannot be compared.)

## <a name="getrowsat"></a> IRowsetLocateImpl::GetRowsAt

Fetches rows starting with the row specified by an offset from a bookmark.

### Syntax

```cpp
STDMETHOD (GetRowsAt )(HWATCHREGION /* hReserved1 */,
   HCHAPTER hReserved2,
   DBBKMARK cbBookmark,
   const BYTE* pBookmark,
   DBROWOFFSET lRowsOffset,
   DBROWCOUNT cRows,
   DBCOUNTITEM* pcRowsObtained,
   HROW** prghRows);
```

#### Parameters

See [IRowsetLocate::GetRowsAt](/previous-versions/windows/desktop/ms723031(v=vs.85)) in the *OLE DB Programmer's Reference*.

### Remarks

To fetch from the cursor position instead, use [IRowset::GetRowsAt](/previous-versions/windows/desktop/ms723031(v=vs.85)).

`IRowsetLocateImpl::GetRowsAt` does not change the cursor position.

## <a name="getrowsbybookmark"></a> IRowsetLocateImpl::GetRowsByBookmark

Fetches one or more rows that match the specified bookmarks.

### Syntax

```cpp
STDMETHOD (GetRowsByBookmark )(HCHAPTER /* hReserved */,
   DBCOUNTITEM cRows,
   const DBBKMARK rgcbBookmarks[],
   const BYTE* rgpBookmarks,
   HROW rghRows[],
   DBROWSTATUS* rgRowStatus[]);
```

#### Parameters

*hReserved*<br/>
[in] Corresponds to *hChapter* parameter to [IRowsetLocate::GetRowsByBookmark](/previous-versions/windows/desktop/ms725420(v=vs.85)).

For other parameters, see [IRowsetLocate::GetRowsByBookmark](/previous-versions/windows/desktop/ms725420(v=vs.85)) in the *OLE DB Programmer's Reference*.

### Remarks

The bookmark can be a value you define or an OLE DB [standard bookmarks](/previous-versions/windows/desktop/ms712954(v=vs.85)) (`DBBMK_FIRST` or `DBBMK_LAST`). Does not change the cursor position.

## <a name="hash"></a> IRowsetLocateImpl::Hash

Returns hash values for the specified bookmarks.

### Syntax

```cpp
STDMETHOD (Hash )(HCHAPTER /* hReserved */,
   DBBKMARK cbBookmarks,
   const DBBKMARK* rgcbBookmarks[],
   const BYTE* rgpBookmarks[],
   DBHASHVALUE rgHashValues[],
   DBROWSTATUS rgBookmarkStatus[]);
```

#### Parameters

*hReserved*<br/>
[in] Corresponds to *hChapter* parameter to [IRowsetLocate::Hash](/previous-versions/windows/desktop/ms709697(v=vs.85)).

For other parameters, see [IRowsetLocate::Hash](/previous-versions/windows/desktop/ms709697(v=vs.85)) in the *OLE DB Programmer's Reference*.

## <a name="rgbookmarks"></a> IRowsetLocateImpl::m_rgBookmarks

An array of bookmarks.

### Syntax

```cpp
CAtlArray<DBROWCOUNT> m_rgBookmarks;
```

## See also

[OLE DB Provider Templates](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)<br/>
[IRowsetLocate:IRowset](/previous-versions/windows/desktop/ms721190(v=vs.85))
[Provider Support for Bookmarks](../../data/oledb/provider-support-for-bookmarks.md)<br/>
[Bookmarks](/previous-versions/windows/desktop/ms709728(v=vs.85))
