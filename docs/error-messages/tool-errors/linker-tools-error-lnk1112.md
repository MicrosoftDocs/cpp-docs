---
description: "Learn more about: Linker Tools Error LNK1112"
title: "Linker Tools Error LNK1112"
ms.date: 05/23/2022
f1_keywords: ["LNK1112"]
helpviewer_keywords: ["LNK1112"]
ms.assetid: 425793d8-37e6-4072-9b6e-c3d4e9c12562
---
# Linker Tools Error LNK1112

> module machine type '*type1*' conflicts with target machine type '*type2*'

## Remarks

The object files specified as input were compiled for a different target platform.

For example, if you try to link an object file compiled with **`/clr`** and an object file compiled with **`/clr:pure`** (machine type CEE), the linker will generate the error LNK1112. The **`/clr:pure`** compiler option is deprecated in Visual Studio 2015 and unsupported in Visual Studio 2017.

Similarly, if you create one module with the x64 compiler and another module with the x86 compiler, and try to link them, the linker will generate LNK1112.

A possible reason for this error is if you're developing a 64-bit application but haven't installed one of the Visual C++ 64-bit compilers. Or, you're targeting an ARM or ARM64 platform, but you don't have the ARM or ARM64 build tools installed. To fix this issue, run the Visual Studio Installer and install the missing C++ components.

This error can also occur if you change the **Active solution configuration** in the **Configuration Manager** and then try to build the project before you delete the intermediate project files. To resolve this error, select **Rebuild Solution** from the **Build** menu. You can also select **Clean Solution** from the **Build** menu and then build the solution.

## See also

- [Linker tools errors and warnings](../../error-messages/tool-errors/linker-tools-errors-and-warnings.md)
