---
description: "Learn more about: Database Macros and Globals"
title: "Database Macros and Globals"
ms.date: "11/04/2016"
f1_keywords: ["AFXDB/AFX_ODBC_CALL", "AFXDB/AFX_SQL_ASYNC", "AFXDB/AFX_SQL_SYNC", "AFXDB/AfxGetHENV"]
helpviewer_keywords: ["global database functions [MFC]", "database macros [MFC]", "database globals [MFC]", "global functions [MFC], database functions", "macros [MFC], MFC database"]
ms.assetid: 5b9b9e61-1cf9-4345-9f29-3807dd466488
---
# Database Macros and Globals

The macros and globals listed below apply to ODBC-based database applications. They are not used with DAO-based applications.

Before MFC 4.2, the macros `AFX_SQL_ASYNC` and `AFX_SQL_SYNC` gave asynchronous operations an opportunity to yield time to other processes. Beginning with MFC 4.2, the implementation of these macros changed because the MFC ODBC classes used only synchronous operations. The macro `AFX_ODBC_CALL` was new to MFC 4.2.

### Database Macros

|Name|Description|
|-|-|
|[AFX_ODBC_CALL](#afx_odbc_call)|Calls an ODBC API function that returns `SQL_STILL_EXECUTING`. `AFX_ODBC_CALL` will repeatedly call the function until it no longer returns `SQL_STILL_EXECUTING`.|
|[AFX_SQL_ASYNC](#afx_sql_async)|Calls `AFX_ODBC_CALL`.|
|[AFX_SQL_SYNC](#afx_sql_sync)|Calls an ODBC API function that does not return `SQL_STILL_EXECUTING`.|

### Database Globals

|Name|Description|
|-|-|
|[AfxDbInitModule](#afxdbinitmodule)|Adds database support for a regular MFC DLL that is dynamically linked to MFC.|
|[AfxGetHENV](#afxgethenv)|Retrieves a handle to the ODBC environment currently in use by MFC. You can use this handle in direct ODBC calls.|

## <a name="afxdbinitmodule"></a> AfxDbInitModule

For MFC database (or DAO) support from a regular MFC DLL that is dynamically linked to MFC, add a call to this function in your regular MFC DLL's `CWinApp::InitInstance` function to initialize the MFC database DLL.

### Syntax

```cpp
void AFXAPI AfxDbInitModule( );
```

### Remarks

Make sure this call occurs before any base-class call or any added code which accesses the MFC database DLL. The MFC database DLL is an MFC extension DLL; in order for an MFC extension DLL to get wired into a `CDynLinkLibrary` chain, it must create a `CDynLinkLibrary` object in the context of every module that will be using it. `AfxDbInitModule` creates the `CDynLinkLibrary` object in your regular MFC DLL's context so that it gets wired into the `CDynLinkLibrary` object chain of the regular MFC DLL.

### Requirements

**Header:** \<afxdll_.h>

## <a name="afx_odbc_call"></a> AFX_ODBC_CALL

Use this macro to call any ODBC API function that may return `SQL_STILL_EXECUTING`.

```
AFX_ODBC_CALL(SQLFunc)
```

### Parameters

*SQLFunc*<br/>
An ODBC API function. For more information about ODBC API functions, see the Windows SDK.

### Remarks

`AFX_ODBC_CALL` repeatedly calls the function until it no longer returns `SQL_STILL_EXECUTING`.

Before invoking `AFX_ODBC_CALL`, you must declare a variable, `nRetCode`, of type RETCODE.

Note that the MFC ODBC classes now use only synchronous processing. In order to perform an asynchronous operation, you must call the ODBC API function `SQLSetConnectOption`. For more information, see the topic "Executing Functions Asynchronously" in the Windows SDK.

### Example

This example uses `AFX_ODBC_CALL` to call the `SQLColumns` ODBC API function, which returns a list of the columns in the table named by `strTableName`. Note the declaration of `nRetCode` and the use of recordset data members to pass parameters to the function. The example also illustrates checking the results of the call with `Check`, a member function of class `CRecordset`. The variable `prs` is a pointer to a `CRecordset` object, declared elsewhere.

[!code-cpp[NVC_MFCDatabase#39](../../mfc/codesnippet/cpp/database-macros-and-globals_1.cpp)]

### Requirements

**Header:** afxdb.h

## <a name="afx_sql_async"></a> AFX_SQL_ASYNC

The implementation of this macro changed in MFC 4.2.

```
AFX_SQL_ASYNC(prs, SQLFunc)
```

### Parameters

*prs*<br/>
A pointer to a `CRecordset` object or a `CDatabase` object. Beginning with MFC 4.2, this parameter value is ignored.

*SQLFunc*<br/>
An ODBC API function. For more information about ODBC API functions, see the Windows SDK.

### Remarks

`AFX_SQL_ASYNC` simply calls the macro [AFX_ODBC_CALL](#afx_odbc_call) and ignores the *prs* parameter. In versions of MFC prior to 4.2, `AFX_SQL_ASYNC` was used to call ODBC API functions that might return `SQL_STILL_EXECUTING`. If an ODBC API function did return `SQL_STILL_EXECUTING`, then `AFX_SQL_ASYNC` would call `prs->OnWaitForDataSource`.

> [!NOTE]
> The MFC ODBC classes now use only synchronous processing. In order to perform an asynchronous operation, you must call the ODBC API function `SQLSetConnectOption`. For more information, see the topic "Executing Functions Asynchronously" in the Windows SDK.

### Requirements

  **Header** afxdb.h

## <a name="afx_sql_sync"></a> AFX_SQL_SYNC

The `AFX_SQL_SYNC` macro simply calls the function `SQLFunc`.

```
AFX_SQL_SYNC(SQLFunc)
```

### Parameters

*SQLFunc*<br/>
An ODBC API function. For more information about these functions, see the Windows SDK.

### Remarks

Use this macro to call ODBC API functions that will not return `SQL_STILL_EXECUTING`.

Before calling `AFX_SQL_SYNC`, you must declare a variable, `nRetCode`, of type RETCODE. You can check the value of `nRetCode` after the macro call.

Note that the implementation of `AFX_SQL_SYNC` changed in MFC 4.2. Because checking the server status was no longer required, `AFX_SQL_SYNC` simply assigns a value to `nRetCode`. For example, instead of making the call

[!code-cpp[NVC_MFCDatabase#40](../../mfc/codesnippet/cpp/database-macros-and-globals_2.cpp)]

you can simply make the assignment

[!code-cpp[NVC_MFCDatabase#41](../../mfc/codesnippet/cpp/database-macros-and-globals_3.cpp)]

### Requirements

  **Header** afxdb.h

## <a name="afxgethenv"></a> AfxGetHENV

You can use the returned handle in direct ODBC calls, but you must not close the handle or assume that the handle is still valid and available after any existing `CDatabase`- or `CRecordset`-derived objects have been destroyed.

```
HENV AFXAPI AfxGetHENV();
```

### Return Value

The handle to the ODBC environment currently in use by MFC. Can be `SQL_HENV_NULL` if there are no [CDatabase](../../mfc/reference/cdatabase-class.md) objects and no [CRecordset](../../mfc/reference/crecordset-class.md) objects in use.

### Requirements

  **Header** afxdb.h

## See also

[Macros and Globals](../../mfc/reference/mfc-macros-and-globals.md)
