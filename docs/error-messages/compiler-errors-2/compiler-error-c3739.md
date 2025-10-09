---
title: "Compiler Error C3739"
description: "Learn more about: Compiler Error C3739"
ms.date: 11/04/2016
f1_keywords: ["C3739"]
helpviewer_keywords: ["C3739"]
---
# Compiler Error C3739

> 'class': syntax is only supported when the 'layout_dependent' parameter of event_receiver is true

## Remarks

You tried to hook an entire interface of events but `layout_dependent` on [event_receiver](../../windows/attributes/event-receiver.md) attribute is not true; you must hook a single event at a time.

## Example

The following example generates C3739:

```cpp
// C3739.cpp
struct A
{
   __event void e();
};

// event_receiver is implied
// [ event_receiver(layout_dependent=false)]

// use the following line instead
// [event_receiver(com, layout_dependent=true), coclass ]
struct B
{
   void f();
   B(A* a)
   {
      __hook(A, a, &B::f);   // C3739
      // use the following line instead to hook a single event
      // __hook(&A::e, a, &B::f);
   }
};

int main()
{
}
```
