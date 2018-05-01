---
title: "Compiler Warning (level 4) C4623 | Microsoft Docs"
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
  - "C4623"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4623"
ms.assetid: e630d8d0-f6ea-469c-a74f-07b027587225
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 4) C4623
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 4) C4623](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4623).  
  
  
derived class`' : default constructor was implicitly defined as deleted because a base class default constructor is inaccessible or deleted  
  
 A constructor was not accessible in a base class and was not generated for the derived class. Any attempt to create an object of this type on the stack will cause a compiler error.  
  
 This warning is off by default. See [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md) for more information.  
  
## Example  
 The following sample generates C4623.  
  
```  
// C4623.cpp  
// compile with: /W4  
#pragma warning(default : 4623)  
class B {  
   B();  
};  
  
class C {  
public:  
   C();  
};  
  
class D : public B {};   // C4623 - to fix, make B's constructor public  
class E : public C {};   // OK - class C constructor is public  
  
int main() {  
   // D d;  will cause an error  
}  
```

