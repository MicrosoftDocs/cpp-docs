---
description: "Learn more about: Argument access"
title: "Argument access"
ms.date: "04/04/2018"
f1_keywords: ["c.arguments"]
helpviewer_keywords: ["argument access macros [C++]", "variable-length argument lists"]
ms.assetid: 7046ae34-a0ec-44f0-815d-3209492a3e19
---
# Argument access

The **va_arg**, **va_end**, and **va_start** macros provide access to function arguments when the number of arguments is variable. These macros are defined in \<stdarg.h> for ANSI/ISO C compatibility and in \<varargs.h> for compatibility with UNIX System V.

## Argument-access macros

|Macro|Use|
|-----------|-------------------------------|
|[va_arg](../c-runtime-library/reference/va-arg-va-copy-va-end-va-start.md)|Retrieve argument from list|
|[va_end](../c-runtime-library/reference/va-arg-va-copy-va-end-va-start.md)|Reset pointer|
|[va_start](../c-runtime-library/reference/va-arg-va-copy-va-end-va-start.md)|Set pointer to beginning of argument list|

## See also

[Universal C runtime routines by category](../c-runtime-library/run-time-routines-by-category.md)
