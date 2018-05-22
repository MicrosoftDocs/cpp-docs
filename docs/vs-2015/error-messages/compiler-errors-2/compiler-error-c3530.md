---
title: "Compiler Error C3530 | Microsoft Docs"
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
  - "C3530"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3530"
ms.assetid: 21be81ce-b699-4c74-81bc-80a0c34d2d5a
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3530
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3530](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3530).  
  
  
auto' cannot be combined with any other type-specifier  
  
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

