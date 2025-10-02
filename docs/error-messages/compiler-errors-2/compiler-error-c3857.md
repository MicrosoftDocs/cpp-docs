---
title: "Compiler Error C3857"
description: "Learn more about: Compiler Error C3857"
ms.date: 11/04/2016
f1_keywords: ["C3857"]
helpviewer_keywords: ["C3857"]
---
# Compiler Error C3857

> 'type': multiple type parameter lists are not allowed

## Remarks

More than one template or generic was specified for the same type, which is not allowed.

## Examples

The following example generates C3857:

```cpp
// C3857.cpp
template <class T, class TT>
template <class T2>    // C3857
struct B {};
```

Possible resolution:

```cpp
// C3857b.cpp
// compile with: /c
template <class T, class TT, class T2>
struct B {};
```

C3857 can also occur when using generics:

```cpp
// C3857c.cpp
// compile with: /clr
generic <typename T>
generic <typename U>
ref class GC;   // C3857
```

Possible resolution:

```cpp
// C3857d.cpp
// compile with: /clr /c
generic <typename U>
ref class GC;
```
