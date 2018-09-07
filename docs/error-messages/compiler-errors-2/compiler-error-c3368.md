---
title: "Compiler Error C3368 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3368"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3368"]
ms.assetid: 5bfd5be4-dfa9-4b33-9612-010561b40955
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3368
'function declaration' : invalid calling convention for IDL  
  
 You can only use the [__stdcall](../../cpp/stdcall.md) or [__cdecl](../../cpp/cdecl.md) calling conventions in an .idl file.  
  
 The following sample generates C3368:  
  
```  
// C3368.cpp  
// processor: x86  
[idl_module(name="Name", dllname="Some.dll")];  
  
[idl_module(name="Name")]  
int __fastcall f1();   // C3368  
```