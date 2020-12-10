---
description: "Learn more about: Snapshot"
title: "Snapshot"
ms.date: "11/04/2016"
helpviewer_keywords: ["ODBC cursor library [ODBC], snapshots", "cursors [ODBC], static", "recordsets, snapshots", "snapshots, support in ODBC", "static cursors", "ODBC recordsets, snapshots", "cursor library [ODBC], snapshots", "snapshots"]
ms.assetid: b5293a52-0657-43e9-bd71-fe3785b21c7e
---
# Snapshot

A snapshot is a recordset that reflects a static view of the data as it existed at the time the snapshot was created. When you open the snapshot and move to all the records, the set of records it contains and their values do not change until you rebuild the snapshot by calling `Requery`.

> [!NOTE]
> This topic applies to the MFC ODBC classes. If you are using the MFC DAO classes instead of the MFC ODBC classes, see [CDaoRecordset::Open](../../mfc/reference/cdaorecordset-class.md#open) for a description of snapshot-type recordsets.

You can create updateable or read-only snapshots with the database classes. Unlike a dynaset, an updateable snapshot does not reflect changes to record values made by other users, but it does reflect updates and deletions made by your program. Records added to a snapshot do not become visible to the snapshot until you call `Requery`.

> [!TIP]
> A snapshot is an ODBC static cursor. Static cursors do not actually get a row of data until you scroll to that record. To ensure that all records are immediately retrieved, you can scroll to the end of your recordset and then scroll to the first record you want to see. Note, however, that scrolling to the end entails extra overhead and can lower performance.

Snapshots are most valuable when you need the data to remain fixed during your operations, as when you are generating a report or performing calculations. Even so, the data source can diverge considerably from your snapshot, so you might want to rebuild it from time to time.

Snapshot support is based on the ODBC Cursor Library, which provides static cursors and positioned updates (needed for updateability) for any Level 1 driver. The cursor library DLL must be loaded in memory for this support. When you construct a `CDatabase` object and call its `OpenEx` member function, you must specify the `CDatabase::useCursorLib` option of the *dwOptions* parameter. If you call the `Open` member function, the cursor library is loaded by default. If you are using dynasets instead of snapshots, you do not want to cause the cursor library to be loaded.

Snapshots are available only if the ODBC Cursor Library was loaded when the `CDatabase` object was constructed or the ODBC driver you are using supports static cursors.

> [!NOTE]
> For some ODBC drivers, snapshots (static cursors) might not be updateable. Check your driver documentation for cursor types supported and the concurrency types they support. To guarantee updateable snapshots, make sure you load the cursor library into memory when you create a `CDatabase` object. For more information, see [ODBC: The ODBC Cursor Library](../../data/odbc/odbc-the-odbc-cursor-library.md).

> [!NOTE]
> If you want to use both snapshots and dynasets, you must base them on two different `CDatabase` objects (two different connections).

For more information about the properties snapshots share with all recordsets, see [Recordset (ODBC)](../../data/odbc/recordset-odbc.md). For more information about ODBC and snapshots, including the ODBC Cursor Library, see [ODBC](../../data/odbc/odbc-basics.md).

## See also

[Open Database Connectivity (ODBC)](../../data/odbc/open-database-connectivity-odbc.md)
