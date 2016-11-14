---
title: "Declaration of a Managed Class Type | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__gc types"
  - "classes [C++], managed"
  - "class keyword [C++], CLR"
  - "__value keyword"
  - "value types, declaring"
  - "value keyword [C++]"
  - "managed classes"
  - "interface class keyword"
  - "ref keyword [C++]"
ms.assetid: 16de9c94-91d7-492f-8ac7-f0729cc627e9
caps.latest.revision: 10
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
# Declaration of a Managed Class Type
The way to declare a reference class type changed from Managed Extensions for C++ to [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)].  
  
 In Managed Extensions, a reference class type is prefaced with the `__gc` keyword. In the new syntax, the `__gc` keyword is replaced by one of two spaced keywords: `ref class` or `ref struct`. The choice of `struct` or `class` indicates the public (for `struct`) or private (for `class`) default access level of its members declared in an initial unlabeled section of the body of the type.  
  
 Similarly, in Managed Extensions, a value class type is prefaced with the `__value` keyword. In the new syntax, the `__value` keyword is replaced by one of two spaced keywords: `value class` or `value struct`.  
  
 An interface type, in Managed Extensions, was indicated with the keyword `__interface`. In the new syntax, this is replaced with `interface class`.  
  
 For example, the following class declarations in Managed Extensions:  
  
```  
public __gc class Block {};     // reference class  
public __value class Vector {}; // value class  
public __interface IFooBar {};  // interface class  
```  
  
 Under the new syntax these are equivalently declared as follows:  
  
```  
public ref class Block {};         // reference class  
public value class Vector {};      // value class  
public interface class IFooBar {}; // interface class  
```  
  
## Specifying the Class as Abstract  
 Under Managed Extensions, you put the keyword `__abstract` before the `class` keyword (either before or after the `__gc`) to indicate that the class is incomplete and that objects of the class cannot be created within the program:  
  
```  
public __gc __abstract class Shape {};  
public __gc __abstract class Shape2D: public Shape {};  
```  
  
 Under the new syntax, you specify the `abstract` contextual keyword following the class name and before either the class body, base class derivation list, or semicolon.  
  
```  
public ref class Shape abstract {};  
public ref class Shape2D abstract : public Shape{};  
```  
  
 Of course, the semantic meaning is unchanged.  
  
## Specifying the Class as Sealed  
 Under Managed Extensions, you put the keyword `__sealed` before the `class` keyword (either before or after `__gc`) to indicate that objects of the class cannot be inherited from:  
  
```  
public __gc __sealed class String {};  
```  
  
 Under the new syntax, you specify the `sealed` contextual keyword following the class name and before either the class body, base class derivation list, or semicolon.  
  
 You can both derive a class and seal it. For example, the `String` class is implicitly derived from `Object`. The benefit of sealing a class is that it supports the static resolution (that is, at compile-time) of all virtual function calls through the sealed reference class object. This is because the `sealed` specifier guarantees that the `String` tracking handle cannot refer to a subsequently derived class that might provide an overriding instance of the virtual method being invoked. Here is an example of a sealed class in new syntax:  
  
```  
public ref class String sealed {};  
```  
  
 One can also specify a class as both abstract and sealed – this is a special condition that indicates a static class. This is described in the CLR documentation as follows:  
  
 "A type that is both `abstract` and `sealed` should have only static members, and serves as what some languages call a namespace."  
  
 For example, here is a declaration of an abstract sealed class using the Managed Extensions syntax:  
  
```  
public __gc __sealed __abstract class State {  
public:  
   static State() {}  
   static bool inParamList();  
  
private:  
   static bool ms_inParam;  
};  
```  
  
 and here is this declaration translated into the new syntax:  
  
```  
public ref class State abstract sealed {  
public:  
   static State();  
   static bool inParamList();  
  
private:  
   static bool ms_inParam;  
};  
```  
  
## CLR Inheritance: Specifying the Base Class  
 Under the CLR object model, only public single inheritance is supported. However, Managed Extensions retained the ISO-C++ default interpretation of a base class without an access keyword as specifying a private derivation. This meant that each CLR inheritance declaration had to provide the `public` keyword to override the default interpretation.  
  
```  
// Managed Extensions: error: defaults to private derivation  
__gc class Derived : Base {};  
```  
  
 In the new syntax definition, the absence of an access keyword indicates a public derivation in a CLR inheritance definition. Thus, the `public` access keyword is now optional. While this does not require any modification of Managed Extensions for C++ code, I list this change here for completeness.  
  
```  
// New syntax: ok: defaults to public derivation  
ref class Derived : Base{};  
```  
  
## See Also  
 [Managed Types (C++/CL)](../dotnet/managed-types-cpp-cl.md)   
 [Classes and Structs](../windows/classes-and-structs-cpp-component-extensions.md)   
 [abstract](../windows/abstract-cpp-component-extensions.md)   
 [sealed](../windows/sealed-cpp-component-extensions.md)