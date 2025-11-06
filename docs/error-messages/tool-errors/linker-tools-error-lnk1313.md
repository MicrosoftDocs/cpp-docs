---
title: "Linker Tools Error LNK1313"
description: "Learn more about: Linker Tools Error LNK1313"
ms.date: 06/29/2022
f1_keywords: ["LNK1313"]
helpviewer_keywords: ["LNK1313"]
---
# Linker Tools Error LNK1313

> ijw/native module detected; cannot link with pure modules

## Remarks

The current version of Visual C++ does not support linking native or mixed managed/native `.obj` files with `.obj` files compiled with **`/clr:pure`**.

The **`/clr:pure`** compiler option is deprecated in Visual Studio 2015 and unsupported in Visual Studio 2017 and later.

## Example

Source file `LNK1313.cpp`:

```cpp
// LNK1313.cpp
// compile with: /c /clr:pure
// a pure module
int main() {}
```

Source file `LNK1313_b.cpp`:

```cpp
// LNK1313_b.cpp
// compile with: /c /clr
// an IJW module
void test(){}
```

The following example will generate LNK1313.

```cpp
// LNK1313_c.cpp
// compile with: /link LNK1313.obj LNK1313_b.obj
// LNK1313 warning expected
```
