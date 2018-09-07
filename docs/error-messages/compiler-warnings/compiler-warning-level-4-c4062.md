---
title: "Compiler Warning (level 4) C4062 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4062"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4062"]
ms.assetid: 36d1c6ae-c917-4b08-bf30-2eb49ee94169
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 4) C4062
enumerator 'identifier' in switch of enum 'enumeration' is not handled  
  
 The enumerate has no associated handler in a `switch` statement, and there is no **default** label.  
  
 This warning is off by default. See [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md) for more information.  
  
 The following sample generates C4062:  
  
```  
// C4062.cpp  
// compile with: /W4  
#pragma warning(default : 4062)  
enum E { a, b, c };  
void func ( E e ) {  
   switch(e) {  
      case a:  
      case b:  
      break;   // no default label  
   }   // C4062, enumerate 'c' not handled  
}  
  
int main() {  
}  
```