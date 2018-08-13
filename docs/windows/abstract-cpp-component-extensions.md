---
title: "abstract  (C++ Component Extensions) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["abstract", "abstract_cpp"]
dev_langs: ["C++"]
helpviewer_keywords: ["abstract keyword [C++]"]
ms.assetid: cbae3408-0378-4ac8-b70d-c016b381a6d5
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# abstract  (C++ Component Extensions)
The **abstract** keyword declares either:  
  
-   A type can be used as a base type, but the type itself cannot be instantiated.  
  
-   A type member function can be defined only in a derived type.  
  
## All Platforms  
### Syntax 
  
```cpp  
      class-declaration  
      class-identifier  
      abstract {}  
virtualreturn-typemember-function-identifier() abstract ;  
```  
  
### Remarks
  
 The first example syntax declares a class to be abstract. The *class-declaration* component can be either a native C++ declaration (**class** or **struct**), or a C++ extension declaration (**ref class** or **ref struct**) if the `/ZW` or `/clr` compiler option is specified.  
  
 The second example syntax declares a virtual member function to be abstract. Declaring a function abstract is the same as declaring it a pure virtual function. Declaring a member function abstract also causes the enclosing class to be declared abstract.  
  
 The **abstract** keyword is supported in native and platform-specific code; that is, it can be compiled with or without the `/ZW` or `/clr` compiler option.  
  
 You can detect at compile time if a type is abstract with the `__is_abstract(type)` type trait. For more information, see [Compiler Support for Type Traits](../windows/compiler-support-for-type-traits-cpp-component-extensions.md).  
  
 The **abstract** keyword is a context-sensitive override specifier. For more information about context-sensitive keywords, see [Context-Sensitive Keywords](../windows/context-sensitive-keywords-cpp-component-extensions.md). For more information about override specifiers, see [How to: Declare Override Specifiers in Native Compilations](../dotnet/how-to-declare-override-specifiers-in-native-compilations-cpp-cli.md).  
  
## Windows Runtime  
 For more information, see [Ref classes and structs](http://msdn.microsoft.com/library/windows/apps/hh699870.aspx).  
  
### Requirements  
 Compiler option: `/ZW`  
  
## Common Language Runtime 
  
### Requirements  
 Compiler option: `/clr`  
  
### Examples  
  
 The following code example generates an error because class `X` is marked **abstract**.  
  
```cpp  
// abstract_keyword.cpp  
// compile with: /clr  
ref class X abstract {  
public:  
   virtual void f() {}  
};  
  
int main() {  
   X ^ MyX = gcnew X;   // C3622  
}  
```  
  
 The following code example generates an error because it instantiates a native class that is marked **abstract**. This error will occur with or without the `/clr` compiler option.  
  
```cpp  
// abstract_keyword_2.cpp  
class X abstract {  
public:  
   virtual void f() {}  
};  
  
int main() {  
   X * MyX = new X; // C3622: 'X': a class declared as 'abstract'  
                    // cannot be instantiated. See declaration of 'X'}  
```  
  
 The following code example generates an error because function `f` includes a definition but is marked **abstract**. The final statement in the example shows that declaring an abstract virtual function is equivalent to declaring a pure virtual function.  
  
```cpp  
// abstract_keyword_3.cpp  
// compile with: /clr  
ref class X {  
public:  
   virtual void f() abstract {}   // C3634  
   virtual void g() = 0 {}   // C3634  
};  
```  
  
## See Also  
 [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md)