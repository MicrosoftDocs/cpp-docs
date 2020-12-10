---
description: "Learn more about: Compiler Warning (level 1) C4190"
title: "Compiler Warning (level 1) C4190"
ms.date: "11/04/2016"
f1_keywords: ["C4190"]
helpviewer_keywords: ["C4190"]
ms.assetid: a4d0ad93-a19a-4063-addd-36d605831567
---
# Compiler Warning (level 1) C4190

'identifier1' has C-linkage specified, but returns UDT 'identifier2' which is incompatible with C

A function or pointer to function has a UDT (user-defined type, which is a class, structure, enum, or union) as return type and `extern "C"` linkage. This is legal if:

- All calls to this function occur from C++.

- The definition of the function is in C++.

## Example

```cpp
// C4190.cpp
// compile with: /W1 /LD
struct X
{
   int i;
   X ();
   virtual ~X ();
};

extern "C" X func ();   // C4190
```
