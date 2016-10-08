---
title: "Expression Evaluator Error CXX0030"
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
ms.assetid: ada8b48c-09c8-49bf-ae23-313ed663c4fe
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
# Expression Evaluator Error CXX0030
expression not evaluatable  
  
 The debugger's expression evaluator could not obtain a value for the expression as written. One likely cause is that the expression refers to memory that is outside the program's address space (dereferencing a null pointer is one example). Windows does not allow access to memory that is outside of the program's address space.  
  
 You may want to rewrite your expression using parentheses to control the order of evaluation.  
  
 This error is identical to CAN0030.