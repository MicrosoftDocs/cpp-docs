---
title: "Errors and Exception Handling (Modern C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "conceptual"
dev_langs: ["C++"]
ms.assetid: a6c111d0-24f9-4bbb-997d-3db4569761b7
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Errors and Exception Handling (Modern C++)
In modern C++, in most scenarios, the preferred way to report and handle both logic errors and runtime errors is to use exceptions. This is especially true when the stack might contain several function calls between the function that detects the error and the function that has the context to know how to handle it. Exceptions provide a formal, well-defined way for code that detects errors to pass the information up the call stack.  
  
 Program errors are generally divided into two categories: logic errors that are caused by programming mistakes, for example, an "index out of range" error, and runtime errors that are beyond the control of programmer, for example, a "network service unavailable" error. In C-style programming and in COM, error reporting is managed either by returning a value that represents an error code or a status code for a particular function, or by setting a global variable that the caller may optionally retrieve after every function call to see whether errors were reported. For example, COM programming uses the HRESULT return value to communicate errors to the caller, and the Win32 API has the GetLastError function to retrieve the last error that was reported by the call stack. In both of these cases, it's up to the caller to recognize the code and respond to it appropriately. If the caller doesn't explicitly handle the error code, the program might crash without warning, or continue to execute with bad data and produce incorrect results.  
  
 Exceptions are preferred in modern C++ for the following reasons:  
  
-   An exception forces calling code to recognize an error condition and handle it. Unhandled exceptions stop program execution.  
  
-   An exception jumps to the point in the call stack that can handle the error. Intermediate functions can let the exception propagate. They do not have to coordinate with other layers.  
  
-   The exception stack-unwinding mechanism destroys all objects in scope according to well-defined rules after an exception is thrown.  
  
-   An exception enables a clean separation between the code that detects the error and the code that handles the error.  
  
 The following simplified example shows the necessary syntax for throwing and catching exceptions in C++.  
  
```cpp  
#include <stdexcept>  
#include <limits>  
#include <iostream>  
  
using namespace std;  
class MyClass  
{  
public:  
   void MyFunc(char c)  
   {  
      if(c > numeric_limits<char>::max())  
         throw invalid_argument("MyFunc argument too large.");  
      //...  
   }  
};  
  
int main()  
{  
   try  
   {  
      MyFunc(256); //cause an exception to throw  
   }  
  
   catch(invalid_argument& e)  
   {  
      cerr << e.what() << endl;  
      return -1;  
   }  
   //...  
   return 0;  
}  
  
```  
  
 Exceptions in C++ resemble those in languages such as C# and Java. In the **try** block, if an exception is *thrown* it will be *caught* by the first associated **catch** block whose type matches that of the exception. In other words, execution jumps from the **throw** statement to the **catch** statement. If no usable catch block is found, `std::terminate` is invoked and the program exits. In C++, any type may be thrown; however, we recommend that you throw a type that derives directly or indirectly from `std::exception`. In the previous example, the exception type, [invalid_argument](../standard-library/invalid-argument-class.md), is defined in the standard library in the [\<stdexcept>](../standard-library/stdexcept.md) header file. C++ does not provide, and does not require, a **finally** block to make sure that all resources are released if an exception is thrown. The resource acquisition is initialization (RAII) idiom, which uses smart pointers, provides the required functionality for resource cleanup. For more information, see [How to: Design for Exception Safety](../cpp/how-to-design-for-exception-safety.md). For information about the C++ stack-unwinding mechanism, see [Exceptions and Stack Unwinding](../cpp/exceptions-and-stack-unwinding-in-cpp.md).  
  
## Basic guidelines  
 Robust error handling is challenging in any programming language. Although exceptions provide several features that support good error handling, they can't do all the work for you. To realize the benefits of the exception mechanism, keep exceptions in mind as you design your code.  
  
-   Use asserts to check for errors that should never occur. Use exceptions to check for errors that might occur, for example, errors in input validation on parameters of public functions. For more information, see the section titled **Exceptions vs. Assertions**.  
  
-   Use exceptions when the code that handles the error might be separated from the code that detects the error by one or more intervening function calls. Consider whether to use error codes instead in performance-critical loops when code that handles the error is tightly-coupled to the code that detects it. 
  
-   For every function that might throw or propagate an exception, provide one of the three exception guarantees: the strong guarantee, the basic guarantee, or the nothrow (noexcept) guarantee. For more information, see [How to: Design for Exception Safety](../cpp/how-to-design-for-exception-safety.md).  
  
-   Throw exceptions by value, catch them by reference. Don’t catch what you can't handle. 
  
-   Don't use exception specifications, which are deprecated in C++11. For more information, see the section titled **Exception specifications and noexcept**.  
  
-   Use standard library exception types when they apply. Derive custom exception types from the [exception Class](../standard-library/exception-class.md) hierarchy.  
  
-   Don't allow exceptions to escape from destructors or memory-deallocation functions.  
  
## Exceptions and performance  
 The exception mechanism has a very minimal performance cost if no exception is thrown. If an exception is thrown, the cost of the stack traversal and unwinding is roughly comparable to the cost of a function call. Additional data structures are required to track the call stack after a **try** block is entered, and additional instructions are required to unwind the stack if an exception is thrown. However, in most scenarios, the cost in performance and memory footprint is not significant. The adverse effect of exceptions on performance is likely to be significant only on very memory-constrained systems, or in performance-critical loops where an error is likely to occur regularly and the code to handle it is tightly coupled to the code that reports it. In any case, it's impossible to know the actual cost of exceptions without profiling and measuring. Even in those rare cases when the cost is significant, you can weigh it against the increased correctness, easier maintainability, and other advantages that are provided by a well-designed exception policy.  
  
## Exceptions vs. assertions  
 Exceptions and asserts are two distinct mechanisms for detecting run-time errors in a program. Use asserts to test for conditions during development that should never be true if all your code is correct. There is no point in handling such an error by using an exception because the error indicates that something in the code has to be fixed, and doesn't represent a condition that the program has to recover from at run time. An assert stops execution at the statement so that you can inspect the program state in the debugger; an exception continues execution from the first appropriate catch handler. Use exceptions to check error conditions that might occur at run time even if your code is correct, for example, "file not found" or "out of memory." You might want to recover from these conditions, even if the recovery just outputs a message to a log and ends the program. Always check arguments to public functions by using exceptions. Even if your function is error-free, you might not have complete control over arguments that a user might pass to it.  
  
## C++ exceptions versus Windows SEH exceptions  
 Both C and C++ programs can use the structured exception handling (SEH) mechanism in the Windows operating system. The concepts in SEH resemble those in C++ exceptions, except that SEH uses the `__try`, `__except`, and `__finally` constructs instead of **try** and **catch**. In Visual C++, C++ exceptions are implemented for SEH. However, when you write C++ code, use the C++ exception syntax.  
  
 For more information about SEH, see [Structured Exception Handling (C/C++)](../cpp/structured-exception-handling-c-cpp.md).  
  
## Exception specifications and noexcept  
 Exception specifications were introduced in C++ as a way to specify the exceptions that a function might throw. However, exception specifications proved problematic in practice, and are deprecated in the C++11 draft standard. We recommend that you do not use exception specifications except for `throw()`, which indicates that the function allows no exceptions to escape. If you must use exception specifications of the type `throw(`*type*`)`, be aware that Visual C++ departs from the standard in certain ways. For more information, see [Exception Specifications (throw)](../cpp/exception-specifications-throw-cpp.md). The `noexcept` specifier is introduced in C++11 as the preferred alternative to `throw()`.  
  
## See Also  
 [How to: Interface Between Exceptional and Non-Exceptional Code](../cpp/how-to-interface-between-exceptional-and-non-exceptional-code.md)   
 [Welcome Back to C++](../cpp/welcome-back-to-cpp-modern-cpp.md)   
 [C++ Language Reference](../cpp/cpp-language-reference.md)   
 [C++ Standard Library](../standard-library/cpp-standard-library-reference.md)
