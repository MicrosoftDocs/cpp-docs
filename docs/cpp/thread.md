---
description: "Learn more about: thread"
title: "thread"
ms.date: "05/07/2019"
f1_keywords: ["thread_cpp"]
helpviewer_keywords: ["thread local storage (TLS)", "thread __declspec keyword", "TLS (thread local storage), compiler implementation", "__declspec keyword [C++], thread"]
ms.assetid: 667f2a77-6d1f-4b41-bee8-05e67324fab8
---
# thread

**Microsoft Specific**

The **`thread`** extended storage-class modifier is used to declare a thread local variable. For the portable equivalent in C++11 and later, use the [thread_local](../cpp/storage-classes-cpp.md#thread_local) storage class specifier for portable code. On Windows **`thread_local`** is implemented with **`__declspec(thread)`**.

## Syntax

**`__declspec(thread)`** *declarator*

## Remarks

Thread Local Storage (TLS) is the mechanism by which each thread in a multithreaded process allocates storage for thread-specific data. In standard multithreaded programs, data is shared among all threads of a given process, whereas thread local storage is the mechanism for allocating per-thread data. For a complete discussion of threads, see [Multithreading](../parallel/multithreading-support-for-older-code-visual-cpp.md).

Declarations of thread local variables must use [extended attribute syntax](../cpp/declspec.md) and the **`__declspec`** keyword with the **`thread`** keyword. For example, the following code declares an integer thread local variable and initializes it with a value:

```cpp
__declspec( thread ) int tls_i = 1;
```

When using thread-local variables in dynamically-loaded libraries, you need to be aware of factors that can cause a thread-local variable to not be initialized correctly:

1. If the variable is initialized with a function call (including constructors), this function will only be called for the thread that caused the binary/DLL to load into the process, and for those threads that started after the binary/DLL was loaded. The initialization functions are not called for any other thread that was already running when the DLL was loaded. Dynamic initialization occurs on the DllMain call for DLL_THREAD_ATTACH, but the DLL never gets that message if the DLL isn't in the process when the thread starts.

1. Thread-local variables that are initialized statically with constant values are generally initialized properly on all threads. However, as of December 2017 there is a known conformance issue in the Microsoft C++ compiler whereby **`constexpr`** variables receive dynamic rather than static initialization.

   Note: Both of these issues are expected to be fixed in future updates of the compiler.

Additionally, you must observe these guidelines when declaring thread local objects and variables:

- You can apply the **`thread`** attribute only to class and data declarations and definitions; **`thread`** can't be used on function declarations or definitions.

- You can specify the **`thread`** attribute only on data items with static storage duration. This includes global data objects (both **`static`** and **`extern`**), local static objects, and static data members of classes. You can't declare automatic data objects with the **`thread`** attribute.

- You must use the **`thread`** attribute for the declaration and the definition of a thread local object, whether the declaration and definition occur in the same file or separate files.

- You can't use the **`thread`** attribute as a type modifier.

- Because the declaration of objects that use the **`thread`** attribute is permitted, these two examples are semantically equivalent:

    ```cpp
    // declspec_thread_2.cpp
    // compile with: /LD
    __declspec( thread ) class B {
    public:
       int data;
    } BObject;   // BObject declared thread local.

    class B2 {
    public:
       int data;
    };
    __declspec( thread ) B2 BObject2;   // BObject2 declared thread local.
    ```

- Standard C permits initialization of an object or variable with an expression involving a reference to itself, but only for nonstatic objects. Although C++ normally permits such dynamic initialization of an object with an expression involving a reference to itself, this type of initialization isn't permitted with thread local objects. For example:

   ```cpp
   // declspec_thread_3.cpp
   // compile with: /LD
   #define Thread __declspec( thread )
   int j = j;   // Okay in C++; C error
   Thread int tls_i = sizeof( tls_i );   // Okay in C and C++
   ```

   A **`sizeof`** expression that includes the object being initialized does not constitute a reference to itself and is allowed in C and C++.

**END Microsoft Specific**

## See also

[__declspec](../cpp/declspec.md)<br/>
[Keywords](../cpp/keywords-cpp.md)<br/>
[Thread Local Storage (TLS)](../parallel/thread-local-storage-tls.md)
