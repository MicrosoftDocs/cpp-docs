---
description: "Learn more about: Member Access"
title: "Member Access"
ms.date: "11/04/2016"
helpviewer_keywords: ["member-selection operators [C++]", "pointers, smart", "member access, overloaded operators", "operator overloading [C++], member access operators", "smart pointers, definition", "smart pointers"]
ms.assetid: 8c7b2c43-eb92-4d42-9a8e-61aa37d71333
---
# Member Access

Class member access can be controlled by overloading the member access operator (**->**). This operator is considered a unary operator in this usage, and the overloaded operator function must be a class member function. Therefore, the declaration for such a function is:

## Syntax

```
class-type *operator->()
```

## Remarks

where *class-type* is the name of the class to which this operator belongs. The member access operator function must be a nonstatic member function.

This operator is used (often in conjunction with the pointer-dereference operator) to implement "smart pointers" that validate pointers prior to dereference or count usage.

The **.** member access operator cannot be overloaded.

## See also

[Operator Overloading](../cpp/operator-overloading.md)
