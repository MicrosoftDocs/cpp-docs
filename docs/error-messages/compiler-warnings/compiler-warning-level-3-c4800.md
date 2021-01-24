---
description: "Learn more about: Compiler Warning (level 4) C4800"
title: "Compiler Warning (level 4) C4800"
ms.date: "03/14/2019"
f1_keywords: ["C4800"]
helpviewer_keywords: ["C4800"]
ms.assetid: 4f409799-a250-45ed-bb5f-657691b0d9f7
---
# Compiler Warning (level 4) C4800

::: moniker range=">= msvc-160"
Visual Studio 2019 and later:
> Implicit conversion from '*type*' to bool. Possible information loss
::: moniker-end

C4800 is a level 3 warning in Visual Studio 2015 and earlier:
> '*type*' : forcing value to bool 'true' or 'false' (performance warning)

This warning is generated when a value is implicitly converted into type **`bool`**. Typically, this message is caused by assigning **`int`** variables to **`bool`** variables where the **`int`** variable contains only values **`true`** and **`false`**, and could be redeclared as type **`bool`**. If you can't rewrite the expression to use type **`bool`**, then you can add "`!=0`" to the expression, which gives the expression type **`bool`**. Casting the expression to type **`bool`** doesn't disable the warning, which is by design.

::: moniker range=">= msvc-150"
This warning is not emitted in Visual Studio 2017.
::: moniker-end

::: moniker range=">= msvc-160"
This warning is off by default starting in Visual Studio 2019. Use __/w__*n*__4800__ to enable C4800 as a level *n* warning, or [/Wall](../../build/reference/compiler-option-warning-level.md) to enable all warnings that are off by default. For more information, see [Compiler Warnings That Are Off By Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md).
::: moniker-end

## Example

The following sample generates C4800 and shows how to fix it:

```cpp
// C4800.cpp
// compile with: /W4 /w44800
int main() {
   int i = 0;

   // To fix, instead try:
   // bool i = 0;

   bool j = i;   // C4800
   j++;
}
```
