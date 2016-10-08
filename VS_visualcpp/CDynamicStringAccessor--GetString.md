---
title: "CDynamicStringAccessor::GetString"
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
ms.assetid: 4af27f27-7589-49f5-93d8-6ef05c023c8a
caps.latest.revision: 10
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
# CDynamicStringAccessor::GetString
Retrieves the specified column data as a string.  
  
## Syntax  
  
```  
  
      BaseType* GetString(  
   DBORDINAL nColumn  
) const throw( );  
BaseType* GetString(  
   const CHAR* pColumnName  
) const throw( );  
BaseType* GetString(  
   const WCHAR* pColumnName  
) const throw( );  
```  
  
#### Parameters  
 `nColumn`  
 [in] The column number. Column numbers start with 1. A value of 0 refers to the bookmark column, if any.  
  
 `pColumnName`  
 [in] A pointer to a character string that contains the column name.  
  
## Return Value  
 A pointer to the string value retrieved from the specified column. The value is of type ***BaseType***, which will be **CHAR** or **WCHAR** depending on whether _UNICODE is defined or not. Returns NULL if the specified column is not found.  
  
## Remarks  
 The second override form takes the column name as an ANSI string. The third override form takes the column name as a Unicode string.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDynamicStringAccessor Class](../VS_visualcpp/CDynamicStringAccessor-Class.md)