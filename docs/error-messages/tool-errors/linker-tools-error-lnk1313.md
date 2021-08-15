---
description: "Learn more about: Linker Tools Error LNK1313"
title: "Linker Tools Error LNK1313"
ms.date: "11/04/2016"
f1_keywords: ["LNK1313"]
helpviewer_keywords: ["LNK1313"]
ms.assetid: 5df0b72e-bb3f-428c-8d84-6084238f9827
---
# Linker Tools Error LNK1313

> ijw/native module detected; cannot link with pure modules

## Remarks

The current version of Visual C++ does not support linking native or mixed managed/native .obj files with .obj files compiled with **/clr:pure**.

The **/clr:pure** compiler option is deprecated in Visual Studio 2015 and unsupported in Visual Studio 2017.

## Examples

```cpp
// LNK1313.cpp
// compile with: /c /clr:pure
// a pure module
int main() {}
```

```cpp
// LNK1313_b.cpp
// compile with: /c /clr
// an IJW module
void test(){}
```

The following sample will generate LNK1313.

```cpp
// LNK1313_c.cpp
// compile with: /link LNK1313.obj LNK1313_b.obj
// LNK1313 warning expected
```
