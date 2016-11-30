---
title: "Inheritance  (C++) | Microsoft Docs"
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
  - "derived classes"
  - "derived classes, about derived classes"
  - "classes [C++], derived"
ms.assetid: 3534ca19-d9ed-4a40-be1b-b921ad0e6956
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
# Inheritance  (C++)
This section explains how to use derived classes to produce extensible programs.  
  
## Overview  
 New classes can be derived from existing classes using a mechanism called "inheritance" (see the information beginning in [Single Inheritance](../cpp/single-inheritance.md)). Classes that are used for derivation are called "base classes" of a particular derived class. A derived class is declared using the following syntax:  
  
```  
 class Derived : [virtual] [access-specifier] Base  
{  
   // member list  
};  
 class Derived : [virtual] [access-specifier] Base1,  
 [virtual] [access-specifier] Base2, . . .  
{  
   // member list  
};  
```  
  
 After the tag (name) for the class, a colon appears followed by a list of base specifications.  The base classes so named must have been declared previously.  The base specifications may contain an access specifier, which is one of the keywords **public**, `protected` or `private`.  These access specifiers appear before the base class name and apply only to that base class.  These specifiers control the derived class's permission to use to members of the base class.  See [Member-Access Control](../cpp/member-access-control-cpp.md) for information on access to base class members.  If the access specifier is omitted, the access to that base is considered `private`.  The base specifications may contain the keyword **virtual** to indicate virtual inheritance.  This keyword may appear before or after the access specifier, if any.  If virtual inheritance is used, the base class is referred to as a virtual base class.  
  
 Multiple base classes can be specified, separated by commas.  If a single base class is specified, the inheritance model is [Single inheritance](../cpp/single-inheritance.md).If more than one base class is specified, the inheritance model is called [Multiple inheritance](http://msdn.microsoft.com/en-us/3b74185e-2beb-4e29-8684-441e51d2a2ca),  
  
 The following topics are included:  
  
-   [Single inheritance](../cpp/single-inheritance.md)  
  
-   [Multiple inheritance](http://msdn.microsoft.com/en-us/3b74185e-2beb-4e29-8684-441e51d2a2ca)  
  
-   [Multiple base classes](../cpp/multiple-base-classes.md)  
  
-   [Virtual functions](../cpp/virtual-functions.md)  
  
-   [Explicit overrides](../cpp/explicit-overrides-cpp.md)  
  
-   [Abstract classes](../cpp/abstract-classes-cpp.md)  
  
-   [Summary of scope rules](../cpp/summary-of-scope-rules.md)  
  
 The [__super](../cpp/super.md) and [__interface](../cpp/interface.md) keywords are documented in this section.  
  
## See Also  
 [C++ Language Reference](../cpp/cpp-language-reference.md)