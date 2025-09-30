---
title: "Compiler Error C3226"
description: "Learn more about: Compiler Error C3226"
ms.date: 11/04/2016
f1_keywords: ["C3226"]
helpviewer_keywords: ["C3226"]
---
# Compiler Error C3226

> A template declaration is not allowed inside a generic declaration

## Remarks

Use a generic declaration inside a generic class.

## Example

The following example generates C3226:

```cpp
// C3226.cpp
// compile with: /clr
generic <class T>
ref class C {
   template <class T1>   // C3226
   ref struct S1 {};
};
```

The following example demonstrates a possible resolution:

```cpp
// C3226b.cpp
// compile with: /clr /c
generic <class T>
ref class C {
   generic <class T1>
   ref struct S1 {};
};
```
