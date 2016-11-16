---
title: "Expression Evaluator Error CXX0017 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "CXX0017"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAN0017"
  - "CXX0017"
ms.assetid: af74db02-a64d-49ca-8363-3e044a107580
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
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
# Expression Evaluator Error CXX0017
symbol not found  
  
 A symbol specified in an expression could not be found.  
  
 One possible cause of this error is a case mismatch in the symbol name. Because C and C++ are case-sensitive languages, a symbol name must be given in the exact case in which it is defined in the source.  
  
 This error can occur when trying to typecast a variable in order to watch the variable during debugging. The `typedef` declares a new name for a type, but it does not define a new type. The typecast attempted in the debugger requires the name of a defined type.  
  
 This error is identical to CAN0017.  
  
### To fix by using the following possible solutions  
  
1.  Make sure the symbol is already declared at the point in the program where it is being used.  
  
2.  Use an actual type name to cast variables in the debugger, rather than a `typedef`-defined name.