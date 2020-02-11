---
title: "Portability at ABI boundaries"
description: "Flatten C++ interfaces to C calling conventions at binary interface boundaries."
ms.date: "11/19/2019"
ms.topic: "conceptual"
ms.assetid: abbd405e-3038-427c-8c24-e00598f0936a
---
# Portability at ABI boundaries

Use sufficiently portable types and conventions at binary interface boundaries. A "portable type" is a C built-in type or a struct that contains only C built-in types. Class types can only be used when caller and callee agree on layout, calling convention, etc. That's only possible when both are compiled with the same compiler and compiler settings.

## How to flatten a class for C portability

When callers may be compiled with another compiler/language, then "flatten" to an **extern "C"** API with a specific calling convention:

```cpp
// class widget {
//   widget();
//   ~widget();
//   double method( int, gadget& );
// };
extern "C" {        // functions using explicit "this"
   struct widget;   // opaque type (forward declaration only)
   widget* STDCALL widget_create();      // constructor creates new "this"
   void STDCALL widget_destroy(widget*); // destructor consumes "this"
   double STDCALL widget_method(widget*, int, gadget*); // method uses "this"
}
```

## See also

[Welcome back to C++](../cpp/welcome-back-to-cpp-modern-cpp.md)<br/>
[C++ Language Reference](../cpp/cpp-language-reference.md)<br/>
[C++ Standard Library](../standard-library/cpp-standard-library-reference.md)
