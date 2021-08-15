---
description: "Learn more about: Diagnostic Printed by the assert Function"
title: "Diagnostic Printed by the assert Function"
ms.date: "11/04/2016"
ms.assetid: 78b64200-520d-40da-9a61-71553f411d4f
---
# Diagnostic Printed by the assert Function

**ANSI 4.2** The diagnostic printed by and the termination behavior of the **assert** function

The **assert** function prints a diagnostic message and calls the **abort** routine if the expression is false (0). The diagnostic message has the form

> **Assertion failed**: <em>expression</em>**, file** <em>filename</em>**, line** *linenumber*

where *filename* is the name of the source file and *linenumber* is the line number of the assertion that failed in the source file. No action is taken if *expression* is true (nonzero).

## See also

[Library Functions](../c-language/library-functions.md)
