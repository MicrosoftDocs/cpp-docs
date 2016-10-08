---
title: "DontUseNewUseMake Class"
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
ms.assetid: 8b38d07b-fc14-4cea-afb9-4c1a7dde0093
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
# DontUseNewUseMake Class
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
class DontUseNewUseMake;  
```  
  
## Remarks  
 Prevents using operator `new` in RuntimeClass. Consequently, you must use the [Make function](../VS_visualcpp/Make-Function.md) instead.  
  
## Members  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[DontUseNewUseMake::operator new Operator](../VS_visualcpp/DontUseNewUseMake--operator-new-Operator.md)|Overloads operator `new` and prevents it from being used in RuntimeClass.|  
  
## Inheritance Hierarchy  
 `DontUseNewUseMake`  
  
## Requirements  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [Microsoft::WRL::Details Namespace](../VS_visualcpp/Microsoft--WRL--Details-Namespace.md)   
 [Make Function](../VS_visualcpp/Make-Function.md)