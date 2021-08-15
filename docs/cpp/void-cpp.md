---
description: "Learn more about: void (C++)"
title: "void (C++)"
ms.date: "11/04/2016"
f1_keywords: ["void_cpp"]
helpviewer_keywords: ["void keyword [C++]", "functions [C++], void", "pointers, void"]
ms.assetid: d203edba-38e6-4056-8b89-011437351057
---
# void (C++)

When used as a function return type, the **`void`** keyword specifies that the function does not return a value. When used for a function's parameter list, **`void`** specifies that the function takes no parameters. When used in the declaration of a pointer, **`void`** specifies that the pointer is "universal."

If a pointer's type is **void\***, the pointer can point to any variable that is not declared with the **`const`** or **`volatile`** keyword. A **void\*** pointer cannot be dereferenced unless it is cast to another type. A **void\*** pointer can be converted into any other type of data pointer.

A **`void`** pointer can point to a function, but not to a class member in C++.

You cannot declare a variable of type **`void`**.

## Example

```cpp
// void.cpp
void vobject;   // C2182
void *pv;   // okay
int *pint; int i;
int main() {
   pv = &i;
   // Cast optional in C required in C++
   pint = (int *)pv;
}
```

## See also

[Keywords](../cpp/keywords-cpp.md)<br/>
[Built-in types](../cpp/fundamental-types-cpp.md)
