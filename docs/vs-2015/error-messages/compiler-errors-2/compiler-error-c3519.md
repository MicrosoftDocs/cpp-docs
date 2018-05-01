---
title: "Compiler Error C3519 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3519"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3519"
ms.assetid: ca24b2bc-7e90-4448-ae84-3fedddf9bca7
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3519
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3519](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3519).  
  
  
invalid_param' : invalid parameter to embedded_idl attribute  
  
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

