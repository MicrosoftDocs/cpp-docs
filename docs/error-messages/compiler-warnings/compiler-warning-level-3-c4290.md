---
title: "Compiler Warning (level 3) C4290 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4290"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4290"]
ms.assetid: d1c6d85b-28e0-4a1f-9d48-23593337a6fb
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 3) C4290
C++ exception specification ignored except to indicate a function is not __declspec(nothrow)  
  
 A function is declared using exception specification, which Visual C++ accepts but does not implement. Code with exception specifications that are ignored during compilation may need to be recompiled and linked to be reused in future versions supporting exception specifications.  
  
 For more information, see [Exception Specifications (throw)](../../cpp/exception-specifications-throw-cpp.md) .  
  
 You can avoid this warning by using the [warning](../../preprocessor/warning.md) pragma:  
  
```  
#pragma warning( disable : 4290 )  
```  
  
 The following code sample generates C4290:  
  
```  
// C4290.cpp  
// compile with: /EHs /W3 /c  
void f1(void) throw(int) {}   // C4290  
  
// OK  
void f2(void) throw() {}  
void f3(void) throw(...) {}  
```