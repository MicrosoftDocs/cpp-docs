---
title: "Compiler Error C2274 | Microsoft Docs"
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
  - "C2274"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2274"
ms.assetid: 8e874903-f499-45ef-8291-f821eee4cc1c
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2274
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2274](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2274).  
  
  
type' : illegal as right side of '.' operator  
  
 A type appears as the right operand of a member-access (.) operator.  
  
 This error can be caused by trying to access a user-defined type conversion. Use the keyword `operator` between the period and `type`.  
  
 The following sample generates C2286:  
  
```  
// C2274.cpp  
struct MyClass {  
   operator int() {  
      return 0;  
   }  
};  
  
int main() {  
   MyClass ClassName;  
   int i = ClassName.int();   // C2274  
   int j = ClassName.operator int();   // OK  
}  
```

