---
title: "Linker Tools Warning LNK4086 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["LNK4086"]
dev_langs: ["C++"]
helpviewer_keywords: ["LNK4086"]
ms.assetid: ea1eecbb-ba2c-41bb-9a4f-fa0808a4b92d
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Linker Tools Warning LNK4086
entrypoint 'function' is not __stdcall with 'number' bytes of arguments; image may not run  
  
 The entry point for a DLL must be `__stdcall`. Either recompile the function with the [/Gz](../../build/reference/gd-gr-gv-gz-calling-convention.md) option or specify `__stdcall` or WINAPI when you define the function.