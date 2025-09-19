---
title: "Compiler Warning (level 2) C4094"
description: "Learn more about: Compiler Warning (level 2) C4094"
ms.date: 11/04/2016
f1_keywords: ["C4094"]
helpviewer_keywords: ["C4094"]
---
# Compiler Warning (level 2) C4094

> untagged 'token' declared no symbols

## Remarks

The compiler detected an empty declaration using an untagged structure, union, or class. The declaration is ignored.

## Example

The following example generates C4094:

```cpp
// C4094.cpp
// compile with: /W2
struct
{
};   // C4094

int main()
{
}
```

This condition generates an error under ANSI compatibility ([/Za](../../build/reference/za-ze-disable-language-extensions.md)).
