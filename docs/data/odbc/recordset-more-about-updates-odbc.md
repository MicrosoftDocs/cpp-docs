---
description: "Learn more about: Recordset: More About Updates (ODBC)"
title: "Recordset: More About Updates (ODBC)"
ms.date: "11/04/2016"
helpviewer_keywords: ["records, updating", "transactions, updating recordsets", "ODBC recordsets, updating", "multiuser environments, updates to recordsets", "scrolling, updates to recordsets", "updating recordsets", "recordsets, updating"]
ms.assetid: 0353a742-d226-4fe2-8881-a7daeffe86cd
---
# Recordset: More About Updates (ODBC)

This topic applies to the MFC ODBC classes.

This topic explains:

- [How other operations, such as transactions, affect updates](#_core_how_transactions_affect_updates).

- [Your updates and those of other users](#_core_your_updates_and_the_updates_of_other_users).

- [More about the Update and Delete member functions](#_core_more_about_update_and_delete).

> [!NOTE]
> This topic applies to objects derived from `CRecordset` in which bulk row fetching has not been implemented. If you have implemented bulk row fetching, some of the information does not apply. For example, you cannot call the `AddNew`, `Edit`, `Delete`, and `Update` member functions; however, you can perform transactions. For more information about bulk row fetching, see [Recordset: Fetching Records in Bulk (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

## <a name="_core_how_other_operations_affect_updates"></a> How Other Operations Affect Updates

Your updates are affected by transactions in effect at the time of the update, by closing the recordset before completing a transaction, and by scrolling before completing a transaction.

### <a name="_core_how_transactions_affect_updates"></a> How Transactions Affect Updates

Beyond understanding how `AddNew`, `Edit`, and `Delete` work, it is important to understand how the `BeginTrans`, `CommitTrans`, and `Rollback` member functions of [CDatabase](../../mfc/reference/cdatabase-class.md) work with the update functions of [CRecordset](../../mfc/reference/crecordset-class.md).

By default, calls to `AddNew` and `Edit` affect the data source immediately when you call `Update`. `Delete` calls take effect immediately. But you can establish a transaction and execute a batch of such calls. The updates are not permanent until you commit them. If you change your mind, you can roll back the transaction instead of committing it.

For more information about transactions, see [Transaction (ODBC)](../../data/odbc/transaction-odbc.md).

### <a name="_core_how_closing_the_recordset_affects_updates"></a> How Closing the Recordset Affects Updates

If you close a recordset, or its associated `CDatabase` object, with a transaction in progress (you have not called [CDatabase::CommitTrans](../../mfc/reference/cdatabase-class.md#committrans) or [CDatabase::Rollback](../../mfc/reference/cdatabase-class.md#rollback)), the transaction is rolled back automatically (unless your database backend is the Microsoft Jet database engine).

> [!CAUTION]
> If you are using the Microsoft Jet database engine, closing a recordset inside an explicit transaction does not result in releasing any of the rows that were modified or locks that were placed until the explicit transaction is committed or rolled back. It is recommended that you always both open and close recordsets inside or outside of an explicit Jet transaction.

### <a name="_core_how_scrolling_affects_updates"></a> How Scrolling Affects Updates

When you [Recordset: Scrolling (ODBC)](../../data/odbc/recordset-scrolling-odbc.md) in a recordset, the edit buffer is filled with each new current record (the previous record is not stored first). Scrolling skips over records previously deleted. If you scroll after an `AddNew` or `Edit` call without calling `Update`, `CommitTrans`, or `Rollback` first, any changes are lost (with no warning to you) as a new record is brought into the edit buffer. The edit buffer is filled with the record scrolled to, the stored record is freed, and no change occurs on the data source. This applies to both `AddNew` and `Edit`.

## <a name="_core_your_updates_and_the_updates_of_other_users"></a> Your Updates and the Updates of Other Users

When you use a recordset to update data, your updates affect other users. Similarly, the updates of other users during the lifetime of your recordset affect you.

In a multiuser environment, other users can open recordsets that contain some of the same records you have selected in your recordset. Changes to a record before you retrieve it are reflected in your recordset. Because dynasets retrieve a record each time you scroll to it, dynasets reflect changes each time you scroll to a record. Snapshots retrieve a record the first time you scroll to it, so snapshots reflect only those changes that occur before you scroll to the record initially.

Records added by other users after you open the recordset do not show up in your recordset unless you requery. If your recordset is a dynaset, edits to existing records by other users do show up in your dynaset when you scroll to the affected record. If your recordset is a snapshot, edits do not show up until you requery the snapshot. If you want to see records added or deleted by other users in your snapshot, or records added by other users in your dynaset, call [CRecordset::Requery](../../mfc/reference/crecordset-class.md#requery) to rebuild the recordset. (Note that the deletions of other users show up in your dynaset.) You might also call `Requery` to see records you add, but not to see your deletions.

> [!TIP]
> To force caching of an entire snapshot at once, call `MoveLast` immediately after you open the snapshot. Then call `MoveFirst` to begin working with the records. `MoveLast` is equivalent to scrolling over all the records, but it retrieves them all at once. Note, however, that this can lower performance and might not be required for some drivers.

The effects of your updates on other users are similar to their effects on you.

## <a name="_core_more_about_update_and_delete"></a> More About Update and Delete

This section provides additional information to help you work with `Update` and `Delete`.

### Update Success and Failure

If `Update` succeeds, the `AddNew` or `Edit` mode ends. To begin an `AddNew` or `Edit` mode again, call `AddNew` or `Edit`.

If `Update` fails (returns FALSE or throws an exception), you remain in `AddNew` or `Edit` mode, depending on which function you called last. You can then do one of the following:

- Modify a field data member and try the `Update` again.

- Call `AddNew` to reset the field data members to Null, set the values of the field data members, and then call `Update` again.

- Call `Edit` to reload the values that were in the recordset before the first call to `AddNew` or `Edit`, set the values of the field data members, and then call `Update` again. After a successful `Update` call (except after an `AddNew` call), the field data members retain their new values.

- Call `Move` (including `Move` with a parameter of AFX_MOVE_REFRESH, or 0), which flushes any changes and ends any `AddNew` or `Edit` mode in effect.

### Update and Delete

This section applies to both `Update` and `Delete`.

On an `Update` or `Delete` operation, one and only one record should be updated. That record is the current record, which corresponds to the data values in the fields of the recordset. If for some reason no records are affected or more than one record is affected, an exception is thrown containing one of the following **RETCODE** values:

- AFX_SQL_ERROR_NO_ROWS_AFFECTED

- AFX_SQL_ERROR_MULTIPLE_ROWS_AFFECTED

When these exceptions are thrown, you remain in the `AddNew` or `Edit` state you were in when you called `Update` or `Delete`. Here are the most common scenarios in which you would see these exceptions. You're most likely to see:

- AFX_SQL_ERROR_NO_ROWS_AFFECTED when you are using optimistic locking mode and another user has modified the record in a way that prevents the framework from identifying the correct record to update or delete.

- AFX_SQL_ERROR_MULTIPLE_ROWS_AFFECTED when the table you are updating has no primary key or unique index and you do not have enough columns in the recordset to uniquely identify a table row.

## See also

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[Recordset: How Recordsets Select Records (ODBC)](../../data/odbc/recordset-how-recordsets-select-records-odbc.md)<br/>
[Record Field Exchange (RFX)](../../data/odbc/record-field-exchange-rfx.md)<br/>
[SQL](../../data/odbc/sql.md)<br/>
[Exceptions: Database Exceptions](../../mfc/exceptions-database-exceptions.md)
