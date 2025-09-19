---
title: "Compiler Warning (level 4) C4238"
description: "Learn more about: Compiler Warning (level 4) C4238"
ms.date: 11/04/2016
f1_keywords: ["C4238"]
helpviewer_keywords: ["C4238"]
---
# Compiler Warning (level 4) C4238

> nonstandard extension used : class rvalue used as lvalue

## Remarks

For compatibility with previous versions of Visual C++, Microsoft extensions (**/Ze**) allow you to use a class type as an rvalue in a context that implicitly or explicitly takes its address. In some cases, such as the example below, this can be dangerous.

## Example

The following example generates C4238:

```cpp
// C4238.cpp
// compile with: /W4 /c
struct C {
   C() {}
};

C * pC = &C();   // C4238
```

This usage causes an error under ANSI compatibility ([/Za](../../build/reference/za-ze-disable-language-extensions.md)).
