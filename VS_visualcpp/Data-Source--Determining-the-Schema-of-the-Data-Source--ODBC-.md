---
title: "Data Source: Determining the Schema of the Data Source (ODBC)"
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
ms.assetid: 17284acb-eb10-4f27-9944-ad1d973c0b05
caps.latest.revision: 9
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
# Data Source: Determining the Schema of the Data Source (ODBC)
This topic applies to the MFC ODBC classes.  
  
 To set up data members in your `CRecordset` objects, you need to know the schema of the data source to which you are connecting. Determining the schema of a data source involves obtaining a list of the tables in the data source, a list of the columns in each table, the data type of each column, and the existence of any indexes.  
  
## See Also  
 [Data Source (ODBC)](../VS_visualcpp/Data-Source--ODBC-.md)   
 [Data Source: Managing Connections (ODBC)](../VS_visualcpp/Data-Source--Managing-Connections--ODBC-.md)