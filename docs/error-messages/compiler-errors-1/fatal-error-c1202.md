---
description: "Learn more about: Fatal Error C1202"
title: "Fatal Error C1202"
ms.date: "11/04/2016"
f1_keywords: ["C1202"]
helpviewer_keywords: ["C1202"]
ms.assetid: c859adb8-17a7-4fa1-a1f3-5820b7bf3849
---
# Fatal Error C1202

recursive type or function dependency context too complex

A template definition was recursive or exceeded complexity limits.

## Examples

The following sample generates C1202.

```cpp
// C1202.cpp
// processor: x86 IPF
template<int n>
class Factorial : public Factorial<n-1>  {   // C1202
public:
   operator int () {
      return Factorial <n-1>::operator int () * n;
   }
};
Factorial<7> facSeven;
```

Possible resolution.

```cpp
// C1202b.cpp
// compile with: /c
template<int n>
class Factorial : public Factorial<n-1> {
public:
   operator int () {
      return Factorial <n-1>::operator int () * n;
   }
};

template <>
class Factorial<0> {
public:
   operator int () {
      return 1;
   }
};

Factorial<7> facSeven;
```
