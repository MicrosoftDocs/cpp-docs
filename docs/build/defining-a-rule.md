---
title: "Defining a Rule | Microsoft Docs"
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
helpviewer_keywords: 
  - "NMAKE program, inference rules"
  - "defining inference rules"
ms.assetid: 071cd092-3f2e-4065-b0fb-36a9d393cfa8
caps.latest.revision: 7
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
# Defining a Rule
The *fromext* represents the extension of a dependent file, and *toext* represents the extension of a target file.  
  
```  
.fromext.toext:  
   commands  
```  
  
## Remarks  
 Extensions are not case sensitive. Macros can be invoked to represent *fromext* and *toext*; the macros are expanded during preprocessing. The period (.) preceding *fromext* must appear at the beginning of the line. The colon (:) is preceded by zero or more spaces or tabs. It can be followed only by spaces or tabs, a semicolon (;) to specify a command, a number sign (#) to specify a comment, or a newline character. No other spaces are allowed. Commands are specified as in description blocks.  
  
## What do you want to know more about?  
 [Search paths in rules](../build/search-paths-in-rules.md)  
  
## See Also  
 [Inference Rules](../build/inference-rules.md)