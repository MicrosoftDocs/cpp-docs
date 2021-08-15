---
description: "Learn more about: Record Field Exchange: How RFX Works"
title: "Record Field Exchange: How RFX Works"
ms.date: "11/04/2016"
helpviewer_keywords: ["record editing [C++], using RFX", "RFX (ODBC) [C++], updating data in recordsets", "scrolling [C++]", "ODBC [C++], RFX", "data binding [C++], DFX", "scrolling [C++], RFX", "RFX (ODBC) [C++], binding fields and parameters"]
ms.assetid: e647cacd-62b0-4b80-9e20-b392deca5a88
---
# Record Field Exchange: How RFX Works

This topic explains the RFX process. This is an advanced topic covering:

- [RFX and the recordset](#_core_rfx_and_the_recordset)

- [The RFX process](#_core_the_record_field_exchange_process)

> [!NOTE]
> This topic applies to classes derived from `CRecordset` in which bulk row fetching has not been implemented. If you are using bulk row fetching, bulk record field exchange (Bulk RFX) is implemented. Bulk RFX is similar to RFX. To understand the differences, see [Recordset: Fetching Records in Bulk (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

## <a name="_core_rfx_and_the_recordset"></a> RFX and the Recordset

The recordset object's field data members, taken together, constitute an edit buffer that holds the selected columns of one record. When the recordset is first opened and is about to read the first record, RFX binds (associates) each selected column to the address of the appropriate field data member. When the recordset updates a record, RFX calls ODBC API functions to send a SQL **UPDATE** or **INSERT** statement to the driver. RFX uses its knowledge of the field data members to specify the columns to write.

The framework backs up the edit buffer at certain stages so it can restore its contents if necessary. RFX backs up the edit buffer before adding a new record and before editing an existing record. It restores the edit buffer in some cases, for example, after an `Update` call following `AddNew`. The edit buffer is not restored if you abandon a newly changed edit buffer by, for example, moving to another record before calling `Update`.

Besides exchanging data between the data source and the recordset's field data members, RFX manages binding parameters. When the recordset is opened, any parameter data members are bound in the order of the "?" placeholders in the SQL statement that `CRecordset::Open` constructs. For more information, see [Recordset: Parameterizing a Recordset (ODBC)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md).

Your recordset class's override of `DoFieldExchange` does all the work, moving data in both directions. Like dialog data exchange (DDX), RFX needs information about the data members of your class. The wizard provides the necessary information by writing a recordset-specific implementation of `DoFieldExchange` for you, based on the field data member names and data types you specify with the wizard.

## <a name="_core_the_record_field_exchange_process"></a> Record Field Exchange Process

This section describes the sequence of RFX events as a recordset object is opened and as you add, update, and delete records. The table [Sequence of RFX Operations During Recordset Open](#_core_sequence_of_rfx_operations_during_recordset_open) and the table [Sequence of RFX Operations During Scrolling](#_core_sequence_of_rfx_operations_during_scrolling) in this topic show the process as RFX processes a `Move` command in the recordset and as RFX manages an update. During these processes, [DoFieldExchange](../../mfc/reference/crecordset-class.md#dofieldexchange) is called to perform many different operations. The `m_nOperation` data member of the [CFieldExchange](../../mfc/reference/cfieldexchange-class.md) object determines which operation is requested. You might find it helpful to read [Recordset: How Recordsets Select Records (ODBC)](../../data/odbc/recordset-how-recordsets-select-records-odbc.md) and [Recordset: How Recordsets Update Records (ODBC)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md) before you read this material.

### <a name="_mfc_rfx.3a_.initial_binding_of_columns_and_parameters"></a> RFX: Initial Binding of Columns and Parameters

The following RFX activities occur, in the order shown, when you call a recordset object's [Open](../../mfc/reference/crecordset-class.md#open) member function:

- If the recordset has parameter data members, the framework calls `DoFieldExchange` to bind the parameters to parameter placeholders in the recordset's SQL statement string. A data type-dependent representation of the value of the parameter is used for each placeholder found in the **SELECT** statement. This occurs after the SQL statement is prepared but before it is executed. For information about statement preparation, see the `::SQLPrepare` function in the ODBC *Programmer's Reference*.

- The framework calls `DoFieldExchange` a second time to bind the values of selected columns to corresponding field data members in the recordset. This establishes the recordset object as an edit buffer containing the columns of the first record.

- The recordset executes the SQL statement and the data source selects the first record. The record's columns are loaded into the recordset's field data members.

The following table shows the sequence of RFX operations when you open a recordset.

### <a name="_core_sequence_of_rfx_operations_during_recordset_open"></a> Sequence of RFX Operations During Recordset Open

|Your operation|DoFieldExchange operation|Database/SQL operation|
|--------------------|-------------------------------|-----------------------------|
|1. Open recordset.|||
||2. Build a SQL statement.||
|||3. Send the SQL.|
||4. Bind parameter data members.||
||5. Bind field data members to columns.||
|||6. ODBC does the move and fills in the data.|
||7. Fix up the data for C++.||

Recordsets use ODBC's prepared execution to allow for fast requerying with the same SQL statement. For more information about prepared execution, see the [ODBC Programmer's Reference](/sql/odbc/reference/odbc-programmer-s-reference).

### <a name="_mfc_rfx.3a_.scrolling"></a> RFX: Scrolling

When you scroll from one record to another, the framework calls `DoFieldExchange` to replace the values previously stored in the field data members with values for the new record.

The following table shows the sequence of RFX operations when the user moves from record to record.

### <a name="_core_sequence_of_rfx_operations_during_scrolling"></a> Sequence of RFX Operations During Scrolling

|Your operation|DoFieldExchange operation|Database/SQL operation|
|--------------------|-------------------------------|-----------------------------|
|1. Call `MoveNext` or one of the other Move functions.|||
|||2. ODBC does the move and fills in the data.|
||3. Fix up the data for C++.||

### <a name="_mfc_rfx.3a_.adding_new_records_and_editing_existing_records"></a> RFX: Adding New Records and Editing Existing Records

If you add a new record, the recordset operates as an edit buffer to build up the contents of the new record. As with adding records, editing records involves changing the values of the recordset's field data members. From the RFX perspective, the sequence is as follows:

1. Your call to the recordset's [AddNew](../../mfc/reference/crecordset-class.md#addnew) or [Edit](../../mfc/reference/crecordset-class.md#edit) member function causes RFX to store the current edit buffer so it can be restored later.

1. `AddNew` or `Edit` prepares the fields in the edit buffer so RFX can detect changed field data members.

   Because a new record has no previous values to compare new ones with, `AddNew` sets the value of each field data member to a PSEUDO_NULL value. Later, when you call `Update`, RFX compares each data member's value with the PSEUDO_NULL value. If there is a difference, the data member has been set. (PSEUDO_NULL is not the same as a record column with a true Null value nor is either of these the same as C++ NULL.)

   Unlike the `Update` call for `AddNew`, the `Update` call for `Edit` compares updated values with previously stored values rather than using PSEUDO_NULL. The difference is that `AddNew` has no previously stored values for comparison.

1. You directly set the values of field data members whose values you want to edit or that you want filled for a new record. This can include calling `SetFieldNull`.

1. Your call to [Update](../../mfc/reference/crecordset-class.md#update) checks for changed field data members, as described in step 2 (see the table [Sequence of RFX Operations During Scrolling](#_core_sequence_of_rfx_operations_during_scrolling)). If none have changed, `Update` returns 0. If some field data members have changed, `Update` prepares and executes a SQL **INSERT** statement that contains values for all updated fields in the record.

1. For `AddNew`, `Update` concludes by restoring the previously stored values of the record that was current before the `AddNew` call. For `Edit`, the new, edited values remain in place.

The following table shows the sequence of RFX operations when you add a new record or edit an existing record.

### Sequence of RFX Operations During AddNew and Edit

|Your operation|DoFieldExchange operation|Database/SQL operation|
|--------------------|-------------------------------|-----------------------------|
|1. Call `AddNew` or `Edit`.|||
||2. Back up the edit buffer.||
||3. For `AddNew`, mark field data members as "clean" and Null.||
|4. Assign values to recordset field data members.|||
|5. Call `Update`.|||
||6. Check for changed fields.||
||7. Build SQL **INSERT** statement for `AddNew` or **UPDATE** statement for `Edit`.||
|||8. Send the SQL.|
||9. For `AddNew`, restore the edit buffer to its backed-up contents. For `Edit`, delete the backup.||

### RFX: Deleting Existing Records

When you delete a record, RFX sets all the fields to NULL as a reminder that the record is deleted and you must move off it. You do not need any other RFX sequence information.

## See also

[Record Field Exchange (RFX)](../../data/odbc/record-field-exchange-rfx.md)<br/>
[MFC ODBC Consume](../../mfc/reference/adding-an-mfc-odbc-consumer.md)<br/>
[Macros, Global Functions, and Global Variables](../../mfc/reference/mfc-macros-and-globals.md)<br/>
[CFieldExchange Class](../../mfc/reference/cfieldexchange-class.md)<br/>
[CRecordset::DoFieldExchange](../../mfc/reference/crecordset-class.md#dofieldexchange)
