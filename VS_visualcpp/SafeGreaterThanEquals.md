---
title: "SafeGreaterThanEquals"
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
ms.assetid: 43312fa9-d925-4f9f-a352-a190c02b3005
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
# SafeGreaterThanEquals
Compares two numbers.  
  
## Syntax  
  
```  
template <typename T, typename U>  
inline bool SafeGreaterThanEquals (  
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
 `true` if `t` is greater than or equal to `u`; otherwise `false`.  
  
## Remarks  
 `SafeGreaterThanEquals` enhances the standard comparison operator because it enables you to compare two different types of numbers.  
  
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
 [SafeLessThanEquals](../VS_visualcpp/SafeLessThanEquals.md)   
 [SafeLessThan](../VS_visualcpp/SafeLessThan.md)