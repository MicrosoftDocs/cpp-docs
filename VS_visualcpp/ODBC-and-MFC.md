---
title: "ODBC and MFC"
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
ms.assetid: 98f02fd7-1235-437b-89a9-edfd0fc797f7
caps.latest.revision: 10
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
# ODBC and MFC
> [!NOTE]
>  To use the MFC database classes for targeting a Win32 platform (such as Windows NT), you must have the appropriate ODBC driver for your data source. Some drivers are included with Visual C++; others can be obtained from Microsoft and other vendors. For more information, see [ODBC Driver List](../VS_visualcpp/ODBC-Driver-List.md).  
  
 This topic introduces the main concepts of the Microsoft Foundation Classes (MFC) library's ODBC-based database classes and provides an overview of how the classes work together. For more information about ODBC and MFC, see the following topics:  
  
-   [Connecting to a Data Source](../VS_visualcpp/Connecting-to-a-Data-Source.md)  
  
-   [Selecting and Manipulating Records](../VS_visualcpp/Selecting-and-Manipulating-Records.md)  
  
-   [Displaying and Manipulating Data in a Form](../VS_visualcpp/Displaying-and-Manipulating-Data-in-a-Form.md)  
  
-   [Working with Documents and views](../VS_visualcpp/Working-with-Documents-and-Views.md)  
  
-   [Access to ODBC and SQL](../VS_visualcpp/Access-to-ODBC-and-SQL.md)  
  
-   [Further Reading About the MFC ODBC Classes](../VS_visualcpp/Further-Reading-About-the-MFC-ODBC-Classes.md)  
  
 The MFC database classes based on ODBC are designed to provide access to any database for which an ODBC driver is available. Because the classes use ODBC, your application can access data in many different data formats and different local/remote configurations. You do not have to write special-case code to handle different database management systems (DBMSs). As long as your users have an appropriate ODBC driver for the data they want to access, they can use your program to manipulate data in tables stored there.  
  
## See Also  
 [Open Database Connectivity (ODBC)](../VS_visualcpp/Open-Database-Connectivity--ODBC-.md)