---
description: "Learn more about: CDaoDatabase Class"
title: "CDaoDatabase Class"
ms.date: "09/17/2019"
f1_keywords: ["CDaoDatabase", "AFXDAO/CDaoDatabase", "AFXDAO/CDaoDatabase::CDaoDatabase", "AFXDAO/CDaoDatabase::CanTransact", "AFXDAO/CDaoDatabase::CanUpdate", "AFXDAO/CDaoDatabase::Close", "AFXDAO/CDaoDatabase::Create", "AFXDAO/CDaoDatabase::CreateRelation", "AFXDAO/CDaoDatabase::DeleteQueryDef", "AFXDAO/CDaoDatabase::DeleteRelation", "AFXDAO/CDaoDatabase::DeleteTableDef", "AFXDAO/CDaoDatabase::Execute", "AFXDAO/CDaoDatabase::GetConnect", "AFXDAO/CDaoDatabase::GetName", "AFXDAO/CDaoDatabase::GetQueryDefCount", "AFXDAO/CDaoDatabase::GetQueryDefInfo", "AFXDAO/CDaoDatabase::GetQueryTimeout", "AFXDAO/CDaoDatabase::GetRecordsAffected", "AFXDAO/CDaoDatabase::GetRelationCount", "AFXDAO/CDaoDatabase::GetRelationInfo", "AFXDAO/CDaoDatabase::GetTableDefCount", "AFXDAO/CDaoDatabase::GetTableDefInfo", "AFXDAO/CDaoDatabase::GetVersion", "AFXDAO/CDaoDatabase::IsOpen", "AFXDAO/CDaoDatabase::Open", "AFXDAO/CDaoDatabase::SetQueryTimeout", "AFXDAO/CDaoDatabase::m_pDAODatabase", "AFXDAO/CDaoDatabase::m_pWorkspace"]
helpviewer_keywords: ["CDaoDatabase [MFC], CDaoDatabase", "CDaoDatabase [MFC], CanTransact", "CDaoDatabase [MFC], CanUpdate", "CDaoDatabase [MFC], Close", "CDaoDatabase [MFC], Create", "CDaoDatabase [MFC], CreateRelation", "CDaoDatabase [MFC], DeleteQueryDef", "CDaoDatabase [MFC], DeleteRelation", "CDaoDatabase [MFC], DeleteTableDef", "CDaoDatabase [MFC], Execute", "CDaoDatabase [MFC], GetConnect", "CDaoDatabase [MFC], GetName", "CDaoDatabase [MFC], GetQueryDefCount", "CDaoDatabase [MFC], GetQueryDefInfo", "CDaoDatabase [MFC], GetQueryTimeout", "CDaoDatabase [MFC], GetRecordsAffected", "CDaoDatabase [MFC], GetRelationCount", "CDaoDatabase [MFC], GetRelationInfo", "CDaoDatabase [MFC], GetTableDefCount", "CDaoDatabase [MFC], GetTableDefInfo", "CDaoDatabase [MFC], GetVersion", "CDaoDatabase [MFC], IsOpen", "CDaoDatabase [MFC], Open", "CDaoDatabase [MFC], SetQueryTimeout", "CDaoDatabase [MFC], m_pDAODatabase", "CDaoDatabase [MFC], m_pWorkspace"]
ms.assetid: 8ff5b342-964d-449d-bef1-d0ff56aadf6d
---
# CDaoDatabase Class

Represents a connection to an Access database using Data Access Objects (DAO). DAO is supported through Office 2013. DAO 3.6 is the final version, and it is considered obsolete.

## Syntax

```
class CDaoDatabase : public CObject
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CDaoDatabase::CDaoDatabase](#cdaodatabase)|Constructs a `CDaoDatabase` object. Call `Open` to connect the object to a database.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CDaoDatabase::CanTransact](#cantransact)|Returns nonzero if the database supports transactions.|
|[CDaoDatabase::CanUpdate](#canupdate)|Returns nonzero if the `CDaoDatabase` object is updatable (not read-only).|
|[CDaoDatabase::Close](#close)|Closes the database connection.|
|[CDaoDatabase::Create](#create)|Creates the underlying DAO database object and initializes the `CDaoDatabase` object.|
|[CDaoDatabase::CreateRelation](#createrelation)|Defines a new relation among the tables in the database.|
|[CDaoDatabase::DeleteQueryDef](#deletequerydef)|Deletes a querydef object saved in the database's QueryDefs collection.|
|[CDaoDatabase::DeleteRelation](#deleterelation)|Deletes an existing relation between tables in the database.|
|[CDaoDatabase::DeleteTableDef](#deletetabledef)|Deletes the definition of a table in the database. This deletes the actual table and all of its data.|
|[CDaoDatabase::Execute](#execute)|Executes an action query. Calling `Execute` for a query that returns results throws an exception.|
|[CDaoDatabase::GetConnect](#getconnect)|Returns the connection string used to connect the `CDaoDatabase` object to a database. Used for ODBC.|
|[CDaoDatabase::GetName](#getname)|Returns the name of the database currently in use.|
|[CDaoDatabase::GetQueryDefCount](#getquerydefcount)|Returns the number of queries defined for the database.|
|[CDaoDatabase::GetQueryDefInfo](#getquerydefinfo)|Returns information about a specified query defined in the database.|
|[CDaoDatabase::GetQueryTimeout](#getquerytimeout)|Returns the number of seconds after which database query operations will time out. Affects all subsequent open, add new, update, and edit operations and other operations on ODBC data sources (only) such as `Execute` calls.|
|[CDaoDatabase::GetRecordsAffected](#getrecordsaffected)|Returns the number of records affected by the last update, edit, or add operation or by a call to `Execute`.|
|[CDaoDatabase::GetRelationCount](#getrelationcount)|Returns the number of relations defined between tables in the database.|
|[CDaoDatabase::GetRelationInfo](#getrelationinfo)|Returns information about a specified relation defined between tables in the database.|
|[CDaoDatabase::GetTableDefCount](#gettabledefcount)|Returns the number of tables defined in the database.|
|[CDaoDatabase::GetTableDefInfo](#gettabledefinfo)|Returns information about a specified table in the database.|
|[CDaoDatabase::GetVersion](#getversion)|Returns the version of the database engine associated with the database.|
|[CDaoDatabase::IsOpen](#isopen)|Returns nonzero if the `CDaoDatabase` object is currently connected to a database.|
|[CDaoDatabase::Open](#open)|Establishes a connection to a database.|
|[CDaoDatabase::SetQueryTimeout](#setquerytimeout)|Sets the number of seconds after which database query operations (on ODBC data sources only) will time out. Affects all subsequent open, add new, update, and delete operations.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CDaoDatabase::m_pDAODatabase](#m_pdaodatabase)|A pointer to the underlying DAO database object.|
|[CDaoDatabase::m_pWorkspace](#m_pworkspace)|A pointer to the [CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md) object that contains the database and defines its transaction space.|

## Remarks

For information about the database formats supported, see the [GetName](../../mfc/reference/cdaoworkspace-class.md#getname) member function. You can have one or more `CDaoDatabase` objects active at a time in a given "workspace," represented by a [CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md) object. The workspace maintains a collection of open database objects, called the Databases collection.

## Usage

You can create database objects implicitly, when you create recordset objects. But you can also create database objects explicitly. To use an existing database explicitly with `CDaoDatabase`, do either of the following:

- Construct a `CDaoDatabase` object, passing a pointer to an open [CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md) object.

- Or construct a `CDaoDatabase` object without specifying the workspace (MFC creates a temporary workspace object).

To create a new Microsoft Jet (.MDB) database, construct a `CDaoDatabase` object and call its [Create](#create) member function. Do *not* call `Open` after `Create`.

To open an existing database, construct a `CDaoDatabase` object and call its [Open](#open) member function.

Any of these techniques appends the DAO database object to the workspace's Databases collection and opens a connection to the data. When you then construct [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md), [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md), or [CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md) objects for operating on the connected database, pass the constructors for these objects a pointer to your `CDaoDatabase` object. When you finish using the connection, call the [Close](#close) member function and destroy the `CDaoDatabase` object. `Close` closes any recordsets you have not closed previously.

## Transactions

Database transaction processing is supplied at the workspace level — see the [BeginTrans](../../mfc/reference/cdaoworkspace-class.md#begintrans), [CommitTrans](../../mfc/reference/cdaoworkspace-class.md#committrans), and [Rollback](../../mfc/reference/cdaoworkspace-class.md#rollback) member functions of class `CDaoWorkspace`.

## ODBC Connections

The recommended way to work with ODBC data sources is to attach external tables to a Microsoft Jet (.MDB) database.

## Collections

Each database maintains its own collections of tabledef, querydef, recordset, and relation objects. Class `CDaoDatabase` supplies member functions for manipulating these objects.

> [!NOTE]
> The objects are stored in DAO, not in the MFC database object. MFC supplies classes for tabledef, querydef, and recordset objects but not for relation objects.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

`CDaoDatabase`

## Requirements

**Header:** afxdao.h

## <a name="cantransact"></a> CDaoDatabase::CanTransact

Call this member function to determine whether the database allows transactions.

```
BOOL CanTransact();
```

### Return Value

Nonzero if the database supports transactions; otherwise 0.

### Remarks

Transactions are managed in the database's workspace.

## <a name="canupdate"></a> CDaoDatabase::CanUpdate

Call this member function to determine whether the `CDaoDatabase` object allows updates.

```
BOOL CanUpdate();
```

### Return Value

Nonzero if the `CDaoDatabase` object allows updates; otherwise 0, indicating either that you passed TRUE in *bReadOnly* when you opened the `CDaoDatabase` object or that the database itself is read-only. See the [Open](#open) member function.

### Remarks

For information about database updatability, see the topic "Updatable Property" in DAO Help.

## <a name="cdaodatabase"></a> CDaoDatabase::CDaoDatabase

Constructs a `CDaoDatabase` object.

```
CDaoDatabase(CDaoWorkspace* pWorkspace = NULL);
```

### Parameters

*pWorkspace*<br/>
A pointer to the `CDaoWorkspace` object that will contain the new database object. If you accept the default value of NULL, the constructor creates a temporary `CDaoWorkspace` object that uses the default DAO workspace. You can get a pointer to the workspace object via the [m_pWorkspace](#m_pworkspace) data member.

### Remarks

After constructing the object, if you are creating a new Microsoft Jet (.MDB) database, call the object's [Create](#create) member function. If you are, instead, opening an existing database, call the object's [Open](#open) member function.

When you finish with the object, you should call its [Close](#close) member function and then destroy the `CDaoDatabase` object.

You might find it convenient to embed the `CDaoDatabase` object in your document class.

> [!NOTE]
> A `CDaoDatabase` object is also created implicitly if you open a [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) object without passing a pointer to an existing `CDaoDatabase` object. This database object is closed when you close the recordset object.

## <a name="close"></a> CDaoDatabase::Close

Call this member function to disconnect from a database and close any open recordsets, tabledefs, and querydefs associated with the database.

```
virtual void Close();
```

### Remarks

It is good practice to close these objects yourself before you call this member function. Closing a `CDaoDatabase` object removes it from the Databases collection in the associated [workspace](../../mfc/reference/cdaoworkspace-class.md). Because `Close` does not destroy the `CDaoDatabase` object, you can reuse the object by opening the same database or a different database.

> [!CAUTION]
> Call the [Update](../../mfc/reference/cdaorecordset-class.md#update) member function (if there are pending edits) and the `Close` member function on all open recordset objects before you close a database. If you exit a function that declares [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) or `CDaoDatabase` objects on the stack, the database is closed, any unsaved changes are lost, all pending transactions are rolled back, and any pending edits to your data are lost.

> [!CAUTION]
> If you try to close a database object while any recordset objects are open, or if you try to close a workspace object while any database objects belonging to that specific workspace are open, those recordset objects will be closed and any pending updates or edits will be rolled back. If you try to close a workspace object while any database objects belonging to it are open, the operation closes all database objects belonging to that specific workspace object, which may result in unclosed recordset objects being closed. If you do not close your database object, MFC reports an assertion failure in debug builds.

If the database object is defined outside the scope of a function, and you exit the function without closing it, the database object will remain open until explicitly closed or the module in which it is defined is out of scope.

## <a name="create"></a> CDaoDatabase::Create

To create a new Microsoft Jet (.MDB) database, call this member function after you construct a `CDaoDatabase` object.

```
virtual void Create(
    LPCTSTR lpszName,
    LPCTSTR lpszLocale = dbLangGeneral,
    int dwOptions = 0);
```

### Parameters

*lpszName*<br/>
A string expression that is the name of the database file that you are creating. It can be the full path and filename, such as "C:\\\MYDB.MDB". You must supply a name. If you do not supply a filename extension, .MDB is appended. If your network supports the uniform naming convention (UNC), you can also specify a network path, such as "\\\\\\\MYSERVER\\\MYSHARE\\\MYDIR\\\MYDB". Only Microsoft Jet (.MDB) database files can be created using this member function. (Double backslashes are required in string literals because "\\" is the C++ escape character.)

*lpszLocale*<br/>
A string expression used to specify collating order for creating the database. The default value is `dbLangGeneral`. Possible values are:

- `dbLangGeneral` English, German, French, Portuguese, Italian, and Modern Spanish

- `dbLangArabic` Arabic

- `dbLangCyrillic` Russian

- `dbLangCzech` Czech

- `dbLangDutch` Dutch

- `dbLangGreek` Greek

- `dbLangHebrew` Hebrew

- `dbLangHungarian` Hungarian

- `dbLangIcelandic` Icelandic

- `dbLangNordic` Nordic languages (Microsoft Jet database engine version 1.0 only)

- `dbLangNorwdan` Norwegian and Danish

- `dbLangPolish` Polish

- `dbLangSpanish` Traditional Spanish

- `dbLangSwedfin` Swedish and Finnish

- `dbLangTurkish` Turkish

*dwOptions*<br/>
An integer that indicates one or more options. Possible values are:

- `dbEncrypt` Create an encrypted database.

- `dbVersion10` Create a database with Microsoft Jet database version 1.0.

- `dbVersion11` Create a database with Microsoft Jet database version 1.1.

- `dbVersion20` Create a database with Microsoft Jet database version 2.0.

- `dbVersion30` Create a database with Microsoft Jet database version 3.0.

If you omit the encryption constant, an unencrypted database is created. You can specify only one version constant. If you omit a version constant, a database that uses the Microsoft Jet database version 3.0 is created.

> [!CAUTION]
> If a database is not encrypted, it is possible, even if you implement user/password security, to directly read the binary disk file that constitutes the database.

### Remarks

`Create` creates the database file and the underlying DAO database object and initializes the C++ object. The object is appended to the associated workspace's Databases collection. The database object is in an open state; do not call `Open*` after `Create`.

> [!NOTE]
> With `Create`, you can create only Microsoft Jet (.MDB) databases. You cannot create ISAM databases or ODBC databases.

## <a name="createrelation"></a> CDaoDatabase::CreateRelation

Call this member function to establish a relation between one or more fields in a primary table in the database and one or more fields in a foreign table (another table in the database).

```cpp
void CreateRelation(
    LPCTSTR lpszName,
    LPCTSTR lpszTable,
    LPCTSTR lpszForeignTable,
    long lAttributes,
    LPCTSTR lpszField,
    LPCTSTR lpszForeignField);

void CreateRelation(CDaoRelationInfo& relinfo);
```

### Parameters

*lpszName*<br/>
The unique name of the relation object. The name must start with a letter and can contain a maximum of 40 characters. It can include numbers and underscore characters but cannot include punctuation or spaces.

*lpszTable*<br/>
The name of the primary table in the relation. If the table does not exist, MFC throws an exception of type [CDaoException](../../mfc/reference/cdaoexception-class.md).

*lpszForeignTable*<br/>
The name of the foreign table in the relation. If the table does not exist, MFC throws an exception of type `CDaoException`.

*lAttributes*<br/>
A long value that contains information about the relationship type. You can use this value to enforce referential integrity, among other things. You can use the bitwise-OR operator ( **&#124;**) to combine any of the following values (as long as the combination makes sense):

- `dbRelationUnique` Relationship is one-to-one.

- `dbRelationDontEnforce` Relationship is not enforced (no referential integrity).

- `dbRelationInherited` Relationship exists in a noncurrent database that contains the two attached tables.

- `dbRelationUpdateCascade` Updates will cascade (for more on cascades, see Remarks).

- `dbRelationDeleteCascade` Deletions will cascade.

*lpszField*<br/>
A pointer to a null-terminated string containing the name of a field in the primary table (named by *lpszTable*).

*lpszForeignField*<br/>
A pointer to a null-terminated string containing the name of a field in the foreign table (named by *lpszForeignTable*).

*relinfo*<br/>
A reference to a [CDaoRelationInfo](../../mfc/reference/cdaorelationinfo-structure.md) object that contains information about the relation you want to create.

### Remarks

The relationship cannot involve a query or an attached table from an external database.

Use the first version of the function when the relation involves one field in each of the two tables. Use the second version when the relation involves multiple fields. The maximum number of fields in a relation is 14.

This action creates an underlying DAO relation object, but this is an MFC implementation detail since MFC's encapsulation of relation objects is contained within class `CDaoDatabase`. MFC does not supply a class for relations.

If you set the relation object's attributes to activate cascade operations, the database engine automatically updates or deletes records in one or more other tables when changes are made to related primary key tables.

For example, suppose you establish a cascade delete relationship between a Customers table and an Orders table. When you delete records from the Customers table, records in the Orders table related to that customer are also deleted. In addition, if you establish cascade delete relationships between the Orders table and other tables, records from those tables are automatically deleted when you delete records from the Customers table.

For related information, see the topic "CreateRelation Method" in DAO Help.

## <a name="deletequerydef"></a> CDaoDatabase::DeleteQueryDef

Call this member function to delete the specified querydef — saved query — from the `CDaoDatabase` object's QueryDefs collection.

```cpp
void DeleteQueryDef(LPCTSTR lpszName);
```

### Parameters

*lpszName*<br/>
The name of the saved query to delete.

### Remarks

Afterwards, that query is no longer defined in the database.

For information about creating querydef objects, see class [CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md). A querydef object becomes associated with a particular `CDaoDatabase` object when you construct the `CDaoQueryDef` object, passing it a pointer to the database object.

## <a name="deleterelation"></a> CDaoDatabase::DeleteRelation

Call this member function to delete an existing relation from the database object's Relations collection.

```cpp
void DeleteRelation(LPCTSTR lpszName);
```

### Parameters

*lpszName*<br/>
The name of the relation to delete.

### Remarks

Afterwards, the relation no longer exists.

For related information, see the topic "Delete Method" in DAO Help.

## <a name="deletetabledef"></a> CDaoDatabase::DeleteTableDef

Call this member function to delete the specified table and all of its data from the `CDaoDatabase` object's TableDefs collection.

```cpp
void DeleteTableDef(LPCTSTR lpszName);
```

### Parameters

*lpszName*<br/>
The name of the tabledef to delete.

### Remarks

Afterwards, that table is no longer defined in the database.

> [!NOTE]
> Be very careful not to delete system tables.

For information about creating tabledef objects, see class [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md). A tabledef object becomes associated with a particular `CDaoDatabase` object when you construct the `CDaoTableDef` object, passing it a pointer to the database object.

For related information, see the topic "Delete Method" in DAO Help.

## <a name="execute"></a> CDaoDatabase::Execute

Call this member function to run an action query or execute a SQL statement on the database.

```cpp
void Execute(
    LPCTSTR lpszSQL,
    int nOptions = dbFailOnError);
```

### Parameters

*lpszSQL*<br/>
Pointer to a null-terminated string containing a valid SQL command to execute.

*nOptions*<br/>
An integer that specifies options relating to the integrity of the query. You can use the bitwise-OR operator ( **&#124;**) to combine any of the following constants (provided the combination makes sense — for example, you would not combine `dbInconsistent` with `dbConsistent`):

- `dbDenyWrite` Deny write permission to other users.

- `dbInconsistent` (Default) Inconsistent updates.

- `dbConsistent` Consistent updates.

- `dbSQLPassThrough` SQL pass-through. Causes the SQL statement to be passed to an ODBC data source for processing.

- `dbFailOnError` Roll back updates if an error occurs.

- `dbSeeChanges` Generate a run-time error if another user is changing data you are editing.

> [!NOTE]
> If both `dbInconsistent` and `dbConsistent` are included or if neither is included, the result is the default. For an explanation of these constants, see the topic "Execute Method" in DAO Help.

### Remarks

`Execute` works only for action queries or SQL pass-through queries that do not return results. It does not work for select queries, which return records.

For a definition and information about action queries, see the topics "Action Query" and "Execute Method" in DAO Help.

> [!TIP]
> Given a syntactically correct SQL statement and proper permissions, the `Execute` member function will not fail even if not a single row can be modified or deleted. Therefore, always use the `dbFailOnError` option when using the `Execute` member function to run an update or delete query. This option causes MFC to throw an exception of type [CDaoException](../../mfc/reference/cdaoexception-class.md) and rolls back all successful changes if any of the records affected are locked and cannot be updated or deleted. Note that you can always call `GetRecordsAffected` to see how many records were affected.

Call the [GetRecordsAffected](#getrecordsaffected) member function of the database object to determine the number of records affected by the most recent `Execute` call. For example, `GetRecordsAffected` returns information about the number of records deleted, updated, or inserted when executing an action query. The count returned will not reflect changes in related tables when cascade updates or deletes are in effect.

`Execute` does not return a recordset. Using `Execute` on a query that selects records causes MFC to throw an exception of type `CDaoException`. (There is no `ExecuteSQL` member function analogous to `CDatabase::ExecuteSQL`.)

## <a name="getconnect"></a> CDaoDatabase::GetConnect

Call this member function to retrieve the connection string used to connect the `CDaoDatabase` object to an ODBC or ISAM database.

```
CString GetConnect();
```

### Return Value

The connection string if [Open](#open) has been called successfully on an ODBC data source; otherwise, an empty string. For a Microsoft Jet (.MDB) database, the string is always empty unless you set it for use with the `dbSQLPassThrough` option used with the [Execute](#execute) member function or used in opening a recordset.

### Remarks

The string provides information about the source of an open database or a database used in a pass-through query. The connection string is composed of a database type specifier and zero or more parameters separated by semicolons.

> [!NOTE]
> Using the MFC DAO classes to connect to a data source via ODBC is less efficient than connecting via an attached table.

> [!NOTE]
> The connection string is used to pass additional information to ODBC and certain ISAM drivers as needed. It is not used for .MDB databases. For Microsoft Jet database base tables, the connection string is an empty string ("") except when you use it for a SQL pass-through query as described under Return Value above.

See the [Open](#open) member function for a description of how the connection string is created. Once the connection string has been set in the `Open` call, you can later use it to check the setting to determine the type, path, user ID, Password, or ODBC data source of the database.

## <a name="getname"></a> CDaoDatabase::GetName

Call this member function to retrieve the name of the currently open database, which is the name of an existing database file or the name of a registered ODBC data source.

```
CString GetName();
```

### Return Value

The full path and file name of the database if successful; otherwise, an empty [CString](../../atl-mfc-shared/reference/cstringt-class.md).

### Remarks

If your network supports the uniform naming convention (UNC), you can also specify a network path—for example, "\\\\\\\MYSERVER\\\MYSHARE\\\MYDIR\\\MYDB.MDB". (Double backslashes are required in string literals because "\\" is the C++ escape character.)

You might, for example, want to display this name in a heading. If an error occurs while the name is being retrieved, MFC throws an exception of type [CDaoException](../../mfc/reference/cdaoexception-class.md).

> [!NOTE]
> For better performance when external databases are being accessed, we recommend that you attach external database tables to a Microsoft Jet database (.MDB) rather than connecting directly to the data source.

The database type is indicated by the file or directory that the path points to, as follows:

|Pathname points to..|Database type|
|--------------------------|-------------------|
|.MDB file|Microsoft Jet database (Microsoft Access)|
|Directory that contains .DBF file(s)|dBASE database|
|Directory that contains .XLS file|Microsoft Excel database|
|Directory that contains .PDX file(s)|Paradox database|
|Directory that contains appropriately formatted text database files|Text format database|

For ODBC databases such as SQL Server and Oracle, the database's connection string identifies a data source name (DSN) that's registered by ODBC.

## <a name="getquerydefcount"></a> CDaoDatabase::GetQueryDefCount

Call this member function to retrieve the number of queries defined in the database's QueryDefs collection.

```
short GetQueryDefCount();
```

### Return Value

The number of queries defined in the database.

### Remarks

`GetQueryDefCount` is useful if you need to loop through all querydefs in the QueryDefs collection. To obtain information about a given query in the collection, see [GetQueryDefInfo](#getquerydefinfo).

## <a name="getquerydefinfo"></a> CDaoDatabase::GetQueryDefInfo

Call this member function to obtain various kinds of information about a query defined in the database.

```cpp
void GetQueryDefInfo(
    int nIndex,
    CDaoQueryDefInfo& querydefinfo,
    DWORD dwInfoOptions = AFX_DAO_PRIMARY_INFO);

void GetQueryDefInfo(
    LPCTSTR lpszName,
    CDaoQueryDefInfo& querydefinfo,
    DWORD dwInfoOptions = AFX_DAO_PRIMARY_INFO);
```

### Parameters

*nIndex*<br/>
The index of the predefined query in the database's QueryDefs collection, for lookup by index.

*querydefinfo*<br/>
A reference to a [CDaoQueryDefInfo](../../mfc/reference/cdaoquerydefinfo-structure.md) object that returns the information requested.

*dwInfoOptions*<br/>
Options that specify which information about the recordset to retrieve. The available options are listed here along with what they cause the function to return about the recordset:

- AFX_DAO_PRIMARY_INFO (Default) Name, Type

- AFX_DAO_SECONDARY_INFO Primary information plus: Date Created, Date of Last Update, Returns Records, Updatable

- AFX_DAO_ALL_INFO Primary and secondary information plus: SQL, Connect, ODBCTimeout

*lpszName*<br/>
A string containing the name of a query defined in the database, for lookup by name.

### Remarks

Two versions of the function are supplied so you can select a query either by index in the database's QueryDefs collection or by the name of the query.

For a description of the information returned in *querydefinfo*, see the [CDaoQueryDefInfo](../../mfc/reference/cdaoquerydefinfo-structure.md) structure. This structure has members that correspond to the items of information listed above in the description of *dwInfoOptions*. If you request one level of information, you get any prior levels of information as well.

## <a name="getquerytimeout"></a> CDaoDatabase::GetQueryTimeout

Call this member function to retrieve the current number of seconds to allow before subsequent operations on the connected database are timed out.

```
short GetQueryTimeout();
```

### Return Value

A short integer containing the timeout value in seconds.

### Remarks

An operation might time out due to network access problems, excessive query processing time, and so on. While the setting is in effect, it affects all open, add new, update, and delete operations on any recordsets associated with this `CDaoDatabase` object. You can change the current timeout setting by calling [SetQueryTimeout](#setquerytimeout). Changing the query timeout value for a recordset after opening does not change the value for the recordset. For example, subsequent [Move](../../mfc/reference/cdaorecordset-class.md#move) operations do not use the new value. The default value is initially set when the database engine is initialized.

The default value for query timeouts is taken from the Windows registry. If there is no registry setting, the default is 60 seconds. Not all databases support the ability to set a query timeout value. If you set a query timeout value of 0, no timeout occurs; and communication with the database may stop responding. This behavior may be useful during development. If the call fails, MFC throws an exception of type [CDaoException](../../mfc/reference/cdaoexception-class.md).

For related information, see the topic "QueryTimeout Property" in DAO Help.

## <a name="getrecordsaffected"></a> CDaoDatabase::GetRecordsAffected

Call this member function to determine the number of records affected by the most recent call of the [Execute](#execute) member function.

```
long GetRecordsAffected();
```

### Return Value

A long integer containing the number of records affected.

### Remarks

The value returned includes the number of records deleted, updated, or inserted by an action query run with `Execute`. The count returned will not reflect changes in related tables when cascade updates or deletes are in effect.

For related information, see the topic "RecordsAffected Property" in DAO Help.

## <a name="getrelationcount"></a> CDaoDatabase::GetRelationCount

Call this member function to obtain the number of relations defined between tables in the database.

```
short GetRelationCount();
```

### Return Value

The number of relations defined between tables in the database.

### Remarks

`GetRelationCount` is useful if you need to loop through all defined relations in the database's Relations collection. To obtain information about a given relation in the collection, see [GetRelationInfo](#getrelationinfo).

To illustrate the concept of a relation, consider a Suppliers table and a Products table, which might have a one-to-many relationship. In this relationship, one supplier can supply more than one product. Other relations are one-to-one and many-to-many.

## <a name="getrelationinfo"></a> CDaoDatabase::GetRelationInfo

Call this member function to obtain information about a specified relation in the database's Relations collection.

```cpp
void GetRelationInfo(
    int nIndex,
    CDaoRelationInfo& relinfo,
    DWORD dwInfoOptions = AFX_DAO_PRIMARY_INFO);

void GetRelationInfo(
    LPCTSTR lpszName,
    CDaoRelationInfo& relinfo,
    DWORD dwInfoOptions = AFX_DAO_PRIMARY_INFO);
```

### Parameters

*nIndex*<br/>
The index of the relation object in the database's Relations collection, for lookup by index.

*relinfo*<br/>
A reference to a [CDaoRelationInfo](../../mfc/reference/cdaorelationinfo-structure.md) object that returns the information requested.

*dwInfoOptions*<br/>
Options that specify which information about the relation to retrieve. The available options are listed here along with what they cause the function to return about the relation:

- AFX_DAO_PRIMARY_INFO (Default) Name, Table, Foreign Table

- AFX_DAO_SECONDARY_INFO Attributes, Field Information

The Field Information is a [CDaoRelationFieldInfo](../../mfc/reference/cdaorelationfieldinfo-structure.md) object containing the fields from the primary table involved in the relation.

*lpszName*<br/>
A string containing the name of the relation object, for lookup by name.

### Remarks

Two versions of this function provide access either by index or by name. For a description of the information returned in *relinfo*, see the [CDaoRelationInfo](../../mfc/reference/cdaorelationinfo-structure.md) structure. This structure has members that correspond to the items of information listed above in the description of *dwInfoOptions*. If you request information at one level, you also get information at any prior levels as well.

> [!NOTE]
> If you set the relation object's attributes to activate cascade operations (`dbRelationUpdateCascades` or `dbRelationDeleteCascades`), the Microsoft Jet database engine automatically updates or deletes records in one or more other tables when changes are made to related primary key tables. For example, suppose you establish a cascade delete relationship between a Customers table and an Orders table. When you delete records from the Customers table, records in the Orders table related to that customer are also deleted. In addition, if you establish cascade delete relationships between the Orders table and other tables, records from those tables are automatically deleted when you delete records from the Customers table.

## <a name="gettabledefcount"></a> CDaoDatabase::GetTableDefCount

Call this member function to retrieve the number of tables defined in the database.

```
short GetTableDefCount();
```

### Return Value

The number of tabledefs defined in the database.

### Remarks

`GetTableDefCount` is useful if you need to loop through all tabledefs in the database's TableDefs collection. To obtain information about a given table in the collection, see [GetTableDefInfo](#gettabledefinfo).

## <a name="gettabledefinfo"></a> CDaoDatabase::GetTableDefInfo

Call this member function to obtain various kinds of information about a table defined in the database.

```cpp
void GetTableDefInfo(
    int nIndex,
    CDaoTableDefInfo& tabledefinfo,
    DWORD dwInfoOptions = AFX_DAO_PRIMARY_INFO);

void GetTableDefInfo(
    LPCTSTR lpszName,
    CDaoTableDefInfo& tabledefinfo,
    DWORD dwInfoOptions = AFX_DAO_PRIMARY_INFO);
```

### Parameters

*nIndex*<br/>
The index of the tabledef object in the database's TableDefs collection, for lookup by index.

*tabledefinfo*<br/>
A reference to a [CDaoTableDefInfo](../../mfc/reference/cdaotabledefinfo-structure.md) object that returns the information requested.

*dwInfoOptions*<br/>
Options that specify which information about the table to retrieve. The available options are listed here along with what they cause the function to return about the relation:

- AFX_DAO_PRIMARY_INFO (Default) Name, Updatable, Attributes

- AFX_DAO_SECONDARY_INFO Primary information plus: Date Created, Date Last Updated, Source Table Name, Connect

- AFX_DAO_ALL_INFO Primary and secondary information plus: Validation Rule, Validation Text, Record Count

*lpszName*<br/>
The name of the tabledef object, for lookup by name.

### Remarks

Two versions of the function are supplied so you can select a table either by index in the database's TableDefs collection or by the name of the table.

For a description of the information returned in *tabledefinfo*, see the [CDaoTableDefInfo](../../mfc/reference/cdaotabledefinfo-structure.md) structure. This structure has members that correspond to the items of information listed above in the description of *dwInfoOptions*. If you request information at one level, you get information for any prior levels as well.

> [!NOTE]
> The AFX_DAO_ALL_INFO option provides information that can be slow to obtain. In this case, counting the records in the table could be very time consuming if there are many records.

## <a name="getversion"></a> CDaoDatabase::GetVersion

Call this member function to determine the version of the Microsoft Jet database file.

```
CString GetVersion();
```

### Return Value

A [CString](../../atl-mfc-shared/reference/cstringt-class.md) that indicates the version of the database file associated with the object.

### Remarks

The value returned represents the version number in the form "major.minor"; for example, "3.0". The product version number (for example, 3.0) consists of the version number (3), a period, and the release number (0). The versions to date are 1.0, 1.1, 2.0, and 3.0.

For related information, see the topic "Version Property" in DAO Help.

## <a name="isopen"></a> CDaoDatabase::IsOpen

Call this member function to determine whether the `CDaoDatabase` object is currently open on a database.

```
BOOL IsOpen() const;
```

### Return Value

Nonzero if the `CDaoDatabase` object is currently open; otherwise 0.

### Remarks

## <a name="m_pdaodatabase"></a> CDaoDatabase::m_pDAODatabase

Contains a pointer to the OLE interface for the DAO database object underlying the `CDaoDatabase` object.

### Remarks

Use this pointer if you need to access the DAO interface directly.

For information about calling DAO directly, see [Technical Note 54](../../mfc/tn054-calling-dao-directly-while-using-mfc-dao-classes.md).

## <a name="m_pworkspace"></a> CDaoDatabase::m_pWorkspace

Contains a pointer to the [CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md) object that contains the database object.

### Remarks

Use this pointer if you need to access the workspace directly — for example, to obtain pointers to other database objects in the workspace's Databases collection.

## <a name="open"></a> CDaoDatabase::Open

You must call this member function to initialize a newly constructed `CDaoDatabase` object that represents an existing database.

```
virtual void Open(
    LPCTSTR lpszName,
    BOOL bExclusive = FALSE,
    BOOL bReadOnly = FALSE,
    LPCTSTR lpszConnect = _T(""));
```

### Parameters

*lpszName*<br/>
A string expression that is the name of an existing Microsoft Jet (.MDB) database file. If the filename has an extension, it is required. If your network supports the uniform naming convention (UNC), you can also specify a network path, such as "\\\\\\\MYSERVER\\\MYSHARE\\\MYDIR\\\MYDB.MDB". (Double backslashes are required in string literals because "\\" is the C++ escape character.)

Some considerations apply when using *lpszName*. If it:

- Refers to a database that is already open for exclusive access by another user, MFC throws an exception of type [CDaoException](../../mfc/reference/cdaoexception-class.md). Trap that exception to let your user know that the database is unavailable.

- Is an empty string ("") and *lpszConnect* is "ODBC;", a dialog box listing all registered ODBC data source names is displayed so the user can select a database. You should avoid direct connections to ODBC data sources; use an attached table instead.

- Otherwise does not refer to an existing database or valid ODBC data source name, MFC throws an exception of type `CDaoException`.

> [!NOTE]
> For details about DAO error codes, see the DAOERR.H file. For related information, see the topic "Trappable Data Access Errors" in DAO Help.

*bExclusive*<br/>
A Boolean value that is TRUE if the database is to be opened for exclusive (nonshared) access and FALSE if the database is to be opened for shared access. If you omit this argument, the database is opened for shared access.

*bReadOnly*<br/>
A Boolean value that is TRUE if the database is to be opened for read-only access and FALSE if the database is to be opened for read/write access. If you omit this argument, the database is opened for read/write access. All dependent recordsets inherit this attribute.

*lpszConnect*<br/>
A string expression used for opening the database. This string constitutes the ODBC connect arguments. You must supply the exclusive and read-only arguments to supply a source string. If the database is a Microsoft Jet database (.MDB), this string is empty (""). The syntax for the default value — **_T**("") — provides portability for Unicode as well as ANSI builds of your application.

### Remarks

`Open` associates the database with the underlying DAO object. You cannot use the database object to construct recordset, tabledef, or querydef objects until it is initialized. `Open` appends the database object to the associated workspace's Databases collection.

Use the parameters as follows:

- If you are opening a Microsoft Jet (.MDB) database, use the *lpszName* parameter and pass an empty string for the *lpszConnect* parameter or pass a password string of the form ";PWD=password" if the database is password-protected (.MDB databases only).

- If you are opening an ODBC data source, pass a valid ODBC connection string in *lpszConnect* and an empty string in *lpszName*.

For related information, see the topic "OpenDatabase Method" in DAO Help.

> [!NOTE]
> For better performance when accessing external databases, including ISAM databases and ODBC data sources, it is recommended that you attach external database tables to a Microsoft Jet engine database (.MDB) rather than connecting directly to the data source.

It is possible for a connection attempt to time out if, for example, the DBMS host is unavailable. If the connection attempt fails, `Open` throws an exception of type [CDaoException](../../mfc/reference/cdaoexception-class.md).

The remaining remarks apply only to ODBC databases:

If the database is an ODBC database and the parameters in your `Open` call do not contain enough information to make the connection, the ODBC driver opens a dialog box to obtain the necessary information from the user. When you call `Open`, your connection string, *lpszConnect*, is stored privately and is available by calling the [GetConnect](#getconnect) member function.

If you wish, you can open your own dialog box before you call `Open` to get information from the user, such as a password, then add that information to the connection string you pass to `Open`. Or you might want to save the connection string you pass (perhaps in the Windows registry) so you can reuse it the next time your application calls `Open` on a `CDaoDatabase` object.

You can also use the connection string for multiple levels of login authorization (each for a different `CDaoDatabase` object) or to convey other database-specific information.

## <a name="setquerytimeout"></a> CDaoDatabase::SetQueryTimeout

Call this member function to override the default number of seconds to allow before subsequent operations on the connected database time out.

```cpp
void SetQueryTimeout(short nSeconds);
```

### Parameters

*nSeconds*<br/>
The number of seconds to allow before a query attempt times out.

### Remarks

An operation might time out because of network access problems, excessive query processing time, and so on. Call `SetQueryTimeout` before opening your recordset or before calling the recordset's [AddNew](../../mfc/reference/cdaorecordset-class.md#addnew), [Update](../../mfc/reference/cdaorecordset-class.md#update), or [Delete](../../mfc/reference/cdaorecordset-class.md#delete) member functions if you want to change the query timeout value. The setting affects all subsequent [Open](../../mfc/reference/cdaorecordset-class.md#open), `AddNew`, `Update`, and `Delete` calls to any recordsets associated with this `CDaoDatabase` object. Changing the query timeout value for a recordset after opening does not change the value for the recordset. For example, subsequent [Move](../../mfc/reference/cdaorecordset-class.md#move) operations do not use the new value.

The default value for query timeouts is 60 seconds. Not all databases support the ability to set a query timeout value. If you set a query timeout value of 0, no timeout occurs; the communication with the database may stop responding. This behavior may be useful during development.

For related information, see the topic "QueryTimeout Property" in DAO Help.

## See also

[CObject Class](../../mfc/reference/cobject-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CDaoWorkspace Class](../../mfc/reference/cdaoworkspace-class.md)<br/>
[CDaoRecordset Class](../../mfc/reference/cdaorecordset-class.md)<br/>
[CDaoTableDef Class](../../mfc/reference/cdaotabledef-class.md)<br/>
[CDaoQueryDef Class](../../mfc/reference/cdaoquerydef-class.md)<br/>
[CDatabase Class](../../mfc/reference/cdatabase-class.md)<br/>
[CDaoException Class](../../mfc/reference/cdaoexception-class.md)
