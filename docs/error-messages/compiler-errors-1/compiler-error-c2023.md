---
title: "Compiler Error C2023"
description: "Learn more about: Compiler Error C2023"
ms.date: 08/18/2022
f1_keywords: ["C2023"]
helpviewer_keywords: ["C2023"]
---
# Compiler Error C2023

> '*identifier*': Alignment (*value-1*) different from prior declaration (*value-2*)

## Remarks

The compiler found an alignment specifier for a class type that's different from a previous declaration, or an **`enum`** alignment specifier that's different from the natural alignment of the base type.

To resolve this error, make sure all declarations and definitions of the type use the same alignment value.

## Example

The following example generates C2023:

```cpp
// C2023.cpp
class alignas(2) C;

class alignas(4) C {};   // C2023
```

Possible resolution:

```cpp
// C2023b.cpp
// compile with: /c
class alignas(2) C;

class alignas(2) C {};
```
