---
title: "Linker Tools Error LNK1211 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK1211"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK1211"
ms.assetid: 607400eb-4180-4892-817f-eedfa628af61
caps.latest.revision: 8
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
# Linker Tools Error LNK1211
precompiled type information not found; 'filename' not linked or overwritten  
  
 The given object file, compiled with [/Yc](../../build/reference/yc-create-precompiled-header-file.md), was not specified in the LINK command or was overwritten.  
  
 If you are creating a debug library that uses precompiled headers and if you specify /Yc and [/Z7](../../build/reference/z7-zi-zi-debug-information-format.md), Visual C++ generates a precompiled object file that contains CodeView debugging information. The error occurs only when you store the precompiled object file in a library, use the library to build an executable image, and the object files that are referenced have no transitive references to any of the functions the precompiled object file defines.  
  
 There are two methods to work around this situation:  
  
-   Specify the [/Yd](../../build/reference/yd-place-debug-information-in-object-file.md) compiler option to add the CodeView information from the precompiled header to each object module. This method is less desirable because it generally produces large object modules that can increase the time required to link the application.  
  
-   Specify [/Yl](../../build/reference/yl-inject-pch-reference-for-debug-library.md) and pass the name of any arbitrary string, when you create a precompiled header file that does not contain any function definitions. This directs the compiler to create a symbol in the precompiled object file and to emit a reference to that symbol in each object file that used the precompiled header file that is associated with the precompiled object file.  
  
 When you compile a module with **/Yc** and **/Yl**, the compiler creates a symbol similar to `__@@_PchSym_@00@...@symbol_name`, where the ellipsis (...) represents a compiler-generated character string, and stores it in the object module. Any source file that you compile with this precompiled header refers to the specified symbol, which causes the linker to include the object module and its debugging information from the library.  
  
 For more information on this error, see Knowledge Base article Q102697 PRB: Build Errors Using Precompiled Header in Debugging Lib.