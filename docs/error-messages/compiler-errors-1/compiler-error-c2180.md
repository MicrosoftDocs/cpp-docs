---
title: "Compiler Error C2180"
description: "Learn more about: Compiler Error C2180"
ms.date: 11/04/2016
f1_keywords: ["C2180"]
helpviewer_keywords: ["C2180"]
---
# Compiler Error C2180

> controlling expression has type 'type'

## Remarks

The controlling expression in an **`if`**, **`while`**, **`for`**, or **`do`** statement is an expression cast to **`void`**. To fix this issue, change the controlling expression to one that produces a **`bool`** or a type that can be converted to **`bool`**.

## Example

The following example generates C2180:

```c
// C2180.c

int main() {
   while ((void)1)   // C2180
      return 1;
   while (1)         // OK
      return 0;
}
```
