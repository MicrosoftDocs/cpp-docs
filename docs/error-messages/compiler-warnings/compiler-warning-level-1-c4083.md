---
title: "Compiler Warning (level 1) C4083"
description: "Learn more about: Compiler Warning (level 1) C4083"
ms.date: 11/04/2016
f1_keywords: ["C4083"]
helpviewer_keywords: ["C4083"]
---
# Compiler Warning (level 1) C4083

> expected 'token'; found identifier 'identifier'

## Remarks

An identifier occurs in the wrong place in a **#pragma** statement.

## Example

The following example generates C4083:

```cpp
// C4083.cpp
// compile with: /W1 /LD
#pragma warning disable:4083    // C4083
#pragma warning(disable:4083)   //correct
```

Check the syntax of the [#pragma](../../preprocessor/pragma-directives-and-the-pragma-keyword.md) directives.
