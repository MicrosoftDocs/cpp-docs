---
title: ".IF | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-masm"]
ms.topic: "reference"
f1_keywords: [".IF"]
dev_langs: ["C++"]
helpviewer_keywords: [".IF directive"]
ms.assetid: dccc7615-8fc7-4829-9f39-0ee405f6c1e3
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# .IF

Generates code that tests `condition1` (for example, AX > 7) and executes the *statements* if that condition is true.

## Syntax

> .IF condition1<br/>
> statements<br/>
> [[.ELSEIF condition2<br/>
> statements]]<br/>
> [[.ELSE<br/>
> statements]]<br/>
> .ENDIF

## Remarks

If a [.ELSE](../../assembler/masm/dot-else.md) follows, its statements are executed if the original condition was false. Note that the conditions are evaluated at run time.

## See Also

[Directives Reference](../../assembler/masm/directives-reference.md)<br/>