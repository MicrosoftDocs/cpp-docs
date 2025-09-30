---
title: "Compiler Error C2933"
description: "Learn more about: Compiler Error C2933"
ms.date: 06/01/2022
f1_keywords: ["C2933"]
helpviewer_keywords: ["C2933"]
---
# Compiler Error C2933

> '*class*' : type-class-id redefined as a typedef member of '*identifier*'

## Remarks

You can't use a generic or template class as a **`typedef`** member.

This error is obsolete in Visual Studio 2022 and later versions.

## Examples

The following example generates C2933:

```cpp
// C2933.cpp
// compile with: /c
template<class T> struct TC { };
struct MyStruct {
   typedef int TC<int>;   // C2933
};

struct TC2 { };
struct MyStruct2 {
   typedef int TC2;
};
```

C2933 can also occur when using generics:

```cpp
// C2933b.cpp
// compile with: /clr /c
generic<class T> ref struct GC { };
struct MyStruct {
   typedef int GC<int>;   // C2933
};

ref struct GC2 { };
struct MyStruct2 {
   typedef int GC2;
};
```
