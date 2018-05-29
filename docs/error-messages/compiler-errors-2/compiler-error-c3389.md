---
title: "Compiler Error C3389 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3389"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3389"]
ms.assetid: eaaffe17-23f2-413c-b1ad-f7220cfa1334
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3389
__declspec(keyword) cannot be used with /clr:pure or /clr:safe  
  
 The **/clr:pure** and **/clr:safe** compiler options are deprecated in Visual Studio 2015.  
  
 A [__declspec](../../cpp/declspec.md) modifier used implies a per process state.  [/clr:pure](../../build/reference/clr-common-language-runtime-compilation.md) implies a per [appdomain](../../cpp/appdomain.md) state.  So, declaring a variable with the `keyword`**__declspec** modifier and compiling with **/clr:pure** is not allowed.  
  
 The following sample generates C3389:  
  
```  
// C3389.cpp  
// compile with: /clr:pure /c  
__declspec(dllexport) int g2 = 0;   // C3389  
```