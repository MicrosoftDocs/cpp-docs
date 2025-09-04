---
title: "Compiler Warning (level 1) C4224"
description: "Learn more about: Compiler Warning (level 1) C4224"
ms.date: 11/04/2016
f1_keywords: ["C4224"]
helpviewer_keywords: ["C4224"]
---
# Compiler Warning (level 1) C4224

> nonstandard extension used : formal parameter 'identifier' was previously defined as a type

## Remarks

The identifier was previously used as a **`typedef`**. This causes a warning under ANSI compatibility ([/Za](../../build/reference/za-ze-disable-language-extensions.md)).

## Example

The following example generates C4224:

```cpp
// C4224.cpp
// compile with: /Za /W1 /LD
typedef int I;
void func ( int I );  // C4224
```
