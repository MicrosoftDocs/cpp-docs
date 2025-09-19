---
title: "Compiler Error C2632"
description: "Learn more about: Compiler Error C2632"
ms.date: 11/04/2016
f1_keywords: ["C2632"]
helpviewer_keywords: ["C2632"]
---
# Compiler Error C2632

> 'type1' followed by 'type2' is illegal

## Remarks

This error can be caused if there is missing code between two type specifiers.

## Examples

The following example generates C2632:

```cpp
// C2632.cpp
int float i;   // C2632
```

This error can also be generated as a result of compiler conformance work that was done for Visual Studio .NET 2003. **`bool`** is now a proper type. In previous versions, **`bool`** was a typedef, and you could create identifiers with that name.

The following example generates C2632:

```cpp
// C2632_2.cpp
// compile with: /LD
void f(int bool);   // C2632
```

To resolve this error so that the code is valid in both the Visual Studio .NET 2003 and Visual Studio .NET versions of Visual C++, rename the identifier.
