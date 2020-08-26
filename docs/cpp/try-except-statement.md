---
title: "try-except statement"
description: "The Microsoft C++ reference to the __try and __except structured exception handling statements."
ms.date: 08/25/2020
f1_keywords: ["_abnormal_termination_cpp", "_exception_code_cpp", "_exception_info", "__except", "_except", "_exception_code", "__except_cpp", "_exception_info_cpp"]
helpviewer_keywords: ["__try keyword [C++]", "EXCEPTION_CONTINUE_EXECUTION macro", "EXCEPTION_CONTINUE_SEARCH macro", "EXCEPTION_EXECUTE_HANDLER macro", "GetExceptionCode function", "try-catch keyword [C++], try-except keyword [C++]", "_exception_code keyword [C++]", "try-except keyword [C++]", "_exception_info keyword [C++]", "_abnormal_termination keyword [C++]"]
ms.assetid: 30d60071-ea49-4bfb-a8e6-7a420de66381
---
# `try-except` statement

The `try-except` statement is a **Microsoft-specific** extension that supports structured exception handling in the C and C++ languages.

```cpp
    // . . .
    __try {
        // guarded code
    }
    __except ( /* filter expression */ ) {
        // termination code
    }
    // . . .
```

## Grammar

> *`try-except-statement`*:\
> &emsp;**`__try`** *`compound-statement`* **`__except (`**  *`expression`*  **`)`** *`compound-statement`*

## Remarks

The `try-except` statement is a Microsoft extension to the C and C++ languages. It enables target applications to gain control when events occur that normally terminate program execution. Such events are called *structured exceptions*, or *exceptions* for short. The mechanism that deals with these exceptions is called *structured exception handling* (SEH).

For related information, see the [try-finally statement](../cpp/try-finally-statement.md).

Exceptions may be either hardware-based or software-based. Structured exception handling is useful even when applications can't completely recover from hardware or software exceptions. SEH makes it possible to display error information and trap the internal state of the application to help diagnose the problem. It's especially useful for intermittent problems that aren't easy to reproduce.

> [!NOTE]
> Structured exception handling works with Win32 for both C and C++ source files. However, it's not specifically designed for C++. You can ensure that your code is more portable by using C++ exception handling. Also, C++ exception handling is more flexible, in that it can handle exceptions of any type. For C++ programs, we recommend you use native C++ exception-handling: [try, catch, and throw](../cpp/try-throw-and-catch-statements-cpp.md) statements.

The compound statement after the **`__try`** clause is the *body* or *guarded* section. The **`__except`** expression is also known as the *filter* expression. Its value determines how the exception is handled. The compound statement after the **`__except`** clause is the exception handler. The handler specifies the actions to take if an exception is raised during execution of the body section. Execution proceeds as follows:

1. The guarded section is executed.

1. If no exception occurs during execution of the guarded section, execution continues at the statement after the **`__except`** clause.

1. If an exception occurs during execution of the guarded section, or in any routine the guarded section calls, the **`__except`** expression is evaluated. There are three possible values:

   - `EXCEPTION_CONTINUE_EXECUTION` (-1) Exception is dismissed. Continue execution at the point where the exception occurred.

   - `EXCEPTION_CONTINUE_SEARCH` (0) Exception isn't recognized. Continue to search up the stack for a handler, first for containing `try-except` statements, then for handlers with the next highest precedence.

   - `EXCEPTION_EXECUTE_HANDLER` (1) Exception is recognized. Transfer control to the exception handler by executing the **`__except`** compound statement, then continue execution after the **`__except`** block.

The **`__except`** expression is evaluated as a C expression. It's limited to a single value, the conditional-expression operator, or the comma operator. If more extensive processing is required, the expression can call a routine that returns one of the three values listed above.

Each application can have its own exception handler.

It's not valid to jump into a **`__try`** statement, but valid to jump out of one. The exception handler isn't called if a process is terminated in the middle of executing a `try-except` statement.

For compatibility with previous versions, **_try**, **_except**, and **_leave** are synonyms for **`__try`**, **`__except`**, and **`__leave`** unless compiler option [/Za \(Disable language extensions)](../build/reference/za-ze-disable-language-extensions.md) is specified.

### <a name="__leave"></a> The `__leave` keyword

The **`__leave`** keyword is valid only within the guarded section of a `try-except` statement, and its effect is to jump to the end of the guarded section. Execution continues at the first statement after the exception handler.

A **`goto`** statement can also jump out of the guarded section, and it doesn't degrade performance as it does in a **try-finally** statement. That's because stack unwinding doesn't occur. However, we recommend that you use the **`__leave`** keyword rather than a **`goto`** statement. The reason is because you're less likely to make a programming mistake if the guarded section is large or complex.

### Structured exception handling intrinsic functions

Structured exception handling provides two intrinsic functions that are available to use with the `try-except` statement: [GetExceptionCode](/windows/win32/Debug/getexceptioncode) and [GetExceptionInformation](/windows/win32/Debug/getexceptioninformation).

`GetExceptionCode` returns the code (a 32-bit integer) of the exception.

The intrinsic function `GetExceptionInformation` returns a pointer to an [EXCEPTION_POINTERS](/windows/win32/api/winnt/ns-winnt-exception_pointers) structure containing additional information about the exception. Through this pointer, you can access the machine state that existed at the time of a hardware exception. The structure is as follows:

```cpp
typedef struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
} EXCEPTION_POINTERS, *PEXCEPTION_POINTERS;
```

The pointer types `PEXCEPTION_RECORD` and `PCONTEXT` are defined in the include file \<winnt.h>, and `_EXCEPTION_RECORD` and `_CONTEXT` are defined in the include file \<excpt.h>

You can use `GetExceptionCode` within the exception handler. However, you can use `GetExceptionInformation` only within the exception filter expression. The information it points to is generally on the stack and is no longer available when control gets transferred to the exception handler.

The intrinsic function [AbnormalTermination](/windows/win32/Debug/abnormaltermination) is available within a termination handler. It returns 0 if the body of the **try-finally** statement terminates sequentially. In all other cases, it returns 1.

\<excpt.h> defines some alternate names for these intrinsics:

`GetExceptionCode` is equivalent to `_exception_code`

`GetExceptionInformation` is equivalent to `_exception_info`

`AbnormalTermination` is equivalent to `_abnormal_termination`

## Example

```cpp
// exceptions_try_except_Statement.cpp
// Example of try-except and try-finally statements
#include <stdio.h>
#include <windows.h> // for EXCEPTION_ACCESS_VIOLATION
#include <excpt.h>

int filter(unsigned int code, struct _EXCEPTION_POINTERS *ep)
{
    puts("in filter.");
    if (code == EXCEPTION_ACCESS_VIOLATION)
    {
        puts("caught AV as expected.");
        return EXCEPTION_EXECUTE_HANDLER;
    }
    else
    {
        puts("didn't catch AV, unexpected.");
        return EXCEPTION_CONTINUE_SEARCH;
    };
}

int main()
{
    int* p = 0x00000000;   // pointer to NULL
    puts("hello");
    __try
    {
        puts("in try");
        __try
        {
            puts("in try");
            *p = 13;    // causes an access violation exception;
        }
        __finally
        {
            puts("in finally. termination: ");
            puts(AbnormalTermination() ? "\tabnormal" : "\tnormal");
        }
    }
    __except(filter(GetExceptionCode(), GetExceptionInformation()))
    {
        puts("in except");
    }
    puts("world");
}
```

### Output

```Output
hello
in try
in try
in filter.
caught AV as expected.
in finally. termination:
        abnormal
in except
world
```

## See also

[Writing an exception handler](../cpp/writing-an-exception-handler.md)<br/>
[Structured Exception Handling (C/C++)](../cpp/structured-exception-handling-c-cpp.md)<br/>
[Keywords](../cpp/keywords-cpp.md)
