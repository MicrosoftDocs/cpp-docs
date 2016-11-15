---
title: "Linker Tools Warning LNK4210 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK4210"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK4210"
ms.assetid: db48cff8-a2be-4a77-8d03-552b42c228fa
caps.latest.revision: 12
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
# Linker Tools Warning LNK4210
section section exists; there may be unhandled static initializers or terminators  
  
 Some code introduced static initializers or terminators, but the CRT or its equivalent (which needs to run the static initializers or terminators) isn't run when the application starts. Examples of code that would cause this:  
  
-   Global class variable with a constructor, destructor, or virtual function table.  
  
-   Global variable initialized with a non-compile-time constant.  
  
 To fix this problem, try one of the following:  
  
-   Remove all code with static initializers.  
  
-   Do not use [/NOENTRY](../../build/reference/noentry-no-entry-point.md).  After you remove /NOENTRY, you may also have to add msvcrt.lib, libcmt.lib, or libcmtd.lib to your linker command line.  
  
-   Add msvcrt.lib, libcmt.lib, or libcmtd.lib to your linker command line.  
  
-   When moving from /clr:pure compilation to /clr, remove the [/ENTRY](../../build/reference/entry-entry-point-symbol.md) option from the linker-line. This will enable CRT initialization allowing static initializers to be executed at application startup.  
  
-   If your project is built with [/ENTRY](../../build/reference/entry-entry-point-symbol.md), and if /ENTRY is passed a function other than `_DllMainCRTStartup`, the function must call CRT_INIT. See [Run-Time Library Behavior](../../build/run-time-library-behavior.md) and Knowledge Base article Q94248, [http://support.microsoft.com/default.aspx?scid=kb;en-us;94248](http://support.microsoft.com/default.aspx?scid=kb;en-us;94248) for more information.  
  
 The [/GS](../../build/reference/gs-buffer-security-check.md) compiler option requires CRT startup code.  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)