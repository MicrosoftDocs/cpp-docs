---
title: "C++ Exception Handling"
ms.date: "11/04/2016"
helpviewer_keywords: ["C++ exception handling"]
ms.assetid: 65f80b44-9d0f-4d17-b910-07205a5c5c40
---
# C++ Exception Handling

The C++ language provides built-in support for throwing and catching exceptions. When programming in C++, you should almost always use the built-in C++ exception support as described in this section.

To enable C++ exception handling in your code, use [/EHsc](../build/reference/eh-exception-handling-model.md).

## In This Section

This discussion on C++ exception handling includes:

- [The try, catch, and throw Statements](../cpp/try-throw-and-catch-statements-cpp.md)

- [How Catch Blocks are Evaluated](../cpp/how-catch-blocks-are-evaluated-cpp.md)

- [Exceptions and Stack Unwinding](../cpp/exceptions-and-stack-unwinding-in-cpp.md)

- [Exception Specifications](../cpp/exception-specifications-throw-cpp.md)

- [noexcept](../cpp/noexcept-cpp.md)

- [Unhandled C++ Exceptions](../cpp/unhandled-cpp-exceptions.md)

- [Mixing C (Structured) and C++ Exceptions](../cpp/mixing-c-structured-and-cpp-exceptions.md)

## Support for Earlier MFC Exceptions

As of version 4.0, MFC began using the C++ exception handling mechanism. Although you are encouraged to use C++ exception handling in new code, MFC version 4.0 and later retains the macros from previous versions of MFC so that old code will not be broken. The macros and the new mechanism can be combined as well. For information on mixing macros and C++ exception handling and on converting old code to use the new mechanism, see the articles [Exceptions: Using MFC Macros and C++ Exceptions](../mfc/exceptions-using-mfc-macros-and-cpp-exceptions.md) and [Exceptions: Converting from MFC Exception Macros](../mfc/exceptions-converting-from-mfc-exception-macros.md). The older MFC exception macros, if you still use them, evaluate to C++ exception keywords. See [Exceptions: Changes to Exception Macros in Version 3.0](../mfc/exceptions-changes-to-exception-macros-in-version-3-0.md).

## See also

[Exception Handling](../cpp/exception-handling-in-visual-cpp.md)