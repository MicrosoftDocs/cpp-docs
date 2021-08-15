---
description: "Learn more about: Compiler Error C2243"
title: "Compiler Error C2243"
ms.date: "11/04/2016"
f1_keywords: ["C2243"]
helpviewer_keywords: ["C2243"]
ms.assetid: b90065bb-d251-4ba9-8b4c-280ee13fa9c0
---
# Compiler Error C2243

'conversion type' conversion from 'type1' to 'type2' exists, but is inaccessible

Access protection (**`protected`** or **`private`**) prevented conversion from a pointer to a derived class to a pointer to the base class.

The following sample generates C2243:

```cpp
// C2243.cpp
// compile with: /c
class B {};
class D : private B {};
class E : public B {};

D d;
B *p = &d;   // C2243

E e;
B *p2 = &e;
```

Base classes with **`protected`** or **`private`** access are not accessible to clients of the derived class. These levels of access control are used to indicate that the base class is an implementation detail that should be invisible to clients. Use public derivation if you want clients of the derived class to have access to implicit conversion of a derived class pointer to a pointer to the base class.
