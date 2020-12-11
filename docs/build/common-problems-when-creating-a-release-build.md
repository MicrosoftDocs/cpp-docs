---
description: "Learn more about: Common Problems When Creating a Release Build"
title: "Common Problems When Creating a Release Build"
ms.date: "11/04/2016"
helpviewer_keywords: ["unexpected code generation", "debugging [MFC], release builds", "release builds, troubleshooting", "stray pointers", "debug builds, difference from release builds", "MFC [C++], release builds", "heap layout problems", "pointers, stray", "release builds, building applications", "debug memory allocator", "optimization [C++], compiler", "projects [C++], debug configuration", "troubleshooting release builds", "memory [C++], overwrites"]
ms.assetid: 73cbc1f9-3e33-472d-9880-39a8e9977b95
---
# Common Problems When Creating a Release Build

During development, you will usually build and test with a debug build of your project. If you then build your application for a release build, you may get an access violation.

The list below shows the primary differences between a debug and a release (nondebug) build. There are other differences, but following are the primary differences that would cause an application to fail in a release build when it works in a debug build.

- [Heap Layout](#_core_heap_layout)

- [Compilation](#_core_compilation)

- [Pointer Support](#_core_pointer_support)

- [Optimizations](#_core_optimizations)

See the [/GZ (Catch Release-Build Errors in Debug Build)](reference/gz-enable-stack-frame-run-time-error-checking.md) compiler option for information on how to catch release build errors in debug builds.

## <a name="_core_heap_layout"></a> Heap Layout

Heap layout will be the cause of about ninety percent of the apparent problems when an application works in debug, but not release.

When you build your project for debug, you are using the debug memory allocator. This means that all memory allocations have guard bytes placed around them. These guard bytes detect a memory overwrite. Because heap layout is different between release and debug versions, a memory overwrite might not create any problems in a debug build, but may have catastrophic effects in a release build.

For more information, see [Check for Memory Overwrite](checking-for-memory-overwrites.md) and [Use the Debug Build To Check for Memory Overwrite](using-the-debug-build-to-check-for-memory-overwrite.md).

## <a name="_core_compilation"></a> Compilation

Many of the MFC macros and much of the MFC implementation changes when you build for release. In particular, the ASSERT macro evaluates to nothing in a release build, so none of the code found in ASSERTs will be executed. For more information, see [Examine ASSERT Statements](using-verify-instead-of-assert.md).

Some functions are inlined for increased speed in the release build. Optimizations are generally turned on in a release build. A different memory allocator is also being used.

## <a name="_core_pointer_support"></a> Pointer Support

The lack of debugging information removes the padding from your application. In a release build, stray pointers have a greater chance of pointing to uninitialized memory instead of pointing to debug information.

## <a name="_core_optimizations"></a> Optimizations

Depending on the nature of certain segments of code, the optimizing compiler might generate unexpected code. This is the least likely cause of release build problems, but it does arise on occasion. For a solution, see [Optimizing Your Code](optimizing-your-code.md).

## See also

[Release Builds](release-builds.md)<br/>
[Fixing Release Build Problems](fixing-release-build-problems.md)
