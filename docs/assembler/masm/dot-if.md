---
title: ".IF"
ms.date: "11/05/2019"
f1_keywords: [".IF"]
helpviewer_keywords: [".IF directive"]
ms.assetid: dccc7615-8fc7-4829-9f39-0ee405f6c1e3
---
# .IF (32-bit MASM)

Generates code that tests `condition1` (for example, AX > 7) and executes the *statements* if that condition is true. (32-bit MASM only.)

## Syntax

> **.IF** *condition1*<br/>
> *statements*<br/>
> [[**.ELSEIF** *condition2*<br/>
> *statements*]]<br/>
> [[**.ELSE**<br/>
> *statements*]]<br/>
> **.ENDIF**

## Remarks

If a [.ELSE](../../assembler/masm/dot-else.md) follows, its statements are executed if the original condition was false. Note that the conditions are evaluated at run time.

## See also

[Directives Reference](../../assembler/masm/directives-reference.md)<br/>