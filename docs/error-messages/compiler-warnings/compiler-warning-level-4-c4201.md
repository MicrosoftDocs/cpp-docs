---
title: "Compiler Warning (level 4) C4201"
description: "Learn more about: Compiler Warning (level 4) C4201"
ms.date: 11/04/2016
f1_keywords: ["C4201"]
helpviewer_keywords: ["C4201"]
---
# Compiler Warning (level 4) C4201

> nonstandard extension used : nameless struct/union

## Remarks

Under Microsoft extensions (/Ze), you can specify a structure without a declarator as members of another structure or union. These structures generate an error under ANSI compatibility ([/Za](../../build/reference/za-ze-disable-language-extensions.md)).

## Example

The following example generates C4201:

```cpp
// C4201.cpp
// compile with: /W4
struct S
{
   float y;
   struct
   {
      int a, b, c;  // C4201
   };
} *p_s;

int main()
{
}
```
