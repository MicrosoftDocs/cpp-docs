---
title: "Special member functions | Microsoft Docs"
ms.custom: ""
ms.date: "12/06/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "special member functions [C++]"
  - "constructors [C++]"
  - "destructors [C++]"
  - "copy operators [C++]"
  - "move operators [C++]"
  - "assignment operators [C++]"
ms.assetid: 017d6817-b012-44f0-b153-f3076c251ea7
caps.latest.revision: 17
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
# Special member functions  
  
The special member functions are class (or struct) member functions that, in certain cases, the compiler automatically generates for you. These functions are the [default constructor](constructors-cpp.md#default_constructors), the [destructor](destructors-cpp.md), the [copy constructor and copy assignment operator](copy-constructors-and-copy-assignment-operators-cpp.md), and the [move constructor and move assignment operator](move-constructors-and-move-assignment-operators-cpp.md). If your class does not define one or more of the special member functions, then the compiler may implicitly declare and define the functions that are used. The compiler does not generate functions if they are not needed.  
  
The compiler does generates a default constructor only when you have not declared any other constructor. If you have declared only a constructor that takes parameters, code that attempts to call a default constructor causes the compiler to produce an error message. The compiler-generated default constructor performs simple member-wise [default initialization](initializers.md#default_initialization) of the object. Default initialization leaves all member variables in an indeterminate state.  
  
The default destructor performs member-wise destruction of the object. It is virtual only if a base class destructor is virtual.  
  
The default copy and move construction and assignment operations perform member-wise bit-pattern copies or moves of non-static data members. Move operations are only generated when no destructor or move or copy operations are declared. A default copy constructor is only generated when no copy constructor is declared. It is implicitly deleted if a move operation is declared. A default copy assignment operator is generated only when no copy assignment operator is explicitly declared. It is implicitly deleted if a move operation is declared.  
  
You can explicitly declare a default special member function by using the `= default` keyword. This causes the compiler to define the function if needed, in the same way as if the function was not declared at all. To prevent automatic generation of a special member function, you can explicitly declare it as deleted by using the `= deleted` keyword.  
  
## See Also  
[C++ Language Reference](cpp-language-reference.md)  



 
