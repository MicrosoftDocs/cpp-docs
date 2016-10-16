---
title: "Classes and Structs (C++)"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Visual C++, classes"
  - "structures, C++ classes"
  - "user-defined types"
  - "classes [C++]"
  - "user-defined types, C++ classes"
ms.assetid: 516dd496-13fb-4f17-845a-e9ca45437873
caps.latest.revision: 9
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
# Classes and Structs (C++)
This section introduces C++ classes and structs. The two constructs are identical in C++ except that in structs the default accessibility is public, whereas in classes the default is private.  
  
 Classes and structs are the constructs whereby you define your own types. Classes and structs can both contain data members and member functions, which enable you to describe the type's state and behavior.  
  
 The following topics are included:  
  
-   [class](../cpp/class--c---.md)  
  
-   [struct](../cpp/struct--c---.md)  
  
-   [Class Member Overview](../cpp/class-member-overview.md)  
  
-   [Member Access Control](../cpp/member-access-control--c---.md)  
  
-   [Inheritance](../cpp/inheritance---c---.md)  
  
-   [Static Members](../cpp/static-members--c---.md)  
  
-   [User-Defined Type Conversions](../cpp/user-defined-type-conversions--c---.md)  
  
-   [Mutable Data Members (mutable specifier)](../cpp/mutable-data-members--c---.md)  
  
-   [Nested Class Declarations](../cpp/nested-class-declarations.md)  
  
-   [Anonymous Class Types](../cpp/anonymous-class-types.md)  
  
-   [Pointers to Members](../cpp/pointers-to-members.md)  
  
-   [this Pointer](../cpp/this-pointer.md)  
  
-   [C++ Bit Fields](../cpp/c---bit-fields.md)  
  
 The three class types are structure, class, and union. They are declared using the [struct](../cpp/struct--c---.md), [class](../cpp/class--c---.md), and [union](../cpp/unions.md) keywords (see [Defining Class Types](assetId:///e8c65425-0f3a-4dca-afc2-418c3b1e57da)). The following table shows the differences among the three class types.  
  
 For more information on unions, see [Unions](../cpp/unions.md). For information on managed classes and structs, see [Classes and Structs](../windows/classes-and-structs---c---component-extensions-.md).  
  
### Access Control and Constraints of Structures, Classes and Unions  
  
|Structures|Classes|Unions|  
|----------------|-------------|------------|  
|class key is `struct`|class key is **class**|class key is **union**|  
|Default access is public|Default access is private|Default access is public|  
|No usage constraints|No usage constraints|Use only one member at a time|  
  
## See Also  
 [C++ Language Reference](../cpp/c---language-reference.md)