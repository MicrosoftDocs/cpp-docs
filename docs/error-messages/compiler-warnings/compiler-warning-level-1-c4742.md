---
description: "Learn more about: Compiler Warning (Level 1) C4742"
title: "Compiler Warning (Level 1) C4742"
ms.date: 07/22/2020
f1_keywords: ["C4742"]
helpviewer_keywords: ["C4742"]
ms.assetid: e520881d-1eeb-48b1-9df0-8017ee8ba076
---
# Compiler Warning (Level 1) C4742

> '*variable*' has different alignment in '*file1*' and '*file2*': *number1* and *number2*

An external variable that was referenced or defined in two files has different alignment in those files.

## Remarks

This warning is emitted when compiler finds that **`alignof`** for the variable in *file1* differs from **`alignof`** for the variable in *file2*. This can be caused by using incompatible types when declaring variable in different files, or by using non-matching `#pragma pack` in different files.

To resolve this warning, either use the same type definition or use different names for the variables.

For more information, see [`pack`](../../preprocessor/pack.md) and [`alignof` operator](../../cpp/alignof-operator.md).

## Example

This is the first file that defines the type.

```c
// C4742a.c
// compile with: /c
struct X {
   char x, y, z, w;
} global;
```

The following sample generates C4742.

```c
// C4742b.c
// compile with: C4742a.c /W1 /GL
// C4742 expected
extern struct X {
   int a;
} global;

int main() {
   global.a = 0;
}
```
