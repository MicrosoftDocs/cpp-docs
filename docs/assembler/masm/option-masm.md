---
description: "Learn more about: OPTION"
title: "OPTION (MASM)"
ms.date: 07/15/2020
f1_keywords: ["option"]
helpviewer_keywords: ["OPTION directive"]
ms.assetid: 8e10dabd-e36f-4586-ab01-ada96736b0bd
---
# OPTION

Enables and disables features of the assembler.

## Syntax

> **`OPTION`** *option-list*

## Remarks

Available options include:

:::row:::
   :::column span="":::
      **`CASEMAP`**\
      **`DOTNAME`**\
      **`NODOTNAME`**\
      **`EMULATOR`**\
      **`NOEMULATOR`**\
      **`EPILOGUE`**\
      **`EXPR16`**
   :::column-end:::
   :::column span="":::
      **`EXPR32`**\
      **`LANGUAGE`**\
      **`LJMP`**\
      **`NOLJMP`**\
      **`M510`**\
      **`NOM510`**\
      **`NOKEYWORD`**
   :::column-end:::
   :::column span="":::
      **`NOSIGNEXTEND`**\
      **`OFFSET`**\
      **`OLDMACROS`**\
      **`NOOLDMACROS`**\
      **`OLDSTRUCTS`**\
      **`NOOLDSTRUCTS`**\
      **`PROC`**
   :::column-end:::
   :::column span="":::
      **`PROLOGUE`**\
      **`READONLY`**\
      **`NOREADONLY`**\
      **`SCOPED`**\
      **`NOSCOPED`**\
      **`SEGMENT`**\
      **`SETIF2`**
   :::column-end:::
:::row-end:::

The syntax for LANGUAGE is **`OPTION LANGUAGE:`** _`x`_, where *`x`* is one of **`C`**, **`SYSCALL`**, **`STDCALL`**, **`PASCAL`**, **`FORTRAN`**, or **`BASIC`**. **`SYSCALL`**, **`PASCAL`**, **`FORTRAN`**, and **`BASIC`** are not supported with [`.MODEL`](dot-model.md) **`FLAT`**.

## See also

[Directives reference](directives-reference.md)\
[MASM BNF Grammar](masm-bnf-grammar.md)
