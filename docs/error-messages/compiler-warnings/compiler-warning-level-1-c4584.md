---
title: "Compiler Warning (level 1) C4584 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4584"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4584"]
ms.assetid: ad86582f-cb8c-4d21-8c4c-a6c800059e25
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4584
'class1' : base-class 'class2' is already a base-class of 'class3'  
  
 The class you defined inherits from two classes, one of which inherits from the other. For example:  
  
```  
// C4584.cpp  
// compile with: /W1 /LD  
class A {  
};  
  
class B : public A {  
};  
  
class C : public A, public B { // C4584  
};  
```  
  
 In this case, a warning would be issued on class C because it inherits both from class A and class B, which also inherits from class A. This warning serves as a reminder that you must fully qualify the use of members from these base classes or a compiler error will be generated due to the ambiguity as to which class member you refer.