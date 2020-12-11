---
description: "Learn more about: Compiler Error C3918"
title: "Compiler Error C3918"
ms.date: "11/04/2016"
f1_keywords: ["C3918"]
helpviewer_keywords: ["C3918"]
ms.assetid: a8b3a90a-3fe1-4244-a5ff-a31cdae97d98
---
# Compiler Error C3918

usage requires 'member' to be a data member

C3918 can occur for several reasons related to events.

## Examples

C3918 can occur because a class member is required in the current context. The following sample generates C3918.

```cpp
// C3918.cpp
// compile with: /clr /c
public ref class C {
public:
   System::Object ^ o;
   delegate void Del();

   event Del^ MyEvent {
      void add(Del^ev) {
         if ( MyEvent != nullptr) {}   // C3918
         if ( o != nullptr) {}   // OK
   }
   void remove(Del^){}
   }
};
```

C3918 is also caused if you try to check a trivial event for null (the event name will no longer provide direct access to the backing store delegate for the event).

The following sample generates C3918.

```cpp
// C3918_2.cpp
// compile with: /clr /c
using namespace System;
public delegate int MyDel(int);

interface struct IEFace {
   event MyDel ^ E;
};

ref struct EventSource : public IEFace {
   virtual event MyDel ^ E;
   void Fire_E(int i) {
      if (E)   // C3918
         E(i);
   }
};
```

C3918 can also occur if you incorrectly subscribe to an event. The following sample generates C3918.

```cpp
// C3918_3.cpp
// compile with: /clr /c
using namespace System;

public delegate void del();

public ref class A {
public:
   event del^ e {
      void add(del ^handler ) {
         d += handler;
      }

      void remove(del ^handler) {
         d -= handler;
      }

      void raise() {
         d();
      }
   }

   del^ d;
   void f() {}

   A() {
      e = gcnew del(this, &A::f);   // C3918
      // try the following line instead
      // e += gcnew del(this, &A::f);
      e();
   }
};

int main() {
   A a;
}
```
