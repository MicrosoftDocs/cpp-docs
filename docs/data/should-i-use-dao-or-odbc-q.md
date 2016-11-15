---
title: "Should I Use DAO or ODBC? | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "database classes [C++], DAO"
  - "ODBC [C++], vs. DAO"
  - "database classes [C++], ODBC"
  - "DAO [C++], vs. ODBC"
ms.assetid: 9f67613f-0056-4ece-8c3a-9872e9563d57
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Should I Use DAO or ODBC?
> [!NOTE]
>  As of Visual C++ .NET, the Visual C++ environment and wizards no longer support DAO (although the DAO classes are included and you can still use them). Microsoft recommends that you use OLE DB Templates or ODBC for new projects. You should only use DAO in maintaining existing applications.  
  
 Which set of MFC classes should you use? This depends on your needs:  
  
-   Use the ODBC classes if you are working strictly with ODBC data sources, particularly in client/server situations, where the MFC ODBC classes provide better performance.  
  
-   Use the DAO classes if you are working primarily with Microsoft Jet (.mdb) databases or with other database formats that the Microsoft Jet database engine can read directly. For a list of these, see [What Databases Can I Access with DAO and ODBC?](../data/what-data-sources-can-i-access-with-dao-and-odbc-q.md)  
  
-   Access ODBC data sources through the DAO classes when you want the speed of the Microsoft Jet database engine and the extra functionality of the DAO classes.  
  
    > [!NOTE]
    >  DAO requires additional hard disk space.  
  
 The DAO classes have the following advantages:  
  
-   Better performance in some cases, particularly when using Microsoft Jet (.mdb) databases.  
  
-   Compatibility with the ODBC classes and with Microsoft Access Basic and Microsoft Visual Basic.  
  
-   Access to validation rules.  
  
-   Ability to specify relations between tables.  
  
-   A richer data access model, with support for Data Definition Language (DDL) and Data Manipulation Language (DML). For more information, see [Database Definition and Manipulation](../data/are-ddl-and-dml-supported-q.md).  
  
 The following table summarizes the key differences to help you choose.  
  
### Choosing Between MFC DAO and ODBC Classes  
  
|Can I|With DAO classes?|With ODBC classes?|  
|-----------|-----------------------|------------------------|  
|Access .MDB files|Yes|Yes|  
|Access ODBC data sources|Yes|Yes|  
|Available for 16 Bit|No|Yes|  
|Available for 32 Bit|Yes|Yes|  
|Available for 64 Bit|No|Yes|  
|Database compaction|Yes|No|  
|Database engine support|Microsoft Jet database engine|Target DBMS|  
|DDL support|Yes|Only through direct ODBC calls|  
|DML support|Yes|Yes|  
|Nature of the MFC implementation|"Wrapper" of DAO core functions|Simplified abstraction rather than a "wrapper" of the ODBC API|  
|Optimal for|.mdb files (Microsoft Access)|Any DBMS for which you have a driver, especially in client/server situations|  
|Transaction support|Per solution, or for ODBC data, per database|Per database|  
  
 Keep in mind that the capabilities of ODBC drivers vary. For more information, see the ODBC *Programmer's Reference* and the Help file for your ODBC driver.  
  
## See Also  
 [Data Access Frequently Asked Questions](../data/data-access-frequently-asked-questions-mfc-data-access.md)