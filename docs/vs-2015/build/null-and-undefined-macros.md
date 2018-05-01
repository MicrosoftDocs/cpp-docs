---
title: "Null and Undefined Macros | Microsoft Docs"
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
  - "NMAKE program, undefined macros"
  - "Null macros in NMAKE"
  - "macros, null and undefined"
  - "undefined macros and NMAKE"
  - "NMAKE program, null macros"
ms.assetid: 1db4611a-1755-4328-b00f-d35365af8b6c
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Null and Undefined Macros
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Null and Undefined Macros](https://docs.microsoft.com/cpp/build/null-and-undefined-macros).  
  
  
Both null and undefined macros expand to null strings, but a macro defined as a null string is considered defined in preprocessing expressions. To define a macro as a null string, specify no characters except spaces or tabs after the equal sign (=) in a command line or command file, and enclose the null string or definition in double quotation marks (" "). To undefine a macro, use **!UNDEF.** For more information, see [Makefile Preprocessing Directives](../build/makefile-preprocessing-directives.md).  
  
## See Also  
 [Defining an NMAKE Macro](../build/defining-an-nmake-macro.md)

