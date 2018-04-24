---
title: "Macro Substitution | Microsoft Docs"
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
  - "NMAKE program, macro substitution"
  - "macros, NMAKE"
  - "substitution macros in NMAKE"
ms.assetid: 47465cfe-fd92-49db-aebe-7c2d7ecceb73
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Macro Substitution
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Macro Substitution](https://docs.microsoft.com/cpp/build/macro-substitution).  
  
  
When *macroname* is invoked, each occurrence of *string1* in its definition string is replaced by *string2*.  
  
## Syntax  
  
```  
$(macroname:string1=string2)  
```  
  
## Remarks  
 Macro substitution is case sensitive and is literal; *string1* and *string2* cannot invoke macros. Substitution does not modify the original definition. You can substitute text in any predefined macro except [$$@](../build/filename-macros.md).  
  
 No spaces or tabs precede the colon; any after the colon are interpreted as literal. If *string2* is null, all occurrences of *string1* are deleted from the macro's definition string.  
  
## See Also  
 [Using an NMAKE Macro](../build/using-an-nmake-macro.md)

