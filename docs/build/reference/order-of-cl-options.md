---
description: "Learn more about: Order of CL Options"
title: "Order of CL Options (C++) - Visual Studio"
ms.date: "12/14/2018"
helpviewer_keywords: ["cl.exe compiler, setting options"]
ms.assetid: 300908ce-ae00-4b45-964b-e4e69ff6777b
---
# Order of CL Options

Options can appear anywhere on the CL command line, except for the /link option, which must occur last. The compiler begins with options specified in the [CL environment variable](cl-environment-variables.md) and then reads the command line from left to right — processing command files in the order it encounters them. Each option applies to all files on the command line. If CL encounters conflicting options, it uses the rightmost option.

## See also

[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
