---
description: "Learn more about: Recordset: Adding Records in Bulk (ODBC)"
title: "Recordset: Adding Records in Bulk (ODBC)"
ms.date: "11/04/2016"
helpviewer_keywords: ["ODBC recordsets, adding records", "recordsets, adding records", "bulk record additions to recordsets"]
ms.assetid: 4685f656-14b9-4f10-a1c5-147b2b89a0b4
---
# Recordset: Adding Records in Bulk (ODBC)

This topic applies to the MFC ODBC classes.

The MFC [CRecordset](../../mfc/reference/crecordset-class.md) class has a new optimization that improves efficiency when you are adding new records in bulk to a table.

> [!NOTE]
> This topic applies to objects derived from `CRecordset` in which bulk row fetching has not been implemented. If you are using bulk row fetching, see [Recordset: Fetching Records in Bulk (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

A new option for the *dwOptions* parameter to the [CRecordset::Open](../../mfc/reference/crecordset-class.md#open) member function, `optimizeBulkAdd`, improves performance when you are adding multiple records consecutively without calling `Requery` or `Close`. Only those fields that are dirty before the first `Update` call are marked as dirty for subsequent `AddNew`/`Update` calls.

If you are using the database classes to take advantage of the `::SQLSetPos` ODBC API function for adding, editing, and deleting records, this optimization is unnecessary.

If the ODBC Cursor Library is loaded or the ODBC driver does not support adding, editing, and deleting through `::SQLSetPos`, this optimization should improve bulk add performance. To turn on this optimization, set the *dwOptions* parameter in the `Open` call for your recordset to the following:

```
appendOnly | optimizeBulkAdd
```

## See also

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[Recordset: Adding, Updating, and Deleting Records (ODBC)](../../data/odbc/recordset-adding-updating-and-deleting-records-odbc.md)<br/>
[Recordset: Locking Records (ODBC)](../../data/odbc/recordset-locking-records-odbc.md)
