---
description: "Learn more about: TN042: ODBC Driver Developer Recommendations"
title: "TN042: ODBC Driver Developer Recommendations"
ms.date: "11/04/2016"
f1_keywords: ["vc.odbc"]
helpviewer_keywords: ["ODBC drivers [MFC], writing", "databases [MFC], ODBC", "TN042"]
ms.assetid: ecc6b5d9-f480-4582-9e22-8309fe561dad
---
# TN042: ODBC Driver Developer Recommendations

> [!NOTE]
> The following technical note has not been updated since it was first included in the online documentation. As a result, some procedures and topics might be out of date or incorrect. For the latest information, it is recommended that you search for the topic of interest in the online documentation index.

This note describes guidelines for ODBC driver writers. It outlines general requirements and assumptions of ODBC functionality that the MFC Database classes make, and various expected semantic details. Required driver functionality to support the three `CRecordset` Open modes (**forwardOnly**, **snapshot** and **dynaset**) are described.

## ODBC's Cursor Library

The MFC Database classes present functionality to the user that in many cases surpasses the functionality provided by most level 1 ODBC drivers. Fortunately, ODBC's Cursor Library will layer itself between the database classes and the driver, and will automatically provide much of this additional functionality.

For instance, most 1.0 drivers do not support backward scrolling. The Cursor Library can detect this, and will cache rows from the driver and present them as requested on FETCH_PREV calls in `SQLExtendedFetch`.

Another important example of cursor library dependence is positioned updates. Most 1.0 drivers also do not have positioned updates, but the cursor library will generate update statements which identify a target row on the data source based upon its current cached data values, or a cached timestamp value.

The class library never makes use of multiple rowsets. Therefore, the few `SQLSetPos` statements are always applied to row 1 of the rowset.

## CDatabases

Each `CDatabase` allocates a single **HDBC**. (If `CDatabase`'s `ExecuteSQL` function is used, an **HSTMT** is temporarily allocated.) So if multiple `CDatabase`'s are required, multiple **HDBC**s per **HENV** must be supported.

The database classes require the cursor library. This is reflected in a `SQLSetConnections` call **SQL_ODBC_CURSORS**, **SQL_CUR_USE_ODBC**.

`SQLDriverConnect`, **SQL_DRIVER_COMPLETE** is used by `CDatabase::Open` to establish the connection to the data source.

The driver must support `SQLGetInfo SQL_ODBC_API_CONFORMANCE` >= **SQL_OAC_LEVEL1**, `SQLGetInfo SQL_ODBC_SQL_CONFORMANCE` >= **SQL_OSC_MINIMUM**.

In order for transactions to be supported for the `CDatabase` and its dependent recordsets, `SQLGetInfo SQL_CURSOR_COMMIT_BEHAVIOR` and **SQL_CURSOR_ROLLBACK_BEHAVIOR** must have **SQL_CR_PRESERVE**. Otherwise, attempts to perform transaction control will be ignored.

`SQLGetInfo SQL_DATA_SOURCE_READ_ONLY` must be supported. If it returns "Y", no update operations will be performed on the data source.

If the `CDatabase` is opened ReadOnly, an attempt to set the data source read only will be made with `SQLSetConnectOption SQL_ACCESS_MODE`, **SQL_MODE_READ_ONLY**.

If identifiers require quoting, this information should be returned from the driver with an `SQLGetInfo SQL_IDENTIFIER_QUOTE_CHAR` call.

For debugging purposes, `SQLGetInfo SQL_DBMS_VER` and **SQL_DBMS_NAME** are retrieved from the driver.

`SQLSetStmtOption SQL_QUERY_TIMEOUT` and **SQL_ASYNC_ENABLE** may be called on a `CDatabase`'s **HDBC**.

`SQLError` may be called with any or all arguments NULL.

Of course, `SQLAllocEnv`, `SQLAllocConnect`, `SQLDisconnect` and `SQLFreeConnect` must be supported.

## ExecuteSQL

In addition to allocating and freeing a temporary **HSTMT**, `ExecuteSQL` calls `SQLExecDirect`, `SQLFetch`, `SQLNumResultCol` and `SQLMoreResults`. `SQLCancel` may be called on the **HSTMT**.

## GetDatabaseName

`SQLGetInfo SQL_DATABASE_NAME` will be called.

## BeginTrans, CommitTrans, Rollback

`SQLSetConnectOption SQL_AUTOCOMMIT` and `SQLTransact SQL_COMMIT`, **SQL_ROLLBACK** and **SQL_AUTOCOMMIT** will be called if transaction requests are made.

## CRecordsets

`SQLAllocStmt`, `SQLPrepare`, `SQLExecute` (For `Open` and `Requery`), `SQLExecDirect` (for update operations), `SQLFreeStmt` must be supported. `SQLNumResultCols` and `SQLDescribeCol` will be called on the results set at various times.

`SQLSetParam` is used extensively for binding parameter data and **DATA_AT_EXEC** functionality.

`SQLBindCol` is used extensively to register output Column data storage locations with ODBC.

Two `SQLGetData` calls are used to retrieve **SQL_LONG_VARCHAR** and **SQL_LONG_VARBINARY** data. The first call attempts to find the total length of the column value by calling `SQLGetData` with cbMaxValue of 0, but with a valid pcbValue. If pcbValue holds **SQL_NO_TOTAL**, an exception is thrown. Otherwise, an **HGLOBAL** is allocated, and another `SQLGetData` call made to retrieve the entire result.

## Updating

If pessimistic locking is requested, `SQLGetInfo SQL_LOCK_TYPES` will be queried. If **SQL_LCK_EXCLUSIVE** is not supported, an exception will be thrown.

Attempts to update a `CRecordset` (**snapshot** or **dynaset**) will cause a second **HSTMT** to be allocated. For drivers that do not support second **HSTMT**, the cursor library will simulate this functionality. Unfortunately, this may sometimes mean forcing the current query on the first **HSTMT** to completion before processing the second **HSTMT**'s request.

`SQLFreeStmt SQL_CLOSE` and **SQL_RESET_PARAMS** and `SQLGetCursorName` will be called during update operations.

If there are **CLongBinarys** in the **outputColumns**, ODBC's **DATA_AT_EXEC** functionality must be supported. This includes returning **SQL_NEED_DATA** from `SQLExecDirect`, `SQLParamData` and `SQLPutData`.

`SQLRowCount` is called after executing to verify that only 1 record was updated by the `SQLExecDirect`.

## ForwardOnly Cursors

Only `SQLFetch` is required for the `Move` operations. Note that **forwardOnly** cursors do not support updates.

## Snapshot Cursors

Snapshot functionality requires `SQLExtendedFetch` support. As noted above, the ODBC cursor library will detect when a driver does not support `SQLExtendedFetch`, and provide the necessary support itself.

`SQLGetInfo`, **SQL_SCROLL_OPTIONS** must support **SQL_SO_STATIC**.

## Dynaset Cursors

Below is the minimum support required to open a dynaset:

`SQLGetInfo`, **SQL_ODBC_VER** must return > "01".

`SQLGetInfo`, **SQL_SCROLL_OPTIONS** must support **SQL_SO_KEYSET_DRIVEN**.

`SQLGetInfo`, **SQL_ROW_UPDATES** must return "Y".

`SQLGetInfo`, **SQL_POSITIONED_UPDATES** must support **SQL_PS_POSITIONED_DELETE** and **SQL_PS_POSITIONED_UPDATE**.

In addition, if pessimistic locking is requested, a call to `SQLSetPos` with irow 1, fRefresh FALSE and fLock **SQL_LCK_EXCLUSIVE** will be made.

## See also

[Technical Notes by Number](../mfc/technical-notes-by-number.md)<br/>
[Technical Notes by Category](../mfc/technical-notes-by-category.md)
