---
title: "Linker Tools Warning LNK4086"
description: "Learn more about: Linker Tools Warning LNK4086"
ms.date: 11/04/2016
f1_keywords: ["LNK4086"]
helpviewer_keywords: ["LNK4086"]
---
# Linker Tools Warning LNK4086

> entrypoint 'function' is not __stdcall with 'number' bytes of arguments; image may not run

## Remarks

The entry point for a DLL must be **`__stdcall`**. Either recompile the function with the [/Gz](../../build/reference/gd-gr-gv-gz-calling-convention.md) option or specify **`__stdcall`** or WINAPI when you define the function.
