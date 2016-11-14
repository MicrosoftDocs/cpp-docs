---
title: "Compiler Error C3505 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3505"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3505"
ms.assetid: ed73c99e-93a1-4f3a-bac7-ba7ed5d836e4
caps.latest.revision: 4
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
# Compiler Error C3505
cannot load type library 'guid'  
  
 C3505 can be caused if you are running the (32-bit to) 64-bit cross-compiler on a 64-bit machine because the compiler is running under WOW64 and can only read from the 32-bit registry hive.  
  
 You can resolve this C3505 by building 32-bit and 64-bit versions of the type library you are trying to import and register them both.  Or you can use the native 64-bit compiler, but that would require changing your VC++ Directories in the IDE to point to the 64-bit compiler.  
  
 For more information, see,  
  
-   [How to: Enable a 64-Bit Visual C++ Toolset on the Command Line](../../build/how-to-enable-a-64-bit-visual-cpp-toolset-on-the-command-line.md)  
  
-   [How to: Enable a 64-Bit Visual C++ Toolset on the Command Line](../../build/how-to-enable-a-64-bit-visual-cpp-toolset-on-the-command-line.md)  
  
-   [How to: Configure Visual C++ Projects to Target 64-Bit Platforms](../../build/how-to-configure-visual-cpp-projects-to-target-64-bit-platforms.md)