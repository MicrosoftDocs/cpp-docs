---
title: "CDynamicAccessor::AddBindEntry"
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
ms.assetid: 8f139376-7db3-4193-ba3b-63fe938ffa79
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
# CDynamicAccessor::AddBindEntry
Adds a bind entry to the output columns.  
  
## Syntax  
  
```  
  
      HRESULT AddBindEntry(   
   const DBCOLUMNINFO& info    
) throw( );  
```  
  
#### Parameters  
 `info`  
 [in] A **DBCOLUMNINFO** structure containing column information. See "DBCOLUMNINFO Structures" in [IColumnsInfo::GetColumnInfo](https://msdn.microsoft.com/en-us/library/ms722704.aspx) in the *OLE DB Programmer's Reference*.  
  
## Return Value  
 One of the standard `HRESULT` values.  
  
## Remarks  
 Use this method when overriding the default accessor created with `CDynamicAccessor` (see [How Do I Fetch Data?](../VS_visualcpp/Fetching-Data.md)).  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDynamicAccessor Class](../VS_visualcpp/CDynamicAccessor-Class.md)