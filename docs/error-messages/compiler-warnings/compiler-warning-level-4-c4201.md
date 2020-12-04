---
description: "Learn more about: Compiler Warning (level 4) C4201"
title: "Compiler Warning (level 4) C4201"
ms.date: "11/04/2016"
f1_keywords: ["C4201"]
helpviewer_keywords: ["C4201"]
ms.assetid: 6156f508-9393-4d77-9e73-1ec3e1c32d0d
---
# Compiler Warning (level 4) C4201

nonstandard extension used : nameless struct/union

Under Microsoft extensions (/Ze), you can specify a structure without a declarator as members of another structure or union. These structures generate an error under ANSI compatibility ([/Za](../../build/reference/za-ze-disable-language-extensions.md)).

## Example

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
