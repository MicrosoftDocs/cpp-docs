---
title: "Classes and Structs (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
dev_langs: ["C++"]
helpviewer_keywords: ["Visual C++, classes", "structures, C++ classes", "user-defined types", "classes [C++]", "user-defined types, C++ classes"]
ms.assetid: 516dd496-13fb-4f17-845a-e9ca45437873
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Classes and Structs (C++)
This section introduces C++ classes and structs. The two constructs are identical in C++ except that in structs the default accessibility is public, whereas in classes the default is private.  
  
 Classes and structs are the constructs whereby you define your own types. Classes and structs can both contain data members and member functions, which enable you to describe the type's state and behavior.  
  
 The following topics are included:  
  
-   [class](../cpp/class-cpp.md)  
  
-   [struct](../cpp/struct-cpp.md)  
  
-   [Class Member Overview](../cpp/class-member-overview.md)  
  
-   [Member Access Control](../cpp/member-access-control-cpp.md)  
  
-   [Inheritance](../cpp/inheritance-cpp.md)  
  
-   [Static Members](../cpp/static-members-cpp.md)  
  
-   [User-Defined Type Conversions](../cpp/user-defined-type-conversions-cpp.md)  
  
-   [Mutable Data Members (mutable specifier)](../cpp/mutable-data-members-cpp.md)  
  
-   [Nested Class Declarations](../cpp/nested-class-declarations.md)  
  
-   [Anonymous Class Types](../cpp/anonymous-class-types.md)  
  
-   [Pointers to Members](../cpp/pointers-to-members.md)  
  
-   [this Pointer](../cpp/this-pointer.md)  
  
-   [C++ Bit Fields](../cpp/cpp-bit-fields.md)  
  
 The three class types are structure, class, and union. They are declared using the [struct](../cpp/struct-cpp.md), [class](../cpp/class-cpp.md), and [union](../cpp/unions.md) keywords. The following table shows the differences among the three class types.  
  
 For more information on unions, see [Unions](../cpp/unions.md). For information on managed classes and structs, see [Classes and Structs](../windows/classes-and-structs-cpp-component-extensions.md).  
  
### Access Control and Constraints of Structures, Classes and Unions  
  
|Structures|Classes|Unions|  
|----------------|-------------|------------|  
|class key is **struct**|class key is **class**|class key is **union**|  
|Default access is public|Default access is private|Default access is public|  
|No usage constraints|No usage constraints|Use only one member at a time|  
  
## See Also  
 [C++ Language Reference](../cpp/cpp-language-reference.md)