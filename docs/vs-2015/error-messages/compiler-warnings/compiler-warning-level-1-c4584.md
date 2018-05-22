---
title: "Compiler Warning (level 1) C4584 | Microsoft Docs"
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
  - "C4584"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4584"
ms.assetid: ad86582f-cb8c-4d21-8c4c-a6c800059e25
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4584
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4584](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4584).  
  
  
class1' : base-class 'class2' is already a base-class of 'class3'  
  
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

