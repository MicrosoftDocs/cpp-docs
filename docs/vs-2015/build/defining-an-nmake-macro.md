---
title: "Defining an NMAKE Macro | Microsoft Docs"
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
  - "defining NMAKE macros"
  - "NMAKE macros, defining"
ms.assetid: 45aae451-9d33-4a3d-8799-2e0cae17070d
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Defining an NMAKE Macro
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Defining an NMAKE Macro](https://docs.microsoft.com/cpp/build/defining-an-nmake-macro).  
  
  
Syntax  
  
```  
  
macroname=string  
```  
  
## Remarks  
 The *macroname* is a combination of letters, digits, and underscores (_) up to 1,024 characters, and is case sensitive. The *macroname* can contain an invoked macro. If *macroname* consists entirely of an invoked macro, the macro being invoked cannot be null or undefined.  
  
 The `string` can be any sequence of zero or more characters. A null string contains zero characters or only spaces or tabs. The `string` can contain a macro invocation.  
  
## What do you want to know more about?  
 [Special characters in macros](../build/special-characters-in-macros.md)  
  
 [Null and undefined macros](../build/null-and-undefined-macros.md)  
  
 [Where to define macros](../build/where-to-define-macros.md)  
  
 [Precedence in macro definitions](../build/precedence-in-macro-definitions.md)  
  
## See Also  
 [Macros and NMAKE](../build/macros-and-nmake.md)

