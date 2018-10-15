---
title: "PROTO | Microsoft Docs"
ms.custom: ""
ms.date: "08/30/2018"
ms.technology: ["cpp-masm"]
ms.topic: "reference"
f1_keywords: ["PROTO"]
dev_langs: ["C++"]
helpviewer_keywords: ["PROTO directive"]
ms.assetid: 0487ee16-9dc7-43d1-9445-cd1601f5a080
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# PROTO

Prototypes a function/procedure. The prototype created by the PROTO directive can then be called with the [INVOKE](https://docs.microsoft.com/en-us/cpp/assembler/masm/invoke?view=vs-2017) directive.

## Syntax

> *label* PROTO [[*distance*]] [[*langtype*]] [[, [[*parameter*]]:*tag*]]...

> *langtype*: Parameter that sets the calling and naming convention for procedures and public symbols. They can be divided into:
>1. 32-bit: C, STDCALL
>2. 16-bit: C, BASIC, FORTRAN, PASCAL SYSCALL, STDCALL

>Choice of *langtype* (16 or 32-bit) depends on the target platform.

>Example:<br/>addup3 PROTO NEAR C, argcount:WORD, arg1:VARARG

## See also

[Directives Reference](../../assembler/masm/directives-reference.md)<br/>
[.MODEL Reference](https://msdn.microsoft.com/en-us/library/ss9fh0d6.aspx)<br/>
[MASM Programmer's Guide (Version 6.1)](http://people.sju.edu/~ggrevera/arch/references/MASM61PROGUIDE.pdf)<br/>
