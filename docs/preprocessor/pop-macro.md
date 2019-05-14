---
title: "pop_macro"
ms.date: "11/04/2016"
f1_keywords: ["vc-pragma.pop_macro", "pop_macro_CPP"]
helpviewer_keywords: ["pop_macro pragma", "pragmas, pop_macro"]
ms.assetid: 3b5489d0-69ba-4c66-b572-2748af0f12bb
---
# pop_macro
Sets the value of the *macro_name* macro to the value on the top of the stack for this macro.

## Syntax

```
#pragma pop_macro("
macro_name
")
```

## Remarks

You must first issue a [push_macro](../preprocessor/push-macro.md) for *macro_name* before you can do a **pop_macro**.

## Example

```cpp
// pragma_directives_pop_macro.cpp
// compile with: /W1
#include <stdio.h>
#define X 1
#define Y 2

int main() {
   printf("%d",X);
   printf("\n%d",Y);
   #define Y 3   // C4005
   #pragma push_macro("Y")
   #pragma push_macro("X")
   printf("\n%d",X);
   #define X 2   // C4005
   printf("\n%d",X);
   #pragma pop_macro("X")
   printf("\n%d",X);
   #pragma pop_macro("Y")
   printf("\n%d",Y);
}
```

```Output
1
2
1
2
1
3
```

## See also

[Pragma Directives and the __Pragma Keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)