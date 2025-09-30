---
title: "Fatal Error C1190"
description: "Learn more about: Fatal Error C1190"
ms.date: 11/04/2016
f1_keywords: ["C1190"]
helpviewer_keywords: ["C1190"]
---
# Fatal Error C1190

> managed targeted code requires a '/clr' option

## Remarks

You are using CLR constructs but you did not specify **/clr**.

For more information, see [/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md).

## Example

The following example generates C1190:

```cpp
// C1190.cpp
// compile with: /c
__gc class A {};   // C1190
ref class A {};
```
