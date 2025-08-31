---
title: "Compiler Warning (level 4) C4565"
description: "Learn more about: Compiler Warning (level 4) C4565"
ms.date: 08/27/2018
f1_keywords: ["C4565"]
helpviewer_keywords: ["C4565"]
---
# Compiler Warning (level 4) C4565

> '*function*' : redefinition; the symbol was previously declared with __declspec(*modifier*)

## Remarks

A symbol was redefined or redeclared and the second definition or declaration, unlike the first definition or declaration, did not have a **`__declspec`** modifier (*modifier*). This warning is informational. To fix this warning, delete one of the definitions.

## Example

The following example generates C4565:

```cpp
// C4565.cpp
// compile with: /W4 /LD
__declspec(noalias) void f();
void f();   // C4565
```
