---
description: "Learn more about: Compiler Warning (level 4) C4471"
title: "Compiler Warning (level 4) C4471"
ms.date: "04/24/2017"
f1_keywords: ["C4471"]
helpviewer_keywords: ["C4471"]
ms.assetid: ccfd8bd5-bc1b-4be7-a6ea-0e3a7add6607
---
# Compiler Warning (level 4) C4471

'*enumeration*': a forward declaration of an unscoped enumeration must have an underlying type (int assumed)

A forward declaration of an unscoped enumeration was found without a specifier for the underlying type. By default, Visual C++ assumes **`int`** is the underlying type for an enumeration. This can cause issues if a different type is used in the enumeration definition, for example, if a different explicit type is specified, or if a different type is implicitly set by an initializer. You may also have portability issues; other compilers do not assume **`int`** is the underlying type of an enumeration.

This warning is off by default; you can use /Wall or /w*N*4471 to enable it on the command line, or use #pragma [warning](../../preprocessor/warning.md) in your source file.

## Examples

In some cases, this warning is spurious. If a forward declaration for an enumeration appears after the definition, this warning may fire. For example, this code is valid, even though it may cause C4471:

```cpp
// C4471a.cpp
// Compile with: cl /c /w14471 C4471a.cpp
enum Example { item = 0x80000000UL };
enum Example;    // Spurious C4471
// ...
```

In general, it's safe to use the full definition for an unscoped enumeration instead of a forward declaration. You can put the definition in a header file and include it in source files that refer to it. This works in code written for C++98 and later. We recommend this solution for portability and ease of maintenance.

```cpp
// C4471b.cpp
// Compile with: cl /c /w14471 C4471b.cpp
enum Example;    // C4471
// To fix, replace the line above with the enumeration definition:
// enum Example { item = 0x80000000UL };
// ...
```

In C++11, you can add an explicit type to an unscoped enumeration and to its forward declaration. We recommend this solution only if complex header inclusion logic prevents use of the definition instead of a forward declaration. This solution can lead to a maintenance issue: if you change the underlying type used for the enumeration definition, you must also change all of the forward declarations to match, or you may have silent errors in your code. You can put the forward declaration into a header file to minimize this issue.

```cpp
// C4471c.cpp
// Client code for enumeration defined in C4471d.cpp
// Compile with: cl /c /w14471 C4471c.cpp C4471d.cpp
enum Example;    // C4471, int assumed
// To fix, replace the lines above with the forward declarations:
// enum Example : unsigned;
// ...
```

```cpp
// C4471d.cpp
// Definition for enumeration used in C4471c.cpp
// Compile with: cl /c /w14471 C4471c.cpp C4471d.cpp
enum Example : unsigned { item = 0x80000000 }; // explicit type
// ...
```

If you specify an explicit type for an enumeration, we recommend you also enable warning [C4369](compiler-warning-level-1-C4369.md), which is on by default. This identifies cases where an enumeration item requires a different type than the explicitly specified type.

You can change your code to use a scoped enum, a feature that is new in C++11. Both the definition and any client code that uses the enumeration type must be changed to use a scoped enum. We recommend you use a scoped enum if you have issues with namespace pollution, as the names of defined enumeration items are limited to the scope of the enum. Another feature of a scoped enum is that its members can't be implicitly converted to another integral or enumeration type, which can be a source of subtle bugs.

```cpp
// C4471e.cpp
// Client code for scoped enumeration defined in C4471f.cpp
// Compile with: cl /c /w14471 C4471e.cpp C4471f.cpp
enum Example;    // C4471
// To fix, replace the line above with the forward declaration:
// enum class Example;
// ...
```

```cpp
// C4471f.cpp
// Definition for scoped enumeration used in C4471e.cpp
// Compile with: cl /c /w14471 C4471e.cpp C4471f.cpp
enum class Example { item = 0 };
// ...
```
