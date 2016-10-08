---
title: "Classes and Structs (C++)"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: language-reference
ms.assetid: 516dd496-13fb-4f17-845a-e9ca45437873
caps.latest.revision: 9
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Classes and Structs (C++)
This section introduces C++ classes and structs. The two constructs are identical in C++ except that in structs the default accessibility is public, whereas in classes the default is private.  
  
 Classes and structs are the constructs whereby you define your own types. Classes and structs can both contain data members and member functions, which enable you to describe the type's state and behavior.  
  
 The following topics are included:  
  
-   [class](../VS_visualcpp/class--C---.md)  
  
-   [struct](../VS_visualcpp/struct--C---.md)  
  
-   [Class Member Overview](../VS_visualcpp/Class-Member-Overview.md)  
  
-   [Member Access Control](../VS_visualcpp/Member-Access-Control--C---.md)  
  
-   [Inheritance](../VS_visualcpp/Inheritance---C---.md)  
  
-   [Static Members](../VS_visualcpp/Static-Members--C---.md)  
  
-   [User-Defined Type Conversions](../VS_visualcpp/User-Defined-Type-Conversions--C---.md)  
  
-   [Mutable Data Members (mutable specifier)](../VS_visualcpp/Mutable-Data-Members--C---.md)  
  
-   [Nested Class Declarations](../VS_visualcpp/Nested-Class-Declarations.md)  
  
-   [Anonymous Class Types](../VS_visualcpp/Anonymous-Class-Types.md)  
  
-   [Pointers to Members](../VS_visualcpp/Pointers-to-Members.md)  
  
-   [this Pointer](../VS_visualcpp/this-Pointer.md)  
  
-   [C++ Bit Fields](../VS_visualcpp/C---Bit-Fields.md)  
  
 The three class types are structure, class, and union. They are declared using the [struct](../VS_visualcpp/struct--C---.md), [class](../VS_visualcpp/class--C---.md), and [union](../VS_visualcpp/Unions.md) keywords (see [Defining Class Types](assetId:///e8c65425-0f3a-4dca-afc2-418c3b1e57da)). The following table shows the differences among the three class types.  
  
 For more information on unions, see [Unions](../VS_visualcpp/Unions.md). For information on managed classes and structs, see [Classes and Structs](../VS_visualcpp/Classes-and-Structs---C---Component-Extensions-.md).  
  
### Access Control and Constraints of Structures, Classes and Unions  
  
|Structures|Classes|Unions|  
|----------------|-------------|------------|  
|class key is `struct`|class key is **class**|class key is **union**|  
|Default access is public|Default access is private|Default access is public|  
|No usage constraints|No usage constraints|Use only one member at a time|  
  
## See Also  
 [C++ Language Reference](../VS_visualcpp/C---Language-Reference.md)