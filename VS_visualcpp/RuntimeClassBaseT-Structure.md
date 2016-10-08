---
title: "RuntimeClassBaseT Structure"
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
ms.topic: reference
ms.assetid: a62775fb-3359-4f45-9ff1-c07fa8da464b
caps.latest.revision: 5
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
# RuntimeClassBaseT Structure
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
template <  
   unsigned int RuntimeClassTypeT  
>  
friend struct Details::RuntimeClassBaseT;  
```  
  
#### Parameters  
 `RuntimeClassTypeT`  
 A field of flags that specifies one or more [RuntimeClassType](../VS_visualcpp/RuntimeClassType-Enumeration.md) enumerators.  
  
## Remarks  
 Provides helper methods for `QueryInterface` operations and getting interface IDs.  
  
## Members  
  
## Inheritance Hierarchy  
 `RuntimeClassBaseT`  
  
## Requirements  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [Reference (Windows Runtime Library)](assetId:///00000000-0000-0000-0000-000000000000)   
 [Microsoft::WRL::Details Namespace](../VS_visualcpp/Microsoft--WRL--Details-Namespace.md)