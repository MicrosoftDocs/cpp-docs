---
title: "Compiler Error C3229"
description: "Learn more about: Compiler Error C3229"
ms.date: 11/04/2016
f1_keywords: ["C3229"]
helpviewer_keywords: ["C3229"]
---
# Compiler Error C3229

> 'type' : indirections on a generic type parameter are not allowed

## Remarks

You cannot use generic parameters with `*`, `^`, or `&`.

## Examples

The following example generates C3229.

```cpp
// C3229.cpp
// compile with: /clr /c
generic <class T>
ref class C {
   T^ t;   // C3229
};

// OK
generic <class T>
ref class D {
   T u;
};
```

The following example generates C3229.

```cpp
// C3229_b.cpp
// compile with: /clr /c
generic <class T>   // OK
ref class Utils {
   static void sort(T elems[], size_t size);   // C3229
   static void sort2(T elems, size_t size);   // OK
};
```
