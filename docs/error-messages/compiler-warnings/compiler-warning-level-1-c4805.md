---
title: "Compiler Warning (level 1) C4805"
description: "Learn more about: Compiler Warning (level 1) C4805"
ms.date: 11/04/2016
f1_keywords: ["C4805"]
helpviewer_keywords: ["C4805"]
---
# Compiler Warning (level 1) C4805

> 'operation' : unsafe mix of type 'type' and type 'type' in operation

## Remarks

This warning is generated for comparison operations between [bool](../../cpp/bool-cpp.md) and [int](../../c-language/integer-types.md).

## Example

The following example generates C4805:

```cpp
// C4805.cpp
// compile with: /W1
int main() {
   int i = 1;
   bool b = true;

   if (i == b) {   // C4805, comparing bool and int variables
   }
}
```
