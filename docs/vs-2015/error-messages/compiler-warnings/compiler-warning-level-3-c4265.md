---
title: "Compiler Warning (level 3) C4265 | Microsoft Docs"
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
  - "C4265"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4265"
ms.assetid: 20547159-6f30-4cc4-83aa-927884c8bb4c
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 3) C4265
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 3) C4265](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4265).  
  
  
class' : class has virtual functions, but destructor is not virtual  
  
 When a class has virtual functions but a nonvirtual destructor, objects of the type might not be destroyed properly when the class is destroyed through a base class pointer.  
  
 This warning is off by default. See [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md) for more information.  
  
 The following sample generates C4265:  
  
```  
// C4265.cpp  
// compile with: /W3 /c  
#pragma warning(default : 4265)  
class B  
{  
public:  
   virtual void vmf();  
  
   ~B();  
   // try the following line instead  
   // virtual ~B();  
};   // C4265  
  
int main()  
{  
   B b;  
}  
```

