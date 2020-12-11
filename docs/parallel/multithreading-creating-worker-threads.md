---
description: "Learn more about: Multithreading: Creating Worker Threads in MFC"
title: "Multithreading: Creating Worker Threads in MFC"
ms.date: "11/04/2016"
helpviewer_keywords: ["multithreading [C++], worker threads", "background tasks [C++]", "threading [C++], worker threads", "worker threads [C++]", "threading [C++], creating threads", "threading [MFC], worker threads", "threading [C++], user input not required"]
ms.assetid: 670adbfe-041c-4450-a3ed-be14aab15234
---
# Multithreading: Creating Worker Threads in MFC

A worker thread is commonly used to handle background tasks that the user should not have to wait for to continue using your application. Tasks such as recalculation and background printing are good examples of worker threads. This topic details the steps necessary to create a worker thread. Topics include:

- [Starting the thread](#_core_starting_the_thread)

- [Implementing the controlling function](#_core_implementing_the_controlling_function)

- [Example](#_core_controlling_function_example)

Creating a worker thread is a relatively simple task. Only two steps are required to get your thread running: implementing the controlling function and starting the thread. It is not necessary to derive a class from [CWinThread](../mfc/reference/cwinthread-class.md). You can derive a class if you need a special version of `CWinThread`, but it is not required for most simple worker threads. You can use `CWinThread` without modification.

## <a name="_core_starting_the_thread"></a> Starting the Thread

There are two overloaded versions of `AfxBeginThread`: one that can only create worker threads, and one that can create both user-interface threads and worker threads. To begin execution of your worker thread using the first overload, call [AfxBeginThread](../mfc/reference/application-information-and-management.md#afxbeginthread), providing the following information:

- The address of the controlling function.

- The parameter to be passed to the controlling function.

- (Optional) The desired priority of the thread. The default is normal priority. For more information about the available priority levels, see [SetThreadPriority](/windows/win32/api/processthreadsapi/nf-processthreadsapi-setthreadpriority) in the Windows SDK.

- (Optional) The desired stack size for the thread. The default is the same size stack as the creating thread.

- (Optional) CREATE_SUSPENDED if you want the thread to be created in a suspended state. The default is 0, or start the thread normally.

- (Optional) The desired security attributes. The default is the same access as the parent thread. For more information about the format of this security information, see [SECURITY_ATTRIBUTES](/previous-versions/windows/desktop/legacy/aa379560\(v=vs.85\)) in the Windows SDK.

`AfxBeginThread` creates and initializes a `CWinThread` object for you, starts it, and returns its address so you can refer to it later. Checks are made throughout the procedure to make sure all objects are deallocated properly should any part of the creation fail.

## <a name="_core_implementing_the_controlling_function"></a> Implementing the Controlling Function

The controlling function defines the thread. When this function is entered, the thread starts, and when it exits, the thread terminates. This function should have the following prototype:

```cpp
UINT MyControllingFunction( LPVOID pParam );
```

The parameter is a single value. The value the function receives in this parameter is the value that was passed to the constructor when the thread object was created. The controlling function can interpret this value in any manner it chooses. It can be treated as a scalar value or a pointer to a structure containing multiple parameters, or it can be ignored. If the parameter refers to a structure, the structure can be used not only to pass data from the caller to the thread, but also to pass data back from the thread to the caller. If you use such a structure to pass data back to the caller, the thread needs to notify the caller when the results are ready. For information about communicating from the worker thread to the caller, see [Multithreading: Programming Tips](multithreading-programming-tips.md).

When the function terminates, it should return a UINT value indicating the reason for termination. Typically, this exit code is 0 to indicate success with other values indicating different types of errors. This is purely implementation dependent. Some threads might maintain usage counts of objects and return the current number of uses of that object. To see how applications can retrieve this value, see [Multithreading: Terminating Threads](multithreading-terminating-threads.md).

There are some restrictions on what you can do in a multithreaded program written with the MFC library. For descriptions of these restrictions and other tips about using threads, see [Multithreading: Programming Tips](multithreading-programming-tips.md).

## <a name="_core_controlling_function_example"></a> Controlling Function Example

The following example shows how to define a controlling function and use it from another portion of the program.

```cpp
UINT MyThreadProc( LPVOID pParam )
{
    CMyObject* pObject = (CMyObject*)pParam;

    if (pObject == NULL ||
        !pObject->IsKindOf(RUNTIME_CLASS(CMyObject)))
    return 1;   // if pObject is not valid

    // do something with 'pObject'

    return 0;   // thread completed successfully
}

// inside a different function in the program
.
.
.
pNewObject = new CMyObject;
AfxBeginThread(MyThreadProc, pNewObject);
.
.
.
```

## What do you want to know more about?

- [Multithreading: Creating User-Interface Threads](multithreading-creating-user-interface-threads.md)

## See also

[Multithreading with C++ and MFC](multithreading-with-cpp-and-mfc.md)
