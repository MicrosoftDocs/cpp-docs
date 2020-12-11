---
description: "Learn more about: CDaoWorkspace Class"
title: "CDaoWorkspace Class"
ms.date: "11/04/2016"
f1_keywords: ["CDaoWorkspace", "AFXDAO/CDaoWorkspace", "AFXDAO/CDaoWorkspace::CDaoWorkspace", "AFXDAO/CDaoWorkspace::Append", "AFXDAO/CDaoWorkspace::BeginTrans", "AFXDAO/CDaoWorkspace::Close", "AFXDAO/CDaoWorkspace::CommitTrans", "AFXDAO/CDaoWorkspace::CompactDatabase", "AFXDAO/CDaoWorkspace::Create", "AFXDAO/CDaoWorkspace::GetDatabaseCount", "AFXDAO/CDaoWorkspace::GetDatabaseInfo", "AFXDAO/CDaoWorkspace::GetIniPath", "AFXDAO/CDaoWorkspace::GetIsolateODBCTrans", "AFXDAO/CDaoWorkspace::GetLoginTimeout", "AFXDAO/CDaoWorkspace::GetName", "AFXDAO/CDaoWorkspace::GetUserName", "AFXDAO/CDaoWorkspace::GetVersion", "AFXDAO/CDaoWorkspace::GetWorkspaceCount", "AFXDAO/CDaoWorkspace::GetWorkspaceInfo", "AFXDAO/CDaoWorkspace::Idle", "AFXDAO/CDaoWorkspace::IsOpen", "AFXDAO/CDaoWorkspace::Open", "AFXDAO/CDaoWorkspace::RepairDatabase", "AFXDAO/CDaoWorkspace::Rollback", "AFXDAO/CDaoWorkspace::SetDefaultPassword", "AFXDAO/CDaoWorkspace::SetDefaultUser", "AFXDAO/CDaoWorkspace::SetIniPath", "AFXDAO/CDaoWorkspace::SetIsolateODBCTrans", "AFXDAO/CDaoWorkspace::SetLoginTimeout", "AFXDAO/CDaoWorkspace::m_pDAOWorkspace"]
helpviewer_keywords: ["CDaoWorkspace [MFC], CDaoWorkspace", "CDaoWorkspace [MFC], Append", "CDaoWorkspace [MFC], BeginTrans", "CDaoWorkspace [MFC], Close", "CDaoWorkspace [MFC], CommitTrans", "CDaoWorkspace [MFC], CompactDatabase", "CDaoWorkspace [MFC], Create", "CDaoWorkspace [MFC], GetDatabaseCount", "CDaoWorkspace [MFC], GetDatabaseInfo", "CDaoWorkspace [MFC], GetIniPath", "CDaoWorkspace [MFC], GetIsolateODBCTrans", "CDaoWorkspace [MFC], GetLoginTimeout", "CDaoWorkspace [MFC], GetName", "CDaoWorkspace [MFC], GetUserName", "CDaoWorkspace [MFC], GetVersion", "CDaoWorkspace [MFC], GetWorkspaceCount", "CDaoWorkspace [MFC], GetWorkspaceInfo", "CDaoWorkspace [MFC], Idle", "CDaoWorkspace [MFC], IsOpen", "CDaoWorkspace [MFC], Open", "CDaoWorkspace [MFC], RepairDatabase", "CDaoWorkspace [MFC], Rollback", "CDaoWorkspace [MFC], SetDefaultPassword", "CDaoWorkspace [MFC], SetDefaultUser", "CDaoWorkspace [MFC], SetIniPath", "CDaoWorkspace [MFC], SetIsolateODBCTrans", "CDaoWorkspace [MFC], SetLoginTimeout", "CDaoWorkspace [MFC], m_pDAOWorkspace"]
ms.assetid: 64f60de6-4df1-4d4a-a65b-c489b5257d52
---
# CDaoWorkspace Class

Manages a named, password-protected database session from login to logoff, by a single user. DAO is supported through Office 2013. DAO 3.6 is the final version, and it is considered obsolete.

## Syntax

```
class CDaoWorkspace : public CObject
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CDaoWorkspace::CDaoWorkspace](#cdaoworkspace)|Constructs a workspace object. Afterwards, call `Create` or `Open`.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CDaoWorkspace::Append](#append)|Appends a newly created workspace to the database engine's Workspaces collection.|
|[CDaoWorkspace::BeginTrans](#begintrans)|Begins a new transaction, which applies to all databases open in the workspace.|
|[CDaoWorkspace::Close](#close)|Closes the workspace and all of the objects it contains. Pending transactions are rolled back.|
|[CDaoWorkspace::CommitTrans](#committrans)|Completes the current transaction and saves the changes.|
|[CDaoWorkspace::CompactDatabase](#compactdatabase)|Compacts (or duplicates) a database.|
|[CDaoWorkspace::Create](#create)|Creates a new DAO workspace object.|
|[CDaoWorkspace::GetDatabaseCount](#getdatabasecount)|Returns the number of DAO database objects in the workspace's Databases collection.|
|[CDaoWorkspace::GetDatabaseInfo](#getdatabaseinfo)|Returns information about a specified DAO database defined in the workspace's Databases collection.|
|[CDaoWorkspace::GetIniPath](#getinipath)|Returns the location of the Microsoft Jet database engine's initialization settings in the Windows registry.|
|[CDaoWorkspace::GetIsolateODBCTrans](#getisolateodbctrans)|Returns a value that indicates whether multiple transactions that involve the same ODBC data source are isolated via forced multiple connections to the data source.|
|[CDaoWorkspace::GetLoginTimeout](#getlogintimeout)|Returns the number of seconds before an error occurs when the user attempts to log in to an ODBC database.|
|[CDaoWorkspace::GetName](#getname)|Returns the user-defined name for the workspace object.|
|[CDaoWorkspace::GetUserName](#getusername)|Returns the user name specified when the workspace was created. This is the name of the workspace owner.|
|[CDaoWorkspace::GetVersion](#getversion)|Returns a string that contains the version of the database engine associated with the workspace.|
|[CDaoWorkspace::GetWorkspaceCount](#getworkspacecount)|Returns the number of DAO workspace objects in the database engine's Workspaces collection.|
|[CDaoWorkspace::GetWorkspaceInfo](#getworkspaceinfo)|Returns information about a specified DAO workspace defined in the database engine's Workspaces collection.|
|[CDaoWorkspace::Idle](#idle)|Allows the database engine to perform background tasks.|
|[CDaoWorkspace::IsOpen](#isopen)|Returns nonzero if the workspace is open.|
|[CDaoWorkspace::Open](#open)|Explicitly opens a workspace object associated with DAO's default workspace.|
|[CDaoWorkspace::RepairDatabase](#repairdatabase)|Attempts to repair a damaged database.|
|[CDaoWorkspace::Rollback](#rollback)|Ends the current transaction and does not save the changes.|
|[CDaoWorkspace::SetDefaultPassword](#setdefaultpassword)|Sets the password that the database engine uses when a workspace object is created without a specific password.|
|[CDaoWorkspace::SetDefaultUser](#setdefaultuser)|Sets the user name that the database engine uses when a workspace object is created without a specific user name.|
|[CDaoWorkspace::SetIniPath](#setinipath)|Sets the location of the Microsoft Jet database engine's initialization settings in the Windows registry.|
|[CDaoWorkspace::SetIsolateODBCTrans](#setisolateodbctrans)|Specifies whether multiple transactions that involve the same ODBC data source are isolated by forcing multiple connections to the data source.|
|[CDaoWorkspace::SetLoginTimeout](#setlogintimeout)|Sets the number of seconds before an error occurs when the user attempts to log in to an ODBC data source.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CDaoWorkspace::m_pDAOWorkspace](#m_pdaoworkspace)|Points to the underlying DAO workspace object.|

## Remarks

In most cases, you will not need multiple workspaces, and you will not need to create explicit workspace objects; when you open database and recordset objects, they use DAO's default workspace. However, if needed, you can run multiple sessions at a time by creating additional workspace objects. Each workspace object can contain multiple open database objects in its own Databases collection. In MFC, a workspace is primarily a transaction manager, specifying a set of open databases all in the same "transaction space."

> [!NOTE]
> The DAO database classes are distinct from the MFC database classes based on Open Database Connectivity (ODBC). All DAO database class names have a "CDao" prefix. In general, the MFC classes based on DAO are more capable than the MFC classes based on ODBC. The DAO-based classes access data through the Microsoft Jet database engine, including ODBC drivers. They also support Data Definition Language (DDL) operations, such as creating databases and adding tables and fields via the classes, without having to call DAO directly.

## Capabilities

Class `CDaoWorkspace` provides the following:

- Explicit access, if needed, to a default workspace, created by initializing the database engine. Usually you use DAO's default workspace implicitly by creating database and recordset objects.

- A transaction space in which transactions apply to all databases open in the workspace. You can create additional workspaces to manage separate transaction spaces.

- An interface to many properties of the underlying Microsoft Jet database engine (see the static member functions). Opening or creating a workspace, or calling a static member function before open or create, initializes the database engine.

- Access to the database engine's Workspaces collection, which stores all active workspaces that have been appended to it. You can also create and work with workspaces without appending them to the collection.

## Security

MFC does not implement the Users and Groups collections in DAO, which are used for security control. If you need those aspects of DAO, you must program them yourself via direct calls to DAO interfaces. For information, see [Technical Note 54](../../mfc/tn054-calling-dao-directly-while-using-mfc-dao-classes.md).

## Usage

You can use class `CDaoWorkspace` to:

- Explicitly open the default workspace.

   Usually your use of the default workspace is implicit — when you open new [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) or [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) objects. But you might need to access it explicitly — for example, to access database engine properties or the Workspaces collection. See "Implicit Use of the Default Workspace" below.

- Create new workspaces. Call [Append](#append) if you want to add them to the Workspaces collection.

- Open an existing workspace in the Workspaces collection.

Creating a new workspace that does not already exist in the Workspaces collection is described under the [Create](#create) member function. Workspace objects do not persist in any way between datababase engine sessions. If your application links MFC statically, ending the application uninitializes the database engine. If your application links with MFC dynamically, the database engine is uninitialized when the MFC DLL is unloaded.

Explicitly opening the default workspace, or opening an existing workspace in the Workspaces collection, is described under the [Open](#open) member function.

End a workspace session by closing the workspace with the [Close](#close) member function. `Close` closes any databases you have not closed previously, rolling back any uncommitted transactions.

## Transactions

DAO manages transactions at the workspace level; hence, transactions on a workspace with multiple open databases apply to all of the databases. For example, if two databases have uncommitted updates and you call [CommitTrans](#committrans), all of the updates are committed. If you want to limit transactions to a single database, you need a separate workspace object for it.

## Implicit Use of the Default Workspace

MFC uses DAO's default workspace implicitly under the following circumstances:

- If you create a new `CDaoDatabase` object but do not do so through an existing `CDaoWorkspace` object, MFC creates a temporary workspace object for you, which corresponds to DAO's default workspace. If you do so for multiple databases, all of the database objects are associated with the default workspace. You can access a database's workspace through a `CDaoDatabase` data member.

- Similarly, if you create a `CDaoRecordset` object without supplying a pointer to a `CDaoDatabase` object, MFC creates a temporary database object and, by extension, a temporary workspace object. You can access a recordset's database, and indirectly its workspace, through a `CDaoRecordset` data member.

## Other Operations

Other database operations are also provided, such as repairing a corrupted database or compacting a database.

For information about calling DAO directly and about DAO security, see [Technical Note 54](../../mfc/tn054-calling-dao-directly-while-using-mfc-dao-classes.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

`CDaoWorkspace`

## Requirements

**Header:** afxdao.h

## <a name="append"></a> CDaoWorkspace::Append

Call this member function after you call [Create](#create).

```
virtual void Append();
```

### Remarks

`Append` appends a newly created workspace object to the database engine's Workspaces collection. Workspaces do not persist between database engine sessions; they are stored only in memory, not on disk. You do not have to append a workspace; if you do not, you can still use it.

An appended workspace remains in the Workspaces collection, in an active, open state, until you call its [Close](#close) member function.

For related information, see the topic "Append Method" in DAO Help.

## <a name="begintrans"></a> CDaoWorkspace::BeginTrans

Call this member function to initiate a transaction.

```cpp
void BeginTrans();
```

### Remarks

After you call `BeginTrans`, updates you make to your data or database structure take effect when you commit the transaction. Because the workspace defines a single transaction space, the transaction applies to all open databases in the workspace. There are two ways to complete the transaction:

- Call the [CommitTrans](#committrans) member function to commit the transaction and save changes to the data source.

- Or call the [Rollback](#rollback) member function to cancel the transaction.

Closing the workspace object or a database object while a transaction is pending rolls back all pending transactions.

If you need to isolate transactions on one ODBC data source from those on another ODBC data source, see the [SetIsolateODBCTrans](#setisolateodbctrans) member function.

## <a name="cdaoworkspace"></a> CDaoWorkspace::CDaoWorkspace

Constructs a `CDaoWorkspace` object.

```
CDaoWorkspace();
```

### Remarks

After constructing the C++ object, you have two options:

- Call the object's [Open](#open) member function to open the default workspace or to open an existing object in the Workspaces collection.

- Or call the object's [Create](#create) member function to create a new DAO workspace object. This explicitly starts a new workspace session, which you can refer to via the `CDaoWorkspace` object. After calling `Create`, you can call [Append](#append) if you want to add the workspace to the database engine's Workspaces collection.

See the class overview for [CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md) for information about when you need to explicitly create a `CDaoWorkspace` object. Usually, you use workspaces created implicitly when you open a [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) object without specifying a workspace or when you open a [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) object without specifying a database object. MFC DAO objects created in this way use DAO's default workspace, which is created once and reused.

To release a workspace and its contained objects, call the workspace object's [Close](#close) member function.

## <a name="close"></a> CDaoWorkspace::Close

Call this member function to close the workspace object.

```
virtual void Close();
```

### Remarks

Closing an open workspace object releases the underlying DAO object and, if the workspace is a member of the Workspaces collection, removes it from the collection. Calling `Close` is good programming practice.

> [!CAUTION]
> Closing a workspace object closes any open databases in the workspace. This results in any recordsets open in the databases being closed as well, and any pending edits or updates are rolled back. For related information, see the [CDaoDatabase::Close](../../mfc/reference/cdaodatabase-class.md#close), [CDaoRecordset::Close](../../mfc/reference/cdaorecordset-class.md#close), [CDaoTableDef::Close](../../mfc/reference/cdaotabledef-class.md#close), and [CDaoQueryDef::Close](../../mfc/reference/cdaoquerydef-class.md#close) member functions.

Workspace objects are not permanent; they only exist while references to them exist. This means that when the database engine session ends, the workspace and its Databases collection do not persist. You must re-create them for the next session by opening your workspace and database(s) again.

For related information, see the topic "Close Method" in DAO Help.

## <a name="committrans"></a> CDaoWorkspace::CommitTrans

Call this member function to commit a transaction — save a group of edits and updates to one or more databases in the workspace.

```cpp
void CommitTrans();
```

### Remarks

A transaction consists of a series of changes to the database's data or its structure, beginning with a call to [BeginTrans](#begintrans). When you complete the transaction, either commit it or roll it back (cancel the changes) with [Rollback](#rollback). By default, without transactions, updates to records are committed immediately. Calling `BeginTrans` causes commitment of updates to be delayed until you call `CommitTrans`.

> [!CAUTION]
> Within one workspace, transactions are always global to the workspace and are not limited to only one database or recordset. If you perform operations on more than one database or recordset within a workspace transaction, `CommitTrans` commits all pending updates, and `Rollback` restores all operations on those databases and recordsets.

When you close a database or workspace with pending transactions, the transactions are all rolled back.

> [!NOTE]
> This is not a two-phase commit mechanism. If one update fails to commit, others still will commit.

## <a name="compactdatabase"></a> CDaoWorkspace::CompactDatabase

Call this member function to compact a specified Microsoft Jet (.MDB) database.

```
static void PASCAL CompactDatabase(
    LPCTSTR lpszSrcName,
    LPCTSTR lpszDestName,
    LPCTSTR lpszLocale = dbLangGeneral,
    int nOptions = 0);

static void PASCAL CompactDatabase(
    LPCTSTR lpszSrcName,
    LPCTSTR lpszDestName,
    LPCTSTR lpszLocale,
    int nOptions,
    LPCTSTR lpszPassword);
```

### Parameters

*lpszSrcName*<br/>
The name of an existing, closed database. It can be a full path and filename, such as "C:\\\MYDB.MDB". If the filename has an extension, you must specify it. If your network supports the uniform naming convention (UNC), you can also specify a network path, such as "\\\\\\\MYSERVER\\\MYSHARE\\\MYDIR\\\MYDB.MDB". (Double backslashes are required in the path strings because "\\" is the C++ escape character.)

*lpszDestName*<br/>
The full path of the compacted database that you are creating. You can also specify a network path as with *lpszSrcName*. You cannot use the *lpszDestName* argument to specify the same database file as *lpszSrcName*.

*lpszPassword*<br/>
A password, used when you want to compact a password-protected database. Note that if you use the version of `CompactDatabase` that takes a password, you must supply all parameters. Also, because this is a connect parameter, it requires special formatting, as follows: ;PWD= *lpszPassword*. For example: ;PWD="Happy". (The leading semicolon is required.)

*lpszLocale*<br/>
A string expression used to specify collating order for creating *lpszDestName*. If you omit this argument by accepting the default value of `dbLangGeneral` (see below), the locale of the new database is the same as that of the old database. Possible values are:

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

*nOptions*<br/>
Indicates one or more options for the target database, *lpszDestName*. If you omit this argument by accepting the default value, the *lpszDestName* will have the same encryption and the same version as *lpszSrcName*. You can combine the `dbEncrypt` or `dbDecrypt` option with one of the version options using the bitwise-OR operator. Possible values, which specify a database format, not a database engine version, are:

- `dbEncrypt` Encrypt the database while compacting.

- `dbDecrypt` Decrypt the database while compacting.

- `dbVersion10` Create a database that uses the Microsoft Jet database engine version 1.0 while compacting.

- `dbVersion11` Create a database that uses the Microsoft Jet database engine version 1.1 while compacting.

- `dbVersion20` Create a database that uses the Microsoft Jet database engine version 2.0 while compacting.

- `dbVersion30` Create a database that uses the Microsoft Jet database engine version 3.0 while compacting.

You can use `dbEncrypt` or `dbDecrypt` in the options argument to specify whether to encrypt or to decrypt the database as it is compacted. If you omit an encryption constant or if you include both `dbDecrypt` and `dbEncrypt`, *lpszDestName* will have the same encryption as *lpszSrcName*. You can use one of the version constants in the options argument to specify the version of the data format for the compacted database. This constant affects only the version of the data format of *lpszDestName*. You can specify only one version constant. If you omit a version constant, *lpszDestName* will have the same version as *lpszSrcName*. You can compact *lpszDestName* only to a version that is the same or later than that of *lpszSrcName*.

> [!CAUTION]
> If a database is not encrypted, it is possible, even if you implement user/password security, to directly read the binary disk file that constitutes the database.

### Remarks

As you change data in a database, the database file can become fragmented and use more disk space than necessary. Periodically, you should compact your database to defragment the database file. The compacted database is usually smaller. You can also choose to change the collating order, the encryption, or the version of the data format while you copy and compact the database.

> [!CAUTION]
> The `CompactDatabase` member function will not correctly convert a complete Microsoft Access database from one version to another. Only the data format is converted. Microsoft Access-defined objects, such as forms and reports, are not converted. However, the data is correctly converted.

> [!TIP]
> You can also use `CompactDatabase` to copy a database file.

For more information about compacting databases, see the topic "CompactDatabase Method" in DAO Help.

## <a name="create"></a> CDaoWorkspace::Create

Call this member function to create a new DAO workspace object and associate it with the MFC `CDaoWorkspace` object.

```
virtual void Create(
    LPCTSTR lpszName,
    LPCTSTR lpszUserName,
    LPCTSTR lpszPassword);
```

### Parameters

*lpszName*<br/>
A string with up to 14 characters that uniquely names the new workspace object. You must supply a name. For related information, see the topic "Name Property" in DAO Help.

*lpszUserName*<br/>
The user name of the workspace's owner. For requirements, see the *lpszDefaultUser* parameter to the [SetDefaultUser](#setdefaultuser) member function. For related information, see the topic "UserName Property" in DAO Help.

*lpszPassword*<br/>
The password for the new workspace object. A password can be up to 14 characters long and can contain any character except ASCII 0 (null). Passwords are case-sensitive. For related information, see the topic "Password Property" in DAO Help.

### Remarks

The overall creation process is:

1. Construct a [CDaoWorkspace](#cdaoworkspace) object.

1. Call the object's `Create` member function to create the underlying DAO workspace. You must specify a workspace name.

1. Optionally call [Append](#append) if you want to add the workspace to the database engine's Workspaces collection. You can work with the workspace without appending it.

After the `Create` call, the workspace object is in an open state, ready for use. You do not call `Open` after `Create`. You do not call `Create` if the workspace already exists in the Workspaces collection. `Create` initializes the database engine if it has not already been initialized for your application.

## <a name="getdatabasecount"></a> CDaoWorkspace::GetDatabaseCount

Call this member function to retrieve the number of DAO database objects in the workspace's Databases collection — the number of open databases in the workspace.

```
short GetDatabaseCount();
```

### Return Value

The number of open databases in the workspace.

### Remarks

`GetDatabaseCount` is useful if you need to loop through all defined databases in the workspace's Databases collection. To obtain information about a given database in the collection, see [GetDatabaseInfo](#getdatabaseinfo). Typical usage is to call `GetDatabaseCount` for the number of open databases, then use that number as a loop index for repeated calls to `GetDatabaseInfo`.

## <a name="getdatabaseinfo"></a> CDaoWorkspace::GetDatabaseInfo

Call this member function to obtain various kinds of information about a database open in the workspace.

```cpp
void GetDatabaseInfo(
    int nIndex,
    CDaoDatabaseInfo& dbinfo,
    DWORD dwInfoOptions = AFX_DAO_PRIMARY_INFO);

void GetDatabaseInfo(
    LPCTSTR lpszName,
    CDaoDatabaseInfo& dbinfo,
    DWORD dwInfoOptions = AFX_DAO_PRIMARY_INFO);
```

### Parameters

*nIndex*<br/>
The zero-based index of the database object in the workspace's Databases collection, for lookup by index.

*dbinfo*<br/>
A reference to a [CDaoDatabaseInfo](../../mfc/reference/cdaodatabaseinfo-structure.md) object that returns the information requested.

*dwInfoOptions*<br/>
Options that specify which information about the database to retrieve. The available options are listed here along with what they cause the function to return:

- AFX_DAO_PRIMARY_INFO (Default) Name, Updatable, Transactions

- AFX_DAO_SECONDARY_INFO Primary information plus: Version, Collating Order, Query Timeout

- AFX_DAO_ALL_INFO Primary and secondary information plus: Connect

*lpszName*<br/>
The name of the database object, for lookup by name. The name is a string with up to 14 characters that uniquely names the new workspace object.

### Remarks

One version of the function lets you look up a database by index. The other version lets you look up a database by name.

For a description of the information returned in *dbinfo*, see the [CDaoDatabaseInfo](../../mfc/reference/cdaodatabaseinfo-structure.md) structure. This structure has members that correspond to the items of information listed above in the description of *dwInfoOptions*. When you request information at one level, you get information for any prior levels as well.

## <a name="getinipath"></a> CDaoWorkspace::GetIniPath

Call this member function to obtain the location of the Microsoft Jet database engine's initialization settings in the Windows registry.

```
static CString PASCAL GetIniPath();
```

### Return Value

A [CString](../../atl-mfc-shared/reference/cstringt-class.md) containing the registry location.

### Remarks

You can use the location to obtain information about settings for the database engine. The information returned is actually the name of a registry subkey.

For related information, see the topics "IniPath Property" and "Customizing Windows Registry Settings for Data Access" in DAO Help.

## <a name="getisolateodbctrans"></a> CDaoWorkspace::GetIsolateODBCTrans

Call this member function to get the current value of the DAO IsolateODBCTrans property for the workspace.

```
BOOL GetIsolateODBCTrans();
```

### Return Value

Nonzero if ODBC transactions are isolated; otherwise 0.

### Remarks

In some situations, you might need to have multiple simultaneous transactions pending on the same ODBC database. To do this, you need to open a separate workspace for each transaction. Keep in mind that although each workspace can have its own ODBC connection to the database, this slows system performance. Because transaction isolation is not normally required, ODBC connections from multiple workspace objects opened by the same user are shared by default.

Some ODBC servers, such as Microsoft SQL Server, do not allow simultaneous transactions on a single connection. If you need to have more than one transaction at a time pending against such a database, set the IsolateODBCTrans property to TRUE on each workspace as soon as you open it. This forces a separate ODBC connection for each workspace.

For related information, see the topic "IsolateODBCTrans Property" in DAO Help.

## <a name="getlogintimeout"></a> CDaoWorkspace::GetLoginTimeout

Call this member function to get the current value of the DAO LoginTimeout property for the workspace.

```
static short PASCAL GetLoginTimeout();
```

### Return Value

The number of seconds before an error occurs when you attempt to log in to an ODBC database.

### Remarks

This value represents the number of seconds before an error occurs when you attempt to log in to an ODBC database. The default LoginTimeout setting is 20 seconds. When LoginTimeout is set to 0, no timeout occurs and the communication with the data source might stop responding.

When you are attempting to log in to an ODBC database, such as Microsoft SQL Server, the connection may fail as a result of network errors or because the server is not running. Rather than waiting for the default 20 seconds to connect, you can specify how long the database engine waits before it produces an error. Logging in to the server happens implicitly as part of a number of different events, such as running a query on an external server database.

For related information, see the topic "LoginTimeout Property" in DAO Help.

## <a name="getname"></a> CDaoWorkspace::GetName

Call this member function to get the user-defined name of the DAO workspace object underlying the `CDaoWorkspace` object.

```
CString GetName();
```

### Return Value

A [CString](../../atl-mfc-shared/reference/cstringt-class.md) containing the user-defined name of the DAO workspace object.

### Remarks

The name is useful for accessing the DAO workspace object in the database engine's Workspaces collection by name.

For related information, see the topic "Name Property" in DAO Help.

## <a name="getusername"></a> CDaoWorkspace::GetUserName

Call this member function to obtain the name of the owner of the workspace.

```
CString GetUserName();
```

### Return Value

A [CString](../../atl-mfc-shared/reference/cstringt-class.md) that represents the owner of the workspace object.

### Remarks

To get or set the permissions for the workspace owner, call DAO directly to check the Permissions property setting; this determines what permissions that user has. To work with permissions, you need a SYSTEM.MDA file.

For information about calling DAO directly, see [Technical Note 54](../../mfc/tn054-calling-dao-directly-while-using-mfc-dao-classes.md). For related information, see the topic "UserName Property" in DAO Help.

## <a name="getversion"></a> CDaoWorkspace::GetVersion

Call this member function to determine the version of the Microsoft Jet database engine in use.

```
static CString PASCAL GetVersion();
```

### Return Value

A [CString](../../atl-mfc-shared/reference/cstringt-class.md) that indicates the version of the database engine associated with the object.

### Remarks

The value returned represents the version number in the form "major.minor"; for example, "3.0". The product version number (for example, 3.0) consists of the version number (3), a period, and the release number (0).

For related information, see the topic "Version Property" in DAO Help.

## <a name="getworkspacecount"></a> CDaoWorkspace::GetWorkspaceCount

Call this member function to retrieve the number of DAO workspace objects in the database engine's Workspaces collection.

```
short GetWorkspaceCount();
```

### Return Value

The number of open workspaces in the Workspaces collection.

### Remarks

This count does not include any open workspaces not appended to the collection. `GetWorkspaceCount` is useful if you need to loop through all defined workspaces in the Workspaces collection. To obtain information about a given workspace in the collection, see [GetWorkspaceInfo](#getworkspaceinfo). Typical usage is to call `GetWorkspaceCount` for the number of open workspaces, then use that number as a loop index for repeated calls to `GetWorkspaceInfo`.

## <a name="getworkspaceinfo"></a> CDaoWorkspace::GetWorkspaceInfo

Call this member function to obtain various kinds of information about a workspace open in the session.

```cpp
void GetWorkspaceInfo(
    int nIndex,
    CDaoWorkspaceInfo& wkspcinfo,
    DWORD dwInfoOptions = AFX_DAO_PRIMARY_INFO);

void GetWorkspaceInfo(
    LPCTSTR lpszName,
    CDaoWorkspaceInfo& wkspcinfo,
    DWORD dwInfoOptions = AFX_DAO_PRIMARY_INFO);
```

### Parameters

*nIndex*<br/>
The zero-based index of the database object in the Workspaces collection, for lookup by index.

*wkspcinfo*<br/>
A reference to a [CDaoWorkspaceInfo](../../mfc/reference/cdaoworkspaceinfo-structure.md) object that returns the information requested.

*dwInfoOptions*<br/>
Options that specify which information about the workspace to retrieve. The available options are listed here along with what they cause the function to return:

- AFX_DAO_PRIMARY_INFO (Default) Name

- AFX_DAO_SECONDARY_INFO Primary information plus: User Name

- AFX_DAO_ALL_INFO Primary and secondary information plus: Isolate ODBCTrans

*lpszName*<br/>
The name of the workspace object, for lookup by name. The name is a string with up to 14 characters that uniquely names the new workspace object.

### Remarks

For a description of the information returned in *wkspcinfo*, see the [CDaoWorkspaceInfo](../../mfc/reference/cdaoworkspaceinfo-structure.md) structure. This structure has members that correspond to the items of information listed above in the description of *dwInfoOptions*. When you request information at one level, you get information for prior levels as well.

## <a name="idle"></a> CDaoWorkspace::Idle

Call `Idle` to provide the database engine with the opportunity to perform background tasks that may not be up-to-date because of intense data processing.

```
static void PASCAL Idle(int nAction = dbFreeLocks);
```

### Parameters

*nAction*<br/>
An action to take during the idle processing. Currently the only valid action is `dbFreeLocks`.

### Remarks

This is often true in multiuser, multitasking environments in which there is not enough background processing time to keep all records in a recordset current.

> [!NOTE]
> Calling `Idle` is not necessary with databases created with version 3.0 of the Microsoft Jet database engine. Use `Idle` only for databases created with earlier versions.

Usually, read locks are removed and data in local dynaset-type recordset objects is updated only when no other actions (including mouse movements) are occurring. If you periodically call `Idle`, you provide the database engine with time to catch up on background processing tasks by releasing unneeded read locks. Specifying the `dbFreeLocks` constant as an argument delays processing until all read locks are released.

This member function is not needed in single-user environments unless multiple instances of an application are running. The `Idle` member function may increase performance in a multiuser environment because it forces the database engine to flush data to disk, releasing locks on memory. You can also release read locks by making operations part of a transaction.

For related information, see the topic "Idle Method" in DAO Help.

## <a name="isopen"></a> CDaoWorkspace::IsOpen

Call this member function to determine whether the `CDaoWorkspace` object is open — that is, whether the MFC object has been initialized by a call to [Open](#open) or a call to [Create](#create).

```
BOOL IsOpen() const;
```

### Return Value

Nonzero if the workspace object is open; otherwise 0.

### Remarks

You can call any of the member functions of a workspace that is in an open state.

## <a name="m_pdaoworkspace"></a> CDaoWorkspace::m_pDAOWorkspace

A pointer to the underlying DAO workspace object.

### Remarks

Use this data member if you need direct access to the underlying DAO object. You can call the DAO object's interfaces through this pointer.

For information about accessing DAO objects directly, see [Technical Note 54](../../mfc/tn054-calling-dao-directly-while-using-mfc-dao-classes.md).

## <a name="open"></a> CDaoWorkspace::Open

Explicitly opens a workspace object associated with DAO's default workspace.

```
virtual void Open(LPCTSTR lpszName = NULL);
```

### Parameters

*lpszName*<br/>
The name of the DAO workspace object to open — a string with up to 14 characters that uniquely names the workspace. Accept the default value NULL to explicitly open the default workspace. For naming requirements, see the *lpszName* parameter for [Create](#create). For related information, see the topic "Name Property" in DAO Help.

### Remarks

After constructing a `CDaoWorkspace` object, call this member function to do one of the following:

- Explicitly open the default workspace. Pass NULL for *lpszName*.

- Open an existing `CDaoWorkspace` object, a member of the Workspaces collection, by name. Pass a valid name for an existing workspace object.

`Open` puts the workspace object into an open state and also initializes the database engine if it has not already been initialized for your application.

Although many `CDaoWorkspace` member functions can only be called after the workspace has been opened, the following member functions, which operate on the database engine, are available after construction of the C++ object but before a call to `Open`:

:::row:::
   :::column span="":::
      [Create](#create)\
      [GetIniPath](#getinipath)\
      [GetLoginTimeout](#getlogintimeout)
   :::column-end:::
   :::column span="":::
      [GetVersion](#getversion)\
      [Idle](#idle)
   :::column-end:::
   :::column span="":::
      [SetDefaultPassword](#setdefaultpassword)\
      [SetDefaultUser](#setdefaultuser)
   :::column-end:::
   :::column span="":::
      [SetIniPath](#setinipath)\
      [SetLoginTimeout](#setlogintimeout)
   :::column-end:::
:::row-end:::

## <a name="repairdatabase"></a> CDaoWorkspace::RepairDatabase

Call this member function if you need to attempt to repair a corrupted database that accesses the Microsoft Jet database engine.

```
static void PASCAL RepairDatabase(LPCTSTR lpszName);
```

### Parameters

*lpszName*<br/>
The path and filename for an existing Microsoft Jet engine database file. If you omit the path, only the current directory is searched. If your system supports the uniform naming convention (UNC), you can also specify a network path, such as: "\\\\\\\MYSERVER\\\MYSHARE\\\MYDIR\\\MYDB.MDB". (Double backslashes are required in the path string because "\\" is the C++ escape character.)

### Remarks

You must close the database specified by *lpszName* before you repair it. In a multiuser environment, other users cannot have *lpszName* open while you are repairing it. If *lpszName* is not closed or is not available for exclusive use, an error occurs.

This member function attempts to repair a database that was marked as possibly corrupt by an incomplete write operation. This can occur if an application using the Microsoft Jet database engine is closed unexpectedly because of a power outage or computer hardware problem. If you complete the operation and call the [Close](../../mfc/reference/cdaodatabase-class.md#close) member function or you quit the application in a usual way, the database will not be marked as possibly corrupt.

> [!NOTE]
> After repairing a database, it is also a good idea to compact it using the [CompactDatabase](#compactdatabase) member function to defragment the file and to recover disk space.

For more information about repairing databases, see the topic "RepairDatabase Method" in DAO Help.

## <a name="rollback"></a> CDaoWorkspace::Rollback

Call this member function to end the current transaction and restore all databases in the workspace to their condition before the transaction was begun.

```cpp
void Rollback();
```

### Remarks

> [!CAUTION]
> Within one workspace object, transactions are always global to the workspace and are not limited to only one database or recordset. If you perform operations on more than one database or recordset within a workspace transaction, `Rollback` restores all operations on all of those databases and recordsets.

If you close a workspace object without saving or rolling back any pending transactions, the transactions are automatically rolled back. If you call [CommitTrans](#committrans) or `Rollback` without first calling [BeginTrans](#begintrans), an error occurs.

> [!NOTE]
> When you begin a transaction, the database engine records its operations in a file kept in the directory specified by the TEMP environment variable on the workstation. If the transaction log file exhausts the available storage on your TEMP drive, the database engine will cause MFC to throw a `CDaoException` (DAO error 2004). At this point, if you call `CommitTrans`, an indeterminate number of operations are committed but the remaining uncompleted operations are lost, and the operation has to be restarted. Calling `Rollback` releases the transaction log and rolls back all operations in the transaction.

## <a name="setdefaultpassword"></a> CDaoWorkspace::SetDefaultPassword

Call this member function to set the default password that the database engine uses when a workspace object is created without a specific password.

```
static void PASCAL SetDefaultPassword(LPCTSTR lpszPassword);
```

### Parameters

*lpszPassword*<br/>
The default password. A password can be up to 14 characters long and can contain any character except ASCII 0 (null). Passwords are case-sensitive.

### Remarks

The default password that you set applies to new workspaces you create after the call. When you create subsequent workspaces, you do not need to specify a password in the [Create](#create) call.

To use this member function:

1. Construct a `CDaoWorkspace` object but do not call `Create`.

1. Call `SetDefaultPassword` and, if you like, [SetDefaultUser](#setdefaultuser).

1. Call `Create` for this workspace object or subsequent ones, without specifying a password.

By default, the DefaultUser property is set to "admin" and the DefaultPassword property is set to an empty string ("").

For more about security, see the topic "Permissions Property" in DAO Help. For related information, see the topics "DefaultPassword Property" and "DefaultUser Property" in DAO Help.

## <a name="setdefaultuser"></a> CDaoWorkspace::SetDefaultUser

Call this member function to set the default user name that the database engine uses when a workspace object is created without a specific user name.

```
static void PASCAL SetDefaultUser(LPCTSTR lpszDefaultUser);
```

### Parameters

*lpszDefaultUser*<br/>
The default user name. A user name can be 1 - 20 characters long and include alphabetic characters, accented characters, numbers, spaces, and symbols except for: " (quotation marks), / (forward slash), \ (backslash), \[ \] (brackets), : (colon), &#124; (pipe), \< (less-than sign), > (greater-than sign), + (plus sign), = (equal sign), ; (semicolon), , ( comma),  (question mark), \* (asterisk), leading spaces, and control characters (ASCII 00 to ASCII 31). For related information, see the topic "UserName Property" in DAO Help.

### Remarks

The default user name that you set applies to new workspaces you create after the call. When you create subsequent workspaces, you do not need to specify a user name in the [Create](#create) call.

To use this member function:

1. Construct a `CDaoWorkspace` object but do not call `Create`.

1. Call `SetDefaultUser` and, if you like, [SetDefaultPassword](#setdefaultpassword).

1. Call `Create` for this workspace object or subsequent ones, without specifying a user name.

By default, the DefaultUser property is set to "admin" and the DefaultPassword property is set to an empty string ("").

For related information, see the topics "DefaultUser Property" and "DefaultPassword Property" in DAO Help.

## <a name="setinipath"></a> CDaoWorkspace::SetIniPath

Call this member function to specify the location of Windows registry settings for the Microsoft Jet database engine.

```
static void PASCAL SetIniPath(LPCTSTR lpszRegistrySubKey);
```

### Parameters

*lpszRegistrySubkey*<br/>
A string containing the name of a Windows registry subkey for the location of Microsoft Jet database engine settings or parameters needed for installable ISAM databases.

### Remarks

Call `SetIniPath` only if you need to specify special settings. For more information, see the topic "IniPath Property" in DAO Help.

> [!NOTE]
> Call `SetIniPath` during application installation, not when the application runs. `SetIniPath` must be called before you open any workspaces, databases, or recordsets; otherwise, MFC throws an exception.

You can use this mechanism to configure the database engine with user-provided registry settings. The scope of this attribute is limited to your application and cannot be changed without restarting your application.

## <a name="setisolateodbctrans"></a> CDaoWorkspace::SetIsolateODBCTrans

Call this member function to set the value of the DAO IsolateODBCTrans property for the workspace.

```cpp
void SetIsolateODBCTrans(BOOL bIsolateODBCTrans);
```

### Parameters

*bIsolateODBCTrans*<br/>
Pass TRUE if you want to begin isolating ODBC transactions. Pass FALSE if you want to stop isolating ODBC transactions.

### Remarks

In some situations, you might need to have multiple simultaneous transactions pending on the same ODBC database. To do this, you need to open a separate workspace for each transaction. Although each workspace can have its own ODBC connection to the database, this slows system performance. Because transaction isolation is not normally required, ODBC connections from multiple workspace objects opened by the same user are shared by default.

Some ODBC servers, such as Microsoft SQL Server, do not allow simultaneous transactions on a single connection. If you need to have more than one transaction at a time pending against such a database, set the IsolateODBCTrans property to TRUE on each workspace as soon as you open it. This forces a separate ODBC connection for each workspace.

## <a name="setlogintimeout"></a> CDaoWorkspace::SetLoginTimeout

Call this member function to set the value of the DAO LoginTimeout property for the workspace.

```
static void PASCAL SetLoginTimeout(short nSeconds);
```

### Parameters

*nSeconds*<br/>
The number of seconds before an error occurs when you attempt to log in to an ODBC database.

### Remarks

This value represents the number of seconds before an error occurs when you attempt to log in to an ODBC database. The default LoginTimeout setting is 20 seconds. When LoginTimeout is set to 0, no timeout occurs and the communication with the data source might stop responding.

When you are attempting to log in to an ODBC database, such as Microsoft SQL Server, the connection may fail as a result of network errors or because the server is not running. Rather than waiting for the default 20 seconds to connect, you can specify how long the database engine waits before it produces an error. Logging on to the server happens implicitly as part of a number of different events, such as running a query on an external server database. The timeout value is determined by the current setting of the LoginTimeout property.

For related information, see the topic "LoginTimeout Property" in DAO Help.

## See also

[CObject Class](../../mfc/reference/cobject-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CDaoDatabase Class](../../mfc/reference/cdaodatabase-class.md)<br/>
[CDaoRecordset Class](../../mfc/reference/cdaorecordset-class.md)<br/>
[CDaoTableDef Class](../../mfc/reference/cdaotabledef-class.md)<br/>
[CDaoQueryDef Class](../../mfc/reference/cdaoquerydef-class.md)<br/>
[CDaoException Class](../../mfc/reference/cdaoexception-class.md)
