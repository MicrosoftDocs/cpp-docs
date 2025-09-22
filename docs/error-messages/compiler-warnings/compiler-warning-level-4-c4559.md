---
title: "Compiler Warning (level 4) C4559"
description: "Learn more about: Compiler Warning (level 4) C4559"
ms.date: 08/27/2018
f1_keywords: ["C4559"]
helpviewer_keywords: ["C4559"]
---
# Compiler Warning (level 4) C4559

> '*function*' : redefinition; the function gains __declspec(*modifier*)

## Remarks

A function was redefined or redeclared and the second definition or declaration added a **`__declspec`** modifier (*modifier*). This warning is informational. To fix this warning, delete one of the definitions.

## Example

The following example generates C4559:

```cpp
// C4559.cpp
// compile with: /W4 /LD
void f();
__declspec(noalias) void f();   // C4559
```
