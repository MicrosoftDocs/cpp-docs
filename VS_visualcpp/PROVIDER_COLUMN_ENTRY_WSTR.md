---
title: "PROVIDER_COLUMN_ENTRY_WSTR"
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
ms.assetid: 70630bd5-d782-473b-9777-aebbbf5321c5
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
# PROVIDER_COLUMN_ENTRY_WSTR
Represents a specific column supported by the provider.  
  
## Syntax  
  
```  
  
PROVIDER_COLUMN_ENTRY_WSTR(  
name  
, ordinal, member )  
```  
  
#### Parameters  
 *name*  
 [in] The column name.  
  
 `ordinal`  
 [in] The column number. Unless the column is a Bookmark column, the column number must not be 0.  
  
 `member`  
 [in] The member variable in the data class that stores the data.  
  
## Remarks  
 Use this macro when the column data is a null terminated Unicode character string, [DBTYPE_WSTR](https://msdn.microsoft.com/en-us/library/ms711251.aspx).  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [Macros for OLE DB Provider Templates](../VS_visualcpp/Macros-for-OLE-DB-Provider-Templates.md)   
 [OLE DB Provider Templates](../VS_visualcpp/OLE-DB-Provider-Templates--C---.md)   
 [OLE DB Provider Template Architecture](../VS_visualcpp/OLE-DB-Provider-Template-Architecture.md)   
 [Creating an OLE DB Provider](../VS_visualcpp/Creating-an-OLE-DB-Provider.md)