---
title: "Linker Tools Warning LNK4217 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["LNK4217"]
dev_langs: ["C++"]
helpviewer_keywords: ["LNK4217"]
ms.assetid: 280dc03e-5933-4e8d-bb8c-891fbe788738
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Linker Tools Warning LNK4217
locally defined symbol 'symbol' imported in function 'function'  
  
 [__declspec(dllimport)](../../cpp/dllexport-dllimport.md) was specified for a symbol even though the symbol is defined locally. Remove the `__declspec` modifier to resolve this warning.  
  
 `symbol` is the symbol name that's defined within the image. `function` is the function that is importing the symbol.  
  
 This warning will not appear when you compile by using the option [/clr](../../build/reference/clr-common-language-runtime-compilation.md).  
  
 LNK4217 can also occur if you attempt to link two modules together, when instead you should compile the second module with the import library of the first module.  
  
```  
// LNK4217.cpp  
// compile with: /LD  
#include "windows.h"  
__declspec(dllexport) void func(unsigned short*) {}  
```  
  
 And then,  
  
```  
// LNK4217b.cpp  
// compile with: /c  
#include "windows.h"  
__declspec(dllexport) void func(unsigned short*) {}  
```  
  
 Attempting to link these two modules will result in LNK4217, compile the second sample with the import library of the first sample to resolve.