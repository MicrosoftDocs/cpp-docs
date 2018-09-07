---
title: "Compiler Error C2582 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2582"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2582"]
ms.assetid: ee1b9378-8bcd-4792-b87e-6d7a466d29ed
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2582
'function' function is unavailable in 'type'  
  
 An attempt was made to assign to an object that does not have an assignment operator.  
  
 The following sample generates C2582:  
  
```  
// C2582.cpp  
// compile with: /clr  
using namespace System;  
  
struct N {};  
ref struct O {};  
ref struct R {  
   property O prop;   // C2582  
   property O ^ prop2;   // OK  
};  
  
int main() {  
   String ^ st1 = gcnew String("");  
   ^st1 = gcnew String("");   // C2582  
   st1 = "xxx";   // OK  
}  
```