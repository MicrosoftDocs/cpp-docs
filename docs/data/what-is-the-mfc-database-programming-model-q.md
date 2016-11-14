---
title: "What Is the MFC Database Programming Model? | Microsoft Docs"
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
  - "data access [C++], technologies"
  - "DAO [C++], MFC"
  - "ODBC [C++], MFC"
  - "ODBC classes [C++], MFC database classes"
  - "databases [C++], MFC"
  - "MFC [C++], database applications"
ms.assetid: f6f15bb8-4115-41f2-ad68-036e74a11bd9
caps.latest.revision: 8
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
# What Is the MFC Database Programming Model?
Although MFC implements DAO and ODBC quite differently underneath, they have similar interfaces that it relatively easy to port your applications from one to the other, particularly from ODBC to DAO. For information about porting from ODBC to DAO, see [Technical Note 55](../mfc/tn055-migrating-mfc-odbc-database-class-applications-to-mfc-dao-classes.md). The DAO and ODBC interfaces in MFC are also very similar to that in Visual Basic.  
  
 The MFC programming model provides a database object for each open database. The database object represents your connection to the database. You make queries and updates using recordset objects. DAO provides additional objects, for working with table structure, saving queries for reuse, and so on, described later. MFC supplies classes for each of these objects: one set of classes for DAO and another set for ODBC.  
  
 Using MFC makes data access easier. The DAO and ODBC database classes supply high-level abstractions that free you from using DAO or ODBC directly. Writing to their APIs is more complex than using the MFC classes. This is especially true if you are writing small, relatively simple applications.  
  
 The database classes add the following components to the MFC class library:  
  
-   C++ database classes that supply a high-level API for accessing databases through either DAO or ODBC  
  
-   Extensions to the application wizard and **Add Class** for creating application-specific database classes  
  
-   Sample programs that illustrate use of the classes and the wizards  
  
-   Online documentation that includes overviews, articles about programming topics, and class reference materials  
  
 For information about these components, see [ODBC and MFC](../data/odbc/odbc-and-mfc.md).  
  
 For more information, see:  
  
-   [Choosing between DAO and ODBC](../data/should-i-use-dao-or-odbc-q.md).  
  
-   [Availability of database definition language (DDL) and database manipulation language (DML)](../data/are-ddl-and-dml-supported-q.md) in DAO and ODBC.  
  
-   [Installing MFC database support](../data/installing-mfc-database-support.md).  
  
-   The [ODBC](../data/odbc/odbc-and-mfc.md) classes in MFC.  
  
-   [MFC data access programming documentation](../data/mfc-database-documentation.md).  
  
-   [How MFC implements ODBC](../data/odbc/odbc-and-mfc.md).  
  
## See Also  
 [Data Access Frequently Asked Questions](../data/data-access-frequently-asked-questions-mfc-data-access.md)