---
description: "Learn more about: SQL: Customizing Your Recordset’s SQL Statement (ODBC)"
title: "SQL: Customizing Your Recordset’s SQL Statement (ODBC)"
ms.date: "11/04/2016"
helpviewer_keywords: ["recordsets, SQL statements", "ODBC recordsets, SQL statements", "SQL statements, customizing", "SQL statements, recordset", "customizing SQL statements", "overriding, SQL statements", "SQL, opening recordsets"]
ms.assetid: 72293a08-cef2-4be2-aa1c-30565fcfbaf9
---
# SQL: Customizing Your Recordset’s SQL Statement (ODBC)

This topic explains:

- How the framework constructs a SQL statement

- How to override the SQL statement

> [!NOTE]
> This information applies to the MFC ODBC classes. If you are working with the MFC DAO classes, see the topic "Comparison of Microsoft Jet Database Engine SQL and ANSI SQL" in DAO Help.

## SQL Statement Construction

Your recordset bases record selection primarily on a SQL **SELECT** statement. When you declare your class with a wizard, it writes an overriding version of the `GetDefaultSQL` member function that looks something like this (for a recordset class called `CAuthors`).

```cpp
CString CAuthors::GetDefaultSQL()
{
    return "AUTHORS";
}
```

By default, this override returns the table name you specified with the wizard. In the example, the table name is "AUTHORS." When you later call the recordset's `Open` member function, `Open` constructs a final **SELECT** statement of the form:

```
SELECT rfx-field-list FROM table-name [WHERE m_strFilter]
       [ORDER BY m_strSort]
```

where `table-name` is obtained by calling `GetDefaultSQL` and `rfx-field-list` is obtained from the RFX function calls in `DoFieldExchange`. This is what you get for a **SELECT** statement unless you replace it with an overriding version at run time, although you can also modify the default statement with parameters or a filter.

> [!NOTE]
> If you specify a column name that contains (or could contain) spaces, you must enclose the name in square brackets. For example, the name "First Name" should be "[First Name]".

To override the default **SELECT** statement, pass a string containing a complete **SELECT** statement when you call `Open`. Instead of constructing its own default string, the recordset uses the string you supply. If your replacement statement contains a **WHERE** clause, do not specify a filter in `m_strFilter` because you would then have two filter statements. Similarly, if your replacement statement contains an **ORDER BY** clause, do not specify a sort in `m_strSort` so that you will not have two sort statements.

> [!NOTE]
> If you use literal strings in your filters (or other parts of the SQL statement), you might have to "quote" (enclose in specified delimiters) such strings with a DBMS-specific literal prefix and literal suffix character (or characters).

You might also encounter special syntactic requirements for operations such as outer joins, depending on your DBMS. Use ODBC functions to obtain this information from your driver for the DBMS. For example, call `::SQLGetTypeInfo` for a particular data type, such as `SQL_VARCHAR`, to request the LITERAL_PREFIX and LITERAL_SUFFIX characters. If you are writing database-independent code, see [Appendix C: SQL Grammar](/sql/odbc/reference/appendixes/appendix-c-sql-grammar) in the [ODBC Programmer's Reference](/sql/odbc/reference/odbc-programmer-s-reference) for detailed syntax information.

A recordset object constructs the SQL statement that it uses to select records unless you pass a custom SQL statement. How this is done depends mainly on the value you pass in the *lpszSQL* parameter of the `Open` member function.

The general form of a SQL **SELECT** statement is:

```
SELECT [ALL | DISTINCT] column-list FROM table-list
    [WHERE search-condition][ORDER BY column-list [ASC | DESC]]
```

One way to add the **DISTINCT** keyword to your recordset's SQL statement is to embed the keyword in the first RFX function call in `DoFieldExchange`. For example:

```
...
    RFX_Text(pFX, "DISTINCT CourseID", m_strCourseID);
...
```

> [!NOTE]
> Use this technique only with a recordset opened as read-only.

## Overriding the SQL Statement

The following table shows the possibilities for the *lpszSQL* parameter to `Open`. The cases in the table are explained following the table.

**The lpszSQL Parameter and the Resulting SQL String**

|Case|What you pass in lpszSQL|The resulting SELECT statement|
|----------|------------------------------|------------------------------------|
|1|NULL|**SELECT** *rfx-field-list* **FROM** *table-name*<br /><br /> `CRecordset::Open` calls `GetDefaultSQL` to get the table name. The resulting string is one of cases 2 through 5, depending on what `GetDefaultSQL` returns.|
|2|A table name|**SELECT** *rfx-field-list* **FROM** *table-name*<br /><br /> The field list is taken from the RFX statements in `DoFieldExchange`. If `m_strFilter` and `m_strSort` are not empty, adds the **WHERE** and/or **ORDER BY** clauses.|
|3 \*|A complete **SELECT** statement but without a **WHERE** or **ORDER BY** clause|As passed. If `m_strFilter` and `m_strSort` are not empty, adds the **WHERE** and/or **ORDER BY** clauses.|
|4 \*|A complete **SELECT** statement with a **WHERE** and/or **ORDER BY** clause|As passed. `m_strFilter` and/or `m_strSort` must remain empty, or two filter and/or sort statements are produced.|
|5 \*|A call to a stored procedure|As passed.|

\* `m_nFields` must be less than or equal to the number of columns specified in the **SELECT** statement. The data type of each column specified in the **SELECT** statement must be the same as the data type of the corresponding RFX output column.

### Case 1   lpszSQL = NULL

The recordset selection depends on what `GetDefaultSQL` returns when `CRecordset::Open` calls it. Cases 2 through 5 describe the possible strings.

### Case 2   lpszSQL = a Table Name

The recordset uses record field exchange (RFX) to build the column list from the column names provided in the RFX function calls in the recordset class's override of `DoFieldExchange`. If you used a wizard to declare your recordset class, this case has the same result as case 1 (provided that you pass the same table name you specified in the wizard). If you do not use a wizard to write your class, case 2 is the simplest way to construct the SQL statement.

The following example constructs a SQL statement that selects records from an MFC database application. When the framework calls the `GetDefaultSQL` member function, the function returns the name of the table, `SECTION`.

```cpp
CString CEnrollSet::GetDefaultSQL()
{
    return "SECTION";
}
```

To obtain the names of the columns for the SQL **SELECT** statement, the framework calls the `DoFieldExchange` member function.

```cpp
void CEnrollSet::DoFieldExchange(CFieldExchange* pFX)
{
    pFX->SetFieldType(CFieldExchange::outputColumn);
    RFX_Text(pFX, "CourseID", m_strCourseID);
    RFX_Text(pFX, "InstructorID", m_strInstructorID);
    RFX_Text(pFX, "RoomNo", m_strRoomNo);
    RFX_Text(pFX, "Schedule", m_strSchedule);
    RFX_Text(pFX, "SectionNo", m_strSectionNo);
}
```

When complete, the SQL statement looks like this:

```sql
SELECT CourseID, InstructorID, RoomNo, Schedule, SectionNo
    FROM SECTION
```

### Case 3   lpszSQL = a SELECT/FROM Statement

You specify the column list by hand rather than relying on RFX to construct it automatically. You might want to do this when:

- You want to specify the **DISTINCT** keyword following **SELECT**.

   Your column list should match the column names and types in the same order as they are listed in `DoFieldExchange`.

- You have reason to manually retrieve column values using the ODBC function `::SQLGetData` rather than relying on RFX to bind and retrieve columns for you.

   You might, for example, want to accommodate new columns a customer of your application added to the database tables after the application was distributed. You need to add these extra field data members, which were not known at the time you declared the class with a wizard.

   Your column list should match the column names and types in the same order as they are listed in `DoFieldExchange`, followed by the names of the manually bound columns. For more information, see [Recordset: Dynamically Binding Data Columns (ODBC)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md).

- You want to join tables by specifying multiple tables in the **FROM** clause.

   For information and an example, see [Recordset: Performing a Join (ODBC)](../../data/odbc/recordset-performing-a-join-odbc.md).

### Case 4   lpszSQL = SELECT/FROM Plus WHERE and/or ORDER BY

You specify everything: the column list (based on the RFX calls in `DoFieldExchange`), the table list, and the contents of a **WHERE** and/or an **ORDER BY** clause. If you specify your **WHERE** and/or **ORDER BY** clauses this way, do not use `m_strFilter` and/or `m_strSort`.

### Case 5   lpszSQL = a Stored Procedure Call

If you need to call a predefined query (such as a stored procedure in a Microsoft SQL Server database), you must write a **CALL** statement in the string you pass to *lpszSQL*. The wizards do not support declaring a recordset class for calling a predefined query. Not all predefined queries return records.

If a predefined query does not return records, you can use the `CDatabase` member function `ExecuteSQL` directly. For a predefined query that does return records, you must also manually write the RFX calls in `DoFieldExchange` for any columns the procedure returns. The RFX calls must be in the same order and return the same types, as the predefined query. For more information, see [Recordset: Declaring a Class for a Predefined Query (ODBC)](../../data/odbc/recordset-declaring-a-class-for-a-predefined-query-odbc.md).

## See also

[SQL: SQL and C++ Data Types (ODBC)](../../data/odbc/sql-sql-and-cpp-data-types-odbc.md)<br/>
[SQL: Making Direct SQL Calls (ODBC)](../../data/odbc/sql-making-direct-sql-calls-odbc.md)
