---
title: "Compiler Warning (level 4) C4238"
ms.date: "11/04/2016"
f1_keywords: ["C4238"]
helpviewer_keywords: ["C4238"]
ms.assetid: 5d4051d3-7b0f-43ea-8c8d-d194bfdceb71
---
# Compiler Warning (level 4) C4238

> nonstandard extension used : class rvalue used as lvalue

For compatibility with previous versions of Microsoft C++, Microsoft extensions ([/Ze](../../build/reference/za-ze-disable-language-extensions.md)) allow you to use a class type as an rvalue in a context that implicitly or explicitly takes its address. In some cases, such as the example below, this action can be dangerous.

## Example

```cpp
// C4238.cpp
// compile with: /W4 /c
struct C {
   C() {}
};

C * pC = &C();   // C4238
```

This usage causes an error under ANSI compatibility mode ([/Za](../../build/reference/za-ze-disable-language-extensions.md)).
