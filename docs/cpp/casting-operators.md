---
title: "Casting Operators | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "index-page "
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operators [C++], casting"
  - "casting operators"
ms.assetid: 16240348-26bc-4f77-8eab-57253f00ce52
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Casting Operators
There are several casting operators specific to the C++ language. These operators are intended to remove some of the ambiguity and danger inherent in old style C language casts. These operators are:  
  
-   [dynamic_cast](../cpp/dynamic-cast-operator.md) Used for conversion of polymorphic types.  
  
-   [static_cast](../cpp/static-cast-operator.md) Used for conversion of nonpolymorphic types.  
  
-   [const_cast](../cpp/const-cast-operator.md) Used to remove the `const`, `volatile`, and `__unaligned` attributes.  
  
-   [reinterpret_cast](../cpp/reinterpret-cast-operator.md) Used for simple reinterpretation of bits.  
  
-   [safe_cast](../windows/safe-cast-cpp-component-extensions.md) Used to produce verifiable MSIL.  
  
 Use `const_cast` and `reinterpret_cast` as a last resort, since these operators present the same dangers as old style casts. However, they are still necessary in order to completely replace old style casts.  
  
## See Also  
 [Casting](../cpp/casting.md)