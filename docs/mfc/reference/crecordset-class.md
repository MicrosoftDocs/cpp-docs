---
description: "Learn more about: CRecordset Class"
title: "CRecordset Class"
ms.date: "11/04/2016"
f1_keywords: ["CRecordset", "AFXDB/CRecordset", "AFXDB/CRecordset::CRecordset", "AFXDB/CRecordset::AddNew", "AFXDB/CRecordset::CanAppend", "AFXDB/CRecordset::CanBookmark", "AFXDB/CRecordset::Cancel", "AFXDB/CRecordset::CancelUpdate", "AFXDB/CRecordset::CanRestart", "AFXDB/CRecordset::CanScroll", "AFXDB/CRecordset::CanTransact", "AFXDB/CRecordset::CanUpdate", "AFXDB/CRecordset::CheckRowsetError", "AFXDB/CRecordset::Close", "AFXDB/CRecordset::Delete", "AFXDB/CRecordset::DoBulkFieldExchange", "AFXDB/CRecordset::DoFieldExchange", "AFXDB/CRecordset::Edit", "AFXDB/CRecordset::FlushResultSet", "AFXDB/CRecordset::GetBookmark", "AFXDB/CRecordset::GetDefaultConnect", "AFXDB/CRecordset::GetDefaultSQL", "AFXDB/CRecordset::GetFieldValue", "AFXDB/CRecordset::GetODBCFieldCount", "AFXDB/CRecordset::GetODBCFieldInfo", "AFXDB/CRecordset::GetRecordCount", "AFXDB/CRecordset::GetRowsetSize", "AFXDB/CRecordset::GetRowsFetched", "AFXDB/CRecordset::GetRowStatus", "AFXDB/CRecordset::GetSQL", "AFXDB/CRecordset::GetStatus", "AFXDB/CRecordset::GetTableName", "AFXDB/CRecordset::IsBOF", "AFXDB/CRecordset::IsDeleted", "AFXDB/CRecordset::IsEOF", "AFXDB/CRecordset::IsFieldDirty", "AFXDB/CRecordset::IsFieldNull", "AFXDB/CRecordset::IsFieldNullable", "AFXDB/CRecordset::IsOpen", "AFXDB/CRecordset::Move", "AFXDB/CRecordset::MoveFirst", "AFXDB/CRecordset::MoveLast", "AFXDB/CRecordset::MoveNext", "AFXDB/CRecordset::MovePrev", "AFXDB/CRecordset::OnSetOptions", "AFXDB/CRecordset::OnSetUpdateOptions", "AFXDB/CRecordset::Open", "AFXDB/CRecordset::RefreshRowset", "AFXDB/CRecordset::Requery", "AFXDB/CRecordset::SetAbsolutePosition", "AFXDB/CRecordset::SetBookmark", "AFXDB/CRecordset::SetFieldDirty", "AFXDB/CRecordset::SetFieldNull", "AFXDB/CRecordset::SetLockingMode", "AFXDB/CRecordset::SetParamNull", "AFXDB/CRecordset::SetRowsetCursorPosition", "AFXDB/CRecordset::SetRowsetSize", "AFXDB/CRecordset::Update", "AFXDB/CRecordset::m_hstmt", "AFXDB/CRecordset::m_nFields", "AFXDB/CRecordset::m_nParams", "AFXDB/CRecordset::m_pDatabase", "AFXDB/CRecordset::m_strFilter", "AFXDB/CRecordset::m_strSort"]
helpviewer_keywords: ["CRecordset [MFC], CRecordset", "CRecordset [MFC], AddNew", "CRecordset [MFC], CanAppend", "CRecordset [MFC], CanBookmark", "CRecordset [MFC], Cancel", "CRecordset [MFC], CancelUpdate", "CRecordset [MFC], CanRestart", "CRecordset [MFC], CanScroll", "CRecordset [MFC], CanTransact", "CRecordset [MFC], CanUpdate", "CRecordset [MFC], CheckRowsetError", "CRecordset [MFC], Close", "CRecordset [MFC], Delete", "CRecordset [MFC], DoBulkFieldExchange", "CRecordset [MFC], DoFieldExchange", "CRecordset [MFC], Edit", "CRecordset [MFC], FlushResultSet", "CRecordset [MFC], GetBookmark", "CRecordset [MFC], GetDefaultConnect", "CRecordset [MFC], GetDefaultSQL", "CRecordset [MFC], GetFieldValue", "CRecordset [MFC], GetODBCFieldCount", "CRecordset [MFC], GetODBCFieldInfo", "CRecordset [MFC], GetRecordCount", "CRecordset [MFC], GetRowsetSize", "CRecordset [MFC], GetRowsFetched", "CRecordset [MFC], GetRowStatus", "CRecordset [MFC], GetSQL", "CRecordset [MFC], GetStatus", "CRecordset [MFC], GetTableName", "CRecordset [MFC], IsBOF", "CRecordset [MFC], IsDeleted", "CRecordset [MFC], IsEOF", "CRecordset [MFC], IsFieldDirty", "CRecordset [MFC], IsFieldNull", "CRecordset [MFC], IsFieldNullable", "CRecordset [MFC], IsOpen", "CRecordset [MFC], Move", "CRecordset [MFC], MoveFirst", "CRecordset [MFC], MoveLast", "CRecordset [MFC], MoveNext", "CRecordset [MFC], MovePrev", "CRecordset [MFC], OnSetOptions", "CRecordset [MFC], OnSetUpdateOptions", "CRecordset [MFC], Open", "CRecordset [MFC], RefreshRowset", "CRecordset [MFC], Requery", "CRecordset [MFC], SetAbsolutePosition", "CRecordset [MFC], SetBookmark", "CRecordset [MFC], SetFieldDirty", "CRecordset [MFC], SetFieldNull", "CRecordset [MFC], SetLockingMode", "CRecordset [MFC], SetParamNull", "CRecordset [MFC], SetRowsetCursorPosition", "CRecordset [MFC], SetRowsetSize", "CRecordset [MFC], Update", "CRecordset [MFC], m_hstmt", "CRecordset [MFC], m_nFields", "CRecordset [MFC], m_nParams", "CRecordset [MFC], m_pDatabase", "CRecordset [MFC], m_strFilter", "CRecordset [MFC], m_strSort"]
ms.assetid: dd89a21d-ef39-4aab-891b-1e373d67c855
---
# CRecordset Class

Represents a set of records selected from a data source.

## Syntax

```
class CRecordset : public CObject
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CRecordset::CRecordset](#crecordset)|Constructs a `CRecordset` object. Your derived class must provide a constructor that calls this one.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CRecordset::AddNew](#addnew)|Prepares for adding a new record. Call `Update` to complete the addition.|
|[CRecordset::CanAppend](#canappend)|Returns nonzero if new records can be added to the recordset via the `AddNew` member function.|
|[CRecordset::CanBookmark](#canbookmark)|Returns nonzero if the recordset supports bookmarks.|
|[CRecordset::Cancel](#cancel)|Cancels an asynchronous operation or a process from a second thread.|
|[CRecordset::CancelUpdate](#cancelupdate)|Cancels any pending updates due to an `AddNew` or `Edit` operation.|
|[CRecordset::CanRestart](#canrestart)|Returns nonzero if `Requery` can be called to run the recordset's query again.|
|[CRecordset::CanScroll](#canscroll)|Returns nonzero if you can scroll through the records.|
|[CRecordset::CanTransact](#cantransact)|Returns nonzero if the data source supports transactions.|
|[CRecordset::CanUpdate](#canupdate)|Returns nonzero if the recordset can be updated (you can add, update, or delete records).|
|[CRecordset::CheckRowsetError](#checkrowseterror)|Called to handle errors generated during record fetching.|
|[CRecordset::Close](#close)|Closes the recordset and the ODBC HSTMT associated with it.|
|[CRecordset::Delete](#delete)|Deletes the current record from the recordset. You must explicitly scroll to another record after the deletion.|
|[CRecordset::DoBulkFieldExchange](#dobulkfieldexchange)|Called to exchange bulk rows of data from the data source to the recordset. Implements bulk record field exchange (Bulk RFX).|
|[CRecordset::DoFieldExchange](#dofieldexchange)|Called to exchange data (in both directions) between the field data members of the recordset and the corresponding record on the data source. Implements record field exchange (RFX).|
|[CRecordset::Edit](#edit)|Prepares for changes to the current record. Call `Update` to complete the edit.|
|[CRecordset::FlushResultSet](#flushresultset)|Returns nonzero if there is another result set to be retrieved, when using a predefined query.|
|[CRecordset::GetBookmark](#getbookmark)|Assigns the bookmark value of a record to the parameter object.|
|[CRecordset::GetDefaultConnect](#getdefaultconnect)|Called to get the default connection string.|
|[CRecordset::GetDefaultSQL](#getdefaultsql)|Called to get the default SQL string to execute.|
|[CRecordset::GetFieldValue](#getfieldvalue)|Returns the value of a field in a recordset.|
|[CRecordset::GetODBCFieldCount](#getodbcfieldcount)|Returns the number of fields in the recordset.|
|[CRecordset::GetODBCFieldInfo](#getodbcfieldinfo)|Returns specific kinds of information about the fields in a recordset.|
|[CRecordset::GetRecordCount](#getrecordcount)|Returns the number of records in the recordset.|
|[CRecordset::GetRowsetSize](#getrowsetsize)|Returns the number of records you wish to retrieve during a single fetch.|
|[CRecordset::GetRowsFetched](#getrowsfetched)|Returns the actual number of rows retrieved during a fetch.|
|[CRecordset::GetRowStatus](#getrowstatus)|Returns the status of the row after a fetch.|
|[CRecordset::GetSQL](#getsql)|Gets the SQL string used to select records for the recordset.|
|[CRecordset::GetStatus](#getstatus)|Gets the status of the recordset: the index of the current record and whether a final count of the records has been obtained.|
|[CRecordset::GetTableName](#gettablename)|Gets the name of the table on which the recordset is based.|
|[CRecordset::IsBOF](#isbof)|Returns nonzero if the recordset has been positioned before the first record. There is no current record.|
|[CRecordset::IsDeleted](#isdeleted)|Returns nonzero if the recordset is positioned on a deleted record.|
|[CRecordset::IsEOF](#iseof)|Returns nonzero if the recordset has been positioned after the last record. There is no current record.|
|[CRecordset::IsFieldDirty](#isfielddirty)|Returns nonzero if the specified field in the current record has been changed.|
|[CRecordset::IsFieldNull](#isfieldnull)|Returns nonzero if the specified field in the current record is null (has no value).|
|[CRecordset::IsFieldNullable](#isfieldnullable)|Returns nonzero if the specified field in the current record can be set to null (having no value).|
|[CRecordset::IsOpen](#isopen)|Returns nonzero if `Open` has been called previously.|
|[CRecordset::Move](#move)|Positions the recordset to a specified number of records from the current record in either direction.|
|[CRecordset::MoveFirst](#movefirst)|Positions the current record on the first record in the recordset. Test for `IsBOF` first.|
|[CRecordset::MoveLast](#movelast)|Positions the current record on the last record or on the last rowset. Test for `IsEOF` first.|
|[CRecordset::MoveNext](#movenext)|Positions the current record on the next record or on the next rowset. Test for `IsEOF` first.|
|[CRecordset::MovePrev](#moveprev)|Positions the current record on the previous record or on the previous rowset. Test for `IsBOF` first.|
|[CRecordset::OnSetOptions](#onsetoptions)|Called to set options (used on selection) for the specified ODBC statement.|
|[CRecordset::OnSetUpdateOptions](#onsetupdateoptions)|Called to set options (used on update) for the specified ODBC statement.|
|[CRecordset::Open](#open)|Opens the recordset by retrieving the table or performing the query that the recordset represents.|
|[CRecordset::RefreshRowset](#refreshrowset)|Refreshes the data and status of the specified row(s).|
|[CRecordset::Requery](#requery)|Runs the recordset's query again to refresh the selected records.|
|[CRecordset::SetAbsolutePosition](#setabsoluteposition)|Positions the recordset on the record corresponding to the specified record number.|
|[CRecordset::SetBookmark](#setbookmark)|Positions the recordset on the record specified by the bookmark.|
|[CRecordset::SetFieldDirty](#setfielddirty)|Marks the specified field in the current record as changed.|
|[CRecordset::SetFieldNull](#setfieldnull)|Sets the value of the specified field in the current record to null (having no value).|
|[CRecordset::SetLockingMode](#setlockingmode)|Sets the locking mode to "optimistic" locking (the default) or "pessimistic" locking. Determines how records are locked for updates.|
|[CRecordset::SetParamNull](#setparamnull)|Sets the specified parameter to null (having no value).|
|[CRecordset::SetRowsetCursorPosition](#setrowsetcursorposition)|Positions the cursor on the specified row within the rowset.|
|[CRecordset::SetRowsetSize](#setrowsetsize)|Specifies the number of records you wish to retrieve during a fetch.|
|[CRecordset::Update](#update)|Completes an `AddNew` or `Edit` operation by saving the new or edited data on the data source.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CRecordset::m_hstmt](#m_hstmt)|Contains the ODBC statement handle for the recordset. Type `HSTMT`.|
|[CRecordset::m_nFields](#m_nfields)|Contains the number of field data members in the recordset. Type `UINT`.|
|[CRecordset::m_nParams](#m_nparams)|Contains the number of parameter data members in the recordset. Type `UINT`.|
|[CRecordset::m_pDatabase](#m_pdatabase)|Contains a pointer to the `CDatabase` object through which the recordset is connected to a data source.|
|[CRecordset::m_strFilter](#m_strfilter)|Contains a `CString` that specifies a Structured Query Language (SQL) `WHERE` clause. Used as a filter to select only those records that meet certain criteria.|
|[CRecordset::m_strSort](#m_strsort)|Contains a `CString` that specifies a SQL `ORDER BY` clause. Used to control how the records are sorted.|

## <a name="remarks"></a> Remarks

Known as "recordsets," `CRecordset` objects are typically used in two forms: dynasets and snapshots. A dynaset stays synchronized with data updates made by other users. A snapshot is a static view of the data. Each form represents a set of records fixed at the time the recordset is opened, but when you scroll to a record in a dynaset, it reflects changes subsequently made to the record, either by other users or by other recordsets in your application.

> [!NOTE]
> If you are working with the Data Access Objects (DAO) classes rather than the Open Database Connectivity (ODBC) classes, use class [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) instead. For more information, see the article [Overview: Database Programming](../../data/data-access-programming-mfc-atl.md).

To work with either kind of recordset, you typically derive an application-specific recordset class from `CRecordset`. Recordsets select records from a data source, and you can then:

- Scroll through the records.

- Update the records and specify a locking mode.

- Filter the recordset to constrain which records it selects from those available on the data source.

- Sort the recordset.

- Parameterize the recordset to customize its selection with information not known until run time.

To use your class, open a database and construct a recordset object, passing the constructor a pointer to your `CDatabase` object. Then call the recordset's `Open` member function, where you can specify whether the object is a dynaset or a snapshot. Calling `Open` selects data from the data source. After the recordset object is opened, use its member functions and data members to scroll through the records and operate on them. The operations available depend on whether the object is a dynaset or a snapshot, whether it is updatable or read-only (this depends on the capability of the Open Database Connectivity (ODBC) data source), and whether you have implemented bulk row fetching. To refresh records that may have been changed or added since the `Open` call, call the object's `Requery` member function. Call the object's `Close` member function and destroy the object when you finish with it.

In a derived `CRecordset` class, record field exchange (RFX) or bulk record field exchange (Bulk RFX) is used to support reading and updating of record fields.

For more information about recordsets and record field exchange, see the articles [Overview: Database Programming](../../data/data-access-programming-mfc-atl.md), [Recordset (ODBC)](../../data/odbc/recordset-odbc.md), [Recordset: Fetching Records in Bulk (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md), and [Record Field Exchange (RFX)](../../data/odbc/record-field-exchange-rfx.md). For a focus on dynasets and snapshots, see the articles [Dynaset](../../data/odbc/dynaset.md) and [Snapshot](../../data/odbc/snapshot.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

`CRecordset`

## Requirements

**Header:** afxdb.h

## <a name="addnew"></a> CRecordset::AddNew

Prepares for adding a new record to the table.

```
virtual void AddNew();
```

### Remarks

You must call the [Requery](#requery) member function to see the newly added record. The record's fields are initially Null. (In database terminology, Null means "having no value" and is not the same as NULL in C++.) To complete the operation, you must call the [Update](#update) member function. `Update` saves your changes to the data source.

> [!NOTE]
> If you have implemented bulk row fetching, you cannot call `AddNew`. This will result in a failed assertion. Although class `CRecordset` does not provide a mechanism for updating bulk rows of data, you can write your own functions by using the ODBC API function `SQLSetPos`. For more information about bulk row fetching, see the article [Recordset: Fetching Records in Bulk (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

`AddNew` prepares a new, empty record using the recordset's field data members. After you call `AddNew`, set the values you want in the recordset's field data members. (You do not have to call the [Edit](#edit) member function for this purpose; use `Edit` only for existing records.) When you subsequently call `Update`, changed values in the field data members are saved on the data source.

> [!CAUTION]
> If you scroll to a new record before you call `Update`, the new record is lost, and no warning is given.

If the data source supports transactions, you can make your `AddNew` call part of a transaction. For more information about transactions, see class [CDatabase](../../mfc/reference/cdatabase-class.md). Note that you should call [CDatabase::BeginTrans](../../mfc/reference/cdatabase-class.md#begintrans) before calling `AddNew`.

> [!NOTE]
> For dynasets, new records are added to the recordset as the last record. Added records are not added to snapshots; you must call `Requery` to refresh the recordset.

It is illegal to call `AddNew` for a recordset whose `Open` member function has not been called. A `CDBException` is thrown if you call `AddNew` for a recordset that cannot be appended to. You can determine whether the recordset is updatable by calling [CanAppend](#canappend).

For more information, see the following articles: [Recordset: How Recordsets Update Records (ODBC)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md), [Recordset: Adding, Updating, and Deleting Records (ODBC)](../../data/odbc/recordset-adding-updating-and-deleting-records-odbc.md), and [Transaction (ODBC)](../../data/odbc/transaction-odbc.md).

### Example

See the article [Transaction: Performing a Transaction in a Recordset (ODBC)](../../data/odbc/transaction-performing-a-transaction-in-a-recordset-odbc.md).

## <a name="canappend"></a> CRecordset::CanAppend

Determines whether the previously opened recordset allows you to add new records.

```
BOOL CanAppend() const;
```

### Return Value

Nonzero if the recordset allows adding new records; otherwise 0. `CanAppend` will return 0 if you opened the recordset as read-only.

## <a name="canbookmark"></a> CRecordset::CanBookmark

Determines whether the recordset allows you to mark records using bookmarks.

```
BOOL CanBookmark() const;
```

### Return Value

Nonzero if the recordset supports bookmarks; otherwise 0.

### Remarks

This function is independent of the `CRecordset::useBookmarks` option in the *dwOptions* parameter of the [Open](#open) member function. `CanBookmark` indicates whether the given ODBC driver and cursor type support bookmarks. `CRecordset::useBookmarks` indicates whether bookmarks will be available, provided they are supported.

> [!NOTE]
> Bookmarks are not supported on forward-only recordsets.

For more information about bookmarks and recordset navigation, see the articles [Recordset: Bookmarks and Absolute Positions (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md) and [Recordset: Scrolling (ODBC)](../../data/odbc/recordset-scrolling-odbc.md).

## <a name="cancel"></a> CRecordset::Cancel

Requests that the data source cancel either an asynchronous operation in progress or a process from a second thread.

```cpp
void Cancel();
```

### Remarks

Note that the MFC ODBC classes no longer use asynchronous processing; to perform an asychronous operation, you must directly call the ODBC API function `SQLSetConnectOption`. For more information, see the topic "Executing Functions Asynchronously" in the *ODBC SDK Programmer's Guide*.

## <a name="cancelupdate"></a> CRecordset::CancelUpdate

Cancels any pending updates, caused by an [Edit](#edit) or [AddNew](#addnew) operation, before [Update](#update) is called.

```cpp
void CancelUpdate();
```

### Remarks

> [!NOTE]
> This member function is not applicable on recordsets that are using bulk row fetching, since such recordsets cannot call `Edit`, `AddNew`, or `Update`. For more information about bulk row fetching, see the article [Recordset: Fetching Records in Bulk (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

If automatic dirty field checking is enabled, `CancelUpdate` will restore the member variables to the values they had before `Edit` or `AddNew` was called; otherwise, any value changes will remain. By default, automatic field checking is enabled when the recordset is opened. To disable it, you must specify the `CRecordset::noDirtyFieldCheck` in the *dwOptions* parameter of the [Open](#open) member function.

For more information about updating data, see the article [Recordset: Adding, Updating, and Deleting Records (ODBC)](../../data/odbc/recordset-adding-updating-and-deleting-records-odbc.md).

## <a name="canrestart"></a> CRecordset::CanRestart

Determines whether the recordset allows restarting its query (to refresh its records) by calling the `Requery` member function.

```
BOOL CanRestart() const;
```

### Return Value

Nonzero if requery is allowed; otherwise 0.

## <a name="canscroll"></a> CRecordset::CanScroll

Determines whether the recordset allows scrolling.

```
BOOL CanScroll() const;
```

### Return Value

Nonzero if the recordset allows scrolling; otherwise 0.

### Remarks

For more information about scrolling, see the article [Recordset: Scrolling (ODBC)](../../data/odbc/recordset-scrolling-odbc.md).

## <a name="cantransact"></a> CRecordset::CanTransact

Determines whether the recordset allows transactions.

```
BOOL CanTransact() const;
```

### Return Value

Nonzero if the recordset allows transactions; otherwise 0.

### Remarks

For more information, see the article [Transaction (ODBC)](../../data/odbc/transaction-odbc.md).

## <a name="canupdate"></a> CRecordset::CanUpdate

Determines whether the recordset can be updated.

```
BOOL CanUpdate() const;
```

### Return Value

Nonzero if the recordset can be updated; otherwise 0.

### Remarks

A recordset might be read-only if the underlying data source is read-only or if you specified `CRecordset::readOnly` in the *dwOptions* parameter when you opened the recordset.

## <a name="checkrowseterror"></a> CRecordset::CheckRowsetError

Called to handle errors generated during record fetching.

```
virtual void CheckRowsetError(RETCODE nRetCode);
```

### Parameters

*nRetCode*<br/>
An ODBC API function return code. For details, see Remarks.

### Remarks

This virtual member function handles errors that occur when records are fetched, and is useful during bulk row fetching. You may want to consider overriding `CheckRowsetError` to implement your own error handling.

`CheckRowsetError` is called automatically in a cursor navigation operation, such as `Open`, `Requery`, or any `Move` operation. It is passed the return value of the ODBC API function `SQLExtendedFetch`. The following table lists the possible values for the *nRetCode* parameter.

|nRetCode|Description|
|--------------|-----------------|
|SQL_SUCCESS|Function completed successfully; no additional information is available.|
|SQL_SUCCESS_WITH_INFO|Function completed successfully, possibly with a nonfatal error. Additional information can be obtained by calling `SQLError`.|
|SQL_NO_DATA_FOUND|All rows from the result set have been fetched.|
|SQL_ERROR|Function failed. Additional information can be obtained by calling `SQLError`.|
|SQL_INVALID_HANDLE|Function failed due to an invalid environment handle, connection handle, or statement handle. This indicates a programming error. No additional information is available from `SQLError`.|
|SQL_STILL_EXECUTING|A function that was started asynchronously is still executing. Note that by default, MFC will never pass this value to `CheckRowsetError`; MFC will continue calling `SQLExtendedFetch` until it no longer returns SQL_STILL_EXECUTING.|

For more information about `SQLError`, see the Windows SDK. For more information about bulk row fetching, see the article [Recordset: Fetching Records in Bulk (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

## <a name="close"></a> CRecordset::Close

Closes the recordset.

```
virtual void Close();
```

### Remarks

The ODBC HSTMT and all memory the framework allocated for the recordset are deallocated. Usually after calling `Close`, you delete the C++ recordset object if it was allocated with **`new`**.

You can call `Open` again after calling `Close`. This lets you reuse the recordset object. The alternative is to call `Requery`.

### Example

[!code-cpp[NVC_MFCDatabase#17](../../mfc/codesnippet/cpp/crecordset-class_1.cpp)]

## <a name="crecordset"></a> CRecordset::CRecordset

Constructs a `CRecordset` object.

```
CRecordset(CDatabase* pDatabase = NULL);
```

### Parameters

*pDatabase*<br/>
Contains a pointer to a `CDatabase` object or the value NULL. If not NULL and the `CDatabase` object's `Open` member function has not been called to connect it to the data source, the recordset attempts to open it for you during its own `Open` call. If you pass NULL, a `CDatabase` object is constructed and connected for you using the data source information you specified when you derived your recordset class with ClassWizard.

### Remarks

You can either use `CRecordset` directly or derive an application-specific class from `CRecordset`. You can use ClassWizard to derive your recordset classes.

> [!NOTE]
> A derived class *must* supply its own constructor. In the constructor of your derived class, call the constructor `CRecordset::CRecordset`, passing the appropriate parameters along to it.

Pass NULL to your recordset constructor to have a `CDatabase` object constructed and connected for you automatically. This is a useful shorthand that does not require you to construct and connect a `CDatabase` object prior to constructing your recordset.

### Example

For more information, see the article [Recordset: Declaring a Class for a Table (ODBC)](../../data/odbc/recordset-declaring-a-class-for-a-table-odbc.md).

## <a name="delete"></a> CRecordset::Delete

Deletes the current record.

```
virtual void Delete();
```

### Remarks

After a successful deletion, the recordset's field data members are set to a Null value, and you must explicitly call one of the `Move` functions in order to move off the deleted record. Once you move off the deleted record, it is not possible to return to it. If the data source supports transactions, you can make the `Delete` call part of a transaction. For more information, see the article [Transaction (ODBC)](../../data/odbc/transaction-odbc.md).

> [!NOTE]
> If you have implemented bulk row fetching, you cannot call `Delete`. This will result in a failed assertion. Although class `CRecordset` does not provide a mechanism for updating bulk rows of data, you can write your own functions by using the ODBC API function `SQLSetPos`. For more information about bulk row fetching, see the article [Recordset: Fetching Records in Bulk (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

> [!CAUTION]
> The recordset must be updatable and there must be a valid record current in the recordset when you call `Delete`; otherwise, an error occurs. For example, if you delete a record but do not scroll to a new record before you call `Delete` again, `Delete` throws a [CDBException](../../mfc/reference/cdbexception-class.md).

Unlike [AddNew](#addnew) and [Edit](#edit), a call to `Delete` is not followed by a call to [Update](#update). If a `Delete` call fails, the field data members are left unchanged.

### Example

This example shows a recordset created on the frame of a function. The example assumes the existence of `m_dbCust`, a member variable of type `CDatabase` already connected to the data source.

[!code-cpp[NVC_MFCDatabase#18](../../mfc/codesnippet/cpp/crecordset-class_2.cpp)]

## <a name="dobulkfieldexchange"></a> CRecordset::DoBulkFieldExchange

Called to exchange bulk rows of data from the data source to the recordset. Implements bulk record field exchange (Bulk RFX).

```
virtual void DoBulkFieldExchange(CFieldExchange* pFX);
```

### Parameters

*pFX*<br/>
A pointer to a [CFieldExchange](../../mfc/reference/cfieldexchange-class.md) object. The framework will already have set up this object to specify a context for the field exchange operation.

### Remarks

When bulk row fetching is implemented, the framework calls this member function to automatically transfer data from the data source to your recordset object. `DoBulkFieldExchange` also binds your parameter data members, if any, to parameter placeholders in the SQL statement string for the recordset's selection.

If bulk row fetching is not implemented, the framework calls [DoFieldExchange](#dofieldexchange). To implement bulk row fetching, you must specify the `CRecordset::useMultiRowFetch` option of the *dwOptions* parameter in the [Open](#open) member function.

> [!NOTE]
> `DoBulkFieldExchange` is available only if you are using a class derived from `CRecordset`. If you have created a recordset object directly from `CRecordset`, you must call the [GetFieldValue](#getfieldvalue) member function to retrieve data.

Bulk record field exchange (Bulk RFX) is similar to record field exchange (RFX). Data is automatically transferred from the data source to the recordset object. However, you cannot call `AddNew`, `Edit`, `Delete`, or `Update` to transfer changes back to the data source. Class `CRecordset` currently does not provide a mechanism for updating bulk rows of data; however, you can write your own functions by using the ODBC API function `SQLSetPos`.

Note that ClassWizard does not support bulk record field exchange; therefore, you must override `DoBulkFieldExchange` manually by writing calls to the Bulk RFX functions. For more information about these functions, see the topic [Record Field Exchange Functions](../../mfc/reference/record-field-exchange-functions.md).

For more information about bulk row fetching, see the article [Recordset: Fetching Records in Bulk (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md). For related information, see the article [Record Field Exchange (RFX)](../../data/odbc/record-field-exchange-rfx.md).

## <a name="dofieldexchange"></a> CRecordset::DoFieldExchange

Called to exchange data (in both directions) between the field data members of the recordset and the corresponding record on the data source. Implements record field exchange (RFX).

```
virtual void DoFieldExchange(CFieldExchange* pFX);
```

### Parameters

*pFX*<br/>
A pointer to a [CFieldExchange](../../mfc/reference/cfieldexchange-class.md) object. The framework will already have set up this object to specify a context for the field exchange operation.

### Remarks

When bulk row fetching is not implemented, the framework calls this member function to automatically exchange data between the field data members of your recordset object and the corresponding columns of the current record on the data source. `DoFieldExchange` also binds your parameter data members, if any, to parameter placeholders in the SQL statement string for the recordset's selection.

If bulk row fetching is implemented, the framework calls [DoBulkFieldExchange](#dobulkfieldexchange). To implement bulk row fetching, you must specify the `CRecordset::useMultiRowFetch` option of the *dwOptions* parameter in the [Open](#open) member function.

> [!NOTE]
> `DoFieldExchange` is available only if you are using a class derived from `CRecordset`. If you have created a recordset object directly from `CRecordset`, you must call the [GetFieldValue](#getfieldvalue) member function to retrieve data.

The exchange of field data, called record field exchange (RFX), works in both directions: from the recordset object's field data members to the fields of the record on the data source, and from the record on the data source to the recordset object.

The only action you must normally take to implement `DoFieldExchange` for your derived recordset class is to create the class with ClassWizard and specify the names and data types of the field data members. You might also add code to what ClassWizard writes to specify parameter data members or to deal with any columns you bind dynamically. For more information, see the article [Recordset: Dynamically Binding Data Columns (ODBC)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md).

When you declare your derived recordset class with ClassWizard, the wizard writes an override of `DoFieldExchange` for you, which resembles the following example:

[!code-cpp[NVC_MFCDatabase#19](../../mfc/codesnippet/cpp/crecordset-class_3.cpp)]

For more information about the RFX functions, see the topic [Record Field Exchange Functions](../../mfc/reference/record-field-exchange-functions.md).

For further examples and details about `DoFieldExchange`, see the article [Record Field Exchange: How RFX Works](../../data/odbc/record-field-exchange-how-rfx-works.md). For general information about RFX, see the article [Record Field Exchange](../../data/odbc/record-field-exchange-rfx.md).

## <a name="edit"></a> CRecordset::Edit

Allows changes to the current record.

```
virtual void Edit();
```

### Remarks

After you call `Edit`, you can change the field data members by directly resetting their values. The operation is completed when you subsequently call the [Update](#update) member function to save your changes on the data source.

> [!NOTE]
> If you have implemented bulk row fetching, you cannot call `Edit`. This will result in a failed assertion. Although class `CRecordset` does not provide a mechanism for updating bulk rows of data, you can write your own functions by using the ODBC API function `SQLSetPos`. For more information about bulk row fetching, see the article [Recordset: Fetching Records in Bulk (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

`Edit` saves the values of the recordset's data members. If you call `Edit`, make changes, then call `Edit` again, the record's values are restored to what they were before the first `Edit` call.

In some cases, you may want to update a column by making it Null (containing no data). To do so, call [SetFieldNull](#setfieldnull) with a parameter of TRUE to mark the field Null; this also causes the column to be updated. If you want a field to be written to the data source even though its value has not changed, call [SetFieldDirty](#setfielddirty) with a parameter of TRUE. This works even if the field had the value Null.

If the data source supports transactions, you can make the `Edit` call part of a transaction. Note that you should call [CDatabase::BeginTrans](../../mfc/reference/cdatabase-class.md#begintrans) before calling `Edit` and after the recordset has been opened. Also note that calling [CDatabase::CommitTrans](../../mfc/reference/cdatabase-class.md#committrans) is not a substitute for calling `Update` to complete the `Edit` operation. For more information about transactions, see class [CDatabase](../../mfc/reference/cdatabase-class.md).

Depending on the current locking mode, the record being updated may be locked by `Edit` until you call `Update` or scroll to another record, or it may be locked only during the `Edit` call. You can change the locking mode with [SetLockingMode](#setlockingmode).

The previous value of the current record is restored if you scroll to a new record before calling `Update`. A `CDBException` is thrown if you call `Edit` for a recordset that cannot be updated or if there is no current record.

For more information, see the articles [Transaction (ODBC)](../../data/odbc/transaction-odbc.md) and [Recordset: Locking Records (ODBC)](../../data/odbc/recordset-locking-records-odbc.md).

### Example

[!code-cpp[NVC_MFCDatabase#20](../../mfc/codesnippet/cpp/crecordset-class_4.cpp)]

## <a name="flushresultset"></a> CRecordset::FlushResultSet

Retrieves the next result set of a predefined query (stored procedure), if there are multiple result sets.

```
BOOL FlushResultSet();
```

### Return Value

Nonzero if there are more result sets to be retrieved; otherwise 0.

### Remarks

You should call `FlushResultSet` only when you are completely finished with the cursor on the current result set. Note that when you retrieve the next result set by calling `FlushResultSet`, your cursor is not valid on that result set; you should call the [MoveNext](#movenext) member function after calling `FlushResultSet`.

If a predefined query uses an output parameter or input/output parameters, you must call `FlushResultSet` until it returns `FALSE` (the value 0), in order to obtain these parameter values.

`FlushResultSet` calls the ODBC API function `SQLMoreResults`. If `SQLMoreResults` returns SQL_ERROR or SQL_INVALID_HANDLE, then `FlushResultSet` will throw an exception. For more information about `SQLMoreResults`, see the Windows SDK.

Your stored procedure needs to have bound fields if you want to call `FlushResultSet`.

### Example

The following code assumes that `COutParamRecordset` is a `CRecordset`-derived object based on a predefined query with an input parameter and an output parameter, and having multiple result sets. Note the structure of the [DoFieldExchange](#dofieldexchange) override.

[!code-cpp[NVC_MFCDatabase#21](../../mfc/codesnippet/cpp/crecordset-class_5.cpp)]

[!code-cpp[NVC_MFCDatabase#22](../../mfc/codesnippet/cpp/crecordset-class_6.cpp)]

## <a name="getbookmark"></a> CRecordset::GetBookmark

Obtains the bookmark value for the current record.

```cpp
void GetBookmark(CDBVariant& varBookmark);
```

### Parameters

*varBookmark*<br/>
A reference to a [CDBVariant](../../mfc/reference/cdbvariant-class.md) object representing the bookmark on the current record.

### Remarks

To determine if bookmarks are supported on the recordset, call [CanBookmark](#canbookmark). To make bookmarks available if they are supported, you must set the `CRecordset::useBookmarks` option in the *dwOptions* parameter of the [Open](#open) member function.

> [!NOTE]
> If bookmarks are unsupported or unavailable, calling `GetBookmark` will result in an exception being thrown. Bookmarks are not supported on forward-only recordsets.

`GetBookmark` assigns the value of the bookmark for the current record to a `CDBVariant` object. To return to that record at any time after moving to a different record, call [SetBookmark](#setbookmark) with the corresponding `CDBVariant` object.

> [!NOTE]
> After certain recordset operations, bookmarks may no longer be valid. For example, if you call `GetBookmark` followed by `Requery`, you may not be able to return to the record with `SetBookmark`. Call [CDatabase::GetBookmarkPersistence](../../mfc/reference/cdatabase-class.md#getbookmarkpersistence) to check whether you can safely call `SetBookmark`.

For more information about bookmarks and recordset navigation, see the articles [Recordset: Bookmarks and Absolute Positions (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md) and [Recordset: Scrolling (ODBC)](../../data/odbc/recordset-scrolling-odbc.md).

## <a name="getdefaultconnect"></a> CRecordset::GetDefaultConnect

Called to get the default connection string.

```
virtual CString GetDefaultConnect();
```

### Return Value

A `CString` that contains the default connection string.

### Remarks

The framework calls this member function to get the default connection string for the data source on which the recordset is based. ClassWizard implements this function for you by identifying the same data source you use in ClassWizard to get information about tables and columns. You will probably find it convenient to rely on this default connection while developing your application. But the default connection may not be appropriate for users of your application. If that is the case, you should reimplement this function, discarding ClassWizard's version. For more information about connection strings, see the article [Data Source (ODBC)](../../data/odbc/data-source-odbc.md).

## <a name="getdefaultsql"></a> CRecordset::GetDefaultSQL

Called to get the default SQL string to execute.

```
virtual CString GetDefaultSQL();
```

### Return Value

A `CString` that contains the default SQL statement.

### Remarks

The framework calls this member function to get the default SQL statement on which the recordset is based. This might be a table name or a SQL **SELECT** statement.

You indirectly define the default SQL statement by declaring your recordset class with ClassWizard, and ClassWizard performs this task for you.

If you need the SQL statement string for your own use, call `GetSQL`, which returns the SQL statement used to select the recordset's records when it was opened. You can edit the default SQL string in your class's override of `GetDefaultSQL`. For example, you could specify a call to a predefined query using a **CALL** statement. (Note, however, that if you edit `GetDefaultSQL`, you also need to modify `m_nFields` to match the number of columns in the data source.)

For more information, see the article [Recordset: Declaring a Class for a Table (ODBC)](../../data/odbc/recordset-declaring-a-class-for-a-table-odbc.md).

> [!CAUTION]
> The table name will be empty if the framework could not identify a table name, if multiple table names were supplied, or if a **CALL** statement could not be interpreted. Note that when using a **CALL** statement, you must not insert whitespace between the curly brace and the **CALL** keyword, nor should you insert whitespace before the curly brace or before the **SELECT** keyword in a **SELECT** statement.

## <a name="getfieldvalue"></a> CRecordset::GetFieldValue

Retrieves field data in the current record.

```cpp
void GetFieldValue(
    LPCTSTR lpszName,
    CDBVariant& varValue,
    short nFieldType = DEFAULT_FIELD_TYPE);

void GetFieldValue(
    short nIndex,
    CDBVariant& varValue,
    short nFieldType = DEFAULT_FIELD_TYPE);

void GetFieldValue(
    short nIndex,
    CStringA& strValue);

void GetFieldValue(
    short nIndex,
    CStringW& strValue);
```

### Parameters

*lpszName*<br/>
The name of a field.

*varValu*e
A reference to a [CDBVariant](../../mfc/reference/cdbvariant-class.md) object that will store the field's value.

*nFieldType*<br/>
The ODBC C data type of the field. Using the default value, DEFAULT_FIELD_TYPE, forces `GetFieldValue` to determine the C data type from the SQL data type, based on the following table. Otherwise, you can specify the data type directly or choose a compatible data type; for example, you can store any data type into SQL_C_CHAR.

|C data type|SQL data type|
|-----------------|-------------------|
|SQL_C_BIT|SQL_BIT|
|SQL_C_UTINYINT|SQL_TINYINT|
|SQL_C_SSHORT|SQL_SMALLINT|
|SQL_C_SLONG|SQL_INTEGER|
|SQL_C_FLOAT|SQL_REAL|
|SQL_C_DOUBLE|SQL_FLOATSQL_DOUBLE|
|SQL_C_TIMESTAMP|SQL_DATESQL_TIMESQL_TIMESTAMP|
|SQL_C_CHAR|SQL_NUMERICSQL_DECIMALSQL_BIGINTSQL_CHARSQL_VARCHARSQL_LONGVARCHAR|
|SQL_C_BINARY|SQL_BINARYSQL_VARBINARYSQL_LONGVARBINARY|

For more information about ODBC data types, see the topics "SQL Data Types" and "C Data Types" in Appendix D of the Windows SDK.

*nIndex*<br/>
The zero-based index of the field.

*strValue*<br/>
A reference to a [CString](../../atl-mfc-shared/reference/cstringt-class.md) object that will store the field's value converted to text, regardless of the field's data type.

### Remarks

You can look up a field either by name or by index. You can store the field value in either a `CDBVariant` object or a `CString` object.

If you have implemented bulk row fetching, the current record is always positioned on the first record in a rowset. To use `GetFieldValue` on a record within a given rowset, you must first call the [SetRowsetCursorPosition](#setrowsetcursorposition) member function to move the cursor to the desired row within that rowset. Then call `GetFieldValue` for that row. To implement bulk row fetching, you must specify the `CRecordset::useMultiRowFetch` option of the *dwOptions* parameter in the [Open](#open) member function.

You can use `GetFieldValue` to dynamically fetch fields at run time rather than statically binding them at design time. For example, if you have declared a recordset object directly from `CRecordset`, you must use `GetFieldValue` to retrieve the field data; record field exchange (RFX), or bulk record field exchange (Bulk RFX), is not implemented.

> [!NOTE]
> If you declare a recordset object without deriving from `CRecordset`, do not have the ODBC Cursor Library loaded. The cursor library requires that the recordset have at least one bound column; however, when you use `CRecordset` directly, none of the columns are bound. The member functions [CDatabase::OpenEx](../../mfc/reference/cdatabase-class.md#openex) and [CDatabase::Open](../../mfc/reference/cdatabase-class.md#open) control whether the cursor library will be loaded.

`GetFieldValue` calls the ODBC API function `SQLGetData`. If your driver outputs the value SQL_NO_TOTAL for the actual length of the field value, `GetFieldValue` throws an exception. For more information about `SQLGetData`, see the Windows SDK.

### Example

The following sample code illustrates calls to `GetFieldValue` for a recordset object declared directly from `CRecordset`.

[!code-cpp[NVC_MFCDatabase#23](../../mfc/codesnippet/cpp/crecordset-class_7.cpp)]

> [!NOTE]
> Unlike the DAO class `CDaoRecordset`, `CRecordset` does not have a `SetFieldValue` member function. If you create an object directly from `CRecordset`, it is effectively read-only.

For more information about bulk row fetching, see the article [Recordset: Fetching Records in Bulk (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

## <a name="getodbcfieldcount"></a> CRecordset::GetODBCFieldCount

Retrieves the total number of fields in your recordset object.

```
short GetODBCFieldCount() const;
```

### Return Value

The number of fields in the recordset.

### Remarks

For more information about creating recordsets, see the article [Recordset: Creating and Closing Recordsets (ODBC)](../../data/odbc/recordset-creating-and-closing-recordsets-odbc.md).

## <a name="getodbcfieldinfo"></a> CRecordset::GetODBCFieldInfo

Obtains information about the fields in the recordset.

```cpp
void GetODBCFieldInfo(
    LPCTSTR lpszName,
    CODBCFieldInfo& fieldinfo);

void GetODBCFieldInfo(
    short nIndex,
    CODBCFieldInfo& fieldinfo);
```

### Parameters

*lpszName*<br/>
The name of a field.

*fieldinfo*<br/>
A reference to a `CODBCFieldInfo` structure.

*nIndex*<br/>
The zero-based index of the field.

### Remarks

One version of the function lets you look up a field by name. The other version lets you look up a field by index.

For a description about the information returned, see the [CODBCFieldInfo](../../mfc/reference/codbcfieldinfo-structure.md) structure.

For more information about creating recordsets, see the article [Recordset: Creating and Closing Recordsets (ODBC)](../../data/odbc/recordset-creating-and-closing-recordsets-odbc.md).

## <a name="getrecordcount"></a> CRecordset::GetRecordCount

Determines the size of the recordset.

```
long GetRecordCount() const;
```

### Return Value

The number of records in the recordset; 0 if the recordset contains no records; or -1 if the record count cannot be determined.

### Remarks

> [!CAUTION]
> The record count is maintained as a "high water mark," the highest-numbered record yet seen as the user moves through the records. The total number of records is only known after the user has moved beyond the last record. For performance reasons, the count is not updated when you call `MoveLast`. To count the records yourself, call `MoveNext` repeatedly until `IsEOF` returns nonzero. Adding a record via `CRecordset:AddNew` and `Update` increases the count; deleting a record via `CRecordset::Delete` decreases the count.

## <a name="getrowsetsize"></a> CRecordset::GetRowsetSize

Obtains the current setting for the number of rows you wish to retrieve during a given fetch.

```
DWORD GetRowsetSize() const;
```

### Return Value

The number of rows to retrieve during a given fetch.

### Remarks

If you are using bulk row fetching, the default rowset size when the recordset is opened is 25; otherwise, it is 1.

To implement bulk row fetching, you must specify the `CRecordset::useMultiRowFetch` option in the *dwOptions* parameter of the [Open](#open) member function. To change the setting for the rowset size, call [SetRowsetSize](#setrowsetsize).

For more information about bulk row fetching, see the article [Recordset: Fetching Records in Bulk (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

## <a name="getrowsfetched"></a> CRecordset::GetRowsFetched

Determines how many records were actually retrieved after a fetch.

```
DWORD GetRowsFetched() const;
```

### Return Value

The number of rows retrieved from the data source after a given fetch.

### Remarks

This is useful when you have implemented bulk row fetching. The rowset size normally indicates how many rows will be retrieved from a fetch; however, the total number of rows in the recordset also affects how many rows will be retrieved in a rowset. For example, if your recordset has 10 records with a rowset size setting of 4, then looping through the recordset by calling `MoveNext` will result in the final rowset having only 2 records.

To implement bulk row fetching, you must specify the `CRecordset::useMultiRowFetch` option in the *dwOptions* parameter of the [Open](#open) member function. To specify the rowset size, call [SetRowsetSize](#setrowsetsize).

For more information about bulk row fetching, see the article [Recordset: Fetching Records in Bulk (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

### Example

[!code-cpp[NVC_MFCDatabase#24](../../mfc/codesnippet/cpp/crecordset-class_8.cpp)]

## <a name="getrowstatus"></a> CRecordset::GetRowStatus

Obtains the status for a row in the current rowset.

```
WORD GetRowStatus(WORD wRow) const;
```

### Parameters

*wRow*<br/>
The one-based position of a row in the current rowset. This value can range from 1 to the size of the rowset.

### Return Value

A status value for the row. For details, see Remarks.

### Remarks

`GetRowStatus` returns a value that indicates either any change in status to the row since it was last retrieved from the data source, or that no row corresponding to *wRow* was fetched. The following table lists the possible return values.

|Status value|Description|
|------------------|-----------------|
|SQL_ROW_SUCCESS|The row is unchanged.|
|SQL_ROW_UPDATED|The row has been updated.|
|SQL_ROW_DELETED|The row has been deleted.|
|SQL_ROW_ADDED|The row has been added.|
|SQL_ROW_ERROR|The row is unretrievable due to an error.|
|SQL_ROW_NOROW|There is no row that corresponds to *wRow*.|

For more information, see the ODBC API function `SQLExtendedFetch` in the Windows SDK.

## <a name="getstatus"></a> CRecordset::GetStatus

Determines the index of the current record in the recordset and whether the last record has been seen.

```cpp
void GetStatus(CRecordsetStatus& rStatus) const;
```

### Parameters

*rStatus*<br/>
A reference to a `CRecordsetStatus` object. See the Remarks section for more information.

### Remarks

`CRecordset` attempts to track the index, but under some circumstances this may not be possible. See [GetRecordCount](#getrecordcount) for an explanation.

The `CRecordsetStatus` structure has the following form:

```cpp
struct CRecordsetStatus
{
    long m_lCurrentRecord;
    BOOL m_bRecordCountFinal;
};
```

The two members of `CRecordsetStatus` have the following meanings:

- `m_lCurrentRecord` Contains the zero-based index of the current record in the recordset, if known. If the index cannot be determined, this member contains AFX_CURRENT_RECORD_UNDEFINED (-2). If `IsBOF` is TRUE (empty recordset or attempt to scroll before first record), then `m_lCurrentRecord` is set to AFX_CURRENT_RECORD_BOF (-1). If on the first record, then it is set to 0, second record 1, and so on.

- `m_bRecordCountFinal` Nonzero if the total number of records in the recordset has been determined. Generally this must be accomplished by starting at the beginning of the recordset and calling `MoveNext` until `IsEOF` returns nonzero. If this member is zero, the record count as returned by `GetRecordCount`, if not -1, is only a "high water mark" count of the records.

## <a name="getsql"></a> CRecordset::GetSQL

Call this member function to get the SQL statement that was used to select the recordset's records when it was opened.

```
const CString& GetSQL() const;
```

### Return Value

A **`const`** reference to a `CString` that contains the SQL statement.

### Remarks

This will generally be a SQL **SELECT** statement. The string returned by `GetSQL` is read-only.

The string returned by `GetSQL` is typically different from any string you may have passed to the recordset in the *lpszSQL* parameter to the `Open` member function. This is because the recordset constructs a full SQL statement based on what you passed to `Open`, what you specified with ClassWizard, what you may have specified in the `m_strFilter` and `m_strSort` data members, and any parameters you may have specified. For details about how the recordset constructs this SQL statement, see the article [Recordset: How Recordsets Select Records (ODBC)](../../data/odbc/recordset-how-recordsets-select-records-odbc.md).

> [!NOTE]
> Call this member function only after calling [Open](#open).

## <a name="gettablename"></a> CRecordset::GetTableName

Gets the name of the SQL table on which the recordset's query is based.

```
const CString& GetTableName() const;
```

### Return Value

A **`const`** reference to a `CString` that contains the table name, if the recordset is based on a table; otherwise, an empty string.

### Remarks

`GetTableName` is only valid if the recordset is based on a table, not a join of multiple tables or a predefined query (stored procedure). The name is read-only.

> [!NOTE]
> Call this member function only after calling [Open](#open).

## <a name="isbof"></a> CRecordset::IsBOF

Returns nonzero if the recordset has been positioned before the first record. There is no current record.

```
BOOL IsBOF() const;
```

### Return Value

Nonzero if the recordset contains no records or if you have scrolled backward before the first record; otherwise 0.

### Remarks

Call this member function before you scroll from record to record to learn whether you have gone before the first record of the recordset. You can also use `IsBOF` along with `IsEOF` to determine whether the recordset contains any records or is empty. Immediately after you call `Open`, if the recordset contains no records, `IsBOF` returns nonzero.When you open a recordset that has at least one record, the first record is the current record and `IsBOF` returns 0.

If the first record is the current record and you call `MovePrev`, `IsBOF` will subsequently return nonzero. If `IsBOF` returns nonzero and you call `MovePrev`, an error occurs. If `IsBOF` returns nonzero, the current record is undefined, and any action that requires a current record will result in an error.

### Example

This example uses `IsBOF` and `IsEOF` to detect the limits of a recordset as the code scrolls through the recordset in both directions.

[!code-cpp[NVC_MFCDatabase#25](../../mfc/codesnippet/cpp/crecordset-class_9.cpp)]

## <a name="isdeleted"></a> CRecordset::IsDeleted

Determines whether the current record has been deleted.

```
BOOL IsDeleted() const;
```

### Return Value

Nonzero if the recordset is positioned on a deleted record; otherwise 0.

### Remarks

If you scroll to a record and `IsDeleted` returns TRUE (nonzero), then you must scroll to another record before you can perform any other recordset operations.

The result of `IsDeleted` depends on many factors, such as your recordset type, whether your recordset is updatable, whether you specified the `CRecordset::skipDeletedRecords` option when you opened the recordset, whether your driver packs deleted records, and whether there are multiple users.

For more information about `CRecordset::skipDeletedRecords` and driver packing, see the [Open](#open) member function.

> [!NOTE]
> If you have implemented bulk row fetching, you should not call `IsDeleted`. Instead, call the [GetRowStatus](#getrowstatus) member function. For more information about bulk row fetching, see the article [Recordset: Fetching Records in Bulk (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

## <a name="iseof"></a> CRecordset::IsEOF

Returns nonzero if the recordset has been positioned after the last record. There is no current record.

```
BOOL IsEOF() const;
```

### Return Value

Nonzero if the recordset contains no records or if you have scrolled beyond the last record; otherwise 0.

### Remarks

Call this member function as you scroll from record to record to learn whether you have gone beyond the last record of the recordset. You can also use `IsEOF` to determine whether the recordset contains any records or is empty. Immediately after you call `Open`, if the recordset contains no records, `IsEOF` returns nonzero. When you open a recordset that has at least one record, the first record is the current record and `IsEOF` returns 0.

If the last record is the current record when you call `MoveNext`, `IsEOF` will subsequently return nonzero. If `IsEOF` returns nonzero and you call `MoveNext`, an error occurs. If `IsEOF` returns nonzero, the current record is undefined, and any action that requires a current record will result in an error.

### Example

See the example for [IsBOF](#isbof).

## <a name="isfielddirty"></a> CRecordset::IsFieldDirty

Determines whether the specified field data member has been changed since [Edit](#edit) or [AddNew](#addnew) was called.

```
BOOL IsFieldDirty(void* pv);
```

### Parameters

*pv*<br/>
A pointer to the field data member whose status you want to check, or NULL to determine if any of the fields are dirty.

### Return Value

Nonzero if the specified field data member has changed since calling `AddNew` or `Edit`; otherwise 0.

### Remarks

The data in all dirty field data members will be transferred to the record on the data source when the current record is updated by a call to the [Update](#update) member function of `CRecordset` (following a call to `Edit` or `AddNew`).

> [!NOTE]
> This member function is not applicable on recordsets that are using bulk row fetching. If you have implemented bulk row fetching, then `IsFieldDirty` will always return FALSE and will result in a failed assertion. For more information about bulk row fetching, see the article [Recordset: Fetching Records in Bulk (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

Calling `IsFieldDirty` will reset the effects of preceding calls to [SetFieldDirty](#setfielddirty) since the dirty status of the field is re-evaluated. In the `AddNew` case, if the current field value differs from the pseudo null value, the field status is set dirty. In the `Edit` case, if the field value differs from the cached value, then the field status is set dirty.

`IsFieldDirty` is implemented through [DoFieldExchange](#dofieldexchange).

For more information on the dirty flag, see the article [Recordset: How Recordsets Select Records (ODBC)](../../data/odbc/recordset-how-recordsets-select-records-odbc.md).

## <a name="isfieldnull"></a> CRecordset::IsFieldNull

Returns nonzero if the specified field in the current record is Null (has no value).

```
BOOL IsFieldNull(void* pv);
```

### Parameters

*pv*<br/>
A pointer to the field data member whose status you want to check, or NULL to determine if any of the fields are Null.

### Return Value

Nonzero if the specified field data member is flagged as Null; otherwise 0.

### Remarks

Call this member function to determine whether the specified field data member of a recordset has been flagged as Null. (In database terminology, Null means "having no value" and is not the same as NULL in C++.) If a field data member is flagged as Null, it is interpreted as a column of the current record for which there is no value.

> [!NOTE]
> This member function is not applicable on recordsets that are using bulk row fetching. If you have implemented bulk row fetching, then `IsFieldNull` will always return FALSE and will result in a failed assertion. For more information about bulk row fetching, see the article [Recordset: Fetching Records in Bulk (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

`IsFieldNull` is implemented through [DoFieldExchange](#dofieldexchange).

## <a name="isfieldnullable"></a> CRecordset::IsFieldNullable

Returns nonzero if the specified field in the current record can be set to Null (having no value).

```
BOOL IsFieldNullable(void* pv);
```

### Parameters

*pv*<br/>
A pointer to the field data member whose status you want to check, or NULL to determine if any of the fields can be set to a Null value.

### Remarks

Call this member function to determine whether the specified field data member is "nullable" (can be set to a Null value; C++ NULL is not the same as Null, which, in database terminology, means "having no value").

> [!NOTE]
> If you have implemented bulk row fetching, you cannot call `IsFieldNullable`. Instead, call the [GetODBCFieldInfo](#getodbcfieldinfo) member function to determine whether a field can be set to a Null value. Note that you can always call `GetODBCFieldInfo`, regardless of whether you have implemented bulk row fetching. For more information about bulk row fetching, see the article [Recordset: Fetching Records in Bulk (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

A field that cannot be Null must have a value. If you attempt to set a such a field to Null when adding or updating a record, the data source rejects the addition or update, and [Update](#update) will throw an exception. The exception occurs when you call `Update`, not when you call [SetFieldNull](#setfieldnull).

Using NULL for the first argument of the function will apply the function only to `outputColumn` fields, not `param` fields. For instance, the call

[!code-cpp[NVC_MFCDatabase#26](../../mfc/codesnippet/cpp/crecordset-class_10.cpp)]

will set only `outputColumn` fields to NULL; `param` fields will be unaffected.

To work on `param` fields, you must supply the actual address of the individual `param` you want to work on, such as:

[!code-cpp[NVC_MFCDatabase#27](../../mfc/codesnippet/cpp/crecordset-class_11.cpp)]

This means you cannot set all `param` fields to NULL, as you can with `outputColumn` fields.

`IsFieldNullable` is implemented through [DoFieldExchange](#dofieldexchange).

## <a name="isopen"></a> CRecordset::IsOpen

Determines if the recordset is already open.

```
BOOL IsOpen() const;
```

### Return Value

Nonzero if the recordset object's [Open](#open) or [Requery](#requery) member function has previously been called and the recordset has not been closed; otherwise 0.

## <a name="m_hstmt"></a> CRecordset::m_hstmt

Contains a handle to the ODBC statement data structure, of type HSTMT, associated with the recordset.

### Remarks

Each query to an ODBC data source is associated with an HSTMT.

> [!CAUTION]
> Do not use `m_hstmt` before [Open](#open) has been called.

Normally you do not need to access the HSTMT directly, but you might need it for direct execution of SQL statements. The `ExecuteSQL` member function of class `CDatabase` provides an example of using `m_hstmt`.

## <a name="m_nfields"></a> CRecordset::m_nFields

Contains the number of field data members in the recordset class; that is, the number of columns selected by the recordset from the data source.

### Remarks

The constructor for the recordset class must initialize `m_nFields` with the correct number. If you have not implemented bulk row fetching, ClassWizard writes this initialization for you when you use it to declare your recordset class. You can also write it manually.

The framework uses this number to manage interaction between the field data members and the corresponding columns of the current record on the data source.

> [!CAUTION]
> This number must correspond to the number of "output columns" registered in `DoFieldExchange` or `DoBulkFieldExchange` after a call to [SetFieldType](../../mfc/reference/cfieldexchange-class.md#setfieldtype) with the parameter `CFieldExchange::outputColumn`.

You can bind columns dynamically, as explained in the article "Recordset: Dynamically Binding Data Columns." If you do so, you must increase the count in `m_nFields` to reflect the number of RFX or Bulk RFX function calls in your `DoFieldExchange` or `DoBulkFieldExchange` member function for the dynamically bound columns.

For more information, see the articles [Recordset: Dynamically Binding Data Columns (ODBC)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md) and [Recordset: Fetching Records in Bulk (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

### Example

See the article [Record Field Exchange: Using RFX](../../data/odbc/record-field-exchange-using-rfx.md).

## <a name="m_nparams"></a> CRecordset::m_nParams

Contains the number of parameter data members in the recordset class; that is, the number of parameters passed with the recordset's query.

### Remarks

If your recordset class has any parameter data members, the constructor for the class must initialize `m_nParams` with the correct number. The value of `m_nParams` defaults to 0. If you add parameter data members (which you must do manually) you must also manually add an initialization in the class constructor to reflect the number of parameters (which must be at least as large as the number of '' placeholders in your `m_strFilter` or `m_strSort` string).

The framework uses this number when it parameterizes the recordset's query.

> [!CAUTION]
> This number must correspond to the number of "params" registered in `DoFieldExchange` or `DoBulkFieldExchange` after a call to [SetFieldType](../../mfc/reference/cfieldexchange-class.md#setfieldtype) with a parameter value of `CFieldExchange::inputParam`, `CFieldExchange::param`, `CFieldExchange::outputParam`, or `CFieldExchange::inoutParam`.

### Example

  See the articles [Recordset: Parameterizing a Recordset (ODBC)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md) and [Record Field Exchange: Using RFX](../../data/odbc/record-field-exchange-using-rfx.md).

## <a name="m_pdatabase"></a> CRecordset::m_pDatabase

Contains a pointer to the `CDatabase` object through which the recordset is connected to a data source.

### Remarks

This variable is set in two ways. Typically, you pass a pointer to an already connected `CDatabase` object when you construct the recordset object. If you pass NULL instead, `CRecordset` creates a `CDatabase` object for you and connects it. In either case, `CRecordset` stores the pointer in this variable.

Normally you will not directly need to use the pointer stored in `m_pDatabase`. If you write your own extensions to `CRecordset`, however, you might need to use the pointer. For example, you might need the pointer if you throw your own `CDBException`s. Or you might need it if you need to do something using the same `CDatabase` object, such as running transactions, setting timeouts, or calling the `ExecuteSQL` member function of class `CDatabase` to execute SQL statements directly.

## <a name="m_strfilter"></a> CRecordset::m_strFilter

After you construct the recordset object, but before you call its `Open` member function, use this data member to store a `CString` containing a SQL **WHERE** clause.

### Remarks

The recordset uses this string to constrain (or filter) the records it selects during the `Open` or `Requery` call. This is useful for selecting a subset of records, such as "all salespersons based in California" ("state = CA"). The ODBC SQL syntax for a **WHERE** clause is

`WHERE search-condition`

Note that you do not include the **WHERE** keyword in your string. The framework supplies it.

You can also parameterize your filter string by placing '' placeholders in it, declaring a parameter data member in your class for each placeholder, and passing parameters to the recordset at run time. This lets you construct the filter at run time. For more information, see the article [Recordset: Parameterizing a Recordset (ODBC)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md).

For more information about SQL **WHERE** clauses, see the article [SQL](../../data/odbc/sql.md). For more information about selecting and filtering records, see the article [Recordset: Filtering Records (ODBC)](../../data/odbc/recordset-filtering-records-odbc.md).

### Example

[!code-cpp[NVC_MFCDatabase#30](../../mfc/codesnippet/cpp/crecordset-class_12.cpp)]

## <a name="m_strsort"></a> CRecordset::m_strSort

After you construct the recordset object, but before you call its `Open` member function, use this data member to store a `CString` containing a SQL **ORDER BY** clause.

### Remarks

The recordset uses this string to sort the records it selects during the `Open` or `Requery` call. You can use this feature to sort a recordset on one or more columns. The ODBC SQL syntax for an **ORDER BY** clause is

`ORDER BY sort-specification [, sort-specification]...`

where a sort-specification is an integer or a column name. You can also specify ascending or descending order (the order is ascending by default) by appending "ASC" or "DESC" to the column list in the sort string. The selected records are sorted first by the first column listed, then by the second, and so on. For example, you might order a "Customers" recordset by last name, then first name. The number of columns you can list depends on the data source. For more information, see the Windows SDK.

Note that you do not include the **ORDER BY** keyword in your string. The framework supplies it.

For more information about SQL clauses, see the article [SQL](../../data/odbc/sql.md). For more information about sorting records, see the article [Recordset: Sorting Records (ODBC)](../../data/odbc/recordset-sorting-records-odbc.md).

### Example

[!code-cpp[NVC_MFCDatabase#31](../../mfc/codesnippet/cpp/crecordset-class_13.cpp)]

## <a name="move"></a> CRecordset::Move

Moves the current record pointer within the recordset, either forward or backward.

```
virtual void Move(
    long nRows,
    WORD wFetchType = SQL_FETCH_RELATIVE);
```

### Parameters

*nRows*<br/>
The number of rows to move forward or backward. Positive values move forward, toward the end of the recordset. Negative values move backward, toward the beginning.

*wFetchType*<br/>
Determines the rowset that `Move` will fetch. For details, see Remarks.

### Remarks

If you pass a value of 0 for *nRows*, `Move` refreshes the current record; `Move` will end any current `AddNew` or `Edit` mode, and will restore the current record's value before `AddNew` or `Edit` was called.

> [!NOTE]
> When you move through a recordset, you cannot skip deleted records. See [CRecordset::IsDeleted](#isdeleted) for more information. When you open a `CRecordset` with the `skipDeletedRecords` option set, `Move` asserts if the *nRows* parameter is 0. This behavior prevents the refresh of rows that are deleted by other client applications using the same data. See the *dwOption* parameter in [Open](#open) for a description of `skipDeletedRecords`.

`Move` repositions the recordset by rowsets. Based on the values for *nRows* and *wFetchType*, `Move` fetches the appropriate rowset and then makes the first record in that rowset the current record. If you have not implemented bulk row fetching, then the rowset size is always 1. When fetching a rowset, `Move` directly calls the [CheckRowsetError](#checkrowseterror) member function to handle any errors resulting from the fetch.

Depending on the values you pass, `Move` is equivalent to other `CRecordset` member functions. In particular, the value of *wFetchType* may indicate a member function that is more intuitive and often the preferred method for moving the current record.

The following table lists the possible values for *wFetchType*, the rowset that `Move` will fetch based on *wFetchType* and *nRows*, and any equivalent member function corresponding to *wFetchType*.

|wFetchType|Fetched rowset|Equivalent member function|
|----------------|--------------------|--------------------------------|
|SQL_FETCH_RELATIVE (the default value)|The rowset starting *nRows* row(s) from the first row in the current rowset.||
|SQL_FETCH_NEXT|The next rowset; *nRows* is ignored.|[MoveNext](#movenext)|
|SQL_FETCH_PRIOR|The previous rowset; *nRows* is ignored.|[MovePrev](#moveprev)|
|SQL_FETCH_FIRST|The first rowset in the recordset; *nRows* is ignored.|[MoveFirst](#movefirst)|
|SQL_FETCH_LAST|The last complete rowset in the recordset; *nRows* is ignored.|[MoveLast](#movelast)|
|SQL_FETCH_ABSOLUTE|If *nRows* > 0, the rowset starting *nRows* row(s) from the beginning of the recordset. If *nRows* < 0, the rowset starting *nRows* row(s) from the end of the recordset. If *nRows* = 0, then a beginning-of-file (BOF) condition is returned.|[SetAbsolutePosition](#setabsoluteposition)|
|SQL_FETCH_BOOKMARK|The rowset starting at the row whose bookmark value corresponds to *nRows*.|[SetBookmark](#setbookmark)|

> [!NOTE]
> For forward-only recordsets, `Move` is only valid with a value of SQL_FETCH_NEXT for *wFetchType*.

> [!CAUTION]
> Calling `Move` throws an exception if the recordset has no records. To determine whether the recordset has any records, call [IsBOF](#isbof) and [IsEOF](#iseof).

> [!NOTE]
> If you have scrolled past the beginning or end of the recordset (`IsBOF` or `IsEOF` returns nonzero), calling a `Move` function will possibly throw a `CDBException`. For example, if `IsEOF` returns nonzero and `IsBOF` does not, then `MoveNext` will throw an exception, but `MovePrev` will not.

> [!NOTE]
> If you call `Move` while the current record is being updated or added, the updates are lost without warning.

For more information about recordset navigation, see the articles [Recordset: Scrolling (ODBC)](../../data/odbc/recordset-scrolling-odbc.md) and [Recordset: Bookmarks and Absolute Positions (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md). For more information about bulk row fetching, see the article [Recordset: Fetching Records in Bulk (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md). For related information, see the ODBC API function `SQLExtendedFetch` in the Windows SDK.

### Example

[!code-cpp[NVC_MFCDatabase#28](../../mfc/codesnippet/cpp/crecordset-class_14.cpp)]

## <a name="movefirst"></a> CRecordset::MoveFirst

Makes the first record in the first rowset the current record.

```cpp
void MoveFirst();
```

### Remarks

Regardless of whether bulk row fetching has been implemented, this will always be the first record in the recordset.

You do not have to call `MoveFirst` immediately after you open the recordset. At that time, the first record (if any) is automatically the current record.

> [!NOTE]
> This member function is not valid for forward-only recordsets.

> [!NOTE]
> When you move through a recordset, you cannot skip deleted records. See the [IsDeleted](#isdeleted) member function for details.

> [!CAUTION]
> Calling any of the `Move` functions throws an exception if the recordset has no records. To determine whether the recordset has any records, call `IsBOF` and `IsEOF`.

> [!NOTE]
> If you call any of the `Move` functions while the current record is being updated or added, the updates are lost without warning.

For more information about recordset navigation, see the articles [Recordset: Scrolling (ODBC)](../../data/odbc/recordset-scrolling-odbc.md) and [Recordset: Bookmarks and Absolute Positions (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md). For more information about bulk row fetching, see the article [Recordset: Fetching Records in Bulk (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

### Example

  See the example for [IsBOF](#isbof).

## <a name="movelast"></a> CRecordset::MoveLast

Makes the first record in the last complete rowset the current record.

```cpp
void MoveLast();
```

### Remarks

If you have not implemented bulk row fetching, your recordset has a rowset size of 1, so `MoveLast` simply moves to the last record in the recordset.

> [!NOTE]
> This member function is not valid for forward-only recordsets.

> [!NOTE]
> When you move through a recordset, you cannot skip deleted records. See the [IsDeleted](#isdeleted) member function for details.

> [!CAUTION]
> Calling any of the `Move` functions throws an exception if the recordset has no records. To determine whether the recordset has any records, call `IsBOF` and `IsEOF`.

> [!NOTE]
> If you call any of the `Move` functions while the current record is being updated or added, the updates are lost without warning.

For more information about recordset navigation, see the articles [Recordset: Scrolling (ODBC)](../../data/odbc/recordset-scrolling-odbc.md) and [Recordset: Bookmarks and Absolute Positions (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md). For more information about bulk row fetching, see the article [Recordset: Fetching Records in Bulk (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

### Example

  See the example for [IsBOF](#isbof).

## <a name="movenext"></a> CRecordset::MoveNext

Makes the first record in the next rowset the current record.

```cpp
void MoveNext();
```

### Remarks

If you have not implemented bulk row fetching, your recordset has a rowset size of 1, so `MoveNext` simply moves to the next record.

> [!NOTE]
> When you move through a recordset, you cannot skip deleted records. See the [IsDeleted](#isdeleted) member function for details.

> [!CAUTION]
> Calling any of the `Move` functions throws an exception if the recordset has no records. To determine whether the recordset has any records, call `IsBOF` and `IsEOF`.

> [!NOTE]
> It is also recommended that you call `IsEOF` before calling `MoveNext`. For example, if you have scrolled past the end of the recordset, `IsEOF` will return nonzero; a subsequent call to `MoveNext` would throw an exception.

> [!NOTE]
> If you call any of the `Move` functions while the current record is being updated or added, the updates are lost without warning.

For more information about recordset navigation, see the articles [Recordset: Scrolling (ODBC)](../../data/odbc/recordset-scrolling-odbc.md) and [Recordset: Bookmarks and Absolute Positions (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md). For more information about bulk row fetching, see the article [Recordset: Fetching Records in Bulk (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

### Example

  See the example for [IsBOF](#isbof).

## <a name="moveprev"></a> CRecordset::MovePrev

Makes the first record in the previous rowset the current record.

```cpp
void MovePrev();
```

### Remarks

If you have not implemented bulk row fetching, your recordset has a rowset size of 1, so `MovePrev` simply moves to the previous record.

> [!NOTE]
> This member function is not valid for forward-only recordsets.

> [!NOTE]
> When you move through a recordset, you cannot skip deleted records. See the [IsDeleted](#isdeleted) member function for details.

> [!CAUTION]
> Calling any of the `Move` functions throws an exception if the recordset has no records. To determine whether the recordset has any records, call `IsBOF` and `IsEOF`.

> [!NOTE]
> It is also recommended that you call `IsBOF` before calling `MovePrev`. For example, if you have scrolled ahead of the beginning of the recordset, `IsBOF` will return nonzero; a subsequent call to `MovePrev` would throw an exception.

> [!NOTE]
> If you call any of the `Move` functions while the current record is being updated or added, the updates are lost without warning.

For more information about recordset navigation, see the articles [Recordset: Scrolling (ODBC)](../../data/odbc/recordset-scrolling-odbc.md) and [Recordset: Bookmarks and Absolute Positions (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md). For more information about bulk row fetching, see the article [Recordset: Fetching Records in Bulk (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

### Example

  See the example for [IsBOF](#isbof).

## <a name="onsetoptions"></a> CRecordset::OnSetOptions

Called to set options (used on selection) for the specified ODBC statement.

```
virtual void OnSetOptions(HSTMT hstmt);
```

### Parameters

*hstmt*<br/>
The HSTMT of the ODBC statement whose options are to be set.

### Remarks

Call `OnSetOptions` to set options (used on selection) for the specified ODBC statement. The framework calls this member function to set initial options for the recordset. `OnSetOptions` determines the data source's support for scrollable cursors and for cursor concurrency and sets the recordset's options accordingly. (Whereas `OnSetOptions` is used for selection operations, `OnSetUpdateOptions` is used for update operations.)

Override `OnSetOptions` to set options specific to the driver or the data source. For example, if your data source supports opening for exclusive access, you might override `OnSetOptions` to take advantage of that ability.

For more information about cursors, see the article [ODBC](../../data/odbc/odbc-basics.md).

## <a name="onsetupdateoptions"></a> CRecordset::OnSetUpdateOptions

Called to set options (used on update) for the specified ODBC statement.

```
virtual void OnSetUpdateOptions(HSTMT hstmt);
```

### Parameters

*hstmt*<br/>
The HSTMT of the ODBC statement whose options are to be set.

### Remarks

Call `OnSetUpdateOptions` to set options (used on update) for the specified ODBC statement. The framework calls this member function after it creates an HSTMT to update records in a recordset. (Whereas `OnSetOptions` is used for selection operations, `OnSetUpdateOptions` is used for update operations.) `OnSetUpdateOptions` determines the data source's support for scrollable cursors and for cursor concurrency and sets the recordset's options accordingly.

Override `OnSetUpdateOptions` to set options of an ODBC statement before that statement is used to access a database.

For more information about cursors, see the article [ODBC](../../data/odbc/odbc-basics.md).

## <a name="open"></a> CRecordset::Open

Opens the recordset by retrieving the table or performing the query that the recordset represents.

```
virtual BOOL Open(
    UINT nOpenType = AFX_DB_USE_DEFAULT_TYPE,
    LPCTSTR lpszSQL = NULL,
    DWORD dwOptions = none);
```

### Parameters

*nOpenType*<br/>
Accept the default value, AFX_DB_USE_DEFAULT_TYPE, or use one of the following values from the `enum OpenType`:

- `CRecordset::dynaset` A recordset with bi-directional scrolling. The membership and ordering of the records are determined when the recordset is opened, but changes made by other users to the data values are visible following a fetch operation. Dynasets are also known as keyset-driven recordsets.

- `CRecordset::snapshot` A static recordset with bi-directional scrolling. The membership and ordering of the records are determined when the recordset is opened; the data values are determined when the records are fetched. Changes made by other users are not visible until the recordset is closed and then reopened.

- `CRecordset::dynamic` A recordset with bi-directional scrolling. Changes made by other users to the membership, ordering, and data values are visible following a fetch operation. Note that many ODBC drivers do not support this type of recordset.

- `CRecordset::forwardOnly` A read-only recordset with only forward scrolling.

   For `CRecordset`, the default value is `CRecordset::snapshot`. The default-value mechanism allows the Visual C++ wizards to interact with both ODBC `CRecordset` and DAO `CDaoRecordset`, which have different defaults.

For more information about these recordset types, see the article [Recordset (ODBC)](../../data/odbc/recordset-odbc.md). For related information, see the article "Using Block and Scrollable Cursors" in the Windows SDK.

> [!CAUTION]
> If the requested type is not supported, the framework throws an exception.

*lpszSQL*<br/>
A string pointer containing one of the following:

- A NULL pointer.

- The name of a table.

- A SQL **SELECT** statement (optionally with a SQL **WHERE** or **ORDER BY** clause).

- A **CALL** statement specifying the name of a predefined query (stored procedure). Be careful that you do not insert whitespace between the curly brace and the **CALL** keyword.

For more information about this string, see the table and the discussion of ClassWizard's role under the [Remarks](#remarks) section.

> [!NOTE]
> The order of the columns in your result set must match the order of the RFX or Bulk RFX function calls in your [DoFieldExchange](#dofieldexchange) or [DoBulkFieldExchange](#dobulkfieldexchange) function override.

*dwOptions*<br/>
A bitmask which can specify a combination of the values listed below. Some of these are mutually exclusive. The default value is **none**.

- `CRecordset::none` No options set. This parameter value is mutually exclusive with all other values. By default, the recordset can be updated with [Edit](#edit) or [Delete](#delete) and allows appending new records with [AddNew](#addnew). Updatability depends on the data source as well as on the *nOpenType* option you specify. Optimization for bulk additions is not available. Bulk row fetching will not be implemented. Deleted records will not be skipped during recordset navigation. Bookmarks are not available. Automatic dirty field checking is implemented.

- `CRecordset::appendOnly` Do not allow `Edit` or `Delete` on the recordset. Allow `AddNew` only. This option is mutually exclusive with `CRecordset::readOnly`.

- `CRecordset::readOnly` Open the recordset as read-only. This option is mutually exclusive with `CRecordset::appendOnly`.

- `CRecordset::optimizeBulkAdd` Use a prepared SQL statement to optimize adding many records at one time. Applies only if you are not using the ODBC API function `SQLSetPos` to update the recordset. The first update determines which fields are marked dirty. This option is mutually exclusive with `CRecordset::useMultiRowFetch`.

- `CRecordset::useMultiRowFetch` Implement bulk row fetching to allow multiple rows to be retrieved in a single fetch operation. This is an advanced feature designed to improve performance; however, bulk record field exchange is not supported by ClassWizard. This option is mutually exclusive with `CRecordset::optimizeBulkAdd`. Note that if you specify `CRecordset::useMultiRowFetch`, then the option `CRecordset::noDirtyFieldCheck` will be turned on automatically (double buffering will not be available); on forward-only recordsets, the option `CRecordset::useExtendedFetch` will be turned on automatically. For more information about bulk row fetching, see the article [Recordset: Fetching Records in Bulk (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

- `CRecordset::skipDeletedRecords` Skip all deleted records when navigating through the recordset. This will slow performance in certain relative fetches. This option is not valid on forward-only recordsets. If you call [Move](#move) with the *nRows* parameter set to 0, and the `CRecordset::skipDeletedRecords` option set, `Move` will assert. Note that `CRecordset::skipDeletedRecords` is similar to *driver packing*, which means that deleted rows are removed from the recordset. However, if your driver packs records, then it will skip only those records that you delete; it will not skip records deleted by other users while the recordset is open. `CRecordset::skipDeletedRecords` will skip rows deleted by other users.

- `CRecordset::useBookmarks` May use bookmarks on the recordset, if supported. Bookmarks slow data retrieval but improve performance for data navigation. Not valid on forward-only recordsets. For more information, see the article [Recordset: Bookmarks and Absolute Positions (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md).

- `CRecordset::noDirtyFieldCheck` Turn off automatic dirty field checking (double buffering). This will improve performance; however, you must manually mark fields as dirty by calling the `SetFieldDirty` and `SetFieldNull` member functions.Note that double buffering in class `CRecordset` is similar to double buffering in class `CDaoRecordset`. However, in `CRecordset`, you cannot enable double buffering on individual fields; you either enable it for all fields or disable it for all fields. Note that if you specify the option `CRecordset::useMultiRowFetch`, then `CRecordset::noDirtyFieldCheck` will be turned on automatically; however, `SetFieldDirty` and `SetFieldNull` cannot be used on recordsets that implement bulk row fetching.

- `CRecordset::executeDirect` Do not use a prepared SQL statement. For improved performance, specify this option if the `Requery` member function will never be called.

- `CRecordset::useExtendedFetch` Implement `SQLExtendedFetch` instead of `SQLFetch`. This is designed for implementing bulk row fetching on forward-only recordsets. If you specify the option `CRecordset::useMultiRowFetch` on a forward-only recordset, then `CRecordset::useExtendedFetch` will be turned on automatically.

- `CRecordset::userAllocMultiRowBuffers` The user will allocate storage buffers for the data. Use this option in conjunction with `CRecordset::useMultiRowFetch` if you want to allocate your own storage; otherwise, the framework will automatically allocate the necessary storage. For more information, see the article [Recordset: Fetching Records in Bulk (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md). Note that specifying `CRecordset::userAllocMultiRowBuffers` without specifying `CRecordset::useMultiRowFetch` will result in a failed assertion.

### Return Value

Nonzero if the `CRecordset` object was successfully opened; otherwise 0 if [CDatabase::Open](../../mfc/reference/cdatabase-class.md#open) (if called) returns 0.

### Remarks

You must call this member function to run the query defined by the recordset. Before calling `Open`, you must construct the recordset object.

This recordset's connection to the data source depends on how you construct the recordset before calling `Open`. If you pass a [CDatabase](../../mfc/reference/cdatabase-class.md) object to the recordset constructor that has not been connected to the data source, this member function uses [GetDefaultConnect](#getdefaultconnect) to attempt to open the database object. If you pass NULL to the recordset constructor, the constructor constructs a `CDatabase` object for you, and `Open` attempts to connect the database object. For details on closing the recordset and the connection under these varying circumstances, see [Close](#close).

> [!NOTE]
> Access to a data source through a `CRecordset` object is always shared. Unlike the `CDaoRecordset` class, you cannot use a `CRecordset` object to open a data source with exclusive access.

When you call `Open`, a query, usually a SQL **SELECT** statement, selects records based on criteria shown in the following table.

|Value of the lpszSQL parameter|Records selected are determined by|Example|
|------------------------------------|----------------------------------------|-------------|
|NULL|The string returned by `GetDefaultSQL`.||
|SQL table name|All columns of the table-list in `DoFieldExchange` or `DoBulkFieldExchange`.|`"Customer"`|
|Predefined query (stored procedure) name|The columns the query is defined to return.|`"{call OverDueAccts}"`|
|**SELECT** column-list **FROM** table-list|The specified columns from the specified table(s).|`"SELECT CustId, CustName FROM`<br /><br /> `Customer"`|

> [!CAUTION]
> Be careful that you do not insert extra whitespace in your SQL string. For example, if you insert whitespace between the curly brace and the **CALL** keyword, MFC will misinterpret the SQL string as a table name and incorporate it into a **SELECT** statement, which will result in an exception being thrown. Similarly, if your predefined query uses an output parameter, do not insert whitespace between the curly brace and the '' symbol. Finally, you must not insert whitespace before the curly brace in a **CALL** statement or before the **SELECT** keyword in a **SELECT** statment.

The usual procedure is to pass NULL to `Open`; in this case, `Open` calls [GetDefaultSQL](#getdefaultsql). If you are using a derived `CRecordset` class, `GetDefaultSQL` gives the table name(s) you specified in ClassWizard. You can instead specify other information in the `lpszSQL` parameter.

Whatever you pass, `Open` constructs a final SQL string for the query (the string may have SQL **WHERE** and **ORDER BY** clauses appended to the `lpszSQL` string you passed) and then executes the query. You can examine the constructed string by calling [GetSQL](#getsql) after calling `Open`. For additional details about how the recordset constructs a SQL statement and selects records, see the article [Recordset: How Recordsets Select Records (ODBC)](../../data/odbc/recordset-how-recordsets-select-records-odbc.md).

The field data members of your recordset class are bound to the columns of the data selected. If any records are returned, the first record becomes the current record.

If you want to set options for the recordset, such as a filter or sort, specify these after you construct the recordset object but before you call `Open`. If you want to refresh the records in the recordset after the recordset is already open, call [Requery](#requery).

For more information, including additional examples, see the articles [Recordset (ODBC)](../../data/odbc/recordset-odbc.md), [Recordset: How Recordsets Select Records (ODBC)](../../data/odbc/recordset-how-recordsets-select-records-odbc.md), and [Recordset: Creating and Closing Recordsets (ODBC)](../../data/odbc/recordset-creating-and-closing-recordsets-odbc.md).

### Example

The following code examples show different forms of the `Open` call.

[!code-cpp[NVC_MFCDatabase#16](../../mfc/codesnippet/cpp/crecordset-class_15.cpp)]

## <a name="refreshrowset"></a> CRecordset::RefreshRowset

Updates the data and the status for a row in the current rowset.

```cpp
void RefreshRowset(
    WORD wRow,
    WORD wLockType = SQL_LOCK_NO_CHANGE);
```

### Parameters

*wRow*<br/>
The one-based position of a row in the current rowset. This value can range from zero to the size of the rowset.

*wLockType*<br/>
A value indicating how to lock the row after it has been refreshed. For details, see Remarks.

### Remarks

If you pass a value of zero for *wRow*, then every row in the rowset will be refreshed.

To use `RefreshRowset`, you must have implemented bulk row fetching by specifying the `CRecordset::useMulitRowFetch` option in the [Open](#open) member function.

`RefreshRowset` calls the ODBC API function `SQLSetPos`. The *wLockType* parameter specifies the lock state of the row after `SQLSetPos` has executed. The following table describes the possible values for *wLockType*.

|wLockType|Description|
|---------------|-----------------|
|SQL_LOCK_NO_CHANGE (the default value)|The driver or data source ensures that the row is in the same locked or unlocked state as it was before `RefreshRowset` was called.|
|SQL_LOCK_EXCLUSIVE|The driver or data source locks the row exclusively. Not all data sources support this type of lock.|
|SQL_LOCK_UNLOCK|The driver or data source unlocks the row. Not all data sources support this type of lock.|

For more information about `SQLSetPos`, see the Windows SDK. For more information about bulk row fetching, see the article [Recordset: Fetching Records in Bulk (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

## <a name="requery"></a> CRecordset::Requery

Rebuilds (refreshes) a recordset.

```
virtual BOOL Requery();
```

### Return Value

Nonzero if the recordset was successfully rebuilt; otherwise 0.

### Remarks

If any records are returned, the first record becomes the current record.

In order for the recordset to reflect the additions and deletions that you or other users are making to the data source, you must rebuild the recordset by calling `Requery`. If the recordset is a dynaset, it automatically reflects updates that you or other users make to its existing records (but not additions). If the recordset is a snapshot, you must call `Requery` to reflect edits by other users as well as additions and deletions.

For either a dynaset or a snapshot, call `Requery` any time you want to rebuild the recordset using a new filter or sort, or new parameter values. Set the new filter or sort property by assigning new values to `m_strFilter` and `m_strSort` before calling `Requery`. Set new parameters by assigning new values to parameter data members before calling `Requery`. If the filter and sort strings are unchanged, you can reuse the query, which improves performance.

If the attempt to rebuild the recordset fails, the recordset is closed. Before you call `Requery`, you can determine whether the recordset can be requeried by calling the `CanRestart` member function. `CanRestart` does not guarantee that `Requery` will succeed.

> [!CAUTION]
> Call `Requery` only after you have called [Open](#open).

### Example

This example rebuilds a recordset to apply a different sort order.

[!code-cpp[NVC_MFCDatabase#29](../../mfc/codesnippet/cpp/crecordset-class_16.cpp)]

## <a name="setabsoluteposition"></a> CRecordset::SetAbsolutePosition

Positions the recordset on the record corresponding to the specified record number.

```cpp
void SetAbsolutePosition(long nRows);
```

### Parameters

*nRows*<br/>
The one-based ordinal position for the current record in the recordset.

### Remarks

`SetAbsolutePosition` moves the current record pointer based on this ordinal position.

> [!NOTE]
> This member function is not valid on forward-only recordsets.

For ODBC recordsets, an absolute position setting of 1 refers to the first record in the recordset; a setting of 0 refers to the beginning-of-file (BOF) position.

You can also pass negative values to `SetAbsolutePosition`. In this case the recordset's position is evaluated from the end of the recordset. For example, `SetAbsolutePosition( -1 )` moves the current record pointer to the last record in the recordset.

> [!NOTE]
> Absolute position is not intended to be used as a surrogate record number. Bookmarks are still the recommended way of retaining and returning to a given position, since a record's position changes when preceding records are deleted. In addition, you cannot be assured that a given record will have the same absolute position if the recordset is re-created again because the order of individual records within a recordset is not guaranteed unless it is created with a SQL statement using an **ORDER BY** clause.

For more information about recordset navigation and bookmarks, see the articles [Recordset: Scrolling (ODBC)](../../data/odbc/recordset-scrolling-odbc.md) and [Recordset: Bookmarks and Absolute Positions (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md).

## <a name="setbookmark"></a> CRecordset::SetBookmark

Positions the recordset on the record containing the specified bookmark.

```cpp
void SetBookmark(const CDBVariant& varBookmark);
```

### Parameters

*varBookmark*<br/>
A reference to a [CDBVariant](../../mfc/reference/cdbvariant-class.md) object containing the bookmark value for a specific record.

### Remarks

To determine if bookmarks are supported on the recordset, call [CanBookmark](#canbookmark). To make bookmarks available if they are supported, you must set the `CRecordset::useBookmarks` option in the *dwOptions* parameter of the [Open](#open) member function.

> [!NOTE]
> If bookmarks are unsupported or unavailable, calling `SetBookmark` will result in an exception being thrown. Bookmarks are not supported on forward-only recordsets.

To first retrieve the bookmark for the current record, call [GetBookmark](#getbookmark), which saves the bookmark value to a `CDBVariant` object. Later, you can return to that record by calling `SetBookmark` using the saved bookmark value.

> [!NOTE]
> After certain recordset operations, you should check the bookmark persistence before calling `SetBookmark`. For example, if you retrieve a bookmark with `GetBookmark` and then call `Requery`, the bookmark may no longer be valid. Call [CDatabase::GetBookmarkPersistence](../../mfc/reference/cdatabase-class.md#getbookmarkpersistence) to check whether you can safely call `SetBookmark`.

For more information about bookmarks and recordset navigation, see the articles [Recordset: Bookmarks and Absolute Positions (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md) and [Recordset: Scrolling (ODBC)](../../data/odbc/recordset-scrolling-odbc.md).

## <a name="setfielddirty"></a> CRecordset::SetFieldDirty

Flags a field data member of the recordset as changed or as unchanged.

```cpp
void SetFieldDirty(void* pv, BOOL bDirty = TRUE);
```

### Parameters

*pv*<br/>
Contains the address of a field data member in the recordset or NULL. If NULL, all field data members in the recordset are flagged. (C++ NULL is not the same as Null in database terminology, which means "having no value.")

*bDirty*<br/>
TRUE if the field data member is to be flagged as "dirty" (changed). Otherwise FALSE if the field data member is to be flagged as "clean" (unchanged).

### Remarks

Marking fields as unchanged ensures the field is not updated and results in less SQL traffic.

> [!NOTE]
> This member function is not applicable on recordsets that are using bulk row fetching. If you have implemented bulk row fetching, then `SetFieldDirty` will result in a failed assertion. For more information about bulk row fetching, see the article [Recordset: Fetching Records in Bulk (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

The framework marks changed field data members to ensure they will be written to the record on the data source by the record field exchange (RFX) mechanism. Changing the value of a field generally sets the field dirty automatically, so you will seldom need to call `SetFieldDirty` yourself, but you might sometimes want to ensure that columns will be explicitly updated or inserted regardless of what value is in the field data member.

> [!CAUTION]
> Call this member function only after you have called [Edit](#edit) or [AddNew](#addnew).

Using NULL for the first argument of the function will apply the function only to `outputColumn` fields, not `param` fields. For instance, the call

[!code-cpp[NVC_MFCDatabase#26](../../mfc/codesnippet/cpp/crecordset-class_10.cpp)]

will set only `outputColumn` fields to NULL; `param` fields will be unaffected.

To work on `param` fields, you must supply the actual address of the individual `param` you want to work on, such as:

[!code-cpp[NVC_MFCDatabase#27](../../mfc/codesnippet/cpp/crecordset-class_11.cpp)]

This means you cannot set all `param` fields to NULL, as you can with `outputColumn` fields.

## <a name="setfieldnull"></a> CRecordset::SetFieldNull

Flags a field data member of the recordset as Null (specifically having no value) or as non-Null.

```cpp
void SetFieldNull(void* pv, BOOL bNull = TRUE);
```

### Parameters

*pv*<br/>
Contains the address of a field data member in the recordset or NULL. If NULL, all field data members in the recordset are flagged. (C++ NULL is not the same as Null in database terminology, which means "having no value.")

*bNull*<br/>
Nonzero if the field data member is to be flagged as having no value (Null). Otherwise 0 if the field data member is to be flagged as non-Null.

### Remarks

When you add a new record to a recordset, all field data members are initially set to a Null value and flagged as "dirty" (changed). When you retrieve a record from a data source, its columns either already have values or are Null.

> [!NOTE]
> Do not call this member function on recordsets that are using bulk row fetching. If you have implemented bulk row fetching, calling `SetFieldNull` results in a failed assertion. For more information about bulk row fetching, see the article [Recordset: Fetching Records in Bulk (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

If you specifically wish to designate a field of the current record as not having a value, call `SetFieldNull` with *bNull* set to TRUE to flag it as Null. If a field was previously marked Null and you now want to give it a value, simply set its new value. You do not have to remove the Null flag with `SetFieldNull`. To determine whether the field is allowed to be Null, call `IsFieldNullable`.

> [!CAUTION]
> Call this member function only after you have called [Edit](#edit) or [AddNew](#addnew).

Using NULL for the first argument of the function will apply the function only to `outputColumn` fields, not `param` fields. For instance, the call

[!code-cpp[NVC_MFCDatabase#26](../../mfc/codesnippet/cpp/crecordset-class_10.cpp)]

will set only `outputColumn` fields to NULL; `param` fields will be unaffected.

To work on `param` fields, you must supply the actual address of the individual `param` you want to work on, such as:

[!code-cpp[NVC_MFCDatabase#27](../../mfc/codesnippet/cpp/crecordset-class_11.cpp)]

This means you cannot set all `param` fields to NULL, as you can with `outputColumn` fields.

> [!NOTE]
> When setting parameters to Null, a call to `SetFieldNull` before the recordset is opened results in an assertion. In this case, call [SetParamNull](#setparamnull).

`SetFieldNull` is implemented through [DoFieldExchange](#dofieldexchange).

## <a name="setlockingmode"></a> CRecordset::SetLockingMode

Sets the locking mode to "optimistic" locking (the default) or "pessimistic" locking. Determines how records are locked for updates.

```cpp
void SetLockingMode(UINT nMode);
```

### Parameters

*nMode*<br/>
Contains one of the following values from the `enum LockMode`:

- `optimistic` Optimistic locking locks the record being updated only during the call to `Update`.

- `pessimistic` Pessimistic locking locks the record as soon as `Edit` is called and keeps it locked until the `Update` call completes or you move to a new record.

### Remarks

Call this member function if you need to specify which of two record-locking strategies the recordset is using for updates. By default, the locking mode of a recordset is `optimistic`. You can change that to a more cautious `pessimistic` locking strategy. Call `SetLockingMode` after you construct and open the recordset object but before you call `Edit`.

## <a name="setparamnull"></a> CRecordset::SetParamNull

Flags a parameter as Null (specifically having no value) or as non-Null.

```cpp
void SetParamNull(
    int nIndex,
    BOOL bNull = TRUE);
```

### Parameters

*nIndex*<br/>
The zero-based index of the parameter.

*bNull*<br/>
If TRUE (the default value), the parameter is flagged as Null. Otherwise, the parameter is flagged as non-Null.

### Remarks

Unlike [SetFieldNull](#setfieldnull), you can call `SetParamNull` before you have opened the recordset.

`SetParamNull` is typically used with predefined queries (stored procedures).

## <a name="setrowsetcursorposition"></a> CRecordset::SetRowsetCursorPosition

Moves the cursor to a row within the current rowset.

```cpp
void SetRowsetCursorPosition(WORD wRow, WORD wLockType = SQL_LOCK_NO_CHANGE);
```

### Parameters

*wRow*<br/>
The one-based position of a row in the current rowset. This value can range from 1 to the size of the rowset.

*wLockType*<br/>
Value indicating how to lock the row after it has been refreshed. For details, see Remarks.

### Remarks

When implementing bulk row fetching, records are retrieved by rowsets, where the first record in the fetched rowset is the current record. In order to make another record within the rowset the current record, call `SetRowsetCursorPosition`. For example, you can combine `SetRowsetCursorPosition` with the [GetFieldValue](#getfieldvalue) member function to dynamically retrieve the data from any record of your recordset.

To use `SetRowsetCursorPosition`, you must have implemented bulk row fetching by specifying the `CRecordset::useMultiRowFetch` option of the *dwOptions* parameter in the [Open](#open) member function.

`SetRowsetCursorPosition` calls the ODBC API function `SQLSetPos`. The *wLockType* parameter specifies the lock state of the row after `SQLSetPos` has executed. The following table describes the possible values for *wLockType*.

|wLockType|Description|
|---------------|-----------------|
|SQL_LOCK_NO_CHANGE (the default value)|The driver or data source ensures that the row is in the same locked or unlocked state as it was before `SetRowsetCursorPosition` was called.|
|SQL_LOCK_EXCLUSIVE|The driver or data source locks the row exclusively. Not all data sources support this type of lock.|
|SQL_LOCK_UNLOCK|The driver or data source unlocks the row. Not all data sources support this type of lock.|

For more information about `SQLSetPos`, see the Windows SDK. For more information about bulk row fetching, see the article [Recordset: Fetching Records in Bulk (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

## <a name="setrowsetsize"></a> CRecordset::SetRowsetSize

Specifies the number of records you wish to retrieve during a fetch.

```
virtual void SetRowsetSize(DWORD dwNewRowsetSize);
```

### Parameters

*dwNewRowsetSize*<br/>
The number of rows to retrieve during a given fetch.

### Remarks

This virtual member function specifies how many rows you wish to retrieve during a single fetch when using bulk row fetching. To implement bulk row fetching, you must set the `CRecordset::useMultiRowFetch` option in the *dwOptions* parameter of the [Open](#open) member function.

> [!NOTE]
> Calling `SetRowsetSize` without implementing bulk row fetching will result in a failed assertion.

Call `SetRowsetSize` before calling `Open` to initially set the rowset size for the recordset. The default rowset size when implementing bulk row fetching is 25.

> [!NOTE]
> Use caution when calling `SetRowsetSize`. If you are manually allocating storage for the data (as specified by the `CRecordset::userAllocMultiRowBuffers` option of the dwOptions parameter in `Open`), you should check whether you need to reallocate these storage buffers after you call `SetRowsetSize`, but before you perform any cursor navigation operation.

To obtain the current setting for the rowset size, call [GetRowsetSize](#getrowsetsize).

For more information about bulk row fetching, see the article [Recordset: Fetching Records in Bulk (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

## <a name="update"></a> CRecordset::Update

Completes an `AddNew` or `Edit` operation by saving the new or edited data on the data source.

```
virtual BOOL Update();
```

### Return Value

Nonzero if one record was successfully updated; otherwise 0 if no columns have changed. If no records were updated, or if more than one record was updated, an exception is thrown. An exception is also thrown for any other failure on the data source.

### Remarks

Call this member function after a call to the [AddNew](#addnew) or [Edit](#edit) member function. This call is required to complete the `AddNew` or `Edit` operation.

> [!NOTE]
> If you have implemented bulk row fetching, you cannot call `Update`. This will result in a failed assertion. Although class `CRecordset` does not provide a mechanism for updating bulk rows of data, you can write your own functions by using the ODBC API function `SQLSetPos`. For more information about bulk row fetching, see the article [Recordset: Fetching Records in Bulk (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

Both `AddNew` and `Edit` prepare an edit buffer in which the added or edited data is placed for saving to the data source. `Update` saves the data. Only those fields marked or detected as changed are updated.

If the data source supports transactions, you can make the `Update` call (and its corresponding `AddNew` or `Edit` call) part of a transaction. For more information about transactions, see the article [Transaction (ODBC)](../../data/odbc/transaction-odbc.md).

> [!CAUTION]
> If you call `Update` without first calling either `AddNew` or `Edit`, `Update` throws a `CDBException`. If you call `AddNew` or `Edit`, you must call `Update` before you call a `Move` operation or before you close either the recordset or the data source connection. Otherwise, your changes are lost without notification.

For details on handling `Update` failures, see the article [Recordset: How Recordsets Update Records (ODBC)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md).

### Example

See the article [Transaction: Performing a Transaction in a Recordset (ODBC)](../../data/odbc/transaction-performing-a-transaction-in-a-recordset-odbc.md).

## See also

[CObject Class](../../mfc/reference/cobject-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CDatabase Class](../../mfc/reference/cdatabase-class.md)<br/>
[CRecordView Class](../../mfc/reference/crecordview-class.md)
