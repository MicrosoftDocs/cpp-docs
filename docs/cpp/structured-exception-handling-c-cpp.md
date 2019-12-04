---
title: "Structured Exception Handling (C/C++)"
ms.date: "08/14/2018"
helpviewer_keywords: ["termination handlers [C++], handling exceptions in C++", "structured exception handling [C++]", "try-catch keyword [C++], exception handlers", "C++ exception handling, termination handlers", "try-catch keyword [C++], termination handlers", "C++ exception handling, exception handlers"]
ms.assetid: dd3b647d-c269-43a8-aab9-ad1458712976
---
# Structured Exception Handling (C/C++)

Structured exception handling (SEH) is a Microsoft extension to C to handle certain exceptional code situations, such as hardware faults, gracefully. Although Windows and Microsoft C++ support SEH, we recommend that you use ISO-standard C++ exception handling because it makes your code more portable and flexible. Nevertheless, to maintain existing code or for particular kinds of programs, you still might have to use SEH.

**Microsoft-specific:**

## Grammar

*try-except-statement* :<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**__try** *compound-statement* **__except** **(** *expression* **)** *compound-statement*

*try-finally-statement* :<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**__try** *compound-statement* **__finally** *compound-statement*

## Remarks

With SEH, you can ensure that resources such as memory blocks and files are released correctly if execution unexpectedly terminates. You can also handle specific problems—for example, insufficient memory—by using concise structured code that does not rely on **goto** statements or elaborate testing of return codes.

The try-except and try-finally statements referred to in this article are Microsoft extensions to the C language. They support SEH by enabling applications to gain control of a program after events that would otherwise terminate execution. Although SEH works with C++ source files, it's not specifically designed for C++. If you use SEH in a C++ program that you compile by using the [/EHa or /EHsc](../build/reference/eh-exception-handling-model.md) option, destructors for local objects are called but other execution behavior might not be what you expect. For an illustration, see the example later in this article. In most cases, instead of SEH we recommend that you use ISO-standard [C++ exception handling](../cpp/try-throw-and-catch-statements-cpp.md), which the Microsoft C++ compiler also supports. By using C++ exception handling, you can ensure that your code is more portable, and you can handle exceptions of any type.

If you have C code that uses SEH, you can mix it with C++ code that uses C++ exception handling. For information, see [Handle structured exceptions in C++](../cpp/exception-handling-differences.md).

There are two SEH mechanisms:

- [Exception handlers](../cpp/writing-an-exception-handler.md), or **__except** blocks, which can respond to or dismiss the exception.

- [Termination handlers](../cpp/writing-a-termination-handler.md), or **__finally** blocks, which are always called, whether an exception causes termination or not.

These two kinds of handlers are distinct, but are closely related through a process known as "unwinding the stack." When a structured exception occurs, Windows looks for the most recently installed exception handler that is currently active. The handler can do one of three things:

- Fail to recognize the exception and pass control to other handlers.

- Recognize the exception but dismiss it.

- Recognize the exception and handle it.

The exception handler that recognizes the exception may not be in the function that was running when the exception occurred. In some cases, it may be in a function much higher on the stack. The currently running function and all other functions on the stack frame are terminated. During this process, the stack is "unwound;" that is, local non-static variables of terminated functions are cleared from the stack.

As it unwinds the stack, the operating system calls any termination handlers that you've written for each function. By using a termination handler, you can clean up resources that otherwise would remain open because of an abnormal termination. If you've entered a critical section, you can exit it in the termination handler. If the program is going to shut down, you can perform other housekeeping tasks such as closing and removing temporary files.

## Next steps

- [Writing an exception handler](../cpp/writing-an-exception-handler.md)

- [Writing a termination handler](../cpp/writing-a-termination-handler.md)

- [Handle structured exceptions in C++](../cpp/exception-handling-differences.md)

## Example

As stated earlier, destructors for local objects are called if you use SEH in a C++ program and compile it by using the **/EHa** or **/EHsc** option. However, the behavior during execution may not be what you expect if you are also using C++ exceptions. This example demonstrates these behavioral differences.

```cpp
#include <stdio.h>
#include <Windows.h>
#include <exception>

class TestClass
{
public:
    ~TestClass()
    {
        printf("Destroying TestClass!\r\n");
    }
};

__declspec(noinline) void TestCPPEX()
{
#ifdef CPPEX
    printf("Throwing C++ exception\r\n");
    throw std::exception("");
#else
    printf("Triggering SEH exception\r\n");
    volatile int *pInt = 0x00000000;
    *pInt = 20;
#endif
}

__declspec(noinline) void TestExceptions()
{
    TestClass d;
    TestCPPEX();
}

int main()
{
    __try
    {
        TestExceptions();
    }
    __except(EXCEPTION_EXECUTE_HANDLER)
    {
        printf("Executing SEH __except block\r\n");
    }

    return 0;
}
```

If you use **/EHsc** to compile this code but the local test control macro `CPPEX` is undefined, there is no execution of the `TestClass` destructor and the output looks like this:

```Output
Triggering SEH exception
Executing SEH __except block
```

If you use **/EHsc** to compile the code and `CPPEX` is defined by using `/DCPPEX` (so that a C++ exception is thrown), the `TestClass` destructor executes and the output looks like this:

```Output
Throwing C++ exception
Destroying TestClass!
Executing SEH __except block
```

If you use **/EHa** to compile the code, the `TestClass` destructor executes regardless of whether the exception was thrown by using `std::throw` or by using SEH to trigger the exception, that is, whether `CPPEX` defined or not. The output looks like this:

```Output
Throwing C++ exception
Destroying TestClass!
Executing SEH __except block
```

For more information, see [/EH (Exception Handling Model)](../build/reference/eh-exception-handling-model.md).

**END Microsoft-specific**

## See also

[Exception Handling](../cpp/exception-handling-in-visual-cpp.md)<br/>
[Keywords](../cpp/keywords-cpp.md)<br/>
[\<exception>](../standard-library/exception.md)<br/>
[Errors and Exception Handling](../cpp/errors-and-exception-handling-modern-cpp.md)<br/>
[Structured Exception Handling (Windows)](/windows/win32/debug/structured-exception-handling)
