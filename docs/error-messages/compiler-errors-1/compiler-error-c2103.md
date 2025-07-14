---
description: "Learn more about: Compiler Error C2103"
title: "Compiler Error C2103"
ms.date: "03/04/2024"
f1_keywords: ["C2103"]
helpviewer_keywords: ["C2103"]
---
# Compiler Error C2103

> '&' on register variable

## Remarks

You cannot take the address of a register.

## Example

The following example generates C2103:

```c
// C2103.c
int main(void)
{
    register int x = 1;
    int* ptr = &x;   // C2103
}
```

> [!NOTE]
> This error applies to C code.
