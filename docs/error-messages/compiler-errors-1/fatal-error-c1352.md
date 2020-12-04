---
description: "Learn more about: Fatal Error C1352"
title: "Fatal Error C1352"
ms.date: "11/04/2016"
f1_keywords: ["C1352"]
helpviewer_keywords: ["C1352"]
ms.assetid: d044e8b0-b6ef-4d57-8eb5-6254071be707
---
# Fatal Error C1352

Invalid or corrupt MSIL in function 'function' from module 'file'

A .netmodule was passed to the compiler, but the compiler detected corruption in the file.  Ask the person who produced the .netmodule to investigate.

The compiler does not check .netmodule files for all types of corruption.  It does, however, check that all control paths in a function contain a return statement.

For more information, see [.netmodule Files as Linker Input](../../build/reference/netmodule-files-as-linker-input.md).
