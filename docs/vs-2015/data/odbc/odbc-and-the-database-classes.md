---
title: "ODBC and the Database Classes | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "database classes [C++], ODBC"
  - "ODBC API functions [C++]"
  - "ODBC classes [C++], MFC database classes"
  - "MFC [C++], ODBC and"
ms.assetid: b166f82d-6f85-4556-aac8-fb851235d22c
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# ODBC and the Database Classes
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [ODBC and the Database Classes](https://docs.microsoft.com/cpp/data/odbc/odbc-and-the-database-classes).  
  
  
The MFC ODBC database classes encapsulate the ODBC API function calls you would normally make yourself in the member functions of the [CDatabase](../../mfc/reference/cdatabase-class.md) and [CRecordset](../../mfc/reference/crecordset-class.md) classes. For example, the complex ODBC call sequences, binding of returned records to storage locations, handling of error conditions, and other operations are managed for you by the database classes. As a result, you use a considerably simpler class interface to manipulate records through a recordset object.  
  
> [!NOTE]
>  ODBC data sources are accessible through the MFC ODBC classes, as described in this TOPIC, or through the MFC Data Access Object (DAO) classes.  
  
 Although the database classes encapsulate ODBC functionality, they do not provide a one-to-one mapping of ODBC API functions. The database classes provide a higher level of abstraction, modeled after data-access objects found in Microsoft Access and Microsoft Visual Basic. For more information, see [What Is the MFC Database Programming Model?](../../data/what-is-the-mfc-database-programming-model-q.md).  
  
## See Also  
 [ODBC Basics](../../data/odbc/odbc-basics.md)

