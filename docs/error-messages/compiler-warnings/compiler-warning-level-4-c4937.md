---
title: "Compiler Warning (level 4) C4937"
description: "Learn more about: Compiler Warning (level 4) C4937"
ms.date: 11/04/2016
f1_keywords: ["C4937"]
helpviewer_keywords: ["C4937"]
---
# Compiler Warning (level 4) C4937

> 'text1' and 'text2' are indistinguishable as arguments to 'directive'

## Remarks

Because of the way the compiler processes arguments to directives, names that have meaning to the compiler, such as keywords with multiple text representations (single and double underscore forms), cannot be distinguished.

Examples of such strings are __cdecl and \__forceinline.  Note, under /Za, only the double underscore forms are enabled.

## Example

The following example generates C4937:

```cpp
// C4937.cpp
// compile with: /openmp /W4
#include "omp.h"
int main() {
   #pragma omp critical ( __leave )   // C4937
   ;

   // OK
   #pragma omp critical ( leave )
   ;
}
```
