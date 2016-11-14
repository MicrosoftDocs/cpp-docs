---
title: "Compiler Warning (level 1) C4545 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Compiler Warning (level 1) C4545
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