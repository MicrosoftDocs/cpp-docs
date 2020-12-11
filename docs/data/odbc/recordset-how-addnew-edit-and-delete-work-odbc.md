---
description: "Learn more about: Recordset: How AddNew, Edit, and Delete Work (ODBC)"
title: "Recordset: How AddNew, Edit, and Delete Work (ODBC)"
ms.date: "11/04/2016"
helpviewer_keywords: ["records [C++], updating", "record editing [C++], in recordsets", "recordsets [C++], adding records", "records [C++], adding", "ODBC recordsets [C++], adding records", "recordsets [C++], editing records", "recordsets [C++], updating", "AddNew method", "ODBC recordsets [C++], deleting records", "records [C++], deleting in recordsets", "data in recordsets [C++]", "recordsets [C++], deleting records", "ODBC recordsets [C++], editing records", "records [C++], editing"]
ms.assetid: cab43d43-235a-4bed-ac05-67d10e94f34e
---
# Recordset: How AddNew, Edit, and Delete Work (ODBC)

This topic applies to the MFC ODBC classes.

This topic explains how the `AddNew`, `Edit`, and `Delete` member functions of class `CRecordset` work. Topics covered include:

- [How Adding Records Works](#_core_adding_a_record)

- [Visibility of Added Records](#_core_visibility_of_added_records)

- [How Editing Records Works](#_core_editing_an_existing_record)

- [How Deleting Records Works](#_core_deleting_a_record)

> [!NOTE]
> This topic applies to objects derived from `CRecordset` in which bulk row fetching has not been implemented. If you are using bulk row fetching, see [Recordset: Fetching Records in Bulk (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

As a supplement, you might want to read [Record Field Exchange: How RFX Works](../../data/odbc/record-field-exchange-how-rfx-works.md), which describes the corresponding role of RFX in update operations.

## <a name="_core_adding_a_record"></a> Adding a Record

Adding a new record to a recordset involves calling the recordset's [AddNew](../../mfc/reference/crecordset-class.md#addnew) member function, setting the values of the new record's field data members, and calling the [Update](../../mfc/reference/crecordset-class.md#update) member function to write the record to the data source.

As a precondition for calling `AddNew`, the recordset must not have been opened as read-only. The `CanUpdate` and `CanAppend` member functions let you determine these conditions.

When you call `AddNew`:

- The record in the edit buffer is stored, so its contents can be restored if the operation is canceled.

- The field data members are flagged so it is possible to detect changes in them later. The field data members are also marked clean (unchanged) and set to a Null.

After you call `AddNew`, the edit buffer represents a new, empty record, ready to be filled in with values. To do this, you manually set the values by assigning to them. Instead of specifying an actual data value for a field, you can call `SetFieldNull` to specify the value Null.

To commit your changes, you call `Update`. When you call `Update` for the new record:

- If your ODBC driver supports the `::SQLSetPos` ODBC API function, MFC uses the function to add the record on the data source. With `::SQLSetPos`, MFC can add a record more efficiently because it does not have to construct and process a SQL statement.

- If `::SQLSetPos` cannot be used, MFC does the following:

   1. If no changes are detected, `Update` does nothing and returns 0.

   1. If there are changes, `Update` constructs a SQL **INSERT** statement. The columns represented by all dirty field data members are listed in the **INSERT** statement. To force a column to be included, call the [SetFieldDirty](../../mfc/reference/crecordset-class.md#setfielddirty) member function:

        ```cpp
        SetFieldDirty( &m_dataMember, TRUE );
        ```

   1. `Update` commits the new record — the **INSERT** statement is executed and the record is committed to the table on the data source (and the recordset, if not a snapshot) unless a transaction is in progress.

   1. The stored record is restored to the edit buffer. The record that was current before the `AddNew` call is current again regardless of whether the **INSERT** statement was successfully executed.

   > [!TIP]
   > For complete control of a new record, take the following approach: set the values of any fields that will have values and then explicitly set any fields that will remain Null by calling `SetFieldNull` with a pointer to the field and the parameter TRUE (the default). If you want to ensure that a field is not written to the data source, call `SetFieldDirty` with a pointer to the field and the parameter FALSE, and do not modify the field's value. To determine whether a field is allowed to be Null, call `IsFieldNullable`.

   > [!TIP]
   > To detect when recordset data members change value, MFC uses a PSEUDO_NULL value appropriate to each data type that you can store in a recordset. If you must explicitly set a field to the PSEUDO_NULL value and the field happens already to be marked Null, you must also call `SetFieldNull`, passing the address of the field in the first parameter and FALSE in the second parameter.

## <a name="_core_visibility_of_added_records"></a> Visibility of Added Records

When is an added record visible to your recordset? Added records sometimes show up and sometimes are not visible, depending on two things:

- What your driver is capable of.

- What the framework can take advantage of.

If your ODBC driver supports the `::SQLSetPos` ODBC API function, MFC uses the function to add records. With `::SQLSetPos`, added records are visible to any updatable MFC recordset. Without support for the function, added records are not visible and you must call `Requery` to see them. Using `::SQLSetPos` is also more efficient.

## <a name="_core_editing_an_existing_record"></a> Editing an Existing Record

Editing an existing record in a recordset involves scrolling to the record, calling the recordset's [Edit](../../mfc/reference/crecordset-class.md#edit) member function, setting the values of the new record's field data members, and calling the [Update](../../mfc/reference/crecordset-class.md#update) member function to write the changed record to the data source.

As a precondition for calling `Edit`, the recordset must be updatable and on a record. The `CanUpdate` and `IsDeleted` member functions let you determine these conditions. The current record also must not already have been deleted, and there must be records in the recordset (both `IsBOF` and `IsEOF` return 0).

When you call `Edit`, the record in the edit buffer (the current record) is stored. The stored record's values are later used to detect whether any fields have changed.

After you call `Edit`, the edit buffer still represents the current record but is now ready to accept changes to the field data members. To change the record, you manually set the values of any field data members you want to edit. Instead of specifying an actual data value for a field, you can call `SetFieldNull` to specify the value Null. To commit your changes, call `Update`.

> [!TIP]
> To get out of `AddNew` or `Edit` mode, call `Move` with the parameter *AFX_MOVE_REFRESH*.

As a precondition for calling `Update`, the recordset must not be empty and the current record must not have been deleted. `IsBOF`, `IsEOF`, and `IsDeleted` should all return 0.

When you call `Update` for the edited record:

- If your ODBC driver supports the `::SQLSetPos` ODBC API function, MFC uses the function to update the record on the data source. With `::SQLSetPos`, the driver compares your edit buffer with the corresponding record on the server, updating the record on the server if the two are different. With `::SQLSetPos`, MFC can update a record more efficiently because it does not have to construct and process a SQL statement.

   \- or -

- If `::SQLSetPos` cannot be used, MFC does the following:

   1. If there have been no changes, `Update` does nothing and returns 0.

   1. If there are changes, `Update` constructs a SQL **UPDATE** statement. The columns listed in the **UPDATE** statement are based on the field data members that have changed.

   1. `Update` commits the changes — executes the **UPDATE** statement — and the record is changed on the data source, but not committed if a transaction is in progress (see [Transaction: Performing a Transaction in a Recordset (ODBC)](../../data/odbc/transaction-performing-a-transaction-in-a-recordset-odbc.md) for information about how the transaction affects the update). ODBC keeps a copy of the record, which also changes.

   1. Unlike the process for `AddNew`, the `Edit` process does not restore the stored record. The edited record remains in place as the current record.

   > [!CAUTION]
   > When you prepare to update a recordset by calling `Update`, take care that your recordset includes all columns making up the primary key of the table (or all of the columns of any unique index on the table, or enough columns to uniquely identify the row). In some cases, the framework can use only the columns selected in your recordset to identify which record in your table to update. Without all the necessary columns, multiple records might be updated in the table. In this case, the framework throws exceptions when you call `Update`.

   > [!TIP]
   > If you call `AddNew` or `Edit` after having called either function previously but before you call `Update`, the edit buffer is refreshed with the stored record, replacing the new or edited record in progress. This behavior gives you a way to abort an `AddNew` or `Edit` and begin a new one: if you determine that the record-in-progress is faulty, simply call `Edit` or `AddNew` again.

## <a name="_core_deleting_a_record"></a> Deleting a Record

Deleting a record from a recordset involves scrolling to the record and calling the recordset's [Delete](../../mfc/reference/crecordset-class.md#delete) member function. Unlike `AddNew` and `Edit`, `Delete` does not require a matching call to `Update`.

As a precondition for calling `Delete`, the recordset must be updatable and it must be on a record. The `CanUpdate`, `IsBOF`, `IsEOF`, and `IsDeleted` member functions let you determine these conditions.

When you call `Delete`:

- If your ODBC driver supports the `::SQLSetPos` ODBC API function, MFC uses the function to delete the record on the data source. Using `::SQLSetPos` is usually more efficient than using SQL.

   \- or -

- If `::SQLSetPos` cannot be used, MFC does the following:

   1. The current record in the edit buffer is not backed up as in `AddNew` and `Edit`.

   1. `Delete` constructs a SQL **DELETE** statement that removes the record.

      The current record in the edit buffer is not stored as in `AddNew` and `Edit`.

   1. `Delete` commits the deletion — executes the **DELETE** statement. The record is marked deleted on the data source and, if the record is a snapshot, in ODBC.

   1. The deleted record's values are still in the field data members of the recordset, but the field data members are marked Null and the recordset's `IsDeleted` member function returns a nonzero value.

   > [!NOTE]
   > After deleting a record, you should scroll to another record to refill the edit buffer with the new record's data. It is an error to call `Delete` again or to call `Edit`.

For information about the SQL statements used in update operations, see [SQL](../../data/odbc/sql.md).

## See also

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[Recordset: More About Updates (ODBC)](../../data/odbc/recordset-more-about-updates-odbc.md)<br/>
[Record Field Exchange (RFX)](../../data/odbc/record-field-exchange-rfx.md)
