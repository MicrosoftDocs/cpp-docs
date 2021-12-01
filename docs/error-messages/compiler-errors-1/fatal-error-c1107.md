---
description: "Learn more about: Fatal Error C1107"
title: "Fatal Error C1107"
ms.date: 11/22/2021
f1_keywords: ["C1107"]
helpviewer_keywords: ["C1107"]
ms.assetid: 541a4d9f-10bc-4dd8-b68e-15e548f3dc0a
---
# Fatal Error C1107

> could not find assembly '*file*': please specify the assembly search path using `/AI` or by setting the `LIBPATH` environment variable

A metadata file was passed to a [`#using`](../../preprocessor/hash-using-directive-cpp.md) directive that the compiler was unable to locate.

LIBPATH, which is described in the article for `#using`, and the [`/AI`](../../build/reference/ai-specify-metadata-directories.md) compiler option allow you to specify directories in which the compiler will look for referenced metadata files.

This error can occur when you retarget a project to use the Visual Studio 2022 toolset. Projects created by older versions of the toolset set properties `TargetRuntime=Managed` and `TargetFrameworkVersion=4.0` by default. Starting in Visual Studio 2022, .NET Framework 4.0 isn't installed, and projects default to `TargetRuntime=Native`.

If you retarget a project that used [`/clr`](../../build/reference/clr-common-language-runtime-compilation.md) for some or all of its source files, starting in Visual Studio 2022 you must set certain properties to build your project. If all the source files in your project are compiled as managed code, use the **`/clr`** compiler option for your project. If only some files in your project use **`/clr`**, set the `ManagedAssembly=true` property in your project properties.

To set these properties in the IDE, open the Property Pages dialog for your project. Select the **Configuration Properties** > **Advanced** page.

- To set **`/clr`** for the entire project, change the **Common Language Runtime Support** property. You may also need to set the **.NET Target Framework Version** property. Choose **Okay** or **Apply** to save your changes.

- If you only use **`/clr`** for some of the files in your project, set the **Enable CLR Support for individual files** property to **Yes**. This value sets the `ManagedAssembly=true` property in your project properties. Choose **Okay** or **Apply** to save your changes.

For more information about the options on the **Advanced** property page, see [Advanced Property Page](../../build/reference/advanced-property-page.md).
