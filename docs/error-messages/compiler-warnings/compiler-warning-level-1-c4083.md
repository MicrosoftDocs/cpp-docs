---
description: "Learn more about: Compiler Warning (level 1) C4083"
title: "Compiler Warning (level 1) C4083"
ms.date: "11/04/2016"
f1_keywords: ["C4083"]
helpviewer_keywords: ["C4083"]
ms.assetid: e7d3344e-5645-4d56-8460-d1acc9145ada
---
# Compiler Warning (level 1) C4083

expected 'token'; found identifier 'identifier'

An identifier occurs in the wrong place in a **#pragma** statement.

## Example

```cpp
// C4083.cpp
// compile with: /W1 /LD
#pragma warning disable:4083    // C4083
#pragma warning(disable:4083)   //correct
```

Check the syntax of the [#pragma](../../preprocessor/pragma-directives-and-the-pragma-keyword.md) directives.
