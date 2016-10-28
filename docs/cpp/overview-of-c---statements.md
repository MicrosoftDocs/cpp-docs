---
title: "Overview of C++ Statements"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "statements, C++"
ms.assetid: e56996b2-b846-4b99-ac94-ac72fffc5ec7
caps.latest.revision: 6
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
# Overview of C++ Statements
C++ statements are executed sequentially, except when an expression statement, a selection statement, an iteration statement, or a jump statement specifically modifies that sequence.  
  
 Statements may be of the following types:  
  
```  
  
labeled-statement  
expression-statement  
compound-statement  
selection-statement  
iteration-statement  
jump-statement  
declaration-statement  
try-throw-catch  
  
```  
  
 In most cases, the C++ statement syntax is identical to that of ANSI C. The primary difference between the two is that in C, declarations are allowed only at the start of a block; C++ adds the *declaration-statement*, which effectively removes this restriction. This enables you to introduce variables at a point in the program where a precomputed initialization value can be calculated.  
  
 Declaring variables inside blocks also allows you to exercise precise control over the scope and lifetime of those variables.  
  
 The topics on statements describe the following C++ keywords:  
  
|||||  
|-|-|-|-|  
|[break](../cpp/break-statement--c---.md)|[else](../cpp/if-else-statement--c---.md)|[__if_exists](../cpp/__if_exists-statement.md)|[__try](../cpp/structured-exception-handling--c-c---.md)|  
|[case](../cpp/switch-statement--c---.md)|[__except](../cpp/structured-exception-handling--c-c---.md)|[__if_not_exists](../cpp/__if_not_exists-statement.md)|[try](../cpp/try--throw--and-catch-statements--c---.md)|  
|[catch](../cpp/try--throw--and-catch-statements--c---.md)|[for](../cpp/for-statement--c---.md)|[__leave](../c/try-finally-statement--c-.md)|[while](../cpp/while-statement--c---.md)|  
|[continue](../cpp/continue-statement--c---.md)|[goto](../cpp/goto-statement--c---.md)|[return](../cpp/return-statement--c---.md)||  
|[default](../cpp/switch-statement--c---.md)|[__finally](../cpp/structured-exception-handling--c-c---.md)|[switch](../cpp/switch-statement--c---.md)||  
|[do](../cpp/do-while-statement--c---.md)|[if](../cpp/if-else-statement--c---.md)|[throw](../cpp/try--throw--and-catch-statements--c---.md)||  
  
## See Also  
 [Statements](../cpp/statements--c---.md)