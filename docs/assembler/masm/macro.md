---
description: "Learn more about: MACRO"
title: "MACRO"
ms.date: "12/16/2019"
f1_keywords: ["MACRO"]
helpviewer_keywords: ["MACRO directive"]
ms.assetid: 89434f7c-bc2c-4e91-8940-fe2db8785233
---
# MACRO

Marks a macro block called *name* and establishes *parameter* placeholders for arguments passed when the macro is called.

## Syntax

> *name*  **MACRO** ⟦*parameter* ⟦**:REQ** | :=*default* | *args* **:VARARG**⟧ ...⟧\
> *statements*\
⟦**GOTO** :*macrolabelId*⟧\
> ⟦**EXITM**⟧\
> **ENDM** ⟦*value*⟧

## Remarks

A macro function returns *value* to the calling statement.

## See also

[Directives reference](directives-reference.md)\
[GOTO (MASM)](goto-masm.md)\
[ENDM](endm.md)\
[MASM BNF Grammar](masm-bnf-grammar.md)
