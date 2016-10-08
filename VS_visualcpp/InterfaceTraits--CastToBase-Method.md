---
title: "InterfaceTraits::CastToBase Method"
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
ms.assetid: 0591a017-0adf-4358-b946-eb0a307ce7f2
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
# InterfaceTraits::CastToBase Method
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
template<  
   typename T  
>  
static __forceinline Base* CastToBase(  
   _In_ T* ptr  
);  
```  
  
#### Parameters  
 `T`  
 The type of parameter `ptr`.  
  
 `ptr`  
 Pointer to a type `T`.  
  
## Return Value  
 A pointer to `Base`.  
  
## Remarks  
 Casts the specified pointer to a pointer to `Base`.  
  
 For more information about `Base`, see the Public Typedefs section in [InterfaceTraits Structure](../VS_visualcpp/InterfaceTraits-Structure.md).  
  
## Requirements  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [InterfaceTraits Structure](../VS_visualcpp/InterfaceTraits-Structure.md)   
 [Microsoft::WRL::Details Namespace](../VS_visualcpp/Microsoft--WRL--Details-Namespace.md)