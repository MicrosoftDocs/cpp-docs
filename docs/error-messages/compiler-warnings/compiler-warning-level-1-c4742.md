---
title: "Compiler Warning (Level 1) C4742"
ms.date: "11/04/2016"
f1_keywords: ["C4742"]
helpviewer_keywords: ["C4742"]
ms.assetid: e520881d-1eeb-48b1-9df0-8017ee8ba076
---
# Compiler Warning (Level 1) C4742

'var' has different alignment in 'file1' and 'file2': number and number

An external variable that was referenced or defined in two files has different alignment in those files. This warning is emitted when compiler finds that `__alignof` for the variable in *file1* differs from `__alignof` for the variable in *file2*. This can be caused by using incompatible types when declaring variable in different files, or by using non-matching `#pragma pack` in different files.

To resolve this warning, either use the same type definition or use different names for the variables.

For more information, see [pack](../../preprocessor/pack.md) and [__alignof Operator](../../cpp/alignof-operator.md).

## Example

This is the first file that defines the type.

```c
// C4742a.c
// compile with: /c
struct X {
   char x, y, z, w;
} global;
```

## Example

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