---
description: "Learn more about the system_header pragma."
title: "system_header pragma"
ms.date: 07/02/2021
f1_keywords: ["vc-pragma.system_header", "system_header_CPP", "system_header"]
helpviewer_keywords: ["pragma, system_header", "system_header pragma"]
no-loc: ["pragma"]
---
# `system_header` pragma

Treat the rest of the file as external for diagnostics reports.

## Syntax

> **`#pragma system_header`**

## Remarks

Starting in Visual Studio 2017 version 15.6, the compiler lets you set two different default diagnostic warning levels on the command line. Normally, you use a [`/W0`, `/W1`, `/W2`, `/W3`, or `/W4`](../build/reference/compiler-option-warning-level.md) compiler option to specify a single diagnostic level for all code in a project. However, your project might include system header files or files from external libraries that generate warnings at the specified level. When you can't or don't want to edit these files, you can specify them as *external*. Files specified as external can have a separate compiler diagnostic level applied to them as a group. For more information on how to specify external files and the external warning level to the compiler, see [`/external`](../build/reference/external-external-headers-diagnostics.md).

For example, a common scenario uses the **`/external:W1`** option to apply a **`/W1`** warning level to external library header files, while you use **`/W4 /WX`** on your own code. Then you don't see minor diagnostics for the code that isn't yours.

The **`system_header`** pragma tells the compiler to show diagnostics at the **`/external:Wn`** level for the rest of the source file. The **`system_header`** pragma applies even if no other files are specified as external to the compiler. However, if no **`/external:Wn`** option level is specified, the compiler issues a diagnostic and uses the same warning level it applies to non-external files. Other pragma directives that affect warning behavior still apply after a **`system_header`** pragma.

The **`system_header`** pragma is available starting in Visual Studio 2019 version 16.10.

## See also

[`/external`](../build/reference/external-external-headers-diagnostics.md)
[Pragma directives and the `__pragma` and `_Pragma` keywords](./pragma-directives-and-the-pragma-keyword.md)
