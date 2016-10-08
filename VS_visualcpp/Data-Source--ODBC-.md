---
title: "Data Source (ODBC)"
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
ms.assetid: b246721f-b9e1-49bd-a6c7-f348b8c3d537
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
# Data Source (ODBC)
This topic applies to the MFC ODBC classes.  
  
 In database terms, a data source is a specific set of data, the information required to access that data, and the location of the data source, which can be described using a data-source name. To work with class [CDatabase](../VS_visualcpp/CDatabase-Class.md), the data source must be one that you have configured through Open Database Connectivity (ODBC) Administrator. Examples of data sources include a remote database running on Microsoft SQL Server across a network or a Microsoft Access file in a local directory. From your application, you can access any data source for which you have an ODBC driver.  
  
 You can have one or more data sources active in your application at one time, each represented by a `CDatabase` object. You can also have multiple simultaneous connections to any data source. You can connect to remote as well as to local data sources, depending on the drivers you have installed and the capabilities of your ODBC drivers. For more information about data sources and ODBC Administrator, see [ODBC](../VS_visualcpp/ODBC-Basics.md) and [ODBC Administrator](../VS_visualcpp/ODBC-Administrator.md).  
  
 The following topics explain more about data sources:  
  
-   [Data Source: Managing Connections (ODBC)](../VS_visualcpp/Data-Source--Managing-Connections--ODBC-.md)  
  
-   [Data Source: Determining the Schema of the Data Source (ODBC)](../VS_visualcpp/Data-Source--Determining-the-Schema-of-the-Data-Source--ODBC-.md)  
  
## See Also  
 [Open Database Connectivity (ODBC)](../VS_visualcpp/Open-Database-Connectivity--ODBC-.md)