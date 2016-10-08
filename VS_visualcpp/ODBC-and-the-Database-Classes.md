---
title: "ODBC and the Database Classes"
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
ms.assetid: b166f82d-6f85-4556-aac8-fb851235d22c
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
# ODBC and the Database Classes
The MFC ODBC database classes encapsulate the ODBC API function calls you would normally make yourself in the member functions of the [CDatabase](../VS_visualcpp/CDatabase-Class.md) and [CRecordset](../VS_visualcpp/CRecordset-Class.md) classes. For example, the complex ODBC call sequences, binding of returned records to storage locations, handling of error conditions, and other operations are managed for you by the database classes. As a result, you use a considerably simpler class interface to manipulate records through a recordset object.  
  
> [!NOTE]
>  ODBC data sources are accessible through the MFC ODBC classes, as described in this TOPIC, or through the MFC Data Access Object (DAO) classes.  
  
 Although the database classes encapsulate ODBC functionality, they do not provide a one-to-one mapping of ODBC API functions. The database classes provide a higher level of abstraction, modeled after data-access objects found in Microsoft Access and Microsoft Visual Basic. For more information, see [What Is the MFC Database Programming Model?](../VS_visualcpp/What-Is-the-MFC-Database-Programming-Model-.md).  
  
## See Also  
 [ODBC Basics](../VS_visualcpp/ODBC-Basics.md)