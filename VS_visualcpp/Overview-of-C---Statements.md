---
title: "Overview of C++ Statements"
ms.custom: na
ms.date: 10/07/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: language-reference
ms.assetid: e56996b2-b846-4b99-ac94-ac72fffc5ec7
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
|[break](../VS_visualcpp/break-Statement--C---.md)|[else](../VS_visualcpp/if-else-Statement--C---.md)|[__if_exists](../VS_visualcpp/__if_exists-Statement.md)|[__try](../VS_visualcpp/Structured-Exception-Handling--C-C---.md)|  
|[case](../VS_visualcpp/switch-Statement--C---.md)|[__except](../VS_visualcpp/Structured-Exception-Handling--C-C---.md)|[__if_not_exists](../VS_visualcpp/__if_not_exists-Statement.md)|[try](../VS_visualcpp/try--throw--and-catch-Statements--C---.md)|  
|[catch](../VS_visualcpp/try--throw--and-catch-Statements--C---.md)|[for](../VS_visualcpp/for-Statement--C---.md)|[__leave](../VS_visualcpp/try-finally-Statement--C-.md)|[while](../VS_visualcpp/while-Statement--C---.md)|  
|[continue](../VS_visualcpp/continue-Statement--C---.md)|[goto](../VS_visualcpp/goto-Statement--C---.md)|[return](../VS_visualcpp/return-Statement--C---.md)||  
|[default](../VS_visualcpp/switch-Statement--C---.md)|[__finally](../VS_visualcpp/Structured-Exception-Handling--C-C---.md)|[switch](../VS_visualcpp/switch-Statement--C---.md)||  
|[do](../VS_visualcpp/do-while-Statement--C---.md)|[if](../VS_visualcpp/if-else-Statement--C---.md)|[throw](../VS_visualcpp/try--throw--and-catch-Statements--C---.md)||  
  
## See Also  
 [Statements](../VS_visualcpp/Statements--C---.md)