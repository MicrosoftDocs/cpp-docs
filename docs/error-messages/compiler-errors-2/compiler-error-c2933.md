---
title: "Compiler Error C2933 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2933"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2933"]
ms.assetid: 394891e3-6b52-4b61-83d2-a1c5125d9bd5
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2933
'class' : type-class-id redefined as a typedef member of 'identifier'  
  
 You cannot use a generic or template class as a `typedef` member.  
  
 The following sample generates C2933:  
  
```  
// C2933.cpp  
// compile with: /c  
template<class T> struct TC { };   
struct MyStruct {  
   typedef int TC<int>;   // C2933  
};  
  
struct TC2 { };   
struct MyStruct2 {  
   typedef int TC2;  
};  
```  
  
 C2933 can also occur when using generics:  
  
```  
// C2933b.cpp  
// compile with: /clr /c  
generic<class T> ref struct GC { };  
struct MyStruct {  
   typedef int GC<int>;   // C2933  
};  
  
ref struct GC2 { };  
struct MyStruct2 {  
   typedef int GC2;  
};  
```