---
description: "Learn more about: Compiler Warning (level 2) C4250"
title: "Compiler Warning (level 2) C4250"
ms.date: "11/04/2016"
f1_keywords: ["C4250"]
helpviewer_keywords: ["C4250"]
ms.assetid: d47f7249-6b5a-414b-b2d4-56e5d246a782
---
# Compiler Warning (level 2) C4250

'class1' : inherits 'class2::member' via dominance

Two or more members have the same name. The one in `class2` is inherited because it is a base class for the other classes that contained this member.

To suppress C4250, use the [warning](../../preprocessor/warning.md) pragma.

Because a virtual base class is shared among multiple derived classes, a name in a derived class dominates a name in a base class. For example, given the following class hierarchy, there are two definitions of func inherited within diamond: the vbc::func() instance through the weak class, and the dominant::func() through the dominant class. An unqualified call of func() through a diamond class object, always calls the dominate::func() instance.  If the weak class were to introduce an instance of func(), neither definition would dominate, and the call would be flagged as ambiguous.

## Examples

```cpp
// C4250.cpp
// compile with: /c /W2
#include <stdio.h>
struct vbc {
   virtual void func() { printf("vbc::func\n"); }
};

struct weak : public virtual vbc {};

struct dominant : public virtual vbc {
   void func() { printf("dominant::func\n"); }
};

struct diamond : public weak, public dominant {};

int main() {
   diamond d;
   d.func();   // C4250
}
```

The following sample generates C4250.

```cpp
// C4250_b.cpp
// compile with: /W2 /EHsc
#include <iostream>
using namespace std;
class A {
public:
   virtual operator int () {
      return 2;
   }
};

class B : virtual public A {
public:
   virtual operator int () {
      return 3;
   }
};

class C : virtual public A {};

class E : public B, public C {};   // C4250

int main() {
   E eObject;
   cout << eObject.operator int() << endl;
}
```

This sample shows a more complex situation. The following sample generates C4250.

```cpp
// C4250_c.cpp
// compile with: /W2 /EHsc
#include <iostream>
using namespace std;

class V {
public:
   virtual int f() {
      return 1024;
   }
};

class B : virtual public V {
public:
   int b() {
      return f(); // B::b() calls V::f()
   }
};

class M : virtual public V {
public:
   int f() {
      return 7;
   }
};

// because of dominance, f() is M::f() inside D,
// changing the meaning of B::b's f() call inside a D
class D : public B, public M {};   // C4250

int main() {
   D d;
   cout << "value is: " << d.b();   // invokes M::f()
}
```
