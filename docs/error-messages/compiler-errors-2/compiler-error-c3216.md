---
title: "Compiler Error C3216"
description: "Learn more about: Compiler Error C3216"
ms.date: 11/04/2016
f1_keywords: ["C3216"]
helpviewer_keywords: ["C3216"]
---
# Compiler Error C3216

> constraint must be a generic parameter, not 'type'

## Remarks

A constraint was ill formed.

## Example

The following example generates C3216:

```cpp
// C3216.cpp
// compile with: /clr
interface struct A {};

generic <class T>
where F : A   // C3216
// Try the following line instead:
// where T : A    // C3216
ref class C {};
```

The following example demonstrates a possible resolution:

```cpp
// C3216b.cpp
// compile with: /clr /c
interface struct A {};

generic <class T>
where T : A
ref class C {};
```
