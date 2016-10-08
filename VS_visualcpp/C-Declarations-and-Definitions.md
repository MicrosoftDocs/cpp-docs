---
title: "C Declarations and Definitions"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
  - C
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 575f0c9b-5554-4346-be64-b2129ca9227f
caps.latest.revision: 8
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
# C Declarations and Definitions
A "declaration" establishes an association between a particular variable, function, or type and its attributes. [Overview of Declarations](../VS_visualcpp/Overview-of-Declarations.md) gives the ANSI syntax for the `declaration` nonterminal. A declaration also specifies where and when an identifier can be accessed (the "linkage" of an identifier). See [Lifetime, Scope, Visibility, and Linkage](../VS_visualcpp/Lifetime--Scope--Visibility--and-Linkage.md) for information about linkage.  
  
 A "definition" of a variable establishes the same associations as a declaration but also causes storage to be allocated for the variable.  
  
 For example, the `main`, `find`, and `count` functions and the `var` and `val` variables are defined in one source file, in this order:  
  
```  
int main() {}  
  
int var = 0;  
double val[MAXVAL];  
char find( fileptr ) {}  
int count( double f ) {}  
```  
  
 The variables `var` and `val` can be used in the `find` and `count` functions; no further declarations are needed. But these names are not visible (cannot be accessed) in `main`.  
  
## See Also  
 [Source Files and Source Programs](../VS_visualcpp/Source-Files-and-Source-Programs.md)