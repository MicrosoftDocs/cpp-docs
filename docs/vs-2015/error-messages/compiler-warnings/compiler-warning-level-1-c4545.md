---
title: "Compiler Warning (level 1) C4545 | Microsoft Docs"
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
  - "C4545"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4545"
ms.assetid: 43f8f34f-ed46-4661-95c0-c588c577ff73
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4545
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4545](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4545).  
  
  
expression before comma evaluates to a function which is missing an argument list  
  
 The compiler detected an ill-formed comma expression.  
  
 This warning is off by default. For more information, see [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md).  
  
 The following sample generates C4545:  
  
```  
// C4545.cpp  
// compile with: /W1  
#pragma warning (default : 4545)  
  
void f() { }  
  
int main()  
{  
   *(&f), 10;   // C4545  
   // try the following line instead  
   // (*(&f))(), 10;  
}  
```

