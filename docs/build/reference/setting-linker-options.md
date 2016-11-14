---
title: "Setting Linker Options | Microsoft Docs"
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
  - "files [C++], LINK"
  - "input files [C++], linker"
  - "linker [C++], ways to set options"
  - "linker [C++], switches"
  - "input files [C++]"
  - "object/library modules"
ms.assetid: e08fb487-0f2e-4f24-87db-232dbc8bd2e2
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
# Setting Linker Options
Linker options can be set inside or outside of the development environment. The topic for each linker option discusses how it can be set in the development environment. See [Linker Options](../../build/reference/linker-options.md) for a complete list.  
  
 When you run LINK outside the development environment, you can specify input in one or more ways:  
  
-   On the [command line](../../build/reference/linker-command-line-syntax.md)  
  
-   Using [command files](../../build/reference/link-command-files.md)  
  
-   In [environment variables](../../build/reference/link-environment-variables.md)  
  
 LINK first processes options specified in the LINK environment variable, followed by options in the order they are specified on the command line and in command files. If an option is repeated with different arguments, the last one processed takes precedence.  
  
 Options apply to the entire build; no options can be applied to specific input files.  
  
## See Also  
 [C/C++ Building Reference](../../build/reference/c-cpp-building-reference.md)   
 [Linker Options](../../build/reference/linker-options.md)