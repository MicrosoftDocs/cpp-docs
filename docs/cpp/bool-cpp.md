---
title: "bool (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "bool_cpp"
  - "bool"
  - "__BOOL_DEFINED"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "bool keyword [C++]"
  - "__BOOL_DEFINED macro"
ms.assetid: 9abed3f2-d21c-4eb4-97c5-716342e613d8
caps.latest.revision: 9
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
# bool (C++)
This keyword is a built-in type. A variable of this type can have values [true](../cpp/true-cpp.md) and [false](../cpp/false-cpp.md). Conditional expressions have the type `bool` and so have values of type `bool`. For example, `i!=0` now has **true** or **false** depending on the value of `i`.  
  
 The values **true** and **false** have the following relationship:  
  
```  
!false == true  
!true == false  
```  
  
 In the following statement:  
  
```  
if (condexpr1) statement1;   
```  
  
 If `condexpr1` is **true**, `statement1` is always executed; if `condexpr1` is **false**, `statement1` is never executed.  
  
 When a postfix or prefix `++` operator is applied to a variable of type `bool`, the variable is set to **true**. The postfix or prefix `--` operator cannot be applied to a variable of this type.  
  
 The `bool` type participates in integral promotions. An r-value of type `bool` can be converted to an r-value of type `int`, with **false** becoming zero and **true** becoming one. As a distinct type, `bool` participates in overload resolution.  
  
## See Also  
 [Keywords](../cpp/keywords-cpp.md)   
 [Fundamental Types](../cpp/fundamental-types-cpp.md)