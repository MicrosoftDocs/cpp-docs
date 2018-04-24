---
title: "Compiler Error C2597 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2597"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2597"
ms.assetid: 2e48127d-e3ff-4a40-8156-2863e45b1a38
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2597
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2597](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2597).  
  
  
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

