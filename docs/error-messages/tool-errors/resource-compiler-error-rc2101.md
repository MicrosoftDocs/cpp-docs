---
title: "Resource Compiler Error RC2101 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "RC2101"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RC2101"
ms.assetid: 580f9d74-162f-41e9-9438-ddbe3457c359
caps.latest.revision: 6
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
# Resource Compiler Error RC2101
Invalid directive in preprocessed RC file  
  
 The Resource Compiler file contains a **#pragma** directive.  
  
 Use the **#ifndef** preprocessor directive with the RC_INVOKED constant that the Resource Compiler defines when it processes an include file. Place the **#pragma** directive inside a block of code that is not processed when the RC_INVOKED constant is defined. Code in the block is processed only by the C/C++ compiler and not by the Resource Compiler. The following sample code demonstrates this technique:  
  
```  
#ifndef RC_INVOKED  
#pragma pack(2)  // C/C++ only, ignored by Resource Compiler  
#endif  
```  
  
 The **#pragma** preprocessor directive has no meaning in an .RC file. The **#include** preprocessor directive is used frequently in an .RC file to include a header file (either a project-based custom header file or a standard header file provided by Microsoft with one of its products). Some of these include files contain the **#pragma** directive. Because a header file can include one or more other header files, the file that contains the offending **#pragma** directive may not be immediately obvious.  
  
 The **#ifndef** RC_INVOKED technique can control including header files in project-based header files.