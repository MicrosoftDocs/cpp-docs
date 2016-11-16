---
title: "Compiler Error C2663 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2663"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2663"
ms.assetid: 1e93e368-fd52-42bf-9908-9b6df467c8c9
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Compiler Error C2663
'function' : number overloads have no legal conversions for 'this' pointer  
  
 The compiler could not convert `this` to any of the overloaded versions of the member function.  
  
 This error can be caused by invoking a non-`const` member function on a `const` object.  Possible resolutions:  
  
1.  Remove the `const` from the object declaration.  
  
2.  Add `const` to one of the member function overloads.  
  
 The following sample generates C2663:  
  
```  
// C2663.cpp  
struct C {  
   void f() volatile {}  
   void f() {}  
};  
  
struct D {  
   void f() volatile;  
   void f() const {}  
};  
  
const C *pcc;  
const D *pcd;  
  
int main() {  
   pcc->f();    // C2663  
   pcd->f();    // OK  
}  
```