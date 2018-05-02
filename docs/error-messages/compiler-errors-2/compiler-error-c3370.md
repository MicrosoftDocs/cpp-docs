---
title: "Compiler Error C3370 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3370"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3370"]
ms.assetid: ee6d4c85-78fc-42b2-836e-5cc491a3b2ba
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3370
'idl_module name': idl_module not yet defined  
  
 Before you can use [idl_module](../../windows/idl-module.md) to specify an entry point in a DLL, you must first use `idl_module` to specify the DLL name.  
  
 The following sample generates C3370:  
  
```  
// C3370.cpp  
[module(name=MyLibrary)];  
// uncomment the following line to resolve the error  
// [idl_module(name="name1", dllname=x.dll)];  
[idl_module(name="name1"), entry(100)] // C3370  
int f1();  
  
int main()  
{  
}  
```