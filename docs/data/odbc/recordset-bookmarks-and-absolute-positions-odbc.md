---
description: "Learn more about: Recordset: Bookmarks and Absolute Positions (ODBC)"
title: "Recordset: Bookmarks and Absolute Positions (ODBC)"
ms.date: "11/04/2016"
f1_keywords: ["SetAbsolutePosition"]
helpviewer_keywords: ["CDBVariant class, bookmarks", "absolute positions, ODBC recordsets", "bookmarks, CDBVariant", "bookmarks, ODBC recordsets", "ODBC recordsets, absolute positions", "ODBC recordsets, bookmarks", "cursors [ODBC], absolute position in recordsets", "recordsets, bookmarks", "bookmarks", "SetAbsolutePosition method", "recordsets, absolute positions", "positioning records", "SetBookmark method", "record positioning", "GetBookmark method", "SetAbsolutePosition method, bookmarks"]
ms.assetid: 189788d6-33c1-41c5-9265-97db2a5d43cc
---
# Recordset: Bookmarks and Absolute Positions (ODBC)

This topic applies to the MFC ODBC classes.

When navigating through a recordset, you often need a way of returning to a particular record. A record's bookmark and absolute position provide two such methods.

This topic explains:

- [How to use bookmarks](#_core_bookmarks_in_mfc_odbc).

- [How to set the current record using absolute positions](#_core_absolute_positions_in_mfc_odbc).

## <a name="_core_bookmarks_in_mfc_odbc"></a> Bookmarks in MFC ODBC

A bookmark uniquely identifies a record. When you navigate through a recordset, you cannot always rely on the absolute position of a record because records can be deleted from the recordset. The reliable way to keep track of the position of a record is to use its bookmark. Class `CRecordset` supplies member functions for:

- Getting the bookmark of the current record, so you can save it in a variable ([GetBookmark](../../mfc/reference/crecordset-class.md#getbookmark)).

- Moving quickly to a given record by specifying its bookmark, which you saved earlier in a variable ([SetBookmark](../../mfc/reference/crecordset-class.md#setbookmark)).

The following example illustrates how to use these member functions to mark the current record and later return to it:

```cpp
// rs is a CRecordset or
// CRecordset-derived object

CDBVariant varRecordToReturnTo;
rs.GetBookmark( varRecordToReturnTo );

// More code in which you
// move to other records

rs.SetBookmark( varRecordToReturnTo );
```

You do not need to extract the underlying data type from the [CDBVariant Class](../../mfc/reference/cdbvariant-class.md) object. Assign the value with `GetBookmark` and return to that bookmark with `SetBookmark`.

> [!NOTE]
> Depending on your ODBC driver and recordset type, bookmarks might not be supported. You can easily determine whether bookmarks are supported by calling [CRecordset::CanBookmark](../../mfc/reference/crecordset-class.md#canbookmark). Furthermore, if bookmarks are supported, you must explicitly choose to implement them by specifying the `CRecordset::useBookmarks` option in the [CRecordset::Open](../../mfc/reference/crecordset-class.md#open) member function. You should also check the persistence of bookmarks after certain recordset operations. For example, if you `Requery` a recordset, bookmarks might no longer be valid. Call [CDatabase::GetBookmarkPersistence](../../mfc/reference/cdatabase-class.md#getbookmarkpersistence) to check whether you can safely call `SetBookmark`.

## <a name="_core_absolute_positions_in_mfc_odbc"></a> Absolute Positions in MFC ODBC

Besides bookmarks, class `CRecordset` allows you to set the current record by specifying an ordinal position. This is called absolute positioning.

> [!NOTE]
> Absolute positioning is not available on forward-only recordsets. For more information about forward-only recordsets, see [Recordset (ODBC)](../../data/odbc/recordset-odbc.md).

To move the current record pointer using absolute position, call [CRecordset::SetAbsolutePosition](../../mfc/reference/crecordset-class.md#setabsoluteposition). When you pass a value to `SetAbsolutePosition`, the record corresponding to that ordinal position becomes the current record.

> [!NOTE]
> The absolute position of a record is potentially unreliable. If the user deletes records from the recordset, the ordinal position of any subsequent record changes. Bookmarks are the recommended method for moving the current record. For more information, see [Bookmarks in MFC ODBC](#_core_bookmarks_in_mfc_odbc).

For more information about recordset navigation, see [Recordset: Scrolling (ODBC)](../../data/odbc/recordset-scrolling-odbc.md).

## See also

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)
