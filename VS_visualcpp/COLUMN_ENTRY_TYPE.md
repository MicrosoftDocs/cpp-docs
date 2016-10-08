---
title: "COLUMN_ENTRY_TYPE"
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
ms.assetid: ac424261-ff6c-443b-a197-2cec8d78d738
caps.latest.revision: 7
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
# COLUMN_ENTRY_TYPE
Represents a binding to the specific column in the database. Supports `type` parameter.  
  
## Syntax  
  
```  
  
COLUMN_ENTRY_TYPE (  
nOrdinal  
,   
wType  
,   
data  
 )  
  
```  
  
#### Parameters  
 `nOrdinal`  
 [in] The column number.  
  
 `wType`  
 [in] Data type of column entry.  
  
 `data`  
 [in] The corresponding data member in the user record.  
  
## Remarks  
 This macro is a specialized variant of the [COLUMN_ENTRY](../VS_visualcpp/COLUMN_ENTRY.md) macro that provides a means of specifying data type.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [Macros and Global Functions for OLE DB Consumer Templates](../VS_visualcpp/Macros-and-Global-Functions-for-OLE-DB-Consumer-Templates.md)   
 [BEGIN_COLUMN_MAP](../VS_visualcpp/BEGIN_COLUMN_MAP.md)   
 [END_COLUMN_MAP](../VS_visualcpp/END_COLUMN_MAP.md)