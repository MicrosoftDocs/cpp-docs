---
title: "Data Access Programming (MFC-ATL) | Microsoft Docs"
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
  - "MFC [C++], data access applications"
  - "databases [C++], MFC"
  - "OLE DB [C++], data access technologies"
  - "data [C++], data access technologies"
  - "data access [C++], class libraries for databases"
ms.assetid: def97b2c-b5a6-445f-afeb-308050fd4852
caps.latest.revision: 14
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
# Data Access Programming (MFC/ATL)
Visual C++ provides several ways to work with databases. The preferred way is to use one of the class libraries such as the Active Template Class Library (ATL) or Microsoft Foundation Class (MFC) Library, which simplify working with the database APIs.  
  
> [!NOTE]
>  This topic covers the older technologies you can use for database programming in Visual C++. For information on data access programming using Visual C++ and SQL Server, see [Data Access Using ADO.NET (C++/CLI)](../dotnet/data-access-using-adonet-cpp-cli.md), and [Accessing data in Visual Studio](/visualstudio/data-tools/accessing-data-in-visual-studio).  
  
 The library classes support the following kinds of data access:  
  
-   ATL provides OLE DB templates and database attributes.  
  
-   MFC provides Open Database Connectivity (ODBC) and an ODBC driver.  
  
 These libraries supply abstractions that simplify working with databases, complete with the speed, power, and flexibility of C++. They integrate your data access work with the library's application framework.  
  
 Alternately, you can directly call database API functions from the COM, ODBC, or DAO software development kits (SDKs). For information about programming directly with the COM, DAO, or ODBC API functions, see the COM SDK, DAO SDK, or ODBC SDK.  
  
 Use ATL OLE DB if you need to access data, regardless of the form in which it is stored. Use the MFC ODBC classes when you are not using Microsoft Jet (.mdb) databases and want to work with the ODBC API for complete data-source independence. Use the MFC DAO classes when you want to work with Microsoft Jet (.mdb) databases or with external databases such as ODBC data sources.  
  
> [!NOTE]
>  Microsoft recommends using OLE DB or ODBC for new projects. DAO should only be used in maintaining existing applications.  
  
 Besides writing stand-alone database applications, you can often use a database effectively in other kinds of programs as a convenient storage and retrieval medium.  
  
|To learn more about|See|  
|-------------------------|---------|  
|**Selecting a database technology**||  
|ODBC vs. DAO|[Should I Use DAO or ODBC?](../data/should-i-use-dao-or-odbc-q.md)|  
|Using the Microsoft Knowledge Base to find additional articles on database topics written by product support engineers|[Microsoft Knowledge Base](../data/where-can-i-find-microsoft-knowledge-base-articles-on-database-topics-q.md)|  
|**ATL Database Support (OLE DB)**||  
|OLE DB programming (conceptual topics)|[OLE DB Programming Overview](../data/oledb/ole-db-programming-overview.md)|  
|Using the OLE DB consumer templates (conceptual topics)|[OLE DB Consumer Templates](../data/oledb/ole-db-consumer-templates-cpp.md)|  
|OLE DB consumer attributes|[OLE DB Consumer Attributes](../windows/ole-db-consumer-attributes.md)|  
|Using the OLE DB provider templates (conceptual topics)|[OLE DB Provider Templates](../data/oledb/ole-db-provider-templates-cpp.md)|  
|Adding an OLE DB consumer to an MFC project|[Creating an OLE DB Consumer](../data/oledb/creating-an-ole-db-consumer.md)|  
|**MFC Database Support (ODBC and DAO)**||  
|What DAO and ODBC are|[What Are DAO and ODBC?](../data/what-are-dao-and-odbc-q.md)|  
|When to use the MFC database classes|[When Should I Use the Database Classes?](../data/when-should-i-use-the-database-classes-q.md)|  
|Learn about the MFC database programming model|[What Is the MFC Database Programming Model?](../data/what-is-the-mfc-database-programming-model-q.md).|  
|Choose between the MFC DAO classes and the MFC ODBC classes|[Should I Use DAO or ODBC?](../data/should-i-use-dao-or-odbc-q.md).|  
|Data sources you can access with DAO and ODBC|[What Data Sources Can I Access with DAO and ODBC?](../data/what-data-sources-can-i-access-with-dao-and-odbc-q.md)|  
|Open Database Connectivity (ODBC)|[ODBC and MFC](../data/odbc/odbc-and-mfc.md)|  
|Whether you can call DAO or ODBC APIs directly while using the classes|[Can I Call DAO or ODBC Directly?](../data/can-i-call-dao-or-odbc-directly-q.md)|  
|What ODBC drivers are provided|[ODBC Driver List](../data/odbc/odbc-driver-list.md)|  
|How the database classes work with the MFC document/view architecture|[MFC: Using Database Classes with Documents and Views](../data/mfc-using-database-classes-with-documents-and-views.md)|  
|Installing MFC database support; what ODBC drivers are installed in Visual C++ by default; what ODBC and DAO SDK components are installed|[Installing MFC Database Support](../data/installing-mfc-database-support.md)|  
|**Data-Bound Controls (ADO and RDO)**||  
|Writing a program that uses data-bound controls|[Data-Bound Controls (ADO and RDO)](../data/ado-rdo/data-bound-controls-ado-and-rdo.md)|  
|Data binding using ActiveX controls|[MFC ActiveX Controls: Using Data Binding in an ActiveX Control](../mfc/mfc-activex-controls-using-data-binding-in-an-activex-control.md)|  
|Distributing ActiveX controls|[MFC ActiveX Controls: Distributing ActiveX Controls](../mfc/mfc-activex-controls-distributing-activex-controls.md)|  
  
## See Also  
 [Data Access](http://msdn.microsoft.com/library/a9455752-39c4-4457-b14e-197772d3df0b)