---
title: "Compiler Error C2434 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C2434"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2434"]
ms.assetid: 01329e26-7c74-4219-b74f-69e3a40c9738
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2434
'symbol' : a symbol declared with __declspec(process) cannot be dynamically initialized in /clr:pure mode  
  
 The **/clr:pure** and **/clr:safe** compiler options are deprecated in Visual Studio 2015.  
  
 It is not possible to dynamically initialize a per-process variable under **/clr:pure**. For more information, see [/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md) and [process](../../cpp/process.md).  
  
## Example  
 The following sample generates C2434.  
  
```  
// C2434.cpp  
// compile with: /clr:pure /c  
int f() { return 0; }  
__declspec(process) int i = f();   // C2434  
__declspec(process) int i2 = 0;   // OK  
```