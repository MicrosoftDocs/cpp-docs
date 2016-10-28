---
title: "Troubleshooting IntelliSense in C++ Projects"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - ".ncb files"
  - "ncb files"
  - "IntelliSense, troubleshooting failure in C++ projects"
  - "troubleshooting IntelliSense"
  - "troubleshooting Visual C++, IntelliSense"
ms.assetid: 72e4eb39-66d3-403d-8da7-00ed288a1899
caps.latest.revision: 20
ms.author: "mblome"
manager: "douge"
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
# Troubleshooting IntelliSense in C++ Projects
IntelliSense can stop working under certain conditions. Use the following steps to help determine why IntelliSense does not work for C++ projects.  
  
### To investigate IntelliSense failure in C++ projects  
  
1.  Make sure that the Visual C++ project contains no compilation errors.  
  
    1.  If the project is a Makefile project, see [How to: Enable IntelliSense for Makefile Projects](../ide/how-to--enable-intellisense-for-makefile-projects.md).  
  
2.  Make sure that stdafx.h is on the include path. For more information about include paths in Visual C++ projects, see [#include Directive (C/C++)](../c/sharpinclude-directive--c-c---.md) and [/I (Additional Include Directories)](../buildref/-i--additional-include-directories-.md).  
  
## IntelliSense Limitations  
 IntelliSense does not work in C++ projects under the following circumstances:  
  
-   The cursor is in a code comment.  
  
-   You are writing a string literal.  
  
-   A syntax error appears over the cursor.  
  
-   The solution consists of either the syntax for managed C++, or the earlier Managed Extensions for C++ syntax.  
  
-   IntelliSense is not fully supported when you reference a header file multiple times by using the `#include` directive, and the meaning of that header file changes because of various macro states that are defined through the `#define` directive. In other words, when you include a header file several times and the header usage changes under different macro states, IntelliSense does not always work.  
  
## See Also  
 [Troubleshooting IntelliSense](assetId:///c1b3adb9-0d48-4770-a51e-392ed818c484)   
 [How to: Organize Project Output Files for Builds](../ide/how-to--organize-project-output-files-for-builds.md)