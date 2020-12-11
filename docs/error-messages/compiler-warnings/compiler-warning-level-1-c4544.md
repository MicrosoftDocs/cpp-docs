---
description: "Learn more about: Compiler Warning (level 1) C4544"
title: "Compiler Warning (level 1) C4544"
ms.date: "11/04/2016"
f1_keywords: ["C4544"]
helpviewer_keywords: ["C4544"]
ms.assetid: 11ee04df-41ae-435f-af44-881e801315a8
---
# Compiler Warning (level 1) C4544

'declaration': Default template argument ignored on this template declaration

A default template argument was specified in an incorrect location and was ignored. A default template argument for a class template can only be specified in the declaration or definition of the class template and not on a member of the class template.

This sample generates C4545, and the next sample shows how to fix it:

```cpp
// C4544.cpp
// compile with: /W1 /LD
template <class T>
struct S
{
   template <class T1>
      struct S1;
   void f();
};

template <class T=int>
template <class T1>
struct S<T>::S1 {};   // C4544
```

In this example, the default parameter applies to class template `S`:

```cpp
// C4544b.cpp
// compile with: /LD
template <class T = int>
struct S
{
   template <class T1>
      struct S1;
   void f();
};

template <class T>
template <class T1>
struct S<T>::S1 {};
```
