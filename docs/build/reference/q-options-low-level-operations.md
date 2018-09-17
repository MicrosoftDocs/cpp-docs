---
title: "-Q Options (Low-Level Operations) | Microsoft Docs"
ms.custom: ""
ms.date: "1/23/2018"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["/q"]
dev_langs: ["C++"]
helpviewer_keywords: ["Q compiler option [C++]", "-Q compiler option [C++]", "/Q compiler option [C++]"]
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# /Q Options (Low-Level Operations)

You can use the **/Q** compiler options to perform the following low-level compiler operations:

- [/Qfast_transcendentals (Force Fast Transcendentals)](../../build/reference/qfast-transcendentals-force-fast-transcendentals.md): Generates fast transcendentals.

- [/QIfist (Suppress _ftol)](../../build/reference/qifist-suppress-ftol.md): Suppresses `_ftol` when a conversion from a floating-point type to an integer type is required (x86 only).

- [/Qimprecise_fwaits (Remove fwaits Inside Try Blocks)](../../build/reference/qimprecise-fwaits-remove-fwaits-inside-try-blocks.md): Removes `fwait` commands inside `try` blocks.

- [/Qpar (Auto-Parallelizer)](../../build/reference/qpar-auto-parallelizer.md): Enables automatic parallelization of loops that are marked with the [#pragma loop()](../../preprocessor/loop.md) directive.

- [/Qpar-report (Auto-Parallelizer Reporting Level)](../../build/reference/qpar-report-auto-parallelizer-reporting-level.md): Enables reporting levels for automatic parallelization.

- [/Qsafe_fp_loads](../../build/reference/qsafe-fp-loads.md): Suppresses optimizations for floating-point register loads and for moves between memory and MMX registers.

- [/Qspectre](../../build/reference/qspectre.md): Generates instructions to mitigate certain Spectre security vulnerabilities.

- [/Qvec-report (Auto-Vectorizer Reporting Level)](../../build/reference/qvec-report-auto-vectorizer-reporting-level.md): Enables reporting levels for automatic vectorization.

## See also

[Compiler Options](../../build/reference/compiler-options.md)<br/>
[Setting Compiler Options](../../build/reference/setting-compiler-options.md)
