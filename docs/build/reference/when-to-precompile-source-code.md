---
title: "When to Precompile Source Code | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "pch"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "source code, precompiling"
  - "precompiled header files, when to precompile"
ms.assetid: eb8ba193-fd87-40d3-9545-c75deabe37cb
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
# When to Precompile Source Code
Precompiled code is useful during the development cycle to reduce compilation time, especially if:  
  
-   You always use a large body of code that changes infrequently.  
  
-   Your program comprises multiple modules, all of which use a standard set of include files and the same compilation options. In this case, all include files can be precompiled into one precompiled header.  
  
 The first compilation — the one that creates the precompiled header file — takes a bit longer than subsequent compilations. Subsequent compilations can proceed more quickly by including the precompiled code.  
  
 You can precompile both C and C++ programs. In C++ programming, it is common practice to separate class interface information into header files. These header files can later be included in programs that use the class. By precompiling these headers, you can reduce the time a program takes to compile.  
  
> [!NOTE]
>  Although you can use only one precompiled header (.pch) file per source file, you can use multiple .pch files in a project.  
  
## See Also  
 [Creating Precompiled Header Files](../../build/reference/creating-precompiled-header-files.md)