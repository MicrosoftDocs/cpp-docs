---
title: "Compiler Error C2582"
description: "Learn more about: Compiler Error C2582"
ms.date: 11/04/2016
f1_keywords: ["C2582"]
helpviewer_keywords: ["C2582"]
---
# Compiler Error C2582

> 'function' function is unavailable in 'type'

## Remarks

An attempt was made to assign to an object that does not have an assignment operator.

## Example

The following example generates C2582:

```cpp
// C2582.cpp
// compile with: /clr
using namespace System;

struct N {};
ref struct O {};
ref struct R {
   property O prop;   // C2582
   property O ^ prop2;   // OK
};

int main() {
   String ^ st1 = gcnew String("");
   ^st1 = gcnew String("");   // C2582
   st1 = "xxx";   // OK
}
```
