---
description: Learn more about the alternatives for the OPTION LANGUAGE directive
title: "OPTION LANGUAGE"
ms.date: 09/21/2021
f1_keywords: ["language"]
helpviewer_keywords: ["OPTION LANGUAGE directive"]
---
# `OPTION LANGUAGE`

Sets default language features such as calling convention.

## Syntax

> **`OPTION LANGUAGE:`** *language*

## Remarks

Available languages include:

:::row:::
   :::column span="":::
      **`C`**\
      **`SYSCALL`**\
   :::column-end:::
   :::column span="":::
      **`STDCALL`**\
      **`PASCAL`**\
   :::column-end:::
   :::column span="":::
      **`FORTRAN`**\
      **`BASIC`**
   :::column-end:::
:::row-end:::

**`SYSCALL`**, **`PASCAL`**, **`FORTRAN`**, and **`BASIC`** aren't supported when used with [`.MODEL FLAT`](../../assembler/masm/dot-model.md).

## See also

[`OPTION` directive](../../assembler/masm/option-masm.md)\
[Directives reference](../../assembler/masm/directives-reference.md)
