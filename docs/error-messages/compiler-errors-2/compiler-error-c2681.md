---
title: "Compiler Error C2681 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2681"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2681"
ms.assetid: eb42da6d-8d2c-43fd-986b-e73e2b004885
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
# Compiler Error C2681
'type' : invalid expression type for name  
  
 A casting operator tried to convert from an invalid type. For example, if you use the [dynamic_cast](../../cpp/dynamic-cast-operator.md) operator to convert an expression to a pointer type, the source expression must be a pointer.  
  
 The following sample generates C2681:  
  
```  
// C2681.cpp  
class A { virtual void f(); };  
  
void g(int i) {  
    A* pa;  
    pa = dynamic_cast<A*>(i);  // C2681  
}  
```