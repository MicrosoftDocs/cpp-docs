---
title: "Compiler Error C3697"
description: "Learn more about: Compiler Error C3697"
ms.date: 11/04/2016
f1_keywords: ["C3697"]
helpviewer_keywords: ["C3697"]
---
# Compiler Error C3697

> 'qualifier' : cannot use this qualifier on '^'

## Remarks

The tracking handle (^) was applied to a qualifier for which it was not designed.

## Example

The following example generates C3697:

```cpp
// C3697.cpp
// compile with: /clr
using namespace System;
int main() {
   String ^__restrict s;   // C3697
   String ^ s2;   // OK
}
```
