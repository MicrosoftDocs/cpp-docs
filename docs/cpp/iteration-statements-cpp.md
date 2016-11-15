---
title: "Iteration Statements (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "iteration statements"
  - "loop structures, iteration statements"
ms.assetid: bf6d75f7-ead2-426a-9c47-33847f59b8c7
caps.latest.revision: 8
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
# Iteration Statements (C++)
Iteration statements cause statements (or compound statements) to be executed zero or more times, subject to some loop-termination criteria. When these statements are compound statements, they are executed in order, except when either the [break](../cpp/break-statement-cpp.md) statement or the [continue](../cpp/continue-statement-cpp.md) statement is encountered.  
  
 C++ provides four iteration statements — [while](../cpp/while-statement-cpp.md), [do](../cpp/do-while-statement-cpp.md), [for](../cpp/for-statement-cpp.md), and [range-based for](../cpp/range-based-for-statement-cpp.md). Each of these iterates until its termination expression evaluates to zero (false), or until loop termination is forced with a **break** statement. The following table summarizes these statements and their actions; each is discussed in detail in the sections that follow.  
  
### Iteration Statements  
  
|Statement|Evaluated At|Initialization|Increment|  
|---------------|------------------|--------------------|---------------|  
|`while`|Top of loop|No|No|  
|**do**|Bottom of loop|No|No|  
|**for**|Top of loop|Yes|Yes|  
|**range-based for**|Top of loop|Yes|Yes|  
  
 The statement part of an iteration statement cannot be a declaration. However, it can be a compound statement containing a declaration.  
  
## See Also  
 [Overview of C++ Statements](../cpp/overview-of-cpp-statements.md)