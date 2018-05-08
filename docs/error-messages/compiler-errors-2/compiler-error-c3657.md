---
title: "Compiler Error C3657 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3657"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3657"]
ms.assetid: 89a28a18-4c17-43a1-bda6-deb52c32d203
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3657
destructors cannot explicitly override or be explicitly overridden  
  
 Destructors or finalizers cannot be explicitly overridden. For more information, see [Explicit Overrides](../../windows/explicit-overrides-cpp-component-extensions.md).  
  
## Example  
 The following sample generates C3657.  
  
```  
// C3657.cpp  
// compile with: /clr  
public ref struct I {  
   virtual ~I() { }  
   virtual void a();  
};  
  
public ref struct D : I {  
   virtual ~D() = I::~I {}   // C3657  
   virtual void a() = I::a {}   // OK  
};  
```