---
title: "Application Information and Management"
description: "Reference to the Microsoft Foundation Class library (MFC) application information and management functions."
ms.date: "01/27/2020"
helpviewer_keywords: ["applications [MFC], managing"]
ms.assetid: b72f4154-24db-4e75-bca3-6873e2459c15
---
# Application Information and Management

When you write an application, you create a single [`CWinApp`](../../mfc/reference/cwinapp-class.md)-derived object. At times, you may want to get information about this object from outside the `CWinApp`-derived object. Or you may need access to other global "manager" objects.

The Microsoft Foundation Class Library provides the following global functions to help you accomplish these tasks:

## Application Information and Management Functions

| Name | Description |
|-|-|
|[`AfxBeginThread`](#afxbeginthread)|Creates a new thread.|
|[`AfxContextMenuManager`](#afxcontextmenumanager)|Pointer to the global [context menu manager](ccontextmenumanager-class.md).|
|[`AfxEndThread`](#afxendthread)|Terminates the current thread.|
|[`AfxFindResourceHandle`](#afxfindresourcehandle)|Walks the resource chain and locate a specific resource by resource ID and resource type. |
|[`AfxFreeLibrary`](#afxfreelibrary)|Decrements the reference count of the loaded dynamic-link library (DLL) module. When the reference count reaches zero, the module is unmapped.|
|[`AfxGetApp`](#afxgetapp)|Returns a pointer to the application's single `CWinApp` object.|
|[`AfxGetAppName`](#afxgetappname)|Returns a string that contains the application's name.|
|[`AfxGetInstanceHandle`](#afxgetinstancehandle)|Returns an `HINSTANCE` representing this instance of the application.|
|[`AfxGetMainWnd`](#afxgetmainwnd)|Returns a pointer to the current "main" window of a non-OLE application, or the in-place frame window of a server application.|
|[`AfxGetPerUserRegistration`](#afxgetperuserregistration)|Use this function to determine whether the application redirects registry access to the **`HKEY_CURRENT_USER`** (**`HKCU`**) node.|
|[`AfxGetResourceHandle`](#afxgetresourcehandle)|Returns an `HINSTANCE` to the source of the application's default resources. Use to access the application's resources directly.|
|[`AfxGetThread`](#afxgetthread)|Retrieves a pointer to the current [CWinThread](../../mfc/reference/cwinthread-class.md) object.|
|[`AfxInitRichEdit`](#afxinitrichedit)|Initializes the version 1.0 rich edit control for the application.|
|[`AfxInitRichEdit2`](#afxinitrichedit2)|Initializes the version 2.0 and later rich edit control for the application.|
|[`AfxIsExtendedFrameClass`](#afxisextendedframeclass)|Determines whether the given window is an extended frame object.|
|[`AfxIsMFCToolBar`](#afxismfctoolbar)|Determines whether the given window is a toolbar object.|
|[`AfxKeyboardManager`](#afxkeyboardmanager)|Pointer to the global [keyboard manager](ckeyboardmanager-class.md).|
|[`AfxLoadLibrary`](#afxloadlibrary)|Maps a DLL module and returns a handle that can be used to obtain the address of a DLL function.|
|[`AfxLoadLibraryEx`](#afxloadlibraryex)|Maps a DLL module using the specified options, and returns a handle that can be used to obtain the address of a DLL function.|
|[`AfxMenuTearOffManager`](#afxmenutearoffmanager)|Pointer to the global [tear-off menu manager](cmenutearoffmanager-class.md).|
|[`AfxMouseManager`](#afxmousemanager)|Pointer to the global [mouse manager](cmousemanager-class.md).|
|[`AfxRegisterClass`](#afxregisterclass)|Registers a window class in a DLL that uses MFC.|
|[`AfxRegisterWndClass`](#afxregisterwndclass)|Registers a Windows window class to supplement the ones registered automatically by MFC.|
|[`AfxSetPerUserRegistration`](#afxsetperuserregistration)|Sets whether the application redirects registry access to the **`HKEY_CURRENT_USER`** (**`HKCU`**) node.|
|[`AfxSetResourceHandle`](#afxsetresourcehandle)|Sets the HINSTANCE handle where the default resources of the application are loaded.|
|[`AfxShellManager`](#afxshellmanager)|Pointer to the global [shell manager](cshellmanager-class.md). |
|[`AfxSocketInit`](#afxsocketinit)|Called in a `CWinApp::InitInstance` override to initialize Windows Sockets.|
|[`AfxUserToolsManager`](#afxusertoolsmanager)|Pointer to the global [user tools manager](cusertoolsmanager-class.md).|
|[`AfxWinInit`](#afxwininit)|Called by the MFC-supplied `WinMain` function, as part of the [`CWinApp`](../../mfc/reference/cwinapp-class.md) initialization of a GUI-based application, to initialize MFC. Must be called directly for console applications that use MFC.|

## <a name="afxbeginthread"></a> `AfxBeginThread`

Call this function to create a new thread.

```cpp
CWinThread* AfxBeginThread(
    AFX_THREADPROC pfnThreadProc,
    LPVOID pParam,
    int nPriority = THREAD_PRIORITY_NORMAL,
    UINT nStackSize = 0,
    DWORD dwCreateFlags = 0,
    LPSECURITY_ATTRIBUTES lpSecurityAttrs = NULL);

CWinThread* AfxBeginThread(
    CRuntimeClass* pThreadClass,
    int nPriority = THREAD_PRIORITY_NORMAL,
    UINT nStackSize = 0,
    DWORD dwCreateFlags = 0,
    LPSECURITY_ATTRIBUTES lpSecurityAttrs = NULL);
```

### Parameters

*`pfnThreadProc`*\
Points to the controlling function for the worker thread. The pointer can't be `NULL`. This function must be declared as follows:

`UINT __cdecl MyControllingFunction( LPVOID pParam );`

*`pThreadClass`*\
The `RUNTIME_CLASS` of an object derived from [`CWinThread`](../../mfc/reference/cwinthread-class.md).

*`pParam`*\
Parameter to pass to the controlling function.

*`nPriority`*\
The priority to set for the thread. For a full list and description of the available priorities, see [`SetThreadPriority`](/windows/win32/api/processthreadsapi/nf-processthreadsapi-setthreadpriority) in the Windows SDK.

*`nStackSize`*\
Specifies the size in bytes of the stack for the new thread. If 0, the stack size defaults to the same size stack as the creating thread.

*`dwCreateFlags`*\
Specifies an additional flag that controls the creation of the thread. This flag can contain one of two values:

- `CREATE_SUSPENDED` Start the thread with a suspend count of one. Use `CREATE_SUSPENDED` if you want to initialize any member data of the `CWinThread` object, such as [`m_bAutoDelete`](../../mfc/reference/cwinthread-class.md#m_bautodelete) or any members of your derived class, before the thread starts running. Once your initialization is complete, use [`CWinThread::ResumeThread`](../../mfc/reference/cwinthread-class.md#resumethread) to start the thread running. The thread won't execute until `CWinThread::ResumeThread` is called.

- **0** Start the thread immediately after creation.

*`lpSecurityAttrs`*\
Points to a [`SECURITY_ATTRIBUTES`](/previous-versions/windows/desktop/legacy/aa379560\(v=vs.85\)) structure that specifies the security attributes for the thread. If `NULL`, the same security attributes as the creating thread are used. For more information on this structure, see the Windows SDK.

### Return Value

Pointer to the newly created thread object, or `NULL` if a failure occurs.

### Remarks

The first form of `AfxBeginThread` creates a worker thread. The second form creates a thread that may serve as a user-interface thread or as a worker thread.

`AfxBeginThread` creates a new `CWinThread` object, calls its [`CreateThread`](../../mfc/reference/cwinthread-class.md#createthread) function to start executing the thread, and returns a pointer to the thread. Checks are made throughout the procedure to make sure all objects are deallocated properly should any part of the creation fail. To end the thread, call [`AfxEndThread`](#afxendthread) from within the thread, or return from the controlling function of the worker thread.

Multithreading must be enabled by the application; otherwise, this function will fail. For more information on enabling multithreading, see [`/MD`, `/MT`, `/LD` (Use run-time library)](../../build/reference/md-mt-ld-use-run-time-library.md).

For more information on `AfxBeginThread`, see the articles [Multithreading: Creating Worker Threads](../../parallel/multithreading-creating-worker-threads.md) and [Multithreading: Creating User-Interface Threads](../../parallel/multithreading-creating-user-interface-threads.md).

### Example

See the example for [`CSocket::Attach`](../../mfc/reference/csocket-class.md#attach).

### Requirements

  **Header** `afxwin.h`

## <a name="afxcontextmenumanager"></a> `AfxContextMenuManager`

Pointer to the global [context menu manager](ccontextmenumanager-class.md).

### Syntax

```cpp
CContextMenuManager* afxContextMenuManager;
```

### Requirements

**Header:** `afxcontextmenumanager.h`

## <a name="afxendthread"></a> `AfxEndThread`

Call this function to terminate the currently executing thread.

```cpp
void AFXAPI AfxEndThread(
    UINT nExitCode,
    BOOL bDelete  = TRUE);
```

### Parameters

*`nExitCode`*\
Specifies the exit code of the thread.

*`bDelete`*\
Deletes the thread object from memory.

### Remarks

Must be called from within the thread to be terminated.

For more information on `AfxEndThread`, see the article [Multithreading: Terminating Threads](../../parallel/multithreading-terminating-threads.md).

### Requirements

  **Header** `afxwin.h`

## <a name="afxfindresourcehandle"></a> `AfxFindResourceHandle`

Use `AfxFindResourceHandle` to walk the resource chain and locate a specific resource by resource ID and resource type.

### Syntax

```cpp
HINSTANCE AFXAPI AfxFindResourceHandle( LPCTSTR lpszName,  LPCTSTR lpszType );
```

### Parameters

*`lpszName`*\
A pointer to a string containing the resource ID.
*`lpszType`*\
A pointer to the type of resource. For a list of resource types, see [`FindResource`](/windows/win32/api/winbase/nf-winbase-findresourcea) in the Windows SDK.

### Return Value

A handle to the module that contains the resource.

### Remarks

`AfxFindResourceHandle` finds the specific resource, and returns a handle to the module that contains the resource. The resource might be in any MFC extension DLL that's loaded. `AfxFindResourceHandle` tells you which one has the resource.

The modules are searched in this order:

1. The main module, if it's an MFC extension DLL.

1. Non-system modules.

1. Language-specific modules.

1. The main module, if it's a system DLL.

1. System modules.

### Requirements

**Header:** `afxwin.h`

## <a name="afxfreelibrary"></a> `AfxFreeLibrary`

Both `AfxFreeLibrary` and `AfxLoadLibrary` maintain a reference count for each loaded library module.

```cpp
BOOL AFXAPI AfxFreeLibrary(HINSTANCE hInstLib);
```

### Parameters

*`hInstLib`*\
A handle of the loaded library module. [`AfxLoadLibrary`](#afxloadlibrary) returns this handle.

### Return Value

`TRUE` if the function succeeds; otherwise, `FALSE`.

### Remarks

`AfxFreeLibrary` decrements the reference count of the loaded dynamic-link library (DLL) module. When the reference count reaches zero, the module is unmapped from the address space of the calling process and the handle is no longer valid. This reference count is incremented each time `AfxLoadLibrary` is called.

Before unmapping a library module, the system enables the DLL to detach from the processes using it. Doing so gives the DLL an opportunity to clean up resources allocated for the current process. After the entry-point function returns, the library module is removed from the address space of the current process.

Use `AfxLoadLibrary` to map a DLL module.

Be sure to use `AfxFreeLibrary` and `AfxLoadLibrary` (instead of the Win32 functions `FreeLibrary` and `LoadLibrary`) if your application uses multiple threads. Using `AfxLoadLibrary` and `AfxFreeLibrary` ensures that the startup and shutdown code that executes when the MFC extension DLL is loaded and unloaded doesn't corrupt the global MFC state.

### Example

See the example for [`AfxLoadLibrary`](#afxloadlibrary).

### Requirements

  **Header** `afxdll_.h`

## <a name="afxgetapp"></a> `AfxGetApp`

The pointer returned by this function can be used to access application information such as the main message-dispatch code or the topmost window.

```cpp
CWinApp* AFXAPI AfxGetApp();
```

### Return Value

A pointer to the single `CWinApp` object for the application.

### Remarks

If this method returns `NULL`, it might indicate that the application main window hasn't been fully initialized yet. It might also indicate a problem.

### Example

[!code-cpp[NVC_MFCWindowing#126](../../mfc/reference/codesnippet/cpp/application-information-and-management_1.cpp)]

### Requirements

  **Header** `afxwin.h`

## <a name="afxgetappname"></a> `AfxGetAppName`

The string returned can be used for diagnostic messages, or as a root for temporary string names.

```cpp
LPCTSTR AFXAPI AfxGetAppName();
```

### Return Value

A null-terminated string containing the application's name.

### Example

[!code-cpp[NVC_MFCWindowing#127](../../mfc/reference/codesnippet/cpp/application-information-and-management_2.cpp)]

### Requirements

  **Header** `afxwin.h`

## <a name="afxgetinstancehandle"></a> `AfxGetInstanceHandle`

This function allows you to retrieve the instance handle of the current application.

```cpp
HINSTANCE  AFXAPI AfxGetInstanceHandle();
```

### Return Value

An `HINSTANCE` to the current instance of the application. If called from within a DLL linked with the USRDLL version of MFC, an `HINSTANCE` to the DLL is returned.

### Remarks

`AfxGetInstanceHandle` always returns the `HINSTANCE` of your executable file (.EXE) unless it's called from within a DLL linked with the USRDLL version of MFC. In this case, it returns an `HINSTANCE` to the DLL.

### Example

[!code-cpp[NVC_MFCWindowing#128](../../mfc/reference/codesnippet/cpp/application-information-and-management_3.cpp)]

### Requirements

  **Header** `afxwin.h`

## <a name="afxgetmainwnd"></a> `AfxGetMainWnd`

If your application is an OLE server, call this function to retrieve a pointer to the active main window of the application. Use this result instead of directly referring to the [`m_pMainWnd`](../../mfc/reference/cwinthread-class.md#m_pmainwnd) member of the application object.

```cpp
CWnd* AFXAPI AfxGetMainWnd();
```

### Return Value

Returns a pointer to the frame window object that contains the in-place active document, if the server has an object that's in-place active inside an active container.

If there's no object that is in-place active within a container, or your application isn't an OLE server, this function returns the *`m_pMainWnd`* of your application object.

If `AfxGetMainWnd` is called from the application's primary thread, it returns the application's main window according to the above rules. If the function is called from a secondary thread in the application, the function returns the main window associated with the thread that made the call.

### Remarks

If your application isn't an OLE server, then calling this function is equivalent to directly referring to the *`m_pMainWnd`* member of your application object.

### Example

[!code-cpp[NVC_MFCWindowing#129](../../mfc/reference/codesnippet/cpp/application-information-and-management_4.cpp)]

### Requirements

  **Header** `afxwin.h`

## <a name="afxgetperuserregistration"></a> `AfxGetPerUserRegistration`

Use this function to determine whether the application redirects registry access to the **`HKEY_CURRENT_USER`** (**`HKCU`**) node.

```cpp
BOOL AFXAPI AfxGetPerUserRegistration();
```

### Return Value

`TRUE` indicates the registry information is directed to the `HKCU` node. `FALSE` indicates the application writes registry information to the default node. The default node is **`HKEY_CLASSES_ROOT`** (**`HKCR`**).

### Remarks

If you enable registry redirection, the framework redirects access from **`HKCR`** to **`HKEY_CURRENT_USER\Software\Classes`**. Only the MFC and ATL frameworks are affected by the redirection.

To change whether the application redirects registry access, use [`AfxSetPerUserRegistration`](#afxsetperuserregistration).

### Requirements

  **Header** `afxstat_.h`

## <a name="afxgetresourcehandle"></a> `AfxGetResourceHandle`

Use the `HINSTANCE` handle returned by this function to access the application's resources directly, for example, in calls to the Windows function `FindResource`.

```cpp
extern HINSTANCE  AfxGetResourceHandle();
```

### Return Value

An `HINSTANCE` handle where the default resources of the application are loaded.

### Example

[!code-cpp[NVC_MFCWindowing#130](../../mfc/reference/codesnippet/cpp/application-information-and-management_5.cpp)]

### Requirements

  **Header** `afxwin.h`

## <a name="afxgetthread"></a> `AfxGetThread`

Call this function to get a pointer to the [`CWinThread`](../../mfc/reference/cwinthread-class.md) object representing the currently executing thread.

```cpp
CWinThread* AfxGetThread();
```

### Return Value

Pointer to the currently executing thread; otherwise `NULL`.

### Remarks

Must be called from within the thread.

> [!NOTE]
> If you are porting an MFC project calling `AfxGetThread` from Visual C++ versions 4.2, 5.0, or 6.0, `AfxGetThread` calls [`AfxGetApp`](#afxgetapp) if no thread is found. In more recent versions of the compiler, `AfxGetThread` returns `NULL` if no thread was found. If you want the application thread, you must call `AfxGetApp`.

### Example

[!code-cpp[NVC_MFCWindowing#132](../../mfc/reference/codesnippet/cpp/application-information-and-management_6.cpp)]

### Requirements

  **Header** `afxwin.h`

## <a name="afxinitrichedit"></a> `AfxInitRichEdit`

Call this function to initialize the rich edit control (version 1.0) for the application.

```cpp
BOOL AFXAPI AfxInitRichEdit();
```

### Remarks

This function is provided for backward compatibility. New applications should use [`AfxInitRichEdit2`](#afxinitrichedit2).

`AfxInitRichEdit` loads `RICHED32.DLL` to initialize version 1.0 of the rich edit control. To use version 2.0 and 3.0 of the rich edit control, `RICHED20.DLL` needs to be loaded. It's loaded by making a call to [`AfxInitRichEdit2`](#afxinitrichedit2).

To update rich edit controls in existing Visual C++ applications to version 2.0, open the .RC file as text, change the class name of each rich edit control from "`RICHEDIT`" to "`RichEdit20a`". Then replace the call to `AfxInitRichEdit` with `AfxInitRichEdit2`.

This function also initializes the common controls library, if the library hasn't already been initialized for the process. If you use the rich edit control directly from your MFC application, call this function to assure that MFC has properly initialized the rich edit control runtime. If you call the `Create` method of [`CRichEditCtrl`](../../mfc/reference/cricheditctrl-class.md), [`CRichEditView`](../../mfc/reference/cricheditview-class.md), or [`CRichEditDoc`](../../mfc/reference/cricheditdoc-class.md), you typically don't need to call this function, but in some cases it might be necessary.

### Requirements

  **Header** `afxwin.h`

## <a name="afxinitrichedit2"></a> `AfxInitRichEdit2`

Call this function to initialize the rich edit control (version 2.0 and later) for the application.

```cpp
BOOL AFXAPI AfxInitRichEdit2();
```

### Remarks

Call this function to load the `RICHED20.DLL` and initialize version 2.0 of the rich edit control. If you call the `Create` method of [`CRichEditCtrl`](../../mfc/reference/cricheditctrl-class.md), [`CRichEditView`](../../mfc/reference/cricheditview-class.md), or [`CRichEditDoc`](../../mfc/reference/cricheditdoc-class.md), you typically don't need to call this function, but in some cases it might be necessary.

### Requirements

  **Header** `afxwin.h`

## <a name="afxisextendedframeclass"></a> `AfxIsExtendedFrameClass`

Determines whether the given window is an extended frame object.

### Syntax

```cpp
BOOL AFXAPI AfxIsExtendedFrameClass( CWnd* pWnd );
```

### Parameters

*`pWnd`*\
[in] A pointer to an object that is derived from `CWnd`.

### Return Value

`TRUE` if the provided window is an extended frame object; otherwise `FALSE`.

### Remarks

This method returns `TRUE` if *`pWnd`* derives from one of the following classes:

- `CFrameWndEx`

- `CMDIFrameWndEx`

- `COleIPFrameWndEx`

- `COleDocIPFrameWndEx`

- `CMDIChildWndEx`

This method is useful when you have to validate that a function or method parameter is an extended frame window.

### Requirements

**Header:** `afxpriv.h`

## <a name="afxismfctoolbar"></a> `AfxIsMFCToolBar`

Determines whether the given window is a toolbar object.

### Syntax

```cpp
BOOL AFXAPI AfxIsMFCToolBar(CWnd* pWnd);
```

### Parameters

*`pWnd`*\
[in] A pointer to an object that is derived from `CWnd`.

### Return Value

`TRUE` if the provided window is a toolbar object; otherwise `FALSE`.

### Remarks

This method returns `TRUE` if *`pWnd`* derives from `CMFCToolBar`. This method is useful when you have to validate that a function or method parameter is a `CMFCToolBar` object.

### Requirements

**Header:** `afxpriv.h`

## <a name="afxkeyboardmanager"></a> `AfxKeyboardManager`

Pointer to the global [keyboard manager](ckeyboardmanager-class.md).

### Syntax

```cpp
CKeyboardManager* afxKeyboardManager;
```

### Requirements

**Header:** `afxkeyboardmanager.h`

## <a name="afxloadlibrary"></a> `AfxLoadLibrary`

Use `AfxLoadLibrary` to map a DLL module.

```cpp
HINSTANCE AFXAPI AfxLoadLibrary(LPCTSTR lpszModuleName);
```

### Parameters

*`lpszModuleName`*\
Points to a null-terminated string that contains the name of the module (either a .DLL or .EXE file). The name specified is the filename of the module.

If the string specifies a path but the file doesn't exist in the specified directory, the function fails.

If a path isn't specified and the filename extension is omitted, the default extension .DLL is appended. However, the filename string can include a trailing point character (.) to indicate that the module name has no extension. When no path is specified, the function uses the [Search Order for Desktop Applications](/windows/win32/dlls/dynamic-link-library-search-order#search-order-for-desktop-applications).

### Return Value

If the function succeeds, the return value is a handle to the module. On failure, the return value is `NULL`.

### Remarks

It returns a handle that can be used in [`GetProcAddress`](/windows/win32/api/libloaderapi/nf-libloaderapi-getprocaddress) to get the address of a DLL function. `AfxLoadLibrary` can also be used to map other executable modules.

Each process maintains a reference count for each loaded library module. This reference count is incremented each time `AfxLoadLibrary` is called and is decremented each time `AfxFreeLibrary` is called. When the reference count reaches zero, the module is unmapped from the address space of the calling process and the handle is no longer valid.

Be sure to use `AfxLoadLibrary` and `AfxFreeLibrary` (instead of the Win32 functions `LoadLibrary` and `FreeLibrary`) if your application uses multiple threads, and if it dynamically loads an MFC extension DLL. Using `AfxLoadLibrary` and `AfxFreeLibrary` insures that the startup and shutdown code that executes when the MFC extension DLL is loaded and unloaded doesn't corrupt the global MFC state.

Using `AfxLoadLibrary` in an application requires you to dynamically link to the DLL version of MFC. The header file for `AfxLoadLibrary`, `Afxdll_.h`, is only included if MFC is linked to the application as a DLL. This requirement is by design, because you have to link to the DLL version of MFC to use or create MFC extension DLLs.

### Example

[!code-cpp[NVC_MFC_DLLUser#1](../../mfc/reference/codesnippet/cpp/application-information-and-management_7.cpp)]
[!code-cpp[NVC_MFC_DLLUser#2](../../mfc/reference/codesnippet/cpp/application-information-and-management_8.cpp)]
[!code-cpp[NVC_MFC_DLLUser#3](../../mfc/reference/codesnippet/cpp/application-information-and-management_9.cpp)]

### Requirements

  **Header** `afxdll_.h`

## <a name="afxloadlibraryex"></a> `AfxLoadLibraryEx`

Use `AfxLoadLibraryEx` to map a DLL module.

```cpp
HINSTANCE AFXAPI AfxLoadLibraryEx(LPCTSTR lpFileName, HANDLE hFile, DWORD dwFlags);
```

### Parameters

*`lpFileName`*\
Points to a null-terminated string that contains the name of the module (either a .DLL or .EXE file). The name specified is the filename of the module.

If the string specifies a path but the file doesn't exist in the specified directory, the function fails.

If a path isn't specified and the filename extension is omitted, the default extension .DLL is appended. However, the filename string can include a trailing point character (.) to indicate that the module name has no extension. When no path is specified, the function uses the [Search Order for Desktop Applications](/windows/win32/dlls/dynamic-link-library-search-order#search-order-for-desktop-applications).

*`hFile`*\
This parameter is reserved for future use. It must be `NULL`.

*`dwFlags`*\
The action to be taken when loading the module. If no flags are specified, the behavior of this function is identical to the `AfxLoadLibrary` function. The possible values of this parameter are described in the [`LoadLibraryEx`](/windows/win32/api/libloaderapi/nf-libloaderapi-loadlibraryexw) documentation.

### Return Value

If the function succeeds, the return value is a handle to the module. On failure, the return value is `NULL`.

### Remarks

`AfxLoadLibraryEx` returns a handle that can be used in [`GetProcAddress`](/windows/win32/api/libloaderapi/nf-libloaderapi-getprocaddress) to get the address of a DLL function. `AfxLoadLibraryEx` can also be used to map other executable modules.

Each process maintains a reference count for each loaded library module. This reference count is incremented each time `AfxLoadLibraryEx` is called and is decremented each time `AfxFreeLibrary` is called. When the reference count reaches zero, the module is unmapped from the address space of the calling process and the handle is no longer valid.

Be sure to use `AfxLoadLibraryEx` and `AfxFreeLibrary` (instead of the Win32 functions `LoadLibraryEx` and `FreeLibrary`) if your application uses multiple threads and if it dynamically loads an MFC extension DLL. Using `AfxLoadLibraryEx` and `AfxFreeLibrary` ensures that the startup and shutdown code that executes when the MFC extension DLL is loaded and unloaded doesn't corrupt the global MFC state.

Using `AfxLoadLibraryEx` in an application requires you to dynamically link to the DLL version of MFC. The header file for `AfxLoadLibraryEx`, `Afxdll_.h`, is only included if MFC is linked to the application as a DLL. This requirement is by design, because you have to link to the DLL version of MFC to use or create MFC extension DLLs.

### Requirements

  **Header** `afxdll_.h`

## <a name="afxmenutearoffmanager"></a> `AfxMenuTearOffManager`

Pointer to the global [tear-off menu manager](cmenutearoffmanager-class.md).

### Syntax

```cpp
CMenuTearOffManager* g_pTearOffMenuManager;
```

### Requirements

**Header:** `afxmenutearoffmanager.h`

## <a name="afxmousemanager"></a> `AfxMouseManager`

Pointer to the global [mouse manager](cmousemanager-class.md).

### Syntax

```cpp
CMouseManager* afxMouseManager;
```

### Requirements

**Header:** `afxmousemanager.h`

## <a name="afxregisterclass"></a> `AfxRegisterClass`

Use this function to register window classes in a DLL that uses MFC.

```cpp
BOOL AFXAPI AfxRegisterClass(WNDCLASS* lpWndClass);
```

### Parameters

*`lpWndClass`*\
Pointer to a [`WNDCLASS`](/windows/win32/api/winuser/ns-winuser-wndclassw) structure containing information about the window class to be registered. For more information on this structure, see the Windows SDK.

### Return Value

`TRUE` if the class is successfully registered; otherwise `FALSE`.

### Remarks

If you use this function, the class is automatically unregistered when the DLL is unloaded.

In non-DLL builds, the `AfxRegisterClass` identifier is defined as a macro that maps to the Windows function `RegisterClass`, since classes registered in an application are automatically unregistered. If you use `AfxRegisterClass` instead of `RegisterClass`, your code can be used without change both in an application and in a DLL.

### Example

[!code-cpp[NVC_MFC_DLL#3](../../atl-mfc-shared/codesnippet/cpp/application-information-and-management_10.cpp)]

### Requirements

  **Header** `afxwin.h`

## <a name="afxregisterwndclass"></a> `AfxRegisterWndClass`

Allows you to register your own window classes.

```cpp
LPCTSTR AFXAPI AfxRegisterWndClass(
    UINT nClassStyle,
    HCURSOR hCursor = 0,
    HBRUSH hbrBackground = 0,
    HICON hIcon = 0);
```

### Parameters

*`nClassStyle`*\
Specifies the Windows class style or combination of styles, created by using the bitwise-OR (**`|`**) operator, for the window class. For a list of class styles, see the [`WNDCLASS`](/windows/win32/api/winuser/ns-winuser-wndclassw) structure in the Windows SDK. If `NULL`, the defaults are set as follows:

- Sets the mouse style to `CS_DBLCLKS`, which sends double-click messages to the window procedure when the user double-clicks the mouse.

- Sets the arrow cursor style to the Windows standard `IDC_ARROW`.

- Sets the background brush to `NULL`, so the window won't erase its background.

- Sets the icon to the standard, waving-flag Windows logo icon.

*`hCursor`*\
Specifies a handle to the cursor resource to be installed in each window created from the window class. If you use the default of **0**, you'll get the standard `IDC_ARROW` cursor.

*`hbrBackground`*\
Specifies a handle to the brush resource to be installed in each window created from the window class. If you use the default of **0**, you'll have a `NULL` background brush, and by default, your window won't erase its background while processing [`WM_ERASEBKGND`](/windows/win32/winmsg/wm-erasebkgnd).

*`hIcon`*\
Specifies a handle to the icon resource to be installed in each window created from the window class. If you use the default of **0**, you'll get the standard, waving-flag Windows logo icon.

### Return Value

A null-terminated string containing the class name. You can pass this class name to the `Create` member function in `CWnd` or other **`CWnd-`**derived classes to create a window. The name is generated by the Microsoft Foundation Class Library.

> [!NOTE]
> The return value is a pointer to a static buffer. To save this string, assign it to a `CString` variable.

### Remarks

The Microsoft Foundation Class Library automatically registers several standard window classes for you. Call this function if you want to register your own window classes.

The name registered for a class by `AfxRegisterWndClass` depends solely on the parameters. If you call `AfxRegisterWndClass` multiple times with identical parameters, it only registers a class on the first call. Later calls to `AfxRegisterWndClass` with identical parameters return the already-registered classname.

If you call `AfxRegisterWndClass` for multiple `CWnd`-derived classes with identical parameters, instead of getting a separate window class for each class, each class shares the same window class. This sharing can cause problems if the `CS_CLASSDC` class style is used. Instead of multiple `CS_CLASSDC` window classes, you end up with only one `CS_CLASSDC` window class. All C++ windows that use that class share the same DC. To avoid this problem, call [`AfxRegisterClass`](#afxregisterclass) to register the class.

Refer to Technical Note [TN001: Window Class Registration](../../mfc/tn001-window-class-registration.md) for more information on window class registration and the `AfxRegisterWndClass` function.

### Example

[!code-cpp[NVC_MFCWindowing#134](../../mfc/reference/codesnippet/cpp/application-information-and-management_11.cpp)]

### Requirements

  **Header** `afxwin.h`

## <a name="afxsetperuserregistration"></a> `AfxSetPerUserRegistration`

Sets whether the application redirects registry access to the **`HKEY_CURRENT_USER`** (**`HKCU`**) node.

```cpp
void AFXAPI AfxSetPerUserRegistration(BOOL bEnable);
```

### Parameters

*`bEnable`*\
[in] `TRUE` indicates the registry information is directed to the `HKCU` node. `FALSE` indicates the application writes registry information to the default node. The default node is **`HKEY_CLASSES_ROOT`** (**`HKCR`**).

### Remarks

Before Windows Vista, applications that accessed the registry commonly used the **`HKEY_CLASSES_ROOT`** node. However, with Windows Vista or later operating systems, you must run an application in elevated mode to write to `HKCR`.

This method enables your application to read and write to the registry without running in elevated mode. It works by redirecting registry access from `HKCR` to `HKCU`. For more information, see [Linker Property Pages](../../build/reference/linker-property-pages.md).

If you enable registry redirection, the framework redirects access from `HKCR` to **`HKEY_CURRENT_USER\Software\Classes`**. Only the MFC and ATL frameworks are affected by the redirection.

The default implementation accesses the registry under `HKCR`.

### Requirements

  **Header** `afxstat_.h`

## <a name="afxsetresourcehandle"></a> `AfxSetResourceHandle`

Use this function to set the `HINSTANCE` handle that determines where the default resources of the application are loaded.

```cpp
void AFXAPI AfxSetResourceHandle(HINSTANCE hInstResource);
```

### Parameters

*`hInstResource`*\
The instance or module handle to an .EXE or DLL file from which the application's resources are loaded.

### Example

[!code-cpp[NVC_MFCWindowing#135](../../mfc/reference/codesnippet/cpp/application-information-and-management_12.cpp)]

### Requirements

  **Header** `afxwin.h`

## <a name="afxshellmanager"></a> `AfxShellManager`

Pointer to the global [shell manager](cshellmanager-class.md).

### Syntax

```cpp
CShellManager* afxShellManager;
```

### Requirements

**Header:** `afxshellmanager.h`

## <a name="afxsocketinit"></a> `AfxSocketInit`

Call this function in your `CWinApp::InitInstance` override to initialize Windows Sockets.

```cpp
BOOL AfxSocketInit(WSADATA* lpwsaData = NULL);
```

### Parameters

*`lpwsaData`*\
A pointer to a [`WSADATA`](/windows/win32/api/winsock2/ns-winsock2-wsadata) structure. If *`lpwsaData`* isn't equal to `NULL`, then the address of the `WSADATA` structure is filled by the call to `WSAStartup`. This function also ensures that `WSACleanup` is called for you before the application terminates.

### Return Value

Nonzero if the function is successful; otherwise 0.

### Remarks

When using MFC sockets in secondary threads in a statically linked MFC application, you must call `AfxSocketInit` in each thread that uses sockets to initialize the socket libraries. By default, `AfxSocketInit` is called only in the primary thread.

### Requirements

  **Header** `afxsock.h`

## <a name="afxusertoolsmanager"></a> `AfxUserToolsManager`

Pointer to the global [user tools manager](cusertoolsmanager-class.md).

### Syntax

```cpp
CUserToolsManager* afxUserToolsManager;
```

### Requirements

**Header:** `afxusertoolsmanager.h`

## <a name="afxwininit"></a> `AfxWinInit`

This function is called by the MFC-supplied `WinMain` function, as part of the [`CWinApp`](../../mfc/reference/cwinapp-class.md) initialization of a GUI-based application, to initialize MFC.

```cpp
BOOL AFXAPI AfxWinInit(
    HINSTANCE hInstance,
    HINSTANCE hPrevInstance,
    LPTSTR lpCmdLine,
    int nCmdShow);
```

### Parameters

*`hInstance`*\
The handle of the currently running module.

*`hPrevInstance`*\
A handle to a previous instance of the application. For a Win32-based application, this parameter is always **`NULL`**.

*`lpCmdLine`*\
Points to a null-terminated string specifying the command line for the application.

*`nCmdShow`*\
Specifies how the main window of a GUI application would be shown.

### Remarks

For a console application, which doesn't use the MFC-supplied `WinMain` function, you must call `AfxWinInit` directly to initialize MFC.

If you call `AfxWinInit` yourself, you should declare an instance of a `CWinApp` class. For a console application, you might choose not to derive your own class from `CWinApp` and instead use an instance of `CWinApp` directly. This technique is appropriate if you decide to leave all functionality for your application in your implementation of **`main`**.

> [!NOTE]
> When it creates an activation context for an assembly, MFC uses a manifest resource provided by the user module. The activation context is created in `AfxWinInit`. For more information, see [Support for Activation Contexts in the MFC Module State](../../mfc/support-for-activation-contexts-in-the-mfc-module-state.md).

### Example

[!code-cpp[NVC_MFC_AfxWinInit#1](../../mfc/reference/codesnippet/cpp/application-information-and-management_13.cpp)]

### Requirements

  **Header** `afxwin.h`

## See also

[Macros and Globals](mfc-macros-and-globals.md)\
[`CWinApp` Class](cwinapp-class.md)\
[`CContextMenuManager` Class](ccontextmenumanager-class.md)\
[`CWnd` Class](cwnd-class.md)\
[`CFrameWndEx` Class](cframewndex-class.md)\
[`CMFCToolBar` Class](cmfctoolbar-class.md)\
[`CKeyboardManager` Class](ckeyboardmanager-class.md)\
[`CMenuTearOffManager` Class](cmenutearoffmanager-class.md)\
[`CMouseManager` Class](cmousemanager-class.md)\
[`CShellManager` Class](cshellmanager-class.md)\
[`CUserToolsManager` Class](cusertoolsmanager-class.md)
