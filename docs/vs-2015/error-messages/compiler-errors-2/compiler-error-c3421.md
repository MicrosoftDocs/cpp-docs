---
title: "Compiler Error C3421 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3421"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3421"
ms.assetid: b52050c6-17a4-424a-8894-337b0cec7010
caps.latest.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3421
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3421](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3421).  
  
  
type' : you cannot call the finalizer for this class as it is either inaccessible or it does not exist  
  
 A finalizer is implicitly private, so it cannot be called from outside its enclosing type.  
  
 For more information, see [Destructors and Finalizers in Visual C++](../../misc/destructors-and-finalizers-in-visual-cpp.md).  
  
## Example  
 The following sample generates C3421.  
  
```  
// C3421.cpp  
// compile with: /clr  
ref class A {};  
  
ref class B {   
   !B() {}  
  
public:  
   ~B() {}  
};  
  
int main() {  
   A a;  
   a.!A();   // C3421  
  
   B b;  
   b.!B();   // C3421  
}  
```

