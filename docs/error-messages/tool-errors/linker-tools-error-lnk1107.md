---
description: "Learn more about: Linker Tools Error LNK1107"
title: "Linker Tools Error LNK1107"
ms.date: "11/04/2016"
f1_keywords: ["LNK1107"]
helpviewer_keywords: ["LNK1107"]
ms.assetid: a37a893d-5efa-4eba-8f40-6c5518b4b9d0
---
# Linker Tools Error LNK1107

invalid or corrupt file: cannot read at location

The tool could not read the file. Recreate the file.

LNK1107 could also occur if you attempt to pass a module (.dll or .netmodule extension created with [/clr:noAssembly](../../build/reference/clr-common-language-runtime-compilation.md) or  [/NOASSEMBLY](../../build/reference/noassembly-create-a-msil-module.md)) to the linker; pass the .obj file instead.

If you compile the following sample:

```cpp
// LNK1107.cpp
// compile with: /clr /LD
public ref class MyClass {
public:
   void Test(){}
};
```

and then specify **link LNK1107.dll** on the command line, you will get LNK1107.  To resolve the error, specify **link LNK1107.obj** instead.
