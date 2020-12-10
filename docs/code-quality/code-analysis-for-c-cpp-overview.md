---
description: "Learn more about: Code analysis for C/C++ overview"
title: Code analysis for C/C++ overview
ms.date: 04/28/2018
ms.topic: conceptual
helpviewer_keywords:
  - "annotations, code analysis"
  - "build integration, code analysis"
  - "C/C++ code analysis"
  - "IDE, code analysis"
  - "pragma directive, code analysis"
  - "code analysis, C/C++"
  - "code analysis tool"
  - "command line, code analysis"
  - "C++, code analysis"
  - "check-in policies, code analysis"
  - "#pragma directives, code analysis"
  - "C, code analysis"
ms.assetid: 81f0c9e8-f471-4de5-aac4-99db336a8809
---
# Code analysis for C/C++ overview

The C/C++ Code Analysis tool provides information about possible defects in your C/C++ source code. Common coding errors reported by the tool include buffer overruns, uninitialized memory, null pointer dereferences, and memory and resource leaks. The tool can also run checks against the [C++ Core Guidelines](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md).

## IDE (integrated development environment) integration

The code analysis tool is fully integrated within the Visual Studio IDE.

During the build process, any warnings generated for the source code appear in the Error List. You can navigate to source code that caused the warning, and you can view additional information about the cause and possible solutions of the issue.

## Command line support

You can also use the analysis tool from the command line, as shown in the following example:

```cmd
C:\>cl /analyze Sample.cpp
```

**Visual Studio 2017 version 15.7 and later:** You can run the tool from the command line with any build system including CMake.

## #pragma support

You can use the `#pragma` directive to treat warnings as errors; enable or disable warnings, and suppress warnings for individual lines of code. For more information, see [Pragma Directives and the __Pragma Keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md).

## Annotation support

Annotations improve the accuracy of the code analysis. Annotations provide additional information about pre- and post- conditions on function parameters and return types. For more information, see [Using SAL Annotations to Reduce C/C++ Code Defects](../code-quality/using-sal-annotations-to-reduce-c-cpp-code-defects.md).

## Run analysis tool as part of check-in policy

You might want to require that all source code check-ins satisfy certain policies. In particular, you want to make sure that analysis was run as a step of the most recent local build. For more information about enabling a code analysis check-in policy, see [Creating and Using Code Analysis Check-In Policies](/visualstudio/code-quality/how-to-create-or-update-standard-code-analysis-check-in-policies).

## Team Build integration

You can use the integrated features of the build system to run code analysis tool as a step of the Azure DevOps build process. For more information, see [Azure Pipelines](/azure/devops/pipelines/index).

## See also

- [Quickstart: Code analysis for C/C++](quick-start-code-analysis-for-c-cpp.md)
- [Walkthrough: Analyze C/C++ Code for Defects](walkthrough-analyzing-c-cpp-code-for-defects.md)
- [Code Analysis for C/C++ Warnings](code-analysis-for-c-cpp-warnings.md)
- [Use the C++ Core Guidelines checkers](using-the-cpp-core-guidelines-checkers.md)
- [C++ Core Guidelines Checker Reference](code-analysis-for-cpp-corecheck.md)
- [Use rule sets to specify the C++ rules to run](using-rule-sets-to-specify-the-cpp-rules-to-run.md)
- [Analyze Driver Quality by Using Code Analysis Tools](/windows-hardware/drivers/develop/analyzing-driver-quality-by-using-code-analysis-tools)
- [Code Analysis for Drivers Warnings](/windows-hardware/drivers/devtest/prefast-for-drivers-warnings)
