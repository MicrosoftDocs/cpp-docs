---
title: "Compiler Error C2890 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2890"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2890"]
ms.assetid: 49147375-182c-42b1-b170-f475cd436d47
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2890
'class' : a ref class can only have one non-interface base class  
  
 A reference class can only have one base class.  
  
 The following sample generates C2890:  
  
```  
// C2890.cpp  
// compile with: /clr /c  
ref class A {};  
ref class B {};  
ref class C : public A, public B {};   // C2890  
ref class D : public A {};   // OK  
```  
