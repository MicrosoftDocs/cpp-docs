---
title: "CDynamicAccessor::GetBookmark"
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
ms.assetid: 6d0a2970-0c62-4a34-bac7-149d8e990f81
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
# CDynamicAccessor::GetBookmark
Retrieves the bookmark for the current row.  
  
## Syntax  
  
```  
  
      HRESULT GetBookmark(   
   CBookmark< >* pBookmark    
) const throw( );  
```  
  
#### Parameters  
 `pBookmark`  
 [out] A pointer to the [CBookmark](../VS_visualcpp/CBookmark-Class.md) object.  
  
## Return Value  
 One of the standard `HRESULT` values.  
  
## Remarks  
 You need to set **DBPROP_IRowsetLocate** to `VARIANT_TRUE` to retrieve a bookmark.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDynamicAccessor Class](../VS_visualcpp/CDynamicAccessor-Class.md)