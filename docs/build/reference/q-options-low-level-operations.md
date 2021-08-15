---
description: "Learn more about: /Q Options (Low-Level Operations)"
title: "/Q Options (Low-Level Operations)"
ms.date: "01/08/2020"
f1_keywords: ["/q"]
helpviewer_keywords: ["Q compiler option [C++]", "-Q compiler option [C++]", "/Q compiler option [C++]"]
---
# /Q Options (Low-Level Operations)

You can use the **/Q** compiler options to perform the following low-level compiler operations:

- [/Qfast_transcendentals (Force Fast Transcendentals)](qfast-transcendentals-force-fast-transcendentals.md): Generates fast transcendentals.

- [/QIfist (Suppress _ftol)](qifist-suppress-ftol.md): Suppresses `_ftol` when a conversion from a floating-point type to an integer type is required (x86 only).

- [/Qimprecise_fwaits (Remove fwaits Inside Try Blocks)](qimprecise-fwaits-remove-fwaits-inside-try-blocks.md): Removes `fwait` commands inside **`try`** blocks.

- [/QIntel-jcc-erratum](qintel-jcc-erratum.md): Mitigates the performance impact caused by the Intel Jump Conditional Code (JCC) erratum microcode update.

- [/Qpar (Auto-Parallelizer)](qpar-auto-parallelizer.md): Enables automatic parallelization of loops that are marked with the [#pragma loop()](../../preprocessor/loop.md) directive.

- [/Qpar-report (Auto-Parallelizer Reporting Level)](qpar-report-auto-parallelizer-reporting-level.md): Enables reporting levels for automatic parallelization.

- [/Qsafe_fp_loads](qsafe-fp-loads.md): Suppresses optimizations for floating-point register loads and for moves between memory and MMX registers.

- [/Qspectre](qspectre.md): Generates instructions to mitigate certain Spectre security vulnerabilities.

- [/Qspectre-load](qspectre-load.md): Generates instructions to mitigate Spectre security vulnerabilities based on loads.

- [/Qspectre-load-cf](qspectre-load-cf.md): Generates instructions to mitigate Spectre security vulnerabilities based on control flow instructions which load.

- [/Qvec-report (Auto-Vectorizer Reporting Level)](qvec-report-auto-vectorizer-reporting-level.md): Enables reporting levels for automatic vectorization.

## See also

[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
