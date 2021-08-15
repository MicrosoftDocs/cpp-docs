---
description: "Learn more about: Compiler Warning (Level 1) C4744"
title: "Compiler Warning (Level 1) C4744"
ms.date: "11/04/2016"
f1_keywords: ["C4744"]
helpviewer_keywords: ["C4744"]
ms.assetid: f2a7d0b5-afd5-4926-abc3-cfbd367e3ff5
---
# Compiler Warning (Level 1) C4744

'var' has different type in 'file1' and 'file2': 'type1' and 'type2'

An external variable referenced or defined in two files has different types in those files.  To resolve, either make the type definitions the same, or change variable name in one of the files.

C4744 is emitted only when files are compiled with /GL.  For more information, see [/GL (Whole Program Optimization)](../../build/reference/gl-whole-program-optimization.md).

> [!NOTE]
> C4744 usually occurs in C (not C++) files, because in C++ a variable name is decorated with type information.  When the sample (below) is compiles as C++, you’ll get linker error LNK2019.

## Examples

This sample contains the first definition.

```c
// C4744.c
// compile with: /c /GL
int global;
```

The following sample generates C4744.

```c
// C4744b.c
// compile with: C4744.c /GL /W1
// C4744 expected
#include <stdio.h>

extern unsigned global;

main()
{
    printf_s("%d\n", global);
}
```
