---
title: "Compiler Error C3651 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3651"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3651"]
ms.assetid: a03e692e-c219-4654-9827-8415cfa5a22d
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3651
'member' : cannot be used as an explicit override, must be a member of a base class  
  
 An explicit override was specified, but the function being overridden was in a type that is not a base type.  
  
 For more information, see [Explicit Overrides](../../windows/explicit-overrides-cpp-component-extensions.md).  
  
 The following sample generates C3651:  
  
```  
// C3651.cpp  
// compile with: /clr /c  
ref class C {  
public:  
   virtual void func2();  
};  
  
ref class Other {  
public:  
   virtual void func();  
};  
  
ref class D : public C {  
public:  
   virtual void func() new sealed = Other::func;   // C3651  
   virtual void func2() new sealed = C::func2;   // OK  
};  
```