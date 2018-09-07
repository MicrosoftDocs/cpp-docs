---
title: "Compiler Error C2833 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2833"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2833"]
ms.assetid: b9418ce1-e2ee-4599-8959-6fde89c27569
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2833
'operator operator' is not a recognized operator or type  
  
 The word `operator` must be followed by an operator that you want to override or a type you want to convert.  
  
 For a list of the operators that you can define in a managed type, see [User-defined Operators](../../dotnet/user-defined-operators-cpp-cli.md).  
  
 The following sample generates C2833:  
  
```  
// C2833.cpp  
// compile with: /c  
class A {};  
  
void operator ::* ();   // C2833  
void operator :: ();   // OK  
```