---
description: "Learn more about: Compiler Error C2942"
title: "Compiler Error C2942"
ms.date: "11/04/2016"
f1_keywords: ["C2942"]
helpviewer_keywords: ["C2942"]
ms.assetid: 13abf744-8fa1-450d-886d-e5717c04956e
---
# Compiler Error C2942

'class' : type-class-id redefined as a formal argument of a function

You cannot use a generic or template class as a formal argument. You cannot pass an argument directly to the constructor of a generic or template class.

The following sample generates C2942:

```

// C2942.cpp
// compile with: /c
template<class T>
struct TC {};
void f(int TC<int>) {}   // C2942

// OK
struct TC2 {};
void f(TC2 i) {}
```

C2942 can also occur when using generics:

```cpp
// C2942b.cpp
// compile with: /clr /c
generic<class T>
ref struct GC {};
void f(int GC<int>) {}   // C2942
ref struct GC2 { };
void f(int GC2) {}
```
