---
title: "Data Source: Determining the Schema of the Data Source (ODBC) | Microsoft Docs"
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
  - "ODBC data sources [C++], schema"
  - "schemas [C++], data sources"
  - "data sources [C++], determining schema"
ms.assetid: 17284acb-eb10-4f27-9944-ad1d973c0b05
caps.latest.revision: 9
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
# Data Source: Determining the Schema of the Data Source (ODBC)
This topic applies to the MFC ODBC classes.  
  
 To set up data members in your `CRecordset` objects, you need to know the schema of the data source to which you are connecting. Determining the schema of a data source involves obtaining a list of the tables in the data source, a list of the columns in each table, the data type of each column, and the existence of any indexes.  
  
## See Also  
 [Data Source (ODBC)](../../data/odbc/data-source-odbc.md)   
 [Data Source: Managing Connections (ODBC)](../../data/odbc/data-source-managing-connections-odbc.md)