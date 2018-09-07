---
title: "Compiler Error C3740 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3740"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3740"]
ms.assetid: edb17a90-2307-4df6-943d-580460d26d2b
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3740
templates cannot source or receive events  
  
 A templated class or struct cannot contain [events](../../cpp/event-handling.md).  
  
 The following sample generates C3740:  
  
```  
// C3740.cpp  
template <typename T>   // Delete the template specification  
struct E {  
   __event void f();   // C3740  
};  
  
int main() {  
}  
```