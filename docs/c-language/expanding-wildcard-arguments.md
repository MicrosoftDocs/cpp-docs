---
title: "Expanding Wildcard Arguments | Microsoft Docs"
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
  - "asterisk wildcard"
  - "question mark, wildcard"
  - "expanding wildcard arguments"
  - "wildcards, expanding"
ms.assetid: 80a11c4b-0199-420e-a342-cf1d803be5bc
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Expanding Wildcard Arguments
**Microsoft Specific**  
  
 When you run a C program, you can use either of the two wildcards — the question mark (?) and the asterisk (*) — to specify filename and path arguments on the command line.  
  
 By default, wildcards are not expanded in command-line arguments. You can replace the normal argument vector `argv` loading routine with a version that does expand wildcards by linking with the setargv.obj or wsetargv.obj file. If your program uses a `main` function, link with setargv.obj. If your program uses a `wmain` function, link with wsetargv.obj. Both of these have equivalent behavior.  
  
 To link with setargv.obj or wsetargv.obj, use the **/link** option. For example:  
  
 **cl example.c /link setargv.obj**  
  
 The wildcards are expanded in the same manner as operating system commands. (See your operating system user's guide if you are unfamiliar with wildcards.)  
  
 **END Microsoft Specific**  
  
## See Also  
 [Link Options](../c-runtime-library/link-options.md)   
 [main Function and Program Execution](../c-language/main-function-and-program-execution.md)