---
title: "Compiler Error C3255"
description: "Learn more about: Compiler Error C3255"
ms.date: 11/04/2016
f1_keywords: ["C3255"]
helpviewer_keywords: ["C3255"]
---
# Compiler Error C3255

> 'value type' : cannot dynamically allocate this value type object on native heap

## Remarks

Instances of a value type (see [Classes and Structs](../../extensions/classes-and-structs-cpp-component-extensions.md)) that contain managed members can be created on the stack but not on the heap.

## Example

The following example generates C3255:

```cpp
// C3255.cpp
// compile with: /clr
using namespace System;
value struct V {
   Object^ o;
};

value struct V2 {
   int i;
};

int main() {
   V* pv = new V;   // C3255
   V2* pv2 = new V2;
   V v2;
}
```
