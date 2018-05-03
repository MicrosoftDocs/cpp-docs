---
title: "Compiler Error C3869 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3869"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3869"]
ms.assetid: 85b2ad72-95c1-4ed6-9761-6ef66c3802b7
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3869
gcnew constraint is missing empty parameter list '()'  
  
 The `gcnew` special constraint was specified without the empty parameter list. See [Constraints on Generic Type Parameters (C++/CLI)](../../windows/constraints-on-generic-type-parameters-cpp-cli.md) for more information.  
  
## Example  
 The following sample generates C3869.  
  
```  
// C3869.cpp  
// compile with: /c /clr  
using namespace System;  
generic <typename T>  
where T : gcnew   // C3869  
// try the following line instead  
// where T : gcnew()  
ref class List {};  
```