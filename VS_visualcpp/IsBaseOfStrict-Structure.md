---
title: "IsBaseOfStrict Structure"
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
ms.assetid: 6fed7366-c8d4-4991-b4fb-43ed93f8e1bf
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
# IsBaseOfStrict Structure
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
template <  
   typename Base,  
   typename Derived  
>  
  
struct IsBaseOfStrict;  
template <  
   typename Base  
>  
struct IsBaseOfStrict<Base, Base>;  
```  
  
#### Parameters  
 `Base`  
 The base type.  
  
 `Derived`  
 The derived type.  
  
## Remarks  
 Tests whether one type is the base of another.  
  
 The first template tests whether a type is derived from a base type, which might yield **true** or **false**. The second template tests whether a type is derived from itself, which always yields **false**.  
  
## Members  
  
### Public Constants  
  
|Name|Description|  
|----------|-----------------|  
|[IsBaseOfStrict::value Constant](../VS_visualcpp/IsBaseOfStrict--value-Constant.md)|Indicates whether one type is the base of another.|  
  
## Inheritance Hierarchy  
 `IsBaseOfStrict`  
  
## Requirements  
 **Header:** internal.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [Microsoft::WRL::Details Namespace](../VS_visualcpp/Microsoft--WRL--Details-Namespace.md)