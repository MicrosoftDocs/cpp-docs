---
title: "Compiler Warning C4986"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "error-reference"
f1_keywords: 
  - "C4986"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4986"
ms.assetid: a3a7b008-29dd-4203-85f3-7740ab6790bb
caps.latest.revision: 4
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
# Compiler Warning C4986
'function': exception specification does not match previous declaration  
  
 This warning can be generated when there is an exception specification in one declaration and not the other.  
  
 By default, C4986 is off. For more information, see [Compiler Warnings That Are Off by Default](../c/compiler-warnings-that-are-off-by-default.md).  
  
## Example  
 The following sample generates C4986.  
  
```cpp  
  
      class X { };  
void f1() throw (X*);  
// ...  
void f1()  
{  
    // ...  
}  
  
```  
  
## Example  
 The following sample eliminates this warning.  
  
```cpp  
class X { };  
void f1() throw (X*);  
// ...  
void f1() throw (X*)  
{  
    // ...  
}  
  
```