---
title: "Data Access in Visual C++"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "data access [C++], technologies"
  - "data [C++]"
  - "databases [C++], accessing"
  - "data access [C++]"
ms.assetid: a9455752-39c4-4457-b14e-197772d3df0b
caps.latest.revision: 19
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
# Data Access in Visual C++
Since 2011 Microsoft [has aligned on ODBC](http://blogs.technet.com/b/dataplatforminsider/archive/2011/08/29/microsoft-aligning-with-odbc.aspx) as the standard for native applications to connecting to SQL Server databases. For more information, see the [FAQ](http://social.msdn.microsoft.com/Forums/sqlserver/e696d0ac-f8e2-4b19-8a08-7a357d3d780f/microsoft-is-aligning-with-odbc-for-native-relational-data-access-faq?forum=sqldataaccess). For modern native C++ applications running on Windows, the preferred way to connect to SQL databases, including [SQL Database](http://azure.microsoft.com/services/sql-database/) instances hosted in Azure, is to use the [ODBC Driver 11 for SQL Server on Windows](http://msdn.microsoft.com/library/jj730314.aspx).  
  
 For low-overhead local database instances, you can use [SQL Server 2014 Express LocalDB](http://msdn.microsoft.com/library/hh510202.aspx) which does not require an instance of SQL to be running. C++/CLI libraries can use either the native ODBC drivers or ADO.NET as well as Azure data services for .NET. For more information, see [Data Access Using ADO.NET (C++/CLI)](../cli/data-access-using-ado.net--c---cli-.md) and [Accessing data in Visual Studio](../Topic/Accessing%20data%20in%20Visual%20Studio.md).  
  
## In This Section  
 This section covers legacy database programming technologies. These pages are not always relevant for new applications.  
  
 [Data Access Programming](../data/data-access-programming--mfc-atl-.md)  
 Describes legacy data access programming with Visual C++, where the preferred way is to use one of the class libraries such as the Active Template Class Library (ATL) or Microsoft Foundation Class (MFC) Library, which simplify working with the database APIs.  
  
 [OLE DB Programming](../data/ole-db-programming.md)  
 Provides links to conceptual topics discussing OLE DB database technology and the OLE DB Template Library.  
  
 [Open Database Connectivity (ODBC) via MFC](../data/open-database-connectivity--odbc-.md)  
 Provides links to conceptual topics discussing targeting ODBC with MFC.  
  
 [Data-Bound Controls (ADO and RDO)](../data/data-bound-controls--ado-and-rdo-.md)  
 Discusses a reusable databinding mechanism through ActiveX controls in MFC projects that lets you rapidly develop database applications.  
  
## Related Sections  
 [OLE DB Templates](../data/ole-db-templates.md)  
 Provides reference material for the OLE DB consumer and provider templates, a set of template classes that implement many commonly used OLE DB interfaces.  
  
 [MFC Reference](../mfc/mfc-desktop-applications.md)  
 Provides reference material for the MFC Library, a set of classes that constitute an application framework, which is the framework of an application written for the Windows API.  
  
## See Also  
 [Data Access Technologies Road Map](http://msdn.microsoft.com/library/ms810810.aspx#mdac%20technologies%20road%20map%20old_topic9)