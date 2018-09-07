---
title: "Compiler Error C2937 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2937"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2937"]
ms.assetid: 95671ca3-79f7-4b56-a5f2-a92296da1629
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2937
'class' : type-class-id redefined as a global typedef  
  
 You cannot use a generic or template class as a global `typedef`.  
  
 The following sample generates C2937:  
  
```  
// C2937.cpp  
// compile with: /c  
template<class T>   
struct TC { };  
typedef int TC<int>;   // C2937  
typedef TC<int> c;   // OK  
```  
  
 C2937 can also occur when using generics:  
  
```  
// C2937b.cpp  
// compile with: /clr  
generic<class T>  
ref struct GC { };  
typedef int GC<int>;   // C2937  
typedef GC<int> xx;   // OK  
```