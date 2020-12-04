---
description: "Learn more about: How to: Define an Interface Static Constructor (C++/CLI)"
title: "How to: Define an Interface Static Constructor (C++/CLI)"
ms.date: "11/04/2016"
helpviewer_keywords: ["constructors [C++]", "static constructors, interface", "interface static constructor"]
ms.assetid: 1f031cb2-e94f-43dc-819b-44cf2faaaa49
---
# How to: Define an Interface Static Constructor (C++/CLI)

An interface can have a static constructor, which can be used to initialize static data members.  A static constructor will be called at most once, and will be called before the first time a static interface member is accessed.

## Example

```cpp
// mcppv2_interface_class2.cpp
// compile with: /clr
using namespace System;

interface struct MyInterface {
   static int i;
   static void Test() {
      Console::WriteLine(i);
   }

   static MyInterface() {
      Console::WriteLine("in MyInterface static constructor");
      i = 99;
   }
};

ref class MyClass : public MyInterface {};

int main() {
   MyInterface::Test();
   MyClass::MyInterface::Test();

   MyInterface ^ mi = gcnew MyClass;
   mi->Test();
}
```

```Output
in MyInterface static constructor
99
99
99
```

## See also

[interface class](../extensions/interface-class-cpp-component-extensions.md)
