---
description: "Learn more about: C Runtime Error R6016"
title: "C Runtime Error R6016"
ms.date: "11/04/2016"
f1_keywords: ["R6016"]
helpviewer_keywords: ["R6016"]
ms.assetid: 7bd3f274-d9c4-4bc4-8252-80bf168c4c3a
---
# C Runtime Error R6016

not enough space for thread data

> [!NOTE]
> If you encounter this error message while running an app, the app was shut down because it has an internal memory problem. There are many possible reasons for this error, but often it's caused by an extremely low memory condition, a bug in the app, or by a bug in an add-in or extension used by the app.
>
> You can try these steps to fix this error:
>
> - Close other running applications or restart your computer to free up memory.
> - Use the **Apps and Features** or **Programs and Features** page in the **Control Panel** to repair or reinstall the app.
> - Use the **Apps and Features** or **Programs and Features** page in the **Control Panel** to remove, repair or reinstall add-ins or extensions used by the app.
> - Check **Windows Update** in the **Control Panel** for software updates.
> - Check for an updated version of the app. Contact the app vendor if the problem persists.

**Information for Programmers**

This error occurs because the program did not receive enough memory from the operating system to complete a [_beginthread](../../c-runtime-library/reference/beginthread-beginthreadex.md) or `_beginthreadex` call, or thread local storage has not been initialized by `_beginthread` or `_beginthreadex`.

When a new thread is started, the library must create an internal database for the thread. If the database cannot be expanded by using memory provided by the operating system, the thread does not begin and the calling process stops. This can happen when too many threads have been created by the process, or if thread local storage has been exhausted.

We recommend that an executable that calls the C runtime library (CRT) should use `_beginthreadex` for thread creation rather than the Windows API `CreateThread`. `_beginthreadex` initializes internal static storage used by many CRT functions in thread local storage. If you use `CreateThread` to create a thread, the CRT may terminate the process with R6016 when a call is made to a CRT function that requires initialized internal static storage.
