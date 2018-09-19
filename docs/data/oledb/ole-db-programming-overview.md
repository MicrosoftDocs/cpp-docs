---
title: "OLE DB Programming Overview | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
dev_langs: ["C++"]
helpviewer_keywords: ["Universal Data Access", "OLE DB, about OLE DB"]
ms.assetid: a5a69730-2793-4277-a67d-6f3c8edab6df
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# OLE DB Programming Overview

OLE DB is a high-performance, COM-based database technology. It provides a common way to access data regardless of the form in which it is stored. In a typical business situation, a vast amount of information is stored outside of corporate databases. This information is found in file systems (such as FAT or NTFS), indexed-sequential files, personal databases (such as Access), spreadsheets (such as Excel), project planning applications (such as Project), and e-mail (such as Outlook). OLE DB enables you to access any kind of data store in the same manner, as long as the data store has an OLE DB provider.
  
OLE DB allows you to develop applications that access diverse data sources, whether they are DBMS or not. OLE DB makes universal access possible by using COM interfaces that support the appropriate DBMS functionality for a given data source. COM reduces unnecessary duplication of services and maximized interoperability not only among data sources but also among other applications.  
  
## Benefits of COM  

This is where COM comes in. OLE DB is a set of COM interfaces. By accessing data through a uniform set of interfaces, you can organize a database into a matrix of cooperating components.  
  
Based on the COM specification, OLE DB defines an extensible and maintainable collection of interfaces that factor and encapsulate consistent, reusable portions of DBMS functionality. These interfaces define the boundaries of DBMS components such as row containers, query processors, and transaction coordinators, which enable uniform transactional access to diverse information sources.  
 
## See Also  

[OLE DB Programming](../../data/oledb/ole-db-programming.md)<br/>
[OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[OLE DB Provider Templates](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[OLE DB Templates](../../data/oledb/ole-db-templates.md)