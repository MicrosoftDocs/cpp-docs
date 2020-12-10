---
description: "Learn more about: ODBC: The ODBC Cursor Library"
title: "ODBC: The ODBC Cursor Library"
ms.date: "11/04/2016"
helpviewer_keywords: ["cursor library [ODBC]", "snapshots, support in ODBC", "timestamps, ODBC timestamp columns", "ODBC cursor library [ODBC]", "static cursors", "ODBC drivers, Level 1", "ODBC drivers, cursor support", "positioned updates", "cursors, ODBC cursor library", "Level 1 ODBC drivers", "cursor library [ODBC], snapshots", "ODBC, timestamp", "positioning cursors"]
ms.assetid: 6608db92-82b1-4164-bb08-78153c227be3
---
# ODBC: The ODBC Cursor Library

This topic describes the ODBC Cursor Library and explains how to use it. For more information, see:

- [Cursor Library and Level 1 ODBC Drivers](#_core_the_cursor_library_and_level_1_odbc_drivers)

- [Positioned Updates and Timestamp Columns](#_core_positioned_updates_and_timestamp_columns)

- [Using the Cursor Library](#_core_using_the_cursor_library)

The ODBC Cursor Library is a dynamic-link library (DLL) that resides between the ODBC Driver Manager and the driver. In ODBC terms, a driver maintains a cursor to keep track of its position in the recordset. The cursor marks the position in the recordset to which you have already scrolled — the current record.

## <a name="_core_the_cursor_library_and_level_1_odbc_drivers"></a> Cursor Library and Level 1 ODBC Drivers

The ODBC Cursor Library gives Level 1 drivers the following new capabilities:

- Forward and backward scrolling. Level 2 drivers do not need the cursor library because they are already scrollable.

- Support for snapshots. The cursor library manages a buffer containing the snapshot's records. This buffer reflects your program's deletions and edits to records but not the additions, deletions, or edits of other users. Therefore, the snapshot is only as current as the cursor library's buffer. The buffer also does not reflect your own additions until you call `Requery`. Dynasets do not use the cursor library.

The cursor library gives you snapshots (static cursors) even if they are not normally supported by your driver. If your driver already supports static cursors, you do not need to load the cursor library to get snapshot support. If you do use the cursor library, you can use only snapshots and forward-only recordsets. If your driver supports dynasets (KEYSET_DRIVEN cursors) and you want to use them, you must not use the cursor library. If you want to use both snapshots and dynasets, you must base them on two different `CDatabase` objects (two different connections) unless your driver supports both.

## <a name="_core_positioned_updates_and_timestamp_columns"></a> Positioned Updates and Timestamp Columns

> [!NOTE]
> ODBC data sources are accessible through the MFC ODBC classes, as described in this topic, or through the MFC Data Access Object (DAO) classes.

> [!NOTE]
> If your ODBC driver supports `SQLSetPos`, which MFC uses if available, this topic does not apply to you.

Most Level 1 drivers do not support positioned updates. Such drivers rely on the cursor library to emulate the capabilities of Level 2 drivers in this regard. The cursor library emulates positioned update support by doing a searched update on the unchanging fields.

In some cases, a recordset might contain a timestamp column as one of those unchanging fields. Two issues arise in using MFC recordsets with tables that contain timestamp columns.

The first issue concerns updateable snapshots on tables with timestamp columns. If the table to which your snapshot is bound contains a timestamp column, you should call `Requery` after you call `Edit` and `Update`. If not, you might not be able to edit the same record again. When you call `Edit` and then `Update`, the record is written to the data source and the timestamp column is updated. If you do not call `Requery`, the timestamp value for the record in your snapshot no longer matches the corresponding timestamp on the data source. When you try to update the record again, the data source might disallow the update because of the mismatch.

The second issue concerns limitations of class [CTime](../../atl-mfc-shared/reference/ctime-class.md) when used with the `RFX_Date` function to transfer time and date information to or from a table. Processing the `CTime` object imposes some overhead in the form of extra intermediate processing during the data transfer. The date range of `CTime` objects might also be too limiting for some applications. A new version of the `RFX_Date` function takes an ODBC *TIMESTAMP_STRUCT* parameter instead of a `CTime` object. For more information, see `RFX_Date` in [Macros and Globals](../../mfc/reference/mfc-macros-and-globals.md) in the *MFC Reference*.

## <a name="_core_using_the_cursor_library"></a> Using the Cursor Library

When you connect to a data source — by calling [CDatabase::OpenEx](../../mfc/reference/cdatabase-class.md#openex) or [CDatabase::Open](../../mfc/reference/cdatabase-class.md#open) — you can specify whether to use the cursor library for the data source. If you will be creating snapshots on that data source, specify the `CDatabase::useCursorLib` option in the `dwOptions` parameter to `OpenEx` or specify TRUE for the *bUseCursorLib* parameter to `Open` (the default value is TRUE). If your ODBC driver supports dynasets and you want to open dynasets on the data source, do not use the cursor library (it masks some driver functionality needed for dynasets). In that case, do not specify `CDatabase::useCursorLib` in `OpenEx` or specify FALSE for the *bUseCursorLib* parameter in `Open`.

## See also

[ODBC Basics](../../data/odbc/odbc-basics.md)
