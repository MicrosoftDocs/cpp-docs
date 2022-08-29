---
description: "Learn more about: Compiler Error C2035"
title: "Compiler Error C2035"
ms.date: 08/18/2022
f1_keywords: ["C2035"]
helpviewer_keywords: ["C2035"]
---
# Compiler Error C2035

> a non-virtual destructor with '*accessibility*' accessibility is not allowed for this type\
> a non-virtual destructor must have 'protected private' or 'private' accessibility

A non-virtual Windows Runtime class has an access specifier or **`sealed`** specifier that's not allowed for a non-virtual destructor. For more information, see [Ref classes and structs](../../cppcx/ref-classes-and-structs-c-cx.md).

To fix this error, change the accessibility of the destructor.
