---
title: "Compiler Warning (Level 1) C4742 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4742"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4742"]
ms.assetid: e520881d-1eeb-48b1-9df0-8017ee8ba076
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (Level 1) C4742

'var' has different alignment in 'file1' and 'file2': number and number

An external variable that was referenced or defined in two files has different alignment in those files. This warning is emitted when compiler finds that `__alignof` for the variable in *file1* differs from `__alignof` for the variable in *file2*. This can be caused by using incompatible types when declaring variable in different files, or by using non-matching `#pragma pack` in different files.

To resolve this warning, either use the same type definition or use different names for the variables.

For more information, see [pack](../../preprocessor/pack.md) and [__alignof Operator](../../cpp/alignof-operator.md).

## Example

This is the first file that defines the type.

```
// C4742a.c
// compile with: /c
struct X {
   char x, y, z, w;
} global;
```

## Example

The following sample generates C4742.

```
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