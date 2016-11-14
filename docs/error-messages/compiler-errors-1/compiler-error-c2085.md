---
title: "Compiler Error C2085 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2085"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2085"
ms.assetid: 0a86785c-8e6f-481b-8c7b-412220c1950d
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
# Compiler Error C2085
'identifier' : not in formal parameter list  
  
 The identifier was declared in a function definition but not in the formal parameter list. (ANSI C only)  
  
 The following sample generates C2085:  
  
```  
// C2085.c  
void func1( void )  
int main( void ) {}   // C2085  
```  
  
 Possible resolution:  
  
```  
// C2085b.c  
void func1( void );  
int main( void ) {}  
```  
  
 With the semicolon missing, `func1()` looks like a function definition, not a prototype, so `main` is defined within `func1()`, generating Error C2085 for identifier `main`.