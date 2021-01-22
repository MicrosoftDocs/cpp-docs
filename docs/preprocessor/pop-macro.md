---
description: "Learn more about the pop_macro pragma directive in Microsoft C/C++"
title: "pop_macro pragma"
ms.date: 01/22/2021
f1_keywords: ["vc-pragma.pop_macro", "pop_macro_CPP"]
helpviewer_keywords: ["pop_macro pragma", "pragma, pop_macro"]
no-loc: ["pragma"]
---
# `pop_macro` pragma

Sets the value of the *macro-name* macro to the value on the top of the stack for this macro.

## Syntax

> **`#pragma pop_macro(`** "*macro-name*" **`)`**

## Remarks

A [`push_macro`](../preprocessor/push-macro.md) for *macro-name* must be issued before you can do a **`pop_macro`**.

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

[Pragma directives and the `__pragma` and `_Pragma` keywords](./pragma-directives-and-the-pragma-keyword.md)
