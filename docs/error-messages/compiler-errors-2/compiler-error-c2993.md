---
description: "Learn more about: Compiler Error C2993"
title: "Compiler Error C2993"
ms.date: "11/04/2016"
f1_keywords: ["C2993"]
helpviewer_keywords: ["C2993"]
ms.assetid: 4ffd2b78-654b-46aa-95a6-b62101cf91c8
---
# Compiler Error C2993

'identifier' : illegal type for non-type template parameter 'parameter'

You cannot declare a template with a structure or union argument. Use pointers to pass structures and unions as template parameters.

The following sample generates C2993:

```cpp
// C2993.cpp
// compile with: /c
// C2993 expected
struct MyStruct {
   int a;char b;
};

template <class T, struct MyStruct S>   // C2993

// try the following line instead
// template <class T, struct MyStruct * S>
class CMyClass {};
```

This error will also be generated as a result of compiler conformance work that was done in Visual Studio .NET 2003: floating point non-type template parameters no longer allowed. The C++ standard does not allow floating point non-type template parameters.

If it is a function template, use a function argument to pass in the floating point non-type template parameter (this code will be valid in the Visual Studio .NET 2003 and Visual Studio .NET versions of Visual C++). If it is a class template, there is no easy workaround.

```cpp
// C2993b.cpp
// compile with: /c
template<class T, float f> void func(T) {}   // C2993

// OK
template<class T>   void func2(T, float) {}
```
