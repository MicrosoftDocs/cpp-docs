---
title: "ALIAS (MASM) | Microsoft Docs"
ms.custom: ""
ms.date: "08/30/2018"
ms.technology: ["cpp-masm"]
ms.topic: "reference"
f1_keywords: ["Alias"]
dev_langs: ["C++"]
helpviewer_keywords: ["ALIAS directive"]
ms.assetid: d9725c49-58de-41da-ab01-b06a56cf5cf2
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# ALIAS (MASM)

The **ALIAS** directive creates an alternate name for a function.  This lets you create multiple names for a function, or create libraries that allow the linker (LINK.exe) to map an old function to a new function.

## Syntax

> ALIAS \<*alias*> = \<*actual-name*>

#### Parameters

*actual-name*<br/>
The actual name of the function or procedure.  The angle brackets are required.

*alias*<br/>
The alternate or alias name.  The angle brackets are required.

## See also

[Directives Reference](../../assembler/masm/directives-reference.md)<br/>