---
title: "Walkthrough: Analyzing C/C++ code for defects"
description: "Demonstrates how to use code analysis with Microsoft C++ in Visual Studio."
ms.date: 04/14/2020
ms.topic: "conceptual"
helpviewer_keywords: ["C/C++, code analysis", "code analysis, walkthroughs", "code, analyzing C/C++", "code analysis tool, walkthroughs"]
---
# Walkthrough: Analyzing C/C++ code for defects

This walkthrough demonstrates how to analyze C/C++ code for potential code defects. It uses the code analysis tools for C/C++ code.

In this walkthrough, you'll:

- Run code analysis on native code.
- Analyze code defect warnings.
- Treat warning as an error.
- Annotate source code to improve code defect analysis.

## Prerequisites

- A copy of the [CppDemo Sample](../code-quality/demo-sample.md).
- Basic understanding of C/C++.

## Run code analysis on native code

### To run code defect analysis on native code

::: moniker range=">=msvc-160"

1. Open the CppDemo solution in Visual Studio.

     The CppDemo solution now populates **Solution Explorer**.

1. On the **Build** menu, choose **Rebuild Solution**.

     The solution builds without any errors or warnings.

1. In **Solution Explorer**, select the CodeDefects project.

1. On the **Project** menu, choose **Properties**.

     The **CodeDefects Property Pages** dialog box is displayed.

1. Select the **Code Analysis** property page.

1. Change the **Enable Code Analysis on Build** property to **Yes**. Choose **OK** to save your changes.

1. Rebuild the CodeDefects project.

     Code analysis warnings are displayed in the **Error List** window.

::: moniker-end

::: moniker range="<=msvc-150"

1. Open the CppDemo solution in Visual Studio.

     The CppDemo solution now populates **Solution Explorer**.

1. On the **Build** menu, choose **Rebuild Solution**.

     The solution builds without any errors or warnings.

     > [!NOTE]
     > In Visual Studio 2017, you may see a spurious warning `E1097 unknown attribute "no_init_all"` in the IntelliSense engine. You can safely ignore this warning.

1. In **Solution Explorer**, select the CodeDefects project.

1. On the **Project** menu, choose **Properties**.

     The **CodeDefects Property Pages** dialog box is displayed.

1. Select the **Code Analysis** property page.

1. Select the **Enable Code Analysis on Build** check box. Choose **OK** to save your changes.

1. Rebuild the CodeDefects project.

     Code analysis warnings are displayed in the **Error List** window.

::: moniker-end

### To analyze code defect warnings

1. On the **View** menu, choose **Error List**.

     This menu item may not be visible. It depends on the developer profile that you chose in Visual Studio. You might have to point to **Other Windows** on the **View** menu, and then choose **Error List**.

1. In the **Error List** window, double-click the following warning:

     C6230: Implicit cast between semantically different types: using HRESULT in a Boolean context.

     The code editor displays the line that caused the warning inside the function `bool ProcessDomain()`. This warning indicates that a `HRESULT` is being used in an 'if' statement where a Boolean result is expected. It's typically a mistake, because when the `S_OK` HRESULT is returned from a function it indicates success, but when converted into a boolean value it evaluates to **`false`**.

1. Correct this warning by using the `SUCCEEDED` macro, which converts to **`true`** when a `HRESULT` return value indicates success. Your code should resemble the following code:

   ```cpp
   if (SUCCEEDED(ReadUserAccount()))
   ```

1. In the **Error List**, double-click the following warning:

     C6282: Incorrect operator: assignment of constant in Boolean context. Consider using '==' instead.

1. Correct this warning by testing for equality. Your code should look similar to the following code:

   ```cpp
   if ((len == ACCOUNT_DOMAIN_LEN) || (g_userAccount[len] != L'\\'))
   ```

1. Correct the remaining C6001 warnings in the **Error List** by initializing `i` and `j` to 0.

1. Rebuild the CodeDefects project.

     The project builds without any warnings or errors.

## Correct source code annotation warnings

### To enable the source code annotation warnings in annotation.c

::: moniker range=">=msvc-160"

1. In Solution Explorer, select the Annotations project.

1. On the **Project** menu, choose **Properties**.

     The **Annotations Property Pages** dialog box is displayed.

1. Select the **Code Analysis** property page.

1. Change the **Enable Code Analysis on Build** property to **Yes**. Choose **OK** to save your changes.

::: moniker-end

::: moniker range="<=msvc-150"

1. In Solution Explorer, select the Annotations project.

1. On the **Project** menu, choose **Properties**.

     The **Annotations Property Pages** dialog box is displayed.

1. Select the **Code Analysis** property page.

1. Select the **Enable Code Analysis on Build** check box. Choose **OK** to save your changes.

::: moniker-end

### To correct the source code annotation warnings in annotation.c

1. Rebuild the Annotations project.

1. On the **Build** menu, choose **Run Code Analysis on Annotations**.

1. In the **Error List**, double-click the following warning:

     C6011: Dereferencing NULL pointer 'newNode'.

     This warning indicates failure by the caller to check the return value. In this case, a call to `AllocateNode` might return a NULL value. See the annotations.h header file for the function declaration for `AllocateNode`.

1. The cursor is on the location in the annotations.cpp file where the warning occurred.

1. To correct this warning, use an 'if' statement to test the return value. Your code should resemble the following code:

   ```cpp
   LinkedList* newNode = AllocateNode();
   if (nullptr != newNode)
   {
       newNode->data = value;
       newNode->next = 0;
       node->next = newNode;
   }
   ```

1. Rebuild the Annotations project.

     The project builds without any warnings or errors.

## Use source code annotation to discover more issues

### To use source code annotation

1. Annotate formal parameters and return value of the function `AddTail` to indicate the pointer values may be null:

   ```cpp
   _Ret_maybenull_ LinkedList* AddTail(_Maybenull_ LinkedList* node, int value)
   ```

1. On the **Build** menu, choose **Run Code Analysis on Solution**.

1. In the **Error List**, double-click the following warning:

     C6011: Dereferencing NULL pointer 'node'.

     This warning indicates that the node passed into the function might be null.

1. To correct this warning, use an 'if' statement at the beginning of the function to test the passed in value. Your code should resemble the following code:

   ```cpp
   if (nullptr == node)
   {
        return nullptr;
   }
   ```

1. On the **Build** menu, choose **Run Code Analysis on Solution**.

     The project now builds without any warnings or errors.

## See also

[Walkthrough: Analyzing Managed Code for Code Defects](/visualstudio/code-quality/walkthrough-analyzing-managed-code-for-code-defects)\
[Code analysis for C/C++](../code-quality/code-analysis-for-c-cpp-overview.md)
