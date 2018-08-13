---
title: "sealed  (C++ Component Extensions) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["sealed_cpp", "sealed"]
dev_langs: ["C++"]
helpviewer_keywords: ["sealed keyword [C++]"]
ms.assetid: 3d0d688a-41aa-45f5-a25a-65c44206521e
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# sealed  (C++ Component Extensions)
**sealed** is a context-sensitive keyword for ref classes that indicates that a virtual member cannot be overridden, or that a type cannot be used as a base type.  
  
> [!NOTE]
>  The ISO C++11 Standard language has the [final](../cpp/final-specifier.md) keyword, which is supported in Visual Studio. Use **final** on standard classes, and **sealed** on ref classes.  
  
## All Runtimes  
  
## Syntax
  
```cpp  
ref class identifier sealed {...};  
virtual return-type identifier() sealed {...};  
```  
  
### Parameters  
 *identifier*  
 The name of the function or class.  
  
 *return-type*  
 The type that's returned by a function.  
  
## Remarks  
  
 In the first syntax example, a class is sealed. In the second example, a virtual function is sealed.  
  
 The **sealed** keyword is valid for native targets, and also for the Windows Runtime and the common language runtime (CLR). For more information, see [Override Specifiers and Native Compilations](../dotnet/how-to-declare-override-specifiers-in-native-compilations-cpp-cli.md).  
  
 You can detect at compile time whether a type is sealed by using the `__is_sealed(type)` type trait. For more information, see [Compiler Support for Type Traits](../windows/compiler-support-for-type-traits-cpp-component-extensions.md).  
  
 **sealed** is a context-sensitive keyword.  For more information, see [Context-Sensitive Keywords](../windows/context-sensitive-keywords-cpp-component-extensions.md).  
  
## Windows Runtime  
 See [Ref classes and structs](http://msdn.microsoft.com/library/windows/apps/hh699870.aspx).  
  
### Requirements  
 Compiler option: `/ZW`  
  
## Common Language Runtime  
 (There are no remarks for this language feature that apply to only the common language runtime.)  
  
### Requirements  
 Compiler option: `/clr`  
  
### Examples  
 This following code example shows the effect of **sealed** on a virtual member.  
  
```cpp  
// sealed_keyword.cpp  
// compile with: /clr  
interface struct I1 {  
   virtual void f();  
   virtual void g();  
};  
  
ref class X : I1 {  
public:  
   virtual void f() {  
      System::Console::WriteLine("X::f override of I1::f");  
   }  
  
   virtual void g() sealed {  
      System::Console::WriteLine("X::f override of I1::g");  
   }  
};  
  
ref class Y : public X {  
public:  
   virtual void f() override {  
      System::Console::WriteLine("Y::f override of I1::f");  
   }  
  
   /*  
   // the following override generates a compiler error  
   virtual void g() override {  
      System::Console::WriteLine("Y::g override of I1::g");  
   }    
   */  
};  
  
int main() {  
   I1 ^ MyI = gcnew X;  
   MyI -> f();  
   MyI -> g();  
  
   I1 ^ MyI2 = gcnew Y;  
   MyI2 -> f();  
}  
```  
  
```Output  
X::f override of I1::f  
X::f override of I1::g  
Y::f override of I1::f  
```  
  
 The next code example shows how to mark a class as sealed.  
  
```cpp  
// sealed_keyword_2.cpp  
// compile with: /clr  
interface struct I1 {  
   virtual void f();  
};  
  
ref class X sealed : I1 {  
public:  
   virtual void f() override {}  
};  
  
ref class Y : public X {   // C3246 base class X is sealed  
public:  
   virtual void f() override {}  
};  
```  
  
## See Also  
 [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md)