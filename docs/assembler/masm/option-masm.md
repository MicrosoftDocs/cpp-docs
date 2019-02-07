---
title: "OPTION (MASM)"
ms.date: "08/30/2018"
f1_keywords: ["option"]
helpviewer_keywords: ["OPTION directive"]
ms.assetid: 8e10dabd-e36f-4586-ab01-ada96736b0bd
---
# OPTION (MASM)

Enables and disables features of the assembler.

## Syntax

> OPTION *optionlist*

## Remarks

Available options include:

|||||
|-|-|-|-|
|**CASEMAP**|**DOTNAME**|**NODOTNAME**|**EMULATOR**|
|**NOEMULATOR**|**EPILOGUE**|**EXPR16**|**EXPR32**|
|**LANGUAGE**|**LJMP**|**NOLJMP**|**M510**|
|**NOM510**|**NOKEYWORD**|**NOSIGNEXTEND**|**OFFSET**|
|**OLDMACROS**|**NOOLDMACROS**|**OLDSTRUCTS**|**NOOLDSTRUCTS**|
|**PROC**|**PROLOGUE**|**READONLY**|**NOREADONLY**|
|**SCOPED**|**NOSCOPED**|**SEGMENT**|**SETIF2**.|

The syntax for LANGUAGE is **OPTION LANGUAGE:**<em>x</em>, where *x* is one of C, SYSCALL, STDCALL, PASCAL, FORTRAN, or BASIC.  SYSCALL, PASCAL, FORTRAN, and BASIC are not supported with used with [.MODEL](../../assembler/masm/dot-model.md) FLAT.

## See also

- [Directives Reference](../../assembler/masm/directives-reference.md)
