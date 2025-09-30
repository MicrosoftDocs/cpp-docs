---
title: "Fatal Error C1210"
description: "Learn more about: Fatal Error C1210"
ms.date: 08/17/2022
f1_keywords: ["C1210"]
helpviewer_keywords: ["C1210"]
---
# Fatal Error C1210

> `/clr:pure` and `/clr:safe` are not supported by the version of the runtime installed

## Remarks

The **`/clr:pure`** and **`/clr:safe`** compiler options are deprecated in Visual Studio 2015 and unsupported in Visual Studio 2017.

C1210 occurs when you have a compiler for the current release, but a common language runtime from a previous release.

Some functionality of the compiler may not work on a previous version of the run time.

To resolve C1210, install the common language runtime version that is intended for use with your compiler.

This error is obsolete in Visual Studio 2022 and later versions.
