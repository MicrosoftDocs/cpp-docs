---
title: "SafeEquals"
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
ms.topic: language-reference
ms.assetid: 6019627d-f170-413b-9abd-2b5b34396a72
caps.latest.revision: 6
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
# SafeEquals
Compares two numbers to determine whether they are equal.  
  
## Syntax  
  
```  
template<typename T, typename U>  
inline bool SafeEquals (  
   const T t,  
   const U u  
) throw ();  
```  
  
#### Parameters  
 [in] `t`  
 The first number to compare. This must be of type T.  
  
 [in] `u`  
 The second number to compare. This must be of type U.  
  
## Return Value  
 `true` if `t` and `u` are equal; otherwise `false`.  
  
## Remarks  
 The method enhances `==` because `SafeEquals` enables you to compare two different types of numbers.  
  
 This method is part of [SafeInt Library](../VS_visualcpp/SafeInt-Library.md) and is designed for a single comparison operation without creating an instance of the [SafeInt Class](../VS_visualcpp/SafeInt-Class.md).  
  
> [!NOTE]
>  This method should only be used when a single mathematical operation must be protected. If there are multiple operations, you should use the `SafeInt` class instead of calling the individual stand-alone functions.  
  
 For more information about the template types T and U, see [SafeInt Functions](../VS_visualcpp/SafeInt-Functions.md).  
  
## Requirements  
 **Header:** safeint.h  
  
 **Namespace:** Microsoft::Utilities  
  
## See Also  
 [SafeInt Functions](../VS_visualcpp/SafeInt-Functions.md)   
 [SafeInt Library](../VS_visualcpp/SafeInt-Library.md)   
 [SafeInt Class](../VS_visualcpp/SafeInt-Class.md)   
 [SafeNotEquals](../VS_visualcpp/SafeNotEquals.md)