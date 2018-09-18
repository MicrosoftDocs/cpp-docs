---
title: "Underflow of Floating-Point Values | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
dev_langs: ["C++"]
ms.assetid: 78af8016-643c-47db-b4f1-7f06cb4b243e
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Underflow of Floating-Point Values

**ANSI 4.5.1** Whether the mathematics functions set the integer expression `errno` to the value of the macro `ERANGE` on underflow range errors

A floating-point underflow does not set the expression `errno` to `ERANGE`. When a value approaches zero and eventually underflows, the value is set to zero.

## See Also

[Library Functions](../c-language/library-functions.md)