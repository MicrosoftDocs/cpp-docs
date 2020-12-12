---
description: "Learn more about: Multithreading with C and Win32"
title: "Multithreading with C and Win32"
ms.date: "08/09/2019"
helpviewer_keywords: ["Windows API [C++], multithreading", "multithreading [C++], C and Win32", "Visual C, multithreading", "Win32 applications [C++], multithreading", "threading [C++], C and Win32", "Win32 [C++], multithreading", "threading [C]"]
ms.assetid: 67cdc99e-1ad9-452b-a042-ed246b70040e
---
# Multithreading with C and Win32

The Microsoft C/C++ compiler (MSVC) provides support for creating multithread applications. Consider using more than one thread if your application needs to perform expensive operations that would cause the user interface to become unresponsive.

With MSVC, there are several ways to program with multiple threads: You can use C++/WinRT and the Windows Runtime library, the Microsoft Foundation Class (MFC) library, C++/CLI and the .NET runtime, or the C run-time library and the Win32 API. This article is about multithreading in C. For example code, see [Sample multithread program in C](sample-multithread-c-program.md).

## Multithread programs

A thread is basically a path of execution through a program. It's also the smallest unit of execution that Win32 schedules. A thread consists of a stack, the state of the CPU registers, and an entry in the execution list of the system scheduler. Each thread shares all the process's resources.

A process consists of one or more threads and the code, data, and other resources of a program in memory. Typical program resources are open files, semaphores, and dynamically allocated memory. A program executes when the system scheduler gives one of its threads execution control. The scheduler determines which threads should run and when they should run. Threads of lower priority might have to wait while higher priority threads complete their tasks. On multiprocessor machines, the scheduler can move individual threads to different processors to balance the CPU load.

Each thread in a process operates independently. Unless you make them visible to each other, the threads execute individually and are unaware of the other threads in a process. Threads sharing common resources, however, must coordinate their work by using semaphores or another method of interprocess communication. For more information about synchronizing threads, see [Writing a Multithreaded Win32 Program](#writing-a-multithreaded-win32-program).

## Library support for multithreading

All versions of the CRT now support multithreading, with the exception of the non-locking versions of some functions. For more information, see [Multithreaded libraries performance](../c-runtime-library/multithreaded-libraries-performance.md). For information on the versions of the CRT available to link with your code, see [CRT library features](../c-runtime-library/crt-library-features.md).

## Include files for multithreading

Standard CRT include files declare the C run-time library functions as they're implemented in the libraries. If your compiler options specify the [__fastcall or __vectorcall](../build/reference/gd-gr-gv-gz-calling-convention.md) calling conventions, the compiler assumes all functions should be called using the register calling convention. The run-time library functions use the C calling convention, and the declarations in the standard include files tell the compiler to generate correct external references to these functions.

## CRT functions for thread control

All Win32 programs have at least one thread. Any thread can create additional threads. A thread can complete its work quickly and then terminate, or it can stay active for the life of the program.

The CRT libraries provide the following functions for thread creation and termination: [_beginthread, _beginthreadex](../c-runtime-library/reference/beginthread-beginthreadex.md), [_endthread, and _endthreadex](../c-runtime-library/reference/endthread-endthreadex.md).

The `_beginthread` and `_beginthreadex` functions create a new thread and return a thread identifier if the operation is successful. The thread terminates automatically if it completes execution. Or, it can terminate itself with a call to `_endthread` or `_endthreadex`.

> [!NOTE]
> If you call C run-time routines from a program built with libcmt.lib, you must start your threads with the `_beginthread` or `_beginthreadex` function. Do not use the Win32 functions `ExitThread` and `CreateThread`. Using `SuspendThread` can lead to a deadlock when more than one thread is blocked waiting for the suspended thread to complete its access to a C run-time data structure.

### <a name="_core_the__beginthread_function"></a> The _beginthread and _beginthreadex functions

The `_beginthread` and `_beginthreadex` functions create a new thread. A thread shares the code and data segments of a process with other threads in the process but has its own unique register values, stack space, and current instruction address. The system gives CPU time to each thread, so that all threads in a process can execute concurrently.

`_beginthread` and `_beginthreadex` are similar to the [CreateThread](/windows/win32/api/processthreadsapi/nf-processthreadsapi-createthread) function in the Win32 API but has these differences:

- They initialize certain C run-time library variables. That's important only if you use the C run-time library in your threads.

- `CreateThread` helps provide control over security attributes. You can use this function to start a thread in a suspended state.

`_beginthread` and `_beginthreadex` return a handle to the new thread if successful or an error code if there was an error.

### <a name="_core_the__endthread_function"></a> The _endthread and _endthreadex functions

The [_endthread](../c-runtime-library/reference/endthread-endthreadex.md) function terminates a thread created by `_beginthread` (and similarly, `_endthreadex` terminates a thread created by `_beginthreadex`). Threads terminate automatically when they finish. `_endthread` and `_endthreadex` are useful for conditional termination from within a thread. A thread dedicated to communications processing, for example, can quit if it is unable to get control of the communications port.

## Writing a multithreaded Win32 program

When you write a program with multiple threads, you must coordinate their behavior and [use of the program's resources](#_core_sharing_common_resources_between_threads). Also, make sure that each thread receives [its own stack](#_core_thread_stacks).

### <a name="_core_sharing_common_resources_between_threads"></a> Sharing common resources between threads

> [!NOTE]
> For a similar discussion from the MFC point of view, see [Multithreading: Programming Tips](multithreading-programming-tips.md) and [Multithreading: When to Use the Synchronization Classes](multithreading-when-to-use-the-synchronization-classes.md).

Each thread has its own stack and its own copy of the CPU registers. Other resources, such as files, static data, and heap memory, are shared by all threads in the process. Threads using these common resources must be synchronized. Win32 provides several ways to synchronize resources, including semaphores, critical sections, events, and mutexes.

When multiple threads are accessing static data, your program must provide for possible resource conflicts. Consider a program where one thread updates a static data structure containing *x*,*y* coordinates for items to be displayed by another thread. If the update thread alters the *x* coordinate and is preempted before it can change the *y* coordinate, the display thread might be scheduled before the *y* coordinate is updated. The item would be displayed at the wrong location. You can avoid this problem by using semaphores to control access to the structure.

A mutex (short for *mut*ual *ex*clusion) is a way of communicating among threads or processes that are executing asynchronously of one another. This communication can be used to coordinate the activities of multiple threads or processes, typically by controlling access to a shared resource by locking and unlocking the resource. To solve this *x*,*y* coordinate update problem, the update thread sets a mutex indicating that the data structure is in use before performing the update. It would clear the mutex after both coordinates had been processed. The display thread must wait for the mutex to be clear before updating the display. This process of waiting for a mutex is often called *blocking* on a mutex, because the process is blocked and cannot continue until the mutex clears.

The Bounce.c program shown in [Sample Multithread C Program](sample-multithread-c-program.md) uses a mutex named `ScreenMutex` to coordinate screen updates. Each time one of the display threads is ready to write to the screen, it calls `WaitForSingleObject` with the handle to `ScreenMutex` and constant INFINITE to indicate that the `WaitForSingleObject` call should block on the mutex and not time out. If `ScreenMutex` is clear, the wait function sets the mutex so other threads can't interfere with the display, and continues executing the thread. Otherwise, the thread blocks until the mutex clears. When the thread completes the display update, it releases the mutex by calling `ReleaseMutex`.

Screen displays and static data are only two of the resources requiring careful management. For example, your program might have multiple threads accessing the same file. Because another thread might have moved the file pointer, each thread must reset the file pointer before reading or writing. In addition, each thread must make sure that it isn't preempted between the time it positions the pointer and the time it accesses the file. These threads should use a semaphore to coordinate access to the file by bracketing each file access with `WaitForSingleObject` and `ReleaseMutex` calls. The following code example illustrates this technique:

```C
HANDLE    hIOMutex = CreateMutex (NULL, FALSE, NULL);

WaitForSingleObject( hIOMutex, INFINITE );
fseek( fp, desired_position, 0L );
fwrite( data, sizeof( data ), 1, fp );
ReleaseMutex( hIOMutex);
```

### <a name="_core_thread_stacks"></a> Thread stacks

All of an application's default stack space is allocated to the first thread of execution, which is known as thread 1. As a result, you must specify how much memory to allocate for a separate stack for each additional thread your program needs. The operating system allocates additional stack space for the thread, if necessary, but you must specify a default value.

The first argument in the `_beginthread` call is a pointer to the `BounceProc` function, which executes the threads. The second argument specifies the default stack size for the thread. The last argument is an ID number that is passed to `BounceProc`. `BounceProc` uses the ID number to seed the random number generator and to select the thread's color attribute and display character.

Threads that make calls to the C run-time library or to the Win32 API must allow sufficient stack space for the library and API functions they call. The C `printf` function requires more than 500 bytes of stack space, and you should have 2K bytes of stack space available when calling Win32 API routines.

Because each thread has its own stack, you can avoid potential collisions over data items by using as little static data as possible. Design your program to use automatic stack variables for all data that can be private to a thread. The only global variables in the Bounce.c program are either mutexes or variables that never change after they're initialized.

Win32 also provides Thread-local storage (TLS) to store per-thread data. For more information, see [Thread local storage (TLS)](thread-local-storage-tls.md).

## Avoiding problem areas with multithread programs

There are several problems you might encounter in creating, linking, or executing a multithread C program. Some of the more common problems are described in the following table. (For a similar discussion from the MFC point of view, see [Multithreading: Programming Tips](multithreading-programming-tips.md).)

|Problem|Probable cause|
|-------------|--------------------|
|You get a message box showing that your program caused a protection violation.|Many Win32 programming errors cause protection violations. A common cause of protection violations is the indirect assignment of data to null pointers. Because it results in your program trying to access memory that doesn't belong to it, a protection violation is issued.<br /><br /> An easy way to detect the cause of a protection violation is to compile your program with debugging information and then run it through the debugger in the Visual Studio environment. When the protection fault occurs, Windows transfers control to the debugger, and the cursor is positioned on the line that caused the problem.|
|Your program generates numerous compile and link errors.|You can eliminate many potential problems by setting the compiler's warning level to one of its highest values and heeding the warning messages. By using the level 3 or level 4 warning level options, you can detect unintentional data conversions, missing function prototypes, and use of non-ANSI features.|

## See also

[Multithreading Support for Older Code (Visual C++)](multithreading-support-for-older-code-visual-cpp.md)\
[Sample multithread program in C](sample-multithread-c-program.md)\
[Thread local storage (TLS)](thread-local-storage-tls.md)\
[Concurrency and asynchronous operations with C++/WinRT](/windows/uwp/cpp-and-winrt-apis/concurrency)\
[Multithreading with C++ and MFC](multithreading-with-cpp-and-mfc.md)
