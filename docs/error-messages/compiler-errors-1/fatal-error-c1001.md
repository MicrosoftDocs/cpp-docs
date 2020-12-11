---
description: "Learn more about: Fatal Error C1001"
title: "Fatal Error C1001"
ms.date: "11/04/2016"
f1_keywords: ["C1001"]
helpviewer_keywords: ["C1001"]
ms.assetid: 5736cdb3-22c8-4fad-aa85-d5e0d2b232f4
---
# Fatal Error C1001

> INTERNAL COMPILER ERROR(compiler file *file*, line *number*)

The compiler cannot generate correct code for a construct, often due to the combination of a particular expression and an optimization option, or an issue in parsing. If the compiler file listed has a utc or C2 path segment, it is probably an optimization error. If the file has a cxxfe or c1xx path segment, or is msc1.cpp, it is probably a parser error. If the file named is cl.exe, there is no other information available.

You can often fix an optimization problem by removing one or more optimization options. To determine which option is at fault, remove options one at a time and recompile until the error message goes away. The options most commonly responsible are [/Og (Global optimizations)](../../build/reference/og-global-optimizations.md) and [/Oi (Generate Intrinsic Functions)](../../build/reference/oi-generate-intrinsic-functions.md). Once you determine which optimization option is responsible, you can disable it around the function where the error occurs by using the [optimize](../../preprocessor/optimize.md) pragma, and continue to use the option for the rest of the module. For more information about optimization options, see [Optimization best practices](../../build/optimization-best-practices.md).

If optimizations are not responsible for the error, try rewriting the line where the error is reported, or several lines of code surrounding that line. To see the code the way the compiler sees it after preprocessing, you can use the [/P (Preprocess to a file)](../../build/reference/p-preprocess-to-a-file.md) option.

For more information about how to isolate the source of the error and how to report an internal compiler error to Microsoft, see [How to Report a Problem with the Visual C++ Toolset](../../overview/how-to-report-a-problem-with-the-visual-cpp-toolset.md).
