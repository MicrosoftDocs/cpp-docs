---
title: "Compiler Error C3239"
description: "Learn more about: Compiler Error C3239"
ms.date: 11/04/2016
f1_keywords: ["C3239"]
helpviewer_keywords: ["C3239"]
---
# Compiler Error C3239

> 'type' : pointer to interior/pin pointer is disallowed by the common language runtime

## Remarks

The compiler encountered an invalid type.

## Example

The following example generates C3239:

```cpp
// C3239.cpp
// compile with: /clr
int main() {
   interior_ptr<int>* pip0;   // C3239

   // OK
   int * pip1;
   interior_ptr<int> pip2;
   int ** pip;
}
```
