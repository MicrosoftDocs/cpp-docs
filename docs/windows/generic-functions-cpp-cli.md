---
title: "Generic Functions (C++-CLI) | Microsoft Docs"
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
  - "functions [C++], generic"
  - "generic methods"
  - "generics [C++], functions"
  - "methods [C++], generic"
  - "generic functions"
ms.assetid: 8e409364-58f9-4360-b486-e7d555e0c218
caps.latest.revision: 21
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
# Generic Functions (C++/CLI)
A generic function is a function that is declared with type parameters. When called, actual types are used instead of the type parameters.  
  
## All Platforms  
 **Remarks**  
  
 This feature does not apply to all platforms.  
  
## [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)]  
 **Remarks**  
  
 This feature is not supported in the [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)].  
  
### Requirements  
 Compiler option: **/ZW**  
  
## [!INCLUDE[clr_for_headings](../dotnet/includes/clr_for_headings_md.md)]  
 A generic function is a function that is declared with type parameters. When called, actual types are used instead of the type parameters.  
  
 **Syntax**  
  
```  
[attributes] [modifiers]  
return-type identifier<type-parameter identifier(s)>  
[type-parameter-constraints clauses]  
  
([formal-parameters])  
{function-body}  
```  
  
 **Parameters**  
  
 *attributes* (Optional)  
 Additional declarative information. For more information on attributes and attribute classes, see attributes.  
  
 *modifiers* (Optional)  
 A modifier for the function, such as static.  `virtual` is not allowed since virtual methods may not be generic.  
  
 *return-type*  
 The type returned by the method. If the return type is void, no return value is required.  
  
 *identifier*  
 The function name.  
  
 *type-parameter identifier(s)*  
 Comma-separated identifiers list.  
  
 *formal-parameters* (Optional)  
 Parameter list.  
  
 *type-parameter-constraints-clauses*  
 This specifies restrictions on the types that may be used as type arguments, and takes the form specified in [Constraints on Generic Type Parameters (C++/CLI)](../windows/constraints-on-generic-type-parameters-cpp-cli.md).  
  
 *function-body*  
 The body of the method, which may refer to the type parameter identifiers.  
  
 **Remarks**  
  
 Generic functions are functions declared with a generic type parameter. They may be methods in a class or struct, or standalone functions. A single generic declaration implicitly declares a family of functions that differ only in the substitution of a different actual type for the generic type parameter.  
  
 In [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)], class or struct constructors may not be declared with generic type parameters.  
  
 When called, the generic type parameter is replaced by an actual type. The actual type may be explicitly specified in angled brackets using syntax similar to a template function call. If called without the type parameters, the compiler will attempt to deduce the actual type from the parameters supplied in the function call. If the intended type argument cannot be deduced from the parameters used, the compiler will report an error.  
  
### Requirements  
 Compiler option: **/clr**  
  
### Examples  
 **Example**  
  
 The following code sample demonstrates a generic function.  
  
```  
// generics_generic_function_1.cpp  
// compile with: /clr  
generic <typename ItemType>  
void G(int i) {}  
  
ref struct A {  
   generic <typename ItemType>  
   void G(ItemType) {}  
  
   generic <typename ItemType>  
   static void H(int i) {}  
};  
  
int main() {  
   A myObject;  
  
   // generic function call  
   myObject.G<int>(10);  
  
   // generic function call with type parameters deduced  
   myObject.G(10);  
  
   // static generic function call  
   A::H<int>(10);  
  
   // global generic function call  
   G<int>(10);  
}  
```  
  
 **Example**  
  
 Generic functions can be overloaded based on signature or arity, the number of type parameters on a function. Also, generic functions can be overloaded with non-generic functions of the same name, as long as the functions differ in some type parameters. For example, the following functions can be overloaded:  
  
```  
// generics_generic_function_2.cpp  
// compile with: /clr /c  
ref struct MyClass {  
   void MyMythod(int i) {}  
  
   generic <class T>   
   void MyMythod(int i) {}  
  
   generic <class T, class V>   
   void MyMythod(int i) {}  
};  
```  
  
 **Example**  
  
 The following example uses a generic function to find the first element in an array. It declares `MyClass`, which inherits from the base class `MyBaseClass`. `MyClass` contains a generic function, `MyFunction`, which calls another generic function, `MyBaseClassFunction`, within the base class. In **main**, the generic function, `MyFunction`, is called using different type arguments.  
  
```  
// generics_generic_function_3.cpp  
// compile with: /clr  
using namespace System;  
  
ref class MyBaseClass {  
protected:  
   generic <class ItemType>  
   ItemType MyBaseClassFunction(ItemType item) {  
      return item;  
   }  
};  
  
ref class MyClass: public MyBaseClass {  
public:  
   generic <class ItemType>  
   ItemType MyFunction(ItemType item) {  
      return MyBaseClass::MyBaseClassFunction<ItemType>(item);  
   }  
};  
  
int main() {  
   MyClass^ myObj = gcnew MyClass();  
  
   // Call MyFunction using an int.  
   Console::WriteLine("My function returned an int: {0}",  
                           myObj->MyFunction<int>(2003));  
  
   // Call MyFunction using a string.  
   Console::WriteLine("My function returned a string: {0}",  
   myObj->MyFunction<String^>("Hello generic functions!"));  
}  
```  
  
 **Output**  
  
```Output  
My function returned an int: 2003  
My function returned a string: Hello generic functions!  
```  
  
## See Also  
 [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md)   
 [Generics](../windows/generics-cpp-component-extensions.md)