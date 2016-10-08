---
title: "DontUseNewUseMake::operator new Operator"
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
ms.assetid: 6af07a0d-2271-430c-9d9b-5a4223fed049
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
# DontUseNewUseMake::operator new Operator
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
void* operator new(  
   size_t,  
   _In_ void* placement  
);  
```  
  
#### Parameters  
 `__unnamed0`  
 An unnamed parameter that specifies the number of bytes of memory to allocate.  
  
 `placement`  
 The type to be allocated.  
  
## Return Value  
 Provides a way to pass additional arguments if you overload operator `new`.  
  
## Remarks  
 Overloads operator `new` and prevents it from being used in RuntimeClass.  
  
## Requirements  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [DontUseNewUseMake Class](../VS_visualcpp/DontUseNewUseMake-Class.md)   
 [Microsoft::WRL::Details Namespace](../VS_visualcpp/Microsoft--WRL--Details-Namespace.md)