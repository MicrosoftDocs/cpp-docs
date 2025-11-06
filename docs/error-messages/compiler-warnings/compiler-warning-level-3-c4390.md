---
title: "Compiler Warning (level 3) C4390"
description: "Learn more about: Compiler Warning (level 3) C4390"
ms.date: 11/04/2016
f1_keywords: ["C4390"]
helpviewer_keywords: ["C4390"]
---
# Compiler Warning (level 3) C4390

> ';' : empty controlled statement found; is this the intent?

## Remarks

A semicolon was found after a control statement that contains no instructions.

If you get C4390 because of a macro, you should use the [warning](../../preprocessor/warning.md) pragma to disable C4390 in the module containing the macro.

## Example

The following example generates C4390:

```cpp
// C4390.cpp
// compile with: /W3
int main() {
   int i = 0;
   if (i);   // C4390
      i++;
}
```
