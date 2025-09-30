---
title: "Fatal Error C1005"
description: "Learn more about: Fatal Error C1005"
ms.date: 11/04/2016
f1_keywords: ["C1005"]
helpviewer_keywords: ["C1005"]
---
# Fatal Error C1005

> string too big for buffer

## Remarks

A string in a compiler intermediate file overflowed a buffer.

You could get this error when the parameter that you pass to either the [/Fd](../../build/reference/fd-program-database-file-name.md) or [/Yl](../../build/reference/yl-inject-pch-reference-for-debug-library.md) compiler options is greater than 256 bytes.
