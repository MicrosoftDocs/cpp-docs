---
description: "Learn more about: Compiler Warning (level 1, Error) C4233"
title: "Compiler Warning (level 1, Error) C4233"
ms.date: "10/25/2017"
f1_keywords: ["C4233"]
helpviewer_keywords: ["C4233"]
---
# Compiler Warning (level 1, Error) C4233

> nonstandard extension used: '*keyword*' keyword only supported in C++, not C

## Remarks

The compiler compiled your source code as C rather than C++, and you used a keyword that is only valid in C++. The compiler compiles your source file as C if the extension of the source file is .c or you use [/Tc](../../build/reference/tc-tp-tc-tp-specify-source-file-type.md).

This warning is always issued as an error. Use the [warning](../../preprocessor/warning.md) pragma to disable.
