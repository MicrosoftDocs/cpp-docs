---
title: "CAccessorBase::IsAutoAccessor"
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
ms.assetid: c330da15-2947-4050-ad00-8f776adc58fb
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
# CAccessorBase::IsAutoAccessor
Returns true if data is automatically retrieved for the accessor during a Move operation.  
  
## Syntax  
  
```  
  
      bool IsAutoAccessor(  
   ULONG nAccessor   
) const;  
```  
  
#### Parameters  
 `nAccessor`  
 [in] The zero-offset number for the accessor.  
  
## Return Value  
 Returns **true** if the accessor is an autoaccessor. Otherwise, it returns **false**.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CAccessorBase Class](../VS_visualcpp/CAccessorBase-Class.md)