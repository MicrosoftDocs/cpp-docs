---
description: "Learn more about: Compiler Warning (level 4) C4714"
title: "Compiler Warning (level 4) C4714"
ms.date: "11/04/2016"
f1_keywords: ["C4714"]
helpviewer_keywords: ["C4714"]
ms.assetid: 22c7fd0c-899d-4e9b-95f3-725b2c49fb46
---
# Compiler Warning (level 4) C4714

> function 'function' marked as __forceinline not inlined

The given function was selected for inline expansion, but the compiler did not perform the inlining.

Although **`__forceinline`** is a stronger indication to the compiler than **`__inline`**, inlining is still performed at the compiler's discretion, but no heuristics are used to determine the benefits from inlining this function.

In some cases, the compiler will not inline a particular function for mechanical reasons. For example, the compiler will not inline:

- A function if it would result in mixing both SEH and C++ EH.

- Some functions with copy constructed objects passed by value when -GX/EHs/EHa is on.

- Functions returning an unwindable object by value when -GX/EHs/EHa is on.

- Functions with inline assembly when compiling without -Og/Ox/O1/O2.

- Functions with a variable argument list.

- A function with a **`try`** (C++ exception handling) statement.

The following sample generates C4714:

```cpp
// C4714.cpp
// compile with: /Ob1 /GX /W4
__forceinline void func1()
{
   try
   {
   }
   catch (...)
   {
   }
}

void func2()
{
   func1();   // C4714
}

int main()
{
}
```
