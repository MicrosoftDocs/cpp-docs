---
description: "Learn more about: Compiler Error C2920"
title: "Compiler Error C2920"
ms.date: "11/04/2016"
f1_keywords: ["C2920"]
helpviewer_keywords: ["C2920"]
ms.assetid: 0a4cb2de-00a0-4209-8160-c7ce6ed7d9ab
---
# Compiler Error C2920

redefinition : 'class' : class template or generic has already been declared as 'type'

A generic or template class has multiple declarations, which are not equivalent. To fix this error, use different names for different types, or remove the redefinition of the type name.

The following sample generates C2920 and shows how to fix it:

```cpp
// C2920.cpp
// compile with: /c
typedef int TC1;
template <class T>
struct TC1 {};   // C2920
struct TC2 {};   // OK - fix by using a different name
```

C2920 can also occur when using generics:

```cpp
// C2920b.cpp
// compile with: /clr /c
typedef int GC1;
generic <class T>
ref struct GC1 {};   // C2920
ref struct GC2 {};   // OK - fix by using a different name
```
