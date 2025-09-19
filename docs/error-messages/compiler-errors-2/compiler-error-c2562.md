---
title: "Compiler Error C2562"
description: "Learn more about: Compiler Error C2562"
ms.date: 11/04/2016
f1_keywords: ["C2562"]
helpviewer_keywords: ["C2562"]
---
# Compiler Error C2562

> 'identifier' : 'void' function returning a value

## Remarks

The function is declared as **`void`** but returns a value.

This error can be caused by an incorrect function prototype.

This error may be fixed if you specify the return type in the function declaration.

## Example

The following example generates C2562:

```cpp
// C2562.cpp
// compile with: /c
void testfunc() {
   int i;
   return i;   // C2562 delete the return to resolve
}
```
