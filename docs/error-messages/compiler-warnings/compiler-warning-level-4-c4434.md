---
description: "Learn more about: Compiler Warning (level 4) C4434"
title: "Compiler Warning (level 4) C4434"
ms.date: "11/04/2016"
f1_keywords: ["C4434"]
helpviewer_keywords: ["C4434"]
ms.assetid: 24b8785e-353a-4c37-8bed-ed61001a871d
---
# Compiler Warning (level 4) C4434

a class constructor must have private accessibility; changing to private access

C4434 indicates that the compiler changed the accessibility of a static constructor. Static constructors must have private accessibility, as they are only meant to be called by the common language runtime. For more information, see [Static constructors](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Static_constructors).

## Example

The following sample generates C4434.

```cpp
// C4434.cpp
// compile with: /W4 /c /clr
public ref struct R {
   static R(){}   // C4434
};
```
