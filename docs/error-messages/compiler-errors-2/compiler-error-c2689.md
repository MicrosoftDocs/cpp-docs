---
title: "Compiler Error C2689 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C2689"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2689"]
ms.assetid: b5216fba-524d-4194-9168-26e9dc5210ce
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2689
'function' : a friend function cannot be defined within a local class  
  
 You can declare but not define a friend function in a local class.  
  
 The following sample generates C2689:  
  
```  
// C2689.cpp  
// compile with: /c  
void g() {  
   void f2();  
   class X {  
      friend void f2(){}   // C2689  
      friend void f2();   // OK  
   };  
}  
```