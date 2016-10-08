---
title: "SafeLessThanEquals"
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
ms.assetid: cbd70526-faf2-4fbc-96a0-b61e8cf5f04a
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
# SafeLessThanEquals
Compares two numbers.  
  
## Syntax  
  
```  
template <typename T, typename U>  
inline bool SafeLessThanEquals (  
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
 `true` if `t` is less than or equal to `u`; otherwise `false`.  
  
## Remarks  
 `SafeLessThanEquals` extends the regular comparison operator by enabling you to compare two different types of numbers.  
  
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
 [SafeGreaterThan](../VS_visualcpp/SafeGreaterThan.md)   
 [SafeLessThan](../VS_visualcpp/SafeLessThan.md)   
 [SafeGreaterThanEquals](../VS_visualcpp/SafeGreaterThanEquals.md)