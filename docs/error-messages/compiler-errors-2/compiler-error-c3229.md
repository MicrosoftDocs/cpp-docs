---
title: "Compiler Error C3229 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3229"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3229"]
ms.assetid: f2d90923-aa8b-444f-ab10-1f37dbb864e1
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3229
'type' : indirections on a generic type parameter are not allowed  
  
 You cannot use generic parameters with `*`, `^`, or `&`.  
  
## Example  
 The following sample generates C3229.  
  
```  
// C3229.cpp  
// compile with: /clr /c  
generic <class T>  
ref class C {  
   T^ t;   // C3229  
};  
  
// OK  
generic <class T>  
ref class D {  
   T u;  
};  
```  
  
## Example  
 The following sample generates C3229.  
  
```  
// C3229_b.cpp  
// compile with: /clr /c  
generic <class T>   // OK  
ref class Utils {  
   static void sort(T elems[], size_t size);   // C3229  
   static void sort2(T elems, size_t size);   // OK  
};  
```