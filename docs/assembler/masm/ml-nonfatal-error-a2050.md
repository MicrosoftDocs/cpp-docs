---
description: "Learn more about: ML Nonfatal Error A2050"
title: "ML Nonfatal Error A2050"
ms.date: "12/17/2019"
ms.custom: "error-reference"
f1_keywords: ["A2050"]
helpviewer_keywords: ["A2050"]
ms.assetid: 16f3a58f-4bde-48f1-b0e3-2ed9612780a5
---
# ML Nonfatal Error A2050

**real or BCD number not allowed**

A floating-point (real) number or binary coded decimal (BCD) constant was used other than as a data initializer.

One of the following occurred:

- A real number or a BCD was used in an expression.

- A real number was used to initialize a directive other than [DWORD](dword.md), [QWORD](qword.md), or [TBYTE](tbyte.md).

- A BCD was used to initialize a directive other than `TBYTE`.

## See also

[ML Error Messages](ml-error-messages.md)
