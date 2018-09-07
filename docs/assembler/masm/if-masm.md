---
title: "IF (MASM) | Microsoft Docs"
ms.custom: ""
ms.date: "08/30/2018"
ms.technology: ["cpp-masm"]
ms.topic: "reference"
f1_keywords: ["if"]
dev_langs: ["C++"]
helpviewer_keywords: ["IF directive"]
ms.assetid: 82e43712-4f0c-4bf6-90ce-0663e81af707
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# IF (MASM)

Grants assembly of *ifstatements* if *expression1* is true (nonzero) or *elseifstatements* if *expression1* is false (0) and *expression2* is true.

## Syntax

> IF *expression1*<br/>
> *ifstatements*<br/>
> [[ELSEIF *expression2*<br/>
> *elseifstatements*]]<br/>
> [[ELSE<br/>
> *elsestatements*]]<br/>
> ENDIF

## Remarks

The following directives may be substituted for [ELSEIF](../../assembler/masm/elseif-masm.md): **ELSEIFB**, **ELSEIFDEF**, **ELSEIFDIF**, **ELSEIFDIFI**, **ELSEIFE**, **ELSEIFIDN**, **ELSEIFIDNI**, **ELSEIFNB**, and **ELSEIFNDEF**. Optionally, assembles *elsestatements* if the previous expression is false. Note that the expressions are evaluated at assembly time.

## See also

[Directives Reference](../../assembler/masm/directives-reference.md)<br/>