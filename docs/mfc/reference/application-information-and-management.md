---
title: "Application Information and Management | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.mfc.macros"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "applications [MFC], managing"
ms.assetid: b72f4154-24db-4e75-bca3-6873e2459c15
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Application Information and Management
When you write an application, you create a single [CWinApp](../../mfc/reference/cwinapp-class.md)-derived object. At times, you may want to get information about this object from outside the `CWinApp`-derived object.  
  
 The Microsoft Foundation Class Library provides the following global functions to help you accomplish these tasks:  
  
### Application Information and Management Functions  
  
|||  
|-|-|  
|[AfxBeginThread](#afxbeginthread)|Creates a new thread.|  
|[AfxEndThread](#afxendthread)|Terminates the current thread.|  
|[AfxFreeLibrary](#afxfreelibrary)|Decrements the reference count of the loaded dynamic-link library (DLL) module; when the reference count reaches zero, the module is unmapped.|  
|[AfxGetApp](#afxgetapp)|Returns a pointer to the application's single `CWinApp` object.|  
|[AfxGetAppName](#afxgetappname)|Returns a string that contains the application's name.|  
|[AfxGetInstanceHandle](#afxgetinstancehandle)|Returns an `HINSTANCE` representing this instance of the application.|  
|[AfxGetMainWnd](#afxgetmainwnd)|Returns a pointer to the current "main" window of a non-OLE application, or the in-place frame window of a server application.|  
|[AfxGetPerUserRegistration](#afxgetperuserregistration)|Use this function to determine whether the application redirects registry access to the **HKEY_CURRENT_USER** ( **HKCU**) node.|  
|[AfxGetResourceHandle](#afxgetresourcehandle)|Returns an `HINSTANCE` to the source of the application's default resources. Use this to access the application's resources directly.|  
|[AfxGetThread](#afxgetthread)|Retrieves a pointer to the current [CWinThread](../../mfc/reference/cwinthread-class.md) object.|  
|[AfxInitRichEdit](#afxinitrichedit)|Initializes the version 1.0 rich edit control for the application.|  
|[AfxInitRichEdit2](#afxinitrichedit2)|Initializes the version 2.0 and later rich edit control for the application.|  
|[AfxLoadLibrary](#afxloadlibrary)|Maps a DLL module and returns a handle that can be used to obtain the address of a DLL function.|  
|[AfxRegisterClass](#afxregisterclass)|Registers a window class in a DLL that uses MFC.|  
|[AfxRegisterWndClass](#afxregisterwndclass)|Registers a Windows window class to supplement those registered automatically by MFC.|  
|[AfxSetPerUserRegistration](#afxsetperuserregistration)|Sets whether the application redirects registry access to the **HKEY_CURRENT_USER** ( **HKCU**) node.|  
|[AfxSetResourceHandle](#afxsetresourcehandle)|Sets the `HINSTANCE` handle where the default resources of the application are loaded.|  
|[AfxSocketInit](#afxsocketinit)|Called in a `CWinApp::InitInstance` override to initialize Windows Sockets.|  
|[AfxWinInit](#afxwininit)|Called by the MFC-supplied `WinMain` function, as part of the [CWinApp](../../mfc/reference/cwinapp-class.md) initialization of a GUI-based application, to initialize MFC. Must be called directly for console applications that use MFC.|  
  
##  <a name="afxbeginthread"></a>  AfxBeginThread  
 Call this function to create a new thread.  
  
```   
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
 `pfnThreadProc`  
 Points to the controlling function for the worker thread. Cannot be **NULL**. This function must be declared as follows:  
  
 `UINT __cdecl MyControllingFunction( LPVOID pParam );`  
  
 *pThreadClass*  
 The RUNTIME_CLASS of an object derived from [CWinThread](../../mfc/reference/cwinthread-class.md).  
  
 *pParam*  
 Parameter to be passed to the controlling function as shown in the parameter to the function declaration in `pfnThreadProc`.  
  
 `nPriority`  
 The desired priority of the thread. For a full list and description of the available priorities, see [SetThreadPriority](http://msdn.microsoft.com/library/windows/desktop/ms686277) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `nStackSize`  
 Specifies the size in bytes of the stack for the new thread. If 0, the stack size defaults to the same size stack as the creating thread.  
  
 `dwCreateFlags`  
 Specifies an additional flag that controls the creation of the thread. This flag can contain one of two values:  
  
- **CREATE_SUSPENDED** Start the thread with a suspend count of one. Use **CREATE_SUSPENDED** if you want to initialize any member data of the `CWinThread` object, such as [m_bAutoDelete](../../mfc/reference/cwinthread-class.md#cwinthread__m_bautodelete) or any members of your derived class, before the thread starts running. Once your initialization is complete, use [CWinThread::ResumeThread](../../mfc/reference/cwinthread-class.md#cwinthread__resumethread) to start the thread running. The thread will not execute until `CWinThread::ResumeThread` is called.  
  
- **0** Start the thread immediately after creation.  
  
 `lpSecurityAttrs`  
 Points to a [SECURITY_ATTRIBUTES](http://msdn.microsoft.com/library/windows/desktop/aa379560) structure that specifies the security attributes for the thread. If **NULL**, the same security attributes as the creating thread will be used. For more information on this structure, see the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Return Value  
 Pointer to the newly created thread object, or **NULL** if a failure occurs.  
  
### Remarks  
 The first form of `AfxBeginThread` creates a worker thread. The second form creates a thread that may serve as a user-interface thread or as a worker thread.  
  
 `AfxBeginThread` creates a new `CWinThread` object, calls its [CreateThread](../../mfc/reference/cwinthread-class.md#cwinthread__createthread) function to start executing the thread, and returns a pointer to the thread. Checks are made throughout the procedure to make sure all objects are deallocated properly should any part of the creation fail. To end the thread, call [AfxEndThread](#afxendthread) from within the thread, or return from the controlling function of the worker thread.  
  
 Multithreading must be enabled by the application; otherwise, this function will fail. For more information on enabling multithreading, refer to [/MD, /MT, /LD (Use Run-Time Library)](../../build/reference/md-mt-ld-use-run-time-library.md) under *Visual C++ Compiler Options*.  
  
 For more information on `AfxBeginThread`, see the articles [Multithreading: Creating Worker Threads](../../parallel/multithreading-creating-worker-threads.md) and [Multithreading: Creating User-Interface Threads](../../parallel/multithreading-creating-user-interface-threads.md).  
  
### Example  
 See the example for [CSocket::Attach](../../mfc/reference/csocket-class.md#csocket__attach).  
  
##  <a name="afxendthread"></a>  AfxEndThread  
 Call this function to terminate the currently executing thread.  
  
```   
void AFXAPI AfxEndThread(
    UINT nExitCode,  
    BOOL bDelete  = TRUE); 
```  
  
### Parameters  
 *nExitCode*  
 Specifies the exit code of the thread.  
  
 *bDelete*  
 Deletes the thread object from memory.  
  
### Remarks  
 Must be called from within the thread to be terminated.  
  
 For more information on `AfxEndThread`, see the article [Multithreading: Terminating Threads](../../parallel/multithreading-terminating-threads.md).  
  
##  <a name="afxfreelibrary"></a>  AfxFreeLibrary  
 Both `AfxFreeLibrary` and `AfxLoadLibrary` maintain a reference count for each loaded library module.  
  
```   
BOOL AFXAPI AfxFreeLibrary(HINSTANCE hInstLib); 
```  
  
### Parameters  
 *hInstLib*  
 A handle of the loaded library module. [AfxLoadLibrary](#afxloadlibrary) returns this handle.  
  
### Return Value  
 **TRUE** if the function succeeds; otherwise, **FALSE**.  
  
### Remarks  
 `AfxFreeLibrary` decrements the reference count of the loaded dynamic-link library (DLL) module. When the reference count reaches zero, the module is unmapped from the address space of the calling process and the handle is no longer valid. This reference count is incremented each time `AfxLoadLibrary` is called.  
  
 Before unmapping a library module, the system enables the DLL to detach from the processes using it. Doing so gives the DLL an opportunity to clean up resources allocated on behalf of the current process. After the entry-point function returns, the library module is removed from the address space of the current process.  
  
 Use `AfxLoadLibrary` to map a DLL module.  
  
 Be sure to use `AfxFreeLibrary` and `AfxLoadLibrary` (instead of the Win32 functions **FreeLibrary** and **LoadLibrary**) if your application uses multiple threads. Using `AfxLoadLibrary` and `AfxFreeLibrary` ensures that the startup and shutdown code that executes when the extension DLL is loaded and unloaded does not corrupt the global MFC state.  
  
### Example  
 See the example for [AfxLoadLibrary](#afxloadlibrary).  
  
##  <a name="afxgetapp"></a>  AfxGetApp  
 The pointer returned by this function can be used to access application information such as the main message-dispatch code or the topmost window.  
  
```   
CWinApp* AFXAPI AfxGetApp(); 
```  
  
### Return Value  
 A pointer to the single `CWinApp` object for the application.  
  
### Remarks  
 If this method returns NULL, it might indicate that the applicationâ€™s main window has not been fully initialized yet. It might also indicate a problem.  
  
### Example  
 [!code-cpp[NVC_MFCWindowing#126](../../mfc/reference/codesnippet/cpp/application-information-and-management_1.cpp)]  
  
##  <a name="afxgetappname"></a>  AfxGetAppName  
 The string returned by this function can be used for diagnostic messages or as a root for temporary string names.  
  
```   
LPCTSTR AFXAPI AfxGetAppName(); 
```  
  
### Return Value  
 A null-terminated string containing the application's name.  
  
### Example  
 [!code-cpp[NVC_MFCWindowing#127](../../mfc/reference/codesnippet/cpp/application-information-and-management_2.cpp)]  
  
##  <a name="afxgetinstancehandle"></a>  AfxGetInstanceHandle  
 This function allows you to retrieve the instance handle of the current application.  
  
```   
HINSTANCE  AFXAPI AfxGetInstanceHandle(); 
```  
  
### Return Value  
 An `HINSTANCE` to the current instance of the application. If called from within a DLL linked with the USRDLL version of MFC, an `HINSTANCE` to the DLL is returned.  
  
### Remarks  
 `AfxGetInstanceHandle` always returns the `HINSTANCE` of your executable file (.EXE) unless it is called from within a DLL linked with the USRDLL version of MFC. In this case, it returns an `HINSTANCE` to the DLL.  
  
### Example  
 [!code-cpp[NVC_MFCWindowing#128](../../mfc/reference/codesnippet/cpp/application-information-and-management_3.cpp)]  
  
##  <a name="afxgetmainwnd"></a>  AfxGetMainWnd  
 If your application is an OLE server, call this function to retrieve a pointer to the active main window of the application instead of directly referring to the [m_pMainWnd](../../mfc/reference/cwinthread-class.md#cwinthread__m_pmainwnd) member of the application object.  
  
```   
CWnd* AFXAPI AfxGetMainWnd(); 
```  
  
### Return Value  
 If the server has an object that is in-place active inside a container, and this container is active, this function returns a pointer to the frame window object that contains the in-place active document.  
  
 If there is no object that is in-place active within a container, or your application is not an OLE server, this function simply returns the `m_pMainWnd` of your application object.  
  
 If `AfxGetMainWnd` is called from the application's primary thread, it returns the application's main window according to the above rules. If the function is called from a secondary thread in the application, the function returns the main window associated with the thread that made the call.  
  
### Remarks  
 If your application is not an OLE server, then calling this function is equivalent to directly referring to the `m_pMainWnd` member of your application object.  
  
### Example  
 [!code-cpp[NVC_MFCWindowing#129](../../mfc/reference/codesnippet/cpp/application-information-and-management_4.cpp)]  
  
##  <a name="afxgetperuserregistration"></a>  AfxGetPerUserRegistration  
 Use this function to determine whether the application redirects registry access to the **HKEY_CURRENT_USER** ( **HKCU**) node.  
  
```  
BOOL AFXAPI AfxGetPerUserRegistration();
```  
  
### Return Value  
 `TRUE` indicates that the registry information is directed to the **HKCU** node; `FALSE` indicates that the application writes registry information to the default node. The default node is **HKEY_CLASSES_ROOT** ( **HKCR**).  
  
### Remarks  
 If you enable registry redirection, the framework redirects access from **HKCR** to **HKEY_CURRENT_USER\Software\Classes**. Only the MFC and ATL frameworks are affected by the redirection.  
  
 To change whether the application redirects registry access, use [AfxSetPerUserRegistration](#afxsetperuserregistration).  
  
##  <a name="afxgetresourcehandle"></a>  AfxGetResourceHandle  
 Use the `HINSTANCE` handle returned by this function to access the application's resources directly, for example, in calls to the Windows function **FindResource**.  
  
```   
extern HINSTANCE  AfxGetResourceHandle(); 
```  
  
### Return Value  
 An `HINSTANCE` handle where the default resources of the application are loaded.  
  
### Example  
 [!code-cpp[NVC_MFCWindowing#130](../../mfc/reference/codesnippet/cpp/application-information-and-management_5.cpp)]  
  
##  <a name="afxgetthread"></a>  AfxGetThread  
 Call this function to get a pointer to the [CWinThread](../../mfc/reference/cwinthread-class.md) object representing the currently executing thread.  
  
```   
CWinThread* AfxGetThread(); 
```  
  
### Return Value  
 Pointer to the currently executing thread; otherwise **NULL**.  
  
### Remarks  
 Must be called from within the desired thread.  
  
> [!NOTE]
>  If you are porting an MFC project calling `AfxGetThread` from Visual C++ versions 4.2, 5.0, or 6.0, `AfxGetThread` calls [AfxGetApp](#afxgetapp) if no thread is found. In Visual C+ .NET and later, `AfxGetThread` returns **NULL** if no thread was found. If you want the application thread, you must call `AfxGetApp`.  
  
### Example  
 [!code-cpp[NVC_MFCWindowing#132](../../mfc/reference/codesnippet/cpp/application-information-and-management_6.cpp)]  
  
##  <a name="afxinitrichedit"></a>  AfxInitRichEdit  
 Call this function to initialize the rich edit control (version 1.0) for the application.  
  
```   
BOOL AFXAPI AfxInitRichEdit(); 
```  
  
### Remarks  
 This function is provided for backward compatibility. Applications created with Visual C++ .NET and later use [AfxInitRichEdit2](#afxinitrichedit2).  
  
 `AfxInitRichEdit` loads RICHED32.DLL to initialize version 1.0 of the rich edit control. To use version 2.0 and 3.0 of the rich edit control, RICHED20.DLL needs to be loaded. This is accomplished with a call to [AfxInitRichEdit2](#afxinitrichedit2). If you have dialog resources with the rich edit control created prior to Visual C++ .NET, the rich edit controls are automatically version 1.0. Rich edit controls inserted using the Visual C++ .NET Resource Editor are version 2.0.  
  
 To update rich edit controls in existing Visual C++ applications to version 2.0, open the .RC file as text, change the class name of each rich edit control from "RICHEDIT" to "RichEdit20a". Then replace the call to `AfxInitRichEdit` with `AfxInitRichEdit2`.  
  
 This function also initializes the common controls library, if the library hasn't already been initialized for the process. If you use the rich edit control directly from your MFC application, you should call this function to assure that MFC has properly initialized the rich edit control runtime. If you call the Create method of [CRichEditCtrl](../../mfc/reference/cricheditctrl-class.md), [CRichEditView](../../mfc/reference/cricheditview-class.md), or [CRichEditDoc](../../mfc/reference/cricheditdoc-class.md), you typically don't need to call this function, but in some cases it might be necessary.  
  
##  <a name="afxinitrichedit2"></a>  AfxInitRichEdit2  
 Call this function to initialize the rich edit control (version 2.0 and later) for the application.  
  
```   
BOOL AFXAPI AfxInitRichEdit2(); 
```  
  
### Remarks  
 Call this function to load the RICHED20.DLL and initialize version 2.0 of the rich edit control. If you call the Create method of [CRichEditCtrl](../../mfc/reference/cricheditctrl-class.md), [CRichEditView](../../mfc/reference/cricheditview-class.md), or [CRichEditDoc](../../mfc/reference/cricheditdoc-class.md), you typically don't need to call this function, but in some cases it might be necessary.  
  
##  <a name="afxloadlibrary"></a>  AfxLoadLibrary  
 Use `AfxLoadLibrary` to map a DLL module.  
  
```   
HINSTANCE AFXAPI AfxLoadLibrary(LPCTSTR lpszModuleName); 
```  
  
### Parameters  
 *lpszModuleName*  
 Points to a null-terminated string that contains the name of the module (either a .DLL or .EXE file). The name specified is the filename of the module.  
  
 If the string specifies a path but the file does not exist in the specified directory, the function fails.  
  
 If a path is not specified and the filename extension is omitted, the default extension .DLL is appended. However, the filename string can include a trailing point character (.) to indicate that the module name has no extension. When no path is specified, the function searches for the file in the following sequence:  
  
-   The directory from which the application loaded.  
  
-   The current directory.  
  
- **Windows 95/98:** The Windows system directory. **Windows NT:** The 32-bit Windows system directory. The name of this directory is SYSTEM32.  
  
- **Windows NT only:** The 16-bit Windows system directory. There is no Win32 function that obtains the path of this directory, but it is searched. The name of this directory is SYSTEM.  
  
-   The Windows directory.  
  
-   The directories that are listed in the PATH environment variable.  
  
### Return Value  
 If the function succeeds, the return value is a handle to the module. If the function fails, the return value is NULL.  
  
### Remarks  
 It returns a handle that can be used in [GetProcAddress](http://msdn.microsoft.com/library/windows/desktop/ms683212) to get the address of a DLL function. `AfxLoadLibrary` can also be used to map other executable modules.  
  
 Each process maintains a reference count for each loaded library module. This reference count is incremented each time `AfxLoadLibrary` is called and is decremented each time `AfxFreeLibrary` is called. When the reference count reaches zero, the module is unmapped from the address space of the calling process and the handle is no longer valid.  
  
 Be sure to use `AfxLoadLibrary` and `AfxFreeLibrary` (instead of the Win32 functions **LoadLibrary** and **FreeLibrary**) if your application uses multiple threads and if it dynamically loads an extension DLL. Using `AfxLoadLibrary` and `AfxFreeLibrary` insures that the startup and shutdown code that executes when the extension DLL is loaded and unloaded does not corrupt the global MFC state.  
  
 Using `AfxLoadLibrary` in an application requires you to dynamically link to the DLL version of MFC; the header file for `AfxLoadLibrary`, Afxdll_.h, is only included if MFC is linked to the application as a DLL. This is by design because you have to link to the DLL version of MFC to use or create extension DLLs.  
  
### Example  
 [!code-cpp[NVC_MFC_DLLUser#1](../../mfc/reference/codesnippet/cpp/application-information-and-management_7.cpp)]  
[!code-cpp[NVC_MFC_DLLUser#2](../../mfc/reference/codesnippet/cpp/application-information-and-management_8.cpp)]  
[!code-cpp[NVC_MFC_DLLUser#3](../../mfc/reference/codesnippet/cpp/application-information-and-management_9.cpp)]  
  
##  <a name="afxregisterclass"></a>  AfxRegisterClass  
 Use this function to register window classes in a DLL that uses MFC.  
  
```   
BOOL AFXAPI AfxRegisterClass(WNDCLASS* lpWndClass); 
```  
  
### Parameters  
 *lpWndClass*  
 Pointer to a [WNDCLASS](http://msdn.microsoft.com/library/windows/desktop/ms633576) structure containing information about the window class to be registered. For more information on this structure, see the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Return Value  
 **TRUE** if the class is successfully registered; otherwise **FALSE**.  
  
### Remarks  
 If you use this function, the class is automatically unregistered when the DLL is unloaded.  
  
 In non-DLL builds, the `AfxRegisterClass` identifier is defined as a macro that maps to the Windows function **RegisterClass**, since classes registered in an application are automatically unregistered. If you use `AfxRegisterClass` instead of **RegisterClass**, your code can be used without change both in an application and in a DLL.  
  
### Example  
 [!code-cpp[NVC_MFC_DLL#3](../../atl-mfc-shared/codesnippet/cpp/application-information-and-management_10.cpp)]  
  
##  <a name="afxregisterwndclass"></a>  AfxRegisterWndClass  
 Allows you to register your own window classes.  
  
```  
 
LPCTSTR AFXAPI AfxRegisterWndClass(
    UINT nClassStyle,  
    HCURSOR hCursor = 0,  
    HBRUSH hbrBackground = 0,  
    HICON hIcon = 0);

 
```  
  
### Parameters  
 *nClassStyle*  
 Specifies the Windows class style or combination of styles, created by using the bitwise-OR ( **&#124;**) operator, for the window class. For a list of class styles, see the [WNDCLASS](http://msdn.microsoft.com/library/windows/desktop/ms633576) structure in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. If **NULL**, the defaults will be set as follows:  
  
-   Sets the mouse style to **CS_DBLCLKS**, which sends double-click messages to the window procedure when the user double-clicks the mouse.  
  
-   Sets the arrow cursor style to the Windows standard **IDC_ARROW**.  
  
-   Sets the background brush to **NULL**, so the window will not erase its background.  
  
-   Sets the icon to the standard, waving-flag Windows logo icon.  
  
 `hCursor`  
 Specifies a handle to the cursor resource to be installed in each window created from the window class. If you use the default of **0**, you will get the standard **IDC_ARROW** cursor.  
  
 *hbrBackground*  
 Specifies a handle to the brush resource to be installed in each window created from the window class. If you use the default of **0**, you will have a **NULL** background brush, and your window will, by default, not erase its background while processing [WM_ERASEBKGND](http://msdn.microsoft.com/library/windows/desktop/ms648055).  
  
 `hIcon`  
 Specifies a handle to the icon resource to be installed in each window created from the window class. If you use the default of **0**, you will get the standard, waving-flag Windows logo icon.  
  
### Return Value  
 A null-terminated string containing the class name. You can pass this class name to the **Create** member function in `CWnd` or other **CWnd-**derived classes to create a window. The name is generated by the Microsoft Foundation Class Library.  
  
> [!NOTE]
>  The return value is a pointer to a static buffer. To save this string, assign it to a `CString` variable.  
  
### Remarks  
 The Microsoft Foundation Class Library automatically registers several standard window classes for you. Call this function if you want to register your own window classes.  
  
 The name registered for a class by `AfxRegisterWndClass` depends solely on the parameters. If you call `AfxRegisterWndClass` multiple times with identical parameters, it only registers a class on the first call. Subsequent calls to `AfxRegisterWndClass` with identical parameters simply return the already-registered classname.  
  
 If you call `AfxRegisterWndClass` for multiple CWnd-derived classes with identical parameters, instead of getting a separate window class for each class, each class shares the same window class. This can cause problems if the **CS_CLASSDC** class style is used. Instead of multiple **CS_CLASSDC** window classes, you end up with one **CS_CLASSDC** window class, and all C++ windows that use that class share the same DC. To avoid this problem, call [AfxRegisterClass](#afxregisterclass) to register the class.  
  
 Refer to Technical Note [TN001: Window Class Registration](../../mfc/tn001-window-class-registration.md) for more information on window class registration and the `AfxRegisterWndClass` function.  
  
### Example  
 [!code-cpp[NVC_MFCWindowing#134](../../mfc/reference/codesnippet/cpp/application-information-and-management_11.cpp)]  
  
##  <a name="afxsetperuserregistration"></a>  AfxSetPerUserRegistration  
 Sets whether the application redirects registry access to the **HKEY_CURRENT_USER** ( **HKCU**) node.  
  
```  
void AFXAPI AfxSetPerUserRegistration(BOOL bEnable);
```  
  
### Parameters  
 [in] `bEnable`  
 `TRUE` indicates that the registry information is directed to the **HKCU** node; `FALSE` indicates that the application writes registry information to the default node. The default node is **HKEY_CLASSES_ROOT** ( **HKCR**).  
  
### Remarks  
 Before [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)], applications that access the registry usually use the **HKEY_CLASSES_ROOT** node. However, with [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)], you must run an application in elevated mode to write to **HKCR**.  
  
 This method enables your application to read and write to the registry without running in elevated mode by redirecting registry access from **HKCR** to **HKCU**. For more information, see [Linker Property Pages](../../ide/linker-property-pages.md).  
  
 If you enable registry redirection, the framework redirects access from **HKCR** to **HKEY_CURRENT_USER\Software\Classes**. Only the MFC and ATL frameworks are affected by the redirection.  
  
 The default implementation accesses the registry under **HKCR**.  
  
##  <a name="afxsetresourcehandle"></a>  AfxSetResourceHandle  
 Use this function to set the `HINSTANCE` handle that determines where the default resources of the application are loaded.  
  
```  
 
void  
AFXAPI AfxSetResourceHandle(HINSTANCE hInstResource);

 
```  
  
### Parameters  
 `hInstResource`  
 The instance or module handle to an .EXE or DLL file from which the application's resources are loaded.  
  
### Example  
 [!code-cpp[NVC_MFCWindowing#135](../../mfc/reference/codesnippet/cpp/application-information-and-management_12.cpp)]  
  
##  <a name="afxsocketinit"></a>  AfxSocketInit  
 Call this function in your `CWinApp::InitInstance` override to initialize Windows Sockets.  
  
```  
 
BOOL  
AfxSocketInit(WSADATA* lpwsaData = NULL);

 
```  
  
### Parameters  
 `lpwsaData`  
 A pointer to a [WSADATA](../../mfc/reference/wsadata-structure.md) structure. If `lpwsaData` is not equal to `NULL`, then the address of the `WSADATA` structure is filled by the call to `WSAStartup`. This function also ensures that `WSACleanup` is called for you before the application terminates.  
  
### Return Value  
 Nonzero if the function is successful; otherwise 0.  
  
### Remarks  
 When using MFC sockets in secondary threads in a statically linked MFC application, you must call `AfxSocketInit` in each thread that uses sockets to initialize the socket libraries. By default, `AfxSocketInit` is called only in the primary thread.  
  
##  <a name="afxwininit"></a>  AfxWinInit  
 This function is called by the MFC-supplied `WinMain` function, as part of the [CWinApp](../../mfc/reference/cwinapp-class.md) initialization of a GUI-based application, to initialize MFC.  
  
```  
 
BOOL AFXAPI AfxWinInit(
    HINSTANCE hInstance,  
    HINSTANCE hPrevInstance,  
    LPTSTR lpCmdLine,  
    int nCmdShow);

 
```  
  
### Parameters  
 `hInstance`  
 The handle of the currently running module.  
  
 *hPrevInstance*  
 A handle to a previous instance of the application. For a Win32-based application, this parameter is always **NULL**.  
  
 `lpCmdLine`  
 Points to a null-terminated string specifying the command line for the application.  
  
 `nCmdShow`  
 Specifies how the main window of a GUI application would be shown.  
  
### Remarks  
 For a console application, which does not use the MFC-supplied `WinMain` function, you must call `AfxWinInit` directly to initialize MFC.  
  
 If you call `AfxWinInit` yourself, you should declare an instance of a `CWinApp` class. For a console application, you might choose not to derive your own class from `CWinApp` and instead use an instance of `CWinApp` directly. This technique is appropriate if you decide to leave all functionality for your application in your implementation of **main**.  
  
> [!NOTE]
>  When it creates an activation context for an assembly, MFC uses a manifest resource provided by the user module. The activation context is created in `AfxWinInit`. For more information, see [Support for Activation Contexts in the MFC Module State](../../mfc/support-for-activation-contexts-in-the-mfc-module-state.md).  
  
### Example  
 [!code-cpp[NVC_MFC_AfxWinInit#1](../../mfc/reference/codesnippet/cpp/application-information-and-management_13.cpp)]  
  
## See Also  
 [Macros and Globals](../../mfc/reference/mfc-macros-and-globals.md)   
 [CWinApp Class](../../mfc/reference/cwinapp-class.md)
