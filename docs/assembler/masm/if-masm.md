---
description: "Learn more about: IF"
title: "IF (MASM)"
ms.date: "12/17/2019"
helpviewer_keywords: ["IF directive"]
ms.assetid: 82e43712-4f0c-4bf6-90ce-0663e81af707
---
# IF

Grants assembly of *ifstatements* if *expression1* is true (nonzero) or *elseifstatements* if *expression1* is false (0) and *expression2* is true.

## Syntax

> **IF** *expression1*\
> *if-statements*\
> ⟦**ELSEIF** *expression2*\
> *elseif-statements*⟧\
> ⟦**ELSE**\
> *else-statements*⟧\
> **ENDIF**

## Remarks

The following directives may be substituted for [ELSEIF](elseif-masm.md): **ELSEIFB**, **ELSEIFDEF**, **ELSEIFDIF**, **ELSEIFDIFI**, **ELSEIFE**, **ELSEIFIDN**, **ELSEIFIDNI**, **ELSEIFNB**, and **ELSEIFNDEF**. Optionally, assembles *else-statements* if the previous expression is false. Note that the expressions are evaluated at assembly time.

## See also

[Directives reference](directives-reference.md)\
[MASM BNF Grammar](masm-bnf-grammar.md)
