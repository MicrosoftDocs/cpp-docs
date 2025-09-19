---
title: "Compiler Error C2991"
description: "Learn more about: Compiler Error C2991"
ms.date: 11/04/2016
f1_keywords: ["C2991"]
helpviewer_keywords: ["C2991"]
---
# Compiler Error C2991

> redefinition of type parameter 'parameter'

## Remarks

There was a type conflict between two generic or template definitions of `parameter`. When defining multiple generic or template parameters, you must use equivalent types.

## Examples

The following example generates C2991:

```cpp
// C2991.cpp
// compile with: /c
template<class T, class T> struct TC {};   // C2991
// try the following line instead
// template<class T, class T2> struct TC {};
```

C2991 can also occur when using generics:

```cpp
// C2991b.cpp
// compile with: /clr /c
generic<class T,class T> ref struct GC {};   // C2991
// try the following line instead
// generic<class T,class T2> ref struct GC {};
```
