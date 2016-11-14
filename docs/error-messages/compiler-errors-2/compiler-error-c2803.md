---
title: "Compiler Error C2803 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2803"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2803"
ms.assetid: 2cdbe374-8cc4-4c4e-ba15-062a7479e937
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
# Compiler Error C2803
'operator operator' must have at least one formal parameter of class type  
  
 The overloaded operator lacks a parameter of class type.  
  
 You need to pass at least one parameter by reference (not using pointers, but references) or by value to be able to write "a < b" (a and b being of type class A).  
  
 If both parameters are pointers it will be a pure comparison of pointer addresses and will not use the user-defined conversion.  
  
 The following sample generates C2803:  
  
```  
// C2803.cpp  
// compile with: /c  
class A{};  
bool operator< (const A *left, const A *right);   // C2803  
// try the following line instead  
// bool operator< (const A& left, const A& right);  
```