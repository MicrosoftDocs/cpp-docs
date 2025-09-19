---
title: "Compiler Warning (level 4) C4429"
description: "Learn more about: Compiler Warning (level 4) C4429"
ms.date: 11/04/2016
f1_keywords: ["C4429"]
helpviewer_keywords: ["C4429"]
---
# Compiler Warning (level 4) C4429

> possible incomplete or improperly formed universal-character-name

## Remarks

The compiler detected a character sequence that may be a badly formed universal character name. A universal character name is `\u` followed by four hex digits, or `\U` followed by eight hex digits.

## Example

The following example generates C4429:

```cpp
// C4429.cpp
// compile with: /W4 /WX
int \ug0e4 = 0;   // C4429
// Try the following line instead:
// int \u00e4 = 0;   // OK, a well-formed universal character name.
```
