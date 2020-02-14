---
title: "Walkthrough: Analyzing C/C++ code for defects"
ms.date: 11/04/2016
ms.topic: "conceptual"
helpviewer_keywords: ["C/C++, code analysis", "code analysis, walkthroughs", "code, analyzing C/C++", "code analysis tool, walkthroughs"]
---
# Walkthrough: Analyzing C/C++ code for defects

This walkthrough demonstrates how to analyze C/C++ code for potential code defects by using the code analysis tool for C/C++ code.

- Run code analysis on native code.
- Analyze code defect warnings.
- Treat warning as an error.
- Annotate source code to improve code defect analysis.

## Prerequisites

- A copy of the [Demo Sample](../code-quality/demo-sample.md).
- Basic understanding of C/C++.

### To run code defect analysis on native code

1. Open the Demo solution in Visual Studio.

     The Demo solution now populates **Solution Explorer**.

1. On the **Build** menu, click **Rebuild Solution**.

     The solution builds without any errors or warnings.

1. In **Solution Explorer**, select the CodeDefects project.

1. On the **Project** menu, click **Properties**.

     The **CodeDefects Property Pages** dialog box is displayed.

1. Click **Code Analysis**.

1. Click the **Enable Code Analysis for C/C++ on Build** check box.

1. Rebuild the CodeDefects project.

     Code analysis warnings are displayed in the **Error List**.

### To analyze code defect warnings

1. On the **View** menu, click **Error List**.

     Depending on the developer profile that you chose in Visual Studio, you might have to point to **Other Windows** on the **View** menu, and then click **Error List**.

1. In the **Error List**, double-click the following warning:

     warning C6230: Implicit cast between semantically different types: using HRESULT in a Boolean context.

     The code editor displays the line that caused the warning in the function `bool ProcessDomain()`. This warning indicates that a `HRESULT` is being used in an 'if' statement where a Boolean result is expected.  This is typically a mistake because when the `S_OK` HRESULT is returned from it function is indicates success, but when converted into a boolean value it evaluates to `false`.

1. Correct this warning by using the `SUCCEEDED` macro, which converts to `true` when a `HRESULT` return value indicates success. Your code should resemble the following code:

   ```cpp
   if (SUCCEEDED (ReadUserAccount()) )
   ```

1. In the **Error List**, double-click the following warning:

     warning C6282: Incorrect operator: assignment to constant in test context. Was == intended?

1. Correct this warning by testing for equality. Your code should look similar to the following code:

   ```cpp
   if ((len == ACCOUNT_DOMAIN_LEN) || (g_userAccount[len] != '\\'))
   ```

### To treat warning as an error

1. In the Bug.cpp file, add the following `#pragma` statement to the beginning of the file to treat the warning C6001 as an error:

   ```cpp
   #pragma warning (error: 6001)
   ```

1. Rebuild the CodeDefects project.

     In the **Error List**, C6001 now appears as an error.

1. Correct the remaining two C6001 errors in the **Error List** by initializing `i` and `j` to 0.

1. Rebuild the CodeDefects project.

     The project builds without any warnings or errors.

### To correct the source code annotation warnings in annotation.c

1. In Solution Explorer, select the Annotations project.

1. On the **Project** menu, click **Properties**.

     The **Annotations Property Pages** dialog box is displayed.

1. Click **Code Analysis**.

1. Select the **Enable Code Analysis for C/C++ on Build** check box.

1. Rebuild the Annotations project.

1. In the **Error List**, double-click the following warning:

     warning C6011: Dereferencing NULL pointer 'newNode'.

     This warning indicates failure by the caller to check the return value. In this case, a call to **AllocateNode** might return a NULL value (see the annotations.h header file for function declaration for AllocateNode).

1. Open the annotations.cpp file.

1. To correct this warning, use an 'if' statement to test the return value. Your code should resemble the following code:

   ```cpp
   if (nullptr != newNode)
   {
       newNode->data = value;
       newNode->next = 0;
       node->next = newNode;
   }
   ```

1. Rebuild the Annotations project.

     The project builds without any warnings or errors.

### To use source code annotation

1. Annotate formal parameters and return value of the function `AddTail` to indicate the pointer values may be null:

   ```cpp
   _Ret_maybenull_ LinkedList* AddTail(_Maybenull_ LinkedList* node, int value)
   ```

1. Rebuild Annotations project.

1. In the **Error List**, double-click the following warning:

     warning C6011: Dereferencing NULL pointer 'node'.

     This warning indicates that the node passed into the function might be null, and indicates the line number where the warning was raised.

1. To correct this warning, use an 'if' statement at the beginning of the function to test the passed in value. Your code should resemble the following code:

   ```cpp
   if (nullptr == node)
   {
        return nullptr;
   }
   ```

1. Rebuild Annotations project.

     The project now builds without any warnings or errors.

## See also

[Walkthrough: Analyzing Managed Code for Code Defects](/visualstudio/code-quality/walkthrough-analyzing-managed-code-for-code-defects)\
[Code analysis for C/C++](../code-quality/code-analysis-for-c-cpp-overview.md)
