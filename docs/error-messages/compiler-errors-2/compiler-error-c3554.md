---
title: "Compiler Error C3554"
description: "Learn more about: Compiler Error C3554"
ms.date: 11/04/2016
f1_keywords: ["C3554"]
helpviewer_keywords: ["C3554"]
---
# Compiler Error C3554

> 'decltype' cannot be combined with any other type-specifier

You cannot qualify the `decltype()` keyword with any type specifier. For example, the following code fragment yields error C3554.

```cpp
int x;
unsigned decltype(x); // C3554
```
