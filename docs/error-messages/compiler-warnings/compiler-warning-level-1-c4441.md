---
description: "Learn more about: Compiler Warning (level 1) C4441"
title: "Compiler Warning (level 1) C4441"
ms.date: "11/04/2016"
f1_keywords: ["C4441"]
helpviewer_keywords: ["C4441"]
ms.assetid: 7fc540a5-e41f-47cf-aa37-b2b699c2685e
---
# Compiler Warning (level 1) C4441

calling convention of 'cc1' ignored; 'cc2' used instead

Member functions in managed user-defined types and global function generics must use the [__clrcall](../../cpp/clrcall.md) calling convention.  The compiler used `__clrcall`.

## Example

The following sample generates C4441.

```cpp
// C4441.cpp
// compile with: /clr /W1 /c
generic <class ItemType>
void __cdecl Test(ItemType item) {}   // C4441
// try the following line instead
// void Test(ItemType item) {}

ref struct MyStruct {
   void __cdecl Test(){}   // C4441
   void Test2(){}   // OK
};
```
