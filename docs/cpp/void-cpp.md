---
description: "Learn more about: void (C++)"
title: "void (C++)"
ms.date: 12/13/2022
f1_keywords: ["void_cpp"]
helpviewer_keywords: ["void keyword [C++]", "functions [C++], void", "pointers, void"]
ms.assetid: d203edba-38e6-4056-8b89-011437351057
---
# void (C++)

When used as a function return type, the **`void`** keyword specifies that the function doesn't return a value. When used for a function's parameter list, **`void`** specifies that the function takes no parameters. When used in the declaration of a pointer, **`void`** specifies that the pointer is "universal."

If a pointer's type is `void*`, the pointer can point to any variable that's not declared with the **`const`** or **`volatile`** keyword. A `void*` pointer can't be dereferenced unless it's cast to another type. A `void*` pointer can be converted into any other type of data pointer.

In C++, a **`void`** pointer can point to a free function (a function that's not a member of a class), or to a static member function, but not to a non-static member function.

You can't declare a variable of type **`void`**.

As a matter of style, the C++ Core Guidelines recommend you don't use **`void`** to specify an empty formal parameter list. For more information, see [C++ Core Guidelines NL.25: Don't use `void` as an argument type](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#nl25-dont-use-void-as-an-argument-type).

## Example

```cpp
// void.cpp

void return_nothing()
{
   // A void function can have a return with no argument,
   // or no return statement.
}

void vobject;   // C2182
void *pv;   // okay
int *pint; int i;
int main()
{
   pv = &i;
   // Cast is optional in C, required in C++
   pint = (int *)pv;
}
```

## See also

[Keywords](../cpp/keywords-cpp.md)\
[Built-in types](../cpp/fundamental-types-cpp.md)
