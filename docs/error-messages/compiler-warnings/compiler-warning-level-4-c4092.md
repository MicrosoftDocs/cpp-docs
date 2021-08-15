---
description: "Learn more about: Compiler Warning (level 4) C4092"
title: "Compiler Warning (level 4) C4092"
ms.date: "11/04/2016"
f1_keywords: ["C4092"]
helpviewer_keywords: ["C4092"]
ms.assetid: 396ae826-a892-4327-bd66-f4762376d72b
---
# Compiler Warning (level 4) C4092

> sizeof returns 'unsigned long'

The operand of the **`sizeof`** operator was very large, so **`sizeof`** returned an **`unsigned long`**. This warning occurs under the Microsoft extensions ([`/Ze`](../../build/reference/za-ze-disable-language-extensions.md)). Under ANSI compatibility (**`/Za`**), the result is truncated instead.
