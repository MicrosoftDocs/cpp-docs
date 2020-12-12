---
description: "Learn more about: CDaoDatabaseInfo Structure"
title: "CDaoDatabaseInfo Structure"
ms.date: "09/17/2019"
f1_keywords: ["CDaoDatabaseInfo"]
helpviewer_keywords: ["CDaoDatabaseInfo structure [MFC]", "DAO (Data Access Objects), Databases collection"]
ms.assetid: 68e9e0da-8382-4fc6-8115-1b1519392ddb
---
# CDaoDatabaseInfo Structure

The `CDaoDatabaseInfo` structure contains information about a database object defined for data access objects (DAO). DAO 3.6 is the final version, and it is considered obsolete.

## Syntax

```
struct CDaoDatabaseInfo
{
    CString m_strName;       // Primary
    BOOL m_bUpdatable;       // Primary
    BOOL m_bTransactions;    // Primary
    CString m_strVersion;    // Secondary
    long m_lCollatingOrder;  // Secondary
    short m_nQueryTimeout;   // Secondary
    CString m_strConnect;    // All
};
```

#### Parameters

*m_strName*<br/>
Uniquely names the database object. To directly retrieve this property, call [CDaoDatabase::GetName](../../mfc/reference/cdaodatabase-class.md#getname). For details, see the topic "Name Property" in DAO Help.

*m_bUpdatable*<br/>
Indicates whether changes can be made to the database. To directly retrieve this property, call [CDaoDatabase::CanUpdate](../../mfc/reference/cdaodatabase-class.md#canupdate). For details, see the topic "Updatable Property" in DAO Help.

*m_bTransactions*<br/>
Indicates whether a data source supports transactions — the recording of a series of changes that can later be rolled back (canceled) or committed (saved). If a database is based on the Microsoft Jet database engine, the Transactions property is nonzero and you can use transactions. Other database engines may not support transactions. To directly retrieve this property, call [CDaoDatabase::CanTransact](../../mfc/reference/cdaodatabase-class.md#cantransact). For details, see the topic "Transactions Property" in DAO Help.

*m_strVersion*<br/>
Indicates the version of the Microsoft Jet database engine. To retrieve the value of this property directly, call the database object's [GetVersion](../../mfc/reference/cdaodatabase-class.md#getversion) member function. For details, see the topic "Version Property" in DAO Help.

*m_lCollatingOrder*<br/>
Specifies the sequence of the sort order in text for string comparison or sorting. Possible values include:

- `dbSortGeneral` Use the General (English, French, German, Portuguese, Italian, and Modern Spanish) sort order.

- `dbSortArabic` Use the Arabic sort order.

- `dbSortCyrillic` Use the Russian sort order.

- `dbSortCzech` Use the Czech sort order.

- `dbSortDutch` Use the Dutch sort order.

- `dbSortGreek` Use the Greek sort order.

- `dbSortHebrew` Use the Hebrew sort order.

- `dbSortHungarian` Use the Hungarian sort order.

- `dbSortIcelandic` Use the Icelandic sort order.

- `dbSortNorwdan` Use the Norwegian or Danish sort order.

- `dbSortPDXIntl` Use the Paradox International sort order.

- `dbSortPDXNor` Use the Paradox Norwegian or Danish sort order.

- `dbSortPDXSwe` Use the Paradox Swedish or Finnish sort order.

- `dbSortPolish` Use the Polish sort order.

- `dbSortSpanish` Use the Spanish sort order.

- `dbSortSwedFin` Use the Swedish or Finnish sort order.

- `dbSortTurkish` Use the Turkish sort order.

- `dbSortUndefined` The sort order is undefined or unknown.

For more information, see the topic "Customizing Windows Registry Settings for Data Access" in DAO Help.

*m_nQueryTimeout*<br/>
The number of seconds the Microsoft Jet database engine waits before a timeout error occurs when a query is run on an ODBC database. The default timeout value is 60 seconds. When QueryTimeout is set to 0, no timeout occurs; this can cause the program to stop responding. To retrieve the value of this property directly, call the database object's [GetQueryTimeout](../../mfc/reference/cdaodatabase-class.md#getquerytimeout) member function. For details, see the topic "QueryTimeout Property" in DAO Help.

*m_strConnect*<br/>
Provides information about the source of an open database. For information about connect strings, and for information about retrieving the value of this property directly, see the [CDaoDatabase::GetConnect](../../mfc/reference/cdaodatabase-class.md#getconnect) member function. For more information, see the topic "Connect Property" in DAO Help.

## Remarks

The database is a DAO object underlying an MFC object of class [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md). The references to Primary, Secondary, and All above indicate how the information is returned by the [CDaoWorkspace::GetDatabaseInfo](../../mfc/reference/cdaoworkspace-class.md#getdatabaseinfo) member function.

Information retrieved by the [CDaoWorkspace::GetDatabaseInfo](../../mfc/reference/cdaoworkspace-class.md#getdatabaseinfo) member function is stored in a `CDaoDatabaseInfo` structure. Call `GetDatabaseInfo` for the `CDaoWorkspace` object in whose Databases collection the database object is stored. `CDaoDatabaseInfo` also defines a `Dump` member function in debug builds. You can use `Dump` to dump the contents of a `CDaoDatabaseInfo` object.

## Requirements

**Header:** afxdao.h

## See also

[Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[CDaoWorkspace Class](../../mfc/reference/cdaoworkspace-class.md)<br/>
[CDaoDatabase Class](../../mfc/reference/cdaodatabase-class.md)
