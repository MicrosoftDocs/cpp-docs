---
description: "Learn more about: SQL"
title: "SQL"
ms.date: "05/09/2019"
helpviewer_keywords: ["database classes [C++], SQL statements", "SQL [C++]", "SQL [C++], ODBC", "ODBC [C++], SQL implementation"]
ms.assetid: e3923bc4-b317-4e0b-afd8-3cd403eb0faf
---
# SQL

SQL (Structured Query Language) is a way to communicate with a relational database that lets you define, query, modify, and control the data. Using SQL syntax, you can construct a statement that extracts records according to criteria you specify.

> [!NOTE]
> This information applies to the MFC ODBC classes. If you are working with the MFC DAO classes, see the topic Comparison of Microsoft Jet Database Engine SQL and ANSI SQL in DAO Help.

SQL statements begin with a keyword verb such as **CREATE** or **SELECT**. SQL is a very powerful language; a single statement can affect an entire table.

Many versions of SQL exist, each developed with a particular DBMS in mind. The MFC database classes recognize a set of SQL statements that corresponds to the X/Open and SQL Access Group Common Applications Environment (CAE) SQL draft specification (1991). For information about the syntax of these statements, see Appendix C in the [ODBC Programmer's Reference](/sql/odbc/reference/odbc-programmer-s-reference) documentation.

This topic explains:

- [The relationship between ODBC and SQL](#_core_open_database_connectivity_.28.odbc.29).

- [The most common SQL keywords used by the database classes](#_core_the_database_classes).

- [How the database classes use SQL](#_core_how_the_database_classes_use_sql).

## <a name="_core_open_database_connectivity_.28.odbc.29"></a> Open Database Connectivity (ODBC)

The database classes are implemented with ODBC, which uses SQL in a call-level interface rather than embedding SQL commands in the code. ODBC uses SQL to communicate with a [data source](../../data/odbc/data-source-odbc.md) through ODBC drivers. These drivers interpret the SQL and translate it, if necessary, for use with a particular database format, such as Microsoft Access. For more information about how ODBC uses SQL, see [ODBC](../../data/odbc/odbc-basics.md) and the [ODBC Programmer's Reference](/sql/odbc/reference/odbc-programmer-s-reference) documentation.

## <a name="_core_the_database_classes"></a> Database Classes

> [!NOTE]
> The MFC ODBC Consumer wizard is not available in Visual Studio 2019 and later. You can still create a consumer manually.

The database classes are designed to let you manipulate and update data in an existing [data source](../../data/odbc/data-source-odbc.md). The [MFC Application Wizard](../../mfc/reference/database-support-mfc-application-wizard.md), the [MFC ODBC Consumer Wizard](../../mfc/reference/adding-an-mfc-odbc-consumer.md) (accessed through **Add Class**), and the database classes construct most of the SQL statements for you.

The database classes use a portion of SQL known as the Data Manipulation Language (DML). These commands let you work with all or part of the data source, add new records, edit records, and delete records. The following table lists the most common SQL keywords and the ways the database classes use them.

### Some Common SQL Keywords

|SQL keyword|The wizards and database classes use it|
|-----------------|---------------------------------------------|
|**SELECT**|To identify which tables and columns in the data source are to be used.|
|**WHERE**|To apply a filter that narrows the selection.|
|**ORDER BY**|To apply a sort order to the recordset.|
|**INSERT**|To add new records to a recordset.|
|**DELETE**|To delete records from a recordset.|
|**UPDATE**|To modify the fields of a record.|

In addition, the database classes recognize ODBC **CALL** statements, which you can use to call a predefined query (or stored procedure) on some data sources. The ODBC database driver interprets these statements and substitutes the command appropriate for each DBMS.

> [!NOTE]
> Not all DBMSs support **CALL** statements.

If the classes cannot recognize a user-supplied statement in `CRecordset::Open`, it is interpreted as a table name.

For an explanation of how the framework constructs SQL statements, see [Recordset: How Recordsets Select Records (ODBC)](../../data/odbc/recordset-how-recordsets-select-records-odbc.md) and [SQL: Customizing Your Recordset's SQL Statement (ODBC)](../../data/odbc/sql-customizing-your-recordsets-sql-statement-odbc.md).

SQL databases use data types similar to those used in C and C++. For a discussion of these similarities, see [SQL: SQL and C++ Data Types (ODBC)](../../data/odbc/sql-sql-and-cpp-data-types-odbc.md).

You can find more information about SQL, including a list of supported SQL statements, data types, SQL core grammar, and a reading list of recommended publications about SQL, in the [Microsoft SQL](/sql/) documentation.

## <a name="_core_how_the_database_classes_use_sql"></a> How the Database Classes Use SQL

The recordsets you derive from the database classes use ODBC to communicate with a data source, and ODBC retrieves records from the data source by sending SQL statements. This topic explains the relationship between the database classes and SQL.

A recordset constructs a SQL statement by building up the pieces of a SQL statement into a `CString`. The string is constructed as a **SELECT** statement, which returns a set of records.

When the recordset calls ODBC to send a SQL statement to the data source, the ODBC Driver Manager passes the statement to the ODBC driver and the driver sends it to the underlying DBMS. The DBMS returns a result set of records, and the ODBC driver returns the records to the application. The database classes let your program access the result set in a type-safe C++ class derived from `CRecordset`.

The following topics provide more information about how the database classes use SQL:

- [SQL: Customizing Your Recordset's SQL Statement (ODBC)](../../data/odbc/sql-customizing-your-recordsets-sql-statement-odbc.md)

- [SQL: SQL and C++ Data Types (ODBC)](../../data/odbc/sql-sql-and-cpp-data-types-odbc.md)

- [SQL: Making Direct SQL Calls (ODBC)](../../data/odbc/sql-making-direct-sql-calls-odbc.md)

## See also

[Open Database Connectivity (ODBC)](../../data/odbc/open-database-connectivity-odbc.md)<br/>
[ODBC Basics](../../data/odbc/odbc-basics.md)
