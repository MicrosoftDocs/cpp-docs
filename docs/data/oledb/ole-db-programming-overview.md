---
title: "OLE DB Programming Overview | Microsoft Docs"
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
  - "Universal Data Access"
  - "OLE DB, about OLE DB"
ms.assetid: a5a69730-2793-4277-a67d-6f3c8edab6df
caps.latest.revision: 9
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
# OLE DB Programming Overview
What is OLE DB, and what makes it distinct from other database technologies? OLE DB is a high-performance, COM-based database technology produced by Microsoft. What sets OLE DB apart from other Microsoft database technologies is how it provides Universal Data Access.  
  
## Universal Data Access  
 Universal Data Access provides a common way to access data regardless of the form in which it is stored. In a typical business situation, a vast amount of information is stored outside of corporate databases. This information is found in file systems (such as FAT or NTFS), indexed-sequential files, personal databases (such as Access), spreadsheets (such as Excel), project planning applications (such as Project), and e-mail (such as Outlook).  
  
 Accessing this data using the various associated applications presents a major bottleneck in workflow or at least an annoyance. Most companies find themselves in this situation and deal with the problem by consolidating the information in a database management system (DBMS). However, such a move is expensive, time consuming, and in many cases not practical.  
  
 The alternative is to develop a Universal Data Access solution. OLE DB and ADO provide Universal Data Access capability. Of the two, OLE DB is the more performance intensive and is recommended for use with Visual C++ applications.  
  
 Universal Data Access implies two capabilities: the first is distributed query or uniform access to multiple (distributed) data sources and the second is the ability to make non-DBMS data sources accessible to database applications.  
  
-   Distributed query  
  
     The ability to access data uniformly on multiple (that is, distributed) data sources. The data sources can be of the same type (such as two separate Access databases) or of different types (such as a SQL Server database and an Access database). Uniformly means that you can meaningfully run the same query on all data sources.  
  
-   Non-DBMS access  
  
     The ability to make non-DBMS data sources accessible to database applications. Examples of DBMS data sources include IMS, DB2, Oracle, SQL Server, Access, and Paradox. Examples of non-DBMS data sources include information in file systems, e-mail, spreadsheets, and project management tools.  
  
 Consider a scenario in which a sales department needs to find all e-mail messages received within a one-week period from customers in a certain area. This query might require a search on an e-mail application's mailbox file and a search on an Access table of customers to specify the customers' names. While Access is a DBMS application, Outlook is not.  
  
 OLE DB allows you to develop applications that access diverse data sources, whether they are DBMS or not. OLE DB makes universal access possible by using COM interfaces that support the appropriate DBMS functionality for a given data source. COM reduces unnecessary duplication of services and maximized interoperability not only among data sources but also among other applications.  
  
## Benefits of COM  
 This is where COM comes in. OLE DB is a set of COM interfaces. By accessing data through a uniform set of interfaces, you can organize a database into a matrix of cooperating components.  
  
 Based on the COM specification, OLE DB defines an extensible and maintainable collection of interfaces that factor and encapsulate consistent, reusable portions of DBMS functionality. These interfaces define the boundaries of DBMS components such as row containers, query processors, and transaction coordinators, which enable uniform transactional access to diverse information sources.  
  
 Typically, OLE DB applications are written as DLLs, but its COM implementation overcomes the disadvantages of DLLs (such as naming and version problems) by using componentized code. In OLE DB, you call interfaces or access other components using their globally unique identifiers (GUIDs).  
  
 Finally, COM keeps track of component usage by using reference counting. When you call a method on an interface, the reference count is incremented; when the method returns, the reference count is decremented. When the count equals zero, the component to which the method belongs is released.  
  
## See Also  
 [OLE DB Programming](../../data/oledb/ole-db-programming.md)   
 [OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [OLE DB Provider Templates](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [OLE DB Templates](../../data/oledb/ole-db-templates.md)