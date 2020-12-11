---
description: "Learn more about: Release Builds"
title: "C++ release builds - Visual Studio"
ms.date: "12/10/2018"
helpviewer_keywords: ["debugging [C++], release builds", "release builds", "debug builds, converting to release build"]
ms.assetid: fa9a78fa-f4b5-4722-baf4-aec655c4ff0f
---
# Release Builds

A release build uses optimizations. When you use optimizations to create a release build, the compiler will not produce symbolic debugging information. The absence of symbolic debugging information, along with the fact that code is not generated for TRACE and ASSERT calls, means that the size of your executable file is reduced and will therefore be faster.

## In this section

[Common Problems When Creating a Release Build](common-problems-when-creating-a-release-build.md)<br/>
[Fixing Release Build Problems](fixing-release-build-problems.md)<br/>
[Using VERIFY Instead of ASSERT](using-verify-instead-of-assert.md)<br/>
[Using the Debug Build to Check for Memory Overwrite](using-the-debug-build-to-check-for-memory-overwrite.md)<br/>
[How to: Debug a Release Build](how-to-debug-a-release-build.md)<br/>
[Checking for Memory Overwrites](checking-for-memory-overwrites.md)<br/>
[Optimizing Your Code](optimizing-your-code.md)

## See also

[C/C++ Building Reference](reference/c-cpp-building-reference.md)
