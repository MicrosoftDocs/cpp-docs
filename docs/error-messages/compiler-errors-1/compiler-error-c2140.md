---
description: "Learn more about: Compiler Error C2140"
title: "Compiler Error C2140"
ms.date: "11/04/2016"
f1_keywords: ["C2140"]
helpviewer_keywords: ["C2140"]
ms.assetid: d44a0500-002c-4632-9e5e-c71c3a473ec4
---
# Compiler Error C2140

'type' : a type that is dependent on a generic type parameter is not allowed as an argument to compiler intrinsic type trait 'trait'

An invalid type specifier was passed to a type trait.

For more information, see [Compiler Support for Type Traits](../../extensions/compiler-support-for-type-traits-cpp-component-extensions.md).

## Example

The following sample generates C2140.

```cpp
// C2140.cpp
// compile with: /clr /c
template <class T>

struct is_polymorphic {
   static const bool value = __is_polymorphic(T);
};

class x {};

generic <class T>
ref class C {
   void f() {
      System::Console::WriteLine(__is_polymorphic(T));   // C2140
      System::Console::WriteLine(is_polymorphic<T>::value);   // C2140

      System::Console::WriteLine(__is_polymorphic(x));   // OK
      System::Console::WriteLine(is_polymorphic<x>::value);   // OK
   }
};
```
