---
title: "Compiler Error C3764 | Microsoft Docs"
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
  - "C3764"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3764"
ms.assetid: af5d254c-8d4a-4dda-aad9-3c5c1257c868
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3764
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3764](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3764).  
  
  
override_function': cannot override base class method 'base_class_function'  
  
 The compiler detected an ill-formed override. For example, the base class function was not `virtual`. For more information, see [override](../../windows/override-cpp-component-extensions.md).  
  
## Example  
 The following sample generates C3764.  
  
```  
// C3764.cpp  
// compile with: /clr /c  
public ref struct A {  
   void g(int);  
   virtual void h(int);  
};  
  
public ref struct B : A {  
   virtual void g(int) override {}   // C3764  
   virtual void h(int) override {}   // OK  
};  
```  
  
## Example  
 C3764 can also occur when a base class method is both explicitly and named overridden. The following sample generates C3764.  
  
```  
// C3764_b.cpp  
// compile with: /clr /c  
ref struct A {  
   virtual void Test() {}  
};  
  
ref struct B : public A {  
   virtual void Test() override {}  
   virtual void Test2() = A::Test {}   // C3764  
};  
```

