---
title: "Compiler Error C2085"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: error-reference
ms.assetid: 0a86785c-8e6f-481b-8c7b-412220c1950d
caps.latest.revision: 7
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
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