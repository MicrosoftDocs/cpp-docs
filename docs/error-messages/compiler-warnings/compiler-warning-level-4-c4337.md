---
description: "Learn more about: Compiler Warning (level 4) C4337"
title: "Compiler Warning (level 4) C4337"
ms.date: "11/04/2016"
f1_keywords: ["C4337"]
helpviewer_keywords: ["C4337"]
ms.assetid: 70bc72d9-aac5-45cd-abd3-ebe42a05897b
---
# Compiler Warning (level 4) C4337

cross-referenced type library 'typelib1' in 'typelib2' is being automatically imported

The auto_search attribute of [the #import directive](../../preprocessor/hash-import-directive-cpp.md) caused a type library to be implicitly imported.

Given two type libraries on disk created from the following two files (compiled with midl.exe):

```
// C4337a.idl
[
  uuid(F87070BA-C6D9-405C-A8E4-8CD9CA25C12B)
]
library C4337aLib
{
   [uuid(F87070BA-C6D9-405C-A8E4-8CD9CA25C12C)]
   enum E_C4337a
   {
      one = 0,
      two = 1,
      three = 2
    };
};
```

and then the second .idl file,

```
// C4337b.idl
[
   uuid(F87070BA-C6D9-405C-A8E4-8CD9CA25C12D)
]

library C4337bLib
{
   importlib("c4337a.tlb");

   [uuid(F87070BA-C6D9-405C-A8E4-8CD9CA25C12E)]
   struct S_C4337b
   {
      enum E_C4337a e;
   };
};
```

The following sample generates C4337:

```cpp
// C4337.cpp
// compile with: /W4 /LD
#import "c4337b.tlb" auto_search   // C4337
// explicitly #import all type libraries to resolve
// #import "C4337a.tlb"
// #import "C4337b.tlb"
```
