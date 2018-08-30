---
title: "MACRO | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-masm"]
ms.topic: "reference"
f1_keywords: ["MACRO"]
dev_langs: ["C++"]
helpviewer_keywords: ["MACRO directive"]
ms.assetid: 89434f7c-bc2c-4e91-8940-fe2db8785233
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# MACRO

Marks a macro block called *name* and establishes *parameter* placeholders for arguments passed when the macro is called.

## Syntax

> *name* MACRO [[*parameter* [[:REQ | :=*default* | :VARARG]] ]] ...<br/>
> *statements*<br/>
> ENDM [[*value*]]

## Remarks

A macro function returns *value* to the calling statement.

## See Also

[Directives Reference](../../assembler/masm/directives-reference.md)<br/>