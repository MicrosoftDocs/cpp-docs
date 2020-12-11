---
description: "Learn more about: How to: Set Code Analysis Properties for C/C++ Projects"
title: "How to: Set Code Analysis Properties for C/C++ Projects"
ms.date: 11/04/2016
ms.topic: "conceptual"
f1_keywords:
  - "vs.codeanalysis.propertypages.native"
  - "VC.Project.VCCLCompilerTool.EnablePrefast"
  - "VC.Project.VCFxCopTool.EnablePREfast"
  - "VC.Project.VCFxCopTool.IgnoreGeneratedCode"
helpviewer_keywords:
  - "properties, C/C++ Code Analysis"
  - "properties, Code Analysis"
  - "code analysis properties"
  - "C/C++ code analysis properties"
ms.assetid: 7af52097-6d44-4785-9b9f-43b7a7d447d7
---
# How to: Set Code Analysis Properties for C/C++ Projects

You can configure which rules the code analysis tool uses to analyze the code in each configuration of your project. In addition, you can direct code analysis to suppress warnings from code that was generated and added to your project by a third-party tool.

## Code Analysis Property Page

The **Code Analysis** property page contains all code analysis configuration settings for an MSBuild project. To open the code analysis property page for a project in **Solution Explorer**, right-click the project and then click **Properties**. Next, expand **Configuration Properties** and select the **Code Analysis** tab.

## Project Configuration and Platform

The **Configuration** list and **Platform** list at the top of the window lets you apply different code analysis settings to different project configuration and platform combinations. For example, you can direct code analysis to apply one set of rules to your project for debug builds and a different set for release builds.

## Enabling Code Analysis

You can enable code analysis for your project by toggling the **Enable Microsoft Code Analysis** and **Enable Clang-Tidy** options, and further configure if it runs on build by selecting **Enable Code Analysis on Build**. In combination with the **Configuration** list, you could, for example, decide to disable Code Analysis for debug builds and enable it for release builds.

Code analysis is designed to help you improve the quality of your code and avoid common pitfalls. Therefore, consider carefully whether to disable code analysis. It is usually better to disable rule sets, individual rules, or individual checks that you do not want applied to your project.

## CMake configuration

In CMake projects, change the value of the `enableMicrosoftCodeAnalysis` and `enableClangTidyCodeAnalysis` keys within `CMakeSettings.json` to enable or disable code analysis. See [Using Clang-Tidy in Visual Studio](../code-quality/clang-tidy.md) for more information.

## See also

- [Analyzing Managed Code Quality](/visualstudio/code-quality/code-analysis-for-managed-code-overview)
- [Code Analysis for C/C++ Warnings](../code-quality/code-analysis-for-c-cpp-warnings.md)
- [Use rule sets to specify the C++ rules to run](using-rule-sets-to-specify-the-cpp-rules-to-run.md)
- [Using Clang-Tidy](../code-quality/clang-tidy.md)
