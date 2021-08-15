---
description: "Learn more about: Compiler Error C2855"
title: "Compiler Error C2855"
ms.date: 02/16/2021
f1_keywords: ["C2855"]
helpviewer_keywords: ["C2855"]
---
# Compiler Error C2855

> command-line option '*option*' inconsistent with precompiled header

This error occurs when a command-line option differs from the options used to create the precompiled header.

## Remarks

Error C2855 can occur when you make an incremental build after changing a compiler option. It can also happen if you set specific compiler options for individual source files.

To resolve this error, regenerate the precompiled header by using the specified command-line option. To regenerate the precompiled header, build the associated source file. For example, projects created by a Visual Studio template usually create a source file named *`pch.cpp`* to generate the precompiled header. (In older versions of Visual Studio, this file is named *`stdafx.cpp`*.) In other projects, the source file to rebuild is the one built by using the [`/Yc` (Create precompiled header file)](../../build/reference/yc-create-precompiled-header-file.md) compiler option. We recommend you rebuild your entire project after making a change to the precompiled header.

## See also

[`/Y` (Precompiled headers)](../../build/reference/y-precompiled-headers.md)\
[Precompiled header files](../../build/creating-precompiled-header-files.md)
