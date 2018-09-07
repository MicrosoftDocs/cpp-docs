---
title: "-DYNAMICBASE | Microsoft Docs"
ms.custom: ""
ms.date: "06/12/2018"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["/dynamicbase"]
dev_langs: ["C++"]
helpviewer_keywords: ["-DYNAMICBASE editbin option", "DYNAMICBASE editbin option", "/DYNAMICBASE editbin option"]
ms.assetid: edb3df90-7b07-42fb-a94a-f5a4c1d325d6
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# /DYNAMICBASE

Specifies whether to generate an executable image that can be randomly rebased at load time by using the address space layout randomization (ASLR) feature of Windows that was first available in Windows Vista.

## Syntax

> **/DYNAMICBASE**[**:NO**]

## Remarks

The **/DYNAMICBASE** option modifies the header of an *executable image*, a .dll or .exe file, to indicate whether the application should be randomly rebased at load time, and enables virtual address allocation randomization, which affects the virtual memory location of heaps, stacks, and other operating system allocations. The **/DYNAMICBASE** option applies to both 32-bit and 64-bit images. ASLR is supported on Windows Vista and later operating systems. The option is ignored by earlier operating systems.

By default, **/DYNAMICBASE** is enabled. To disable this option, use **/DYNAMICBASE:NO**. The **/DYNAMICBASE** option is required for the [/HIGHENTROPYVA](highentropyva-support-64-bit-aslr.md) option to have an effect.

## See also

- [EDITBIN Options](../../build/reference/editbin-options.md)
- [Windows ISV Software Security Defenses](https://msdn.microsoft.com/library/bb430720.aspx)