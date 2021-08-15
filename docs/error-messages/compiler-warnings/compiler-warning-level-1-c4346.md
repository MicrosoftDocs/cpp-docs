---
description: "Learn more about: Compiler Warning (level 1) C4346"
title: "Compiler Warning (level 1) C4346"
ms.date: "11/04/2016"
f1_keywords: ["C4346"]
helpviewer_keywords: ["C4346"]
ms.assetid: 68ee562d-cca9-4a2a-9a1b-14ad1a1e7396
---
# Compiler Warning (level 1) C4346

'name' : dependent name is not a type

The [typename](../../cpp/typename.md) keyword is required if a dependent name is to be treated as a type. For code that works the same in all versions of Visual C++, add **`typename`** to the declaration.

The following sample generates C4346:

```cpp
// C4346.cpp
// compile with: /WX /LD
template<class T>
struct C {
   T::X* x;   // C4346
   // try the following line instead
   // typename T::X* x;
};
```

The following samples shows other examples where the **`typename`** keyword is required:

```cpp
// C4346b.cpp
// compile with: /LD /W1
template<class T>
const typename T::X& f(typename T::Z* p);   // Required in both places

template<class T, int N>
struct L{};

template<class T>
struct M : public L<typename T::Type, T::Value>
{   // required on type argument, not on non-type argument
   typedef typename T::X   Type;
   Type f();   // OK: "Type" is a type-specifer
   typename T::X g();   // typename required
   operator typename T::Z();   // typename required
};
```

and this,

```cpp
// C4346c.cpp
// compile with: /LD /WX
struct Y {
   typedef int Y_t;
};

template<class T>
struct A {
   typedef Y A_t;
};

template<class T>
struct B {
   typedef /*typename*/ A<T>::A_t B_t;   // C4346 typename needed here
   typedef /*typename*/ B_t::Y_t  B_t2;   // typename also needed here
};
```
