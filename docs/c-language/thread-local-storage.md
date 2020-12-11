---
description: "Learn more about: Thread Local Storage"
title: "Thread Local Storage"
ms.date: "11/04/2016"
helpviewer_keywords: ["thread-local variables", "TLS (thread local storage)", "thread storage-class attribute", "thread-local storage", "storage, thread local storage"]
ms.assetid: a0f1b109-c953-4079-aa10-e47f5483173d
---
# Thread Local Storage

**Microsoft Specific**

Thread Local Storage (TLS) is the mechanism by which each thread in a given multithreaded process allocates storage for thread-specific data. In standard multithreaded programs, data is shared among all threads of a given process, whereas thread local storage is the mechanism for allocating per-thread data. For a complete discussion of threads, see [Processes and Threads](/windows/win32/ProcThread/processes-and-threads) in the Windows SDK.

The Microsoft C language includes the extended storage-class attribute, thread, which is used with the __declspec keyword to declare a thread local variable. For example, the following code declares an integer thread local variable and initializes it with a value:

```
__declspec( thread ) int tls_i = 1;
```

These guidelines must be observed when you are declaring statically bound thread local variables:

- Thread-local variables that have dynamic initialization are only initialized on the thread that causes the DLL to load, and threads that are already running in the process. For more information, see [thread](../cpp/thread.md).

- You can apply the thread attribute only to data declarations and definitions. It cannot be used on function declarations or definitions. For example, the following code generates a compiler error:

    ```C
    #define Thread   __declspec( thread )
    Thread void func();      /* Error */
    ```

- You can specify the thread attribute only on data items with static storage duration. This includes global data (both static and extern) and local static data. You cannot declare automatic data with the thread attribute. For example, the following code generates compiler errors:

    ```C
    #define Thread   __declspec( thread )
    void func1()
    {
        Thread int tls_i;            /* Error */
    }

    int func2( Thread int tls_i )    /* Error */
    {
       return tls_i;
    }
    ```

- You must use the thread attribute for the declaration and the definition of thread local data, regardless of whether the declaration and definition occur in the same file or separate files. For example, the following code generates an error:

    ```C
    #define Thread   __declspec( thread )
    extern int tls_i;     /* This generates an error, because the   */
    int Thread tls_i;     /* declaration and the definition differ. */
    ```

- You cannot use the thread attribute as a type modifier. For example, the following code generates a compiler error:

    ```C
    char *ch __declspec( thread );      /* Error */
    ```

- The address of a thread local variable is not considered constant, and any expression involving such an address is not considered a constant expression. This means that you cannot use the address of a thread local variable as an initializer for a pointer. For example, the compiler flags the following code as an error:

    ```C
    #define Thread   __declspec( thread )
    Thread int tls_i;
    int *p = &tls_i;      /* Error */
    ```

- C permits initialization of a variable with an expression involving a reference to itself, but only for objects of nonstatic extent. For example:

    ```C
    #define Thread   __declspec( thread )
    Thread int tls_i = tls_i;             /* Error */
    int j = j;                            /* Error */
    Thread int tls_i = sizeof( tls_i )    /* Okay  */
    ```

   Note that a sizeof expression that includes the variable being initialized does not constitute a reference to itself and is allowed.

- The use of **\_\_declspec(thread)** may interfere with [delay loading](../build/reference/linker-support-for-delay-loaded-dlls.md) of DLL imports.

For more information about using the thread attribute, see [Multithreading Topics](../parallel/multithreading-support-for-older-code-visual-cpp.md).

**END Microsoft Specific**

## See also

[C Extended Storage-Class Attributes](../c-language/c-extended-storage-class-attributes.md)
