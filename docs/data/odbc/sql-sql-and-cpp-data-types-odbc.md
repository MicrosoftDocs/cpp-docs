---
description: "Learn more about: SQL: SQL and C++ Data Types (ODBC)"
title: "SQL: SQL and C++ Data Types (ODBC)"
ms.date: "11/04/2016"
helpviewer_keywords: ["data types [C++], SQL vs. C++", "SQL data types [C++]", "SQL [C++], vs. C++ data types"]
ms.assetid: 066e0070-d4da-435c-9c4b-f7cab3352c86
---
# SQL: SQL and C++ Data Types (ODBC)

> [!NOTE]
> This information applies to the MFC ODBC classes. If you are working with the MFC DAO classes, see the topic "Comparison of Microsoft Jet Database Engine SQL and ANSI SQL" in DAO Help.

The following table maps ANSI SQL data types to C++ data types. This augments the C language information given in Appendix D of the [ODBC Programmer's Reference](/sql/odbc/reference/odbc-programmer-s-reference) documentation. The wizards manage most data type mapping for you. If you do not use a wizard, you can use the mapping information to help you write the field exchange code manually.

### ANSI SQL Data Types Mapped to C++ Data Types

|ANSI SQL data type|C++ data type|
|------------------------|---------------------|
|**CHAR**|`CString`|
|**DECIMAL**|`CString` 1|
|**SMALLINT**|**`int`**|
|**REAL**|**`float`**|
|**INTEGER**|**`long`**|
|**FLOAT**|**`double`**|
|**DOUBLE**|**`double`**|
|**NUMERIC**|`CString` 1|
|**VARCHAR**|`CString`|
|**LONGVARCHAR**|`CLongBinary`, `CString` 2|
|**BIT**|**BOOL**|
|**TINYINT**|**BYTE**|
|**BIGINT**|`CString` 1|
|**BINARY**|`CByteArray`|
|**VARBINARY**|`CByteArray`|
|**LONGVARBINARY**|`CLongBinary`, `CByteArray` 3|
|**DATE**|`CTime`, `CString`|
|**TIME**|`CTime`, `CString`|
|**TIMESTAMP**|`CTime`, `CString`|

1. ANSI **DECIMAL** and **NUMERIC** map to `CString` because **SQL_C_CHAR** is the default ODBC transfer type.

2. Character data beyond 255 characters is truncated by default when mapped to `CString`. You can extend the truncation length by explicitly setting the *nMaxLength* argument of `RFX_Text`.

3. Binary data beyond 255 characters is truncated by default when mapped to `CByteArray`. You can extend the truncation length by explicitly setting the *nMaxLength* argument of `RFX_Binary`.

If you are not using the ODBC cursor library, you might encounter a problem when attempting to update two or more long variable-length fields using the Microsoft SQL Server ODBC driver and the MFC ODBC database classes. The ODBC types, **SQL_LONGVARCHAR** and **SQL_LONGVARBINARY**, map to text and image SQL Server types. A `CDBException` is thrown if you update two or more long variable-length fields on the same call to `CRecordset::Update`. Therefore, do not update multiple long columns simultaneously with `CRecordset::Update`. You can update multiple long columns simultaneously with the ODBC API `SQLPutData`. You can also use the ODBC cursor library, but this is not recommended for drivers, like the SQL Server driver, that support cursors and do not need the cursor library.

If you are using the ODBC cursor library with the MFC ODBC database classes and the Microsoft SQL Server ODBC driver, an **ASSERT** might occur along with a `CDBException` if a call to `CRecordset::Update` follows a call to `CRecordset::Requery`. Instead, call `CRecordset::Close` and `CRecordset::Open` rather than `CRecordset::Requery`. Another solution is not to use the ODBC cursor library, because the SQL Server and the SQL Server ODBC driver provide native support for cursors natively and the ODBC cursor library is not needed.

## See also

[SQL](../../data/odbc/sql.md)<br/>
[SQL: Making Direct SQL Calls (ODBC)](../../data/odbc/sql-making-direct-sql-calls-odbc.md)
