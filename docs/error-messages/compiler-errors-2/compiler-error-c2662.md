---
description: "Learn more about: Compiler Error C2662"
title: "Compiler Error C2662"
ms.date: "11/04/2016"
f1_keywords: ["C2662"]
helpviewer_keywords: ["C2662"]
ms.assetid: e172c2a4-f29e-4034-8232-e7dc6f83689f
---
# Compiler Error C2662

'function' : cannot convert 'this' pointer from 'type1' to 'type2'

The compiler could not convert the **`this`** pointer from `type1` to `type2`.

This error can be caused by invoking a non-**`const`** member function on a **`const`** object.  Possible resolutions:

- Remove the **`const`** from the object declaration.

- Add **`const`** to the member function.

The following sample generates C2662:

```cpp
// C2662.cpp
class C {
public:
   void func1();
   void func2() const{}
} const c;

int main() {
   c.func1();   // C2662
   c.func2();   // OK
}
```

When compiling with **/clr**, you cannot call a function on a **`const`** or **`volatile`** qualified managed type. You cannot declare a const member function of a managed class, so you cannot call methods on const managed objects.

```cpp
// C2662_b.cpp
// compile with: /c /clr
ref struct M {
   property M^ Type {
      M^ get() { return this; }
   }

   void operator=(const M %m) {
      M ^ prop = m.Type;   // C2662
   }
};

ref struct N {
   property N^ Type {
      N^ get() { return this; }
   }

   void operator=(N % n) {
      N ^ prop = n.Type;   // OK
   }
};
```

The following sample generates C2662:

```cpp
// C2662_c.cpp
// compile with: /c
// C2662 expected
typedef int ISXVD;
typedef unsigned char BYTE;

class LXBASE {
protected:
    BYTE *m_rgb;
};

class LXISXVD:LXBASE {
public:
   // Delete the following line to resolve.
   ISXVD *PMin() { return (ISXVD *)m_rgb; }

   ISXVD *PMin2() const { return (ISXVD *)m_rgb; };   // OK
};

void F(const LXISXVD *plxisxvd, int iDim) {
   ISXVD isxvd;
   // Delete the following line to resolve.
   isxvd = plxisxvd->PMin()[iDim];

   isxvd = plxisxvd->PMin2()[iDim];
}
```
