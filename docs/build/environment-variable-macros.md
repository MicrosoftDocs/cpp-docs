---
title: "Environment-Variable Macros | Microsoft Docs"
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
  - "NMAKE program, environment variable macros"
  - "environment variables, macros in NMAKE"
  - "macros, environment-variable"
ms.assetid: f8e96635-0906-47b0-9f56-12a6fdf5e347
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
# Environment-Variable Macros
NMAKE inherits macro definitions for environment variables that exist before the start of the session. If a variable was set in the operating-system environment, it is available as an NMAKE macro. The inherited names are converted to uppercase. Inheritance occurs before preprocessing. Use the /E option to cause macros inherited from environment variables to override any macros with the same name in the makefile.  
  
 Environment-variable macros can be redefined in the session, and this changes the corresponding environment variable. You can also change environment variables with the SET command. Using the SET command to change an environment variable in a session does not change the corresponding macro, however.  
  
 For example:  
  
```  
PATH=$(PATH);\nonesuch  
  
all:  
    echo %PATH%  
```  
  
 In this example, changing `PATH` changes the corresponding environment variable `PATH`; it appends `\nonesuch` to your path.  
  
 If an environment variable is defined as a string that would be syntactically incorrect in a makefile, no macro is created and no warning is generated. If a variable's value contains a dollar sign ($), NMAKE interprets it as the beginning of a macro invocation. Using the macro can cause unexpected behavior.  
  
## See Also  
 [Special NMAKE Macros](../build/special-nmake-macros.md)