---
description: "Learn more about: Command-Line Error D8045"
title: "Command-Line Error D8045"
ms.date: "11/04/2016"
f1_keywords: ["D8045"]
helpviewer_keywords: ["D8045"]
ms.assetid: 01c8808c-bac1-4b4d-8a90-b595f95e9318
---
# Command-Line Error D8045

cannot compile C file 'file' with the /clr option

Only C++ source code files can be passed to a compilation that uses **/clr**.  Use **/TP** to compile a .c file as a .cpp file; see [/Tc, /Tp, /TC, /TP (Specify Source File Type)](../../build/reference/tc-tp-tc-tp-specify-source-file-type.md) for more information.

For more information, see [/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md).

D8045 can also occur if you compile an ATL application using Visual C++. See [How to: Migrate to /clr](../../dotnet/how-to-migrate-to-clr.md) for more information.
