---
description: "Learn more about: TN055: Migrating MFC ODBC Database Class Applications to MFC DAO Classes"
title: "TN055: Migrating MFC ODBC Database Class Applications to MFC DAO Classes"
ms.date: "09/17/2019"
helpviewer_keywords: ["DAO [MFC], migration", "TN055", "migration [MFC], ODBC database applications", "ODBC classes [MFC], DAO classes", "migrating ODBC database applications [MFC]", "porting database applications to DAO", "ODBC [MFC], DAO", "porting ODBC database applications to DAO", "migrating database applications [MFC]"]
ms.assetid: 0f858bd1-e168-4e2e-bcd1-8debd82856e4
---
# TN055: Migrating MFC ODBC Database Class Applications to MFC DAO Classes

> [!NOTE]
> DAO is used with Access databases and is supported through Office 2013. DAO 3.6 is the final version, and it is considered obsolete. The Visual C++ environment and wizards do not support DAO (although the DAO classes are included and you can still use them). Microsoft recommends that you use [OLE DB Templates](../data/oledb/ole-db-templates.md) or [ODBC and MFC](../data/odbc/odbc-and-mfc.md) for new projects. You should only use DAO in maintaining existing applications.

## Overview

In many situations it may be desirable to migrate applications that use MFC's ODBC database classes to MFC's DAO database classes. This technical note will detail most of the differences between the MFC ODBC and DAO classes. With the differences in mind, it should not be overly difficult to migrate applications from the ODBC classes to the MFC classes if desired.

## Why Migrate from ODBC to DAO

There are a number of reasons why you might want to migrate applications from the ODBC Database Classes to the DAO Database Classes, but the decision is not necessarily simple or obvious. One thing to keep in mind is that the Microsoft Jet database engine that is used by DAO can read any ODBC data source for which you have an ODBC driver. It may be more efficient to use the ODBC Database Classes or call ODBC directly yourself, but the Microsoft Jet database engine can read ODBC data.

Some simple cases that make the ODBC/DAO decision easy. For instance, when you only need access to data in a format that the Microsoft Jet engine can read directly (Access format, Excel format, and so on) the obvious choice is to use the DAO Database Classes.

More complex cases arise when your data exists on a server or on a variety of different servers. In this case, the decision to use the ODBC Database classes or the DAO Database classes is a difficult one. If you want to do things like heterogeneous joins (join data from servers in multiple formats like SQL Server and Oracle), then the Microsoft Jet database engine will perform the join for you rather than forcing you to do the work necessary if you used the ODBC Database Classes or called ODBC directly. If you are using an ODBC driver that supports driver cursors, your best choice might be the ODBC Database classes.

The choice can be complicated, so you might want to write some sample code to test the performance of various methods given your special needs. This technical note assumes that you have made the decision to migrate from the ODBC Database Classes to the DAO Database classes.

## Similarities Between ODBC Database Classes and MFC DAO Database Classes

The original design of the MFC ODBC classes was based on the DAO object model that has been in use in Microsoft Access and Microsoft Visual Basic. This means that there are many common features of the ODBC and DAO MFC classes, which will not all be listed in this section. In general, the programming models are the same.

To highlight a few similarities:

- Both the ODBC and DAO classes have database objects that manage using the underlying database management system (DBMS).

- Both have recordset objects representing a set of results returned from that DBMS.

- The DAO database and recordset objects have members nearly identical to the ODBC classes.

- With both sets of classes, the code to retrieve data is identical except for some object and member name changes. Changes will be required, but usually the process is a straightforward name change when switching from the ODBC classes to DAO classes.

For example, in both models the procedure to retrieve data is to create and open a database object, create and open a recordset object, and navigate (move) though the data performing some operation.

## Differences Between ODBC and DAO MFC Classes

The DAO classes include more objects and a richer set of methods, but this section will only detail the differences in similar classes and functionality.

Probably the most obvious differences between the classes are the name changes for similar classes and global functions. The following list shows the name changes of the objects, methods and global functions associated with the database classes:

|Class or function|Equivalent in MFC DAO classes|
|-----------------------|-----------------------------------|
|`CDatabase`|`CDaoDatabase`|
|`CDatabase::ExecuteSQL`|`CDaoDatabase::Execute`|
|`CRecordset`|`CDaoRecordset`|
|`CRecordset::GetDefaultConnect`|`CDaoRecordset::GetDefaultDBName`|
|`CFieldExchange`|`CDaoFieldExchange`|
|`RFX_Bool`|`DFX_Bool`|
|`RFX_Byte`|`DFX_Byte`|
|`RFX_Int`|`DFX_Short`|
|`RFX_Long`|`DFX_Long`|
||`DFX_Currency`|
|`RFX_Single`|`DFX_Single`|
|`RFX_Double`|`DFX_Double`|
|`RFX_Date`<sup>1</sup>|`DFX_Date` (`COleDateTime`-based)|
|`RFX_Text`|`DFX_Text`|
|`RFX_Binary`|`DFX_Binary`|
|`RFX_LongBinary`|`DFX_LongBinary`|

<sup>1</sup> The `RFX_Date` function is based on `CTime` and `TIMESTAMP_STRUCT`.

The major changes to functionality which may affect your application and require more than simple name changes are listed below.

- The constants and macros used to specify things like recordset open type and recordset open options have been changed.

   With the ODBC classes MFC needed to define these options via macros or enumerated types.

   With the DAO classes, DAO provides the definition of these options in a header file (DBDAOINT.H). Thus the recordset type is an enumerated member of `CRecordset`, but with DAO it is a constant instead. For example you would use **snapshot** when specifying the type of `CRecordset` in ODBC but **DB_OPEN_SNAPSHOT** when specifying the type of `CDaoRecordset`.

- The default recordset type for `CRecordset` is **snapshot** while the default recordset type for `CDaoRecordset` is **dynaset** (see the Note below for an additional issue about ODBC class snapshots).

- The ODBC `CRecordset` class has an option to create a forward-only recordset type. In the `CDaoRecordset` class, forward-only is not a recordset type, but rather a property (or option) of certain types of recordsets.

- An append-only recordset when opening a `CRecordset` object meant that the recordset's data could be read and appended. With `CDaoRecordset` object, the append-only option means literally that the recordset's data can only be appended (and not read).

- The ODBC classes' transaction member functions are members of `CDatabase` and act at the database level. In the DAO classes, the transaction member functions are members of a higher level class (`CDaoWorkspace`) and thus may impact multiple `CDaoDatabase` objects sharing the same workspace (transaction space).

- The exception class has been changed. `CDBExceptions` are thrown in the ODBC classes and `CDaoExceptions` in the DAO classes.

- `RFX_Date` uses `CTime` and `TIMESTAMP_STRUCT` objects while `DFX_Date` uses `COleDateTime`. The `COleDateTime` is nearly identical to `CTime`, but is based on a 8-byte OLE **DATE** rather than a 4-byte **time_t** so it can hold a much bigger range of data.

   > [!NOTE]
   > DAO (`CDaoRecordset`) snapshots are read-only while ODBC (`CRecordset`) snapshots may be updateable depending on the driver and use of the ODBC cursor library. If you are using the cursor library, `CRecordset` snapshots are updateable. If you are using any of the Microsoft drivers from Desktop Driver Pack 3.0 without the ODBC cursor library, the `CRecordset` snapshots are read-only. If you are using another driver, check the driver's documentation to see if snapshots (`STATIC_CURSORS`) are read-only.

## See also

[Technical Notes by Number](../mfc/technical-notes-by-number.md)<br/>
[Technical Notes by Category](../mfc/technical-notes-by-category.md)
