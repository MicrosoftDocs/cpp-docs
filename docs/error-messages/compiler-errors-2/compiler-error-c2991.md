---
title: "Compiler Error C2991 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2991"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2991"]
ms.assetid: a87e4404-26e8-4927-b3ee-5d02b3b8bee1
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2991
redefinition of type parameter 'parameter'  
  
 There was a type conflict between two generic or template definitions of `parameter`. When defining multiple generic or template parameters, you must use equivalent types.  
  
 The following sample generates C2991:  
  
```  
// C2991.cpp  
// compile with: /c  
template<class T, class T> struct TC {};   // C2991  
// try the following line instead  
// template<class T, class T2> struct TC {};  
```  
  
 C2991 can also occur when using generics:  
  
```  
// C2991b.cpp  
// compile with: /clr /c  
generic<class T,class T> ref struct GC {};   // C2991  
// try the following line instead  
// generic<class T,class T2> ref struct GC {};  
```