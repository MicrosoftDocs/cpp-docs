---
title: "Compiler Error C2561 | Microsoft Docs"
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
  - "C2561"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2561"
ms.assetid: 0abe955b-53a6-4a3c-8362-b1a8eb40e8d1
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2561
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2561](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2561).  
  
  
identifier' : function must return a value  
  
 The function was declared as returning a value, but the function definition does not contain a `return` statement.  
  
 This error can be caused by an incorrect function prototype:  
  
1.  If the function does not return a value, declare the function with return type [void](../../cpp/void-cpp.md).  
  
2.  Check that all possible branches of the function return a value of the type declared in the prototype.  
  
3.  C++ functions containing inline assembly routines that store the return value in the `AX` register may need a return statement. Copy the value in `AX` to a temporary variable and return that variable from the function.  
  
 The following sample generates C2561:  
  
```  
// C2561.cpp  
int Test(int x) {  
   if (x) {  
      return;   // C2561  
      // try the following line instead  
      // return 1;  
   }  
   return 0;  
}  
  
int main() {  
   Test(1);  
}  
```

