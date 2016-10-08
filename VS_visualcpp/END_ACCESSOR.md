---
title: "END_ACCESSOR"
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
ms.assetid: 26f74167-68c4-4909-a474-73dc7ebc9542
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
# END_ACCESSOR
Marks the end of an accessor entry.  
  
## Syntax  
  
```  
  
END_ACCESSOR( )  
  
```  
  
## Remarks  
 For multiple accessors on a rowset, you need to specify `BEGIN_ACCESSOR_MAP` and use the `BEGIN_ACCESSOR` macro for each individual accessor. The `BEGIN_ACCESSOR` macro is completed with the `END_ACCESSOR` macro. The `BEGIN_ACCESSOR_MAP` macro is completed with the `END_ACCESSOR_MAP` macro.  
  
## Example  
 See [BEGIN_ACCESSOR_MAP](../VS_visualcpp/BEGIN_ACCESSOR_MAP.md).  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [Macros and Global Functions for OLE DB Consumer Templates](../VS_visualcpp/Macros-and-Global-Functions-for-OLE-DB-Consumer-Templates.md)   
 [BEGIN_ACCESSOR_MAP](../VS_visualcpp/BEGIN_ACCESSOR_MAP.md)   
 [BEGIN_ACCESSOR](../VS_visualcpp/BEGIN_ACCESSOR.md)   
 [END_ACCESSOR_MAP](../VS_visualcpp/END_ACCESSOR_MAP.md)