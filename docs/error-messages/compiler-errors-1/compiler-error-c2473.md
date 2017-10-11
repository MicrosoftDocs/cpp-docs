---
title: "Compiler Error C2473 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["C2473"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2473"]
ms.assetid: 6bb7dbf5-b198-490f-860e-fd64d0c2a284
caps.latest.revision: 4
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2473
'identifier' : looks like a function definition, but there is no parameter list.  
  
 The compiler detected what looked like a function, without the parameter list.  
  
## Example  
 The following sample generates C2473.  
  
```  
// C2473.cpp  
// compile with: /clr /c  
class A {  
   int i {}   // C2473  
};  
  
class B {  
   int i() {}   // OK  
};  
```