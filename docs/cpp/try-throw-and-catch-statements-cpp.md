---
description: "Learn more about: try, throw, and catch Statements (C++)"
title: "try, throw, and catch Statements (C++)"
ms.date: "11/04/2016"
f1_keywords: ["catch_cpp", "try_cpp", "throw_cpp"]
helpviewer_keywords: ["catch keyword [C++]", "keywords [C++], exception handling", "C++ exception handling, statement syntax", "try-catch keyword [C++], about try-catch exception handling", "throw keyword [C++]", "try-catch keyword [C++]", "try-catch keyword [C++], exception handling", "throwing exceptions [C++], throw keyword", "try-catch keyword [C++], throw keyword [C++]s", "throwing exceptions [C++], implementing C++ exception handling", "throwing exceptions [C++]", "throw keyword [C++], throw() vs. throw(...)"]
ms.assetid: 15e6a87b-b8a5-4032-a7ef-946c644ba12a
---
# try, throw, and catch Statements (C++)

To implement exception handling in C++, you use **`try`**, **`throw`**, and **`catch`** expressions.

First, use a **`try`** block to enclose one or more statements that might throw an exception.

A **`throw`** expression signals that an exceptional condition—often, an error—has occurred in a **`try`** block. You can use an object of any type as the operand of a **`throw`** expression. Typically, this object is used to communicate information about the error. In most cases, we recommend that you use the [std::exception](../standard-library/exception-class.md) class or one of the derived classes that are defined in the standard library. If one of those is not appropriate, we recommend that you derive your own exception class from  `std::exception`.

To handle exceptions that may be thrown, implement one or more **`catch`** blocks immediately following a **`try`** block. Each **`catch`** block specifies the type of exception it can handle.

This example shows a **`try`** block and its handlers. Assume that `GetNetworkResource()` acquires data over a network connection and that the two exception types are user-defined classes that derive from `std::exception`. Notice that the exceptions are caught by **`const`** reference in the **`catch`** statement. We recommend that you throw exceptions by value and catch them by const reference.

## Example

```cpp
MyData md;
try {
   // Code that could throw an exception
   md = GetNetworkResource();
}
catch (const networkIOException& e) {
   // Code that executes when an exception of type
   // networkIOException is thrown in the try block
   // ...
   // Log error message in the exception object
   cerr << e.what();
}
catch (const myDataFormatException& e) {
   // Code that handles another exception type
   // ...
   cerr << e.what();
}

// The following syntax shows a throw expression
MyData GetNetworkResource()
{
   // ...
   if (IOSuccess == false)
      throw networkIOException("Unable to connect");
   // ...
   if (readError)
      throw myDataFormatException("Format error");
   // ...
}
```

## Remarks

The code after the **`try`** clause is the guarded section of code. The **`throw`** expression *throws*—that is, raises—an exception. The code block after the **`catch`** clause is the exception handler. This is the handler that *catches* the exception that's thrown if the types in the **`throw`** and **`catch`** expressions are compatible. For a list of rules that govern type-matching in **`catch`** blocks, see [How Catch Blocks are Evaluated](../cpp/how-catch-blocks-are-evaluated-cpp.md). If the **`catch`** statement specifies an ellipsis (...) instead of a type, the **`catch`** block handles every type of exception. When you compile with the [/EHa](../build/reference/eh-exception-handling-model.md) option, these can include C structured exceptions and system-generated or application-generated asynchronous exceptions such as memory protection, divide-by-zero, and floating-point violations. Because **`catch`** blocks are processed in program order to find a matching type, an ellipsis handler must be the last handler for the associated **`try`** block. Use `catch(...)` with caution; do not allow a program to continue unless the catch block knows how to handle the specific exception that is caught. Typically, a `catch(...)` block is used to log errors and perform special cleanup before program execution is stopped.

A **`throw`** expression that has no operand re-throws the exception currently being handled. We recommend this form when re-throwing the exception, because this preserves the original exception’s polymorphic type information. Such an expression should only be used in a **`catch`** handler or in a function that's called from a **`catch`** handler. The re-thrown exception object is the original exception object, not a copy.

```cpp
try {
   throw CSomeOtherException();
}
catch(...) {
   // Catch all exceptions - dangerous!!!
   // Respond (perhaps only partially) to the exception, then
   // re-throw to pass the exception to some other handler
   // ...
   throw;
}
```

## See also

[Modern C++ best practices for exceptions and error handling](../cpp/errors-and-exception-handling-modern-cpp.md)<br/>
[Keywords](../cpp/keywords-cpp.md)<br/>
[Unhandled C++ Exceptions](../cpp/unhandled-cpp-exceptions.md)<br/>
[__uncaught_exception](../c-runtime-library/reference/uncaught-exception.md)
