---
description: "Learn more about: Compiler Warning (levels 2 and 4) C4200"
title: "Compiler Warning (levels 2 and 4) C4200"
ms.date: "11/04/2016"
f1_keywords: ["C4200"]
helpviewer_keywords: ["C4200"]
ms.assetid: e44d6073-937f-42b7-acc1-65e802b475c6
---
# Compiler Warning (levels 2 and 4) C4200

nonstandard extension used : zero-sized array in struct/union

Indicates that a structure or union contains an array that has zero size.

Declaration of a zero-sized array is a Microsoft extension. This causes a Level-2 warning when a C++ file is compiled and a Level-4 warning when a C file is compiled. C++ compilation also gives this warning: "Cannot generate copy-ctor or copy-assignment operator when UDT contains a zero-sized array." This example generates warning C4200:

```cpp
// C4200.cpp
// compile by using: cl /W4 c4200.cpp
struct A {
    int a[0];  // C4200
};
int main() {
}
```

This non-standard extension is often used to interface code with external data structures that have a variable length. If this scenario applies to your code, you can disable the warning:

## Example

```cpp
// C4200b.cpp
// compile by using: cl /W4 c4200a.cpp
#pragma warning(disable : 4200)
struct A {
    int a[0];
};
int main() {
}
```
