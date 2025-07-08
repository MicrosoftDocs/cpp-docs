---
title: "Fatal Error C1854"
description: "Learn more about: Fatal Error C1854"
ms.date: 11/04/2016
f1_keywords: ["C1854"]
helpviewer_keywords: ["C1854"]
---
# Fatal Error C1854

> cannot overwrite information formed during creation of the precompiled header in object file: '*filename*'

## Remarks

You specified the [/Yu (Use Precompiled Header File)](../../build/reference/yu-use-precompiled-header-file.md) option after specifying the [/Yc (Create Precompiled Header File)](../../build/reference/yc-create-precompiled-header-file.md) option for the same file.

To fix this issue, in general, set only one file in your project to be compiled by using the **/Yc** option, and set all other files to compile by using the **/Yu** option. For details on the use of the **/Yc** option, and how to set it in the Visual Studio IDE, see [/Yc (Create Precompiled Header File)](../../build/reference/yc-create-precompiled-header-file.md). For more information on using precompiled headers, see [Creating Precompiled Header Files](../../build/creating-precompiled-header-files.md).
