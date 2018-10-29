---
title: "Order of CL Options"
ms.date: "11/04/2016"
f1_keywords: ["cl"]
helpviewer_keywords: ["cl.exe compiler, setting options"]
ms.assetid: 300908ce-ae00-4b45-964b-e4e69ff6777b
---
# Order of CL Options

Options can appear anywhere on the CL command line, except for the /link option, which must occur last. The compiler begins with options specified in the [CL environment variable](../../build/reference/cl-environment-variables.md) and then reads the command line from left to right — processing command files in the order it encounters them. Each option applies to all files on the command line. If CL encounters conflicting options, it uses the rightmost option.

## See Also

[Compiler Command-Line Syntax](../../build/reference/compiler-command-line-syntax.md)