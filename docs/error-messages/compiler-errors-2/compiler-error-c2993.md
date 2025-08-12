---
description: "Learn more about: Compiler Error C2993"
title: "Compiler Error C2993"
ms.date: "10/03/2023"
f1_keywords: ["C2993"]
helpviewer_keywords: ["C2993"]
---
# Compiler Error C2993

> 'identifier' : illegal type for non-type template parameter 'parameter'

- Prior to C++20, you cannot declare a template with a structure, class, or union argument. Pointers can be used in place of these types as template parameters.
- Since C++20, structure, class, or unions *can* be used as non-type template parameters. A non-type template parameter can't be a rvalue reference type or a parameter pack of rvalue types.

The following sample generates C2993:

```cpp
// compile with: /c and /std:c++17
template <int&& I>   // C2993
struct S1 {};

template <int&&... Is>   // C2993
struct S2 {};
```

Before MSVC 19.26, the following code emitted C2993. It now emits C7582:

```cpp
// compile with: /c /std:c++17
struct MyStruct {};

template <class T, MyStruct S>   // Was C2993 prior to MSVC 19.26. Now emits C7582.
class MyClass1 {};

template <class T, MyStruct* S>   // OK
class MyClass2 {};
```

With C++17 and earlier, you can't have floating point non-type template parameters. Since C++20, floating point non-type template parameters are allowed. Use a function argument to pass the floating point non-type template parameter to function templates.

Before MSVC 19.26, the following code emitted C2993. It now emits C7582:

```cpp
// C2993b.cpp
// compile with: /c /std:c++17
template<class T, float F>   // Was C2993 prior to MSVC 19.26. Now emits C7592
void func1(T t) {}

template<class T>   // OK
void func2(T t, float F) {}
```
