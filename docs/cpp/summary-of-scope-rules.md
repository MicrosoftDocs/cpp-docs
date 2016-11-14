---
title: "Summary of Scope Rules | Microsoft Docs"
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
  - "class scope [C++], rules"
  - "classes [C++], scope"
  - "class names [C++], scope rules"
  - "names [C++], class"
  - "scope [C++], class names"
ms.assetid: 47e26482-0111-466f-b857-598c15d05105
caps.latest.revision: 8
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
# Summary of Scope Rules
The use of a name must be unambiguous within its scope (up to the point where overloading is determined). If the name denotes a function, the function must be unambiguous with respect to number and type of parameters. If the name remains unambiguous, [member-access](../cpp/member-access-control-cpp.md) rules are applied.  
  
## Constructor initializers  
 Constructor initializers (described in [Initializing Bases and Members](http://msdn.microsoft.com/en-us/2f71377e-2b6b-49da-9a26-18e9b40226a1)) are evaluated in the scope of the outermost block of the constructor for which they are specified. Therefore, they can use the constructor's parameter names.  
  
## Global names  
 A name of an object, function, or enumerator is global if it is introduced outside any function or class or prefixed by the global unary scope operator (`::`), and if it is not used in conjunction with any of these binary operators:  
  
-   Scope-resolution (`::`)  
  
-   Member-selection for objects and references (**.**)  
  
-   Member-selection for pointers (**–>**)  
  
## Qualified names  
 Names used with the binary scope-resolution operator (`::`) are called "qualified names." The name specified after the binary scope-resolution operator must be a member of the class specified on the left of the operator or a member of its base class(es).  
  
 Names specified after the member-selection operator (**.** or **–>**) must be members of the class type of the object specified on the left of the operator or members of its base class(es). Names specified on the right of the member-selection operator (**–>**) can also be objects of another class type, provided that the left-hand side of **–>** is a class object and that the class defines an overloaded member-selection operator (**–>**) that evaluates to a pointer to some other class type. (This provision is discussed in more detail in [Class Member Access](../cpp/member-access.md).)  
  
 The compiler searches for names in the following order, stopping when the name is found:  
  
1.  Current block scope if name is used inside a function; otherwise, global scope.  
  
2.  Outward through each enclosing block scope, including the outermost function scope (which includes function parameters).  
  
3.  If the name is used inside a member function, the class's scope is searched for the name.  
  
4.  The class's base classes are searched for the name.  
  
5.  The enclosing nested class scope (if any) and its bases are searched. The search continues until the outermost enclosing class scope is searched.  
  
6.  Global scope is searched.  
  
 However, you can make modifications to this search order as follows:  
  
1.  Names preceded by `::` force the search to begin at global scope.  
  
2.  Names preceded by the **class**, `struct`, and **union** keywords force the compiler to search only for **class**, `struct`, or **union** names.  
  
3.  Names on the left side of the scope-resolution operator (`::`) can be only **class**, `struct`, **namespace**, or **union** names.  
  
 If the name refers to a nonstatic member but is used in a static member function, an error message is generated. Similarly, if the name refers to any nonstatic member in an enclosing class, an error message is generated because enclosed classes do not have enclosing-class **this** pointers.  
  
## Function parameter names  
 Function parameter names in function definitions are considered to be in the scope of the outermost block of the function. Therefore, they are local names and go out of scope when the function is exited.  
  
 Function parameter names in function declarations (prototypes) are in local scope of the declaration and go out of scope at the end of the declaration.  
  
 Default parameters are in the scope of the parameter for which they are the default, as described in the preceding two paragraphs. However, they cannot access local variables or nonstatic class members. Default parameters are evaluated at the point of the function call, but they are evaluated in the function declaration's original scope. Therefore, the default parameters for member functions are always evaluated in class scope.  
  
## See Also  
 [Inheritance](../cpp/inheritance-cpp.md)