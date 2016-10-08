---
title: "Fatal Error C1509"
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
ms.topic: error-reference
ms.assetid: 40dd100d-c6ba-451c-bd26-2c99ec1c36d6
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
# Fatal Error C1509
compiler limit : too many exception handler states in function 'function'. simplify function  
  
 The code exceeds an internal limit on exception handler states (32,768 states).  
  
 The most common cause is that the function contains a complex expression of user-defined class variables and arithmetic operators.  
  
### To fix by using the following possible solutions  
  
1.  Simplify expressions by assigning common subexpressions to temporary variables.  
  
2.  Split the function into smaller functions.