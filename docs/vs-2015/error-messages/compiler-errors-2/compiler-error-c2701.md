---
title: "Compiler Error C2701 | Microsoft Docs"
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
  - "C2701"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2701"
ms.assetid: 31cf2ab7-ced9-4f75-aa51-e169e20407fb
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2701
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2701](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2701).  
  
  
function' : a function template cannot be a friend of a local class  
  
 A local class cannot have a template function as a friend function.  
  
 The following sample generates C2701:  
  
```  
// C2701.cpp  
// compile with: /c  
template<typename T>   // OK  
void f1(const T &);  
  
void MyFunction() {  
   class MyClass {  
      template<typename T> friend void f2(const T &);   // C2701  
   };  
}  
```

