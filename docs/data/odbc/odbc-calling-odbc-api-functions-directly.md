---
description: "Learn more about: ODBC: Calling ODBC API Functions Directly"
title: "ODBC: Calling ODBC API Functions Directly"
ms.date: "11/04/2016"
helpviewer_keywords: ["ODBC API functions [C++], calling", "ODBC [C++], catalog functions", "ODBC API functions [C++]", "APIs [C++], calling", "ODBC classes [C++], vs. ODBC API", "direct ODBC API calls", "catalog functions (ODBC)", "catalog functions (ODBC), calling", "ODBC [C++], API functions"]
ms.assetid: 4295f1d9-4528-4d2e-bd6a-c7569953c7fa
---
# ODBC: Calling ODBC API Functions Directly

The database classes provide a simpler interface to a [data source](../../data/odbc/data-source-odbc.md) than does ODBC. As a result, the classes do not encapsulate all the ODBC API. For any functionality that falls outside the abilities of the classes, you must call ODBC API functions directly. For example, you must call the ODBC catalog functions (`::SQLColumns`, `::SQLProcedures`, `::SQLTables`, and others) directly.

> [!NOTE]
> ODBC data sources are accessible through the MFC ODBC classes, as described in this topic, or through the MFC Data Access Object (DAO) classes.

To call an ODBC API function directly, you must take the same steps you would take if you were making the calls without the framework. They steps are:

- Allocate storage for any results the call returns.

- Pass an ODBC `HDBC` or `HSTMT` handle, depending on the parameter signature of the function. Use the [AFXGetHENV](../../mfc/reference/database-macros-and-globals.md#afxgethenv) macro to retrieve the ODBC handle.

   Member variables `CDatabase::m_hdbc` and `CRecordset::m_hstmt` are available so that you do not need to allocate and initialize these yourself.

- Perhaps call additional ODBC functions to prepare for or follow up the main call.

- Deallocate storage when you finish.

For more information about these steps, see the [ODBC Programmer's Reference](/sql/odbc/reference/odbc-programmer-s-reference).

In addition to these steps, you need to take extra steps to check function return values, ensure that your program is not waiting for an asynchronous call to finish, and so on. You can simplify these last steps by using the AFX_SQL_ASYNC and AFX_SQL_SYNC macros. For more information, see [MFC macros and globals](../../mfc/reference/mfc-macros-and-globals.md).

## See also

[ODBC Basics](../../data/odbc/odbc-basics.md)
