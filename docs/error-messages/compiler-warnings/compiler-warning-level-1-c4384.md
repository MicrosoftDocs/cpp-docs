---
description: "Learn more about: Compiler Warning (level 1) C4384"
title: "Compiler Warning (level 1) C4384"
ms.date: "11/04/2016"
f1_keywords: ["C4384"]
helpviewer_keywords: ["C4384"]
ms.assetid: fafa8eb2-cbfc-4edb-8b0f-511ff5d37ac0
---
# Compiler Warning (level 1) C4384

\#pragma 'make_public' should only be used at global scope

The [make_public](../../preprocessor/make-public.md) pragma was applied incorrectly.

## Example

The following sample generates C4384.

```cpp
// C4384.cpp
// compile with: /c /W1
namespace n {
   #pragma make_public(N::C)   // C4384
   namespace N {
      class C {};
   }
}
```
