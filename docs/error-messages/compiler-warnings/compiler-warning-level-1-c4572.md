---
title: "Compiler Warning (level 1) C4572"
description: "Learn more about: Compiler Warning (level 1) C4572"
ms.date: 11/04/2016
f1_keywords: ["C4572"]
helpviewer_keywords: ["C4572"]
---
# Compiler Warning (level 1) C4572

> [ParamArray] attribute is deprecated under /clr, use '...' instead

## Remarks

An obsolete style for specifying a variable argument list was used. When compiling for the CLR, use ellipsis syntax instead of <xref:System.ParamArrayAttribute>. For more information, see [Variable Argument Lists (...) (C++/CLI)](../../extensions/variable-argument-lists-dot-dot-dot-cpp-cli.md).

## Example

The following example generates C4572.

```cpp
// C4572.cpp
// compile with: /clr /W1
void Func([System::ParamArray] array<int> ^);   // C4572
void Func2(... array<int> ^){}   // OK

int main() {
   Func2(1, 2, 3);
}
```
