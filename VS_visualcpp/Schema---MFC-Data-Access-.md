---
title: "Schema  (MFC Data Access)"
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
ms.assetid: 7d17e35f-1ccf-4853-b915-5b8c7a45b9ee
caps.latest.revision: 8
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
# Schema  (MFC Data Access)
A database schema describes the current structure of the tables and database views in the database. In general, wizard-generated code assumes that the schema for the table or tables accessed by a recordset will not change, but the database classes can deal with some schema changes, such as adding, reordering, or deleting unbound columns. If a table changes, you must manually update the recordset for the table, then recompile your application.  
  
 You can also supplement the wizard-generated code to deal with a database whose schema is not entirely known at compile time. For more information, see [Recordset: Dynamically Binding Data Columns (ODBC)](../VS_visualcpp/Recordset--Dynamically-Binding-Data-Columns--ODBC-.md).  
  
## See Also  
 [Data Access Programming (MFC/ATL)](../VS_visualcpp/Data-Access-Programming--MFC-ATL-.md)   
 [SQL](../VS_visualcpp/SQL.md)   
 [Recordset (ODBC)](../VS_visualcpp/Recordset--ODBC-.md)