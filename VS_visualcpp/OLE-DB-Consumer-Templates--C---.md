---
title: "OLE DB Consumer Templates (C++)"
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
ms.assetid: d3e42612-0bc0-4d65-9c32-0e8a7b219e82
caps.latest.revision: 9
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# OLE DB Consumer Templates (C++)
The OLE DB Consumer Templates support the OLE DB version 2.6 specification. (The OLE DB Consumer Templates are tested against OLE DB 2.6 but do not support every interface in the specification.) The Consumer Templates minimize the amount of code you must write to implement an OLE DB consumer. The templates provide:  
  
-   Easy access to OLE DB features and easy integration with ATL and MFC.  
  
-   An easy binding model for database parameters and columns.  
  
-   Native C/C++ data types for OLE DB programming.  
  
 To use the OLE DB Templates, you should be familiar with C++ templates, COM, and the OLE DB interfaces. If you are not familiar with OLE DB, see [OLE DB Programmer's Reference](https://msdn.microsoft.com/en-us/library/ms718124.aspx).  
  
 The OLE DB Templates support the existing OLE DB object model rather than adding a new object model. The top-layer classes in the OLE DB Consumer Templates parallel the components defined in the OLE DB specification. The design of the OLE DB Consumer Templates includes advanced features such as multiple accessors on a rowset. The use of templates and multiple inheritance makes the library small and flexible.  
  
## How OLE DB Consumers Access Data  
 Consumers use several kinds of objects, which are described in the following topics:  
  
-   [Data Sources and Sessions](../VS_visualcpp/Data-Sources-and-Sessions.md)  
  
-   [Accessors and Rowsets](../VS_visualcpp/Accessors-and-Rowsets.md)  
  
-   [Commands and Tables](../VS_visualcpp/Commands-and-Tables.md)  
  
-   [User Records](../VS_visualcpp/User-Records.md)  
  
 Before the consumer does anything, you first select an OLE DB provider that is appropriate for the type of database you need to access (for example, SQL, Oracle, ODBC, and MSDS). To do this, you typically use an enumerator (see [CEnumerator](../VS_visualcpp/CEnumerator-Class.md) as mentioned in [Data Sources and Sessions](../VS_visualcpp/Data-Sources-and-Sessions.md)).  
  
 The [data source object](../VS_visualcpp/Data-Sources-and-Sessions.md) provides the connection information necessary to connect to the data source you selected. The data source object also contains authentication information (such as login names and passwords), which is used to give users permission to access the data source. The data source object makes a connection to the database and then creates one or more session objects. Each [session object](../VS_visualcpp/Data-Sources-and-Sessions.md) manages its own interactions with the database (that is, querying and retrieving data) and performs these transactions independently of other existing sessions.  
  
 The session creates the rowset and command objects. The [command object](../VS_visualcpp/Commands-and-Tables.md) allows users to interact with the database, for example, using SQL commands. The [rowset object](../VS_visualcpp/Accessors-and-Rowsets.md) is a set of data through which you can navigate and in which you can [update, delete, and insert rows](../VS_visualcpp/Updating-Rowsets.md).  
  
 An OLE DB consumer binds columns in the database tables with local variables; to do this, it uses an [accessor](../VS_visualcpp/Accessors-and-Rowsets.md), which contains a map of how data is stored within the consumer. The map consists of a set of bindings between table columns and local buffers (variables) in the consumer application.  
  
 One important concept when working with consumers is that you declare two classes in a consumer: the [command (or table) class](../VS_visualcpp/Commands-and-Tables.md) and the [user record class](../VS_visualcpp/User-Records.md). You access the rowset through the command (or table) class, which inherits from both an accessor class and a rowset class. The user record class contains the rowset binding map previously described.  
  
 For more information, see the following topics:  
  
-   [Creating an OLE DB Consumer](../VS_visualcpp/Creating-an-OLE-DB-Consumer.md)  
  
-   [Common OLE DB Consumer Scenarios (Examples)](../VS_visualcpp/Working-with-OLE-DB-Consumer-Templates.md)  
  
## See Also  
 [OLE DB Programming](../VS_visualcpp/OLE-DB-Programming.md)   
 [Data Access](../VS_visualcpp/Data-Access-in-Visual-C--.md)   
 [OLE DB SDK Documentation](https://msdn.microsoft.com/en-us/library/ms722784.aspx)   
 [OLE DB Programmer's Reference](https://msdn.microsoft.com/en-us/library/ms713643.aspx)