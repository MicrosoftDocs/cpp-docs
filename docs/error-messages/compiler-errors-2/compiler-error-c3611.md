---
title: "Compiler Error C3611 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3611"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3611"]
ms.assetid: 42f3e320-41de-420a-bd05-8924cab765aa
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3611
'function': a sealed function cannot have a pure-specifier  
  
 A sealed function was declared incorrectly.  For more information, see [sealed](../../windows/sealed-cpp-component-extensions.md).  
  
## Example  
 The following sample generates C3611.  
  
```  
// C3611.cpp  
// compile with: /clr /c  
  
ref struct V {  
   virtual void Test() sealed = 0;   // C3611  
   virtual void Test2() sealed;   // OK  
   virtual void Test3() = 0;   // OK  
};  
```