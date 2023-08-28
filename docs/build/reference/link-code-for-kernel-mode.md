---
description: "Learn more about: /KERNEL (Create kernel mode binary)."
title: /KERNEL
ms.date: "08/25/2023"
---
# /KERNEL (Create kernel mode binary)

Create a binary that is suitable for running in kernel mode.

## Syntax

> **`/KERNEL`**

## Remarks

Causes the linker to emit a warning if any object file or library linked in the binary wasn't compiled with [/kernel](kernel-create-kernel-mode-binary.md).

Code that can run in kernel mode must be compiled with the **`/kernel`** option. If you link a binary that contains code that wasn't compiled with **`/kernel`**, the binary might not run correctly in kernel mode.

Code for kernel mode is compiled with a simplified set of C++ language features that are specific to code that runs in kernel mode. The compiler produces warnings for C++ language features that are potentially disruptive but can't be disabled. For more information about compiling code in kernel mode, see [/kernel (Create kernel mode binary)](kernel-create-kernel-mode-binary.md).

### To set this linker option in Visual Studio

1. Open the project **Property Pages** dialog box. For more information, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **Command Line** property page.

1. In **Additional Options**, enter `/KERNELMODE`.

## See also

- [MSVC linker reference](linking.md)
- [MSVC linker options](linker-options.md)
- [Compiler options: /kernel](kernel-create-kernel-mode-binary.md)