---
title: "Compiler Error C2270 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2270"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2270"]
ms.assetid: b52c068e-0b61-42e7-b775-4d57b3ddcba0
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2270
'function' : modifiers not allowed on nonmember functions  
  
 A nonmember function is declared with [const](../../cpp/const-cpp.md), [volatile](../../cpp/volatile-cpp.md), or another memory-model modifier.  
  
 The following sample generates C2270:  
  
```  
// C2270.cpp  
// compile with: /c  
void func1(void) const;   // C2270, nonmember function  
  
void func2(void);  
  
class CMyClass {  
public:  
   void func2(void) const;  
};  
```