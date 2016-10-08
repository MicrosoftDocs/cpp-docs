---
title: "FactoryCache Structure"
ms.custom: na
ms.date: 10/08/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: 624544e6-0989-47f6-a3e9-edb60e1ee6d4
caps.latest.revision: 7
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# FactoryCache Structure
Supports the Windows Runtime C++ Template Library infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
struct FactoryCache;  
```  
  
## Remarks  
 Contains the location of a class factory and a value that identifies a registered wrt or COM class object.  
  
## Members  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[FactoryCache::cookie Data Member](../VS_visualcpp/FactoryCache--cookie-Data-Member.md)|Contains a value that identifies a registered Windows Runtime or COM class object, and is later used to unregister the object.|  
|[FactoryCache::factory Data Member](../VS_visualcpp/FactoryCache--factory-Data-Member.md)|Points to a Windows Runtime or COM class factory.|  
  
## Inheritance Hierarchy  
 `FactoryCache`  
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [Microsoft::WRL::Details Namespace](../VS_visualcpp/Microsoft--WRL--Details-Namespace.md)