---
description: "Learn more about: Resource Compiler Fatal Error RC1052"
title: "Resource Compiler Fatal Error RC1052"
ms.date: "11/04/2016"
f1_keywords: ["RC1052"]
helpviewer_keywords: ["RC1052"]
ms.assetid: 59803673-492b-44fa-80fa-df93b8aaf9fb
---
# Resource Compiler Fatal Error RC1052

compiler limit : #if or #ifdef blocks nested too deeply

The program exceeded the maximum allowable nesting levels for `#if` and `#ifdef` directives.

This error can be caused by include files that use these preprocessor directives.

To fix this issue, reduce the number of nested `#if` and `#ifdef` directives in your resource file. If the issue is caused by header files that are included in your resource file, reduce the number of nested `#if` and `#ifdef` directives in the header files. If this is not possible, consider creating and including a new header file in your resource file, by running the preprocessor on the existing included header files. For more information, see the [/P (Preprocess to a File)](../../build/reference/p-preprocess-to-a-file.md) compiler option.
