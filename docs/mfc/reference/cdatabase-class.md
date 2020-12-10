---
description: "Learn more about: CDatabase Class"
title: "CDatabase Class"
ms.date: "11/04/2016"
f1_keywords: ["CDatabase", "AFXDB/CDatabase", "AFXDB/CDatabase::CDatabase", "AFXDB/CDatabase::BeginTrans", "AFXDB/CDatabase::BindParameters", "AFXDB/CDatabase::Cancel", "AFXDB/CDatabase::CanTransact", "AFXDB/CDatabase::CanUpdate", "AFXDB/CDatabase::Close", "AFXDB/CDatabase::CommitTrans", "AFXDB/CDatabase::ExecuteSQL", "AFXDB/CDatabase::GetBookmarkPersistence", "AFXDB/CDatabase::GetConnect", "AFXDB/CDatabase::GetCursorCommitBehavior", "AFXDB/CDatabase::GetCursorRollbackBehavior", "AFXDB/CDatabase::GetDatabaseName", "AFXDB/CDatabase::IsOpen", "AFXDB/CDatabase::OnSetOptions", "AFXDB/CDatabase::Open", "AFXDB/CDatabase::OpenEx", "AFXDB/CDatabase::Rollback", "AFXDB/CDatabase::SetLoginTimeout", "AFXDB/CDatabase::SetQueryTimeout", "AFXDB/CDatabase::m_hdbc"]
helpviewer_keywords: ["CDatabase [MFC], CDatabase", "CDatabase [MFC], BeginTrans", "CDatabase [MFC], BindParameters", "CDatabase [MFC], Cancel", "CDatabase [MFC], CanTransact", "CDatabase [MFC], CanUpdate", "CDatabase [MFC], Close", "CDatabase [MFC], CommitTrans", "CDatabase [MFC], ExecuteSQL", "CDatabase [MFC], GetBookmarkPersistence", "CDatabase [MFC], GetConnect", "CDatabase [MFC], GetCursorCommitBehavior", "CDatabase [MFC], GetCursorRollbackBehavior", "CDatabase [MFC], GetDatabaseName", "CDatabase [MFC], IsOpen", "CDatabase [MFC], OnSetOptions", "CDatabase [MFC], Open", "CDatabase [MFC], OpenEx", "CDatabase [MFC], Rollback", "CDatabase [MFC], SetLoginTimeout", "CDatabase [MFC], SetQueryTimeout", "CDatabase [MFC], m_hdbc"]
ms.assetid: bd0de70a-e3c3-4441-bcaa-bbf434426ca8
---
# CDatabase Class

Represents a connection to a data source, through which you can operate on the data source.

## Syntax

```
class CDatabase : public CObject
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CDatabase::CDatabase](#cdatabase)|Constructs a `CDatabase` object. You must initialize the object by calling `OpenEx` or `Open`.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CDatabase::BeginTrans](#begintrans)|Starts a "transaction" — a series of reversible calls to the `AddNew`, `Edit`, `Delete`, and `Update` member functions of class `CRecordset` — on the connected data source. The data source must support transactions for `BeginTrans` to have any effect.|
|[CDatabase::BindParameters](#bindparameters)|Allows you to bind parameters before calling `CDatabase::ExecuteSQL`.|
|[CDatabase::Cancel](#cancel)|Cancels an asynchronous operation or a process from a second thread.|
|[CDatabase::CanTransact](#cantransact)|Returns nonzero if the data source supports transactions.|
|[CDatabase::CanUpdate](#canupdate)|Returns nonzero if the `CDatabase` object is updatable (not read-only).|
|[CDatabase::Close](#close)|Closes the data source connection.|
|[CDatabase::CommitTrans](#committrans)|Completes a transaction begun by `BeginTrans`. Commands in the transaction that alter the data source are carried out.|
|[CDatabase::ExecuteSQL](#executesql)|Executes a SQL statement. No data records are returned.|
|[CDatabase::GetBookmarkPersistence](#getbookmarkpersistence)|Identifies the operations through which bookmarks persist on recordset objects.|
|[CDatabase::GetConnect](#getconnect)|Returns the ODBC connection string used to connect the `CDatabase` object to a data source.|
|[CDatabase::GetCursorCommitBehavior](#getcursorcommitbehavior)|Identifies the effect of committing a transaction on an open recordset object.|
|[CDatabase::GetCursorRollbackBehavior](#getcursorrollbackbehavior)|Identifies the effect of rolling back a transaction on an open recordset object.|
|[CDatabase::GetDatabaseName](#getdatabasename)|Returns the name of the database currently in use.|
|[CDatabase::IsOpen](#isopen)|Returns nonzero if the `CDatabase` object is currently connected to a data source.|
|[CDatabase::OnSetOptions](#onsetoptions)|Called by the framework to set standard connection options. The default implementation sets the query timeout value. You can establish these options ahead of time by calling `SetQueryTimeout`.|
|[CDatabase::Open](#open)|Establishes a connection to a data source (through an ODBC driver).|
|[CDatabase::OpenEx](#openex)|Establishes a connection to a data source (through an ODBC driver).|
|[CDatabase::Rollback](#rollback)|Reverses changes made during the current transaction. The data source returns to its previous state, as defined at the `BeginTrans` call, unaltered.|
|[CDatabase::SetLoginTimeout](#setlogintimeout)|Sets the number of seconds after which a data source connection attempt will time out.|
|[CDatabase::SetQueryTimeout](#setquerytimeout)|Sets the number of seconds after which database query operations will time out. Affects all subsequent recordset `Open`, `AddNew`, `Edit`, and `Delete` calls.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CDatabase::m_hdbc](#m_hdbc)|Open Database Connectivity (ODBC) connection handle to a data source. Type *HDBC*.|

## Remarks

A data source is a specific instance of data hosted by some database management system (DBMS). Examples include Microsoft SQL Server, Microsoft Access, Borland dBASE, and xBASE. You can have one or more `CDatabase` objects active at a time in your application.

> [!NOTE]
> If you are working with the Data Access Objects (DAO) classes rather than the Open Database Connectivity (ODBC) classes, use class [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) instead. For more information, see the article [Overview: Database Programming](../../data/data-access-programming-mfc-atl.md).

To use `CDatabase`, construct a `CDatabase` object and call its `OpenEx` member function. This opens a connection. When you then construct `CRecordset` objects for operating on the connected data source, pass the recordset constructor a pointer to your `CDatabase` object. When you finish using the connection, call the `Close` member function and destroy the `CDatabase` object. `Close` closes any recordsets you have not closed previously.

For more information about `CDatabase`, see the articles [Data Source (ODBC)](../../data/odbc/data-source-odbc.md) and [Overview: Database Programming](../../data/data-access-programming-mfc-atl.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

`CDatabase`

## Requirements

**Header:** afxdb.h

## <a name="begintrans"></a> CDatabase::BeginTrans

Call this member function to begin a transaction with the connected data source.

```
BOOL BeginTrans();
```

### Return Value

Nonzero if the call was successful and changes are committed only manually; otherwise 0.

### Remarks

A transaction consists of one or more calls to the `AddNew`, `Edit`, `Delete`, and `Update` member functions of a `CRecordset` object. Before beginning a transaction, the `CDatabase` object must already have been connected to the data source by calling its `OpenEx` or `Open` member function. To end the transaction, call [CommitTrans](#committrans) to accept all changes to the data source (and carry them out) or call [Rollback](#rollback) to abort the entire transaction. Call `BeginTrans` after you open any recordsets involved in the transaction and as close to the actual update operations as possible.

> [!CAUTION]
> Depending on your ODBC driver, opening a recordset before calling `BeginTrans` may cause problems when calling `Rollback`. You should check the specific driver you are using. For example, when using the Microsoft Access driver included in the Microsoft ODBC Desktop Driver Pack 3.0, you must account for the Jet database engine's requirement that you should not begin a transaction on any database that has an open cursor. In the MFC database classes, an open cursor means an open `CRecordset` object. For more information, see [Technical Note 68](../../mfc/tn068-performing-transactions-with-the-microsoft-access-7-odbc-driver.md).

`BeginTrans` may also lock data records on the server, depending on the requested concurrency and the capabilities of the data source. For information about locking data, see the article [Recordset: Locking Records (ODBC)](../../data/odbc/recordset-locking-records-odbc.md).

User-defined transactions are explained in the article [Transaction (ODBC)](../../data/odbc/transaction-odbc.md).

`BeginTrans` establishes the state to which the sequence of transactions can be rolled back (reversed). To establish a new state for rollbacks, commit any current transaction, then call `BeginTrans` again.

> [!CAUTION]
> Calling `BeginTrans` again without calling `CommitTrans` or `Rollback` is an error.

Call the [CanTransact](#cantransact) member function to determine whether your driver supports transactions for a given database. You should also call [GetCursorCommitBehavior](#getcursorcommitbehavior) and [GetCursorRollbackBehavior](#getcursorrollbackbehavior) to determine the support for cursor preservation.

For more information about transactions, see the article [Transaction (ODBC)](../../data/odbc/transaction-odbc.md).

### Example

  See the article [Transaction: Performing a Transaction in a Recordset (ODBC)](../../data/odbc/transaction-performing-a-transaction-in-a-recordset-odbc.md).

## <a name="bindparameters"></a> CDatabase::BindParameters

Override `BindParameters` when you need to bind parameters before calling [CDatabase::ExecuteSQL](#executesql).

```
virtual void BindParameters(HSTMT hstmt);
```

### Parameters

*hstmt*<br/>
The ODBC statement handle for which you want to bind parameters.

### Remarks

This approach is useful when you do not need the result set from a stored procedure.

In your override, call `SQLBindParameters` and related ODBC functions to bind the parameters. MFC calls your override before your call to `ExecuteSQL`. You do not need to call `SQLPrepare`; `ExecuteSQL` calls `SQLExecDirect` and destroys the *hstmt*, which is used only once.

## <a name="cancel"></a> CDatabase::Cancel

Call this member function to request that the data source cancel either an asynchronous operation in progress or a process from a second thread.

```cpp
void Cancel();
```

### Remarks

Note that the MFC ODBC classes no longer use asynchronous processing; to perform an asynchronous operation, you must directly call the ODBC API function [SQLSetConnectOption](/sql/odbc/reference/syntax/sqlsetconnectoption-function). For more information, see [Asynchronous Execution](/sql/odbc/reference/develop-app/asynchronous-execution).

## <a name="cantransact"></a> CDatabase::CanTransact

Call this member function to determine whether the database allows transactions.

```
BOOL CanTransact() const;
```

### Return Value

Nonzero if recordsets using this `CDatabase` object allow transactions; otherwise 0.

### Remarks

For information about transactions, see the article [Transaction (ODBC)](../../data/odbc/transaction-odbc.md).

## <a name="canupdate"></a> CDatabase::CanUpdate

Call this member function to determine whether the `CDatabase` object allows updates.

```
BOOL CanUpdate() const;
```

### Return Value

Nonzero if the `CDatabase` object allows updates; otherwise 0, indicating either that you passed TRUE in *bReadOnly* when you opened the `CDatabase` object or that the data source itself is read-only. The data source is read-only if a call to the ODBC API function `SQLGetInfo` for SQL_DATASOURCE_READ_ONLY returns "y".

### Remarks

Not all drivers support updates.

## <a name="cdatabase"></a> CDatabase::CDatabase

Constructs a `CDatabase` object.

```
CDatabase();
```

### Remarks

After constructing the object, you must call its `OpenEx` or `Open` member function to establish a connection to a specified data source.

You may find it convenient to embed the `CDatabase` object in your document class.

### Example

This example illustrates using `CDatabase` in a `CDocument`-derived class.

[!code-cpp[NVC_MFCDatabase#9](../../mfc/codesnippet/cpp/cdatabase-class_1.h)]

[!code-cpp[NVC_MFCDatabase#10](../../mfc/codesnippet/cpp/cdatabase-class_2.cpp)]

## <a name="close"></a> CDatabase::Close

Call this member function if you want to disconnect from a data source.

```
virtual void Close();
```

### Remarks

You must close any recordsets associated with the `CDatabase` object before you call this member function. Because `Close` does not destroy the `CDatabase` object, you can reuse the object by opening a new connection to the same data source or a different data source.

All pending `AddNew` or `Edit` statements of recordsets using the database are canceled, and all pending transactions are rolled back. Any recordsets dependent on the `CDatabase` object are left in an undefined state.

### Example

[!code-cpp[NVC_MFCDatabase#12](../../mfc/codesnippet/cpp/cdatabase-class_3.cpp)]

## <a name="committrans"></a> CDatabase::CommitTrans

Call this member function upon completing transactions.

```
BOOL CommitTrans();
```

### Return Value

Nonzero if the updates were successfully committed; otherwise 0. If `CommitTrans` fails, the state of the data source is undefined. You must check the data to determine its state.

### Remarks

A transaction consists of a series of calls to the `AddNew`, `Edit`, `Delete`, and `Update` member functions of a `CRecordset` object that began with a call to the [BeginTrans](#begintrans) member function. `CommitTrans` commits the transaction. By default, updates are committed immediately; calling `BeginTrans` causes commitment of updates to be delayed until `CommitTrans` is called.

Until you call `CommitTrans` to end a transaction, you can call the [Rollback](#rollback) member function to abort the transaction and leave the data source in its original state. To begin a new transaction, call `BeginTrans` again.

For more information about transactions, see the article [Transaction (ODBC)](../../data/odbc/transaction-odbc.md).

### Example

  See the article [Transaction: Performing a Transaction in a Recordset (ODBC)](../../data/odbc/transaction-performing-a-transaction-in-a-recordset-odbc.md).

## <a name="executesql"></a> CDatabase::ExecuteSQL

Call this member function when you need to execute a SQL command directly.

```cpp
void ExecuteSQL(LPCTSTR lpszSQL);
```

### Parameters

*lpszSQL*<br/>
Pointer to a null-terminated string containing a valid SQL command to execute. You can pass a [CString](../../atl-mfc-shared/reference/cstringt-class.md).

### Remarks

Create the command as a null-terminated string. `ExecuteSQL` does not return data records. If you want to operate on records, use a recordset object instead.

Most of your commands for a data source are issued through recordset objects, which support commands for selecting data, inserting new records, deleting records, and editing records. However, not all ODBC functionality is directly supported by the database classes, so you may at times need to make a direct SQL call with `ExecuteSQL`.

### Example

[!code-cpp[NVC_MFCDatabase#13](../../mfc/codesnippet/cpp/cdatabase-class_4.cpp)]

## <a name="getbookmarkpersistence"></a> CDatabase::GetBookmarkPersistence

Call this member function to determine the persistence of bookmarks on a recordset object after certain operations.

```
DWORD GetBookmarkPersistence() const;
```

### Return Value

A bitmask that identifies the operations through which bookmarks persist on a recordset object. For details, see Remarks.

### Remarks

For example, if you call `CRecordset::GetBookmark` and then call `CRecordset::Requery`, the bookmark obtained from `GetBookmark` may no longer be valid. You should call `GetBookmarkPersistence` before calling `CRecordset::SetBookmark`.

The following table lists the bitmask values that can be combined for the return value of `GetBookmarkPersistence`.

|Bitmask value|Bookmark persistence|
|-------------------|--------------------------|
|SQL_BP_CLOSE|Bookmarks are valid after a `Requery` operation.|
|SQL_BP_DELETE|The bookmark for a row is valid after a `Delete` operation on that row.|
|SQL_BP_DROP|Bookmarks are valid after a `Close` operation.|
|SQL_BP_SCROLL|Bookmarks are valid after any `Move` operation. This simply identifies if bookmarks are supported on the recordset, as returned by `CRecordset::CanBookmark`.|
|SQL_BP_TRANSACTION|Bookmarks are valid after a transaction is committed or rolled back.|
|SQL_BP_UPDATE|The bookmark for a row is valid after an `Update` operation on that row.|
|SQL_BP_OTHER_HSTMT|Bookmarks associated with one recordset object are valid on a second recordset.|

For more information about this return value, see the ODBC API function `SQLGetInfo` in the Windows SDK. For more information about bookmarks, see the article [Recordset: Bookmarks and Absolute Positions (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md).

## <a name="getconnect"></a> CDatabase::GetConnect

Call this member function to retrieve the connection string used during the call to `OpenEx` or `Open` that connected the `CDatabase` object to a data source.

```
const CString GetConnect() const;
```

### Return Value

A **`const`**[CString](../../atl-mfc-shared/reference/cstringt-class.md) containing the connection string if `OpenEx` or `Open` has been called; otherwise, an empty string.

### Remarks

See [CDatabase::Open](#open) for a description of how the connection string is created.

## <a name="getcursorcommitbehavior"></a> CDatabase::GetCursorCommitBehavior

Call this member function to determine how a [CommitTrans](#committrans) operation affects cursors on open recordset objects.

```
int GetCursorCommitBehavior() const;
```

### Return Value

A value indicating the effect of transactions on open recordset objects. For details, see Remarks.

### Remarks

The following table lists the possible return values for `GetCursorCommitBehavior` and the corresponding effect on the open recordset.

|Return value|Effect on CRecordset objects|
|------------------|----------------------------------|
|SQL_CB_CLOSE|Call `CRecordset::Requery` immediately following the transaction commit.|
|SQL_CB_DELETE|Call `CRecordset::Close` immediately following the transaction commit.|
|SQL_CB_PRESERVE|Proceed normally with `CRecordset` operations.|

For more information about this return value, see the ODBC API function `SQLGetInfo` in the Windows SDK. For more information about transactions, see the article [Transaction (ODBC)](../../data/odbc/transaction-odbc.md).

## <a name="getcursorrollbackbehavior"></a> CDatabase::GetCursorRollbackBehavior

Call this member function to determine how a [Rollback](#rollback) operation affects cursors on open recordset objects.

```
int GetCursorRollbackBehavior() const;
```

### Return Value

A value indicating the effect of transactions on open recordset objects. For details, see Remarks.

### Remarks

The following table lists the possible return values for `GetCursorRollbackBehavior` and the corresponding effect on the open recordset.

|Return value|Effect on CRecordset objects|
|------------------|----------------------------------|
|SQL_CB_CLOSE|Call `CRecordset::Requery` immediately following the transaction rollback.|
|SQL_CB_DELETE|Call `CRecordset::Close` immediately following the transaction rollback.|
|SQL_CB_PRESERVE|Proceed normally with `CRecordset` operations.|

For more information about this return value, see the ODBC API function `SQLGetInfo` in the Windows SDK. For more information about transactions, see the article [Transaction (ODBC)](../../data/odbc/transaction-odbc.md).

## <a name="getdatabasename"></a> CDatabase::GetDatabaseName

Call this member function to retrieve the name of the currently connected database (provided that the data source defines a named object called "database").

```
CString GetDatabaseName() const;
```

### Return Value

A [CString](../../atl-mfc-shared/reference/cstringt-class.md) containing the database name if successful; otherwise, an empty `CString`.

### Remarks

This is not the same as the data source name (DSN) specified in the `OpenEx` or `Open` call. What `GetDatabaseName` returns depends on ODBC. In general, a database is a collection of tables. If this entity has a name, `GetDatabaseName` returns it.

You might, for example, want to display this name in a heading. If an error occurs while retrieving the name from ODBC, `GetDatabaseName` returns an empty `CString`.

## <a name="isopen"></a> CDatabase::IsOpen

Call this member function to determine whether the `CDatabase` object is currently connected to a data source.

```
BOOL IsOpen() const;
```

### Return Value

Nonzero if the `CDatabase` object is currently connected; otherwise 0.

## <a name="m_hdbc"></a> CDatabase::m_hdbc

Contains a public handle to an ODBC data source connection — a "connection handle."

### Remarks

Normally, you will have no need to access this member variable directly. Instead, the framework allocates the handle when you call `OpenEx` or `Open`. The framework deallocates the handle when you call the **`delete`** operator on the `CDatabase` object. Note that the `Close` member function does not deallocate the handle.

Under some circumstances, however, you may need to use the handle directly. For example, if you need to call ODBC API functions directly rather than through class `CDatabase`, you may need a connection handle to pass as a parameter. See the code example below.

### Example

[!code-cpp[NVC_MFCDatabase#15](../../mfc/codesnippet/cpp/cdatabase-class_5.cpp)]

## <a name="onsetoptions"></a> CDatabase::OnSetOptions

The framework calls this member function when directly executing a SQL statement with the `ExecuteSQL` member function.

```
virtual void OnSetOptions(HSTMT hstmt);
```

### Parameters

*hstmt*<br/>
The ODBC statement handle for which options are being set.

### Remarks

`CRecordset::OnSetOptions` also calls this member function.

`OnSetOptions` sets the login timeout value. If there have been previous calls to the `SetQueryTimeout` and member function, `OnSetOptions` reflects the current values; otherwise, it sets default values.

> [!NOTE]
> Prior to MFC 4.2, `OnSetOptions` also set the processing mode to either snychronous or asynchronous. Beginning with MFC 4.2, all operations are synchronous. To perform an asynchronous operation, you must make a direct call to the ODBC API function `SQLSetPos`.

You do not need to override `OnSetOptions` to change the timeout value. Instead, to customize the query timeout value, call `SetQueryTimeout` before creating a recordset; `OnSetOptions` will use the new value. The values set apply to subsequent operations on all recordsets or direct SQL calls.

Override `OnSetOptions` if you want to set additional options. Your override should call the base class `OnSetOptions` either before or after you call the ODBC API function `SQLSetStmtOption`. Follow the method illustrated in the framework's default implementation of `OnSetOptions`.

## <a name="open"></a> CDatabase::Open

Call this member function to initialize a newly constructed `CDatabase` object.

```
virtual BOOL Open(
    LPCTSTR lpszDSN,
    BOOL bExclusive = FALSE,
    BOOL bReadOnly = FALSE,
    LPCTSTR lpszConnect = _T("ODBC;"),
    BOOL bUseCursorLib = TRUE);
```

### Parameters

*lpszDSN*<br/>
Specifies a data source name — a name registered with ODBC through the ODBC Administrator program. If a DSN value is specified in *lpszConnect* (in the form "DSN=\<data-source>"), it must not be specified again in *lpszDSN*. In this case, *lpszDSN* should be NULL. Otherwise, you can pass NULL if you want to present the user with a Data Source dialog box in which the user can select a data source. For further information, see Remarks.

*bExclusive*<br/>
Not supported in this version of the class library. Currently, an assertion fails if this parameter is TRUE. The data source is always opened as shared (not exclusive).

*bReadOnly*<br/>
TRUE if you intend the connection to be read-only and to prohibit updates to the data source. All dependent recordsets inherit this attribute. The default value is FALSE.

*lpszConnect*<br/>
Specifies a connection string. The connection string concatenates information, possibly including a data source name, a user ID valid on the data source, a user authentication string (password, if the data source requires one), and other information. The whole connection string must be prefixed by the string "ODBC;" (uppercase or lowercase). The "ODBC;" string is used to indicate that the connection is to an ODBC data source; this is for upward compatibility when future versions of the class library might support non-ODBC data sources.

*bUseCursorLib*<br/>
TRUE if you want the ODBC Cursor Library DLL to be loaded. The cursor library masks some functionality of the underlying ODBC driver, effectively preventing the use of dynasets (if the driver supports them). The only cursors supported if the cursor library is loaded are static snapshots and forward-only cursors. The default value is TRUE. If you plan to create a recordset object directly from `CRecordset` without deriving from it, you should not load the cursor library.

### Return Value

Nonzero if the connection is successfully made; otherwise 0 if the user chooses Cancel when presented a dialog box asking for more connection information. In all other cases, the framework throws an exception.

### Remarks

Your database object must be initialized before you can use it to construct a recordset object.

> [!NOTE]
> Calling the [OpenEx](#openex) member function is the preferred way to connect to a data source and initialize your database object.

If the parameters in your `Open` call do not contain enough information to make the connection, the ODBC driver opens a dialog box to obtain the necessary information from the user. When you call `Open`, your connection string, *lpszConnect*, is stored privately in the `CDatabase` object and is available by calling the [GetConnect](#getconnect) member function.

If you wish, you can open your own dialog box before you call `Open` to get information from the user, such as a password, then add that information to the connection string you pass to `Open`. Or you might want to save the connection string you pass so you can reuse it the next time your application calls `Open` on a `CDatabase` object.

You can also use the connection string for multiple levels of login authorization (each for a different `CDatabase` object) or to convey other data source-specific information. For more information about connection strings, see Chapter 5 in the Windows SDK.

It is possible for a connection attempt to time out if, for example, the DBMS host is unavailable. If the connection attempt fails, `Open` throws a `CDBException`.

### Example

[!code-cpp[NVC_MFCDatabase#14](../../mfc/codesnippet/cpp/cdatabase-class_6.cpp)]

## <a name="openex"></a> CDatabase::OpenEx

Call this member function to initialize a newly constructed `CDatabase` object.

```
virtual BOOL OpenEx(
    LPCTSTR lpszConnectString,
    DWORD dwOptions = 0);
```

### Parameters

*lpszConnectString*<br/>
Specifies an ODBC connection string. This includes the data source name as well as other optional information, such as a user ID and password. For example, "DSN=SQLServer_Source;UID=SA;PWD=abc123" is a possible connection string. Note that if you pass NULL for *lpszConnectString*, a Data Source dialog box will prompt the user to select a data source.

*dwOptions*<br/>
A bitmask which specifies a combination of the following values. The default value is 0, meaning that the database will be opened as shared with write access, the ODBC Cursor Library DLL will not be loaded, and the ODBC connection dialog box will display only if there is not enough information to make the connection.

- `CDatabase::openExclusive` Not supported in this version of the class library. A data source is always opened as shared (not exclusive). Currently, an assertion fails if you specify this option.

- `CDatabase::openReadOnly` Open the data source as read-only.

- `CDatabase::useCursorLib` Load the ODBC Cursor Library DLL. The cursor library masks some functionality of the underlying ODBC driver, effectively preventing the use of dynasets (if the driver supports them). The only cursors supported if the cursor library is loaded are static snapshots and forward-only cursors. If you plan to create a recordset object directly from `CRecordset` without deriving from it, you should not load the cursor library.

- `CDatabase::noOdbcDialog` Do not display the ODBC connection dialog box, regardless of whether enough connection information is supplied.

- `CDatabase::forceOdbcDialog` Always display the ODBC connection dialog box.

### Return Value

Nonzero if the connection is successfully made; otherwise 0 if the user chooses Cancel when presented a dialog box asking for more connection information. In all other cases, the framework throws an exception.

### Remarks

Your database object must be initialized before you can use it to construct a recordset object.

If the *lpszConnectString* parameter in your `OpenEx` call does not contain enough information to make the connection, the ODBC driver opens a dialog box to obtain the necessary information from the user, provided you have not set `CDatabase::noOdbcDialog` or `CDatabase::forceOdbcDialog` in the *dwOptions* parameter. When you call `OpenEx`, your connection string, *lpszConnectString*, is stored privately in the `CDatabase` object and is available by calling the [GetConnect](#getconnect) member function.

If you wish, you can open your own dialog box before you call `OpenEx` to get information from the user, such as a password, and then add that information to the connection string you pass to `OpenEx`. Or you might want to save the connection string you pass so you can reuse it the next time your application calls `OpenEx` on a `CDatabase` object.

You can also use the connection string for multiple levels of login authorization (each for a different `CDatabase` object) or to convey other data source-specific information. For more information about connection strings, see Chapter 6 in the *ODBC Programmer's Reference*.

It is possible for a connection attempt to time out if, for example, the DBMS host is unavailable. If the connection attempt fails, `OpenEx` throws a `CDBException`.

### Example

[!code-cpp[NVC_MFCDatabase#11](../../mfc/codesnippet/cpp/cdatabase-class_7.cpp)]

## <a name="rollback"></a> CDatabase::Rollback

Call this member function to reverse the changes made during a transaction.

```
BOOL Rollback();
```

### Return Value

Nonzero if the transaction was successfully reversed; otherwise 0. If a `Rollback` call fails, the data source and transaction states are undefined. If `Rollback` returns 0, you must check the data source to determine its state.

### Remarks

All `CRecordset` `AddNew`, `Edit`, `Delete`, and `Update` calls executed since the last [BeginTrans](#begintrans) are rolled back to the state that existed at the time of that call.

After a call to `Rollback`, the transaction is over, and you must call `BeginTrans` again for another transaction. The record that was current before you called `BeginTrans` becomes the current record again after `Rollback`.

After a rollback, the record that was current before the rollback remains current. For details about the state of the recordset and the data source after a rollback, see the article [Transaction (ODBC)](../../data/odbc/transaction-odbc.md).

### Example

  See the article [Transaction: Performing a Transaction in a Recordset (ODBC)](../../data/odbc/transaction-performing-a-transaction-in-a-recordset-odbc.md).

## <a name="setlogintimeout"></a> CDatabase::SetLoginTimeout

Call this member function — before you call `OpenEx` or `Open` — to override the default number of seconds allowed before an attempted data source connection times out.

```cpp
void SetLoginTimeout(DWORD dwSeconds);
```

### Parameters

*dwSeconds*<br/>
The number of seconds to allow before a connection attempt times out.

### Remarks

A connection attempt might time out if, for example, the DBMS is not available. Call `SetLoginTimeout` after you construct the uninitialized `CDatabase` object but before you call `OpenEx` or `Open`.

The default value for login timeouts is 15 seconds. Not all data sources support the ability to specify a login timeout value. If the data source does not support timeout, you get trace output but not an exception. A value of 0 means "infinite."

## <a name="setquerytimeout"></a> CDatabase::SetQueryTimeout

Call this member function to override the default number of seconds to allow before subsequent operations on the connected data source time out.

```cpp
void SetQueryTimeout(DWORD dwSeconds);
```

### Parameters

*dwSeconds*<br/>
The number of seconds to allow before a query attempt times out.

### Remarks

An operation might time out due to network access problems, excessive query processing time, and so on. Call `SetQueryTimeout` prior to opening your recordset or prior to calling the recordset's `AddNew`, `Update` or `Delete` member functions if you want to change the query timeout value. The setting affects all subsequent `Open`, `AddNew`, `Update`, and `Delete` calls to any recordsets associated with this `CDatabase` object. Changing the query timeout value for a recordset after opening does not change the value for the recordset. For example, subsequent `Move` operations do not use the new value.

The default value for query timeouts is 15 seconds. Not all data sources support the ability to set a query timeout value. If you set a query timeout value of 0, no timeout occurs; the communication with the data source may stop responding. This behavior may be useful during development. If the data source does not support timeout, you get trace output but not an exception.

## See also

[CObject Class](../../mfc/reference/cobject-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CRecordset Class](../../mfc/reference/crecordset-class.md)
