---
description: "Learn more about: Compiler Warning (level 1) C4803"
title: "Compiler Warning (level 1) C4803"
ms.date: "11/04/2016"
f1_keywords: ["C4803"]
helpviewer_keywords: ["C4803"]
ms.assetid: 2552f3a6-c418-49f4-98a2-a929857be658
---
# Compiler Warning (level 1) C4803

'method' : the raise method has a different storage class from that of the event, 'event'

Event methods must have the same storage class as the event declaration. The compiler adjusts the event's methods so that the storage classes are the same.

This warning can occur if you have a class that implements an event from an interface. The compiler does not implicitly generate a raise method for an event in an interface. When you implement that interface in a class, the compiler does implicitly generate a raise method and that method will not be virtual, hence the warning. For more information on events, see [event](../../extensions/event-cpp-component-extensions.md).

See [warning](../../preprocessor/warning.md) pragma for information on how to turn a warning off.

## Example

The following sample generates C4803.

```cpp
// C4803.cpp
// compile with: /clr /W1
using namespace System;

public delegate void Del();

ref struct E {
   Del ^ _pd1;
   event Del ^ E1 {
      void add (Del ^ pd1) {
         _pd1 = dynamic_cast<Del ^>(Delegate::Combine(_pd1, pd1));
      }

      void remove(Del^ pd1) {
         _pd1 = dynamic_cast<Del^> (Delegate::Remove(_pd1, pd1));
      }

      virtual void raise() {   // C4803 warning (remove virtual)
         if (_pd1)
            _pd1();
      }
   }

   void func() {
      Console::WriteLine("In E::func()");
   }
};

int main() {
   E ^ ep = gcnew E;
   ep->E1 += gcnew Del(ep, &E::func);
   ep->E1();
   ep->E1 -= gcnew Del(ep, &E::func);
   ep->E1();
}
```
