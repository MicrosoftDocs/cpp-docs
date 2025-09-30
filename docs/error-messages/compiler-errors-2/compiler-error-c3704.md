---
title: "Compiler Error C3704"
description: "Learn more about: Compiler Error C3704"
ms.date: 11/04/2016
f1_keywords: ["C3704"]
helpviewer_keywords: ["C3704"]
---
# Compiler Error C3704

> 'function' : a vararg method cannot fire events

## Remarks

You attempted to use [__event](../../cpp/event.md) on a vararg method. To fix this error, replace the `fireEvent(int i, ...)` call with the `fireEvent(int i)` call as shown in the following code example.

## Example

The following example generates C3704:

```cpp
// C3704.cpp
[ event_source(native) ]
class CEventSrc {
   public:
      __event void fireEvent(int i, ...);   // C3704
      // try the following line instead:
      // __event void fireEvent(int i);
};

int main() {
}
```
