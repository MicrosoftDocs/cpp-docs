---
description: "Learn more about: Compiler Warning (level 1) C4772"
title: "Compiler Warning (level 1) C4772"
ms.date: "11/04/2016"
f1_keywords: ["C4772"]
helpviewer_keywords: ["C4772"]
ms.assetid: dafe6fd8-9faf-41f5-9d66-a55838742c14
---
# Compiler Warning (level 1) C4772

> \#import referenced a type from a missing type library; '*missing-type*' used as a placeholder

A type library was referenced with the [#import](../../preprocessor/hash-import-directive-cpp.md) directive. However, the type library contained a reference to another type library that was not referenced with `#import`. This other .tlb file was not found by the compiler.

Note that the compiler will not find type libraries in different directories if you use the [/I (Additional Include Directories)](../../build/reference/i-additional-include-directories.md) compiler option to specify those directories. If you want the compiler to find type libraries in different directories, add those directories to the PATH environment variable.

By default this warning is issued as an error. C4772 cannot be suppressed with /W0.

## Example

This is the first type library needed to reproduce C4772.

```IDL
// c4772a.idl
[uuid("f87070ba-c6d9-405c-a8e4-8cd9ca25c12b")]
library C4772aLib
{
   [uuid("f87070ba-c6d9-405c-a8e4-8cd9ca25c100")]
   enum E_C4772a
   {
      one, two, three
   };
};
```

This is the second type library needed to reproduce C4772.

```IDL
// c4772b.idl
// post-build command: del /f C4772a.tlb
// C4772a.tlb is available when c4772b.tlb is built
[uuid("f87070ba-c6d9-405c-a8e4-8cd9ca25c12d")]
library C4772bLib
{
   importlib ("c4772a.tlb");
   [uuid("f87070ba-c6d9-405c-a8e4-8cd9ca25c12e")]
   struct S_C4772b
   {
      enum E_C4772a e;
   };
};
```

The following sample generates C4772:

```cpp
// C4772.cpp
// assumes that C4772a.tlb is not available to the compiler
// #import "C4772a.tlb"
#import "C4772b.tlb"   // C4772 uncomment previous line to resolve
                       // and make sure c4772a.tlb is on disk
```
