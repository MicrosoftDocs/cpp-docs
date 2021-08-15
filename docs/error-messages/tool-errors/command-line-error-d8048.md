---
description: "Learn about causes and solutions for command-line error D8048"
title: "Command-Line Error D8048"
ms.date: 04/18/2021
f1_keywords: ["D8048"]
helpviewer_keywords: ["D8048"]
---
# Command-line error D8048

> cannot compile C file '*file-name*' with /ZW option

Only C++ source code files can be passed to the compiler when you use the [`/ZW` (Windows Runtime compilation)](../../build/reference/zw-windows-runtime-compilation.md) compiler option.

## Remarks

By default, all files in a C++ Universal Windows platform (UWP) project are compiled by using the **`/ZW`** compiler option. The **`/ZW`** option enables the Windows Runtime compiler extensions, or C++/CX. Unfortunately, **`/ZW`** doesn't work on C source files.

You can disable C++/CX compilation selectively for C files in Visual Studio projects. Select your C file in Solution Explorer, then right-click to choose **Properties** from the shortcut menu. In the **Property Pages** dialog, select the **Configuration Properties** > **C/C++** -> **General** property page. Set the **Consume Windows Runtime Extension** property to *`No`*. Choose **OK** to save your changes.

For more information, see [Component Extensions for .NET and UWP](../../extensions/component-extensions-for-runtime-platforms.md).

## See also

[`/ZW` (Windows Runtime compilation)](../../build/reference/zw-windows-runtime-compilation.md)
