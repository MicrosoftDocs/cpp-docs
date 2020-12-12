---
description: "Learn more about: Compiler Error C2259"
title: "Compiler Error C2259"
ms.date: "11/04/2016"
f1_keywords: ["C2259"]
helpviewer_keywords: ["C2259"]
ms.assetid: e458236f-bdea-4786-9aa6-a98d8bffa5f4
---
# Compiler Error C2259

'class' : cannot instantiate abstract class

Code declares an instance of an abstract class or structure.

You cannot instantiate a class or structure with one or more pure virtual functions. To instantiate objects of a derived class, the derived class must override each pure virtual function.

For more information, see [Implicitly abstract classes](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Implicitly_abstract_classes).

The following sample generates C2259:

```cpp
// C2259.cpp
// compile with: /c
class V {
public:
   void virtual func() = 0;
};
class A : public V {};
class B : public V {
public:
   void func();
};
V v;  // C2259, V is an abstract class
A a;  // C2259, A inherits func() as pure virtual
B b;  // OK, B defines func()
```

Whenever you derive from an interface and implement the interface methods in the derived class with access permissions other than public, you may receive C2259.  This occurs because the compiler expects the interface methods implemented in the derived class to have public access. When you implement the member functions for an interface with more restrictive access permissions, the compiler does not consider them to be implementations for the interface methods defined in the interface, which in turn makes the derived class an abstract class.

There are two possible workarounds for the problem:

- Make the access permissions public for the implemented methods.

- Use the scope resolution operator for the interface methods implemented in the derived class to qualify the implemented method name with the name of the interface.

C2259 can also occur as a result of conformance work that was done in Visual Studio 2005, **/Zc:wchar_t** is now on by default. In this situation, C2599 can be resolved either by compiling with **/Zc:wchar_t-**, to get the behavior from previous versions, or preferably, by updating your types so they are compatible. For more information, see [/Zc:wchar_t (wchar_t Is Native Type)](../../build/reference/zc-wchar-t-wchar-t-is-native-type.md).

The following sample generates C2259:

```cpp
// C2259b.cpp
// compile with: /c
#include <windows.h>

class MyClass {
public:
   // WCHAR now typedef'ed to wchar_t
   virtual void func(WCHAR*) = 0;
};

class MyClass2 : MyClass {
public:
   void func(unsigned short*);
};

MyClass2 x;   // C2259

// OK
class MyClass3 {
public:
   virtual void func(WCHAR*) = 0;
   virtual void func2(wchar_t*) = 0;
   virtual void func3(unsigned short*) = 0;
};

class MyClass4 : MyClass3 {
public:
   void func(WCHAR*) {}
   void func2(wchar_t*) {}
   void func3(unsigned short*) {}
};

MyClass4 y;
```

The following sample generates C2259:

```cpp
// C2259c.cpp
// compile with: /clr
interface class MyInterface {
   void MyMethod();
};

ref class MyDerivedClass: public MyInterface {
private:
   // Uncomment the following line to resolve.
   // public:
   void MyMethod(){}
   // or the following line
   // void MyInterface::MyMethod() {};
};

int main() {
   MyDerivedClass^ instance = gcnew MyDerivedClass; // C2259
}
```
