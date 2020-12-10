---
description: "Learn more about: ODBC and MFC"
title: "ODBC and MFC"
ms.date: "11/04/2016"
helpviewer_keywords: ["ODBC [C++], MFC", "connections [C++], databases", "connections [C++], data source", "databases [C++], connecting to", "data sources [C++], connecting to", "MFC [C++], ODBC and", "database connections [C++], MFC ODBC classes"]
ms.assetid: 98f02fd7-1235-437b-89a9-edfd0fc797f7
---
# ODBC and MFC

> [!NOTE]
> To use the MFC database classes, you must have the appropriate ODBC driver for your data source. The lastest Microsoft ODBC driver for SQL Server is [Microsoft ODBC Driver 13 for SQL Server](https://www.microsoft.com/download/details.aspx?id=50420). Most database vendors provide an ODBC driver for Windows.

This topic introduces the main concepts of the Microsoft Foundation Classes (MFC) library's ODBC-based database classes and provides an overview of how the classes work together. For more information about ODBC and MFC, see the following topics:

- [Connecting to a Data Source](connecting-to-a-data-source.md)

- [Selecting and Manipulating Records](selecting-and-manipulating-records.md)

- [Displaying and Manipulating Data in a Form](displaying-and-manipulating-data-in-a-form.md)

- [Working with Documents and views](working-with-documents-and-views.md)

- [Access to ODBC and SQL](access-to-odbc-and-sql.md)

- [Further Reading About the MFC ODBC Classes](further-reading-about-the-mfc-odbc-classes.md)

The MFC database classes based on ODBC are designed to provide access to any database for which an ODBC driver is available. Because the classes use ODBC, your application can access data in many different data formats and different local/remote configurations. You do not have to write special-case code to handle different database management systems (DBMSs). As long as your users have an appropriate ODBC driver for the data they want to access, they can use your program to manipulate data in tables stored there.

## See also

[Open Database Connectivity (ODBC)](open-database-connectivity-odbc.md)
