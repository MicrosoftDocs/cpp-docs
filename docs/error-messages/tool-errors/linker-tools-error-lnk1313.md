---
title: "Linker Tools Error LNK1313 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["LNK1313"]
dev_langs: ["C++"]
helpviewer_keywords: ["LNK1313"]
ms.assetid: 5df0b72e-bb3f-428c-8d84-6084238f9827
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Linker Tools Error LNK1313

> ijw/native module detected; cannot link with pure modules

## Remarks

The current version of Visual C++ does not support linking native or mixed managed/native .obj files with .obj files compiled with **/clr:pure**.

The **/clr:pure** compiler option is deprecated in Visual Studio 2015 and unsupported in Visual Studio 2017.

## Example

```cpp
// LNK1313.cpp
// compile with: /c /clr:pure
// a pure module
int main() {}
```

## Example

```cpp
// LNK1313_b.cpp
// compile with: /c /clr
// an IJW module
void test(){}
```

## Example

The following sample will generate LNK1313.

```cpp
// LNK1313_c.cpp
// compile with: /link LNK1313.obj LNK1313_b.obj
// LNK1313 warning expected
```