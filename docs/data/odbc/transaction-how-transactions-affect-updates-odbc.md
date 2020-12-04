---
description: "Learn more about: Transaction: How Transactions Affect Updates (ODBC)"
title: "Transaction: How Transactions Affect Updates (ODBC)"
ms.date: "11/04/2016"
helpviewer_keywords: ["transactions, updating recordsets", "ODBC recordsets, transactions", "transactions, rolling back", "CommitTrans method", "Rollback method, ODBC transactions"]
ms.assetid: 9e00bbf4-e9fb-4332-87fc-ec8ac61b3f68
---
# Transaction: How Transactions Affect Updates (ODBC)

Updates to the [data source](../../data/odbc/data-source-odbc.md) are managed during transactions through the use of an edit buffer (the same method used outside of transactions). The field data members of a recordset collectively serve as an edit buffer that contains the current record, which the recordset backs up temporarily during an `AddNew` or `Edit`. During a `Delete` operation, the current record is not backed up within a transaction. For more information about the edit buffer and how updates store the current record, see [Recordset: How Recordsets Update Records (ODBC)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md).

> [!NOTE]
> If you have implemented bulk row fetching, you cannot call `AddNew`, `Edit`, or `Delete`. You must instead write your own functions to perform updates to the data source. For more information about bulk row fetching, see [Recordset: Fetching Records in Bulk (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

During transactions, `AddNew`, `Edit`, and `Delete` operations can be committed or rolled back. The effects of `CommitTrans` and `Rollback` might cause the current record to not be restored to the edit buffer. To make sure that the current record is properly restored, it is important to understand how the `CommitTrans` and `Rollback` member functions of `CDatabase` work with the update functions of `CRecordset`.

## <a name="_core_how_committrans_affects_updates"></a> How CommitTrans Affects Updates

The following table explains the effects of `CommitTrans` on transactions.

### How CommitTrans Affects Updates

|Operation|Status of data source|
|---------------|---------------------------|
|`AddNew` and `Update`, and then `CommitTrans`|New record are added to data source.|
|`AddNew` (without `Update`), and then `CommitTrans`|New record is lost. Record not added to data source.|
|`Edit` and `Update`, and then `CommitTrans`|Edits committed to data source.|
|`Edit` (without `Update`), and then `CommitTrans`|Edits to the record are lost. Record remains unchanged on the data source.|
|`Delete` then `CommitTrans`|Records deleted from data source.|

## <a name="_core_how_rollback_affects_updates"></a> How Rollback Affects Transactions

The following table explains the effects of `Rollback` on transactions.

### How Rollback Affects Transactions

|Operation|Status of current record|You must also|Status of data source|
|---------------|------------------------------|-------------------|---------------------------|
|`AddNew` and `Update`, then `Rollback`|Content of the current record is stored temporarily to make room for new record. New record is entered into edit buffer. After `Update` is called, the current record is restored to the edit buffer.||Addition to data source made by `Update` is reversed.|
|`AddNew` (without `Update`), then `Rollback`|Content of the current record is stored temporarily to make room for new record. Edit buffer contains new record.|Call `AddNew` again to restore the edit buffer to an empty, new record. Or call `Move`(0) to restore the old values to the edit buffer.|Because `Update` was not called, there were no changes made to the data source.|
|`Edit` and `Update`, then `Rollback`|An unedited version of the current record is stored temporarily. Edits are made to the content of the edit buffer. After `Update` is called, the unedited version of the record is still temporarily stored.|*Dynaset*: Scroll off the current record then back to restore the unedited version of the record to the edit buffer.<br /><br /> *Snapshot*: Call `Requery` to refresh the recordset from the data source.|Changes to data source made by `Update` are reversed.|
|`Edit` (without `Update`), then `Rollback`|An unedited version of the current record is stored temporarily. Edits are made to the content of the edit buffer.|Call `Edit` again to restore the unedited version of the record to the edit buffer.|Because `Update` was not called, there were no changes made to the data source.|
|`Delete` then `Rollback`|Content of the current record is deleted.|Call `Requery` to restore the content of the current record from the data source.|Deletion of data from data source is reversed.|

## See also

[Transaction (ODBC)](../../data/odbc/transaction-odbc.md)<br/>
[Transaction: Performing a Transaction in a Recordset (ODBC)](../../data/odbc/transaction-performing-a-transaction-in-a-recordset-odbc.md)<br/>
[CDatabase Class](../../mfc/reference/cdatabase-class.md)<br/>
[CRecordset Class](../../mfc/reference/crecordset-class.md)
