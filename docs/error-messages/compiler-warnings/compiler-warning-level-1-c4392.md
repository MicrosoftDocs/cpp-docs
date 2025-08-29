---
description: "Learn more about: Compiler Warning (level 1, Error) C4392"
title: "Compiler Warning (level 1, Error) C4392"
ms.date: "11/04/2016"
f1_keywords: ["C4392"]
helpviewer_keywords: ["C4392"]
---
# Compiler Warning (level 1, Error) C4392

> 'signature' : incorrect number of arguments for intrinsic function, expected 'number' arguments

## Remarks

A function declaration for a compiler intrinsic had the wrong number of arguments. The resulting image may not run correctly. To fix this warning, either correct the declaration or delete the declaration and `#include` the appropriate header file.

This warning is always issued as an error. Use the [warning](../../preprocessor/warning.md) pragma to disable or change the warning level.

## Example

The following sample generates C4392:

```cpp
// C4392.cpp
// compile with: /W1
// processor: x86
// uncomment the following line and delete the line that
// generated the warning to resolve
// #include "xmmintrin.h"

#ifdef  __cplusplus
extern "C" {
#endif

extern void _mm_stream_pd(double *dp);   // C4392

#ifdef  __cplusplus
}
#endif

int main()
{
}
```
