---
title: "Compiler Warning (level 4) C4516 | Microsoft Docs"
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
  - "C4516"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4516"
ms.assetid: 6677bb1f-d26e-4ab9-8644-6b5a2a8f4ff8
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 4) C4516
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 4) C4516](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4516).  
  
  
class::symbol' : access-declarations are deprecated; member using-declarations provide a better alternative  
  
 The ANSI C++ committee has declared access declarations (changing the access of a member in a derived class without the [using](../../cpp/using-declaration.md) keyword) to be outdated. Access declarations may not be supported by future versions of C++.  
  
 The following sample generates C4516:  
  
```  
// C4516.cpp  
// compile with: /W4  
class A  
{  
public:  
   void x(char);  
};  
  
class B : protected A  
{  
public:  
   A::x;  // C4516 on access-declaration  
   // use the following line instead  
   // using A::x; // using-declaration, ok  
};  
  
int main()  
{  
}  
```

