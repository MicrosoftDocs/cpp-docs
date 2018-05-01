---
title: "Compiler Error C2683 | Microsoft Docs"
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
  - "C2683"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2683"
ms.assetid: db605e4f-601b-4d05-92a1-c43ca24de08d
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2683
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2683](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2683).  
  
  
cast' : 'type' is not a polymorphic type  
  
 You cannot use [dynamic_cast](../../cpp/dynamic-cast-operator.md) to convert from a non-polymorphic class (a class with no virtual functions).  
  
 You can use [static_cast](../../cpp/static-cast-operator.md) to perform conversions of non-polymorphic types. However, `static_cast` does not perform a run-time check.  
  
 The following sample generates C2683:  
  
```  
// C2683.cpp  
// compile with: /c  
class B { };  
class D : public B { };  
  
void f(B* pb) {  
   D* pd1 = dynamic_cast<D*>(pb);  // C2683  
   D* pd1 = static_cast<D*>(pb);   // OK  
}  
```

