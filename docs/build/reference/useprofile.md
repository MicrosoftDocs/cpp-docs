---
description: "Learn more about: /USEPROFILE (Run PGO in thread safe mode)"
title: "/USEPROFILE (Use PGO data with LTCG)"
ms.date: "03/14/2018"
f1_keywords: ["USEPROFILE"]
---
# /USEPROFILE (Run PGO in thread safe mode)

This linker option together with [/LTCG (Link-time code generation](ltcg-link-time-code-generation.md) tells the linker to build by using profile-guided optimization (PGO) training data.

## Syntax

> **/USEPROFILE**[**:**{**AGGRESSIVE**|**PGD=**_filename_}]

### Arguments

**AGGRESSIVE**<br/>
This optional argument specifies that aggressive speed optimizations should be used during optimized code generation.

**PGD**=*filename*<br/>
Specifies a base file name for the .pgd file. By default, the linker uses the base executable file name with a .pgd extension.

## Remarks

The **/USEPROFILE** linker option is used together with **/LTCG** to generate or update an optimized build based on PGO training data. It is the equivalent of the deprecated **/LTCG:PGUPDATE** and **/LTCG:PGOPTIMIZE** options.

The optional **AGGRESSIVE** argument disables size-related heuristics to attempt to optimize for speed. This may result in optimizations that substantially increase the size of your executable, and may not increase the resulting speed. You should profile and compare the results of using and not using **AGGRESSIVE**. This argument must be specified explicitly; it is not enabled by default.

The **PGD** argument specifies an optional name for the training data .pgd file to use, the same as in [/GENPROFILE or /FASTGENPROFILE](genprofile-fastgenprofile-generate-profiling-instrumented-build.md). It is the equivalent of the deprecated **/PGD** switch. By default, or if no *filename* is specified, a .pgd file that has the same base name as the executable is used.

The **/USEPROFILE** linker option is new in Visual Studio 2015.

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **Optimization** property page.

1. In the **Link Time Code Generation** property, choose **Use Link Time Code Generation (/LTCG)**.

1. Select the **Configuration Properties** > **Linker** > **Command Line** property page.

1. Enter the **/USEPROFILE** option and optional arguments into the **Additional Options** box. Choose **OK** to save your changes.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## See also

[/GENPROFILE and /FASTGENPROFILE](genprofile-fastgenprofile-generate-profiling-instrumented-build.md)<br/>
[/LTCG](ltcg-link-time-code-generation.md)<br/>
[Profile-Guided Optimizations](../profile-guided-optimizations.md)<br/>
[Environment Variables for Profile-Guided Optimizations](../environment-variables-for-profile-guided-optimizations.md)<br/>
