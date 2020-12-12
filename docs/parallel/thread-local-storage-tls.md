---
description: "Learn more about: Thread Local Storage (TLS)"
title: "Thread Local Storage (TLS)"
ms.date: "08/09/2019"
helpviewer_keywords: ["multithreading [C++], Thread Local Storage", "TLS [C++]", "threading [C++], Thread Local Storage", "storing thread-specific data", "thread attribute", "Thread Local Storage [C++]"]
ms.assetid: 80801907-d792-45ca-b776-df0cf2e9f197
---
# Thread Local Storage (TLS)

Thread Local Storage (TLS) is the method by which each thread in a given multithreaded process can allocate locations in which to store thread-specific data. Dynamically bound (run-time) thread-specific data is supported by way of the TLS API ([TlsAlloc](/windows/win32/api/processthreadsapi/nf-processthreadsapi-tlsalloc)). Win32 and the Microsoft C++ compiler now support statically bound (load-time) per-thread data in addition to the existing API implementation.

## <a name="_core_compiler_implementation_for_tls"></a> Compiler Implementation for TLS

**C++11:**  The **`thread_local`** storage class specifier is the recommended way to specify thread-local storage for objects and class members. For more information, see [Storage classes (C++)](../cpp/storage-classes-cpp.md).

MSVC also provides a Microsoft-specific attribute, [thread](../cpp/thread.md), as extended storage class modifier. Use the **`__declspec`** keyword to declare a **`thread`** variable. For example, the following code declares an integer thread local variable and initializes it with a value:

```C
__declspec( thread ) int tls_i = 1;
```

## Rules and limitations

The following guidelines must be observed when declaring statically bound thread local objects and variables. These guidelines apply both to [thread](../cpp/thread.md) and to [thread_local](../cpp/storage-classes-cpp.md):

- The **`thread`** attribute can be applied only to class and data declarations and definitions. It can't be used on function declarations or definitions. For example, the following code generates a compiler error:

    ```C
    __declspec( thread )void func();     // This will generate an error.
    ```

- The **`thread`** modifier can only be specified on data items with **`static`** extent. That includes global data objects (both **`static`** and **`extern`**), local static objects, and static data members of C++ classes. Automatic data objects can't be declared with the **`thread`** attribute. The following code generates compiler errors:

    ```C
    void func1()
    {
        __declspec( thread )int tls_i;            // This will generate an error.
    }

    int func2(__declspec( thread )int tls_i )     // This will generate an error.
    {
        return tls_i;
    }
    ```

- The declarations and the definition of a thread local object must all specify the **`thread`** attribute. For example, the following code generates an error:

    ```C
    #define Thread  __declspec( thread )
    extern int tls_i;        // This will generate an error, since the
    int __declspec( thread )tls_i;        // declaration and definition differ.
    ```

- The **`thread`** attribute can't be used as a type modifier. For example, the following code generates a compiler error:

    ```C
    char __declspec( thread ) *ch;        // Error
    ```

- Because the declaration of C++ objects that use the **`thread`** attribute is permitted, the following two examples are semantically equivalent:

    ```cpp
    __declspec( thread ) class B
    {
    // Code
    } BObject;  // OK--BObject is declared thread local.

    class B
    {
    // Code
    };
    __declspec( thread ) B BObject;  // OK--BObject is declared thread local.
    ```

- The address of a thread local object is not considered constant, and any expression involving such an address isn't considered a constant expression. In standard C, the effect is to disallow the use of the address of a thread local variable as an initializer for an object or pointer. For example, the following code is flagged as an error by the C compiler:

    ```C
    __declspec( thread ) int tls_i;
    int *p = &tls_i;       //This will generate an error in C.
    ```

   This restriction doesn't apply in C++. Because C++ allows for dynamic initialization of all objects, you can initialize an object by using an expression that uses the address of a thread local variable. It's done just like the construction of thread local objects. For example, the code shown earlier doesn't generate an error when it's compiled as a C++ source file. The address of a thread local variable is valid only as long as the thread in which the address was taken still exists.

- Standard C allows for the initialization of an object or variable with an expression that involves a reference to itself, but only for objects of nonstatic extent. Although C++ generally allows for such dynamic initialization of objects with an expression that involves a reference to itself, this kind of initialization isn't permitted with thread local objects. For example:

    ```C
    __declspec( thread )int tls_i = tls_i;                // Error in C and C++
    int j = j;                               // OK in C++, error in C
    __declspec( thread )int tls_i = sizeof( tls_i )       // Legal in C and C++
    ```

   A **`sizeof`** expression that includes the object being initialized doesn't represent a reference to itself, and is enabled in both C and C++.

   C++ doesn't allow such dynamic initialization of thread data because of possible future enhancements to the thread local storage facility.

- On Windows operating systems before Windows Vista, `__declspec( thread )` has some limitations. If a DLL declares any data or object as `__declspec( thread )`, it can cause a protection fault if dynamically loaded. After the DLL is loaded with [LoadLibrary](/windows/win32/api/libloaderapi/nf-libloaderapi-loadlibraryw), it causes system failure whenever the code references the `__declspec( thread )` data. Because the global variable space for a thread is allocated at run time, the size of this space is based on a calculation of the requirements of the application plus the requirements of all the DLLs that are statically linked. When you use `LoadLibrary`, you can't extend this space to allow for the thread local variables declared with `__declspec( thread )`. Use the TLS APIs, such as [TlsAlloc](/windows/win32/api/processthreadsapi/nf-processthreadsapi-tlsalloc), in your DLL to allocate TLS if the DLL might be loaded with `LoadLibrary`.

## See also

[Multithreading with C and Win32](multithreading-with-c-and-win32.md)
