---
title: "Casting Operators"
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
ms.topic: index-page 
ms.assetid: 16240348-26bc-4f77-8eab-57253f00ce52
caps.latest.revision: 7
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
# Casting Operators
There are several casting operators specific to the C++ language. These operators are intended to remove some of the ambiguity and danger inherent in old style C language casts. These operators are:  
  
-   [dynamic_cast](../VS_visualcpp/dynamic_cast-Operator.md) Used for conversion of polymorphic types.  
  
-   [static_cast](../VS_visualcpp/static_cast-Operator.md) Used for conversion of nonpolymorphic types.  
  
-   [const_cast](../VS_visualcpp/const_cast-Operator.md) Used to remove the `const`, `volatile`, and `__unaligned` attributes.  
  
-   [reinterpret_cast](../VS_visualcpp/reinterpret_cast-Operator.md) Used for simple reinterpretation of bits.  
  
-   [safe_cast](../VS_visualcpp/safe_cast--C---Component-Extensions-.md) Used to produce verifiable MSIL.  
  
 Use `const_cast` and `reinterpret_cast` as a last resort, since these operators present the same dangers as old style casts. However, they are still necessary in order to completely replace old style casts.  
  
## See Also  
 [Casting](../VS_visualcpp/Casting.md)