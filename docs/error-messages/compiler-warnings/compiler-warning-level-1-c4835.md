---
title: "Compiler Warning (level 1) C4835"
description: "Learn more about: Compiler Warning (level 1) C4835"
ms.date: 11/04/2016
f1_keywords: ["C4835"]
helpviewer_keywords: ["C4835"]
---
# Compiler Warning (level 1) C4835

> 'variable' : the initializer for exported data will not be run until managed code is first executed in the host assembly

## Remarks

When accessing data between managed components, it is recommended that you not use native C++ import and export mechanisms. Instead, declare your data members inside a managed type and reference the metadata with `#using` in the client. For more information, see [#using Directive](../../preprocessor/hash-using-directive-cpp.md).

## Examples

The following example generates C4835.

```cpp
// C4835.cpp
// compile with: /W1 /clr /LD
int f() { return 1; }
int n = 9;

__declspec(dllexport) int m = f();   // C4835
__declspec(dllexport) int *p = &n;   // C4835
```

The following example consumes the component built in the previous example, showing that the value of the variables is not as expected.

```cpp
// C4835_b.cpp
// compile with: /clr C4835.lib
#include <stdio.h>
__declspec(dllimport) int m;
__declspec(dllimport) int *p;

int main() {
   printf("%d\n", m);
   printf("%d\n", p);
}
```

```Output
0
268456008
```
