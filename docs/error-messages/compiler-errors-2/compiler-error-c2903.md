---
title: "Compiler Error C2903 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2903"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2903"]
ms.assetid: bf6b223f-4921-48c7-82b9-ff318b42c801
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2903
'identifier' : symbol is neither a class template nor a function template  
  
 Code attempts explicit instantiation of something that is not a template.  
  
 The following sample generates C2903:  
  
```  
// C2903.cpp  
// compile with: /c  
namespace N {  
   template<class T> class X {};  
   class Y {};  
}  
void g() {  
   N::template Y y;   // C2903  
   N::X<N::Y> y;   // OK  
}  
```  
  
 C2903 can also occur when using generics:  
  
```  
// C2903b.cpp  
// compile with: /clr /c  
namespace N {  
   class Y {};  
   generic<class T> ref class Z {};  
}  
  
void f() {  
   N::generic Y y;   // C2903  
   N:: generic Z<int>^ z;   // OK  
}  
```