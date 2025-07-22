---
title: "Compiler Error C2318"
description: "Learn more about: Compiler Error C2318"
ms.date: 11/04/2016
f1_keywords: ["C2318"]
helpviewer_keywords: ["C2318"]
---
# Compiler Error C2318

> no try block associated with this catch handler

## Remarks

A **`catch`** handler is defined but not preceded by a **`try`** block.

## Example

The following example generates C2318:

```cpp
// C2318.cpp
// compile with: /EHsc
#include <eh.h>
int main() {
   // no try block
   catch( int ) {}   // C2318
}
```

Possible resolution:

```cpp
// C2318b.cpp
// compile with: /EHsc
#include <eh.h>
int main() {
   try{}
   catch( int ) {}
}
```
