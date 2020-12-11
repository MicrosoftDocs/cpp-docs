---
description: "Learn more about: /POGOSAFEMODE (Run PGO in thread safe mode)"
title: "/POGOSAFEMODE (Run PGO in thread safe mode)"
ms.date: "03/14/2018"
f1_keywords: ["POGOSAFEMODE"]
---
# /POGOSAFEMODE (Run PGO in thread safe mode)

**The /POGOSAFEMODE option is deprecated starting in Visual Studio 2015**. Use the [/GENPROFILE:EXACT](genprofile-fastgenprofile-generate-profiling-instrumented-build.md) and **/GENPROFILE:NOEXACT** options instead. The **/POGOSAFEMODE** linker option specifies that the instrumented build is created to use thread-safe mode for profile data capture during profile-guided optimization (PGO) training runs.

## Syntax

> **/POGOSAFEMODE**

## Remarks

Profile-guided optimization (PGO) has two possible modes during the profiling phase: *fast mode* and *safe mode*. When profiling is in fast mode, it uses an increment instruction to increase data counters. The increment instruction is faster but is not thread-safe. When profiling is in safe mode, it uses the interlocked-increment instruction to increase data counters. This instruction has the same functionality as the increment instruction has, and is thread-safe, but it is slower.

The **/POGOSAFEMODE** option sets the instrumented build to use safe mode. This option can only be used when the deprecated [/LTCG:PGINSTRUMENT](ltcg-link-time-code-generation.md) is specified, during the PGO instrumentation linker phase.

By default, PGO profiling operates in fast mode. **/POGOSAFEMODE** is only required if you want to use safe mode.

To run PGO profiling in safe mode, you must use either **/GENPROFILE:EXACT** (preferred), or use the environment variable [PogoSafeMode](../environment-variables-for-profile-guided-optimizations.md) or the linker switch **/POGOSAFEMODE**, depending on the system. If you are performing the profiling on an x64 computer, you must use the linker switch. If you are performing the profiling on an x86 computer, you may use the linker switch or define the environment variable to any value before you start the PGO instrumentation process.

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **Optimization** property page.

1. In the **Link Time Code Generation** property, choose **Profile Guided Optimization - Instrument (/LTCG:PGInstrument)**.

1. Select the **Configuration Properties** > **Linker** > **Command Line** property page.

1. Enter the **/POGOSAFEMODE** option into the **Additional Options** box. Choose **OK** to save your changes.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## See also

[/GENPROFILE and /FASTGENPROFILE](genprofile-fastgenprofile-generate-profiling-instrumented-build.md)<br/>
[/LTCG](ltcg-link-time-code-generation.md)<br/>
[Profile-Guided Optimizations](../profile-guided-optimizations.md)<br/>
[Environment Variables for Profile-Guided Optimizations](../environment-variables-for-profile-guided-optimizations.md)<br/>
