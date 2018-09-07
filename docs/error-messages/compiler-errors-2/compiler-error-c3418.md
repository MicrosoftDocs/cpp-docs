---
title: "Compiler Error C3418 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3418"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3418"]
ms.assetid: 54042c04-3c45-41c1-bad7-90f9ee05a21b
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3418
access specifier 'specifier' is not supported  
  
A CLR access specifier was specified incorrectly.  For more information, see Type visibility and Member visibility in [How to: Define and Consume Classes and Structs (C++/CLI)](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md).  
  
## Example  
The following sample generates C3418.  
  
```cpp  
// C3418.cpp  
// compile with: /clr /c  
ref struct m {  
internal public:   // C3418  
   void test(){}  
};  
  
ref struct n {  
internal:   // OK  
   void test(){}  
};  
```