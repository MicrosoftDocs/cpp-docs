---
title: "Fatal Error C1209"
description: "Learn more about: Fatal Error C1209"
ms.date: 08/17/2022
f1_keywords: ["C1209"]
helpviewer_keywords: ["C1209"]
---
# Fatal Error C1209

> Friend assemblies not supported by the version of the runtime installed

## Remarks

C1208 occurs when you have a compiler for the current release, but a common language runtime from a previous release.

Some functionality of the compiler may not work on a previous version of the run time.

To resolve C1209, install the common language runtime that shipped with the compiler you're using.

For more information, see [Friend Assemblies (C++)](../../dotnet/friend-assemblies-cpp.md).

This error is obsolete in Visual Studio 2022 and later versions.
