---
description: "Learn more about: Compiler Error C3505"
title: "Compiler Error C3505"
ms.date: "11/04/2016"
f1_keywords: ["C3505"]
helpviewer_keywords: ["C3505"]
ms.assetid: ed73c99e-93a1-4f3a-bac7-ba7ed5d836e4
---
# Compiler Error C3505

> cannot load type library '*guid*'

C3505 can be caused if you are running the 32-bit, x86-hosted cross-compiler for 64-bit, x64 targets on a 64-bit machine, because the compiler is running under WOW64 and can only read from the 32-bit registry hive.

You can resolve this error by building both 32-bit and 64-bit versions of the type library you are trying to import, and then register them both.  Or you can use the native 64-bit compiler, which requires you to change your **VC++ Directories** property in the IDE to point to the 64-bit compiler.

For more information, see,

- [How to: Enable a 64-Bit Visual C++ Toolset on the Command Line](../../build/how-to-enable-a-64-bit-visual-cpp-toolset-on-the-command-line.md)

- [How to: Configure Visual C++ Projects to Target 64-Bit, x64 Platforms](../../build/how-to-configure-visual-cpp-projects-to-target-64-bit-platforms.md)
