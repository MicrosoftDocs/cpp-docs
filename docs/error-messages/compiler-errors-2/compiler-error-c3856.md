---
description: "Learn more about: Compiler Error C3856"
title: "Compiler Error C3856"
ms.date: "11/04/2016"
f1_keywords: ["C3856"]
helpviewer_keywords: ["C3856"]
ms.assetid: 242d9322-c325-4f20-be58-b2be6da56d60
---
# Compiler Error C3856

'type': class is not a class type

The most common cause for this error is when there are more generic or template parameter lists at the point of definition than there were at the point of declaration.

The following sample generates C3856:

```cpp
// C3856.cpp
template <class T>
struct S {
   template <class T1>
   struct S1;
   void f();
};

template <class T>   // C3856
template <class T1>
template <class T2>  // extra template parameter list in definition
struct S<T>::S1{};
```

Possible resolution:

```cpp
// C3856b.cpp
// compile with: /c
template <class T>
struct S {
   template <class T1>
   struct S1;
   void f();
};

template <class T>
template <class T1>
struct S<T>::S1{};
```

C3856 can also occur when using generics:

```cpp
// C3856c.cpp
// compile with: /clr
generic <class T>
ref struct GS {
   generic <class U>
   ref struct GS2;
};

generic <class T>
generic <class U>
generic <class V>
ref struct GS<T>::GS2 {};   // C3856
```

Possible resolution:

```cpp
// C3856d.cpp
// compile with: /clr /c
generic <class T>
ref struct GS {
   generic <class U>
   ref struct GS2;
};

generic <class T>
generic <class U>
ref struct GS<T>::GS2 {};
```
