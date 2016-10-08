---
title: "Classes and Structs  (C++ Component Extensions)"
ms.custom: na
ms.date: 10/04/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: language-reference
ms.assetid: 5c360764-b229-49c6-9357-66213afbc372
caps.latest.revision: 32
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
# Classes and Structs  (C++ Component Extensions)
Declares a class or struct whose *object lifetime* is administered automatically. When the object is no longer accessible or goes out of scope, Visual C++ automatically discards the memory that is allocated to the object.  
  
## All Runtimes  
 **Syntax**  
  
```  
  
      class_access  
      ref class  
      name  
      modifier :  inherit_accessbase_type {};  
class_accessref structnamemodifier :  inherit_accessbase_type {};  
class_accessvalue classnamemodifier :  inherit_accessbase_type {};  
class_accessvalue structnamemodifier :  inherit_accessbase_type {};  
  
```  
  
 **Parameters**  
  
 *class_access* (optional)  
 The accessibility of the class or struct outside the assembly. Possible values are **public** and `private` (`private` is the default). Nested classes or structs cannot have a *class_access* specifier.  
  
 *name*  
 The name of the class or struct.  
  
 *modifier* (optional)  
 [abstract](../VS_visualcpp/abstract---C---Component-Extensions-.md) and [sealed](../VS_visualcpp/sealed---C---Component-Extensions-.md) are valid modifiers.  
  
 *inherit_access* (optional)  
 The accessibility of `base_type`. The only permitted accessibility is `public` (`public` is the default).  
  
 *base_type* (optional)  
 A base type. However, a value type cannot act as a base type.  
  
 For more information, see the language-specific descriptions of this parameter in the Windows Runtime and Common Language Runtime sections.  
  
 **Remarks**  
  
 The default member accessibility of an object declared with **ref class** or **value class** is `private`. And the default member accessibility of an object declared with **ref struct** or **value struct** is `public`.  
  
 When a reference type inherits from another reference type, virtual functions in the base class must explicitly be overridden (with [override](../VS_visualcpp/override---C---Component-Extensions-.md)) or hidden (with [new (new slot in vtable)](../VS_visualcpp/new--new-slot-in-vtable----C---Component-Extensions-.md)). The derived class functions must also be explicitly marked as `virtual`.  
  
 To detect at compile time whether a type is a `ref class` or `ref struct`, or a `value class` or `value struct`, use `__is_ref_class (``type``)`, `__is_value_class (``type``)`, or `__is_simple_value_class (``type``)`. For more information, see [Compiler Support for Type Traits](../VS_visualcpp/Compiler-Support-for-Type-Traits--C---Component-Extensions-.md).  
  
 For more information on classes and structs, see  
  
-   [Instantiating Classes and Structs](../VS_visualcpp/How-to--Define-and-Consume-Classes-and-Structs--C---CLI-.md)  
  
-   [Semantics of the this Pointer in Value and Reference Types](../Topic/Semantics%20of%20the%20this%20Pointer%20in%20Value%20and%20Reference%20Types.md)  
  
-   [C++ Stack Semantics for Reference Types](../VS_visualcpp/C---Stack-Semantics-for-Reference-Types.md)  
  
-   [Classes, Structures, and Unions](../VS_visualcpp/Classes-and-Structs--C---.md)  
  
-   [public and private on Native Classes](../Topic/How%20to:%20Declare%20public%20and%20private%20on%20Native%20Classes.md)  
  
-   [Implicitly Abstract Classes](../Topic/Implicitly%20Abstract%20Classes.md)  
  
-   [Define Static Constructors in a Class or Struct](../Topic/How%20to:%20Define%20Static%20Constructors%20in%20a%20Class%20or%20Struct.md)  
  
-   [Copy Constructor May Not Be Generated](../Topic/Copy%20Constructor%20May%20Not%20Be%20Generated.md)  
  
-   [Hide-by-Signature Functions in Reference Types](../Topic/Hide-by-Signature%20Functions%20in%20Reference%20Types.md)  
  
-   [Destructors and Finalizers in Visual C++](../Topic/Destructors%20and%20Finalizers%20in%20Visual%20C++.md)  
  
-   [Type and Member Visibility](../Topic/Type%20and%20Member%20Visibility.md)  
  
-   [User-Defined Operators (C++/CLI)](../VS_visualcpp/User-Defined-Operators--C---CLI-.md)  
  
-   [User-Defined Conversions (C++/CLI)](../VS_visualcpp/User-Defined-Conversions--C---CLI-.md)  
  
-   [How to: Wrap Native Class for Use by C#](../VS_visualcpp/How-to--Wrap-Native-Class-for-Use-by-C#.md)  
  
-   [Generic Classes (C++/CLI)](../VS_visualcpp/Generic-Classes--C---CLI-.md)  
  
## Windows Runtime  
 **Remarks**  
  
 See [Ref classes and structs](http://msdn.microsoft.com/library/windows/apps/hh699870.aspx) and [Value classes and structs](http://msdn.microsoft.com/library/windows/apps/hh699861.aspx).  
  
 **Parameters**  
  
 *base_type* (optional)  
 A base type. A `ref class` or `ref struct` can inherit from zero or more interfaces and zero or one `ref` types. A `value class` or `value struct` can only inherit from zero or more interfaces.  
  
 When you declare an object by using the `ref class` or `ref struct` keywords, the object is accessed by a handle to an object; that is, a reference-counter pointer to the object. When the declared variable goes out of scope, the compiler automatically deletes the underlying object. When the object is  used as a parameter in a call or is stored in a variable, a handle to the object is actually passed or stored.  
  
 When you declare an object by using the `value class` or `value struct` keywords, the object lifetime of the declared object is not supervised. The object is like any other standard C++ class or struct.  
  
### Requirements  
 Compiler option: **/ZW**  
  
## Common Language Runtime  
 **Remarks**  
  
 The following table lists differences from the syntax shown in the **All Runtimes** section that are specific to C++/CLI.  
  
 **Parameters**  
  
 *base_type* (optional)  
 A base type. A `ref class` or `ref struct` can inherit from zero or more managed interfaces and zero or one ref types. A `value class` or `value struct` can only inherit from zero or more managed interfaces.  
  
 The `ref class` and `ref struct` keywords tell the compiler that the class or structure is to be allocated on the heap. When the object is  used as a parameter in a call or is stored in a variable, a reference to the object is actually passed or stored.  
  
 The `value class` and `value struct` keywords tells the compiler that the value of the allocated class or structure is passed to functions or stored in members.  
  
### Requirements  
 Compiler option: **/clr**  
  
## See Also  
 [Component Extensions for Runtime Platforms](../VS_visualcpp/Component-Extensions-for-Runtime-Platforms.md)