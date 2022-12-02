---
title: "Quickstart: Code analysis for C/C++"
description: "Run static analysis on C++ code in Visual Studio to detect common coding problems and defects."
ms.date: 04/08/2020
ms.topic: "conceptual"
helpviewer_keywords:
  - "C/C++ code analysis"
  - "code analysis, C/C++"
---
# Quickstart: Code analysis for C/C++

You can improve the quality of your application by running code analysis regularly on C or C++ code. Code analysis can help you find common problems and violations of good programming practice. And, it finds defects that are difficult to discover through testing. Its warnings differ from compiler errors and warnings: It searches for specific code patterns that are known to cause problems. That is, code that's valid, but could still create issues, either for you or for other people who use your code.

## Configure rule sets for a project

1. In **Solution Explorer**, open the shortcut menu for the project name and then choose **Properties**.

1. Optionally, in the **Configuration** and **Platform** lists, choose the build configuration and target platform.

1. To run code analysis every time the project is built using the selected configuration, select the **Enable Code Analysis on Build** check box. You can also run code analysis manually by opening the **Analyze** menu and then choosing **Run Code Analysis on** *ProjectName* or **Run Code Analysis on File**.

1. Choose the [rule set](using-rule-sets-to-specify-the-cpp-rules-to-run.md) that you want to use or create a [custom rule set](using-rule-sets-to-specify-the-cpp-rules-to-run.md#to-create-a-rule-set-in-a-text-editor). If using LLVM/clang-cl, see [Using Clang-Tidy in Visual Studio](../code-quality/clang-tidy.md) to configure Clang-Tidy analysis options.

### Standard C/C++ rule sets

Visual Studio includes these standard sets of rules for native code:

| Rule Set | Description |
|--|--|
| **C++ Core Check Arithmetic Rules** | These rules enforce checks related to [arithmetic operations from the C++ Core Guidelines](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#es-expressions-and-statements). |
| **C++ Core Check Bounds Rules** | These rules enforce the [Bounds profile of the C++ Core Guidelines](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#probounds-bounds-safety-profile). |
| **C++ Core Check Class Rules** | These rules enforce checks related to [classes from the C++ Core Guidelines](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#c-classes-and-class-hierarchies). |
| **C++ Core Check Concurrency Rules** | These rules enforce checks related to [concurrency from the C++ Core Guidelines](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#cpcon-concurrency). |
| **C++ Core Check Const Rules** | These rules enforce [const-related checks from the C++ Core Guidelines](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#con-constants-and-immutability). |
| **C++ Core Check Declaration Rules** | These rules enforce checks related to [declarations from the C++ Core Guidelines](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#i-interfaces). |
| **C++ Core Check Enum Rules** | These rules enforce [enum-related checks from the C++ Core Guidelines](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#S-enum). |
| **C++ Core Check Experimental Rules** | These rules collect some experimental checks. Eventually, we expect these checks to be moved to other rulesets or removed completely. |
| **C++ Core Check Function Rules** | These rules enforce checks related to [functions from the C++ Core Guidelines](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#f-functions). |
| **C++ Core Check GSL Rules** | These rules enforce checks related to the [Guidelines Support Library from the C++ Core Guidelines](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#S-gsl). |
| **C++ Core Check Lifetime Rules** | These rules enforce the [Lifetime profile of the C++ Core Guidelines](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#prolifetime-lifetime-safety-profile). |
| **C++ Core Check Owner Pointer Rules** | These rules enforce resource-management checks related to [`owner<T>` from the C++ Core Guidelines](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#r-resource-management). |
| **C++ Core Check Raw Pointer Rules** | These rules enforce resource-management checks related to [raw pointers from the C++ Core Guidelines](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#r-resource-management). |
| **C++ Core Check Rules** | These rules enforce a subset of the checks from the [C++ Core Guidelines](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#c-core-guidelines). Use this ruleset to include all of the C++ Core Check rules except the Enum and Experimental rulesets. |
| **C++ Core Check Shared Pointer Rules** | These rules enforce resource-management checks related to [types with shared pointer semantics from the C++ Core Guidelines](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#r-resource-management). |
| **C++ Core Check STL Rules** | These rules enforce checks related to the [C++ Standard Library from the C++ Core Guidelines](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#S-stdlib). |
| **C++ Core Check Style Rules** | These rules enforce checks related to use of [expressions and statements from the C++ Core Guidelines](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#es-expressions-and-statements). |
| **C++ Core Check Type Rules** | These rules enforce the [Type profile of the C++ Core Guidelines](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#prosafety-type-safety-profile). |
| **C++ Core Check Unique Pointer Rules** | These rules enforce resource-management checks related to types with [unique pointer semantics from the C++ Core Guidelines](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#r-resource-management). |
| **Concurrency Check Rules** | These rules enforce a set of Win32 concurrency pattern checks in C++. |
| **Concurrency Rules** | Adds concurrency rules from C++ Core Guidelines to **Concurrency Check Rules**. |
| **Microsoft Native Minimum Rules** | These rules focus on the most critical problems in your native code, including potential security holes and application crashes. We recommend you include this rule set in any custom rule set you create for your native projects. |
| **Microsoft Native Recommended Rules** | These rules focus on the most critical and common problems in your native code. These problems include potential security holes and application crashes. We recommend you include this rule set in any custom rule set you create for your native projects. This ruleset is designed to work with Visual Studio Professional edition and higher. It includes all the rules in **Microsoft Native Minimum Rules**. |

Visual Studio includes these standard sets of rules for managed code:

| Rule Set | Description |
|--|--|
| **Microsoft Basic Correctness Rules** | These rules focus on logic errors and common mistakes made in the usage of framework APIs. Include this rule set to expand on the list of warnings reported by the minimum recommended rules. |
| **Microsoft Basic Design Guideline Rules** | These rules focus on enforcing best practices to make your code easy to understand and use. Include this rule set if your project includes library code or if you want to enforce best practices for easily maintainable code. |
| **Microsoft Extended Correctness Rules** | These rules expand on the basic correctness rules to maximize the reported logic and framework usage errors. Extra emphasis is placed on specific scenarios such as COM interop and mobile applications. Consider including this rule set if one of these scenarios applies to your project or to find more problems in your project. |
| **Microsoft Extended Design Guideline Rules** | These rules expand on the basic design guideline rules to maximize the reported usability and maintainability issues. Extra emphasis is placed on naming guidelines. Consider including this rule set if your project includes library code or if you want to enforce the highest standards for writing maintainable code. |
| **Microsoft Globalization Rules** | These rules focus on problems that prevent data in your application from displaying correctly when used in different languages, locales, and cultures. Include this rule set if your application is localized and/or globalized. |
| **Microsoft Managed Minimum Rules** | These rules focus on the most critical problems in your code for which Code Analysis is the most accurate.  These rules are small in number and they're intended only to run in limited Visual Studio editions.  Use MinimumRecommendedRules.ruleset with other Visual Studio editions. |
| **Microsoft Managed Recommended Rules** | These rules focus on the most critical problems in your code. These problems include potential security holes, application crashes, and other important logic and design errors. We recommend you include this rule set in any custom rule set you create for your projects. |
| **Microsoft Mixed (C++ /CLR) Minimum Rules** | These rules focus on the most critical problems in your C++ projects that support the Common Language Runtime. These problems include potential security holes, application crashes, and other important logic and design errors. We recommend you include this rule set in any custom rule set you create for your C++ projects that support the Common Language Runtime. |
| **Microsoft Mixed (C++ /CLR) Recommended Rules** | These rules focus on the most common and critical problems in your C++ projects that support the Common Language Runtime. These problems include potential security holes, application crashes, and other important logic and design errors. This ruleset is designed for use in the Visual Studio Professional edition and higher. |
| **Microsoft Security Rules** | This rule set contains all Microsoft security rules. Include this rule set to maximize the number of potential security issues that are reported. |

To include every rule:

| Rule Set | Description |
|--|--|
| **Microsoft All Rules** | This rule set contains all rules. Running this rule set may result in a large number of warnings being reported. Use this rule set to get a comprehensive picture of all issues in your code. It can help you decide which of the more focused rule sets are most appropriate to run for your projects. |

## Run code analysis

On the **Code Analysis** page of the Project Properties dialog, you can configure code analysis to run each time you build your project. You can also run code analysis manually.

To run code analysis on a solution:

- In the **Build** menu, choose **Run Code Analysis on Solution**.

To run code analysis on a project:

1. In the Solution Explorer, select the name of the project.

1. In the **Build** menu, choose **Run Code Analysis on** *Project Name*.

To run code analysis on a file:

1. In the Solution Explorer, select the name of the file.

1. In the **Build** menu, choose **Run Code Analysis on File** or press **Ctrl+Shift+Alt+F7**.

   The project or solution is compiled and code analysis runs. Results appear in the Error List window.

## Analyze and resolve code analysis warnings

The Error List window lists the code analysis warnings found. The results are displayed in a table. If more information is available about a particular warning, the first column contains an expansion control. Choose it to expand the display for additional information about the issue. When possible, code analysis displays the line numbers and analysis logic that led to the warning.

For detailed information about the warning, including possible solutions to the issue, choose the warning ID in the Code column to display its corresponding online help article.

Double-click a warning to move the cursor to the line of code that caused the warning in the Visual Studio code editor. Or, press Enter on the selected warning.

After you understand the problem, you can resolve it in your code. Then, rerun code analysis to make sure that the warning no longer appears in the Error List.

## Create work items for code analysis warnings

You can use the work item tracking feature to log bugs from within Visual Studio. To use this feature, you must connect to an instance of Azure DevOps Server (formerly, Team Foundation Server).

### To create a work item for one or more C/C++ code warnings

1. In the Error List, expand and select the warnings

1. On the shortcut menu for the warnings, choose **Create Work Item**, and then choose the work item type.

1. Visual Studio creates a single work item for the selected warnings and displays the work item in a document window of the IDE.

1. Add any additional information, and then choose **Save Work Item**.

## Search and filter code analysis results

You can search long lists of warning messages and you can filter warnings in multi-project solutions.

- **To filter warnings by title or warning ID**: Enter the keyword in the Search Error List box.

- **To filter warnings by severity**: By default, code analysis messages are assigned a severity of **Warning**. You can assign the severity of one or more messages as **Error** in a custom rule set. On the **Severity** column of the **Error List**, choose the drop-down arrow and then the filter icon. Choose **Warning** or **Error** to display only the messages that are assigned the respective severity. Choose **Select All** to display all messages.

## See also

- [Code analysis for C/C++](../code-quality/code-analysis-for-c-cpp-overview.md)
