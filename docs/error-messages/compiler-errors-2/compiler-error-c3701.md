---
title: "Compiler Error C3701"
description: "Learn more about: Compiler Error C3701"
ms.date: 11/04/2016
f1_keywords: ["C3701"]
helpviewer_keywords: ["C3701"]
---
# Compiler Error C3701

> 'function' : event_source has no events

## Remarks

You attempted to use [event_source](../../windows/attributes/event-source.md) on a class that has no event methods. To fix this error, add one or more events to the class.

## Example

The following example generates C3701:

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
