---
title: "Casting | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "casting"
  - "coercion"
  - "virtual functions, in derived classes"
  - "static cast operator"
  - "dynamic cast operator"
  - "polymorphic classes"
  - "classes [C++], polymorphism"
ms.assetid: 3dbeb06e-2f4b-4693-832d-624bc8ec95de
caps.latest.revision: 6
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
# Casting
The C++ language provides that if a class is derived from a base class containing virtual functions, a pointer to that base class type can be used to call the implementations of the virtual functions residing in the derived class object. A class containing virtual functions is sometimes called a "polymorphic class."  
  
 Since a derived class completely contains the definitions of all the base classes from which it is derived, it is safe to cast a pointer up the class hierarchy to any of these base classes. Given a pointer to a base class, it might be safe to cast the pointer down the hierarchy. It is safe if the object being pointed to is actually of a type derived from the base class. In this case, the actual object is said to be the "complete object." The pointer to the base class is said to point to a "subobject" of the complete object. For example, consider the class hierarchy shown in the following figure.  
  
 ![Class hierarchy](../cpp/media/vc38zz1.gif "vc38ZZ1")  
Class Hierarchy  
  
 An object of type `C` could be visualized as shown in the following figure.  
  
 ![Class C with sub&#45;objects B and A](../cpp/media/vc38zz2.gif "vc38ZZ2")  
Class C with B Subobject and A Subobject  
  
 Given an instance of class `C`, there is a `B` subobject and an `A` subobject. The instance of `C`, including the `A` and `B` subobjects, is the "complete object."  
  
 Using run-time type information, it is possible to check whether a pointer actually points to a complete object and can be safely cast to point to another object in its hierarchy. The [dynamic_cast](../cpp/dynamic-cast-operator.md) operator can be used to make these types of casts. It also performs the run-time check necessary to make the operation safe.  
  
 For conversion of nonpolymorphic types, you can use the [static_cast](../cpp/static-cast-operator.md) operator (this topic explains the difference between static and dynamic casting conversions, and when it is appropriate to use each).  
  
 This section covers the following topics:  
  
-   [Casting operators](../cpp/casting-operators.md)  
  
-   [Run-time type information](../cpp/run-time-type-information.md)  
  
## See Also  
 [Expressions](../cpp/expressions-cpp.md)