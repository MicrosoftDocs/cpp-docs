---
title: "DerefHelper Structure"
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
ms.assetid: 86ded58b-c3ee-4a4f-bb86-4f67b895d427
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
# DerefHelper Structure
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
template <  
   typename T  
>  
struct DerefHelper;  
  
template <  
   typename T  
>  
struct DerefHelper<T*>;  
```  
  
#### Parameters  
 `T`  
 A template parameter.  
  
## Remarks  
 Represent a dereferenced pointer to the `T*` template parameter.  
  
 DerefHelper is used in an expression such as: `ComPtr<Details::DerefHelper<ProgressTraits::Arg1Type>::DerefType> operationInterface;`.  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|`DerefType`|Identifier for the dereferenced template parameter `T*`.|  
  
## Inheritance Hierarchy  
 `DerefHelper`  
  
## Requirements  
 **Header:** async.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [Microsoft::WRL::Details Namespace](../VS_visualcpp/Microsoft--WRL--Details-Namespace.md)