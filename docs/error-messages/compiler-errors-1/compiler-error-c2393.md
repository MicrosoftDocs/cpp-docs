---
title: "Compiler Error C2393 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2393"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2393"]
ms.assetid: 4bd95728-e813-4ce8-844a-c6ebe235ca82
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2393
'symbol' : per-appdomain symbol cannot be allocated in segment 'segment'  
  
 The **/clr:pure** and **/clr:safe** compiler options are deprecated in Visual Studio 2015.  
  
 The use of [appdomain](../../cpp/appdomain.md) variables implies that you are compiling with **/clr:pure** or **/clr:safe**, and a safe or pure image cannot contain data segments.  
  
 See [/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md) for more information.  
  
## Example  
 The following sample generates C2393.  
  
```  
// C2393.cpp  
// compile with: /clr:pure /c  
#pragma data_seg("myseg")  
int n = 0;   // C2393  
```