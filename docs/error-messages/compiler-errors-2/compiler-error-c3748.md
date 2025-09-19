---
title: "Compiler Error C3748"
description: "Learn more about: Compiler Error C3748"
ms.date: 11/04/2016
f1_keywords: ["C3748"]
helpviewer_keywords: ["C3748"]
---
# Compiler Error C3748

> 'interface': managed interfaces may not fire events

## Remarks

The [__event](../../cpp/event.md) keyword cannot appear inside an interface.

## Example

The following example generates C3748:

```cpp
// C3748.cpp
__interface I {
// try the following line instead
// struct I {
   __event void f();   // C3748
};

int main() {
}
```
