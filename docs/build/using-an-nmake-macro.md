---
title: "Using an NMAKE Macro | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["macros, NMAKE", "NMAKE macros, using"]
ms.assetid: 95c87fbc-76e6-48c0-8536-9bfe179f328e
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Using an NMAKE Macro
To use a macro, enclose its name in parentheses preceded by a dollar sign ($) as follows.  
  
## Syntax  
  
```  
$(macroname)  
```  
  
## Remarks  
 No spaces are allowed. The parentheses are optional if *macroname* is a single character. The definition string replaces $(*macroname*); an undefined macro is replaced by a null string.  
  
## What do you want to know more about?  
 [Macro substitution](../build/macro-substitution.md)  
  
## See Also  
 [Macros and NMAKE](../build/macros-and-nmake.md)