---
description: "Learn more about: Linker Tools Error LNK1237"
title: "Linker Tools Error LNK1237"
ms.date: 06/29/2022
f1_keywords: ["LNK1237"]
helpviewer_keywords: ["LNK1237"]
ms.assetid: 8722ffa8-096a-4bb0-85f9-f3aa0e10872a
---
# Linker Tools Error LNK1237

> during code generation, compiler introduced reference to symbol 'symbol' defined in module 'module' compiled with /GL

## Remarks

During code generation, the compiler shouldn't introduce symbols that are later resolved to definitions compiled **`/GL`**. `symbol` is a symbol that was introduced and later resolved to a definition compiled by using **`/GL`**.

For more information, see [`/GL` (Whole Program Optimization)](../../build/reference/gl-whole-program-optimization.md).

To resolve LNK1237, don't use **`/GL`** to compile the symbol, or use [`/INCLUDE` (Force Symbol References)](../../build/reference/include-force-symbol-references.md) to force a reference to the symbol.

## Example

The following sample generates LNK1237. To resolve this error, don't initialize the array in `LNK1237_a.cpp` and add **`/include:__chkstk`** to the link command.

Source file `LNK1237_a.cpp`:

```cpp
// LNK1237_a.cpp
int main() {
   char c[5000] = {0};
}
```

Source file `LNK1237_b.cpp`:

```cpp
// LNK1237_b.cpp
// compile with: /GS- /GL /c LNK1237_a.cpp
// processor: x86
// post-build command: (lib LNK1237_b.obj /LTCG & link LNK1237_a.obj LNK1237_b.lib /nodefaultlib /entry:main /LTCG)
extern "C" void _chkstk(size_t s) {}
```
