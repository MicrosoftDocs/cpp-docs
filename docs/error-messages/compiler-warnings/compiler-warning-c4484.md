---
description: "Learn more about: Compiler Warning C4484"
title: "Compiler Warning C4484"
ms.date: "11/04/2016"
f1_keywords: ["C4484"]
helpviewer_keywords: ["C4484"]
ms.assetid: 3d30e5b3-2297-45b7-a37a-1360056fdd0e
---
# Compiler Warning C4484

'override_function' : matches base ref class method 'base_class_function', but is not marked 'virtual', 'new' or 'override'; 'new' (and not 'virtual') is assumed

When compiling with **/clr**, the compiler will not implicitly override a base class function, which means the function will get a new slot in the vtable. To resolve, explicitly specify whether a function is an override.

For more information, see:

- [/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md)

- [override](../../extensions/override-cpp-component-extensions.md)

- [new (new slot in vtable)](../../extensions/new-new-slot-in-vtable-cpp-component-extensions.md)

C4484 is always issued as an error. Use the [warning](../../preprocessor/warning.md) pragma to suppress C4484.

## Example

The following sample generates C4484.

```cpp
// C4484.cpp
// compile with: /clr
ref struct A {
   virtual void Test() {}
};

ref struct B : A {
   void Test() {}   // C4484
};

// OK
ref struct C {
   virtual void Test() {}
   virtual void Test2() {}
};

ref struct D : C {
   virtual void Test() new {}
   virtual void Test2() override {}
};
```
