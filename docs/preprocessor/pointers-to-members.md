---
description: "Learn more about: pointers_to_members pragma"
title: "pointers_to_members pragma"
ms.date: "08/29/2019"
f1_keywords: ["pointers_to_members_CPP", "vc-pragma.pointers_to_members"]
helpviewer_keywords: ["class members, pointers to", "pragmas, pointers_to_members", "members, pointers to", "pointers_to_members pragma"]
ms.assetid: 8325428c-c90a-4aed-9e82-cb1dda23f4ca
---
# pointers_to_members pragma

**C++ Specific**

Specifies whether a pointer to a class member can be declared before its associated class definition. Used to control the pointer size, and the code required to interpret the pointer.

## Syntax

> **#pragma pointers_to_members(** *pointer-declaration* [ **,** *most-general-representation* ] )

## Remarks

You can place a **pointers_to_members** pragma in your source file as an alternative to using the [/vmb or /vmg](../build/reference/vmb-vmg-representation-method.md) compiler options or the [inheritance keywords](../cpp/inheritance-keywords.md).

The *pointer-declaration* argument specifies whether you've declared a pointer to a member before or after the associated function definition. The *pointer-declaration* argument is one of the following two symbols:

| Argument | Comments |
|--------------|--------------|
| **full_generality** | Generates safe, sometimes nonoptimal code. You use **full_generality** if any pointer to a member is declared before the associated class definition. This argument always uses the pointer representation specified by the *most-general-representation* argument. Equivalent to /vmg. |
| **best_case** | Generates safe, optimal code using best-case representation for all pointers to members. Requires defining the class before declaring a pointer to a member of the class. The default is **best_case**. |

The *most-general-representation* argument specifies the smallest pointer representation that the compiler can safely use to reference any pointer to a member of a class in a translation unit. The argument can be one of these values:

| Argument | Comments |
|--------------|--------------|
| **single_inheritance** | The most general representation is single-inheritance, pointer to a member function. Causes an error if the inheritance model of a class definition for which a pointer to a member is declared is ever either multiple or virtual. |
| **multiple_inheritance** | The most general representation is multiple-inheritance, pointer to a member function. Causes an error if the inheritance model of a class definition for which a pointer to a member is declared is virtual. |
| **virtual_inheritance** | The most general representation is virtual-inheritance, pointer to a member function. Never causes an error. **virtual_inheritance** is the default argument when `#pragma pointers_to_members(full_generality)` is used. |

> [!CAUTION]
> We advise you to put the **pointers_to_members** pragma only in the source code file that you want to affect, and only after any `#include` directives. This practice lessens the risk that the pragma will affect other files, and that you will accidentally specify multiple definitions for the same variable, function, or class name.

## Example

```cpp
//   Specify single-inheritance only
#pragma pointers_to_members( full_generality, single_inheritance )
```

**END C++ Specific**

## See also

[Pragma directives and the __pragma keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
