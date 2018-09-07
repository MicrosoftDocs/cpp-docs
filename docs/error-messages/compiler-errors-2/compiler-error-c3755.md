---
title: "Compiler Error C3755 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3755"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3755"]
ms.assetid: 9317b55e-a52e-4b87-b915-5a208d6eda38
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3755
'delegate': a delegate may not be defined  
  
 A [delegate  (C++ Component Extensions)](../../windows/delegate-cpp-component-extensions.md) can be declared but not defined.  
  
## Example  
 The following sample generates C3755.  
  
```  
// C3755.cpp  
// compile with: /clr /c  
delegate void MyDel() {};   // C3755  
```  
  
## Example  
 C3755 can also occur if you attempt to create a delegate template. The following sample generates C3755.  
  
```  
// C3755_b.cpp  
// compile with: /clr /c  
ref struct R {  
   template<class T>  
   delegate void D(int) {}   // C3755  
};  
```