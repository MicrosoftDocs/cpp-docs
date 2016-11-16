---
title: "Compiler Error C2558 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2558"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2558"
ms.assetid: 822b701e-dcae-423a-b21f-47f36aff9c90
caps.latest.revision: 12
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
# Compiler Error C2558
'identifier' : no copy constructor available or copy constructor is declared 'explicit'  
  
 A copy constructor initializes an object from another object of the same type. (It makes a copy of the object.) The compiler generates a default copy constructor if you do not define any constructors.  
  
### To fix this error  
  
1.  The problem can occur when an attempt is made to copy a class whose copy constructor is `private`. In most cases, a class that has a `private` copy constructor should not be copied. A common programming technique declares a `private` copy constructor to prevent the direct use of a class. The class may be useless by itself or require another class in order to work correctly.  
  
     If you determine that it is safe to use a class that has a `private` copy constructor, derive a new class from the class that has the `private` constructor and make a `public` or `protected` copy constructor available in the new class. Use the derived class in place of the original.  
  
2.  The problem can occur when an attempt is made to copy a class whose copy constructor is explicit. Declaring a copy constructor as `explicit` prevents passing/returning objects of a class to/from functions. For more information about explicit constructors, see [User-Defined Type Conversions](../../cpp/user-defined-type-conversions-cpp.md).  
  
3.  The problem can occur when an attempt is made to copy a class instance declared `const` by using a copy constructor that does not take a `const` reference parameter. Declare your copy constructor with a `const` type reference instead of a non-const type reference.