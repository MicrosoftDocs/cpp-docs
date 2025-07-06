---
title: "Fatal Error C1211"
description: "Learn more about: Fatal Error C1211"
ms.date: 08/17/2022
f1_keywords: ["C1211"]
helpviewer_keywords: ["C1211"]
---
# Fatal Error C1211

> The TypeForwardedTo Custom Attribute is not supported by the version of the runtime installed

## Remarks

C1211 occurs when you have a compiler for the current release, but a common language runtime from a previous release.

Some functionality of the compiler may not work on a previous version of the run time.

To resolve C1211, install the common language runtime that shipped with the compiler you're using.

For more information, see [Type Forwarding (C++/CLI)](../../extensions/type-forwarding-cpp-cli.md).

This error is obsolete in Visual Studio 2022 and later versions.
