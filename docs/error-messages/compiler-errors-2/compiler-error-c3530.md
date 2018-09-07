---
title: "Compiler Error C3530 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3530"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3530"]
ms.assetid: 21be81ce-b699-4c74-81bc-80a0c34d2d5a
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3530
'auto' cannot be combined with any other type-specifier  
  
 A type specifier is used with the `auto` keyword.  
  
### To correct this error  
  
1.  Do not use a type specifier in a variable declaration that uses the `auto` keyword.  
  
## Example  
 The following example yields C3530 because variable `x` is declared with both the `auto` keyword and type `int`, and because the example is compiled with **/Zc:auto**.  
  
```  
// C3530.cpp  
// Compile with /Zc:auto  
int main()  
{  
   auto int x;   // C3530  
   return 0;  
}  
```  
  
## See Also  
 [auto Keyword](../../cpp/auto-keyword.md)