---
description: "Learn more about: CWinApp Class"
title: "CWinApp Class"
ms.date: "07/15/2019"
f1_keywords: ["CWinApp", "AFXWIN/CWinApp", "AFXWIN/CWinApp::CWinApp", "AFXWIN/CWinApp::AddDocTemplate", "AFXWIN/CWinApp::AddToRecentFileList", "AFXWIN/CWinApp::ApplicationRecoveryCallback", "AFXWIN/CWinApp::CloseAllDocuments", "AFXWIN/CWinApp::CreatePrinterDC", "AFXWIN/CWinApp::DelRegTree", "AFXWIN/CWinApp::DoMessageBox", "AFXWIN/CWinApp::DoWaitCursor", "AFXWIN/CWinApp::EnableD2DSupport", "AFXWIN/CWinApp::EnableHtmlHelp", "AFXWIN/CWinApp::EnableTaskbarInteraction", "AFXWIN/CWinApp::ExitInstance", "AFXWIN/CWinApp::GetApplicationRecoveryParameter", "AFXWIN/CWinApp::GetApplicationRecoveryPingInterval", "AFXWIN/CWinApp::GetApplicationRestartFlags", "AFXWIN/CWinApp::GetAppRegistryKey", "AFXWIN/CWinApp::GetDataRecoveryHandler", "AFXWIN/CWinApp::GetFirstDocTemplatePosition", "AFXWIN/CWinApp::GetHelpMode", "AFXWIN/CWinApp::GetNextDocTemplate", "AFXWIN/CWinApp::GetPrinterDeviceDefaults", "AFXWIN/CWinApp::GetProfileBinary", "AFXWIN/CWinApp::GetProfileInt", "AFXWIN/CWinApp::GetProfileString", "AFXWIN/CWinApp::GetSectionKey", "AFXWIN/CWinApp::HideApplication", "AFXWIN/CWinApp::HtmlHelp", "AFXWIN/CWinApp::InitInstance", "AFXWIN/CWinApp::IsTaskbarInteractionEnabled", "AFXWIN/CWinApp::LoadCursor", "AFXWIN/CWinApp::LoadIcon", "AFXWIN/CWinApp::LoadOEMCursor", "AFXWIN/CWinApp::LoadOEMIcon", "AFXWIN/CWinApp::LoadStandardCursor", "AFXWIN/CWinApp::LoadStandardIcon", "AFXWIN/CWinApp::OnDDECommand", "AFXWIN/CWinApp::OnIdle", "AFXWIN/CWinApp::OpenDocumentFile", "AFXWIN/CWinApp::ParseCommandLine", "AFXWIN/CWinApp::PreTranslateMessage", "AFXWIN/CWinApp::ProcessMessageFilter", "AFXWIN/CWinApp::ProcessShellCommand", "AFXWIN/CWinApp::ProcessWndProcException", "AFXWIN/CWinApp::Register", "AFXWIN/CWinApp::RegisterWithRestartManager", "AFXWIN/CWinApp::ReopenPreviousFilesAtRestart", "AFXWIN/CWinApp::RestartInstance", "AFXWIN/CWinApp::RestoreAutosavedFilesAtRestart", "AFXWIN/CWinApp::Run", "AFXWIN/CWinApp::RunAutomated", "AFXWIN/CWinApp::RunEmbedded", "AFXWIN/CWinApp::SaveAllModified", "AFXWIN/CWinApp::SelectPrinter", "AFXWIN/CWinApp::SetHelpMode", "AFXWIN/CWinApp::SupportsApplicationRecovery", "AFXWIN/CWinApp::SupportsAutosaveAtInterval", "AFXWIN/CWinApp::SupportsAutosaveAtRestart", "AFXWIN/CWinApp::SupportsRestartManager", "AFXWIN/CWinApp::Unregister", "AFXWIN/CWinApp::WinHelp", "AFXWIN/CWinApp::WriteProfileBinary", "AFXWIN/CWinApp::WriteProfileInt", "AFXWIN/CWinApp::WriteProfileString", "AFXWIN/CWinApp::EnableShellOpen", "AFXWIN/CWinApp::LoadStdProfileSettings", "AFXWIN/CWinApp::OnContextHelp", "AFXWIN/CWinApp::OnFileNew", "AFXWIN/CWinApp::OnFileOpen", "AFXWIN/CWinApp::OnFilePrintSetup", "AFXWIN/CWinApp::OnHelp", "AFXWIN/CWinApp::OnHelpFinder", "AFXWIN/CWinApp::OnHelpIndex", "AFXWIN/CWinApp::OnHelpUsing", "AFXWIN/CWinApp::RegisterShellFileTypes", "AFXWIN/CWinApp::SetAppID", "AFXWIN/CWinApp::SetRegistryKey", "AFXWIN/CWinApp::UnregisterShellFileTypes", "AFXWIN/CWinApp::m_bHelpMode", "AFXWIN/CWinApp::m_eHelpType", "AFXWIN/CWinApp::m_hInstance", "AFXWIN/CWinApp::m_lpCmdLine", "AFXWIN/CWinApp::m_nCmdShow", "AFXWIN/CWinApp::m_pActiveWnd", "AFXWIN/CWinApp::m_pszAppID", "AFXWIN/CWinApp::m_pszAppName", "AFXWIN/CWinApp::m_pszExeName", "AFXWIN/CWinApp::m_pszHelpFilePath", "AFXWIN/CWinApp::m_pszProfileName", "AFXWIN/CWinApp::m_pszRegistryKey", "AFXWIN/CWinApp::m_dwRestartManagerSupportFlags", "AFXWIN/CWinApp::m_nAutosaveInterval", "AFXWIN/CWinApp::m_pDataRecoveryHandler"]
helpviewer_keywords: ["CWinApp [MFC], CWinApp", "CWinApp [MFC], AddDocTemplate", "CWinApp [MFC], AddToRecentFileList", "CWinApp [MFC], ApplicationRecoveryCallback", "CWinApp [MFC], CloseAllDocuments", "CWinApp [MFC], CreatePrinterDC", "CWinApp [MFC], DelRegTree", "CWinApp [MFC], DoMessageBox", "CWinApp [MFC], DoWaitCursor", "CWinApp [MFC], EnableD2DSupport", "CWinApp [MFC], EnableHtmlHelp", "CWinApp [MFC], EnableTaskbarInteraction", "CWinApp [MFC], ExitInstance", "CWinApp [MFC], GetApplicationRecoveryParameter", "CWinApp [MFC], GetApplicationRecoveryPingInterval", "CWinApp [MFC], GetApplicationRestartFlags", "CWinApp [MFC], GetAppRegistryKey", "CWinApp [MFC], GetDataRecoveryHandler", "CWinApp [MFC], GetFirstDocTemplatePosition", "CWinApp [MFC], GetHelpMode", "CWinApp [MFC], GetNextDocTemplate", "CWinApp [MFC], GetPrinterDeviceDefaults", "CWinApp [MFC], GetProfileBinary", "CWinApp [MFC], GetProfileInt", "CWinApp [MFC], GetProfileString", "CWinApp [MFC], GetSectionKey", "CWinApp [MFC], HideApplication", "CWinApp [MFC], HtmlHelp", "CWinApp [MFC], InitInstance", "CWinApp [MFC], IsTaskbarInteractionEnabled", "CWinApp [MFC], LoadCursor", "CWinApp [MFC], LoadIcon", "CWinApp [MFC], LoadOEMCursor", "CWinApp [MFC], LoadOEMIcon", "CWinApp [MFC], LoadStandardCursor", "CWinApp [MFC], LoadStandardIcon", "CWinApp [MFC], OnDDECommand", "CWinApp [MFC], OnIdle", "CWinApp [MFC], OpenDocumentFile", "CWinApp [MFC], ParseCommandLine", "CWinApp [MFC], PreTranslateMessage", "CWinApp [MFC], ProcessMessageFilter", "CWinApp [MFC], ProcessShellCommand", "CWinApp [MFC], ProcessWndProcException", "CWinApp [MFC], Register", "CWinApp [MFC], RegisterWithRestartManager", "CWinApp [MFC], ReopenPreviousFilesAtRestart", "CWinApp [MFC], RestartInstance", "CWinApp [MFC], RestoreAutosavedFilesAtRestart", "CWinApp [MFC], Run", "CWinApp [MFC], RunAutomated", "CWinApp [MFC], RunEmbedded", "CWinApp [MFC], SaveAllModified", "CWinApp [MFC], SelectPrinter", "CWinApp [MFC], SetHelpMode", "CWinApp [MFC], SupportsApplicationRecovery", "CWinApp [MFC], SupportsAutosaveAtInterval", "CWinApp [MFC], SupportsAutosaveAtRestart", "CWinApp [MFC], SupportsRestartManager", "CWinApp [MFC], Unregister", "CWinApp [MFC], WinHelp", "CWinApp [MFC], WriteProfileBinary", "CWinApp [MFC], WriteProfileInt", "CWinApp [MFC], WriteProfileString", "CWinApp [MFC], EnableShellOpen", "CWinApp [MFC], LoadStdProfileSettings", "CWinApp [MFC], OnContextHelp", "CWinApp [MFC], OnFileNew", "CWinApp [MFC], OnFileOpen", "CWinApp [MFC], OnFilePrintSetup", "CWinApp [MFC], OnHelp", "CWinApp [MFC], OnHelpFinder", "CWinApp [MFC], OnHelpIndex", "CWinApp [MFC], OnHelpUsing", "CWinApp [MFC], RegisterShellFileTypes", "CWinApp [MFC], SetAppID", "CWinApp [MFC], SetRegistryKey", "CWinApp [MFC], UnregisterShellFileTypes", "CWinApp [MFC], m_bHelpMode", "CWinApp [MFC], m_eHelpType", "CWinApp [MFC], m_hInstance", "CWinApp [MFC], m_lpCmdLine", "CWinApp [MFC], m_nCmdShow", "CWinApp [MFC], m_pActiveWnd", "CWinApp [MFC], m_pszAppID", "CWinApp [MFC], m_pszAppName", "CWinApp [MFC], m_pszExeName", "CWinApp [MFC], m_pszHelpFilePath", "CWinApp [MFC], m_pszProfileName", "CWinApp [MFC], m_pszRegistryKey", "CWinApp [MFC], m_dwRestartManagerSupportFlags", "CWinApp [MFC], m_nAutosaveInterval", "CWinApp [MFC], m_pDataRecoveryHandler"]
ms.assetid: e426a3cd-0d15-40d6-bd55-beaa5feb2343
---
# CWinApp Class

The base class from which you derive a Windows application object.

## Syntax

```
class CWinApp : public CWinThread
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CWinApp::CWinApp](#cwinapp)|Constructs a `CWinApp` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CWinApp::AddDocTemplate](#adddoctemplate)|Adds a document template to the application's list of available document templates.|
|[CWinApp::AddToRecentFileList](#addtorecentfilelist)|Adds a filename to the most recently used (MRU) file list.|
|[CWinApp::ApplicationRecoveryCallback](#applicationrecoverycallback)|Called by the framework when the application unexpectedly exits.|
|[CWinApp::CloseAllDocuments](#closealldocuments)|Closes all open documents.|
|[CWinApp::CreatePrinterDC](#createprinterdc)|Creates a printer device context.|
|[CWinApp::DelRegTree](#delregtree)|Deletes a specified key and all its subkeys.|
|[CWinApp::DoMessageBox](#domessagebox)|Implements [AfxMessageBox](cstring-formatting-and-message-box-display.md#afxmessagebox) for the application.|
|[CWinApp::DoWaitCursor](#dowaitcursor)|Turns the wait cursor on and off.|
|[CWinApp::EnableD2DSupport](#enabled2dsupport)|Enables application D2D support. Call this method before the main window is initialized.|
|[CWinApp::EnableHtmlHelp](#enablehtmlhelp)|Implements HTMLHelp for the application, rather than WinHelp.|
|[CWinApp::EnableTaskbarInteraction](#enabletaskbarinteraction)|Enables Taskbar interaction.|
|[CWinApp::ExitInstance](#exitinstance)|Override to clean up when your application terminates.|
|[CWinApp::GetApplicationRecoveryParameter](#getapplicationrecoveryparameter)|Retrieves the input parameter for the application recovery method.|
|[CWinApp::GetApplicationRecoveryPingInterval](#getapplicationrecoverypinginterval)|Returns the length of time that the restart manager waits for the recovery callback function to return.|
|[CWinApp::GetApplicationRestartFlags](#getapplicationrestartflags)|Returns the flags for the restart manager.|
|[CWinApp::GetAppRegistryKey](#getappregistrykey)|Returns key for HKEY_CURRENT_USER\\"Software"\RegistryKey\ProfileName.|
|[CWinApp::GetDataRecoveryHandler](#getdatarecoveryhandler)|Gets the data recovery handler for this instance of the application.|
|[CWinApp::GetFirstDocTemplatePosition](#getfirstdoctemplateposition)|Retrieves the position of the first document template.|
|[CWinApp::GetHelpMode](#gethelpmode)|Retrieves the type of help used by the application.|
|[CWinApp::GetNextDocTemplate](#getnextdoctemplate)|Retrieves the position of a document template. Can be used recursively.|
|[CWinApp::GetPrinterDeviceDefaults](#getprinterdevicedefaults)|Retrieves the printer device defaults.|
|[CWinApp::GetProfileBinary](#getprofilebinary)|Retrieves binary data from an entry in the application's .INI file.|
|[CWinApp::GetProfileInt](#getprofileint)|Retrieves an integer from an entry in the application's .INI file.|
|[CWinApp::GetProfileString](#getprofilestring)|Retrieves a string from an entry in the application's .INI file.|
|[CWinApp::GetSectionKey](#getsectionkey)|Returns key for HKEY_CURRENT_USER\\"Software"\RegistryKey\AppName\lpszSection.|
|[CWinApp::HideApplication](#hideapplication)|Hides the application before closing all documents.|
|[CWinApp::HtmlHelp](#htmlhelp)|Calls the `HTMLHelp` Windows function.|
|[CWinApp::InitInstance](#initinstance)|Override to perform Windows instance initialization, such as creating your window objects.|
|[CWinApp::IsTaskbarInteractionEnabled](#istaskbarinteractionenabled)|Tells whether Windows 7 Taskbar interaction is enabled.|
|[CWinApp::LoadCursor](#loadcursor)|Loads a cursor resource.|
|[CWinApp::LoadIcon](#loadicon)|Loads an icon resource.|
|[CWinApp::LoadOEMCursor](#loadoemcursor)|Loads a Windows OEM predefined cursor that the **OCR_** constants specify in WINDOWS.H.|
|[CWinApp::LoadOEMIcon](#loadoemicon)|Loads a Windows OEM predefined icon that the **OIC_** constants specify in WINDOWS.H.|
|[CWinApp::LoadStandardCursor](#loadstandardcursor)|Loads a Windows predefined cursor that the **IDC_** constants specify in WINDOWS.H.|
|[CWinApp::LoadStandardIcon](#loadstandardicon)|Loads a Windows predefined icon that the **IDI_** constants specify in WINDOWS.H.|
|[CWinApp::OnDDECommand](#onddecommand)|Called by the framework in response to a dynamic data exchange (DDE) execute command.|
|[CWinApp::OnIdle](#onidle)|Override to perform application-specific idle-time processing.|
|[CWinApp::OpenDocumentFile](#opendocumentfile)|Called by the framework to open a document from a file.|
|[CWinApp::ParseCommandLine](#parsecommandline)|Parses individual parameters and flags in the command line.|
|[CWinApp::PreTranslateMessage](#pretranslatemessage)|Filters messages before they are dispatched to the Windows functions [TranslateMessage](/windows/win32/api/winuser/nf-winuser-translatemessage) and [DispatchMessage](/windows/win32/api/winuser/nf-winuser-dispatchmessage).|
|[CWinApp::ProcessMessageFilter](#processmessagefilter)|Intercepts certain messages before they reach the application.|
|[CWinApp::ProcessShellCommand](#processshellcommand)|Handles command-line arguments and flags.|
|[CWinApp::ProcessWndProcException](#processwndprocexception)|Intercepts all unhandled exceptions thrown by the application's message and command handlers.|
|[CWinApp::Register](#register)|Performs customized registration.|
|[CWinApp::RegisterWithRestartManager](#registerwithrestartmanager)|Registers the application with the restart manager.|
|[CWinApp::ReopenPreviousFilesAtRestart](#reopenpreviousfilesatrestart)|Determines whether the restart manager reopens the files that were open when the application exited unexpectedly.|
|[CWinApp::RestartInstance](#restartinstance)|Handles an application restart initiated by the restart manager.|
|[CWinApp::RestoreAutosavedFilesAtRestart](#restoreautosavedfilesatrestart)|Determines whether the restart manager restores the autosaved files when it restarts the application.|
|[CWinApp::Run](#run)|Runs the default message loop. Override to customize the message loop.|
|[CWinApp::RunAutomated](#runautomated)|Tests the application's command line for the **/Automation** option. Obsolete. Instead, use the value in [CCommandLineInfo::m_bRunAutomated](../../mfc/reference/ccommandlineinfo-class.md#m_brunautomated) after calling [ParseCommandLine](#parsecommandline).|
|[CWinApp::RunEmbedded](#runembedded)|Tests the application's command line for the **/Embedding** option. Obsolete. Instead, use the value in [CCommandLineInfo::m_bRunEmbedded](../../mfc/reference/ccommandlineinfo-class.md#m_brunembedded) after calling [ParseCommandLine](#parsecommandline).|
|[CWinApp::SaveAllModified](#saveallmodified)|Prompts the user to save all modified documents.|
|[CWinApp::SelectPrinter](#selectprinter)|Selects a printer previously indicated by a user through a print dialog box.|
|[CWinApp::SetHelpMode](#sethelpmode)|Sets and initializes the type of help used by the application.|
|[CWinApp::SupportsApplicationRecovery](#supportsapplicationrecovery)|Determines whether the restart manager recovers an application that exited unexpectedly.|
|[CWinApp::SupportsAutosaveAtInterval](#supportsautosaveatinterval)|Determines whether the restart manager autosaves open documents at a regular interval.|
|[CWinApp::SupportsAutosaveAtRestart](#supportsautosaveatrestart)|Determines whether the restart manager autosaves any open documents when the application restarts.|
|[CWinApp::SupportsRestartManager](#supportsrestartmanager)|Determines whether the application supports the restart manager.|
|[CWinApp::Unregister](#unregister)|Unregisters everything known to be registered by the `CWinApp` object.|
|[CWinApp::WinHelp](#winhelp)|Calls the `WinHelp` Windows function.|
|[CWinApp::WriteProfileBinary](#writeprofilebinary)|Writes binary data to an entry in the application's .INI file.|
|[CWinApp::WriteProfileInt](#writeprofileint)|Writes an integer to an entry in the application's .INI file.|
|[CWinApp::WriteProfileString](#writeprofilestring)|Writes a string to an entry in the application's .INI file.|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[CWinApp::EnableShellOpen](#enableshellopen)|Allows the user to open data files from the Windows File Manager.|
|[CWinApp::LoadStdProfileSettings](#loadstdprofilesettings)|Loads standard .INI file settings and enables the MRU file list feature.|
|[CWinApp::OnContextHelp](#oncontexthelp)|Handles SHIFT+F1 Help within the application.|
|[CWinApp::OnFileNew](#onfilenew)|Implements the ID_FILE_NEW command.|
|[CWinApp::OnFileOpen](#onfileopen)|Implements the ID_FILE_OPEN command.|
|[CWinApp::OnFilePrintSetup](#onfileprintsetup)|Implements the ID_FILE_PRINT_SETUP command.|
|[CWinApp::OnHelp](#onhelp)|Handles F1 Help within the application (using the current context).|
|[CWinApp::OnHelpFinder](#onhelpfinder)|Handles the ID_HELP_FINDER and ID_DEFAULT_HELP commands.|
|[CWinApp::OnHelpIndex](#onhelpindex)|Handles the ID_HELP_INDEX command and provides a default Help topic.|
|[CWinApp::OnHelpUsing](#onhelpusing)|Handles the ID_HELP_USING command.|
|[CWinApp::RegisterShellFileTypes](#registershellfiletypes)|Registers all the application's document types with the Windows File Manager.|
|[CWinApp::SetAppID](#setappid)|Explicitly sets Application User Model ID for the application. This method should be called before any user interface is presented to user (the best place is the application constructor).|
|[CWinApp::SetRegistryKey](#setregistrykey)|Causes application settings to be stored in the registry instead of .INI files.|
|[CWinApp::UnregisterShellFileTypes](#unregistershellfiletypes)|Unregisters all the application's document types with the Windows File Manager.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CWinApp::m_bHelpMode](#m_bhelpmode)|Indicates if the user is in Help context mode (typically invoked with SHIFT+F1).|
|[CWinApp::m_eHelpType](#m_ehelptype)|Specifies the type of help used by the application.|
|[CWinApp::m_hInstance](#m_hinstance)|Identifies the current instance of the application.|
|[CWinApp::m_lpCmdLine](#m_lpcmdline)|Points to a null-terminated string that specifies the command line for the application.|
|[CWinApp::m_nCmdShow](#m_ncmdshow)|Specifies how the window is to be shown initially.|
|[CWinApp::m_pActiveWnd](#m_pactivewnd)|Pointer to the main window of the container application when an OLE server is in-place active.|
|[CWinApp::m_pszAppID](#m_pszappid)|Application User Model ID.|
|[CWinApp::m_pszAppName](#m_pszappname)|Specifies the name of the application.|
|[CWinApp::m_pszExeName](#m_pszexename)|The module name of the application.|
|[CWinApp::m_pszHelpFilePath](#m_pszhelpfilepath)|The path to the application's Help file.|
|[CWinApp::m_pszProfileName](#m_pszprofilename)|The application's .INI filename.|
|[CWinApp::m_pszRegistryKey](#m_pszregistrykey)|Used to determine the full registry key for storing application profile settings.|

### Protected Data Members

|Name|Description|
|----------|-----------------|
|[CWinApp::m_dwRestartManagerSupportFlags](#m_dwrestartmanagersupportflags)|Flags that determine how the restart manager behaves.|
|[CWinApp::m_nAutosaveInterval](#m_nautosaveinterval)|The length of time in milliseconds between autosaves.|
|[CWinApp::m_pDataRecoveryHandler](#m_pdatarecoveryhandler)|Pointer to the data recovery handler for the application.|

## Remarks

An application object provides member functions for initializing your application (and each instance of it) and for running the application.

Each application that uses the Microsoft Foundation classes can only contain one object derived from `CWinApp`. This object is constructed when other C++ global objects are constructed and is already available when Windows calls the `WinMain` function, which is supplied by the Microsoft Foundation Class Library. Declare your derived `CWinApp` object at the global level.

When you derive an application class from `CWinApp`, override the [InitInstance](#initinstance) member function to create your application's main window object.

In addition to the `CWinApp` member functions, the Microsoft Foundation Class Library provides the following global functions to access your `CWinApp` object and other global information:

- [AfxGetApp](application-information-and-management.md#afxgetapp) Obtains a pointer to the `CWinApp` object.

- [AfxGetInstanceHandle](application-information-and-management.md#afxgetinstancehandle) Obtains a handle to the current application instance.

- [AfxGetResourceHandle](application-information-and-management.md#afxgetresourcehandle) Obtains a handle to the application's resources.

- [AfxGetAppName](application-information-and-management.md#afxgetappname) Obtains a pointer to a string containing the application's name. Alternately, if you have a pointer to the `CWinApp` object, use `m_pszExeName` to get the application's name.

See [CWinApp: The Application Class](../../mfc/cwinapp-the-application-class.md) for more on the `CWinApp` class, including an overview of the following:

- `CWinApp`-derived code written by the Application Wizard.

- `CWinApp`'s role in the execution sequence of your application.

- `CWinApp`'s default member function implementations.

- `CWinApp`'s key overridables.

The `m_hPrevInstance` data member no longer exists. To determine whether another instance of the application is running, use a named mutex. If opening the mutex fails, then there are no other instances of the application running.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWinThread](../../mfc/reference/cwinthread-class.md)

`CWinApp`

## Requirements

**Header:** afxwin.h

## <a name="adddoctemplate"></a> CWinApp::AddDocTemplate

Call this member function to add a document template to the list of available document templates that the application maintains.

```cpp
void AddDocTemplate(CDocTemplate* pTemplate);
```

### Parameters

*pTemplate*<br/>
A pointer to the `CDocTemplate` to be added.

### Remarks

You should add all document templates to an application before you call [RegisterShellFileTypes](#registershellfiletypes).

### Example

[!code-cpp[NVC_MFCWindowing#35](../../mfc/reference/codesnippet/cpp/cwinapp-class_1.cpp)]

## <a name="addtorecentfilelist"></a> CWinApp::AddToRecentFileList

Call this member function to add *lpszPathName* to the MRU file list.

```
virtual void AddToRecentFileList(LPCTSTR lpszPathName);
```

### Parameters

*lpszPathName*<br/>
The path of the file.

### Remarks

You should call the [LoadStdProfileSettings](#loadstdprofilesettings) member function to load the current MRU file list before you use this member function.

The framework calls this member function when it opens a file or executes the Save As command to save a file with a new name.

### Example

[!code-cpp[NVC_MFCWindowing#36](../../mfc/reference/codesnippet/cpp/cwinapp-class_2.cpp)]

## <a name="applicationrecoverycallback"></a> CWinApp::ApplicationRecoveryCallback

Called by the framework when the application unexpectedly exits.

```
virtual DWORD ApplicationRecoveryCallback(LPVOID lpvParam);
```

### Parameters

*lpvParam*<br/>
[in] Reserved for future use.

### Return Value

0 if this method is successful; nonzero if an error occurs.

### Remarks

If your application supports the restart manager, the framework calls this function when your application unexpectedly exits.

The default implementation of `ApplicationRecoveryCallback` uses the `CDataRecoveryHandler` to save the list of currently open documents to the registry. This method does not autosave any files.

To customize the behavior, override this function in a derived [CWinApp Class](../../mfc/reference/cwinapp-class.md) or pass your own application recovery method as a parameter to [CWinApp::RegisterWithRestartManager](#registerwithrestartmanager).

## <a name="closealldocuments"></a> CWinApp::CloseAllDocuments

Call this member function to close all open documents before exiting.

```cpp
void CloseAllDocuments(BOOL bEndSession);
```

### Parameters

*bEndSession*<br/>
Specifies whether or not the Windows session is being ended. It is TRUE if the session is being ended; otherwise FALSE.

### Remarks

Call [HideApplication](#hideapplication) before calling `CloseAllDocuments`.

## <a name="createprinterdc"></a> CWinApp::CreatePrinterDC

Call this member function to create a printer device context (DC) from the selected printer.

```
BOOL CreatePrinterDC(CDC& dc);
```

### Parameters

*dc*<br/>
A reference to a printer device context.

### Return Value

Nonzero if the printer device context is created successfully; otherwise 0.

### Remarks

`CreatePrinterDC` initializes the device context that you pass in by reference, so you can use it to print.

If the function is successful, when you have finished printing, you must destroy the device context. You can let the destructor of the [CDC](../../mfc/reference/cdc-class.md) object do it, or you can do it explicitly by calling [CDC::DeleteDC](../../mfc/reference/cdc-class.md#deletedc).

## <a name="cwinapp"></a> CWinApp::CWinApp

Constructs a `CWinApp` object and passes *lpszAppName* to be stored as the application name.

```
CWinApp(LPCTSTR lpszAppName = NULL);
```

### Parameters

*lpszAppName*<br/>
A null-terminated string that contains the application name that Windows uses. If this argument is not supplied or is NULL, `CWinApp` uses the resource string AFX_IDS_APP_TITLE or the filename of the executable file.

### Remarks

You should construct one global object of your `CWinApp`-derived class. You can have only one `CWinApp` object in your application. The constructor stores a pointer to the `CWinApp` object so that `WinMain` can call the object's member functions to initialize and run the application.

## <a name="delregtree"></a> CWinApp::DelRegTree

Deletes a specific registry key and all its subkeys.

```
LONG DelRegTree(
    HKEY hParentKey,
    const CString& strKeyName);

LONG DelRegTree(
    HKEY hParentKey,
    const CString& strKeyName,
    CAtlTransactionManager* pTM = NULL);
```

### Parameters

*hParentKey*<br/>
Handle to a registry key.

*strKeyName*<br/>
The name of the registry key to be deleted.

*pTM*<br/>
Pointer to CAtlTransactionManager object.

### Return Value

If the function succeeds, the return value is ERROR_SUCCESS. If the function fails, the return value is a nonzero error code defined in Winerror.h.

### Remarks

Call this function to delete the specified key and its subkeys.

## <a name="domessagebox"></a> CWinApp::DoMessageBox

The framework calls this member function to implement a message box for the global function [AfxMessageBox](cstring-formatting-and-message-box-display.md#afxmessagebox).

```
virtual int DoMessageBox(
    LPCTSTR lpszPrompt,
    UINT nType,
    UINT nIDPrompt);
```

### Parameters

*lpszPrompt*<br/>
Address of text in the message box.

*nType*<br/>
The message box [style](../../mfc/reference/styles-used-by-mfc.md#message-box-styles).

*nIDPrompt*<br/>
An index to a Help context string.

### Return Value

Returns the same values as `AfxMessageBox`.

### Remarks

Do not call this member function to open a message box; use `AfxMessageBox` instead.

Override this member function to customize your application-wide processing of `AfxMessageBox` calls.

## <a name="dowaitcursor"></a> CWinApp::DoWaitCursor

This member function is called by the framework to implement [CWaitCursor](../../mfc/reference/cwaitcursor-class.md), [CCmdTarget::BeginWaitCursor](../../mfc/reference/ccmdtarget-class.md#beginwaitcursor), [CCmdTarget::EndWaitCursor](../../mfc/reference/ccmdtarget-class.md#endwaitcursor), and [CCmdTarget::RestoreWaitCursor](../../mfc/reference/ccmdtarget-class.md#restorewaitcursor).

```
virtual void DoWaitCursor(int nCode);
```

### Parameters

*nCode*<br/>
If this parameter is 1, a wait cursor appears. If 0, the wait cursor is restored without incrementing the reference count. If -1, the wait cursor ends.

### Remarks

The default implements an hourglass cursor. `DoWaitCursor` maintains a reference count. When positive, the hourglass cursor is displayed.

While you would not normally call `DoWaitCursor` directly, you could override this member function to change the wait cursor or to do additional processing while the wait cursor is displayed.

For an easier, more streamlined way to implement a wait cursor, use `CWaitCursor`.

### Example

[!code-cpp[NVC_MFCWindowing#37](../../mfc/reference/codesnippet/cpp/cwinapp-class_3.cpp)]

## <a name="enabled2dsupport"></a> CWinApp::EnableD2DSupport

Visual Studio 2010 SP1 is required.

Enables application D2D support. Call this method before the main window is initialized.

```
BOOL EnableD2DSupport(
    D2D1_FACTORY_TYPE d2dFactoryType = D2D1_FACTORY_TYPE_SINGLE_THREADED,
    DWRITE_FACTORY_TYPE writeFactoryType = DWRITE_FACTORY_TYPE_SHARED);
```

### Parameters

*d2dFactoryType*<br/>
The threading model of the D2D factory and the resources it creates.

*writeFactoryType*<br/>
A value that specifies whether the write factory object will be shared or isolated

### Return Value

Returns TRUE if D2D support was enabled, FALSE - otherwise

## <a name="enablehtmlhelp"></a> CWinApp::EnableHtmlHelp

Call this member function from within the constructor of your `CWinApp`-derived class to use HTMLHelp for your application's help.

```cpp
void EnableHtmlHelp();
```

### Remarks

## <a name="enableshellopen"></a> CWinApp::EnableShellOpen

Call this function, typically from your `InitInstance` override, to enable your application's users to open data files when they double-click the files from within the Windows File Manager.

```cpp
void EnableShellOpen();
```

### Remarks

Call the `RegisterShellFileTypes` member function in conjunction with this function, or provide a .REG file with your application for manual registration of document types.

### Example

[!code-cpp[NVC_MFCWindowing#38](../../mfc/reference/codesnippet/cpp/cwinapp-class_4.cpp)]

## <a name="enabletaskbarinteraction"></a> CWinApp::EnableTaskbarInteraction

Enables Taskbar interaction.

```
BOOL EnableTaskbarInteraction(BOOL bEnable = TRUE);
```

### Parameters

*bEnable*<br/>
Specifies whether interaction with Windows 7 taskbar should be enabled (TRUE), or disabled (FALSE).

### Return Value

Returns TRUE if taskbar interaction can be enabled or disabled.

### Remarks

This method must be called before creation of main window, otherwise it asserts and returns FALSE.

## <a name="exitinstance"></a> CWinApp::ExitInstance

Called by the framework from within the `Run` member function to exit this instance of the application.

```
virtual int ExitInstance();
```

### Return Value

The application's exit code; 0 indicates no errors, and values greater than 0 indicate an error. This value is used as the return value from `WinMain`.

### Remarks

Do not call this member function from anywhere but within the `Run` member function.

The default implementation of this function writes framework options to the application's .INI file. Override this function to clean up when your application terminates.

### Example

[!code-cpp[NVC_MFCWindowing#39](../../mfc/reference/codesnippet/cpp/cwinapp-class_5.cpp)]

## <a name="getapplicationrecoveryparameter"></a> CWinApp::GetApplicationRecoveryParameter

Retrieves the input parameter for the application recovery method.

```
virtual LPVOID GetApplicationRecoveryParameter();
```

### Return Value

The default input parameter for the application recovery method.

### Remarks

The default behavior of this function returns NULL.

For more information, see [CWinApp::ApplicationRecoveryCallback](#applicationrecoverycallback).

## <a name="getapplicationrecoverypinginterval"></a> CWinApp::GetApplicationRecoveryPingInterval

Returns the length of time that the restart manager waits for the recovery callback function to return.

```
virtual DWORD GetApplicationRecoveryPingInterval();
```

### Return Value

The length of time in milliseconds.

### Remarks

When an application that is registered with the restart manager exits unexpectedly, the application tries to save open documents and calls the recovery callback function. The default recovery callback function is [CWinApp::ApplicationRecoveryCallback](#applicationrecoverycallback).

The length of time that the framework waits for the recovery callback function to return is the ping interval. You can customize the ping interval by overriding `CWinApp::GetApplicationRecoveryPingInterval` or by providing a custom value to `RegisterWithRestartManager`.

## <a name="getapplicationrestartflags"></a> CWinApp::GetApplicationRestartFlags

Returns the flags for the restart manager.

```
virtual DWORD GetApplicationRestartFlags();
```

### Return Value

The flags for the restart manager. The default implementation returns 0.

### Remarks

The flags for the restart manager have no effect with the default implementation. They are provided for future use.

You set the flags when you register the application with the restart manager by using [CWinApp::RegisterWithRestartManager](#registerwithrestartmanager).

The possible values for the restart manager flags are as follows:

- RESTART_NO_CRASH

- RESTART_NO_HANG

- RESTART_NO_PATCH

- RESTART_NO_REBOOT

## <a name="getappregistrykey"></a> CWinApp::GetAppRegistryKey

Returns the key for HKEY_CURRENT_USER\\"Software"\RegistryKey\ProfileName.

```
HKEY GetAppRegistryKey(CAtlTransactionManager* pTM = NULL);
```

### Parameters

*pTM*<br/>
Pointer to a `CAtlTransactionManager` object.

### Return Value

Application key if the function succeeds; otherwise NULL.

### Remarks

## <a name="getdatarecoveryhandler"></a> CWinApp::GetDataRecoveryHandler

Gets the data recovery handler for this instance of the application.

```
virtual CDataRecoveryHandler *GetDataRecoveryHandler();
```

### Return Value

The data recovery handler for this instance of the application.

### Remarks

Each application that uses the restart manager must have one instance of the [CDataRecoveryHandler Class](../../mfc/reference/cdatarecoveryhandler-class.md). This class is responsible for monitoring open documents and autosaving files. The behavior of the `CDataRecoveryHandler` depends on the configuration of the restart manager. For more information, see [CDataRecoveryHandler Class](../../mfc/reference/cdatarecoveryhandler-class.md).

This method returns NULL on operating systems earlier than Windows Vista. The restart manager is not supported on operating systems earlier than Windows Vista.

If the application does not currently have a data recovery handler, this method creates one and returns a pointer to it.

## <a name="getfirstdoctemplateposition"></a> CWinApp::GetFirstDocTemplatePosition

Gets the position of the first document template in the application.

```
POSITION GetFirstDocTemplatePosition() const;
```

### Return Value

A POSITION value that can be used for iteration or object pointer retrieval; NULL if the list is empty.

### Remarks

Use the POSITION value returned in a call to [GetNextDocTemplate](#getnextdoctemplate) to get the first [CDocTemplate](../../mfc/reference/cdoctemplate-class.md) object.

## <a name="gethelpmode"></a> CWinApp::GetHelpMode

Retrieves the type of help used by the application.

```
AFX_HELP_TYPE GetHelpMode();
```

### Return Value

The help type used by the application. See [CWinApp::m_eHelpType](#m_ehelptype) for more information.

## <a name="getnextdoctemplate"></a> CWinApp::GetNextDocTemplate

Gets the document template identified by *pos*, then sets *pos* to the POSITION value.

```
CDocTemplate* GetNextDocTemplate(POSITION& pos) const;
```

### Parameters

*pos*<br/>
A reference to a POSITION value returned by a previous call to `GetNextDocTemplate` or [GetFirstDocTemplatePosition](#getfirstdoctemplateposition). The value is updated to the next position by this call.

### Return Value

A pointer to a [CDocTemplate](../../mfc/reference/cdoctemplate-class.md) object.

### Remarks

You can use `GetNextDocTemplate` in a forward iteration loop if you establish the initial position with a call to `GetFirstDocTemplatePosition`.

You must ensure that your POSITION value is valid. If it is invalid, then the Debug version of the Microsoft Foundation Class Library asserts.

If the retrieved document template is the last available, then the new value of *pos* is set to NULL.

## <a name="getprinterdevicedefaults"></a> CWinApp::GetPrinterDeviceDefaults

Call this member function to prepare a printer device context for printing.

```
BOOL GetPrinterDeviceDefaults(struct tagPDA* pPrintDlg);
```

### Parameters

*pPrintDlg*<br/>
A pointer to a [PRINTDLG](/windows/win32/api/commdlg/ns-commdlg-printdlga) structure.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

Retrieves the current printer defaults from the Windows .INI file as necessary, or uses the last printer configuration set by the user in Print Setup.

### Example

[!code-cpp[NVC_MFCWindowing#40](../../mfc/reference/codesnippet/cpp/cwinapp-class_6.cpp)]

## <a name="getprofilebinary"></a> CWinApp::GetProfileBinary

Call this member function to retrieve binary data from an entry within a specified section of the application's registry or .INI file.

```
BOOL GetProfileBinary(
    LPCTSTR lpszSection,
    LPCTSTR lpszEntry,
    LPBYTE* ppData,
    UINT* pBytes);
```

### Parameters

*lpszSection*<br/>
Points to a null-terminated string that specifies the section containing the entry.

*lpszEntry*<br/>
Points to a null-terminated string that contains the entry whose value is to be retrieved.

*ppData*<br/>
Points to a pointer that will receive the address of the data.

*pBytes*<br/>
Points to a UINT that will receive the size of the data (in bytes).

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

This member function is not case sensitive, so the strings in the *lpszSection* and *lpszEntry* parameters may differ in case.

> [!NOTE]
> `GetProfileBinary` allocates a buffer and returns its address in \* *ppData*. The caller is responsible for freeing the buffer using **delete []**.

> [!IMPORTANT]
> The data returned by this function is not necessarily NULL terminated, and the caller must perform validation. For more information, see [Avoiding Buffer Overruns](/windows/win32/SecBP/avoiding-buffer-overruns).

### Example

[!code-cpp[NVC_MFCWindowing#41](../../mfc/reference/codesnippet/cpp/cwinapp-class_7.cpp)]

For an additional example, see [CWinApp::WriteProfileBinary](#writeprofilebinary).

## <a name="getprofileint"></a> CWinApp::GetProfileInt

Call this member function to retrieve the value of an integer from an entry within a specified section of the application's registry or .INI file.

```
UINT GetProfileInt(
    LPCTSTR lpszSection,
    LPCTSTR lpszEntry,
    int nDefault);
```

### Parameters

*lpszSection*<br/>
Points to a null-terminated string that specifies the section containing the entry.

*lpszEntry*<br/>
Points to a null-terminated string that contains the entry whose value is to be retrieved.

*nDefault*<br/>
Specifies the default value to return if the framework cannot find the entry.

### Return Value

The integer value of the string that follows the specified entry if the function is successful. The return value is the value of the *nDefault* parameter if the function does not find the entry. The return value is 0 if the value that corresponds to the specified entry is not an integer.

This member function supports hexadecimal notation for the value in the .INI file. When you retrieve a signed integer, you should cast the value into an **`int`**.

### Remarks

This member function is not case sensitive, so the strings in the *lpszSection* and *lpszEntry* parameters may differ in case.

> [!IMPORTANT]
> The data returned by this function is not necessarily NULL terminated, and the caller must perform validation. For more information, see [Avoiding Buffer Overruns](/windows/win32/SecBP/avoiding-buffer-overruns).

### Example

[!code-cpp[NVC_MFCWindowing#42](../../mfc/reference/codesnippet/cpp/cwinapp-class_8.cpp)]

For an additional example, see [CWinApp::WriteProfileInt](#writeprofileint).

## <a name="getprofilestring"></a> CWinApp::GetProfileString

Call this member function to retrieve the string associated with an entry within the specified section in the application's registry or .INI file.

```
CString GetProfileString(
    LPCTSTR lpszSection,
    LPCTSTR lpszEntry,
    LPCTSTR lpszDefault = NULL);
```

### Parameters

*lpszSection*<br/>
Points to a null-terminated string that specifies the section containing the entry.

*lpszEntry*<br/>
Points to a null-terminated string that contains the entry whose string is to be retrieved. This value must not be NULL.

*lpszDefault*<br/>
Points to the default string value for the given entry if the entry cannot be found in the initialization file.

### Return Value

The return value is the string from the application's .INI file or *lpszDefault* if the string cannot be found. The maximum string length supported by the framework is _MAX_PATH. If *lpszDefault* is NULL, the return value is an empty string.

### Remarks

> [!IMPORTANT]
> The data returned by this function is not necessarily NULL terminated, and the caller must perform validation. For more information, see [Avoiding Buffer Overruns](/windows/win32/SecBP/avoiding-buffer-overruns).

### Example

[!code-cpp[NVC_MFCWindowing#43](../../mfc/reference/codesnippet/cpp/cwinapp-class_9.cpp)]

For another example, see the example for [CWinApp::GetProfileInt](#getprofileint).

## <a name="getsectionkey"></a> CWinApp::GetSectionKey

Returns the key for HKEY_CURRENT_USER\\"Software"\RegistryKey\AppName\lpszSection.

```
HKEY GetSectionKey(
    LPCTSTR lpszSection,
    CAtlTransactionManager* pTM = NULL);
```

### Parameters

*lpszSection*<br/>
The name of the key to be obtained.

*pTM*<br/>
Pointer to a `CAtlTransactionManager` object.

### Return Value

Section key if the function succeeds; otherwise NULL.

### Remarks

## <a name="hideapplication"></a> CWinApp::HideApplication

Call this member function to hide an application before closing the open documents.

```cpp
void HideApplication();
```

## <a name="htmlhelp"></a> CWinApp::HtmlHelp

Call this member function to invoke the HTMLHelp application.

```
virtual void HtmlHelp(
    DWORD_PTR dwData,
    UINT nCmd = 0x000F);
```

### Parameters

*dwData*<br/>
Specifies additional data. The value used depends on the value of the *nCmd* parameter. Defaults to `0x000F` which means [HH_HELP_CONTEXT](/previous-versions/windows/desktop/htmlhelp/hh-help-context-command).

*nCmd*<br/>
Specifies the type of help requested. For a list of possible values and how they affect the *dwData* parameter, see the *uCommand* parameter described in the [HtmlHelpW](/windows/win32/api/htmlhelp/nf-htmlhelp-htmlhelpw) or [HtmlHelpA](/windows/win32/api/htmlhelp/nf-htmlhelp-htmlhelpa) API functions in the Windows SDK.

### Remarks

The framework also calls this function to invoke the HTMLHelp application.

The framework will automatically close the HTMLHelp application when your application terminates.

## <a name="initinstance"></a> CWinApp::InitInstance

Windows allows several copies of the same program to run at the same time.

```
virtual BOOL InitInstance();
```

### Return Value

Nonzero if initialization is successful; otherwise 0.

### Remarks

Application initialization is conceptually divided into two sections: one-time application initialization that is done the first time the program runs, and instance initialization that runs each time a copy of the program runs, including the first time. The framework's implementation of `WinMain` calls this function.

Override `InitInstance` to initialize each new instance of your application running under Windows. Typically, you override `InitInstance` to construct your main window object and set the `CWinThread::m_pMainWnd` data member to point to that window. For more information on overriding this member function, see [CWinApp: The Application Class](../../mfc/cwinapp-the-application-class.md).

> [!NOTE]
> MFC applications must be initialized as single threaded apartment (STA). If you call [CoInitializeEx](/windows/win32/api/combaseapi/nf-combaseapi-coinitializeex) in your `InitInstance` override, specify COINIT_APARTMENTTHREADED (rather than COINIT_MULTITHREADED).

### Example

[!code-cpp[NVC_MFCListView#9](../../atl/reference/codesnippet/cpp/cwinapp-class_10.cpp)]

## <a name="istaskbarinteractionenabled"></a> CWinApp::IsTaskbarInteractionEnabled

Tells whether Windows 7 Taskbar interaction is enabled.

```
virtual BOOL IsTaskbarInteractionEnabled();
```

### Return Value

Returns TRUE if `EnableTaskbarInteraction` has been called and the Operating System is Windows 7 or higher.

### Remarks

Taskbar interaction means that MDI application displays the content of MDI children in separate tabbed thumbnails that appear when the mouse pointer is over the application taskbar button.

## <a name="loadcursor"></a> CWinApp::LoadCursor

Loads the cursor resource named by *lpszResourceName* or specified by *nIDResource* from the current executable file.

```
HCURSOR LoadCursor(LPCTSTR lpszResourceName) const;  HCURSOR LoadCursor(UINT nIDResource) const;
```

### Parameters

*lpszResourceName*<br/>
Points to a null-terminated string that contains the name of the cursor resource. You can use a `CString` for this argument.

*nIDResource*<br/>
ID of the cursor resource. For a list of resources, see [LoadCursor](/windows/win32/api/winuser/nf-winuser-loadcursorw) in the Windows SDK.

### Return Value

A handle to a cursor if successful; otherwise NULL.

### Remarks

`LoadCursor` loads the cursor into memory only if it has not been previously loaded; otherwise, it retrieves a handle of the existing resource.

Use the [LoadStandardCursor](#loadstandardcursor) or [LoadOEMCursor](#loadoemcursor) member function to access the predefined Windows cursors.

### Example

[!code-cpp[NVC_MFCWindowing#44](../../mfc/reference/codesnippet/cpp/cwinapp-class_11.cpp)]

## <a name="loadicon"></a> CWinApp::LoadIcon

Loads the icon resource named by *lpszResourceName* or specified by *nIDResource* from the executable file.

```
HICON LoadIcon(LPCTSTR lpszResourceName) const;  HICON LoadIcon(UINT nIDResource) const;
```

### Parameters

*lpszResourceName*<br/>
Points to a null-terminated string that contains the name of the icon resource. You can also use a `CString` for this argument.

*nIDResource*<br/>
ID number of the icon resource.

### Return Value

A handle to an icon if successful; otherwise NULL.

### Remarks

`LoadIcon` loads the icon only if it has not been previously loaded; otherwise, it retrieves a handle of the existing resource.

You can use the [LoadStandardIcon](#loadstandardicon) or [LoadOEMIcon](#loadoemicon) member function to access the predefined Windows icons.

> [!NOTE]
> This member function calls the Win32 API function [LoadIcon](/windows/win32/api/winuser/nf-winuser-loadiconw), which can only load an icon whose size conforms to the SM_CXICON and SM_CYICON system metric values.

## <a name="loadoemcursor"></a> CWinApp::LoadOEMCursor

Loads the Windows predefined cursor resource specified by *nIDCursor*.

```
HCURSOR LoadOEMCursor(UINT nIDCursor) const;
```

### Parameters

*nIDCursor*<br/>
An **OCR_** manifest constant identifier that specifies a predefined Windows cursor. You must have `#define OEMRESOURCE` before `#include \<afxwin.h>` to gain access to the **OCR_** constants in WINDOWS.H.

### Return Value

A handle to a cursor if successful; otherwise NULL.

### Remarks

Use the `LoadOEMCursor` or [LoadStandardCursor](#loadstandardcursor) member function to access the predefined Windows cursors.

### Example

[!code-cpp[NVC_MFCWindowing#45](../../mfc/reference/codesnippet/cpp/cwinapp-class_12.h)]

[!code-cpp[NVC_MFCWindowing#46](../../mfc/reference/codesnippet/cpp/cwinapp-class_13.cpp)]

## <a name="loadoemicon"></a> CWinApp::LoadOEMIcon

Loads the Windows predefined icon resource specified by *nIDIcon*.

```
HICON LoadOEMIcon(UINT nIDIcon) const;
```

### Parameters

*nIDIcon*<br/>
An **OIC_** manifest constant identifier that specifies a predefined Windows icon. You must have `#define OEMRESOURCE` before `#include \<afxwin.h>` to access the **OIC_** constants in WINDOWS.H.

### Return Value

A handle to an icon if successful; otherwise NULL.

### Remarks

Use the `LoadOEMIcon` or [LoadStandardIcon](#loadstandardicon) member function to access the predefined Windows icons.

## <a name="loadstandardcursor"></a> CWinApp::LoadStandardCursor

Loads the Windows predefined cursor resource that *lpszCursorName* specifies.

```
HCURSOR LoadStandardCursor(LPCTSTR lpszCursorName) const;
```

### Parameters

*lpszCursorName*<br/>
An **IDC_** manifest constant identifier that specifies a predefined Windows cursor. These identifiers are defined in WINDOWS.H. The following list shows the possible predefined values and meanings for *lpszCursorName*:

- IDC_ARROW Standard arrow cursor

- IDC_IBEAM Standard text-insertion cursor

- IDC_WAIT Hourglass cursor used when Windows performs a time-consuming task

- IDC_CROSS Cross-hair cursor for selection

- IDC_UPARROW Arrow that points straight up

- IDC_SIZE Obsolete and unsupported; use IDC_SIZEALL

- IDC_SIZEALL A four-pointed arrow. The cursor to use to resize a window.

- IDC_ICON Obsolete and unsupported. Use IDC_ARROW.

- IDC_SIZENWSE Two-headed arrow with ends at upper left and lower right

- IDC_SIZENESW Two-headed arrow with ends at upper right and lower left

- IDC_SIZEWE Horizontal two-headed arrow

- IDC_SIZENS Vertical two-headed arrow

### Return Value

A handle to a cursor if successful; otherwise NULL.

### Remarks

Use the `LoadStandardCursor` or [LoadOEMCursor](#loadoemcursor) member function to access the predefined Windows cursors.

### Example

[!code-cpp[NVC_MFCWindowing#47](../../mfc/reference/codesnippet/cpp/cwinapp-class_14.cpp)]

## <a name="loadstandardicon"></a> CWinApp::LoadStandardIcon

Loads the Windows predefined icon resource that *lpszIconName* specifies.

```
HICON LoadStandardIcon(LPCTSTR lpszIconName) const;
```

### Parameters

*lpszIconName*<br/>
A manifest constant identifier that specifies a predefined Windows icon. These identifiers are defined in WINDOWS.H. For a list of the possible predefined values and their descriptions, see the *lpIconName* parameter in [LoadIcon](/windows/win32/api/winuser/nf-winuser-loadiconw) in the Windows SDK.

### Return Value

A handle to an icon if successful; otherwise NULL.

### Remarks

Use the `LoadStandardIcon` or [LoadOEMIcon](#loadoemicon) member function to access the predefined Windows icons.

## <a name="loadstdprofilesettings"></a> CWinApp::LoadStdProfileSettings

Call this member function from within the [InitInstance](#initinstance) member function to enable and load the list of most recently used (MRU) files and last preview state.

```cpp
void LoadStdProfileSettings(UINT nMaxMRU = _AFX_MRU_COUNT);
```

### Parameters

*nMaxMRU*<br/>
The number of recently used files to track.

### Remarks

If *nMaxMRU* is 0, no MRU list will be maintained.

## <a name="m_bhelpmode"></a> CWinApp::m_bHelpMode

TRUE if the application is in Help context mode (conventionally invoked with SHIFT + F1); otherwise FALSE.

```
BOOL m_bHelpMode;
```

### Remarks

In Help context mode, the cursor becomes a question mark and the user can move it about the screen. Examine this flag if you want to implement special handling when in the Help mode. `m_bHelpMode` is a public variable of type BOOL.

## <a name="m_dwrestartmanagersupportflags"></a> CWinApp::m_dwRestartManagerSupportFlags

Flags that determine how the restart manager behaves.

```
DWORD m_dwRestartManagerSupportFlags;
```

### Remarks

To enable the restart manager, set `m_dwRestartManagerSupportFlags` to the behavior that you want. The following table shows the flags that are available.

|Flag|Description|
|-|-|
|AFX_RESTART_MANAGER_SUPPORT_RESTART|The application is registered by using [CWinApp::RegisterWithRestartManager](#registerwithrestartmanager). The restart manager is responsible for restarting the application if it unexpectedly exits.|
|- AFX_RESTART_MANAGER_SUPPORT_RECOVERY|The application is registered with the restart manager and the restart manager calls the recovery callback function when it restarts the application. The default recovery callback function is [CWinApp::ApplicationRecoveryCallback](#applicationrecoverycallback).|
|- AFX_RESTART_MANAGER_AUTOSAVE_AT_RESTART|Autosave is enabled and the restart manager autosaves any open documents when the application restarts.|
|- AFX_RESTART_MANAGER_AUTOSAVE_AT_INTERVAL|Autosave is enabled and the restart manager autosaves any open documents at a regular interval. The interval is defined by [CWinApp::m_nAutosaveInterval](#m_nautosaveinterval).|
|- AFX_RESTART_MANAGER_REOPEN_PREVIOUS_FILES|The restart manager opens previously open documents after restarting the application from an unexpected exit. The [CDataRecoveryHandler Class](../../mfc/reference/cdatarecoveryhandler-class.md) handles storing the list of open documents and restoring them.|
|- AFX_RESTART_MANAGER_RESTORE_AUTOSAVED_FILES|The restart manager prompts the user to restore autosaved files after restarting the application. The `CDataRecoveryHandler` class queries the user.|
|- AFX_RESTART_MANAGER_SUPPORT_NO_AUTOSAVE|The union of AFX_RESTART_MANAGER_SUPPORT_RESTART, AFX_RESTART_MANAGER_SUPPORT_RECOVER, and AFX_RESTART_MANAGER_REOPEN_PREVIOUS_FILES.|
|- AFX_RESTART_MANAGER_SUPPORT_ALL_ASPECTS|The union of AFX_RESTART_MANAGER_SUPPORT_NO_AUTOSAVE, AFX_RESTART_MANAGER_AUTOSAVE_AT_RESTART, AFX_RESTART_MANAGER_AUTOSAVE_AT_INTERVAL, and AFX_RESTART_MANAGER_RESTORE_AUTOSAVED_FILES.|
|- AFX_RESTART_MANAGER_SUPPORT_RESTART_ASPECTS|The union of AFX_RESTART_MANAGER_SUPPORT_RESTART, AFX_RESTART_MANAGER_AUTOSAVE_AT_RESTART, AFX_RESTART_MANAGER_REOPEN_PREVIOUS_FILES, and AFX_RESTART_MANAGER_RESTORE_AUTOSAVED_FILES.|
|- AFX_RESTART_MANAGER_SUPPORT_RECOVERY_ASPECTS|The union ofAFX_RESTART_MANAGER_SUPPORT_RECOVERY, AFX_RESTART_MANAGER_AUTOSAVE_AT_INTERVAL, AFX_RESTART_MANAGER_REOPEN_PREVIOUS_FILES, and AFX_RESTART_MANAGER_RESTORE_AUTOSAVED_FILES.|

## <a name="m_ehelptype"></a> CWinApp::m_eHelpType

The type of this data member is the enumerated type AFX_HELP_TYPE, which is defined within the `CWinApp` class.

```
AFX_HELP_TYPE m_eHelpType;
```

### Remarks

The AFX_HELP_TYPE enumeration is defined as follows:

```
enum AFX_HELP_TYPE {
    afxWinHelp = 0,
    afxHTMLHelp = 1
    };
```

- To set the application's help to HTML Help, call [SetHelpMode](#sethelpmode) and specify `afxHTMLHelp`.

- To set the application's help to WinHelp, call `SetHelpMode` and specify `afxWinHelp`.

## <a name="m_hinstance"></a> CWinApp::m_hInstance

Corresponds to the *hInstance* parameter passed by Windows to `WinMain`.

```
HINSTANCE m_hInstance;
```

### Remarks

The `m_hInstance` data member is a handle to the current instance of the application running under Windows. This is returned by the global function [AfxGetInstanceHandle](application-information-and-management.md#afxgetinstancehandle). `m_hInstance` is a public variable of type HINSTANCE.

### Example

[!code-cpp[NVC_MFCWindowing#55](../../mfc/reference/codesnippet/cpp/cwinapp-class_15.cpp)]

## <a name="m_lpcmdline"></a> CWinApp::m_lpCmdLine

Corresponds to the *lpCmdLine* parameter passed by Windows to `WinMain`.

```
LPTSTR m_lpCmdLine;
```

### Remarks

Points to a null-terminated string that specifies the command line for the application. Use `m_lpCmdLine` to access any command-line arguments the user entered when the application was started. `m_lpCmdLine` is a public variable of type LPTSTR.

### Example

[!code-cpp[NVC_MFCWindowing#52](../../mfc/reference/codesnippet/cpp/cwinapp-class_16.cpp)]

## <a name="m_nautosaveinterval"></a> CWinApp::m_nAutosaveInterval

The length of time in milliseconds between autosaves.

```
int m_nAutosaveInterval;
```

### Remarks

You can configure the restart manager to autosave open documents at set intervals. If your application does not autosave files, this parameter has no effect.

## <a name="m_ncmdshow"></a> CWinApp::m_nCmdShow

Corresponds to the *nCmdShow* parameter passed by Windows to `WinMain`.

```
int m_nCmdShow;
```

### Remarks

You should pass `m_nCmdShow` as an argument when you call [CWnd::ShowWindow](../../mfc/reference/cwnd-class.md#showwindow) for your application's main window. `m_nCmdShow` is a public variable of type **`int`**.

### Example

[!code-cpp[NVC_MFCWindowing#56](../../mfc/reference/codesnippet/cpp/cwinapp-class_17.cpp)]

## <a name="m_pactivewnd"></a> CWinApp::m_pActiveWnd

Use this data member to store a pointer to the main window of the OLE container application that has your OLE server application in-place activated.

### Remarks

If this data member is NULL, the application is not in-place active.

The framework sets this member variable when the frame window is in-place activated by an OLE container application.

## <a name="m_pdatarecoveryhandler"></a> CWinApp::m_pDataRecoveryHandler

Pointer to the data recovery handler for the application.

```
CDataRecoveryHandler* m_pDataRecoveryHandler;
```

### Remarks

The data recovery handler of an application monitors open documents and autosaves them. The framework uses the data recovery handler to restore autosaved files when an application restarts after it exits unexpectedly. For more information, see [CDataRecoveryHandler Class](../../mfc/reference/cdatarecoveryhandler-class.md).

## <a name="m_pszappname"></a> CWinApp::m_pszAppName

Specifies the name of the application.

```
LPCTSTR m_pszAppName;
```

### Remarks

The application name can come from the parameter passed to the [CWinApp](#cwinapp) constructor, or, if not specified, to the resource string with the ID of AFX_IDS_APP_TITLE. If the application name is not found in the resource, it comes from the program's .EXE filename.

Returned by the global function [AfxGetAppName](application-information-and-management.md#afxgetappname). `m_pszAppName` is a public variable of type **const char**<strong>\*</strong>.

> [!NOTE]
> If you assign a value to `m_pszAppName`, it must be dynamically allocated on the heap. The `CWinApp` destructor calls **free**( ) with this pointer. You many want to use the `_tcsdup`( ) run-time library function to do the allocating. Also, free the memory associated with the current pointer before assigning a new value. For example:

[!code-cpp[NVC_MFCWindowing#57](../../mfc/reference/codesnippet/cpp/cwinapp-class_18.cpp)]

### Example

[!code-cpp[NVC_MFCWindowing#65](../../mfc/reference/codesnippet/cpp/cwinapp-class_19.cpp)]

## <a name="m_pszexename"></a> CWinApp::m_pszExeName

Contains the name of the application's executable file without an extension.

```
LPCTSTR m_pszExeName;
```

### Remarks

Unlike [m_pszAppName](#m_pszappname), this name cannot contain blanks. `m_pszExeName` is a public variable of type **const char**<strong>\*</strong>.

> [!NOTE]
> If you assign a value to `m_pszExeName`, it must be dynamically allocated on the heap. The `CWinApp` destructor calls **free**( ) with this pointer. You many want to use the `_tcsdup`( ) run-time library function to do the allocating. Also, free the memory associated with the current pointer before assigning a new value. For example:

[!code-cpp[NVC_MFCWindowing#58](../../mfc/reference/codesnippet/cpp/cwinapp-class_20.cpp)]

## <a name="m_pszhelpfilepath"></a> CWinApp::m_pszHelpFilePath

Contains the path to the application's Help file.

```
LPCTSTR m_pszHelpFilePath;
```

### Remarks

By default, the framework initializes `m_pszHelpFilePath` to the name of the application with ".HLP" appended. To change the name of the help file, set `m_pszHelpFilePath` to point to a string that contains the complete name of the desired help file. A convenient place to do this is in the application's [InitInstance](#initinstance) function. `m_pszHelpFilePath` is a public variable of type **const char**<strong>\*</strong>.

> [!NOTE]
> If you assign a value to `m_pszHelpFilePath`, it must be dynamically allocated on the heap. The `CWinApp` destructor calls **free**( ) with this pointer. You many want to use the `_tcsdup`( ) run-time library function to do the allocating. Also, free the memory associated with the current pointer before assigning a new value. For example:

[!code-cpp[NVC_MFCWindowing#59](../../mfc/reference/codesnippet/cpp/cwinapp-class_21.cpp)]

## <a name="m_pszprofilename"></a> CWinApp::m_pszProfileName

Contains the name of the application's .INI file.

```
LPCTSTR m_pszProfileName;
```

### Remarks

`m_pszProfileName` is a public variable of type **const char**<strong>\*</strong>.

> [!NOTE]
> If you assign a value to `m_pszProfileName`, it must be dynamically allocated on the heap. The `CWinApp` destructor calls **free**( ) with this pointer. You many want to use the `_tcsdup`( ) run-time library function to do the allocating. Also, free the memory associated with the current pointer before assigning a new value. For example:

[!code-cpp[NVC_MFCWindowing#60](../../mfc/reference/codesnippet/cpp/cwinapp-class_22.cpp)]

## <a name="m_pszregistrykey"></a> CWinApp::m_pszRegistryKey

Used to determine where, in the registry or INI file, application profile settings are stored.

```
LPCTSTR m_pszRegistryKey;
```

### Remarks

Normally, this data member is treated as read-only.

- The value is stored to a registry key. The name for the application profile setting is appended to the following registry key: HKEY_CURRENT_USER/Software/LocalAppWizard-Generated/.

If you assign a value to `m_pszRegistryKey`, it must be dynamically allocated on the heap. The `CWinApp` destructor calls **free**( ) with this pointer. You many want to use the `_tcsdup`( ) run-time library function to do the allocating. Also, free the memory associated with the current pointer before assigning a new value. For example:

[!code-cpp[NVC_MFCWindowing#61](../../mfc/reference/codesnippet/cpp/cwinapp-class_23.cpp)]

## <a name="m_pszappid"></a> CWinApp::m_pszAppID

Application User Model ID.

```
LPCTSTR m_pszAppID;
```

### Remarks

## <a name="oncontexthelp"></a> CWinApp::OnContextHelp

Handles SHIFT+F1 Help within the application.

```
afx_msg void OnContextHelp();
```

### Remarks

You must add an `ON_COMMAND( ID_CONTEXT_HELP, OnContextHelp )` statement to your `CWinApp` class message map and also add an accelerator table entry, typically SHIFT+F1, to enable this member function.

`OnContextHelp` puts the application into Help mode. The cursor changes to an arrow and a question mark, and the user can then move the mouse pointer and press the left mouse button to select a dialog box, window, menu, or command button. This member function retrieves the Help context of the object under the cursor and calls the Windows function WinHelp with that Help context.

## <a name="onddecommand"></a> CWinApp::OnDDECommand

Called by the framework when the main frame window receives a DDE execute message.

```
virtual BOOL OnDDECommand(LPTSTR lpszCommand);
```

### Parameters

*lpszCommand*<br/>
Points to a DDE command string received by the application.

### Return Value

Nonzero if the command is handled; otherwise 0.

### Remarks

The default implementation checks whether the command is a request to open a document and, if so, opens the specified document. The Windows File Manager usually sends such DDE command strings when the user double-clicks a data file. Override this function to handle other DDE execute commands, such as the command to print.

### Example

[!code-cpp[NVC_MFCWindowing#48](../../mfc/reference/codesnippet/cpp/cwinapp-class_24.cpp)]

## <a name="onfilenew"></a> CWinApp::OnFileNew

Implements the ID_FILE_NEW command.

```
afx_msg void OnFileNew();
```

### Remarks

You must add an `ON_COMMAND( ID_FILE_NEW, OnFileNew )` statement to your `CWinApp` class message map to enable this member function. If enabled, this function handles execution of the File New command.

See [Technical Note 22](../../mfc/tn022-standard-commands-implementation.md) for information on default behavior and guidance on how to override this member function.

### Example

[!code-cpp[NVC_MFCWindowing#49](../../mfc/reference/codesnippet/cpp/cwinapp-class_25.cpp)]

[!code-cpp[NVC_MFCWindowing#50](../../mfc/reference/codesnippet/cpp/cwinapp-class_26.cpp)]

## <a name="onfileopen"></a> CWinApp::OnFileOpen

Implements the ID_FILE_OPEN command.

```
afx_msg void OnFileOpen();
```

### Remarks

You must add an `ON_COMMAND( ID_FILE_OPEN, OnFileOpen )` statement to your `CWinApp` class message map to enable this member function. If enabled, this function handles execution of the File Open command.

For information on default behavior and guidance on how to override this member function, see [Technical Note 22](../../mfc/tn022-standard-commands-implementation.md).

### Example

[!code-cpp[NVC_MFCWindowing#49](../../mfc/reference/codesnippet/cpp/cwinapp-class_25.cpp)]

[!code-cpp[NVC_MFCWindowing#50](../../mfc/reference/codesnippet/cpp/cwinapp-class_26.cpp)]

## <a name="onfileprintsetup"></a> CWinApp::OnFilePrintSetup

Implements the ID_FILE_PRINT_SETUP command.

```
afx_msg void OnFilePrintSetup();
```

### Remarks

You must add an `ON_COMMAND( ID_FILE_PRINT_SETUP, OnFilePrintSetup )` statement to your `CWinApp` class message map to enable this member function. If enabled, this function handles execution of the File Print command.

For information on default behavior and guidance on how to override this member function, see [Technical Note 22](../../mfc/tn022-standard-commands-implementation.md).

### Example

[!code-cpp[NVC_MFCWindowing#49](../../mfc/reference/codesnippet/cpp/cwinapp-class_25.cpp)]

[!code-cpp[NVC_MFCWindowing#50](../../mfc/reference/codesnippet/cpp/cwinapp-class_26.cpp)]

## <a name="onhelp"></a> CWinApp::OnHelp

Handles F1 Help within the application (using the current context).

```
afx_msg void OnHelp();
```

### Remarks

Usually you will also add an accelerator-key entry for the F1 key. Enabling the F1 key is only a convention, not a requirement.

You must add an `ON_COMMAND( ID_HELP, OnHelp )` statement to your `CWinApp` class message map to enable this member function. If enabled, called by the framework when the user presses the F1 key.

The default implementation of this message-handler function determines the Help context that corresponds to the current window, dialog box, or menu item and then calls WINHELP.EXE. If no context is currently available, the function uses the default context.

Override this member function to set the Help context to something other than the window, dialog box, menu item, or toolbar button that currently has the focus. Call `WinHelp` with the desired Help context ID.

## <a name="onhelpfinder"></a> CWinApp::OnHelpFinder

Handles the ID_HELP_FINDER and ID_DEFAULT_HELP commands.

```
afx_msg void OnHelpFinder();
```

### Remarks

You must add an `ON_COMMAND( ID_HELP_FINDER, OnHelpFinder )` statement to your `CWinApp` class message map to enable this member function. If enabled, the framework calls this message-handler function when the user of your application selects the Help Finder command to invoke `WinHelp` with the standard **HELP_FINDER** topic.

## <a name="onhelpindex"></a> CWinApp::OnHelpIndex

Handles the ID_HELP_INDEX command and provides a default Help topic.

```
afx_msg void OnHelpIndex();
```

### Remarks

You must add an `ON_COMMAND( ID_HELP_INDEX, OnHelpIndex )` statement to your `CWinApp` class message map to enable this member function. If enabled, the framework calls this message-handler function when the user of your application selects the Help Index command to invoke `WinHelp` with the standard **HELP_INDEX** topic.

## <a name="onhelpusing"></a> CWinApp::OnHelpUsing

Handles the ID_HELP_USING command.

```
afx_msg void OnHelpUsing();
```

### Remarks

You must add an `ON_COMMAND( ID_HELP_USING, OnHelpUsing )` statement to your `CWinApp` class message map to enable this member function. The framework calls this message-handler function when the user of your application selects the Help Using command to invoke the `WinHelp` application with the standard **HELP_HELPONHELP** topic.

## <a name="onidle"></a> CWinApp::OnIdle

Override this member function to perform idle-time processing.

```
virtual BOOL OnIdle(LONG lCount);
```

### Parameters

*lCount*<br/>
A counter incremented each time `OnIdle` is called when the application's message queue is empty. This count is reset to 0 each time a new message is processed. You can use the *lCount* parameter to determine the relative length of time the application has been idle without processing a message.

### Return Value

Nonzero to receive more idle processing time; 0 if no more idle time is needed.

### Remarks

`OnIdle` is called in the default message loop when the application's message queue is empty. Use your override to call your own background idle-handler tasks.

`OnIdle` should return 0 to indicate that no idle processing time is required. The *lCount* parameter is incremented each time `OnIdle` is called when the message queue is empty and resets to 0 each time a new message is processed. You can call your different idle routines based on this count.

The following summarizes idle loop processing:

1. If the message loop in the Microsoft Foundation Class Library checks the message queue and finds no pending messages, it calls `OnIdle` for the application object and supplies 0 as the *lCount* argument.

2. `OnIdle` performs some processing and returns a nonzero value to indicate it should be called again to do further processing.

3. The message loop checks the message queue again. If no messages are pending, it calls `OnIdle` again, incrementing the *lCount* argument.

4. Eventually, `OnIdle` finishes processing all its idle tasks and returns 0. This tells the message loop to stop calling `OnIdle` until the next message is received from the message queue, at which point the idle cycle restarts with the argument set to 0.

Do not perform lengthy tasks during `OnIdle` because your application cannot process user input until `OnIdle` returns.

> [!NOTE]
> The default implementation of `OnIdle` updates command user-interface objects such as menu items and toolbar buttons, and it performs internal data structure cleanup. Therefore, if you override `OnIdle`, you must call `CWinApp::OnIdle` with the `lCount` in your overridden version. First call all base-class idle processing (that is, until the base class `OnIdle` returns 0). If you need to perform work before the base-class processing completes, review the base-class implementation to select the proper *lCount* during which to do your work.

If you do not want `OnIdle` to be called whenever a message is retrieved from the message queue, you can override the [CWinThreadIsIdleMessage](../../mfc/reference/cwinthread-class.md#isidlemessage). If an application has set a very short timer, or if the system is sending the WM_SYSTIMER message, then `OnIdle` will be called repeatedly, and degrade performance.

### Example

The following two examples show how to use `OnIdle`. The first example processes two idle tasks using the *lCount* argument to prioritize the tasks. The first task is high priority, and you should do it whenever possible. The second task is less important and should be done only when there is a long pause in user input. Note the call to the base-class version of `OnIdle`. The second example manages a group of idle tasks with different priorities.

[!code-cpp[NVC_MFCWindowing#51](../../mfc/reference/codesnippet/cpp/cwinapp-class_27.cpp)]

## <a name="opendocumentfile"></a> CWinApp::OpenDocumentFile

The framework calls this method to open the named [CDocument](../../mfc/reference/cdocument-class.md) file for the application.

```
virtual CDocument* OpenDocumentFile(
    LPCTSTR lpszFileName
    BOOL bAddToMRU = TRUE);
```

### Parameters

*lpszFileName*<br/>
[in] The name of the file to be opened.

*bAddToMRU*<br/>
[in] TRUE indicates the document is one of the most recent files; FALSE indicates the document is not one of the most recent files.

### Return Value

A pointer to a `CDocument` if successful; otherwise NULL.

### Remarks

If a document that has that name is already open, the first frame window that contains that document will get the focus. If an application supports multiple document templates, the framework uses the file name extension to find the appropriate document template to try to load the document. If successful, the document template then creates a frame window and view for the document.

### Example

[!code-cpp[NVC_MFCWindowing#52](../../mfc/reference/codesnippet/cpp/cwinapp-class_16.cpp)]

## <a name="parsecommandline"></a> CWinApp::ParseCommandLine

Call this member function to parse the command line and send the parameters, one at a time, to [CCommandLineInfo::ParseParam](../../mfc/reference/ccommandlineinfo-class.md#parseparam).

```cpp
void ParseCommandLine(CCommandLineInfo& rCmdInfo);
```

### Parameters

*rCmdInfo*<br/>
A reference to a [CCommandLineInfo](../../mfc/reference/ccommandlineinfo-class.md) object.

### Remarks

When you start a new MFC project using the Application Wizard, the Application Wizard will create a local instance of `CCommandLineInfo`, and then call `ProcessShellCommand` and `ParseCommandLine` in the [InitInstance](#initinstance) member function. A command line follows the route described below:

1. After being created in `InitInstance`, the `CCommandLineInfo` object is passed to `ParseCommandLine`.

2. `ParseCommandLine` then calls `CCommandLineInfo::ParseParam` repeatedly, once for each parameter.

3. `ParseParam` fills the `CCommandLineInfo` object, which is then passed to [ProcessShellCommand](#processshellcommand).

4. `ProcessShellCommand` handles the command-line arguments and flags.

Note that you can call `ParseCommandLine` directly as needed.

For a description of the command-line flags, see [CCommandLineInfo::m_nShellCommand](../../mfc/reference/ccommandlineinfo-class.md#m_nshellcommand).

## <a name="pretranslatemessage"></a> CWinApp::PreTranslateMessage

Override this function to filter window messages before they are dispatched to the Windows functions [TranslateMessage](/windows/win32/api/winuser/nf-winuser-translatemessage) and [DispatchMessage](/windows/win32/api/winuser/nf-winuser-dispatchmessage) The default implementation performs accelerator-key translation, so you must call the `CWinApp::PreTranslateMessage` member function in your overridden version.

```
virtual BOOL PreTranslateMessage(MSG* pMsg);
```

### Parameters

*pMsg*<br/>
A pointer to a [MSG](/windows/win32/api/winuser/ns-winuser-msg) structure that contains the message to process.

### Return Value

Nonzero if the message was fully processed in `PreTranslateMessage` and should not be processed further. Zero if the message should be processed in the normal way.

## <a name="processmessagefilter"></a> CWinApp::ProcessMessageFilter

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
A pointer to a Windows [MSG](/windows/win32/api/winuser/ns-winuser-msg)tructure.

### Return Value

Nonzero if the message is processed; otherwise 0.

### Remarks

A hook function processes events before they are sent to the application's normal message processing.

If you override this advanced feature, be sure to call the base-class version to maintain the framework's hook processing.

## <a name="processshellcommand"></a> CWinApp::ProcessShellCommand

This member function is called by [InitInstance](#initinstance) to accept the parameters passed from the `CCommandLineInfo` object identified by *rCmdInfo*, and perform the indicated action.

```
BOOL ProcessShellCommand(CCommandLineInfo& rCmdInfo);
```

### Parameters

*rCmdInfo*<br/>
A reference to a [CCommandLineInfo](../../mfc/reference/ccommandlineinfo-class.md) object.

### Return Value

Nonzero if the shell command is processed successfully. If 0, return FALSE from [InitInstance](#initinstance).

### Remarks

When you start a new MFC project using the Application Wizard, the Application Wizard will create a local instance of `CCommandLineInfo`, and then call `ProcessShellCommand` and [ParseCommandLine](#parsecommandline) in the `InitInstance` member function. A command line follows the route described below:

1. After being created in `InitInstance`, the `CCommandLineInfo` object is passed to `ParseCommandLine`.

2. `ParseCommandLine` then calls [CCommandLineInfo::ParseParam](../../mfc/reference/ccommandlineinfo-class.md#parseparam) repeatedly, once for each parameter.

3. `ParseParam` fills the `CCommandLineInfo` object, which is then passed to `ProcessShellCommand`.

4. `ProcessShellCommand` handles the command-line arguments and flags.

The data members of the `CCommandLineInfo` object, identified by [CCommandLineInfo::m_nShellCommand](../../mfc/reference/ccommandlineinfo-class.md#m_nshellcommand), are of the following enumerated type, which is defined within the `CCommandLineInfo` class.

```
enum {
    FileNew,
    FileOpen,
    FilePrint,
    FilePrintTo,
    FileDDE
    };
```

For a brief description of each of these values, see `CCommandLineInfo::m_nShellCommand`.

## <a name="processwndprocexception"></a> CWinApp::ProcessWndProcException

The framework calls this member function whenever the handler does not catch an exception thrown in one of your application's message or command handlers.

```
virtual LRESULT ProcessWndProcException(
    CException* e,
    const MSG* pMsg);
```

### Parameters

*e*<br/>
A pointer to an uncaught exception.

*pMsg*<br/>
A [MSG](/windows/win32/api/winuser/ns-winuser-msg)tructure that contains information about the windows message that caused the framework to throw an exception.

### Return Value

The value that should be returned to Windows. Normally this is 0L for windows messages, 1L ( TRUE) for command messages.

### Remarks

Do not call this member function directly.

The default implementation of this member function creates a message box. If the uncaught exception originates with a menu, toolbar, or accelerator command failure, the message box displays a "Command failed" message; otherwise, it displays an "Internal application error" message.

Override this member function to provide global handling of your exceptions. Only call the base functionality if you wish the message box to be displayed.

## <a name="register"></a> CWinApp::Register

Performs any registration tasks not handled by `RegisterShellFileTypes`.

```
virtual BOOL Register();
```

### Return Value

Nonzero on success; otherwise 0.

### Remarks

The default implementation simply returns TRUE. Override this function to provide any customized registration steps.

## <a name="registershellfiletypes"></a> CWinApp::RegisterShellFileTypes

Call this member function to register all of your application's document types with the Windows File Manager.

```cpp
void RegisterShellFileTypes(BOOL bCompat = FALSE);
```

### Parameters

*bCompat*<br/>
[in] TRUE adds registration entries for shell commands Print and Print To, allowing a user to print files directly from the shell, or by dragging the file to a printer object. It also adds a DefaultIcon key. By default, this parameter is FALSE for backward compatibility.

### Remarks

This allows the user to open a data file created by your application by double-clicking it from within File Manager. Call `RegisterShellFileTypes` after you call [AddDocTemplate](#adddoctemplate) for each of the document templates in your application. Also call the [EnableShellOpen](#enableshellopen) member function when you call `RegisterShellFileTypes`.

`RegisterShellFileTypes` iterates through the list of [CDocTemplate](../../mfc/reference/cdoctemplate-class.md) objects that the application maintains and, for each document template, adds entries to the registration database that Windows maintains for file associations. File Manager uses these entries to open a data file when the user double-clicks it. This eliminates the need to ship a .REG file with your application.

> [!NOTE]
> `RegisterShellFileTypes` only works if the user runs the program with administrator rights. If the program does not have administrator rights, it cannot alter registry keys.

If the registration database already associates a given filename extension with another file type, no new association is created. See the `CDocTemplate` class for the format of strings necessary to register this information.

## <a name="registerwithrestartmanager"></a> CWinApp::RegisterWithRestartManager

Registers the application with the restart manager.

```
virtual HRESULT RegisterWithRestartManager(
    BOOL bRegisterRecoveryCallback,
    const CString& strRestartIdentifier);

virtual HRESULT RegisterWithRestartManager(
    LPCWSTR pwzCommandLineArgs,
    DWORD dwRestartFlags,
    APPLICATION_RECOVERY_CALLBACK pRecoveryCallback,
    LPVOID lpvParam,
    DWORD dwPingInterval,
    DWORD dwCallbackFlags);
```

### Parameters

*bRegisterRecoveryCallback*\
[in] TRUE indicates that this instance of the application uses a recovery callback function; FALSE indicates that it does not. The framework calls the recovery callback function when the application exits unexpectedly. For more information, see [CWinApp::ApplicationRecoveryCallback](#applicationrecoverycallback).

*strRestartIdentifier*\
[in] The unique string that identifies this instance of the restart manager. The restart manager identifier is unique for each instance of an application.

*pwzCommandLineArgs*\
[in] A string that contains any extra arguments from the command line.

*dwRestartFlags*\
[in] Optional flags for the restart manager. For more information, see the Remarks section.

*pRecoveryCallback*\
[in] The recovery callback function. This function must take a LPVOID parameter as input and return a DWORD. The default recovery callback function is `CWinApp::ApplicationRecoveryCallback`.

*lpvParam*\
[in] The input parameter for the recovery callback function. For more information, see [CWinApp::ApplicationRecoveryCallback](#applicationrecoverycallback).

*dwPingInterval*\
[in] The length of time that the restart manager waits for the recovery callback function to return. This parameter is in milliseconds.

*dwCallbackFlags*\
[in] Flags passed to the recovery callback function. Reserved for future use.

### Return Value

S_OK if the method is successful; otherwise an error code.

### Remarks

If your application uses the default MFC implementation for autosaving files, you should use the simple version of `RegisterWithRestartManager`. Use the complex version of `RegisterWithRestartManager` if you want to customize the autosave behavior of your application.

If you call this method with an empty string for *strRestartIdentifier*, `RegisterWithRestartManager` creates a unique identifier string for this instance of the restart manager.

When an application exits unexpectedly, the restart manager restarts the application from the command line and provides the unique restart identifier as an optional argument. In this scenario, the framework calls `RegisterWithRestartManager` two times. The first call comes from [CWinApp::InitInstance](#initinstance) with an empty string for the string identifier. Then, the method [CWinApp::ProcessShellCommand](#processshellcommand) calls `RegisterWithRestartManager` with the unique restart identifier.

After you register an application with the restart manager, the restart manager monitors the application. If the application exits unexpectedly, the restart manager calls the recovery callback function during the shut down process. The restart manager waits the *dwPingInterval* for a response from the recovery callback function. If the recovery callback function does not respond within this time, the application exits without executing the recovery callback function.

By default, the dwRestartFlags are not supported but are provided for future use. The possible values for *dwRestartFlags* are as follows:

- RESTART_NO_CRASH

- RESTART_NO_HANG

- RESTART_NO_PATCH

- RESTART_NO_REBOOT

## <a name="reopenpreviousfilesatrestart"></a> CWinApp::ReopenPreviousFilesAtRestart

Determines whether the restart manager reopens the files that were open when the application exited unexpectedly.

```
virtual BOOL ReopenPreviousFilesAtRestart() const;
```

### Return Value

TRUE indicates the restart manager reopens the previously open files; FALSE indicates the restart manager does not.

## <a name="restartinstance"></a> CWinApp::RestartInstance

Handles an application restart initiated by the restart manager.

```
virtual BOOL CWinApp::RestartInstance();
```

### Return Value

TRUE if the data recovery handler opens previously open documents; FALSE if the data recovery handler has an error or if there are no previously open documents.

### Remarks

When the restart manager restarts an application, the framework calls this method. This method retrieves the data recovery handler and restores the autosaved files. This method calls [CDataRecoveryHandler::RestoreAutosavedDocuments](../../mfc/reference/cdatarecoveryhandler-class.md#restoreautosaveddocuments) to determine whether the user wants to restore the autosaved files.

This method returns FALSE if the [CDataRecoveryHandler](../../mfc/reference/cdatarecoveryhandler-class.md) determines that there were no open documents. If there were no open documents, the application starts ordinarily.

## <a name="restoreautosavedfilesatrestart"></a> CWinApp::RestoreAutosavedFilesAtRestart

Determines whether the restart manager restores the autosaved files when it restarts the application.

```
virtual BOOL RestoreAutosavedFilesAtRestart() const;
```

### Return Value

TRUE indicates the restart manager restores autosaved files; FALSE indicates the restart manager does not.

## <a name="run"></a> CWinApp::Run

Provides a default message loop.

```
virtual int Run();
```

### Return Value

An **`int`** value that is returned by `WinMain`.

### Remarks

`Run` acquires and dispatches Windows messages until the application receives a WM_QUIT message. If the application's message queue currently contains no messages, `Run` calls [OnIdle](#onidle) to perform idle-time processing. Incoming messages go to the [PreTranslateMessage](#pretranslatemessage) member function for special processing and then to the Windows function `TranslateMessage` for standard keyboard translation; finally, the `DispatchMessage` Windows function is called.

`Run` is rarely overridden, but you can override it to provide special behavior.

## <a name="runautomated"></a> CWinApp::RunAutomated

Call this function to determine whether the " **/Automation**" or " **-Automation**" option is present, which indicates whether the server application was launched by a client application.

```
BOOL RunAutomated();
```

### Return Value

Nonzero if the option was found; otherwise 0.

### Remarks

If present, the option is removed from the command line. For more information on OLE Automation, see the article [Automation Servers](../../mfc/automation-servers.md).

## <a name="runembedded"></a> CWinApp::RunEmbedded

Call this function to determine whether the " **/Embedding**" or " **-Embedding**" option is present, which indicates whether the server application was launched by a client application.

```
BOOL RunEmbedded();
```

### Return Value

Nonzero if the option was found; otherwise 0.

### Remarks

If present, the option is removed from the command line. For more information on embedding, see the article [Servers: Implementing a Server](../../mfc/servers-implementing-a-server.md).

## <a name="saveallmodified"></a> CWinApp::SaveAllModified

Called by the framework to save all documents when the application's main frame window is to be closed, or through a WM_QUERYENDSESSION message.

```
virtual BOOL SaveAllModified();
```

### Return Value

Nonzero if safe to terminate the application; 0 if not safe to terminate the application.

### Remarks

The default implementation of this member function calls the [CDocument::SaveModified](../../mfc/reference/cdocument-class.md#savemodified) member function in turn for all modified documents within the application.

## <a name="selectprinter"></a> CWinApp::SelectPrinter

Call this member function to select a specific printer, and release the printer that was previously selected in the Print Dialog box.

```cpp
void SelectPrinter(
    HANDLE hDevNames,
    HANDLE hDevMode,
    BOOL bFreeOld = TRUE);
```

### Parameters

*hDevNames*<br/>
A handle to a [DEVNAMES](/windows/win32/api/commdlg/ns-commdlg-devnames)tructure that identifies the driver, device, and output port names of a specific printer.

*hDevMode*<br/>
A handle to a [DEVMODE](/windows/win32/api/wingdi/ns-wingdi-devmodea) structure that specifies information about the device initialization and environment of a printer.

*bFreeOld*<br/>
Frees the previously-selected printer.

### Remarks

If both *hDevMode* and *hDevNames* are NULL, `SelectPrinter` uses the current default printer.

## <a name="sethelpmode"></a> CWinApp::SetHelpMode

Sets the application's help type.

```cpp
void SetHelpMode(AFX_HELP_TYPE eHelpType);
```

### Parameters

*eHelpType*<br/>
Specifies the type of help to use. See [CWinApp::m_eHelpType](#m_ehelptype) for more information.

### Remarks

Sets the application's Help type.

To set your application's Help type to HTMLHelp, you can call [EnableHTMLHelp](#enablehtmlhelp). Once you call `EnableHTMLHelp`, your application must use HTMLHelp as its help application. If you want to change to use WinHelp, you can call `SetHelpMode` and set *eHelpType* to `afxWinHelp`.

## <a name="setregistrykey"></a> CWinApp::SetRegistryKey

Causes application settings to be stored in the registry instead of INI files.

```cpp
void SetRegistryKey(LPCTSTR lpszRegistryKey);
void SetRegistryKey(UINT nIDRegistryKey);
```

### Parameters

*lpszRegistryKey*<br/>
Pointer to a string containing the name of the key.

*nIDRegistryKey*<br/>
ID of a string resource containing the name of the registry key.

### Remarks

This function sets *m_pszRegistryKey*, which is then used by the `GetProfileInt`, `GetProfileString`, `WriteProfileInt`, and `WriteProfileString` member functions of `CWinApp`. If this function has been called, the list of most recently-used (MRU) files is also stored in the registry. The registry key is usually the name of a company. It is stored in a key of the following form: HKEY_CURRENT_USER\Software\\<company name\>\\<application name\>\\<section name\>\\<value name\>.

## <a name="supportsapplicationrecovery"></a> CWinApp::SupportsApplicationRecovery

Determines whether the restart manager recovers an application that exited unexpectedly.

```
virtual BOOL SupportsApplicationRecovery() const;
```

### Return Value

TRUE indicates the restart manager recovers the application; FALSE indicates the restart manager does not.

## <a name="supportsautosaveatinterval"></a> CWinApp::SupportsAutosaveAtInterval

Determines whether the restart manager autosaves open documents at a regular interval.

```
virtual BOOL SupportsAutosaveAtInterval() const;
```

### Return Value

TRUE indicates the restart manager autosaves open documents; FALSE indicates the restart manager does not.

## <a name="supportsautosaveatrestart"></a> CWinApp::SupportsAutosaveAtRestart

Determines whether the restart manager autosaves any open documents when the application restarts.

```
virtual BOOL SupportsAutosaveAtRestart() const;
```

### Return Value

TRUE indicates the restart manager autosaves open documents when the application restarts; FALSE indicates the restart manager does not.

## <a name="supportsrestartmanager"></a> CWinApp::SupportsRestartManager

Determines whether the application supports the restart manager.

```
virtual BOOL SupportsRestartManager() const;
```

### Return Value

TRUE indicates the application supports the restart manager; FALSE indicates the application does not.

## <a name="unregister"></a> CWinApp::Unregister

Unregisters all files registered by the application object.

```
virtual BOOL Unregister();
```

### Return Value

Nonzero on success; otherwise 0.

### Remarks

The `Unregister` function undoes the registration performed by the application object and the [Register](#register) function. Normally, both functions are called implicitly by MFC and therefore will not appear in your code.

Override this function to perform custom unregistration steps.

## <a name="unregistershellfiletypes"></a> CWinApp::UnregisterShellFileTypes

Call this member function to unregister all of your application's document types with the Windows File Manager.

```cpp
void UnregisterShellFileTypes();
```

## <a name="winhelp"></a> CWinApp::WinHelp

Call this member function to invoke the WinHelp application.

```
virtual void WinHelp(
    DWORD_PTR dwData,
    UINT nCmd = HELP_CONTEXT);
```

### Parameters

*dwData*<br/>
Specifies additional data. The value used depends on the value of the *nCmd* parameter.

*nCmd*<br/>
Specifies the type of help requested. For a list of possible values and how they affect the *dwData* parameter, see the [WinHelp](/windows/win32/api/winuser/nf-winuser-winhelpw) Windows function.

### Remarks

The framework also calls this function to invoke the WinHelp application.

The framework will automatically close the WinHelp application when your application terminates.

### Example

[!code-cpp[NVC_MFCWindowing#53](../../mfc/reference/codesnippet/cpp/cwinapp-class_28.cpp)]

## <a name="writeprofilebinary"></a> CWinApp::WriteProfileBinary

Call this member function to write binary data into the specified section of the application's registry or .INI file.

```
BOOL WriteProfileBinary(
    LPCTSTR lpszSection,
    LPCTSTR lpszEntry,
    LPBYTE pData,
    UINT nBytes);
```

### Parameters

*lpszSection*<br/>
Points to a null-terminated string that specifies the section containing the entry. If the section does not exist, it is created. The name of the section is case independent; the string may be any combination of uppercase and lowercase letters.

*lpszEntry*<br/>
Points to a null-terminated string that contains the entry into which the value is to be written. If the entry does not exist in the specified section, it is created.

*pData*<br/>
Points to the data to be written.

*nBytes*<br/>
Contains the number of bytes to be written.

### Return Value

Nonzero if successful; otherwise 0.

### Example

This example uses `CWinApp* pApp = AfxGetApp();` to get at the CWinApp class illustrating a way that `WriteProfileBinary` and `GetProfileBinary` can be used from any function in an MFC application.

[!code-cpp[NVC_MFCWindowing#54](../../mfc/reference/codesnippet/cpp/cwinapp-class_29.cpp)]

For another example, see the example for [CWinApp::GetProfileBinary](#getprofilebinary).

## <a name="writeprofileint"></a> CWinApp::WriteProfileInt

Call this member function to write the specified value into the specified section of the application's registry or .INI file.

```
BOOL WriteProfileInt(
    LPCTSTR lpszSection,
    LPCTSTR lpszEntry,
    int nValue);
```

### Parameters

*lpszSection*<br/>
Points to a null-terminated string that specifies the section containing the entry. If the section does not exist, it is created. The name of the section is case independent; the string may be any combination of uppercase and lowercase letters.

*lpszEntry*<br/>
Points to a null-terminated string that contains the entry into which the value is to be written. If the entry does not exist in the specified section, it is created.

*nValue*<br/>
Contains the value to be written.

### Return Value

Nonzero if successful; otherwise 0.

### Example

This example uses `CWinApp* pApp = AfxGetApp();` to get at the CWinApp class illustrating a way that `WriteProfileString`, `WriteProfileInt`, `GetProfileString`, and `GetProfileInt` can be used from any function in an MFC application.

[!code-cpp[NVC_MFCWindowing#43](../../mfc/reference/codesnippet/cpp/cwinapp-class_9.cpp)]

For another example, see the example for [CWinApp::GetProfileInt](#getprofileint).

## <a name="writeprofilestring"></a> CWinApp::WriteProfileString

Call this member function to write the specified string into the specified section of the application's registry or .INI file.

```
BOOL WriteProfileString(
    LPCTSTR lpszSection,
    LPCTSTR lpszEntry,
    LPCTSTR lpszValue);
```

### Parameters

*lpszSection*<br/>
Points to a null-terminated string that specifies the section containing the entry. If the section does not exist, it is created. The name of the section is case independent; the string may be any combination of uppercase and lowercase letters.

*lpszEntry*<br/>
Points to a null-terminated string that contains the entry into which the value is to be written. If the entry does not exist in the specified section, it is created. If this parameter is NULL, the section specified by *lpszSection* is deleted.

*lpszValue*<br/>
Points to the string to be written. If this parameter is NULL, the entry specified by the *lpszEntry* parameter is deleted.

### Return Value

Nonzero if successful; otherwise 0.

### Example

[!code-cpp[NVC_MFCWindowing#43](../../mfc/reference/codesnippet/cpp/cwinapp-class_9.cpp)]

For another example, see the example for [CWinApp::GetProfileInt](#getprofileint).

## <a name="setappid"></a> CWinApp::SetAppID

Explicitly sets Application User Model ID for the application. This method should be called before any user interface is presented to the user (the best place is the application constructor).

```cpp
void SetAppID(LPCTSTR lpcszAppID);
```

### Parameters

*lpcszAppID*<br/>
Specifies the Application User Model ID.

### Remarks

## See also

[CWinThread Class](../../mfc/reference/cwinthread-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[How to: Add Restart Manager Support](../../mfc/how-to-add-restart-manager-support.md)
