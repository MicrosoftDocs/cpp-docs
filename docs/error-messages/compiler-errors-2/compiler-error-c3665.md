---
title: "Compiler Error C3665 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3665"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3665"]
ms.assetid: 893bb47e-8de1-43aa-af7d-fa47ad149ee9
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3665
'destructor' : override specifier 'keyword' not allowed on a destructor/finalizer  
  
 A keyword was used that is not allowed on a destructor or finalizer.  
  
 For example, a new slot cannot be requested on a destructor or finalizer.  For more information, see [Explicit Overrides](../../windows/explicit-overrides-cpp-component-extensions.md) and [Destructors and finalizers](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Destructors_and_finalizers).  
  
 The following sample generates C3665:  
  
```  
// C3665.cpp  
// compile with: /clr  
public ref struct R {  
   virtual ~R() { }  
   virtual void a() { }  
};  
  
public ref struct S : R {  
   virtual ~S() new {}   // C3665  
   virtual void a() new {}   // OK  
};  
```