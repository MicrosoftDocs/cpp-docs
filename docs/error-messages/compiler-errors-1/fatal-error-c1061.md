---
title: "Fatal Error C1061 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C1061"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1061"
ms.assetid: 9366c0bc-96e0-4967-aa7d-4ebf098de806
caps.latest.revision: 9
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
# Fatal Error C1061
compiler limit : blocks nested too deeply  
  
 Nesting of code blocks exceeds the limit of 128 nesting levels. This is a hard limit in the compiler for both C and C++, in both the 32-bit and 64-bit tool set. The count of nesting levels can be increased by anything that creates a scope or block. For example, namespaces, using directives, preprocessor expansions, template expansion, exception handling, loop constructs, and else-if clauses can all increase the nesting level seen by the compiler.  
  
 To fix this error you must refactor your code. In any case, deeply nested code is difficult to understand and reason about. Refactoring your code to have fewer nesting levels may improve code quality and simplify maintenance. Break deeply nested code into functions that are called from the original context. Limit the number of loops or chained else-if clauses within a block.