---
title: "Compiler Error C3747"
description: "Learn more about: Compiler Error C3747"
ms.date: 11/04/2016
f1_keywords: ["C3747"]
helpviewer_keywords: ["C3747"]
---
# Compiler Error C3747

> missing default type parameter : parameter param

## Remarks

Generic or template parameters with default values cannot be followed in the parameter list by parameters that do not have default values.

## Example

The following example generates C3747:

```cpp
// C3747.cpp
template <class T1 = int, class T2>   // C3747
struct MyStruct {};
```

Possible resolution:

```cpp
// C3747b.cpp
// compile with: /c
template <class T1, class T2 = int>
struct MyStruct {};
```
