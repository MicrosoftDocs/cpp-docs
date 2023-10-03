---
description: "Learn more about: Compiler Error C2993"
title: "Compiler Error C2993"
ms.date: "10/03/2023"
f1_keywords: ["C2993"]
helpviewer_keywords: ["C2993"]
ms.assetid: 4ffd2b78-654b-46aa-95a6-b62101cf91c8
---
# Compiler Error C2993

'identifier' : illegal type for non-type template parameter 'parameter'

You cannot declare a template with a structure, class or union argument. However, pointers can be used in place of those types as template parameters. Since C++20, structure, class or unions can be used as non-type template parameters.

The following sample generates C2993:

```cpp
// C2993.cpp
// compile with: /c /std:c++17
struct MyStruct {};

template <class T, MyStruct S>   // C2993
class MyClass1 {};

template <class T, MyStruct* S>   // OK
class MyClass2 {};
```

> [!NOTE]
> The sample above no longer emits C2993 since MSVC v19.26 and instead shows C7592.

With C++17 and earlier, you cannot have floating point non-type template parameters. Since C++20, floating point non-type template parameters are allowed as with literal class types.

If it is a function template, use a function argument to pass in the floating point non-type template parameter.

```cpp
// C2993b.cpp
// compile with: /c /std:c++17
template<class T, float F>   // C2993
void func1(T t) {}

template<class T>   // OK
void func2(T t, float F) {}
```

> [!NOTE]
> The sample above no longer emits C2993 since MSVC v19.26 and instead shows C7592.

Non-type template parameters cannot be of rvalue reference type. Similarly, a parameter pack of such types are not allowed.

```cpp
// C2993c.cpp
// compile with: /c
template <int&& I>   // C2993
struct S1 {};

template <int&&... Is>   // C2993
struct S2 {};
```
