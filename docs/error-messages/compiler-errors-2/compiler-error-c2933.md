---
description: "Learn more about: Compiler Error C2933"
title: "Compiler Error C2933"
ms.date: "11/04/2016"
f1_keywords: ["C2933"]
helpviewer_keywords: ["C2933"]
ms.assetid: 394891e3-6b52-4b61-83d2-a1c5125d9bd5
---
# Compiler Error C2933

'class' : type-class-id redefined as a typedef member of 'identifier'

You cannot use a generic or template class as a **`typedef`** member.

The following sample generates C2933:

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
