---
title: "Using an NMAKE Macro | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "macros, NMAKE"
  - "NMAKE macros, using"
ms.assetid: 95c87fbc-76e6-48c0-8536-9bfe179f328e
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Using an NMAKE Macro
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Using an NMAKE Macro](https://docs.microsoft.com/cpp/build/using-an-nmake-macro).  
  
  
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

