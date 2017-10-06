---
title: "Compiler Warning (level 4) C4061 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C4061"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4061"]
ms.assetid: a99cf88e-7941-4519-8b1b-f6889d914b2f
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 4) C4061
enumerator 'identifier' in switch of enum 'enumeration' is not explicitly handled by a case label  
  
 The enumerate has no associated handler in a `switch` statement.  
  
 This warning is off by default. See [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md) for more information.  
  
 The following sample generates C4061:  
  
```  
// C4061.cpp  
// compile with: /W4  
#pragma warning(default : 4061)  
  
enum E { a, b, c };  
void func ( E e )  
{  
   switch(e)  
   {  
      case a:  
      case b:  
      default:  
         break;  
   }   // C4061 c' not handled  
}  
  
int main()  
{  
}  
```