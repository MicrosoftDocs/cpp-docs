---
description: "Learn more about: Schema  (MFC Data Access)"
title: "Schema  (MFC Data Access)"
ms.date: "11/04/2016"
helpviewer_keywords: ["structures [C++], database", "databases [C++], schema", "database schema [C++], about database schemas", "database schema [C++]", "schemas [C++], database", "structures [C++]"]
ms.assetid: 7d17e35f-1ccf-4853-b915-5b8c7a45b9ee
---
# Schema  (MFC Data Access)

A database schema describes the current structure of the tables and database views in the database. In general, wizard-generated code assumes that the schema for the table or tables accessed by a recordset will not change, but the database classes can deal with some schema changes, such as adding, reordering, or deleting unbound columns. If a table changes, you must manually update the recordset for the table, then recompile your application.

You can also supplement the wizard-generated code to deal with a database whose schema is not entirely known at compile time. For more information, see [Recordset: Dynamically Binding Data Columns (ODBC)](../data/odbc/recordset-dynamically-binding-data-columns-odbc.md).

## See also

[Data Access Programming (MFC/ATL)](../data/data-access-programming-mfc-atl.md)<br/>
[SQL](../data/odbc/sql.md)<br/>
[Recordset (ODBC)](../data/odbc/recordset-odbc.md)
