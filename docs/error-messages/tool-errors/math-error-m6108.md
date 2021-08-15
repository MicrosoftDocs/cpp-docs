---
description: "Learn more about: Math Error M6108"
title: "Math Error M6108"
ms.date: "11/04/2016"
f1_keywords: ["M6108"]
helpviewer_keywords: ["M6108"]
ms.assetid: 054893b4-49bc-45d9-882f-7cb50ba387c0
---
# Math Error M6108

square root

The operand in a square-root operation was negative.

Program terminates with exit code 136.

> [!NOTE]
> The `sqrt` function in the C run-time library and the FORTRAN intrinsic function **SQRT** do not generate this error. The C `sqrt` function checks the argument before performing the operation and returns an error value if the operand is negative. The FORTRAN **SQRT** function generates the DOMAIN error [M6201](../../error-messages/tool-errors/math-error-m6201.md) instead of this error.
