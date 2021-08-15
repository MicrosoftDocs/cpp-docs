---
description: "Learn more about: Compiler Error C3701"
title: "Compiler Error C3701"
ms.date: "11/04/2016"
f1_keywords: ["C3701"]
helpviewer_keywords: ["C3701"]
ms.assetid: a7faaa87-d2f5-4d6a-9a2f-5cab2d24a648
---
# Compiler Error C3701

'function' : event_source has no events

You attempted to use [event_source](../../windows/attributes/event-source.md) on a class that has no event methods. To fix this error, add one or more events to the class.

The following sample generates C3701:

```cpp
// C3701.cpp
[ event_source(native) ]
class CEventSrc {
public:
   // uncomment the following line to resolve this C3701
   // __event void fireEvent(int i);
};   // C3701

int main() {
}
```
