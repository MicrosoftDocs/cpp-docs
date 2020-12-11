---
description: "Learn more about: Compiler Error C2357"
title: "Compiler Error C2357"
ms.date: "11/04/2016"
f1_keywords: ["C2357"]
helpviewer_keywords: ["C2357"]
ms.assetid: d1083945-0ea2-4385-9e66-8c665978806c
---
# Compiler Error C2357

'identifier' : must be a function of type 'type'

Your code declares a version of the `atexit` function that does not match the version declared internally by the compiler. Declare `atexit` as follows:

```
int __cdecl atexit(void (__cdecl *)());
```

For more information, see [init_seg](../../preprocessor/init-seg.md).

The following sample generates C2357:

```cpp
// C2357.cpp
// compile with: /c
// C2357 expected
#pragma warning(disable : 4075)
// Uncomment the following line to resolve.
// int __cdecl myexit(void (__cdecl *)());
#pragma init_seg(".mine$m",myexit)
```
