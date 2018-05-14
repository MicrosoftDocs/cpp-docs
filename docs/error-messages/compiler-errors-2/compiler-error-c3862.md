---
title: "Compiler Error C3862 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3862"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3862"]
ms.assetid: ba547366-4189-4077-8c00-ab45e08a9533
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3862
'function': cannot compile an unmanaged function with /clr:pure or /clr:safe  
  
 The **/clr:pure** and **/clr:safe** compiler options are deprecated in Visual Studio 2015.  
  
 A compilation with **/clr:pure** or **/clr:safe** will produce an MSIL only image, an image with no native (unmanaged) code.  Therefore, you cannot use the `unmanaged` pragma in a **/clr:pure** or **/clr:safe** compilation.  
  
 For more information, see [/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md) and [managed, unmanaged](../../preprocessor/managed-unmanaged.md).  
  
## Example  
 The following sample generates C3862:  
  
```  
// C3862.cpp  
// compile with: /clr:pure /c  
#pragma unmanaged  
void f() {}   // C3862  
```