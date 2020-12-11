---
description: "Learn more about: Compiler Warning (level 4) C4336"
title: "Compiler Warning (level 4) C4336"
ms.date: "11/04/2016"
f1_keywords: ["C4336"]
helpviewer_keywords: ["C4336"]
ms.assetid: 93f199dd-d6dd-42c0-82d8-c12d101a7235
---
# Compiler Warning (level 4) C4336

import cross-referenced type library 'type_lib1' before importing 'type_lib2'

A type library was referenced with the [#import](../../preprocessor/hash-import-directive-cpp.md) directive. However, the type library contained a reference to another type library that was not referenced with `#import`. This other .tlb file was found by the compiler.

Given two type libraries on disk created from the following two files (compiled with midl.exe):

```
// c4336a.idl
[uuid("f87070ba-c6d9-405c-a8e4-8cd9ca25c12b")]
library c4336aLib
{
   [uuid("f87070ba-c6d9-405c-a8e4-8cd9ca25c12c")]
   enum E_C4336
   {
      one, two, three
   };
};
```

The second type library:

```
// c4336b.idl
[uuid("f87070ba-c6d9-405c-a8e4-8cd9ca25c12d")]
library C4336bLib
{
   importlib ("c4336a.tlb");
   [uuid("f87070ba-c6d9-405c-a8e4-8cd9ca25c12e")]
   struct S_C4336
   {
      enum E_C4336 e;
   };
};
```

The following sample generates C4336:

```cpp
// C4336.cpp
// compile with: /W4 /LD
// #import "C4336a.tlb"
#import "C4336b.tlb"   // C4336, uncomment previous line to resolve
```
