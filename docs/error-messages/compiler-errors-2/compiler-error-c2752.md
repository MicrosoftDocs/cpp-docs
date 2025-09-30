---
title: "Compiler Error C2752"
description: "Learn more about: Compiler Error C2752"
ms.date: 11/04/2016
f1_keywords: ["C2752"]
helpviewer_keywords: ["C2752"]
---
# Compiler Error C2752

> 'template' : more than one partial specialization matches the template argument list

## Remarks

An instantiation was ambiguous.

## Example

The following example generates C2752:

```cpp
// C2752.cpp
template<class T, class U>
struct A {};

template<class T, class U>
struct A<T*, U> {};

template<class T, class U>
struct A<T,U*> {};

// try the following line instead
// template<class T, class U> struct A<T*,U*> {};

int main() {
   A<char*,int*> a;   // C2752 an instantiation

   // OK
   A<char*,int> a1;
   A<char,int*> a2;
   A<char,int> a3;
}
```
