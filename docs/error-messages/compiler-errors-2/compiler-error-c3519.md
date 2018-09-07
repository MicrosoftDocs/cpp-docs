---
title: "Compiler Error C3519 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3519"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3519"]
ms.assetid: ca24b2bc-7e90-4448-ae84-3fedddf9bca7
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3519
'invalid_param' : invalid parameter to embedded_idl attribute  
  
 A parameter was passed to the `embedded_idl` attribute of [#import](../../preprocessor/hash-import-directive-cpp.md), but the compiler did not recognize the parameter.  
  
 The only parameters that are allowed for `embedded_idl` are `emitidl` and `no_emitidl`.  
  
 The following sample generates C3519:  
  
```  
// C3519.cpp  
// compile with: /LD  
[module(name="MyLib2")];  
#import "C:\testdir\bin\importlib.tlb" embedded_idl("no_emitidcl")     
// C3519  
#import "C:\testdir\bin\importlib.tlb" embedded_idl("no_emitidl")     
// OK  
```