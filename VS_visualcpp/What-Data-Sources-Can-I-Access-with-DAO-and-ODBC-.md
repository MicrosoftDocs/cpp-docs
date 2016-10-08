---
title: "What Data Sources Can I Access with DAO and ODBC?"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: c88abb45-526a-467a-a01b-d9396bd63236
caps.latest.revision: 9
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# What Data Sources Can I Access with DAO and ODBC?
Both sets of MFC classes let you access a wide variety of data sources and make it possible to write applications that are independent of the data source.  
  
##  <a name="_core_databases_you_can_access_with_dao"></a> Databases You Can Access with DAO  
 Using DAO and the MFC DAO classes, you can access the following sources of data:  
  
-   Databases using the Microsoft Jet database engine, created with Microsoft Access or Microsoft Visual Basic, versions 1.x, 2.x, and 3.0 of the database engine.  
  
-   Installable ISAM databases, including:  
  
    -   dBASE III, dBASE IV, and dBASE 5.0  
  
    -   Paradox, versions 3.x, 4.x, and 5.x  
  
-   Open Database Connectivity (ODBC) databases, including but not limited to Microsoft SQL Server, SYBASE SQL Server, and ORACLE Server. To access an ODBC database, you must have an appropriate ODBC driver for the database you want to access. For a list of ODBC drivers included in this version of Visual C++ and for information about obtaining additional drivers, see [ODBC Driver List](../VS_visualcpp/ODBC-Driver-List.md).  
  
-   Microsoft Excel, versions 3.0, 4.0, 5.0, and 7.0 worksheets.  
  
-   Lotus WKS, WK1, WK3, and WK4 spreadsheets.  
  
-   Text files.  
  
 DAO is best used with databases that the Microsoft Jet database engine can read, which includes all the above except ODBC data sources. Best performance is with Microsoft Jet (.mdb) databases. Attaching external tables, especially in ODBC data sources, to an .mdb database is more efficient than opening the external database directly through the MFC DAO classes without attaching.  
  
##  <a name="_core_databases_you_can_access_with_odbc"></a> Databases You Can Access with ODBC  
 Using ODBC and the MFC ODBC classes, you can access any data source, local or remote, for which the user of your application has an ODBC driver. 16-bit, 32-bit, and 64-bit ODBC drivers are available for a wide range of data sources. If you are working with a Microsoft Jet (.mdb) database, it is more efficient to use the DAO classes than the Microsoft Access ODBC driver.  
  
## See Also  
 [Data Access Frequently Asked Questions](../VS_visualcpp/Data-Access-Frequently-Asked-Questions---MFC-Data-Access-.md)