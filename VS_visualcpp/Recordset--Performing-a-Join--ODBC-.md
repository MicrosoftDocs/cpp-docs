---
title: "Recordset: Performing a Join (ODBC)"
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
ms.assetid: ca720900-a156-4780-bf01-4293633bea64
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
# Recordset: Performing a Join (ODBC)
This topic applies to the MFC ODBC classes.  
  
## What a Join Is  
 The join operation, a common data-access task, lets you work with data from more than one table using a single recordset object. Joining two or more tables yields a recordset that can contain columns from each table, but appears as a single table to your application. Sometimes the join uses all columns from all tables, but sometimes the SQL **SELECT** clause in a join uses only some of the columns from each table. The database classes support read-only joins but not updateable joins.  
  
 To select records containing columns from joined tables, you need the following items:  
  
-   A table list containing the names of all tables being joined.  
  
-   A column list containing the names of all participating columns. Columns with the same name but from different tables are qualified by the table name.  
  
-   A filter (SQL **WHERE** clause) that specifies the columns on which the tables are joined. This filter takes the form "Table1.KeyCol = Table2.KeyCol" and actually accomplishes the join.  
  
 You can join more than two tables in the same way by equating multiple pairs of columns, each pair joined by the SQL keyword **AND**.  
  
## See Also  
 [Recordset (ODBC)](../VS_visualcpp/Recordset--ODBC-.md)   
 [Recordset: Declaring a Class for a Predefined Query (ODBC)](../VS_visualcpp/Recordset--Declaring-a-Class-for-a-Predefined-Query--ODBC-.md)   
 [Recordset: Declaring a Class for a Table (ODBC)](../VS_visualcpp/Recordset--Declaring-a-Class-for-a-Table--ODBC-.md)   
 [Recordset: Requerying a Recordset (ODBC)](../VS_visualcpp/Recordset--Requerying-a-Recordset--ODBC-.md)