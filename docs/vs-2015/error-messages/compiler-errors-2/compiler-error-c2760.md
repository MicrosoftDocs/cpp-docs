---
title: "Compiler Error C2760 | Microsoft Docs"
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
  - "C2760"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2760"
ms.assetid: 585757fd-d519-43f3-94e5-50316ac8b90b
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2760
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2760](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2760).  
  
  
syntax error : expected 'name1' not 'name2'  
  
 A casting operator is used with an invalid operator.  
  
 The following sample generates C2760:  
  
```  
// C2760.cpp  
class B {};  
class D : public B {};  
  
void f(B* pb) {  
    D* pd1 = static_cast<D*>(pb);  
    D* pd2 = static_cast<D*>=(pb);  // C2760  
    D* pd3 = static_cast<D*=(pb);   // C2760  
}  
```

