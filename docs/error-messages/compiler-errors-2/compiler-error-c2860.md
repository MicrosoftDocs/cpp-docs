---
description: "Learn more about: Compiler Error C2860"
title: "Compiler Error C2860"
ms.date: "11/04/2016"
f1_keywords: ["C2860"]
helpviewer_keywords: ["C2860"]
ms.assetid: ccc83553-90ed-4e94-b5e9-38b58ae38e31
---
# Compiler Error C2860

'void' cannot be an argument type, except for '(void)'

Type **`void`** cannot be used as an argument type with other arguments.

The following sample generates C2860:

```cpp
// C2860.cpp
// compile with: /c
void profunc1(void, int i);   // C2860
void func10(void);   // OK
```
