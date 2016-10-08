---
title: "CAccessorBase::GetHAccessor"
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
ms.assetid: 1bb98762-0752-4aae-a0b6-ba96bec03621
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
# CAccessorBase::GetHAccessor
Retrieves the accessor handle of a specified accessor.  
  
## Syntax  
  
```  
  
      HACCESSOR GetHAccessor(  
   ULONG nAccessor   
) const;  
```  
  
#### Parameters  
 `nAccessor`  
 [in] The zero-offset number for the accessor.  
  
## Return Value  
 The accessor handle.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CAccessorBase Class](../VS_visualcpp/CAccessorBase-Class.md)