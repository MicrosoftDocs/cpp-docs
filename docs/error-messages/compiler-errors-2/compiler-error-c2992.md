---
description: "Learn more about: Compiler Error C2992"
title: "Compiler Error C2992"
ms.date: "11/04/2016"
f1_keywords: ["C2992"]
helpviewer_keywords: ["C2992"]
ms.assetid: 01b16447-43fe-4e91-9a5a-af884a166a31
---
# Compiler Error C2992

'class' : invalid or missing type parameter list

The class is preceded by a **`template`** or **generic** keyword with missing or invalid parameters.

## Example

The following sample generates C2992:

```cpp
// C2992.cpp
// compile with: /c
template <class T>
struct TC1 {
   template <class U>
   struct TC2;
};

template <class T>   struct TC1<T>::TC2 {};   // C2992

// OK
template <class T>
template <class U>
struct TC1<T>::TC2 {};
// C2992 can also occur when using generics:
// C2992c.cpp
// compile with: /clr /c
generic <class T>
ref struct GC1 {
   generic <class U>
   ref struct GC2;
};

generic <class T> ref struct GC1<T>::GC2 {};   // C2992

// OK
generic <class T>
generic <class U>
ref struct GC1<T>::GC2 {};
```
