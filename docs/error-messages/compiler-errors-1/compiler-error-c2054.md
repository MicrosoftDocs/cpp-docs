---
title: "Compiler Error C2054"
description: "Learn more about: Compiler Error C2054"
ms.date: 11/04/2016
f1_keywords: ["C2054"]
helpviewer_keywords: ["C2054"]
---
# Compiler Error C2054

> expected '(' to follow 'identifier'

## Remarks

The function identifier is used in a context that requires trailing parentheses.

This error can be caused by omitting an equal sign (=) on a complex initialization.

## Example

The following example generates C2054:

```c
// C2054.c
int array1[] { 1, 2, 3 };   // C2054, missing =
```

Possible resolution:

```c
// C2054b.c
int main() {
   int array2[] = { 1, 2, 3 };
}
```
