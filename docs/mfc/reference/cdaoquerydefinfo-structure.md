---
description: "Learn more about: CDaoQueryDefInfo Structure"
title: "CDaoQueryDefInfo Structure"
ms.date: "11/04/2016"
f1_keywords: ["CDaoQueryDefInfo"]
helpviewer_keywords: ["DAO (Data Access Objects), QueryDefs collection", "CDaoQueryDefInfo structure [MFC]"]
ms.assetid: e20837dc-e78d-4171-a195-1b4075fb5d2a
---
# CDaoQueryDefInfo Structure

The `CDaoQueryDefInfo` structure contains information about a querydef object defined for data access objects (DAO).

## Syntax

```
struct CDaoQueryDefInfo
{
    CString m_strName;               // Primary
    short m_nType;   // Primary
    COleDateTime m_dateCreated;      // Secondary
    COleDateTime m_dateLastUpdated;  // Secondary
    BOOL m_bUpdatable;               // Secondary
    BOOL m_bReturnsRecords;          // Secondary
    CString m_strSQL;                // All
    CString m_strConnect;            // All
    short m_nODBCTimeout;            // All
};
```

#### Parameters

*m_strName*<br/>
Uniquely names the querydef object. For more information, see the topic "Name Property" in DAO Help. Call [CDaoQueryDef::GetName](../../mfc/reference/cdaoquerydef-class.md#getname) to retrieve this property directly.

*m_nType*<br/>
A value that indicates the operational type of a querydef object. The value can be one of the following:

- `dbQSelect` Select — the query selects records.

- `dbQAction` Action — the query moves or changes data but does not return records.

- `dbQCrosstab` Crosstab — the query returns data in a spreadsheet-like format.

- `dbQDelete` Delete — the query deletes a set of specified rows.

- `dbQUpdate` Update — the query changes a set of records.

- `dbQAppend` Append — the query adds new records to the end of a table or query.

- `dbQMakeTable` Make-table — the query creates a new table from a recordset.

- `dbQDDL` Data-definition — the query affects the structure of tables or their parts.

- `dbQSQLPassThrough` Pass-through — the SQL statement is passed directly to the database backend, without intermediate processing.

- `dbQSetOperation` Union — the query creates a snapshot-type recordset object containing data from all specified records in two or more tables with any duplicate records removed. To include the duplicates, add the keyword **ALL** in the querydef's SQL statement.

- `dbQSPTBulk` Used with `dbQSQLPassThrough` to specify a query that does not return records.

> [!NOTE]
> To create a SQL pass-through query, you do not set the `dbQSQLPassThrough` constant. This is set automatically by the Microsoft Jet database engine when you create a querydef object and set the Connect property.

For more information, see the topic "Type Property" in DAO Help.

*m_dateCreated*<br/>
The date and time the querydef was created. To directly retrieve the date the querydef was created, call the [GetDateCreated](../../mfc/reference/cdaotabledef-class.md#getdatecreated) member function of the `CDaoTableDef` object associated with the table. See Comments below for more information. Also see the topic "DateCreated, LastUpdated Properties" in DAO Help.

*m_dateLastUpdated*<br/>
The date and time of the most recent change made to the querydef. To directly retrieve the date the table was last updated, call the [GetDateLastUpdated](../../mfc/reference/cdaoquerydef-class.md#getdatelastupdated) member function of the querydef. See Comments below for more information. And see the topic "DateCreated, LastUpdated Properties" in DAO Help.

*m_bUpdatable*<br/>
Indicates whether changes can be made to a querydef object. If this property is TRUE, the querydef is updatable; otherwise, it is not. Updatable means the querydef object's query definition can be changed. The Updatable property of a querydef object is set to TRUE if the query definition can be updated, even if the resulting recordset is not updatable. To retrieve this property directly, call the querydef's [CanUpdate](../../mfc/reference/cdaoquerydef-class.md#canupdate) member function. For more information, see the topic "Updatable Property" in DAO Help.

*m_bReturnsRecords*<br/>
Indicates whether a SQL pass-through query to an external database returns records. If this property is TRUE, the query returns records. To directly retrieve this property, call [CDaoQueryDef::GetReturnsRecords](../../mfc/reference/cdaoquerydef-class.md#getreturnsrecords). Not all SQL pass-through queries to external databases return records. For example, a SQL **UPDATE** statement updates records without returning records, while a SQL **SELECT** statement does return records. For more information, see the topic "ReturnsRecords Property" in DAO Help.

*m_strSQL*<br/>
The SQL statement that defines the query executed by a querydef object. The SQL property contains the SQL statement that determines how records are selected, grouped, and ordered when you execute the query. You can use the query to select records to include in a dynaset- or snapshot-type recordset object. You can also define bulk queries to modify data without returning records. You can retrieve the value of this property directly by calling the querydef's [GetSQL](../../mfc/reference/cdaoquerydef-class.md#getsql) member function.

*m_strConnect*<br/>
Provides information about the source of a database used in a pass-through query. This information takes the form of a connect string. For more information about connect strings, and for information about retrieving the value of this property directly, see the [CDaoDatabase::GetConnect](../../mfc/reference/cdaodatabase-class.md#getconnect) member function.

*m_nODBCTimeout*<br/>
The number of seconds the Microsoft Jet database engine waits before a timeout error occurs when a query is run on an ODBC database. When you're using an ODBC database, such as Microsoft SQL Server, there may be delays because of network traffic or heavy use of the ODBC server. Rather than waiting indefinitely, you can specify how long the Microsoft Jet engine waits before it produces an error. The default timeout value is 60 seconds. You can retrieve the value of this property directly by calling the querydef's [GetODBCTimeout](../../mfc/reference/cdaoquerydef-class.md#getodbctimeout) member function. For more information, see the topic "ODBCTimeout Property" in DAO Help.

## Remarks

The querydef is an object of class [CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md). The references to Primary, Secondary, and All above indicate how the information is returned by the [GetQueryDefInfo](../../mfc/reference/cdaodatabase-class.md#getquerydefinfo) member function in class `CDaoDatabase`.

Information retrieved by the [CDaoDatabase::GetQueryDefInfo](../../mfc/reference/cdaodatabase-class.md#getquerydefinfo) member function is stored in a `CDaoQueryDefInfo` structure. Call `GetQueryDefInfo` for the database object in whose QueryDefs collection the querydef object is stored. `CDaoQueryDefInfo` also defines a `Dump` member function in debug builds. You can use `Dump` to dump the contents of a `CDaoQueryDefInfo` object. Class `CDaoDatabase` also supplies member functions for directly accessing all of the properties returned in a `CDaoQueryDefInfo` object, so you will probably seldom need to call `GetQueryDefInfo`.

When you append a new field or parameter object to the Fields or Parameters collection of a querydef object, an exception is thrown if the underlying database does not support the data type specified for the new object.

The date and time settings are derived from the computer on which the querydef was created or last updated. In a multiuser environment, users should get these settings directly from the file server using the **net time** command to avoid discrepancies in the DateCreated and LastUpdated property settings.

## Requirements

**Header:** afxdao.h

## See also

[Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[CDaoQueryDef Class](../../mfc/reference/cdaoquerydef-class.md)<br/>
[CDaoDatabase Class](../../mfc/reference/cdaodatabase-class.md)
