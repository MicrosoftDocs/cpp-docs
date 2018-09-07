---
title: "Compiler Error C2879 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2879"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2879"]
ms.assetid: ac92b645-2394-49de-8632-43d44e0553ed
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2879
'symbol' : only an existing namespace can be given an alternative name by a namespace alias definition  
  
 You cannot create a [namespace alias](../../cpp/namespaces-cpp.md#namespace_aliases) to a symbol other than a namespace.  
  
 The following sample generates C2879:  
  
```  
// C2879.cpp  
int main() {  
   int i;  
   namespace A = i;   // C2879 i is not a namespace  
}  
```