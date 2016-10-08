---
title: "Data Access Programming (MFC-ATL)"
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
H1: Data Access Programming (MFC/ATL)
ms.assetid: def97b2c-b5a6-445f-afeb-308050fd4852
caps.latest.revision: 14
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
# Data Access Programming (MFC-ATL)
Visual C++ provides several ways to work with databases. The preferred way is to use one of the class libraries such as the Active Template Class Library (ATL) or Microsoft Foundation Class (MFC) Library, which simplify working with the database APIs.  
  
> [!NOTE]
>  This topic covers the older technologies you can use for database programming in Visual C++. For information on data access programming using Visual C++ and SQL Server, see [Data Access Using ADO.NET (C++/CLI)](../VS_visualcpp/Data-Access-Using-ADO.NET--C---CLI-.md), and [Accessing data in Visual Studio](../Topic/Accessing%20data%20in%20Visual%20Studio.md).  
  
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
|ODBC vs. DAO|[Should I Use DAO or ODBC?](../VS_visualcpp/Should-I-Use-DAO-or-ODBC-.md)|  
|Using the Microsoft Knowledge Base to find additional articles on database topics written by product support engineers|[Microsoft Knowledge Base](../VS_visualcpp/Where-Can-I-Find-Microsoft-Knowledge-Base-Articles-on-Database-Topics-.md)|  
|**ATL Database Support (OLE DB)**||  
|OLE DB programming (conceptual topics)|[OLE DB Programming Overview](../VS_visualcpp/OLE-DB-Programming-Overview.md)|  
|Using the OLE DB consumer templates (conceptual topics)|[OLE DB Consumer Templates](../VS_visualcpp/OLE-DB-Consumer-Templates--C---.md)|  
|OLE DB consumer attributes|[OLE DB Consumer Attributes](../VS_visualcpp/OLE-DB-Consumer-Attributes.md)|  
|Using the OLE DB provider templates (conceptual topics)|[OLE DB Provider Templates](../VS_visualcpp/OLE-DB-Provider-Templates--C---.md)|  
|Adding an OLE DB consumer to an MFC project|[Creating an OLE DB Consumer](../VS_visualcpp/Creating-an-OLE-DB-Consumer.md)|  
|**MFC Database Support (ODBC and DAO)**||  
|What DAO and ODBC are|[What Are DAO and ODBC?](../VS_visualcpp/What-Are-DAO-and-ODBC-.md)|  
|When to use the MFC database classes|[When Should I Use the Database Classes?](../VS_visualcpp/When-Should-I-Use-the-Database-Classes-.md)|  
|Learn about the MFC database programming model|[What Is the MFC Database Programming Model?](../VS_visualcpp/What-Is-the-MFC-Database-Programming-Model-.md).|  
|Choose between the MFC DAO classes and the MFC ODBC classes|[Should I Use DAO or ODBC?](../VS_visualcpp/Should-I-Use-DAO-or-ODBC-.md).|  
|Data sources you can access with DAO and ODBC|[What Data Sources Can I Access with DAO and ODBC?](../VS_visualcpp/What-Data-Sources-Can-I-Access-with-DAO-and-ODBC-.md)|  
|Open Database Connectivity (ODBC)|[ODBC and MFC](../VS_visualcpp/ODBC-and-MFC.md)|  
|Whether you can call DAO or ODBC APIs directly while using the classes|[Can I Call DAO or ODBC Directly?](../VS_visualcpp/Can-I-Call-DAO-or-ODBC-Directly-.md)|  
|What ODBC drivers are provided|[ODBC Driver List](../VS_visualcpp/ODBC-Driver-List.md)|  
|How the database classes work with the MFC document/view architecture|[MFC: Using Database Classes with Documents and Views](../VS_visualcpp/MFC--Using-Database-Classes-with-Documents-and-Views.md)|  
|Installing MFC database support; what ODBC drivers are installed in Visual C++ by default; what ODBC and DAO SDK components are installed|[Installing MFC Database Support](../VS_visualcpp/Installing-MFC-Database-Support.md)|  
|**Data-Bound Controls (ADO and RDO)**||  
|Writing a program that uses data-bound controls|[Data-Bound Controls (ADO and RDO)](../VS_visualcpp/Data-Bound-Controls--ADO-and-RDO-.md)|  
|Data binding using ActiveX controls|[MFC ActiveX Controls: Using Data Binding in an ActiveX Control](../VS_visualcpp/MFC-ActiveX-Controls--Using-Data-Binding-in-an-ActiveX-Control.md)|  
|Distributing ActiveX controls|[MFC ActiveX Controls: Distributing ActiveX Controls](../VS_visualcpp/MFC-ActiveX-Controls--Distributing-ActiveX-Controls.md)|  
  
## See Also  
 [Data Access](../VS_visualcpp/Data-Access-in-Visual-C--.md)