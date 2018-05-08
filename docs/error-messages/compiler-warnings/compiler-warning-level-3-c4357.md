---
title: "Compiler Warning (level 3) C4357 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4357"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4357"]
ms.assetid: 9259c633-3c02-4900-b94a-2d8d366d61cd
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 3) C4357
param array argument in formal argument list for delegate 'del' ignored when generating 'function'  
  
 The `ParamArray` attribute was ignored, and `function` cannot be called with variable arguments.  
  
 The following sample generates C4357:  
  
```  
// C4357.cpp  
// compile with: /clr /W3 /c  
using namespace System;  
public delegate void f(int i, ... array<Object^>^ varargs);   // C4357  
  
public delegate void g(int i, array<Object^>^ varargs);   // OK  
```