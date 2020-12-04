---
description: "Learn more about: CDBException Class"
title: "CDBException Class"
ms.date: "11/04/2016"
f1_keywords: ["CDBException", "AFXDB/CDBException", "AFXDB/CDBException::m_nRetCode", "AFXDB/CDBException::m_strError", "AFXDB/CDBException::m_strStateNativeOrigin"]
helpviewer_keywords: ["CDBException [MFC], m_nRetCode", "CDBException [MFC], m_strError", "CDBException [MFC], m_strStateNativeOrigin"]
ms.assetid: eb9e1119-89f5-49a7-b9d4-b91cee1ccc82
---
# CDBException Class

Represents an exception condition arising from the database classes.

## Syntax

```
class CDBException : public CException
```

## Members

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CDBException::m_nRetCode](#m_nretcode)|Contains an Open Database Connectivity (ODBC) return code, of type RETCODE.|
|[CDBException::m_strError](#m_strerror)|Contains a string that describes the error in alphanumeric terms.|
|[CDBException::m_strStateNativeOrigin](#m_strstatenativeorigin)|Contains a string describing the error in terms of the error codes returned by ODBC.|

## Remarks

The class includes two public data members you can use to determine the cause of the exception or to display a text message describing the exception. `CDBException` objects are constructed and thrown by member functions of the database classes.

> [!NOTE]
> This class is one of MFC's Open Database Connectivity (ODBC) classes. If you are instead using the newer Data Access Objects (DAO) classes, use [CDaoException](../../mfc/reference/cdaoexception-class.md) instead. All DAO class names have "CDao" as a prefix. For more information, see the article [Overview: Database Programming](../../data/data-access-programming-mfc-atl.md).

Exceptions are cases of abnormal execution involving conditions outside the program's control, such as data source or network I/O errors. Errors that you might expect to see in the normal course of executing your program are usually not considered exceptions.

You can access these objects within the scope of a **CATCH** expression. You can also throw `CDBException` objects from your own code with the `AfxThrowDBException` global function.

For more information about exception handling in general, or about `CDBException` objects, see the articles [Exception Handling (MFC)](../../mfc/exception-handling-in-mfc.md) and [Exceptions: Database Exceptions](../../mfc/exceptions-database-exceptions.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CException](../../mfc/reference/cexception-class.md)

`CDBException`

## Requirements

**Header:** afxdb.h

## <a name="m_nretcode"></a> CDBException::m_nRetCode

Contains an ODBC error code of type RETCODE returned by an ODBC application programming interface (API) function.

### Remarks

This type includes SQL-prefixed codes defined by ODBC and AFX_SQL-prefixed codes defined by the database classes. For a `CDBException`, this member will contain one of the following values:

- AFX_SQL_ERROR_API_CONFORMANCE The driver for a `CDatabase::OpenEx` or `CDatabase::Open` call does not conform to required ODBC API Conformance level 1 ( SQL_OAC_LEVEL1).

- AFX_SQL_ERROR_CONNECT_FAIL Connection to the data source failed. You passed a NULL`CDatabase` pointer to your recordset constructor and the subsequent attempt to create a connection based on `GetDefaultConnect` failed.

- AFX_SQL_ERROR_DATA_TRUNCATED You requested more data than you have provided storage for. For information on increasing the provided data storage for `CString` or `CByteArray` data types, see the `nMaxLength` argument for [RFX_Text](record-field-exchange-functions.md#rfx_text) and [RFX_Binary](record-field-exchange-functions.md#rfx_binary) under "Macros and Globals."

- AFX_SQL_ERROR_DYNASET_NOT_SUPPORTED A call to `CRecordset::Open` requesting a dynaset failed. Dynasets are not supported by the driver.

- AFX_SQL_ERROR_EMPTY_COLUMN_LIST You attempted to open a table (or what you gave could not be identified as a procedure call or **SELECT** statement) but there are no columns identified in record field exchange (RFX) function calls in your `DoFieldExchange` override.

- AFX_SQL_ERROR_FIELD_SCHEMA_MISMATCH The type of an RFX function in your `DoFieldExchange` override is not compatible with the column data type in the recordset.

- AFX_SQL_ERROR_ILLEGAL_MODE You called `CRecordset::Update` without previously calling `CRecordset::AddNew` or `CRecordset::Edit`.

- AFX_SQL_ERROR_LOCK_MODE_NOT_SUPPORTED Your request to lock records for update could not be fulfilled because your ODBC driver does not support locking.

- AFX_SQL_ERROR_MULTIPLE_ROWS_AFFECTED You called `CRecordset::Update` or `Delete` for a table with no unique key and changed multiple records.

- AFX_SQL_ERROR_NO_CURRENT_RECORD You attempted to edit or delete a previously deleted record. You must scroll to a new current record after a deletion.

- AFX_SQL_ERROR_NO_POSITIONED_UPDATES Your request for a dynaset could not be fulfilled because your ODBC driver does not support positioned updates.

- AFX_SQL_ERROR_NO_ROWS_AFFECTED You called `CRecordset::Update` or `Delete`, but when the operation began the record could no longer be found.

- AFX_SQL_ERROR_ODBC_LOAD_FAILED An attempt to load the ODBC.DLL failed; Windows could not find or could not load this DLL. This error is fatal.

- AFX_SQL_ERROR_ODBC_V2_REQUIRED Your request for a dynaset could not be fulfilled because a Level 2-compliant ODBC driver is required.

- AFX_SQL_ERROR_RECORDSET_FORWARD_ONLY An attempt to scroll did not succeed because the data source does not support backward scrolling.

- AFX_SQL_ERROR_SNAPSHOT_NOT_SUPPORTED A call to `CRecordset::Open` requesting a snapshot failed. Snapshots are not supported by the driver. (This should only occur when the ODBC cursor library ODBCCURS.DLL is not present.)

- AFX_SQL_ERROR_SQL_CONFORMANCE The driver for a `CDatabase::OpenEx` or `CDatabase::Open` call does not conform to the required ODBC SQL Conformance level of "Minimum" (SQL_OSC_MINIMUM).

- AFX_SQL_ERROR_SQL_NO_TOTAL The ODBC driver was unable to specify the total size of a `CLongBinary` data value. The operation probably failed because a global memory block could not be preallocated.

- AFX_SQL_ERROR_RECORDSET_READONLY You attempted to update a read-only recordset, or the data source is read-only. No update operations can be performed with the recordset or the `CDatabase` object it is associated with.

- SQL_ERROR Function failed. The error message returned by the ODBC function `SQLError` is stored in the `m_strError` data member.

- SQL_INVALID_HANDLE Function failed due to an invalid environment handle, connection handle, or statement handle. This indicates a programming error. No additional information is available from the ODBC function `SQLError`.

The SQL-prefixed codes are defined by ODBC. The AFX-prefixed codes are defined in AFXDB.H, found in MFC\INCLUDE.

## <a name="m_strerror"></a> CDBException::m_strError

Contains a string describing the error that caused the exception.

### Remarks

The string describes the error in alphanumeric terms. For more detailed information and an example, see `m_strStateNativeOrigin`.

## <a name="m_strstatenativeorigin"></a> CDBException::m_strStateNativeOrigin

Contains a string describing the error that caused the exception.

### Remarks

The string is of the form "State:%s,Native:%ld,Origin:%s", where the format codes, in order, are replaced by values that describe:

- The SQLSTATE, a null-terminated string containing a five-character error code returned in the *szSqlState* parameter of the ODBC function `SQLError`. SQLSTATE values are listed in Appendix A, [ODBC Error Codes](/sql/odbc/reference/appendixes/appendix-a-odbc-error-codes), in the *ODBC Programmer's Reference*. Example: "S0022".

- The native error code, specific to the data source, returned in the *pfNativeError* parameter of the `SQLError` function. Example: 207.

- The error message text returned in the *szErrorMsg* parameter of the `SQLError` function. This message consists of several bracketed names. As an error is passed from its source to the user, each ODBC component (data source, driver, Driver Manager) appends its own name. This information helps to pinpoint the origin of the error. Example: [Microsoft][ODBC SQL Server Driver][SQL Server]

The framework interprets the error string and puts its components into `m_strStateNativeOrigin`; if `m_strStateNativeOrigin` contains information for more than one error, the errors are separated by newlines. The framework puts the alphanumeric error text into `m_strError`.

For additional information about the codes used to make up this string, see the [SQLError](/sql/odbc/reference/syntax/sqlerror-function) function in the *ODBC Programmer's Reference*.

### Example

From ODBC: "State:S0022,Native:207,Origin:\[Microsoft]\[ODBC SQL Server Driver]\[SQL Server] Invalid column name 'ColName'"

In `m_strStateNativeOrigin`: "State:S0022,Native:207,Origin:\[Microsoft]\[ODBC SQL Server Driver]\[SQL Server]"

In `m_strError`: "Invalid column name 'ColName'"

## See also

[CException Class](../../mfc/reference/cexception-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CDatabase Class](../../mfc/reference/cdatabase-class.md)<br/>
[CRecordset Class](../../mfc/reference/crecordset-class.md)<br/>
[CFieldExchange Class](../../mfc/reference/cfieldexchange-class.md)<br/>
[CRecordset::Update](../../mfc/reference/crecordset-class.md#update)<br/>
[CRecordset::Delete](../../mfc/reference/crecordset-class.md#delete)<br/>
[CException Class](../../mfc/reference/cexception-class.md)
