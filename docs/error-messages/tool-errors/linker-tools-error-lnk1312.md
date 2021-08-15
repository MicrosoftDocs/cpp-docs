---
description: "Learn more about: Linker Tools Error LNK1312"
title: "Linker Tools Error LNK1312"
ms.date: "11/04/2016"
f1_keywords: ["LNK1312"]
helpviewer_keywords: ["LNK1312"]
ms.assetid: 48284abb-d849-43fc-ab53-45aded14fd8a
---
# Linker Tools Error LNK1312

invalid or corrupt file: unable to import assembly

When building an assembly, a file other than a module or assembly compiled with **/clr** was passed to the **/ASSEMBLYMODULE** linker option.  If you passed an object file to **/ASSEMBLYMODULE**, just pass the object directly to the linker, instead of to **/ASSEMBLYMODULE**.

## Examples

The following sample created the .obj file.

```cpp
// LNK1312.cpp
// compile with: /clr /LD
public ref class A {
public:
   int i;
};
```

The following sample generates LNK1312.

```cpp
// LNK1312_b.cpp
// compile with: /clr /LD /link /assemblymodule:LNK1312.obj
// LNK1312 error expected
public ref class M {};
```
