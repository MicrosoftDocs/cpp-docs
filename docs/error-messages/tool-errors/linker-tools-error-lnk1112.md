---
description: "Learn more about: Linker Tools Error LNK1112"
title: "Linker Tools Error LNK1112"
ms.date: "11/04/2016"
f1_keywords: ["LNK1112"]
helpviewer_keywords: ["LNK1112"]
ms.assetid: 425793d8-37e6-4072-9b6e-c3d4e9c12562
---
# Linker Tools Error LNK1112

> module machine type '*type1*' conflicts with target machine type '*type2*'

## Remarks

The object files specified as input were compiled for different computer types.

For example, if you try to link an object file compiled with **/clr** and an object file compiled with **/clr:pure** (machine type CEE), the linker will generate the error LNK1112. The **/clr:pure** compiler option is deprecated in Visual Studio 2015 and unsupported in Visual Studio 2017.

Similarly, if you create one module with the x64 compiler and another module with the x86 compiler, and try to link them, the linker will generate LNK1112.

A possible reason for this error is if you are developing a 64-bit application but have not installed one of the Visual C++ 64-bit compilers. In this case, 64-bit configurations will not be available. To fix this issue, run the installer for Visual Studio and install the missing C++ components.

This error can also occur if you change the **Active solution configuration** in the **Configuration Manager** and then try to build the project before you delete the intermediate project files. To resolve this error, select **Rebuild Solution** from the **Build** menu. You can also select **Clean Solution** from the **Build** menu and then build the solution.

## See also

- [Linker Tools Errors and Warnings](../../error-messages/tool-errors/linker-tools-errors-and-warnings.md)
