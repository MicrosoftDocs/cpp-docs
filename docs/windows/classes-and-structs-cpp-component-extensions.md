---
title: "Classes and Structs  (C++ Component Extensions) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "public"
  - "ref struct"
  - "value_CPP"
  - "ref class"
  - "value struct"
  - "ref struct_cpp"
  - "ref class_cpp"
  - "value class_cpp"
  - "value struct_cpp"
  - "value class"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ref class keyword [C++]"
  - "value class keyword [C++]"
  - "value struct keyword [C++]"
  - "ref struct keyword [C++]"
ms.assetid: 5c360764-b229-49c6-9357-66213afbc372
caps.latest.revision: 32
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
 [abstract](../windows/abstract-cpp-component-extensions.md) and [sealed](../windows/sealed-cpp-component-extensions.md) are valid modifiers.  
  
 *inherit_access* (optional)  
 The accessibility of `base_type`. The only permitted accessibility is `public` (`public` is the default).  
  
 *base_type* (optional)  
 A base type. However, a value type cannot act as a base type.  
  
 For more information, see the language-specific descriptions of this parameter in the [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] and [!INCLUDE[clr_for_headings](../dotnet/includes/clr_for_headings_md.md)] sections.  
  
 **Remarks**  
  
 The default member accessibility of an object declared with **ref class** or **value class** is `private`. And the default member accessibility of an object declared with **ref struct** or **value struct** is `public`.  
  
 When a reference type inherits from another reference type, virtual functions in the base class must explicitly be overridden (with [override](../windows/override-cpp-component-extensions.md)) or hidden (with [new (new slot in vtable)](../windows/new-new-slot-in-vtable-cpp-component-extensions.md)). The derived class functions must also be explicitly marked as `virtual`.  
  
 To detect at compile time whether a type is a `ref class` or `ref struct`, or a `value class` or `value struct`, use `__is_ref_class (``type``)`, `__is_value_class (``type``)`, or `__is_simple_value_class (``type``)`. For more information, see [Compiler Support for Type Traits](../windows/compiler-support-for-type-traits-cpp-component-extensions.md).  
  
 For more information on classes and structs, see  
  
-   [Instantiating Classes and Structs](../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md)  
  
 
  
-   [C++ Stack Semantics for Reference Types](../dotnet/cpp-stack-semantics-for-reference-types.md)  
  
-   [Classes, Structures, and Unions](../cpp/classes-and-structs-cpp.md)  
  
-   [Destructors and finalizers in How to: Define and consume classes and structs (C++/CLI)](../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Destructors_and_finalizers)  
  
-   [User-Defined Operators (C++/CLI)](../dotnet/user-defined-operators-cpp-cli.md)  
  
-   [User-Defined Conversions (C++/CLI)](../dotnet/user-defined-conversions-cpp-cli.md)  
  
-   [How to: Wrap Native Class for Use by C#](../dotnet/how-to-wrap-native-class-for-use-by-csharp.md)  
  
-   [Generic Classes (C++/CLI)](../windows/generic-classes-cpp-cli.md)  
  
## [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)]  
 **Remarks**  
  
 See [Ref classes and structs](http://msdn.microsoft.com/library/windows/apps/hh699870.aspx) and [Value classes and structs](http://msdn.microsoft.com/library/windows/apps/hh699861.aspx).  
  
 **Parameters**  
  
 *base_type* (optional)  
 A base type. A `ref class` or `ref struct` can inherit from zero or more interfaces and zero or one `ref` types. A `value class` or `value struct` can only inherit from zero or more interfaces.  
  
 When you declare an object by using the `ref class` or `ref struct` keywords, the object is accessed by a handle to an object; that is, a reference-counter pointer to the object. When the declared variable goes out of scope, the compiler automatically deletes the underlying object. When the object is  used as a parameter in a call or is stored in a variable, a handle to the object is actually passed or stored.  
  
 When you declare an object by using the `value class` or `value struct` keywords, the object lifetime of the declared object is not supervised. The object is like any other standard C++ class or struct.  
  
### Requirements  
 Compiler option: **/ZW**  
  
## [!INCLUDE[clr_for_headings](../dotnet/includes/clr_for_headings_md.md)]  
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
 [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md)