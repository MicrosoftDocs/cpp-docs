---
title: "Compiler Warning (level 3) C4316 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4316"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4316"]
ms.assetid: 10371f01-aeb8-40ac-a290-59e63efa5ad4
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 3) C4316

Object allocated on the heap may not be aligned for this type.

An over-aligned object allocated by using `operator new` may not have the specified alignment. Override [operator new](../../c-runtime-library/operator-new-crt.md) and [operator delete](../../c-runtime-library/operator-delete-crt.md) for over-aligned types so that they use the aligned allocation routines—for example, [_aligned_malloc](../../c-runtime-library/reference/aligned-malloc.md) and [_aligned_free](../../c-runtime-library/reference/aligned-free.md). The following sample generates C4316:

```cpp
// C4316.cpp
// Test: cl /W3 /c C4316.cpp

__declspec(align(32)) struct S {}; // C4324

int main() {
    new S; // C4316
}
```