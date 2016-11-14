---
title: "Blocks | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "function definitions, blocks in code"
  - "blocks"
  - "compound statements"
  - "statements, compound"
ms.assetid: be231a92-c712-464e-ae25-a4becb20f7f5
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
# Blocks
A sequence of declarations, definitions, and statements enclosed within curly braces (**{ }**) is called a "block." There are two types of blocks in C. The "compound statement," a statement composed of one or more statements (see [The Compound Statement](../c-language/compound-statement-c.md)), is one type of block. The other, the "function definition," consists of a compound statement (the body of the function) plus the function's associated "header" (the function name, return type, and formal parameters). A block within other blocks is said to be "nested."  
  
 Note that while all compound statements are enclosed within curly braces, not everything enclosed within curly braces constitutes a compound statement. For example, although the specifications of array, structure, or enumeration elements can appear within curly braces, they are not compound statements.  
  
## See Also  
 [Source Files and Source Programs](../c-language/source-files-and-source-programs.md)