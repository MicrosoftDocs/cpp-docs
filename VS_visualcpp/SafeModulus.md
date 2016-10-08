---
title: "SafeModulus"
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
ms.assetid: ae5c81eb-5dcf-45a5-aa76-465fdfe68654
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
# SafeModulus
Performs the modulus operation on two numbers.  
  
## Syntax  
  
```  
template<typename T, typename U>  
inline bool SafeModulus (  
   const T t,  
   const U u,  
   T& result  
) throw ();  
```  
  
#### Parameters  
 [in] `t`  
 The divisor. This must be of type T.  
  
 [in] `u`  
 The dividend. This must be of type U.  
  
 [out] `result`  
 The parameter where `SafeModulus` stores the result.  
  
## Return Value  
 `true` if no error occurs; `false` if an error occurs.  
  
## Remarks  
 This method is part of [SafeInt Library](../VS_visualcpp/SafeInt-Library.md) and is designed for a single modulus operation without creating an instance of the [SafeInt Class](../VS_visualcpp/SafeInt-Class.md).  
  
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
 [SafeDivide](../VS_visualcpp/SafeDivide.md)