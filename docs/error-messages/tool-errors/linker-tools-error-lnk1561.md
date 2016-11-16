---
title: "Linker Tools Error LNK1561 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK1561"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK1561"
ms.assetid: cb0b709b-7c9c-4496-8a4e-9e1e4aefe447
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
# Linker Tools Error LNK1561
entry point must be defined  
  
 The linker did not find an entry point. You may have intended to link as a DLL, in which case you should link with the [/DLL](../../build/reference/dll-build-a-dll.md) option. You may have also forgotten to specify the name of the entry point; link with the [/ENTRY](../../build/reference/entry-entry-point-symbol.md) option.  
  
 Otherwise, you should include a main, wmain, WinMain, or wMain function in your code.  
  
 If you are using [LIB](../../build/reference/lib-reference.md) and intend to build a .dll, one reason for this error is that you supplied a .def file. If so, remove the .def file from the build.  
  
 The following sample generates LNK1561:  
  
```  
// LNK1561.cpp  
// LNK1561 expected  
int i;  
// add a main function to resolve this error  
```