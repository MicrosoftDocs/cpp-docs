---
title: "IsSame Structure"
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
ms.assetid: 1eddbc3f-3cc5-434f-8495-e4477e1f868e
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
# IsSame Structure
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
template <  
   typename T1,  
   typename T2  
>  
struct IsSame;  
template <  
   typename T1  
>  
struct IsSame<T1, T1>;  
```  
  
#### Parameters  
 `T1`  
 A type.  
  
 `T2`  
 Another type.  
  
## Remarks  
 Tests whether one specified type is the same as another specified type.  
  
## Members  
  
### Public Constants  
  
|Name|Description|  
|----------|-----------------|  
|[IsSame::value Constant](../VS_visualcpp/IsSame--value-Constant.md)|Indicates whether one type is the same as another.|  
  
## Inheritance Hierarchy  
 `IsSame`  
  
## Requirements  
 **Header:** internal.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [Microsoft::WRL::Details Namespace](../VS_visualcpp/Microsoft--WRL--Details-Namespace.md)