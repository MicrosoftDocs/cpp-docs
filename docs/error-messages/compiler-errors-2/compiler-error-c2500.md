---
title: "Compiler Error C2500 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2500"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2500"
ms.assetid: 6bff8161-dc9a-48ca-91f1-fd2eefdbbc93
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
# Compiler Error C2500
'identifier1' : 'identifier2' is already a direct base class  
  
 A class or structure appears more than once in a list of base classes.  
  
 A direct base is one mentioned in the base list. An indirect base is a base class of one of the classes in the base list.  
  
 A class cannot be specified as a direct base class more than once. A class can be used as an indirect base class more than once.  
  
 The following sample generates C2500:  
  
```  
// C2500.cpp  
// compile with: /c  
class A {};  
class B : public A, public A {};    // C2500  
  
// OK  
class C : public A {};  
class D : public A {};  
class E : public C, public D {};  
```