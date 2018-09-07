---
title: "Compiler Error C2871 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2871"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2871"]
ms.assetid: 44aeb84d-61f0-45e0-8dad-22a3cd46b7f8
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2871
'name' : a namespace with this name does not exist  
  
This error will occur when you pass an identifier that is not a namespace to a [using](../../cpp/namespaces-cpp.md#using_directives) directive.  
  
## Example  
The following sample generates C2871:  
  
```cpp  
// C2871.cpp  
// compile with: /c
namespace a {
   int fn(int i) { return i; }
} 
namespace b { 
   using namespace d;   // C2871 because d is not a namespace  
   using namespace a;   // OK
}  
```