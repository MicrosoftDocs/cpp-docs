---
title: "Compiler Error C3652 | Microsoft Docs"
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
  - "C3652"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3652"
ms.assetid: 15d68737-177e-41f1-80e0-7c3e2afdf0fc
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3652
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3652](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3652).  
  
  
override' : a function that explicitly overrides must be virtual  
  
 A function that does an explicit override must be virtual. For more information, see [Explicit Overrides](../../windows/explicit-overrides-cpp-component-extensions.md).  
  
 The following sample generates C3652:  
  
```  
// C3652.cpp  
// compile with: /clr /c  
public interface class I {  
   void f();  
};  
  
public ref struct R : I {  
   void f() = I::f {}   // C3652  
   // try the following line instead  
   // virtual void f() = I::f {}  
};  
```

