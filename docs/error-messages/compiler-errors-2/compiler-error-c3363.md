---
title: "Compiler Error C3363"
description: "Learn more about: Compiler Error C3363"
ms.date: 11/04/2016
f1_keywords: ["C3363"]
helpviewer_keywords: ["C3363"]
---
# Compiler Error C3363

> 'type' : 'typeid' can only be applied to a type

## Remarks

The [typeid](../../extensions/typeid-cpp-component-extensions.md) operator was used incorrectly.

## Example

The following example generates C3363.

```cpp
// C3363.cpp
// compile with: /clr
int main() {
   System::typeid;   // C3363
}
```
