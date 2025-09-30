---
title: "Compiler Error C3215"
description: "Learn more about: Compiler Error C3215"
ms.date: 11/04/2016
f1_keywords: ["C3215"]
helpviewer_keywords: ["C3215"]
---
# Compiler Error C3215

> 'type1' : generic type parameter already constrained by 'type2'

## Remarks

A constraint was specified more than once.

For more information on generics, see [Generics](../../extensions/generics-cpp-component-extensions.md).

## Example

The following example generates C3215:

```cpp
// C3215.cpp
// compile with: /clr
interface struct A {};

generic <class T>
where T : A,A
ref class C {};   // C3215
```

Possible resolution:

```cpp
// C3215b.cpp
// compile with: /clr /c
interface struct A {};

generic <class T>
where T : A
ref class C {};
```
