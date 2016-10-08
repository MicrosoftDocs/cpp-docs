---
title: "SafeGreaterThan"
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
ms.assetid: 32cecac9-ba88-43eb-a7a4-30e390456739
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
# SafeGreaterThan
Compares two numbers.  
  
## Syntax  
  
```  
template<typename T, typename U>  
inline bool SafeGreaterThan (  
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
 `true` if `t` is greater than `u`; otherwise `false`.  
  
## Remarks  
 `SafeGreaterThan` extends the regular comparison operator by enabling you to compare two different types of numbers.  
  
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
 [SafeLessThan](../VS_visualcpp/SafeLessThan.md)   
 [SafeLessThanEquals](../VS_visualcpp/SafeLessThanEquals.md)   
 [SafeGreaterThanEquals](../VS_visualcpp/SafeGreaterThanEquals.md)