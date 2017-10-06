---
title: "Compiler Error C2178 | Microsoft Docs"
ms.custom: ""
ms.date: "05/08/2017"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["C2178"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2178"]
ms.assetid: 79a14158-17f3-4221-bd06-9d675c49cef4
caps.latest.revision: 0
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2178  
  
'*identifier*' cannot be declared with '*specifier*' specifier  
  
A `mutable` specifier was used in a declaration, but the specifier is not allowed in this context.  
  
The `mutable` specifier can be applied only to names of class data members, and cannot be applied to names declared `const` or `static`, and cannot be applied to reference members.  
  
## Example  
  
The following sample shows how C2178 may occur, and how to fix it.  
  
```  
// C2178.cpp
// compile with: cl /c /W4 C2178.cpp

class S {
    mutable const int i; // C2178
    // To fix, declare either const or mutable, not both.
};

mutable int x = 4; // C2178
// To fix, remove mutable keyword
```  
