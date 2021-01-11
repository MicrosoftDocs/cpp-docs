---
description: "Learn more about: Compiler Warning (level 4) C4514"
title: "Compiler Warning (level 4) C4514"
ms.date: "11/04/2016"
f1_keywords: ["C4514"]
helpviewer_keywords: ["C4514"]
ms.assetid: cdae966a-9cd4-4e31-af30-2a014e68f614
---
# Compiler Warning (level 4) C4514

'function' : unreferenced inline function has been removed

The optimizer removed an inline function that is not called.

This warning is off by default. See [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md) for more information.

The following sample generates C4514:

```cpp
// C4514.cpp
// compile with: /W4
#pragma warning(default : 4514)
class A
{
   public:
      void func()   // C4514, remove the function to resolve
      {
      }
};

int main()
{
}
```
