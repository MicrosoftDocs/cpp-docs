---
description: "Learn more about: Transporting exceptions between threads"
title: "Transporting exceptions between threads"
ms.date: "05/07/2019"
helpviewer_keywords: ["std::current_exception", "transporting exceptions between threads", "std::copy_exception", "exception_ptr", "std::exception_ptr", "std::rethrow_exception", "current_exception", "transport exceptions between threads", "copy_exception", "rethrow_exception", "move exceptions between threads"]
ms.assetid: 5c95d57b-acf5-491f-8122-57c5df0edd98
---
# Transporting exceptions between threads

The Microsoft C++ compiler (MSVC) supports *transporting an exception* from one thread to another. Transporting exceptions enables you to catch an exception in one thread and then make the exception appear to be thrown in a different thread. For example, you can use this feature to write a multithreaded application where the primary thread handles all the exceptions thrown by its secondary threads. Transporting exceptions is useful mostly to developers who create parallel programming libraries or systems. To implement transporting exceptions, MSVC provides the [exception_ptr](../standard-library/exception-typedefs.md#exception_ptr) type and the [current_exception](../standard-library/exception-functions.md#current_exception), [rethrow_exception](../standard-library/exception-functions.md#rethrow_exception), and [make_exception_ptr](../standard-library/exception-functions.md#make_exception_ptr) functions.

## Syntax

```cpp
namespace std
{
   typedef unspecified exception_ptr;
   exception_ptr current_exception();
   void rethrow_exception(exception_ptr p);
   template<class E>
       exception_ptr make_exception_ptr(E e) noexcept;
}
```

### Parameters

*unspecified*\
An unspecified internal class that is used to implement the `exception_ptr` type.

*p*\
An `exception_ptr` object that references an exception.

*E*\
A class that represents an exception.

*e*\
An instance of the parameter `E` class.

## Return value

The `current_exception` function returns an `exception_ptr` object that references the exception that is currently in progress. If no exception is in progress, the function returns an `exception_ptr` object that is not associated with any exception.

The `make_exception_ptr` function returns an `exception_ptr` object that references the exception specified by the *e* parameter.

## Remarks

### Scenario

Imagine that you want to create an application that can scale to handle a variable amount of work. To achieve this objective, you design a multithreaded application where an initial, primary thread creates as many secondary threads as it needs in order to do the job. The secondary threads help the primary thread to manage resources, to balance loads, and to improve throughput. By distributing the work, the multithreaded application performs better than a single-threaded application.

However, if a secondary thread throws an exception, you want the primary thread to handle it. This is because you want your application to handle exceptions in a consistent, unified manner regardless of the number of secondary threads.

### Solution

To handle the previous scenario, the C++ Standard supports transporting an exception between threads. If a secondary thread throws an exception, that exception becomes the *current exception*. By analogy to the real world, the current exception is said to be *in flight*. The current exception is in flight from the time it is thrown until the exception handler that catches it returns.

The secondary thread can catch the current exception in a **`catch`** block, and then call the `current_exception` function to store the exception in an `exception_ptr` object. The `exception_ptr` object must be available to the secondary thread and to the primary thread. For example, the `exception_ptr` object can be a global variable whose access is controlled by a mutex. The term *transport an exception* means an exception in one thread can be converted to a form that can be accessed by another thread.

Next, the primary thread calls the `rethrow_exception` function, which extracts and then throws the exception from the `exception_ptr` object. When the exception is thrown, it becomes the current exception in the primary thread. That is, the exception appears to originate in the primary thread.

Finally, the primary thread can catch the current exception in a **`catch`** block and then process it or throw it to a higher level exception handler. Or, the primary thread can ignore the exception and allow the process to end.

Most applications do not have to transport exceptions between threads. However, this feature is useful in a parallel computing system because the system can divide work among secondary threads, processors, or cores. In a parallel computing environment, a single, dedicated thread can handle all the exceptions from the secondary threads and can present a consistent exception-handling model to any application.

For more information about the C++ Standards committee proposal, search the Internet for document number N2179, titled "Language Support for Transporting Exceptions between Threads".

### Exception-handling models and compiler options

Your application's exception-handling model determines whether it can catch and transport an exception. Visual C++ supports three models that can handle C++ exceptions, structured exception handling (SEH) exceptions, and common language runtime (CLR) exceptions. Use the [/EH](../build/reference/eh-exception-handling-model.md) and [/clr](../build/reference/clr-common-language-runtime-compilation.md) compiler options to specify your application's exception-handling model.

Only the following combination of compiler options and programming statements can transport an exception. Other combinations either cannot catch exceptions, or can catch but cannot transport exceptions.

- The **/EHa** compiler option and the **`catch`** statement can transport SEH and C++ exceptions.

- The **/EHa**, **/EHs**, and **/EHsc** compiler options and the **`catch`** statement can transport C++ exceptions.

- The **/CLR** compiler option and the **`catch`** statement can transport C++ exceptions. The **/CLR** compiler option implies specification of the **/EHa** option. Note that the compiler does not support transporting managed exceptions. This is because managed exceptions, which are derived from the [System.Exception class](../standard-library/exception-class.md), are already objects that you can move between threads by using the facilities of the common languange runtime.

   > [!IMPORTANT]
   > We recommend that you specify the **/EHsc** compiler option and catch only C++ exceptions. You expose yourself to a security threat if you use the **/EHa** or **/CLR** compiler option and a **`catch`** statement with an ellipsis *exception-declaration* (`catch(...)`). You probably intend to use the **`catch`** statement to capture a few specific exceptions. However, the `catch(...)` statement captures all C++ and SEH exceptions, including unexpected ones that should be fatal. If you ignore or mishandle an unexpected exception, malicious code can use that opportunity to undermine the security of your program.

## Usage

The following sections describe how to transport exceptions by using the `exception_ptr` type, and the `current_exception`, `rethrow_exception`, and `make_exception_ptr` functions.

## exception_ptr type

Use an `exception_ptr` object to reference the current exception or an instance of a user-specified exception. In the Microsoft implementation, an exception is represented by an [EXCEPTION_RECORD](/windows/win32/api/winnt/ns-winnt-exception_record) structure. Each `exception_ptr` object includes an exception reference field that points to a copy of the `EXCEPTION_RECORD` structure that represents the exception.

When you declare an `exception_ptr` variable, the variable is not associated with any exception. That is, its exception reference field is NULL. Such an `exception_ptr` object is called a *null exception_ptr*.

Use the `current_exception` or `make_exception_ptr` function to assign an exception to an `exception_ptr` object. When you assign an exception to an `exception_ptr` variable, the variable's exception reference field points to a copy of the exception. If there is insufficient memory to copy the exception, the exception reference field points to a copy of a [std::bad_alloc](../standard-library/bad-alloc-class.md) exception. If the `current_exception` or `make_exception_ptr` function cannot copy the exception for any other reason, the function calls the [terminate](../c-runtime-library/reference/terminate-crt.md) function to exit the current process.

Despite its name, an `exception_ptr` object is not itself a pointer. It does not obey pointer semantics and cannot be used with the pointer member access (`->`) or indirection (`*`) operators. The `exception_ptr` object has no public data members or member functions.

### Comparisons

You can use the equal (`==`) and not-equal (`!=`) operators to compare two `exception_ptr` objects. The operators do not compare the binary value (bit pattern) of the `EXCEPTION_RECORD` structures that represent the exceptions. Instead, the operators compare the addresses in the exception reference field of the `exception_ptr` objects. Consequently, a null `exception_ptr` and the NULL value compare as equal.

## current_exception function

Call the `current_exception` function in a **`catch`** block. If an exception is in flight and the **`catch`** block can catch the exception, the `current_exception` function returns an `exception_ptr` object that references the exception. Otherwise, the function returns a null `exception_ptr` object.

### Details

The `current_exception` function captures the exception that is in flight regardless of whether the **`catch`** statement specifies an [exception-declaration](../cpp/try-throw-and-catch-statements-cpp.md) statement.

The destructor for the current exception is called at the end of the **`catch`** block if you do not rethrow the exception. However, even if you call the `current_exception` function in the destructor, the function returns an `exception_ptr` object that references the current exception.

Successive calls to the `current_exception` function return `exception_ptr` objects that refer to different copies of the current exception. Consequently, the objects compare as unequal because they refer to different copies, even though the copies have the same binary value.

### SEH exceptions

If you use the **/EHa** compiler option, you can catch an SEH exception in a C++ **`catch`** block. The `current_exception` function returns an `exception_ptr` object that references the SEH exception. And the `rethrow_exception` function throws the SEH exception if you call it with thetransported `exception_ptr` object as its argument.

The `current_exception` function returns a null `exception_ptr` if you call it in an SEH **`__finally`** termination handler, an **`__except`** exception handler, or the **`__except`** filter expression.

A transported exception does not support nested exceptions. A nested exception occurs if another exception is thrown while an exception is being handled. If you catch a nested exception, the `EXCEPTION_RECORD.ExceptionRecord` data member points to a chain of `EXCEPTION_RECORD` structures that describe the associated exceptions. The `current_exception` function does not support nested exceptions because it returns an `exception_ptr` object whose `ExceptionRecord` data member is zeroed out.

If you catch an SEH exception, you must manage the memory referenced by any pointer in the `EXCEPTION_RECORD.ExceptionInformation` data member array. You must guarantee that the memory is valid during the lifetime of the corresponding `exception_ptr` object, and that the memory is freed when the `exception_ptr` object is deleted.

You can use structured exception (SE) translator functions together with the transport exceptions feature. If an SEH exception is translated to a C++ exception, the `current_exception` function returns an `exception_ptr` that references the translated exception instead of the original SEH exception. The `rethrow_exception` function subsequently throws the translated exception, not the original exception. For more information about SE translator functions, see [_set_se_translator](../c-runtime-library/reference/set-se-translator.md).

## rethrow_exception function

After you store a caught exception in an `exception_ptr` object, the primary thread can process the object. In your primary thread, call the `rethrow_exception` function together with the `exception_ptr` object as its argument. The `rethrow_exception` function extracts the exception from the `exception_ptr` object and then throws the exception in the context of the primary thread. If the *p* parameter of the `rethrow_exception` function is a null `exception_ptr`, the function throws [std::bad_exception](../standard-library/bad-exception-class.md).

The extracted exception is now the current exception in the primary thread, and you can handle it as you would any other exception. If you catch the exception, you can handle it immediately or use a **`throw`** statement to send it to a higher level exception handler. Otherwise, do nothing and let the default system exception handler terminate your process.

## make_exception_ptr function

The `make_exception_ptr` function takes an instance of a class as its argument and then returns an `exception_ptr` that references the instance. Usually, you specify an [exception class](../standard-library/exception-class.md) object as the argument to the `make_exception_ptr` function, although any class object can be the argument.

Calling the `make_exception_ptr` function is equivalent to throwing a C++ exception, catching it in a **`catch`** block, and then calling the `current_exception` function to return an `exception_ptr` object that references the exception. The Microsoft implementation of the `make_exception_ptr` function is more efficient than throwing and then catching an exception.

An application typically does not require the `make_exception_ptr` function, and we discourage its use.

## Example

The following example transports a standard C++ exception and a custom C++ exception from one thread to another.

```cpp
// transport_exception.cpp
// compile with: /EHsc /MD
#include <windows.h>
#include <stdio.h>
#include <exception>
#include <stdexcept>

using namespace std;

// Define thread-specific information.
#define THREADCOUNT 2
exception_ptr aException[THREADCOUNT];
int           aArg[THREADCOUNT];

DWORD WINAPI ThrowExceptions( LPVOID );

// Specify a user-defined, custom exception.
// As a best practice, derive your exception
// directly or indirectly from std::exception.
class myException : public std::exception {
};
int main()
{
    HANDLE aThread[THREADCOUNT];
    DWORD ThreadID;

    // Create secondary threads.
    for( int i=0; i < THREADCOUNT; i++ )
    {
        aArg[i] = i;
        aThread[i] = CreateThread(
            NULL,       // Default security attributes.
            0,          // Default stack size.
            (LPTHREAD_START_ROUTINE) ThrowExceptions,
            (LPVOID) &aArg[i], // Thread function argument.
            0,          // Default creation flags.
            &ThreadID); // Receives thread identifier.
        if( aThread[i] == NULL )
        {
            printf("CreateThread error: %d\n", GetLastError());
            return -1;
        }
    }

    // Wait for all threads to terminate.
    WaitForMultipleObjects(THREADCOUNT, aThread, TRUE, INFINITE);
    // Close thread handles.
    for( int i=0; i < THREADCOUNT; i++ ) {
        CloseHandle(aThread[i]);
    }

    // Rethrow and catch the transported exceptions.
    for ( int i = 0; i < THREADCOUNT; i++ ) {
        try {
            if (aException[i] == NULL) {
                printf("exception_ptr %d: No exception was transported.\n", i);
            }
            else {
                rethrow_exception( aException[i] );
            }
        }
        catch( const invalid_argument & ) {
            printf("exception_ptr %d: Caught an invalid_argument exception.\n", i);
        }
        catch( const myException & ) {
            printf("exception_ptr %d: Caught a  myException exception.\n", i);
        }
    }
}
// Each thread throws an exception depending on its thread
// function argument, and then ends.
DWORD WINAPI ThrowExceptions( LPVOID lpParam )
{
    int x = *((int*)lpParam);
    if (x == 0) {
        try {
            // Standard C++ exception.
            // This example explicitly throws invalid_argument exception.
            // In practice, your application performs an operation that
            // implicitly throws an exception.
            throw invalid_argument("A C++ exception.");
        }
        catch ( const invalid_argument & ) {
            aException[x] = current_exception();
        }
    }
    else {
        // User-defined exception.
        aException[x] = make_exception_ptr( myException() );
    }
    return TRUE;
}
```

```Output
exception_ptr 0: Caught an invalid_argument exception.
exception_ptr 1: Caught a  myException exception.
```

## Requirements

**Header:** \<exception>

## See also

[Exception Handling](../cpp/exception-handling-in-visual-cpp.md)<br/>
[/EH (Exception Handling Model)](../build/reference/eh-exception-handling-model.md)<br/>
[/clr (Common Language Runtime Compilation)](../build/reference/clr-common-language-runtime-compilation.md)
