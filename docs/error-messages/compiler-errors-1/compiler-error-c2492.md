---
description: "Learn more about: Compiler Error C2492"
title: "Compiler Error C2492"
ms.date: "11/04/2016"
f1_keywords: ["C2492"]
helpviewer_keywords: ["C2492"]
ms.assetid: 8c44c9bb-c366-4fe5-a0ab-882e38608aaa
---
# Compiler Error C2492

'*variable*': data with thread storage duration may not have dll interface

The variable is declared with the [thread](../../cpp/thread.md) attribute and with the DLL interface. The address of the `thread` variable is not known until run time, so it cannot be linked to a DLL import or export.

The following sample generates C2492:

```cpp
// C2492.cpp
// compile with: /c
class C {
public:
   char   ch;
};

__declspec(dllexport) __declspec(thread) C c_1;   // C2492
__declspec(thread) C c_1;   // OK
```
