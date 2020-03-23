---
title: "Quickstart: Code Analysis for C/C++"
description: Run static analysis on C++ code in Visual Studio to detect common coding problems and defects.
ms.date: 11/04/2016
ms.topic: "conceptual"
helpviewer_keywords:
  - "C/C++ code analysis"
  - "code analysis,C/C++"
---
# Quickstart: Code analysis for C/C++

You can improve the quality of your application by running code analysis regularly on C or C++ code. This can help you find common problems, violations of good programming practice, or defects that are difficult to discover through testing. Code analysis warnings differ from compiler errors and warnings because code analysis searches for specific code patterns that are valid but could still create issues for you or other people who use your code.

## Configure rule sets for a project

1. In **Solution Explorer**, open the shortcut menu for the project name and then choose **Properties**.

1. Optionally, in the **Configuration** and **Platform** lists, choose the build configuration and target platform.

1. To run code analysis every time the project is built using the selected configuration, select the **Enable Code Analysis on Build** check box. You can also run code analysis manually by opening the **Analyze** menu and then choosing **Run Code Analysis on** *ProjectName* or **Run Code Analysis on File**.

1. Choose the [rule set](using-rule-sets-to-specify-the-cpp-rules-to-run.md) that you want to use or create a [custom rule set](using-rule-sets-to-specify-the-cpp-rules-to-run.md#to-create-a-rule-set-in-a-text-editor). If using LLVM/clang-cl, see [Using Clang-Tidy in Visual Studio](../code-quality/clang-tidy.md) to configure Clang-Tidy analysis options.

### Standard C/C++ Rule Sets

Visual Studio includes two standard sets of rules for native code:

|Rule Set|Description|
|--------------|-----------------|
|Microsoft Native Minimum Recommended Rules|This rule set focuses on the most critical problems in your native code, including potential security holes and application crashes. You should include this rule set in any custom rule set you create for your native projects.|
|Microsoft Native Recommended Rules|This rule set covers a broad range of problems. It includes all the rules in Microsoft Native Minimum Recommended Rules.|

## Run code analysis

On the Code Analysis page of the Project Properties page, you can configure code analysis to run each time you build your project. You can also run code analysis manually.

To run code analysis on a solution:

- In the **Build** menu, choose **Run Code Analysis on Solution**.

To run code analysis on a project:

1. In the Solution Explorer, select the name of the project.

1. In the **Build** menu, choose **Run Code Analysis on** *Project Name*.

To run code analysis on a file:

1. In the Solution Explorer, select the name of the file.

1. In the **Build** menu, choose **Run Code Analysis on File** or press **Ctrl+Shift+Alt+F7**.

   The project or solution is compiled and code analysis runs. Results appear in the Error List.

## Analyze and resolve code analysis warnings

To analyze a specific warning, choose the title of the warning in the Error List. The warning expands to display additional information about the issue. When possible, code analysis displays the line numbers and analysis logic that led to the warning. For detailed information about the warning, including possible solutions to the issue, choose the warning ID to display its corresponding online help topic.

When you select a warning, the line of code that caused the warning is highlighted in the Visual Studio code editor.

After you understand the problem, you can resolve it in your code. Then, rerun code analysis to make sure that the warning no longer appears in the Error List, and that your fix has not raised any new warnings.

## Suppress code analysis warnings

There are times when you might decide not to fix a code analysis warning. You might decide that resolving the warning requires too much recoding in relation to the probability that the issue will arise in any real-world implementation of your code. Or you might believe that the analysis that is used in the warning is inappropriate for the particular context. You can suppress individual warnings so that they no longer appear in the Error List.

### To suppress a warning

1. If the detailed information is not displayed, choose the title of the warning to expand it.

1. Choose the **Actions** link at the bottom of the warning.

1. Choose **Suppress Message** and then choose **In Source**.

   Suppressing a message inserts `#pragma warning (disable:[warning ID])` that suppresses the warning for the line of code.

## Create work items for code analysis warnings

You can use the work item tracking feature to log bugs from within Visual Studio. To use this feature, you must connect to an instance of Team Foundation Server.

### To create a work item for one or more C/C++ code warnings

1. In the Error List, expand and select the warnings

1. On the shortcut menu for the warnings, choose **Create Work Item**, and then choose the work item type.

1. Visual Studio creates a single work item for the selected warnings and displays the work item in a document window of the IDE.

1. Add any additional information, and then choose **Save Work Item**.

## Search and filter code analysis results

You can search long lists of warning messages and you can filter warnings in multi-project solutions.

- **To filter warnings by title or warning ID**: Enter the keyword in the search box.

- **To filter warnings by severity**: By default, code analysis messages are assigned a severity of **Warning**. You can assign the severity of one or more messages as **Error** in a custom rule set. On the **Severity** column of the **Error List**, choose the drop-down arrow and then the filter icon. Choose **Warning** or **Error** to display only the messages that are assigned the respective severity. Choose **Select All** to display all messages.

## See also

- [Code analysis for C/C++](../code-quality/code-analysis-for-c-cpp-overview.md)
