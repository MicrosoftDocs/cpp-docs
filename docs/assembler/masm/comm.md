---
description: "Learn more about: COMM"
title: "COMM"
ms.date: "12/06/2019"
f1_keywords: ["COMM"]
helpviewer_keywords: ["COMM directive"]
ms.assetid: a23548c4-ad04-41fa-91da-945f228de742
---
# COMM

Creates a communal variable with the attributes specified in *definition*.

## Syntax

> **COMM** *definition* ⟦__,__ *definition* ...⟧

## Remarks

Communal variables are allocated by the linker, and can't be initialized. This means that you can't depend on the location or sequence of such variables.

Each *definition* has the following form:

⟦*language-type*⟧ ⟦**NEAR** | **FAR**⟧ _label_**:**_type_⟦**:**_count_⟧

The *language-type*, **NEAR**, and **FAR** arguments are valid only in 32-bit MASM.

The optional *language-type* sets the naming conventions for the name that follows. It overrides any language specified by the **.MODEL** directive. The optional **NEAR** or **FAR** override the current memory model. The *label* is the name of the variable. The *type* can be any type specifier ([BYTE](byte-masm.md), [WORD](word.md), and so on) or an integer specifying the number of bytes. The optional *count* specifies the number of elements in the declared data object. The default *count* is one.

## Example

This example creates an array of 512 BYTE elements:

```asm
COMM FAR ByteArray:BYTE:512
```

## See also

[Directives reference](directives-reference.md)\
[MASM BNF Grammar](masm-bnf-grammar.md)
