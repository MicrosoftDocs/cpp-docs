---
title: "COMM | Microsoft Docs"
ms.custom: ""
ms.date: "08/30/2018"
ms.technology: ["cpp-masm"]
ms.topic: "reference"
f1_keywords: ["COMM"]
dev_langs: ["C++"]
helpviewer_keywords: ["COMM directive"]
ms.assetid: a23548c4-ad04-41fa-91da-945f228de742
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# COMM

Creates a communal variable with the attributes specified in *definition*.

## Syntax

> **COMM** *definition* [, *definition*] ...

## Remarks

Communal variables are allocated by the linker, and can't be initialized. This means that you can't depend on the location or sequence of such variables.

Each *definition* has the following form:

[*langtype*] [**NEAR** &#124; **FAR**] _label_**:**_type_[**:**_count_]

The optional *langtype* sets the naming conventions for the name that follows. It overrides any language specified by the **.MODEL** directive. The optional **NEAR** or **FAR** override the current memory model. The *label* is the name of the variable. The *type* can be any type specifier ([BYTE](../../assembler/masm/byte-masm.md), [WORD](../../assembler/masm/word.md), and so on) or an integer specifying the number of bytes. The optional *count* specifies the number of elements in the declared data object; the default is one.

## Example

This example creates an array of 512 BYTE elements:

```asm
COMM FAR ByteArray:BYTE:512
```

## See also

[Directives Reference](../../assembler/masm/directives-reference.md)<br/>
