---
description: "Learn more about: Understanding Manifest Generation for C/C++ Programs"
title: "Understanding Manifest Generation for C/C++ Programs"
ms.date: "11/04/2016"
helpviewer_keywords: ["manifests [C++]"]
ms.assetid: a1f24221-5b09-4824-be48-92eae5644b53
---
# Understanding Manifest Generation for C/C++ Programs

A [manifest](/windows/win32/sbscs/manifests) is an XML document that can be an external XML file or a resource embedded inside an application or an assembly. The manifest of an [isolated application](/windows/win32/SbsCs/isolated-applications) is used to manage the names and versions of shared side-by-side assemblies to which the application should bind at run time. The manifest of a side-by-side assembly specifies its dependencies on names, versions, resources, and other assemblies.

There are two ways to create a manifest for an isolated application or a side-by-side assembly. First, the author of the assembly can manually create a manifest file following rules and naming requirements. Alternatively, if a program only depends on Visual C++ assemblies such as CRT, MFC, ATL or others, then a manifest can be generated automatically by the linker.

The headers of Visual C++ libraries contain assembly information, and when the libraries are included in application code, this assembly information is used by the linker to form a manifest for the final binary. The linker does not embed the manifest file inside the binary, and can only generate the manifest as an external file. Having a manifest as an external file may not work for all scenarios. For example, it is recommended that private assemblies have embedded manifests. In command line builds such as those that use nmake to build code, a manifest can be embedded using the manifest tool; for more information see [Manifest Generation at the Command Line](manifest-generation-at-the-command-line.md). When building in Visual Studio, a manifest can be embedded by setting a property for the manifest tool in the **Project Properties** dialog; see [Manifest Generation in Visual Studio](manifest-generation-in-visual-studio.md).

## See also

[Concepts of Isolated Applications and Side-by-side Assemblies](concepts-of-isolated-applications-and-side-by-side-assemblies.md)<br/>
[Building C/C++ Isolated Applications and Side-by-side Assemblies](building-c-cpp-isolated-applications-and-side-by-side-assemblies.md)
