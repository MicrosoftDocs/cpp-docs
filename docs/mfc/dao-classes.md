---
title: "DAO Classes"
ms.date: "09/17/2019"
f1_keywords: ["vc.classes.data"]
helpviewer_keywords: ["database classes [MFC], DAO", "DAO [MFC], classes"]
ms.assetid: b15d0cd6-328b-4288-9c19-d037a795db57
---
# DAO Classes

DAO is used with Access databases and is supported through Office 2013. 3.6 is the final version and it is considered obsolete.

These classes work with the other application framework classes to give easy access to Data Access Object (DAO) databases, which use the same database engine as Microsoft Visual Basic and Microsoft Access. The DAO classes can also access a wide variety of databases for which Open Database Connectivity (ODBC) drivers are available.

Programs that use DAO databases will have at least a `CDaoDatabase` object and a `CDaoRecordset` object.

> [!NOTE]
>  The Visual C++ environment and wizards no longer support DAO (although the DAO classes are included and you can still use them). Microsoft recommends that you use ODBC for new MFC projects. You should only use DAO in maintaining existing applications.

[CDaoWorkspace](../mfc/reference/cdaoworkspace-class.md)<br/>
Manages a named, password-protected database session from login to logoff. Most programs use the default workspace.

[CDaoDatabase](../mfc/reference/cdaodatabase-class.md)<br/>
A connection to a database through which you can operate on the data.

[CDaoRecordset](../mfc/reference/cdaorecordset-class.md)<br/>
Represents a set of records selected from a data source.

[CDaoRecordView](../mfc/reference/cdaorecordview-class.md)<br/>
A view that displays database records in controls.

[CDaoQueryDef](../mfc/reference/cdaoquerydef-class.md)<br/>
Represents a query definition, usually one saved in a database.

[CDaoTableDef](../mfc/reference/cdaotabledef-class.md)<br/>
Represents the stored definition of a base table or an attached table.

[CDaoException](../mfc/reference/cdaoexception-class.md)<br/>
Represents an exception condition arising from the DAO classes.

[CDaoFieldExchange](../mfc/reference/cdaofieldexchange-class.md)<br/>
Supports the DAO record field exchange (DFX) routines used by the DAO database classes. You will normally not directly use this class.

## Related Classes

[CLongBinary](../mfc/reference/clongbinary-class.md)<br/>
Encapsulates a handle to storage for a binary large object (BLOB), such as a bitmap. `CLongBinary` objects are used to manage large data objects stored in database tables.

[COleCurrency](../mfc/reference/colecurrency-class.md)<br/>
Wrapper for the OLE automation type **CURRENCY**, a fixed-point arithmetic type, with 15 digits before the decimal point and 4 digits after.

[COleDateTime](../atl-mfc-shared/reference/coledatetime-class.md)<br/>
Wrapper for the OLE automation type **DATE**. Represents date and time values.

[COleVariant](../mfc/reference/colevariant-class.md)<br/>
Wrapper for the OLE automation type **VARIANT**. Data in **VARIANT**s can be stored in many formats.

## See also

[Class Overview](../mfc/class-library-overview.md)
