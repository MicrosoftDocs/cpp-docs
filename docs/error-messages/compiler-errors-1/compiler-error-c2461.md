---
title: "Compiler Error C2461 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C2461"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2461"]
ms.assetid: e64ba651-f441-4fdb-b5cb-4209bbbe4db4
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2461
  
> '*class*' : constructor syntax missing formal parameters  
  
 The constructor for the class does not specify any formal parameters. The declaration of a constructor must specify a formal parameter list. The list can be empty.  
  
To fix this issue, add a pair of parentheses after the declaration of *class*::**class*.  
  
## Example  
  
The following sample shows how to fix C2461:  
  
```cpp  
// C2461.cpp  
// compile with: /c  
class C {  
   C::C;     // C2461  
   C::C();   // OK  
};  
```