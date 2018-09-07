---
title: "Compiler Error C2811 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2811"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2811"]
ms.assetid: 6a44b18e-44c1-49d8-9b99-e0545b9a6e7d
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2811
'type1' : cannot inherit from 'type2', a ref class can only inherit from a ref class or interface class  
  
 You attempted to use an unmanaged class as a base class for a managed class.  
  
 The following sample generates C2811:  
  
```  
// C2811.cpp  
// compile with: /clr /c  
struct S{};  
ref struct T {};  
ref class C : public S {};   // C2811  
ref class D : public T {};   // OK  
```