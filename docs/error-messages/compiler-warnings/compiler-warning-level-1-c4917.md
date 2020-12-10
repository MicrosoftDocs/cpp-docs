---
description: "Learn more about: Compiler Warning (level 1) C4917"
title: "Compiler Warning (level 1) C4917"
ms.date: "11/04/2016"
f1_keywords: ["C4917"]
helpviewer_keywords: ["C4917"]
ms.assetid: c05e2610-4a5d-4f4b-a99b-c15fd7f1d5f1
---
# Compiler Warning (level 1) C4917

'declarator' : a GUID can only be associated with a class, interface or namespace

A user-defined structure other than [class](../../cpp/class-cpp.md), [interface](../../cpp/interface.md), or [namespace](../../cpp/namespaces-cpp.md) cannot have a GUID.

This warning is off by default. See [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md) for more information.

## Example

The following code sample generates C4917:

```cpp
// C4917.cpp
// compile with: /W1
#pragma warning(default : 4917)
__declspec(uuid("00000000-0000-0000-0000-000000000001")) struct S
{
} s;   // C4917, don't put uuid on a struct

int main()
{
}
```
