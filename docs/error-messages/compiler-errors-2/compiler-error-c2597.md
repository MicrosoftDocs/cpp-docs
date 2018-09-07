---
title: "Compiler Error C2597 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2597"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2597"]
ms.assetid: 2e48127d-e3ff-4a40-8156-2863e45b1a38
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2597
illegal reference to non-static member 'identifier'  
  
 Possible causes:  
  
1.  A nonstatic member is specified in a static member function. To access the nonstatic member, you must pass in or create a local instance of the class and use a member-access operator (`.` or `->`).  
  
2.  The specified identifier is not a member of a class, structure, or union. Check identifier spelling.  
  
3.  A member access operator refers to a nonmember function.  
  
4.  The following sample generates C2597 and shows how to fix it:  
  
```  
// C2597.cpp  
// compile with: /c  
struct s1 {  
   static void func();  
   static void func2(s1&);  
   int i;  
};  
  
void s1::func() {  
   i = 1;    // C2597 - static function can't access non-static data member  
}  
  
// OK - fix by passing an instance of s1  
void s1::func2(s1& a) {  
   a.i = 1;  
}  
```