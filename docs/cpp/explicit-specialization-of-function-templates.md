---
description: "Learn more about: Explicit Specialization of Function Templates"
title: "Explicit Specialization of Function Templates"
ms.date: "11/04/2016"
helpviewer_keywords: ["overriding, functions", "function templates, specialization", "explicit specialization of function templates", "declaring functions [C++], specialization of function template", "specialization of function templates"]
ms.assetid: eb0fcb73-eaed-42a1-9b83-14b055a34bf8
---
# Explicit Specialization of Function Templates

With a function template, you can define special behavior for a specific type by providing an explicit specialization (override) of the function template for that type. For example:

```cpp
template<> void MySwap(double a, double b);
```

This declaration enables you to define a different function for **`double`** variables. Like non-template functions, standard type conversions (such as promoting a variable of type **`float`** to **`double`**) are applied.

## Example

```cpp
// explicit_specialization.cpp
template<class T> void f(T t)
{
};

// Explicit specialization of f with 'char' with the
// template argument explicitly specified:
//
template<> void f<char>(char c)
{
}

// Explicit specialization of f with 'double' with the
// template argument deduced:
//
template<> void f(double d)
{
}
int main()
{
}
```

## See also

[Function Templates](../cpp/function-templates.md)
