---
description: "Learn more about: Compiler Error C2218"
title: "Compiler Error C2218"
ms.date: "11/04/2016"
f1_keywords: ["C2218"]
helpviewer_keywords: ["C2218"]
ms.assetid: b0f55da4-8edb-4b45-b298-1a091981bd7b
---
# Compiler Error C2218

> '__vectorcall' cannot be used with '/arch:IA32'

The **`__vectorcall`** calling convention is only supported in native code on x86 and x64 processors that include Streaming SIMD Extensions 2 (SSE2) and above. For more information, see [`__vectorcall`](../../cpp/vectorcall.md).

To fix this error, change the compiler options to target SSE2, AVX or AVX2 instruction sets. For more information, see [`/arch` (x86)](../../build/reference/arch-x86.md).
