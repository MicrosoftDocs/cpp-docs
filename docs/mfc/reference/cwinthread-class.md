---
description: "Learn more about: CWinThread Class"
title: "CWinThread Class"
ms.date: "11/04/2016"
f1_keywords: ["CWinThread", "AFXWIN/CWinThread", "AFXWIN/CWinThread::CWinThread", "AFXWIN/CWinThread::CreateThread", "AFXWIN/CWinThread::ExitInstance", "AFXWIN/CWinThread::GetMainWnd", "AFXWIN/CWinThread::GetThreadPriority", "AFXWIN/CWinThread::InitInstance", "AFXWIN/CWinThread::IsIdleMessage", "AFXWIN/CWinThread::OnIdle", "AFXWIN/CWinThread::PostThreadMessage", "AFXWIN/CWinThread::PreTranslateMessage", "AFXWIN/CWinThread::ProcessMessageFilter", "AFXWIN/CWinThread::ProcessWndProcException", "AFXWIN/CWinThread::PumpMessage", "AFXWIN/CWinThread::ResumeThread", "AFXWIN/CWinThread::Run", "AFXWIN/CWinThread::SetThreadPriority", "AFXWIN/CWinThread::SuspendThread", "AFXWIN/CWinThread::m_bAutoDelete", "AFXWIN/CWinThread::m_hThread", "AFXWIN/CWinThread::m_nThreadID", "AFXWIN/CWinThread::m_pActiveWnd", "AFXWIN/CWinThread::m_pMainWnd"]
helpviewer_keywords: ["CWinThread [MFC], CWinThread", "CWinThread [MFC], CreateThread", "CWinThread [MFC], ExitInstance", "CWinThread [MFC], GetMainWnd", "CWinThread [MFC], GetThreadPriority", "CWinThread [MFC], InitInstance", "CWinThread [MFC], IsIdleMessage", "CWinThread [MFC], OnIdle", "CWinThread [MFC], PostThreadMessage", "CWinThread [MFC], PreTranslateMessage", "CWinThread [MFC], ProcessMessageFilter", "CWinThread [MFC], ProcessWndProcException", "CWinThread [MFC], PumpMessage", "CWinThread [MFC], ResumeThread", "CWinThread [MFC], Run", "CWinThread [MFC], SetThreadPriority", "CWinThread [MFC], SuspendThread", "CWinThread [MFC], m_bAutoDelete", "CWinThread [MFC], m_hThread", "CWinThread [MFC], m_nThreadID", "CWinThread [MFC], m_pActiveWnd", "CWinThread [MFC], m_pMainWnd"]
ms.assetid: 10cdc294-4057-4e76-ac7c-a8967a89af0b
---
# CWinThread Class

Represents a thread of execution within an application.

## Syntax

```
class CWinThread : public CCmdTarget
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CWinThread::CWinThread](#cwinthread)|Constructs a `CWinThread` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CWinThread::CreateThread](#createthread)|Starts execution of a `CWinThread` object.|
|[CWinThread::ExitInstance](#exitinstance)|Override to clean up when your thread terminates.|
|[CWinThread::GetMainWnd](#getmainwnd)|Retrieves a pointer to the main window for the thread.|
|[CWinThread::GetThreadPriority](#getthreadpriority)|Gets the priority of the current thread.|
|[CWinThread::InitInstance](#initinstance)|Override to perform thread instance initialization.|
|[CWinThread::IsIdleMessage](#isidlemessage)|Checks for special messages.|
|[CWinThread::OnIdle](#onidle)|Override to perform thread-specific idle-time processing.|
|[CWinThread::PostThreadMessage](#postthreadmessage)|Posts a message to another `CWinThread` object.|
|[CWinThread::PreTranslateMessage](#pretranslatemessage)|Filters messages before they are dispatched to the Windows functions [TranslateMessage](/windows/win32/api/winuser/nf-winuser-translatemessage) and [DispatchMessage](/windows/win32/api/winuser/nf-winuser-dispatchmessage).|
|[CWinThread::ProcessMessageFilter](#processmessagefilter)|Intercepts certain messages before they reach the application.|
|[CWinThread::ProcessWndProcException](#processwndprocexception)|Intercepts all unhandled exceptions thrown by the thread's message and command handlers.|
|[CWinThread::PumpMessage](#pumpmessage)|Contains the thread's message loop.|
|[CWinThread::ResumeThread](#resumethread)|Decrements a thread's suspend count.|
|[CWinThread::Run](#run)|Controlling function for threads with a message pump. Override to customize the default message loop.|
|[CWinThread::SetThreadPriority](#setthreadpriority)|Sets the priority of the current thread.|
|[CWinThread::SuspendThread](#suspendthread)|Increments a thread's suspend count.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CWinThread::operator HANDLE](#operator_handle)|Retrieves the handle of the `CWinThread` object.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CWinThread::m_bAutoDelete](#m_bautodelete)|Specifies whether to destroy the object at thread termination.|
|[CWinThread::m_hThread](#m_hthread)|Handle to the current thread.|
|[CWinThread::m_nThreadID](#m_nthreadid)|ID of the current thread.|
|[CWinThread::m_pActiveWnd](#m_pactivewnd)|Pointer to the main window of the container application when an OLE server is in-place active.|
|[CWinThread::m_pMainWnd](#m_pmainwnd)|Holds a pointer to the application's main window.|

## Remarks

The main thread of execution is usually provided by an object derived from `CWinApp`; `CWinApp` is derived from `CWinThread`. Additional `CWinThread` objects allow multiple threads within a given application.

There are two general types of threads that `CWinThread` supports: worker threads and user-interface threads. Worker threads have no message pump: for example, a thread that performs background calculations in a spreadsheet application. User-interface threads have a message pump and process messages received from the system. [CWinApp](../../mfc/reference/cwinapp-class.md) and classes derived from it are examples of user-interface threads. Other user-interface threads can also be derived directly from `CWinThread`.

Objects of class `CWinThread` typically exist for the duration of the thread. If you wish to modify this behavior, set [m_bAutoDelete](#m_bautodelete) to FALSE.

The `CWinThread` class is necessary to make your code and MFC fully thread-safe. Thread-local data used by the framework to maintain thread-specific information is managed by `CWinThread` objects. Because of this dependence on `CWinThread` to handle thread-local data, any thread that uses MFC must be created by MFC. For example, a thread created by the run-time function [_beginthread, _beginthreadex](../../c-runtime-library/reference/beginthread-beginthreadex.md) cannot use any MFC APIs.

To create a thread, call [AfxBeginThread](application-information-and-management.md#afxbeginthread). There are two forms, depending on whether you want a worker or user-interface thread. If you want a user-interface thread, pass to `AfxBeginThread` a pointer to the `CRuntimeClass` of your `CWinThread`-derived class. If you want to create a worker thread, pass to `AfxBeginThread` a pointer to the controlling function and the parameter to the controlling function. For both worker threads and user-interface threads, you can specify optional parameters that modify priority, stack size, creation flags, and security attributes. `AfxBeginThread` will return a pointer to your new `CWinThread` object.

Instead of calling `AfxBeginThread`, you can construct a `CWinThread`-derived object and then call `CreateThread`. This two-stage construction method is useful if you want to reuse the `CWinThread` object between successive creation and terminations of thread executions.

For more information on `CWinThread`, see the articles [Multithreading with C++ and MFC](../../parallel/multithreading-with-cpp-and-mfc.md), [Multithreading: Creating User-Interface Threads](../../parallel/multithreading-creating-user-interface-threads.md), [Multithreading: Creating Worker Threads](../../parallel/multithreading-creating-worker-threads.md), and [Multithreading: How to Use the Synchronization Classes](../../parallel/multithreading-how-to-use-the-synchronization-classes.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

`CWinThread`

## Requirements

**Header:** afxwin.h

## <a name="createthread"></a> CWinThread::CreateThread

Creates a thread to execute within the address space of the calling process.

```
BOOL CreateThread(
    DWORD dwCreateFlags = 0,
    UINT nStackSize = 0,
    LPSECURITY_ATTRIBUTES lpSecurityAttrs = NULL);
```

### Parameters

*dwCreateFlags*<br/>
Specifies an additional flag that controls the creation of the thread. This flag can contain one of two values:

- CREATE_SUSPENDED Start the thread with a suspend count of one. Use CREATE_SUSPENDED if you want to initialize any member data of the `CWinThread` object, such as [m_bAutoDelete](#m_bautodelete) or any members of your derived class, before the thread starts running. Once your initialization is complete, use the [CWinThread::ResumeThread](#resumethread) to start the thread running. The thread will not execute until `CWinThread::ResumeThread` is called.

- **0** Start the thread immediately after creation.

*nStackSize*<br/>
Specifies the size in bytes of the stack for the new thread. If **0**, the stack size defaults to the same size as that of the process's primary thread.

*lpSecurityAttrs*<br/>
Points to a [SECURITY_ATTRIBUTES](/previous-versions/windows/desktop/legacy/aa379560\(v=vs.85\)) structure that specifies the security attributes for the thread.

### Return Value

Nonzero if the thread is created successfully; otherwise 0.

### Remarks

Use `AfxBeginThread` to create a thread object and execute it in one step. Use `CreateThread` if you want to reuse the thread object between successive creation and termination of thread executions.

## <a name="cwinthread"></a> CWinThread::CWinThread

Constructs a `CWinThread` object.

```
CWinThread();
```

### Remarks

To begin the thread's execution, call the [CreateThread](#createthread) member function. You will usually create threads by calling [AfxBeginThread](application-information-and-management.md#afxbeginthread), which will call this constructor and `CreateThread`.

## <a name="exitinstance"></a> CWinThread::ExitInstance

Called by the framework from within a rarely overridden [Run](#run) member function to exit this instance of the thread, or if a call to [InitInstance](#initinstance) fails.

```
virtual int ExitInstance();
```

### Return Value

The thread's exit code; 0 indicates no errors, and values greater than 0 indicate an error. This value can be retrieved by calling [GetExitCodeThread](/windows/win32/api/processthreadsapi/nf-processthreadsapi-getexitcodethread).

### Remarks

Do not call this member function from anywhere but within the `Run` member function. This member function is used only in user-interface threads.

The default implementation of this function deletes the `CWinThread` object if [m_bAutoDelete](#m_bautodelete) is TRUE. Override this function if you wish to perform additional clean-up when your thread terminates. Your implementation of `ExitInstance` should call the base class's version after your code is executed.

## <a name="getmainwnd"></a> CWinThread::GetMainWnd

If your application is an OLE server, call this function to retrieve a pointer to the active main window of the application instead of directly referring to the `m_pMainWnd` member of the application object.

```
virtual CWnd* GetMainWnd();
```

### Return Value

This function returns a pointer to one of two types of windows. If your thread is part of an OLE server and has an object that is in-place active inside an active container, this function returns the [CWinApp::m_pActiveWnd](../../mfc/reference/cwinapp-class.md#m_pactivewnd) data member of the `CWinThread` object.

If there is no object that is in-place active within a container or your application is not an OLE server, this function returns the [m_pMainWnd](#m_pmainwnd) data member of your thread object.

### Remarks

For user-interface threads, this is equivalent to directly referring to the `m_pActiveWnd` member of your application object.

If your application is not an OLE server, then calling this function is equivalent to directly referring to the `m_pMainWnd` member of your application object.

Override this function to modify the default behavior.

## <a name="getthreadpriority"></a> CWinThread::GetThreadPriority

Gets the current thread priority level of this thread.

```
int GetThreadPriority();
```

### Return Value

The current thread priority level within its priority class. The value returned will be one of the following, listed from highest priority to lowest:

- THREAD_PRIORITY_TIME_CRITICAL

- THREAD_PRIORITY_HIGHEST

- THREAD_PRIORITY_ABOVE_NORMAL

- THREAD_PRIORITY_NORMAL

- THREAD_PRIORITY_BELOW_NORMAL

- THREAD_PRIORITY_LOWEST

- THREAD_PRIORITY_IDLE

For more information on these priorities, see [SetThreadPriority](/windows/win32/api/processthreadsapi/nf-processthreadsapi-setthreadpriority) in the Windows SDK.

## <a name="initinstance"></a> CWinThread::InitInstance

`InitInstance` must be overridden to initialize each new instance of a user-interface thread.

```
virtual BOOL InitInstance();
```

### Return Value

Nonzero if initialization is successful; otherwise 0.

### Remarks

Typically, you override `InitInstance` to perform tasks that must be completed when a thread is first created.

This member function is used only in user-interface threads. Perform initialization of worker threads in the controlling function passed to [AfxBeginThread](application-information-and-management.md#afxbeginthread).

## <a name="isidlemessage"></a> CWinThread::IsIdleMessage

Override this function to keep `OnIdle` from being called after specific messages are generated.

```
virtual BOOL IsIdleMessage(MSG* pMsg);
```

### Parameters

*pMsg*<br/>
Points to the current message being processed.

### Return Value

Nonzero if `OnIdle` should be called after processing message; otherwise 0.

### Remarks

The default implementation does not call `OnIdle` after redundant mouse messages and messages generated by blinking carets.

If an application has created a short timer, `OnIdle` will be called frequently, causing performance problems. To improve such an application's performance, override `IsIdleMessage` in the application's `CWinApp`-derived class to check for WM_TIMER messages as follows:

[!code-cpp[NVC_MFCDocView#189](../../mfc/codesnippet/cpp/cwinthread-class_1.cpp)]

Handling WM_TIMER in this fashion will improve performance of applications that use short timers.

## <a name="m_bautodelete"></a> CWinThread::m_bAutoDelete

Specifies whether the `CWinThread` object should be automatically deleted at thread termination.

```
BOOL m_bAutoDelete;
```

### Remarks

The `m_bAutoDelete` data member is a public variable of type BOOL.

The value of `m_bAutoDelete` doesn't affect how the underlying thread handle is closed, but it does affect the timing of closing the handle. The thread handle is always closed when the `CWinThread` object is destroyed.

## <a name="m_hthread"></a> CWinThread::m_hThread

Handle to the thread attached to this `CWinThread`.

```
HANDLE m_hThread;
```

### Remarks

The `m_hThread` data member is a public variable of type HANDLE. It's only valid if underlying kernel thread object currently exists, and the handle hasn't been closed yet.

The CWinThread destructor calls CloseHandle on `m_hThread`. If [m_bAutoDelete](#m_bautodelete) is TRUE when the thread terminates, the CWinThread object is destroyed, which invalidates any pointers to the CWinThread object and its member variables. You may need the `m_hThread` member to check the thread exit value, or to wait for a signal. To keep the CWinThread object and its `m_hThread` member during thread execution and after it terminates, set `m_bAutoDelete` to FALSE before you allow thread execution to continue. Otherwise, the thread may terminate, destroy the CWinThread object, and close the handle before you try to use it. If you use this technique, you are responsible for deletion of the CWinThread object.

## <a name="m_nthreadid"></a> CWinThread::m_nThreadID

ID of the thread attached to this `CWinThread`.

```
DWORD m_nThreadID;
```

### Remarks

The `m_nThreadID` data member is a public variable of type DWORD. It's only valid if underlying kernel thread object currently exists.
Also see remarks about [m_hThread](#m_hthread) lifetime.

### Example

  See the example for [AfxGetThread](application-information-and-management.md#afxgetthread).

## <a name="m_pactivewnd"></a> CWinThread::m_pActiveWnd

Use this data member to store a pointer to your thread's active window object.

```
CWnd* m_pActiveWnd;
```

### Remarks

The Microsoft Foundation Class Library will automatically terminate your thread when the window referred to by `m_pActiveWnd` is closed. If this thread is the primary thread for an application, the application will also be terminated. If this data member is NULL, the active window for the application's `CWinApp` object will be inherited. `m_pActiveWnd` is a public variable of type `CWnd*`.

Typically, you set this member variable when you override `InitInstance`. In a worker thread, the value of this data member is inherited from its parent thread.

## <a name="m_pmainwnd"></a> CWinThread::m_pMainWnd

Use this data member to store a pointer to your thread's main window object.

```
CWnd* m_pMainWnd;
```

### Remarks

The Microsoft Foundation Class Library will automatically terminate your thread when the window referred to by `m_pMainWnd` is closed. If this thread is the primary thread for an application, the application will also be terminated. If this data member is NULL, the main window for the application's `CWinApp` object will be used to determine when to terminate the thread. `m_pMainWnd` is a public variable of type `CWnd*`.

Typically, you set this member variable when you override `InitInstance`. In a worker thread, the value of this data member is inherited from its parent thread.

## <a name="onidle"></a> CWinThread::OnIdle

Override this member function to perform idle-time processing.

```
virtual BOOL OnIdle(LONG lCount);
```

### Parameters

*lCount*<br/>
A counter incremented each time `OnIdle` is called when the thread's message queue is empty. This count is reset to 0 each time a new message is processed. You can use the *lCount* parameter to determine the relative length of time the thread has been idle without processing a message.

### Return Value

Nonzero to receive more idle processing time; 0 if no more idle processing time is needed.

### Remarks

`OnIdle` is called in the default message loop when the thread's message queue is empty. Use your override to call your own background idle-handler tasks.

`OnIdle` should return 0 to indicate that no additional idle processing time is required. The *lCount* parameter is incremented each time `OnIdle` is called when the message queue is empty and is reset to 0 each time a new message is processed. You can call your different idle routines based on this count.

The default implementation of this member function frees temporary objects and unused dynamic link libraries from memory.

This member function is used only in user-interface threads.

Because the application cannot process messages until `OnIdle` returns, do not perform lengthy tasks in this function.

## <a name="operator_handle"></a> CWinThread::operator HANDLE

Retrieves the handle of the `CWinThread` object.

```
operator HANDLE() const;
```

### Return Value

If successful, the handle of the thread object; otherwise, NULL.

### Remarks

Use the handle to directly call Windows APIs.

## <a name="postthreadmessage"></a> CWinThread::PostThreadMessage

Called to post a user-defined message to another `CWinThread` object.

```
BOOL PostThreadMessage(
    UINT message,
    WPARAM wParam,
    LPARAM lParam);
```

### Parameters

*message*<br/>
ID of the user-defined message.

*wParam*<br/>
First message parameter.

*lParam*<br/>
Second message parameter.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

The posted message is mapped to the proper message handler by the message map macro ON_THREAD_MESSAGE.

> [!NOTE]
> When you call [PostThreadMessage](/windows/win32/api/winuser/nf-winuser-postthreadmessagew), the message is placed in the thread's message queue. However, because messages posted this way are not associated with a window, MFC will not dispatch them to message or command handlers. In order to handle these messages, override the `PreTranslateMessage()` function of your CWinApp-derived class, and handle the messages manually.

## <a name="pretranslatemessage"></a> CWinThread::PreTranslateMessage

Override this function to filter window messages before they are dispatched to the Windows functions [TranslateMessage](/windows/win32/api/winuser/nf-winuser-translatemessage) and [DispatchMessage](/windows/win32/api/winuser/nf-winuser-dispatchmessage).

```
virtual BOOL PreTranslateMessage(MSG* pMsg);
```

### Parameters

*pMsg*<br/>
Points to a [MSG structure](/windows/win32/api/winuser/ns-winuser-msg) containing the message to process.

### Return Value

Nonzero if the message was fully processed in `PreTranslateMessage` and should not be processed further. Zero if the message should be processed in the normal way.

### Remarks

This member function is used only in user-interface threads.

## <a name="processmessagefilter"></a> CWinThread::ProcessMessageFilter

The framework's hook function calls this member function to filter and respond to certain Windows messages.

```
virtual BOOL ProcessMessageFilter(
    int code,
    LPMSG lpMsg);
```

### Parameters

*code*<br/>
Specifies a hook code. This member function uses the code to determine how to process *lpMsg.*

*lpMsg*<br/>
A pointer to a Windows [MSG structure](/windows/win32/api/winuser/ns-winuser-msg).

### Return Value

Nonzero if the message is processed; otherwise 0.

### Remarks

A hook function processes events before they are sent to the application's normal message processing.

If you override this advanced feature, be sure to call the base-class version to maintain the framework's hook processing.

## <a name="processwndprocexception"></a> CWinThread::ProcessWndProcException

The framework calls this member function whenever the handler does not catch an exception thrown in one of your thread's message or command handlers.

```
virtual LRESULT ProcessWndProcException(
    CException* e,
    const MSG* pMsg);
```

### Parameters

*e*<br/>
Points to an unhandled exception.

*pMsg*<br/>
Points to a [MSG structure](/windows/win32/api/winuser/ns-winuser-msg) containing information about the windows message that caused the framework to throw an exception.

### Return Value

-1 if a WM_CREATE exception is generated; otherwise 0.

### Remarks

Do not call this member function directly.

The default implementation of this member function handles only exceptions generated from the following messages:

|Command|Action|
|-------------|------------|
|WM_CREATE|Fail.|
|WM_PAINT|Validate the affected window, thus preventing another WM_PAINT message from being generated.|

Override this member function to provide global handling of your exceptions. Call the base functionality only if you wish to display the default behavior.

This member function is used only in threads that have a message pump.

## <a name="pumpmessage"></a> CWinThread::PumpMessage

Contains the thread's message loop.

```
virtual BOOL PumpMessage();
```

### Remarks

`PumpMessage` contains the thread's message loop. `PumpMessage` is called by `CWinThread` to pump the thread's messages. You can call `PumpMessage` directly to force messages to be processed, or you can override `PumpMessage` to change its default behavior.

Calling `PumpMessage` directly and overriding its default behavior is recommended for advanced users only.

## <a name="resumethread"></a> CWinThread::ResumeThread

Called to resume execution of a thread that was suspended by the [SuspendThread](#suspendthread) member function, or a thread created with the CREATE_SUSPENDED flag.

```
DWORD ResumeThread();
```

### Return Value

The thread's previous suspend count if successful; `0xFFFFFFFF` otherwise. If the return value is zero, the current thread was not suspended. If the return value is one, the thread was suspended, but is now restarted. Any return value greater than one means the thread remains suspended.

### Remarks

The suspend count of the current thread is reduced by one. If the suspend count is reduced to zero, the thread resumes execution; otherwise the thread remains suspended.

## <a name="run"></a> CWinThread::Run

Provides a default message loop for user-interface threads.

```
virtual int Run();
```

### Return Value

An **`int`** value that is returned by the thread. This value can be retrieved by calling [GetExitCodeThread](/windows/win32/api/processthreadsapi/nf-processthreadsapi-getexitcodethread).

### Remarks

`Run` acquires and dispatches Windows messages until the application receives a [WM_QUIT](/windows/win32/winmsg/wm-quit) message. If the thread's message queue currently contains no messages, `Run` calls `OnIdle` to perform idle-time processing. Incoming messages go to the [PreTranslateMessage](#pretranslatemessage) member function for special processing and then to the Windows function [TranslateMessage](/windows/win32/api/winuser/nf-winuser-translatemessage) for standard keyboard translation. Finally, the [DispatchMessage](/windows/win32/api/winuser/nf-winuser-dispatchmessage) Windows function is called.

`Run` is rarely overridden, but you can override it to implement special behavior.

This member function is used only in user-interface threads.

## <a name="setthreadpriority"></a> CWinThread::SetThreadPriority

This function sets the priority level of the current thread within its priority class.

```
BOOL SetThreadPriority(int nPriority);
```

### Parameters

*nPriority*<br/>
Specifies the new thread priority level within its priority class. This parameter must be one of the following values, listed from highest priority to lowest:

- THREAD_PRIORITY_TIME_CRITICAL

- THREAD_PRIORITY_HIGHEST

- THREAD_PRIORITY_ABOVE_NORMAL

- THREAD_PRIORITY_NORMAL

- THREAD_PRIORITY_BELOW_NORMAL

- THREAD_PRIORITY_LOWEST

- THREAD_PRIORITY_IDLE

For more information on these priorities, see [SetThreadPriority](/windows/win32/api/processthreadsapi/nf-processthreadsapi-setthreadpriority) in the Windows SDK.

### Return Value

Nonzero if function was successful; otherwise 0.

### Remarks

It can only be called after [CreateThread](#createthread) successfully returns.

## <a name="suspendthread"></a> CWinThread::SuspendThread

Increments the current thread's suspend count.

```
DWORD SuspendThread();
```

### Return Value

The thread's previous suspend count if successful; `0xFFFFFFFF` otherwise.

### Remarks

If any thread has a suspend count above zero, that thread does not execute. The thread can be resumed by calling the [ResumeThread](#resumethread) member function.

## See also

[CCmdTarget Class](../../mfc/reference/ccmdtarget-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CWinApp Class](../../mfc/reference/cwinapp-class.md)<br/>
[CCmdTarget Class](../../mfc/reference/ccmdtarget-class.md)
