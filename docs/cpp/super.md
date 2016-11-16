---
title: "__super | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "__super_cpp"
  - "__super"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__super keyword [C++]"
ms.assetid: f0957c31-9256-405b-b402-cad182404b5f
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
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
# __super
**Microsoft Specific**  
  
 Allows you to explicitly state that you are calling a base-class implementation for a function that you are overriding.  
  
## Syntax  
  
```  
  
__super::  
member_function  
();  
  
```  
  
## Remarks  
 All accessible base-class methods are considered during the overload resolution phase, and the function that provides the best match is the one that is called.  
  
 `__super` can only appear within the body of a member function.  
  
 `__super` cannot be used with a using declaration. See [using Declaration](../cpp/using-declaration.md) for more information.  
  
 With the introduction of [attributes](../windows/cpp-attributes-reference.md) that inject code, your code might contain one or more base classes whose names you may not know but that contain methods that you wish to call.  
  
## Example  
  
```  
// deriv_super.cpp  
// compile with: /c  
struct B1 {  
   void mf(int) {}  
};  
  
struct B2 {  
   void mf(short) {}  
  
   void mf(char) {}  
};  
  
struct D : B1, B2 {  
   void mf(short) {  
      __super::mf(1);   // Calls B1::mf(int)  
      __super::mf('s');   // Calls B2::mf(char)  
   }  
};  
```  
  
 **END Microsoft Specific**  
  
## See Also  
 [Keywords](../cpp/keywords-cpp.md)