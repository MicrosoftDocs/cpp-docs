---
title: "SafeLessThan"
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
ms.assetid: 9d85bc0d-8d94-4d59-9b72-ef3c63a120a0
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
# SafeLessThan
Determines whether one number is less than another.  
  
## Syntax  
  
```  
template<typename T, typename U>  
inline bool SafeLessThan (  
   const T t,  
   const U u  
) throw ();  
```  
  
#### Parameters  
 [in] `t`  
 The first number. This must be of type T.  
  
 [in] `u`  
 The second numer. This must be of type U.  
  
## Return Value  
 `true` if `t` is less than `u`; otherwise `false`.  
  
## Remarks  
 This method enhances the standard comparison operator because `SafeLessThan` enables you to compare two different types of number.  
  
 This method is part of [SafeInt Library](../VS_visualcpp/SafeInt-Library.md) and is designed for a single comparison operation without creating an instance of the [SafeInt Class](../VS_visualcpp/SafeInt-Class.md).  
  
> [!NOTE]
>  This method should only be used when a single mathematical operation must be protected. If there are multiple operations, you should use the `SafeInt` class rather than calling the individual stand-alone functions.  
  
 For more information about the template types T and U, see [SafeInt Functions](../VS_visualcpp/SafeInt-Functions.md).  
  
## Requirements  
 **Header:** safeint.h  
  
 **Namespace:** Microsoft::Utilities  
  
## See Also  
 [SafeInt Functions](../VS_visualcpp/SafeInt-Functions.md)   
 [SafeInt Library](../VS_visualcpp/SafeInt-Library.md)   
 [SafeInt Class](../VS_visualcpp/SafeInt-Class.md)   
 [SafeLessThanEquals](../VS_visualcpp/SafeLessThanEquals.md)   
 [SafeGreaterThan](../VS_visualcpp/SafeGreaterThan.md)   
 [SafeGreaterThanEquals](../VS_visualcpp/SafeGreaterThanEquals.md)