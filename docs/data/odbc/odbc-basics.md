---
description: "Learn more about: ODBC Basics"
title: "ODBC Basics"
ms.date: "11/04/2016"
helpviewer_keywords: ["ODBC cursor library [ODBC], ODBC components", "ODBC components", "ODBC components, required components", "ODBC, about ODBC", "ODBC, components"]
ms.assetid: ec529702-0fb2-4754-b8de-d1efa8eca18f
---
# ODBC Basics

This topic provides the basics of Open Database Connectivity (ODBC):

- [How ODBC Works with the Database Classes](../../data/odbc/odbc-and-the-database-classes.md)

- [How ODBC Drivers Work with Dynasets](../../data/odbc/odbc-driver-requirements-for-dynasets.md)

- [What ODBC Components You Need to Redistribute with Your Applications](../../data/odbc/redistributing-odbc-components-to-your-customers.md)

You will also want to read the related topic [ODBC: The ODBC Cursor Library](../../data/odbc/odbc-the-odbc-cursor-library.md).

> [!NOTE]
> ODBC data sources are accessible through the MFC ODBC classes, as described in this topic, or through the MFC Data Access Object (DAO) classes.

> [!NOTE]
> The MFC ODBC classes support Unicode and multithreading. For more information about the multithreading support, see [ODBC Classes and Threads](../../data/odbc/odbc-classes-and-threads.md)

ODBC is a call-level interface that allows applications to access data in any database for which there is an ODBC driver. Using ODBC, you can create database applications with access to any database for which your end user has an ODBC driver. ODBC provides an API that allows your application to be independent of the source database management system (DBMS).

ODBC is the database portion of the Microsoft Windows Open Services Architecture (WOSA), which is an interface that allows Windows-based desktop applications to connect to multiple computing environments without rewriting the application for each platform.

The following are components of ODBC:

- ODBC API

   A library of function calls, a set of error codes, and a standard [SQL](../../data/odbc/sql.md) syntax for accessing data on DBMSs.

- ODBC Driver Manager

   A dynamic-link library (Odbc32.dll) that loads ODBC database drivers on behalf of an application. This DLL is transparent to your application.

- ODBC database drivers

   One or more DLLs that process ODBC function calls for specific DBMSs. For a list of supplied drivers, see [ODBC Driver List](../../data/odbc/odbc-driver-list.md).

- [ODBC Cursor Library](../../data/odbc/odbc-the-odbc-cursor-library.md)

   A dynamic-link library (Odbccr32.dll) that resides between the ODBC Driver Manager and the drivers and handles scrolling through the data.

- [ODBC Administrator](../../data/odbc/odbc-administrator.md)

   A tool used for configuring a DBMS to make it available as a data source for an application.

An application achieves independence from DBMSs by working through an ODBC driver written specifically for a DBMS rather than working directly with the DBMS. The driver translates the calls into commands its DBMS can use, simplifying the developer's work and making it available for a wide range of data sources.

The database classes support any data source for which you have an ODBC driver. This might, for example, include a relational database, an Indexed Sequential Access Method (ISAM) database, a Microsoft Excel spreadsheet, or a text file. The ODBC drivers manage the connections to the data source, and SQL is used to select records from the database.

For a list of ODBC drivers included in this version of Visual C++ and for information about obtaining additional drivers, see [ODBC Driver List](../../data/odbc/odbc-driver-list.md).

## See also

[Open Database Connectivity (ODBC)](../../data/odbc/open-database-connectivity-odbc.md)
