---
description: "Learn more about: typename"
title: "typename"
ms.date: 09/27/2022
f1_keywords: ["typename_cpp"]
helpviewer_keywords: ["typename template specifier"]
ms.assetid: 52e1d901-220d-4f0d-ab43-dae7e05fb491
---
# `typename`

In template definitions, **`typename`** provides a hint to the compiler that an unknown identifier is a type. In template parameter lists, it's used to specify a type parameter.

## Syntax

> **`typename`** *`identifier`***`;`**

## Remarks

The **`typename`** keyword must be used if a name in a template definition is a qualified name that is dependent on a template argument; it's optional if the qualified name isn't dependent. For more information, see [Templates and Name Resolution](../cpp/templates-and-name-resolution.md).

**`typename`** can be used by any type anywhere in a template declaration or definition. It isn't allowed in the base class list, unless as a template argument to a template base class.

```cpp
template <class T>
class C1 : typename T::InnerType // Error - typename not allowed.
{};
template <class T>
class C2 : A<typename T::InnerType>  // typename OK.
{};
```

The **`typename`** keyword can also be used in place of **`class`** in template parameter lists. For example, the following statements are semantically equivalent:

```cpp
template<class T1, class T2>...
template<typename T1, typename T2>...
```

## Example

```cpp
// typename.cpp
template<class T> class X
{
   typename T::Y m_y;   // treat Y as a type
};

int main()
{
}
```

## See also

[Templates](../cpp/templates-cpp.md)\
[Keywords](../cpp/keywords-cpp.md)
