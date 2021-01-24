---
description: "Learn more about: initonly (C++/CLI)"
title: "initonly (C++/CLI)"
ms.date: "11/04/2016"
f1_keywords: ["initonly_cpp", "initonly"]
helpviewer_keywords: ["initonly attribute [C++]"]
ms.assetid: f745d7fa-dc08-46f1-9b97-0977be58a008
---
# initonly (C++/CLI)

**initonly** is a context-sensitive keyword that indicates that variable assignment can occur only as part of the declaration or in a static constructor in the same class.

The following example shows how to use `initionly`:

```cpp
// mcpp_initonly.cpp
// compile with: /clr /c
ref struct Y1 {
   initonly
   static int staticConst1;

   initonly
   static int staticConst2 = 0;

   static Y1() {
      staticConst1 = 0;
   }
};
```

## See also

[Classes and Structs](../extensions/classes-and-structs-cpp-component-extensions.md)
