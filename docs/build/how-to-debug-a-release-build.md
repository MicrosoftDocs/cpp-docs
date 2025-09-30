---
description: "Learn more about: How to: Debug a Release Build"
title: "How to: Debug a Release Build"
ms.date: 03/14/2025
helpviewer_keywords: ["debugging [C++], release builds", "release builds, debugging"]
---
# How to: Debug a Release Build

This article explains which compiler and linker switches to set to enable you to debug a release build of an application.

A better experience is available starting in Visual Studio 2022 version 17.14 that allows you to debug optimized code as if it were compiled unoptimized, while retaining the speed of optimized code. For more information, see [C++ Dynamic Debugging (Preview)](/visualstudio/debugger/cpp-dynamic-debugging).

## To debug a release build

1. Open the **Property Pages** dialog box for the project. For details, see [Set C++ compiler and build properties in Visual Studio](working-with-project-properties.md).
1. Click the **C/C++** node. Set **Debug Information Format** to [C7 compatible (/Z7)](reference/z7-zi-zi-debug-information-format.md) or **Program Database (/Zi)**.
1. Expand **Linker** and click the **General** node. Set **Enable Incremental Linking** to [No (/INCREMENTAL:NO)](reference/incremental-link-incrementally.md).
1. Under **Linker**, select the **Debugging** node. Set **Generate Debug Info** to [Yes (/DEBUG)](reference/debug-generate-debug-info.md).
1. Under **Linker**, select the **Optimization** node. Set **References** to [No (/OPT:NOREF)](reference/opt-optimizations.md) and **Enable COMDAT Folding** to [No (/OPT:NOICF)](reference/opt-optimizations.md).
1. You can now debug your release build application. To find a problem, step through the code (or use Just-In-Time debugging) until you find where the failure occurs, and then determine the incorrect parameters or code.

   If an application works in a debug build, but fails in a release build, one of the compiler optimizations may be exposing a defect in the source code. To isolate the problem, disable selected optimizations for each source code file until you locate the file and the optimization that is causing the problem. (To expedite the process, you can divide the files into two groups, disable optimization on one group, and when you find a problem in a group, continue dividing until you isolate the problem file.)

   Use [/RTC](reference/rtc-run-time-error-checks.md) to try to expose such bugs in your debug builds.

   For more information, see [Optimizing Your Code](optimizing-your-code.md).

## See also

[Fixing Release Build Problems](fixing-release-build-problems.md)
