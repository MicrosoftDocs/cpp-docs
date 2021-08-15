---
description: "Learn more about: Compiler Warning (level 4) C4205"
title: "Compiler Warning (level 4) C4205"
ms.date: "11/04/2016"
f1_keywords: ["C4205"]
helpviewer_keywords: ["C4205"]
ms.assetid: 39b5108c-7230-41b4-b2fe-2293eb6aae28
---
# Compiler Warning (level 4) C4205

nonstandard extension used : static function declaration in function scope

With Microsoft extensions (/Ze), **`static`** functions can be declared inside another function. The function is given global scope.

## Example

```c
// C4205.c
// compile with: /W4
void func1()
{
   static int func2();  // C4205
};

int main()
{
}
```

Such initializations are invalid under ANSI compatibility ([/Za](../../build/reference/za-ze-disable-language-extensions.md)).
