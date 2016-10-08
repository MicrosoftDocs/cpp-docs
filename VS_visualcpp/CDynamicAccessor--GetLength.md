---
title: "CDynamicAccessor::GetLength"
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
ms.assetid: 3ae8983b-b267-4cf9-bfc0-3e191f79e646
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
# CDynamicAccessor::GetLength
Retrieves the length of the specified column.  
  
## Syntax  
  
```  
  
      bool GetLength(   
   DBORDINAL nColumn,   
   DBLENGTH* pLength    
) const throw( );  
bool GetLength(   
   const CHAR* pColumnName,   
   DBLENGTH* pLength    
) const throw( );  
bool GetLength(   
   const WCHAR* pColumnName,   
   DBLENGTH* pLength    
) const throw( );  
```  
  
#### Parameters  
 `nColumn`  
 [in] The column number. Column numbers start with 1. A value of 0 refers to the bookmark column, if any.  
  
 `pColumnName`  
 [in] A pointer to a character string containing the column name.  
  
 `pLength`  
 [out] A pointer to the integer containing the length of the column in bytes.  
  
## Return Value  
 Returns **true** if the specified column is found. Otherwise, this function returns **false**.  
  
## Remarks  
 The first override takes the column number, and the second and third overrides take the column name in ANSI or Unicode format, respectively.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDynamicAccessor Class](../VS_visualcpp/CDynamicAccessor-Class.md)   
 [CDynamicAccessor::SetLength](../VS_visualcpp/CDynamicAccessor--SetLength.md)