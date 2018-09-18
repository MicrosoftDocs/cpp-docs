---
title: "Compiler Warning (level 1) C4561 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4561"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4561"]
ms.assetid: 3a10c12c-601b-4b6c-9861-331fd022e021
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4561

'__fastcall' incompatible with the '/clr' option: converting to '\__stdcall'

The [__fastcall](../../cpp/fastcall.md) function-calling convention cannot be used with the [/clr](../../build/reference/clr-common-language-runtime-compilation.md) compiler option. The compiler ignores the calls to `__fastcall`. To fix this warning, either remove the calls to **__fastcall** or compile without **/clr**.

The following sample generates C4561:

```
// C4561.cpp
// compile with: /clr /W1 /c
// processor: x86
void __fastcall Func(void *p);   // C4561, remove __fastcall to resolve
```