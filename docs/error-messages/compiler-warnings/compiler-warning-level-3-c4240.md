---
title: "Compiler Warning (level 3) C4240"
description: "Learn more about: Compiler Warning (level 3) C4240"
ms.date: 11/04/2016
f1_keywords: ["C4240"]
helpviewer_keywords: ["C4240"]
---
# Compiler Warning (level 3) C4240

> nonstandard extension used : access to 'classname' now defined to be 'access specifier', previously it was defined to be 'access specifier'

## Remarks

Under ANSI compatibility ([/Za](../../build/reference/za-ze-disable-language-extensions.md)), you cannot change the access to a nested class. Under the default Microsoft extensions (/Ze), you can, with this warning.

## Example

The following example generates C4240:

```cpp
// C4240.cpp
// compile with: /W3
class X
{
private:
   class N;
public:
   class N
   {   // C4240
   };
};

int main()
{
}
```
