---
title: "Compiler Warning (level 4) C4481 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4481"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4481"]
ms.assetid: 7bfd4e0c-b452-4e6c-b7c4-ac5cc93fe4ea
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 4) C4481
nonstandard extension used: override specifier 'keyword'  
  
 A keyword was used that is not in the C++ standard, for example, one of the override specifiers that also works under /clr.  For more information, see,  
  
-   [/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md)  
  
-   [Override Specifiers](../../windows/override-specifiers-cpp-component-extensions.md)  
  
## Example  
 The following sample generates C4481.  
  
```  
// C4481.cpp  
// compile with: /W4 /c  
class B {  
   virtual void f(unsigned);  
};  
  
class C : B {  
   void f(unsigned) override;   // C4481  
   void f2(unsigned);  
};  
```