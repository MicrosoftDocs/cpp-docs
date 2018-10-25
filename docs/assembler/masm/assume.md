---
title: "ASSUME | Microsoft Docs"
ms.custom: ""
ms.date: "08/30/2018"
ms.technology: ["cpp-masm"]
ms.topic: "reference"
f1_keywords: ["ASSUME"]
dev_langs: ["C++"]
helpviewer_keywords: ["ASSUME directive"]
ms.assetid: cd162070-aee9-4c65-babc-005c6cc73d7c
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# ASSUME

Enables error checking for register values.

## Syntax

> ASSUME *segregister*:*name* [[, *segregister*:*name*]]...<br/>
> ASSUME *dataregister*:*type* [[, *dataregister*:*type*]]...<br/>
> ASSUME *register*:ERROR [[, *register*:ERROR]]...<br/>
> ASSUME [[*register*:]] NOTHING [[, *register*:NOTHING]]...

## Remarks

After an `ASSUME` is put into effect, the assembler watches for changes to the values of the given registers. **ERROR** generates an error if the register is used. **NOTHING** removes register error checking. You can combine different kinds of assumptions in one statement.

## See also

[Directives Reference](../../assembler/masm/directives-reference.md)<br/>