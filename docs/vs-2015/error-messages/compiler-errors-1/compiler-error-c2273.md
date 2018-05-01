---
title: "Compiler Error C2273 | Microsoft Docs"
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
  - "C2273"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2273"
ms.assetid: 3c682c66-97bf-4a23-a22c-d9a26a92bf95
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2273
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2273](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2273).  
  
  
type' : illegal as right side of '->' operator  
  
 A type appears as the right operand of a `->` operator.  
  
 This error can be caused by trying to access a user-defined type conversion. Use the keyword `operator` between -> and `type`.  
  
 The following sample generates C2273:  
  
```  
// C2273.cpp  
struct MyClass {  
   operator int() {  
      return 0;  
   }  
};  
int main() {  
   MyClass * ClassPtr = new MyClass;  
   int i = ClassPtr->int();   // C2273  
   int j = ClassPtr-> operator int();   // OK  
}  
```

