---
title: "Compiler Error C2563 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2563"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2563"
ms.assetid: 54abba68-6458-4ca5-894d-3babdb7b3552
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
# Compiler Error C2563
mismatch in formal parameter list  
  
 The formal parameter list of a function (or a pointer to a function) does not match those of another function (or pointer to a member function). As a result, the assignment of functions or pointers cannot be made.  
  
 The following sample generates C2563:  
  
```  
// C2563.cpp  
void func( int );  
void func( int, int );  
int main() {  
   void *fp();  
   fp = func;   // C2563  
}  
```