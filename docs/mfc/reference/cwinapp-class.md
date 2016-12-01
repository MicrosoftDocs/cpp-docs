---
title: "CWinApp Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CWinApp"
  - "hInstance"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CWinApp class"
  - "application objects [C++]"
  - "HINSTANCE"
  - "main object"
ms.assetid: e426a3cd-0d15-40d6-bd55-beaa5feb2343
caps.latest.revision: 27
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
|[CWinApp::CWinApp](#cwinapp__cwinapp)|Constructs a `CWinApp` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CWinApp::AddDocTemplate](#cwinapp__adddoctemplate)|Adds a document template to the application's list of available document templates.|  
|[CWinApp::AddToRecentFileList](#cwinapp__addtorecentfilelist)|Adds a filename to the most recently used (MRU) file list.|  
|[CWinApp::ApplicationRecoveryCallback](#cwinapp__applicationrecoverycallback)|Called by the framework when the application unexpectedly exits.|  
|[CWinApp::CloseAllDocuments](#cwinapp__closealldocuments)|Closes all open documents.|  
|[CWinApp::CreatePrinterDC](#cwinapp__createprinterdc)|Creates a printer device context.|  
|[CWinApp::DelRegTree](#cwinapp__delregtree)|Deletes a specified key and all its subkeys.|  
|[CWinApp::DoMessageBox](#cwinapp__domessagebox)|Implements [AfxMessageBox](cstring-formatting-and-message-box-display.md#afxmessagebox) for the application.|  
|[CWinApp::DoWaitCursor](#cwinapp__dowaitcursor)|Turns the wait cursor on and off.|  
|[CWinApp::EnableD2DSupport](#cwinapp__enabled2dsupport)|Enables application `D2D` support. Call this method before the main window is initialized.|  
|[CWinApp::EnableHtmlHelp](#cwinapp__enablehtmlhelp)|Implements HTMLHelp for the application, rather than WinHelp.|  
|[CWinApp::EnableTaskbarInteraction](#cwinapp__enabletaskbarinteraction)|Enables Taskbar interaction.|  
|[CWinApp::ExitInstance](#cwinapp__exitinstance)|Override to clean up when your application terminates.|  
|[CWinApp::GetApplicationRecoveryParameter](#cwinapp__getapplicationrecoveryparameter)|Retrieves the input parameter for the application recovery method.|  
|[CWinApp::GetApplicationRecoveryPingInterval](#cwinapp__getapplicationrecoverypinginterval)|Returns the length of time that the restart manager waits for the recovery callback function to return.|  
|[CWinApp::GetApplicationRestartFlags](#cwinapp__getapplicationrestartflags)|Returns the flags for the restart manager.|  
|[CWinApp::GetAppRegistryKey](#cwinapp__getappregistrykey)|Returns key for HKEY_CURRENT_USER\\"Software"\RegistryKey\ProfileName.|  
|[CWinApp::GetDataRecoveryHandler](#cwinapp__getdatarecoveryhandler)|Gets the data recovery handler for this instance of the application.|  
|[CWinApp::GetFirstDocTemplatePosition](#cwinapp__getfirstdoctemplateposition)|Retrieves the position of the first document template.|  
|[CWinApp::GetHelpMode](#cwinapp__gethelpmode)|Retrieves the type of help used by the application.|  
|[CWinApp::GetNextDocTemplate](#cwinapp__getnextdoctemplate)|Retrieves the position of a document template. Can be used recursively.|  
|[CWinApp::GetPrinterDeviceDefaults](#cwinapp__getprinterdevicedefaults)|Retrieves the printer device defaults.|  
|[CWinApp::GetProfileBinary](#cwinapp__getprofilebinary)|Retrieves binary data from an entry in the application's .INI file.|  
|[CWinApp::GetProfileInt](#cwinapp__getprofileint)|Retrieves an integer from an entry in the application's .INI file.|  
|[CWinApp::GetProfileString](#cwinapp__getprofilestring)|Retrieves a string from an entry in the application's .INI file.|  
|[CWinApp::GetSectionKey](#cwinapp__getsectionkey)|Returns key for HKEY_CURRENT_USER\\"Software"\RegistryKey\AppName\lpszSection.|  
|[CWinApp::HideApplication](#cwinapp__hideapplication)|Hides the application before closing all documents.|  
|[CWinApp::HtmlHelp](#cwinapp__htmlhelp)|Calls the `HTMLHelp` Windows function.|  
|[CWinApp::InitInstance](#cwinapp__initinstance)|Override to perform Windows instance initialization, such as creating your window objects.|  
|[CWinApp::IsTaskbarInteractionEnabled](#cwinapp__istaskbarinteractionenabled)|Tells whether Windows 7 Taskbar interaction is enabled.|  
|[CWinApp::LoadCursor](#cwinapp__loadcursor)|Loads a cursor resource.|  
|[CWinApp::LoadIcon](#cwinapp__loadicon)|Loads an icon resource.|  
|[CWinApp::LoadOEMCursor](#cwinapp__loadoemcursor)|Loads a Windows OEM predefined cursor that the **OCR_** constants specify in WINDOWS.H.|  
|[CWinApp::LoadOEMIcon](#cwinapp__loadoemicon)|Loads a Windows OEM predefined icon that the **OIC_** constants specify in WINDOWS.H.|  
|[CWinApp::LoadStandardCursor](#cwinapp__loadstandardcursor)|Loads a Windows predefined cursor that the **IDC_** constants specify in WINDOWS.H.|  
|[CWinApp::LoadStandardIcon](#cwinapp__loadstandardicon)|Loads a Windows predefined icon that the **IDI_** constants specify in WINDOWS.H.|  
|[CWinApp::OnDDECommand](#cwinapp__onddecommand)|Called by the framework in response to a dynamic data exchange (DDE) execute command.|  
|[CWinApp::OnIdle](#cwinapp__onidle)|Override to perform application-specific idle-time processing.|  
|[CWinApp::OpenDocumentFile](#cwinapp__opendocumentfile)|Called by the framework to open a document from a file.|  
|[CWinApp::ParseCommandLine](#cwinapp__parsecommandline)|Parses individual parameters and flags in the command line.|  
|[CWinApp::PreTranslateMessage](#cwinapp__pretranslatemessage)|Filters messages before they are dispatched to the Windows functions [TranslateMessage](http://msdn.microsoft.com/library/windows/desktop/ms644955) and [DispatchMessage](http://msdn.microsoft.com/library/windows/desktop/ms644934).|  
|[CWinApp::ProcessMessageFilter](#cwinapp__processmessagefilter)|Intercepts certain messages before they reach the application.|  
|[CWinApp::ProcessShellCommand](#cwinapp__processshellcommand)|Handles command-line arguments and flags.|  
|[CWinApp::ProcessWndProcException](#cwinapp__processwndprocexception)|Intercepts all unhandled exceptions thrown by the application's message and command handlers.|  
|[CWinApp::Register](#cwinapp__register)|Performs customized registration.|  
|[CWinApp::RegisterWithRestartManager](#cwinapp__registerwithrestartmanager)|Registers the application with the restart manager.|  
|[CWinApp::ReopenPreviousFilesAtRestart](#cwinapp__reopenpreviousfilesatrestart)|Determines whether the restart manager reopens the files that were open when the application exited unexpectedly.|  
|[CWinApp::RestartInstance](#cwinapp__restartinstance)|Handles an application restart initiated by the restart manager.|  
|[CWinApp::RestoreAutosavedFilesAtRestart](#cwinapp__restoreautosavedfilesatrestart)|Determines whether the restart manager restores the autosaved files when it restarts the application.|  
|[CWinApp::Run](#cwinapp__run)|Runs the default message loop. Override to customize the message loop.|  
|[CWinApp::RunAutomated](#cwinapp__runautomated)|Tests the application's command line for the **/Automation** option. Obsolete. Instead, use the value in [CCommandLineInfo::m_bRunAutomated](../../mfc/reference/ccommandlineinfo-class.md#ccommandlineinfo__m_brunautomated) after calling [ParseCommandLine](#cwinapp__parsecommandline).|  
|[CWinApp::RunEmbedded](#cwinapp__runembedded)|Tests the application's command line for the **/Embedding** option. Obsolete. Instead, use the value in [CCommandLineInfo::m_bRunEmbedded](../../mfc/reference/ccommandlineinfo-class.md#ccommandlineinfo__m_brunembedded) after calling [ParseCommandLine](#cwinapp__parsecommandline).|  
|[CWinApp::SaveAllModified](#cwinapp__saveallmodified)|Prompts the user to save all modified documents.|  
|[CWinApp::SelectPrinter](#cwinapp__selectprinter)|Selects a printer previously indicated by a user through a print dialog box.|  
|[CWinApp::SetHelpMode](#cwinapp__sethelpmode)|Sets and initializes the type of help used by the application.|  
|[CWinApp::SupportsApplicationRecovery](#cwinapp__supportsapplicationrecovery)|Determines whether the restart manager recovers an application that exited unexpectedly.|  
|[CWinApp::SupportsAutosaveAtInterval](#cwinapp__supportsautosaveatinterval)|Determines whether the restart manager autosaves open documents at a regular interval.|  
|[CWinApp::SupportsAutosaveAtRestart](#cwinapp__supportsautosaveatrestart)|Determines whether the restart manager autosaves any open documents when the application restarts.|  
|[CWinApp::SupportsRestartManager](#cwinapp__supportsrestartmanager)|Determines whether the application supports the restart manager.|  
|[CWinApp::Unregister](#cwinapp__unregister)|Unregisters everything known to be registered by the `CWinApp` object.|  
|[CWinApp::WinHelp](#cwinapp__winhelp)|Calls the `WinHelp` Windows function.|  
|[CWinApp::WriteProfileBinary](#cwinapp__writeprofilebinary)|Writes binary data to an entry in the application's .INI file.|  
|[CWinApp::WriteProfileInt](#cwinapp__writeprofileint)|Writes an integer to an entry in the application's .INI file.|  
|[CWinApp::WriteProfileString](#cwinapp__writeprofilestring)|Writes a string to an entry in the application's .INI file.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CWinApp::EnableShellOpen](#cwinapp__enableshellopen)|Allows the user to open data files from the Windows File Manager.|  
|[CWinApp::LoadStdProfileSettings](#cwinapp__loadstdprofilesettings)|Loads standard .INI file settings and enables the MRU file list feature.|  
|[CWinApp::OnContextHelp](#cwinapp__oncontexthelp)|Handles SHIFT+F1 Help within the application.|  
|[CWinApp::OnFileNew](#cwinapp__onfilenew)|Implements the `ID_FILE_NEW` command.|  
|[CWinApp::OnFileOpen](#cwinapp__onfileopen)|Implements the `ID_FILE_OPEN` command.|  
|[CWinApp::OnFilePrintSetup](#cwinapp__onfileprintsetup)|Implements the `ID_FILE_PRINT_SETUP` command.|  
|[CWinApp::OnHelp](#cwinapp__onhelp)|Handles F1 Help within the application (using the current context).|  
|[CWinApp::OnHelpFinder](#cwinapp__onhelpfinder)|Handles the `ID_HELP_FINDER` and `ID_DEFAULT_HELP` commands.|  
|[CWinApp::OnHelpIndex](#cwinapp__onhelpindex)|Handles the `ID_HELP_INDEX` command and provides a default Help topic.|  
|[CWinApp::OnHelpUsing](#cwinapp__onhelpusing)|Handles the `ID_HELP_USING` command.|  
|[CWinApp::RegisterShellFileTypes](#cwinapp__registershellfiletypes)|Registers all the application's document types with the Windows File Manager.|  
|[CWinApp::SetAppID](#cwinapp__setappid)|Explicitly sets Application User Model ID for the application. This method should be called before any user interface is presented to user (the best place is the application constructor).|  
|[CWinApp::SetRegistryKey](#cwinapp__setregistrykey)|Causes application settings to be stored in the registry instead of .INI files.|  
|[CWinApp::UnregisterShellFileTypes](#cwinapp__unregistershellfiletypes)|Unregisters all the application's document types with the Windows File Manager.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CWinApp::m_bHelpMode](#cwinapp__m_bhelpmode)|Indicates if the user is in Help context mode (typically invoked with SHIFT+F1).|  
|[CWinApp::m_eHelpType](#cwinapp__m_ehelptype)|Specifies the type of help used by the application.|  
|[CWinApp::m_hInstance](#cwinapp__m_hinstance)|Identifies the current instance of the application.|  
|[CWinApp::m_lpCmdLine](#cwinapp__m_lpcmdline)|Points to a null-terminated string that specifies the command line for the application.|  
|[CWinApp::m_nCmdShow](#cwinapp__m_ncmdshow)|Specifies how the window is to be shown initially.|  
|[CWinApp::m_pActiveWnd](#cwinapp__m_pactivewnd)|Pointer to the main window of the container application when an OLE server is in-place active.|  
|[CWinApp::m_pszAppID](#cwinapp__m_pszappid)|Application User Model ID.|  
|[CWinApp::m_pszAppName](#cwinapp__m_pszappname)|Specifies the name of the application.|  
|[CWinApp::m_pszExeName](#cwinapp__m_pszexename)|The module name of the application.|  
|[CWinApp::m_pszHelpFilePath](#cwinapp__m_pszhelpfilepath)|The path to the application's Help file.|  
|[CWinApp::m_pszProfileName](#cwinapp__m_pszprofilename)|The application's .INI filename.|  
|[CWinApp::m_pszRegistryKey](#cwinapp__m_pszregistrykey)|Used to determine the full registry key for storing application profile settings.|  
  
### Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CWinApp::m_dwRestartManagerSupportFlags](#cwinapp__m_dwrestartmanagersupportflags)|Flags that determine how the restart manager behaves.|  
|[CWinApp::m_nAutosaveInterval](#cwinapp__m_nautosaveinterval)|The length of time in milliseconds between autosaves.|  
|[CWinApp::m_pDataRecoveryHandler](#cwinapp__m_pdatarecoveryhandler)|Pointer to the data recovery handler for the application.|  
  
## Remarks  
 An application object provides member functions for initializing your application (and each instance of it) and for running the application.  
  
 Each application that uses the Microsoft Foundation classes can only contain one object derived from `CWinApp`. This object is constructed when other C++ global objects are constructed and is already available when Windows calls the `WinMain` function, which is supplied by the Microsoft Foundation Class Library. Declare your derived `CWinApp` object at the global level.  
  
 When you derive an application class from `CWinApp`, override the [InitInstance](#cwinapp__initinstance) member function to create your application's main window object.  
  
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
  
 The **m_hPrevInstance** data member no longer exists. For information on detecting a previous instance of `CWinApp`, see the Knowledge Base article "How To Identify a Previous Instance of an Application" (KB106385) at [http://support.microsoft.com/default.aspxscid=kb;en-us;106385](http://support.microsoft.com/default.aspxscid=kb;en-us;106385).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWinThread](../../mfc/reference/cwinthread-class.md)  
  
 `CWinApp`  
  
## Requirements  
 **Header:** afxwin.h  
  
##  <a name="cwinapp__adddoctemplate"></a>  CWinApp::AddDocTemplate  
 Call this member function to add a document template to the list of available document templates that the application maintains.  
  
```  
void AddDocTemplate(CDocTemplate* pTemplate);
```  
  
### Parameters  
 `pTemplate`  
 A pointer to the `CDocTemplate` to be added.  
  
### Remarks  
 You should add all document templates to an application before you call [RegisterShellFileTypes](#cwinapp__registershellfiletypes).  
  
### Example  
 [!code-cpp[NVC_MFCWindowing#35](../../mfc/reference/codesnippet/cpp/cwinapp-class_1.cpp)]  
  
##  <a name="cwinapp__addtorecentfilelist"></a>  CWinApp::AddToRecentFileList  
 Call this member function to add `lpszPathName` to the MRU file list.  
  
```  
virtual void AddToRecentFileList(LPCTSTR lpszPathName);
```  
  
### Parameters  
 `lpszPathName`  
 The path of the file.  
  
### Remarks  
 You should call the [LoadStdProfileSettings](#cwinapp__loadstdprofilesettings) member function to load the current MRU file list before you use this member function.  
  
 The framework calls this member function when it opens a file or executes the Save As command to save a file with a new name.  
  
### Example  
 [!code-cpp[NVC_MFCWindowing#36](../../mfc/reference/codesnippet/cpp/cwinapp-class_2.cpp)]  
  
##  <a name="cwinapp__applicationrecoverycallback"></a>  CWinApp::ApplicationRecoveryCallback  
 Called by the framework when the application unexpectedly exits.  
  
```  
 
virtual DWORD ApplicationRecoveryCallback(
LPVOID lpvParam);
```  
  
### Parameters  
 [in] `lpvParam`  
 Reserved for future use.  
  
### Return Value  
 0 if this method is successful; nonzero if an error occurs.  
  
### Remarks  
 If your application supports the restart manager, the framework calls this function when your application unexpectedly exits.  
  
 The default implementation of `ApplicationRecoveryCallback` uses the `CDataRecoveryHandler` to save the list of currently open documents to the registry. This method does not autosave any files.  
  
 To customize the behavior, override this function in a derived [CWinApp Class](../../mfc/reference/cwinapp-class.md) or pass your own application recovery method as a parameter to [CWinApp::RegisterWithRestartManager](#cwinapp__registerwithrestartmanager).  
  
##  <a name="cwinapp__closealldocuments"></a>  CWinApp::CloseAllDocuments  
 Call this member function to close all open documents before exiting.  
  
```  
void CloseAllDocuments(BOOL bEndSession);
```  
  
### Parameters  
 `bEndSession`  
 Specifies whether or not the Windows session is being ended. It is **TRUE** if the session is being ended; otherwise **FALSE**.  
  
### Remarks  
 Call [HideApplication](#cwinapp__hideapplication) before calling `CloseAllDocuments`.  
  
##  <a name="cwinapp__createprinterdc"></a>  CWinApp::CreatePrinterDC  
 Call this member function to create a printer device context (DC) from the selected printer.  
  
```  
BOOL CreatePrinterDC(CDC& dc);
```  
  
### Parameters  
 `dc`  
 A reference to a printer device context.  
  
### Return Value  
 Nonzero if the printer device context is created successfully; otherwise 0.  
  
### Remarks  
 `CreatePrinterDC` initializes the device context that you pass in by reference, so you can use it to print.  
  
 If the function is successful, when you have finished printing, you must destroy the device context. You can let the destructor of the [CDC](../../mfc/reference/cdc-class.md) object do it, or you can do it explicitly by calling [CDC::DeleteDC](../../mfc/reference/cdc-class.md#cdc__deletedc).  
  
##  <a name="cwinapp__cwinapp"></a>  CWinApp::CWinApp  
 Constructs a `CWinApp` object and passes `lpszAppName` to be stored as the application name.  
  
```  
CWinApp(LPCTSTR lpszAppName = NULL);
```  
  
### Parameters  
 `lpszAppName`  
 A null-terminated string that contains the application name that Windows uses. If this argument is not supplied or is **NULL**, `CWinApp` uses the resource string **AFX_IDS_APP_TITLE** or the filename of the executable file.  
  
### Remarks  
 You should construct one global object of your `CWinApp`-derived class. You can have only one `CWinApp` object in your application. The constructor stores a pointer to the `CWinApp` object so that `WinMain` can call the object's member functions to initialize and run the application.  
  
##  <a name="cwinapp__delregtree"></a>  CWinApp::DelRegTree  
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
 *hParentKey*  
 Handle to a registry key.  
  
 *strKeyName*  
 The name of the registry key to be deleted.  
  
 *pTM*  
 Pointer to CAtlTransactionManager object.  
  
### Return Value  
 If the function succeeds, the return value is ERROR_SUCCESS. If the function fails, the return value is a nonzero error code defined in Winerror.h.  
  
### Remarks  
 Call this function to delete the specified key and its subkeys.  
  
##  <a name="cwinapp__domessagebox"></a>  CWinApp::DoMessageBox  
 The framework calls this member function to implement a message box for the global function [AfxMessageBox](cstring-formatting-and-message-box-display.md#afxmessagebox).  
  
```  
virtual int DoMessageBox(
    LPCTSTR lpszPrompt,  
    UINT nType,  
    UINT nIDPrompt);
```  
  
### Parameters  
 *lpszPrompt*  
 Address of text in the message box.  
  
 `nType`  
 The message box [style](../../mfc/reference/message-box-styles.md).  
  
 `nIDPrompt`  
 An index to a Help context string.  
  
### Return Value  
 Returns the same values as `AfxMessageBox`.  
  
### Remarks  
 Do not call this member function to open a message box; use `AfxMessageBox` instead.  
  
 Override this member function to customize your application-wide processing of `AfxMessageBox` calls.  
  
##  <a name="cwinapp__dowaitcursor"></a>  CWinApp::DoWaitCursor  
 This member function is called by the framework to implement [CWaitCursor](../../mfc/reference/cwaitcursor-class.md), [CCmdTarget::BeginWaitCursor](../../mfc/reference/ccmdtarget-class.md#ccmdtarget__beginwaitcursor), [CCmdTarget::EndWaitCursor](../../mfc/reference/ccmdtarget-class.md#ccmdtarget__endwaitcursor), and [CCmdTarget::RestoreWaitCursor](../../mfc/reference/ccmdtarget-class.md#ccmdtarget__restorewaitcursor).  
  
```  
virtual void DoWaitCursor(int nCode);
```  
  
### Parameters  
 `nCode`  
 If this parameter is 1, a wait cursor appears. If 0, the wait cursor is restored without incrementing the reference count. If –1, the wait cursor ends.  
  
### Remarks  
 The default implements an hourglass cursor. `DoWaitCursor` maintains a reference count. When positive, the hourglass cursor is displayed.  
  
 While you would not normally call `DoWaitCursor` directly, you could override this member function to change the wait cursor or to do additional processing while the wait cursor is displayed.  
  
 For an easier, more streamlined way to implement a wait cursor, use `CWaitCursor`.  
  
### Example  
 [!code-cpp[NVC_MFCWindowing#37](../../mfc/reference/codesnippet/cpp/cwinapp-class_3.cpp)]  
  
##  <a name="cwinapp__enabled2dsupport"></a>  CWinApp::EnableD2DSupport  
 [!INCLUDE[dev10_sp1required](../../mfc/reference/includes/dev10_sp1required_md.md)]  
  
 Enables application D2D support. Call this method before the main window is initialized.  
  
```  
 
BOOL EnableD2DSupport(
D2D1_FACTORY_TYPE d2dFactoryType = D2D1_FACTORY_TYPE_SINGLE_THREADED,  
DWRITE_FACTORY_TYPE writeFactoryType = DWRITE_FACTORY_TYPE_SHARED);
```  
  
### Parameters  
 `d2dFactoryType`  
 The threading model of the D2D factory and the resources it creates.  
  
 `writeFactoryType`  
 A value that specifies whether the write factory object will be shared or isolated  
  
### Return Value  
 Returns TRUE if D2D support was enabled, FALSE - otherwise  
  
##  <a name="cwinapp__enablehtmlhelp"></a>  CWinApp::EnableHtmlHelp  
 Call this member function from within the constructor of your `CWinApp`-derived class to use HTMLHelp for your application's help.  
  
```  
void EnableHtmlHelp();
```  
  
### Remarks  
  
##  <a name="cwinapp__enableshellopen"></a>  CWinApp::EnableShellOpen  
 Call this function, typically from your `InitInstance` override, to enable your application's users to open data files when they double-click the files from within the Windows File Manager.  
  
```  
void EnableShellOpen();
```  
  
### Remarks  
 Call the `RegisterShellFileTypes` member function in conjunction with this function, or provide a .REG file with your application for manual registration of document types.  
  
### Example  
 [!code-cpp[NVC_MFCWindowing#38](../../mfc/reference/codesnippet/cpp/cwinapp-class_4.cpp)]  
  
##  <a name="cwinapp__enabletaskbarinteraction"></a>  CWinApp::EnableTaskbarInteraction  
 Enables Taskbar interaction.  
  
```  
 
BOOL EnableTaskbarInteraction(
BOOL bEnable = TRUE);
```  
  
### Parameters  
 `bEnable`  
 Specifies whether interaction with Windows 7 taskbar should be enabled ( `TRUE`), or disabled ( `FALSE`).  
  
### Return Value  
 Returns `TRUE` if taskbar interaction can be enabled or disabled.  
  
### Remarks  
 This method must be called before creation of main window, otherwise it asserts and returns `FALSE`.  
  
##  <a name="cwinapp__exitinstance"></a>  CWinApp::ExitInstance  
 Called by the framework from within the **Run** member function to exit this instance of the application.  
  
```  
virtual int ExitInstance();
```  
  
### Return Value  
 The application's exit code; 0 indicates no errors, and values greater than 0 indicate an error. This value is used as the return value from `WinMain`.  
  
### Remarks  
 Do not call this member function from anywhere but within the **Run** member function.  
  
 The default implementation of this function writes framework options to the application's .INI file. Override this function to clean up when your application terminates.  
  
### Example  
 [!code-cpp[NVC_MFCWindowing#39](../../mfc/reference/codesnippet/cpp/cwinapp-class_5.cpp)]  
  
##  <a name="cwinapp__getapplicationrecoveryparameter"></a>  CWinApp::GetApplicationRecoveryParameter  
 Retrieves the input parameter for the application recovery method.  
  
```  
virtual LPVOID GetApplicationRecoveryParameter();
```  
  
### Return Value  
 The default input parameter for the application recovery method.  
  
### Remarks  
 The default behavior of this function returns `NULL`.  
  
 For more information, see [CWinApp::ApplicationRecoveryCallback](#cwinapp__applicationrecoverycallback).  
  
##  <a name="cwinapp__getapplicationrecoverypinginterval"></a>  CWinApp::GetApplicationRecoveryPingInterval  
 Returns the length of time that the restart manager waits for the recovery callback function to return.  
  
```  
virtual DWORD GetApplicationRecoveryPingInterval();
```  
  
### Return Value  
 The length of time in milliseconds.  
  
### Remarks  
 When an application that is registered with the restart manager exits unexpectedly, the application tries to save open documents and calls the recovery callback function. The default recovery callback function is [CWinApp::ApplicationRecoveryCallback](#cwinapp__applicationrecoverycallback).  
  
 The length of time that the framework waits for the recovery callback function to return is the ping interval. You can customize the ping interval by overriding `CWinApp::GetApplicationRecoveryPingInterval` or by providing a custom value to `RegisterWithRestartManager`.  
  
##  <a name="cwinapp__getapplicationrestartflags"></a>  CWinApp::GetApplicationRestartFlags  
 Returns the flags for the restart manager.  
  
```  
virtual DWORD GetApplicationRestartFlags();
```  
  
### Return Value  
 The flags for the restart manager. The default implementation returns 0.  
  
### Remarks  
 The flags for the restart manager have no effect with the default implementation. They are provided for future use.  
  
 You set the flags when you register the application with the restart manager by using [CWinApp::RegisterWithRestartManager](#cwinapp__registerwithrestartmanager).  
  
 The possible values for the restart manager flags are as follows:  
  
- `RESTART_NO_CRASH`  
  
- `RESTART_NO_HANG`  
  
- `RESTART_NO_PATCH`  
  
- `RESTART_NO_REBOOT`  
  
##  <a name="cwinapp__getappregistrykey"></a>  CWinApp::GetAppRegistryKey  
 Returns the key for HKEY_CURRENT_USER\\"Software"\RegistryKey\ProfileName.  
  
```  
 
HKEY GetAppRegistryKey(
CAtlTransactionManager* pTM = NULL);
```  
  
### Parameters  
 `pTM`  
 Pointer to a `CAtlTransactionManager` object.  
  
### Return Value  
 Application key if the function succeeds; otherwise `NULL`.  
  
### Remarks  
  
##  <a name="cwinapp__getdatarecoveryhandler"></a>  CWinApp::GetDataRecoveryHandler  
 Gets the data recovery handler for this instance of the application.  
  
```  
virtual CDataRecoveryHandler *GetDataRecoveryHandler();
```  
  
### Return Value  
 The data recovery handler for this instance of the application.  
  
### Remarks  
 Each application that uses the restart manager must have one instance of the [CDataRecoveryHandler Class](../../mfc/reference/cdatarecoveryhandler-class.md). This class is responsible for monitoring open documents and autosaving files. The behavior of the `CDataRecoveryHandler` depends on the configuration of the restart manager. For more information, see [CDataRecoveryHandler Class](../../mfc/reference/cdatarecoveryhandler-class.md).  
  
 This method returns `NULL` on operating systems earlier than [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)]. The restart manager is not supported on operating systems earlier than [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)].  
  
 If the application does not currently have a data recovery handler, this method creates one and returns a pointer to it.  
  
##  <a name="cwinapp__getfirstdoctemplateposition"></a>  CWinApp::GetFirstDocTemplatePosition  
 Gets the position of the first document template in the application.  
  
```  
POSITION GetFirstDocTemplatePosition() const;

 
```  
  
### Return Value  
 A **POSITION** value that can be used for iteration or object pointer retrieval; **NULL** if the list is empty.  
  
### Remarks  
 Use the **POSITION** value returned in a call to [GetNextDocTemplate](#cwinapp__getnextdoctemplate) to get the first [CDocTemplate](../../mfc/reference/cdoctemplate-class.md) object.  
  
##  <a name="cwinapp__gethelpmode"></a>  CWinApp::GetHelpMode  
 Retrieves the type of help used by the application.  
  
```  
AFX_HELP_TYPE GetHelpMode();
```  
  
### Return Value  
 The help type used by the application. See [CWinApp::m_eHelpType](#cwinapp__m_ehelptype) for more information.  
  
##  <a name="cwinapp__getnextdoctemplate"></a>  CWinApp::GetNextDocTemplate  
 Gets the document template identified by `pos`, then sets `pos` to the **POSITION** value.  
  
```  
CDocTemplate* GetNextDocTemplate(POSITION& pos) const;

 
```  
  
### Parameters  
 `pos`  
 A reference to a **POSITION** value returned by a previous call to `GetNextDocTemplate` or [GetFirstDocTemplatePosition](#cwinapp__getfirstdoctemplateposition). The value is updated to the next position by this call.  
  
### Return Value  
 A pointer to a [CDocTemplate](../../mfc/reference/cdoctemplate-class.md) object.  
  
### Remarks  
 You can use `GetNextDocTemplate` in a forward iteration loop if you establish the initial position with a call to `GetFirstDocTemplatePosition`.  
  
 You must ensure that your **POSITION** value is valid. If it is invalid, then the Debug version of the Microsoft Foundation Class Library asserts.  
  
 If the retrieved document template is the last available, then the new value of `pos` is set to **NULL**.  
  
##  <a name="cwinapp__getprinterdevicedefaults"></a>  CWinApp::GetPrinterDeviceDefaults  
 Call this member function to prepare a printer device context for printing.  
  
```  
BOOL GetPrinterDeviceDefaults(struct tagPDA* pPrintDlg);
```  
  
### Parameters  
 *pPrintDlg*  
 A pointer to a [PRINTDLG](http://msdn.microsoft.com/library/windows/desktop/ms646843) structure.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 Retrieves the current printer defaults from the Windows .INI file as necessary, or uses the last printer configuration set by the user in Print Setup.  
  
### Example  
 [!code-cpp[NVC_MFCWindowing#40](../../mfc/reference/codesnippet/cpp/cwinapp-class_6.cpp)]  
  
##  <a name="cwinapp__getprofilebinary"></a>  CWinApp::GetProfileBinary  
 Call this member function to retrieve binary data from an entry within a specified section of the application's registry or .INI file.  
  
```  
BOOL GetProfileBinary(
    LPCTSTR lpszSection,  
    LPCTSTR lpszEntry,  
    LPBYTE* ppData,  
    UINT* pBytes);
```  
  
### Parameters  
 *lpszSection*  
 Points to a null-terminated string that specifies the section containing the entry.  
  
 *lpszEntry*  
 Points to a null-terminated string that contains the entry whose value is to be retrieved.  
  
 *ppData*  
 Points to a pointer that will receive the address of the data.  
  
 *pBytes*  
 Points to a UINT that will receive the size of the data (in bytes).  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 This member function is not case sensitive, so the strings in the *lpszSection* and *lpszEntry* parameters may differ in case.  
  
> [!NOTE]
> **GetProfileBinary** allocates a buffer and returns its address in \* *ppData*. The caller is responsible for freeing the buffer using **delete []**.  
  
> [!IMPORTANT]
>  The data returned by this function is not necessarily NULL terminated, and the caller must perform validation. For more information, see [Avoiding Buffer Overruns](http://msdn.microsoft.com/library/windows/desktop/ms717795).  
  
### Example  
 [!code-cpp[NVC_MFCWindowing#41](../../mfc/reference/codesnippet/cpp/cwinapp-class_7.cpp)]  
  
 For an additional example, see [CWinApp::WriteProfileBinary](#cwinapp__writeprofilebinary).  
  
##  <a name="cwinapp__getprofileint"></a>  CWinApp::GetProfileInt  
 Call this member function to retrieve the value of an integer from an entry within a specified section of the application's registry or .INI file.  
  
```  
UINT GetProfileInt(
    LPCTSTR lpszSection,  
    LPCTSTR lpszEntry,  
    int nDefault);
```  
  
### Parameters  
 `lpszSection`  
 Points to a null-terminated string that specifies the section containing the entry.  
  
 `lpszEntry`  
 Points to a null-terminated string that contains the entry whose value is to be retrieved.  
  
 `nDefault`  
 Specifies the default value to return if the framework cannot find the entry.  
  
### Return Value  
 The integer value of the string that follows the specified entry if the function is successful. The return value is the value of the `nDefault` parameter if the function does not find the entry. The return value is 0 if the value that corresponds to the specified entry is not an integer.  
  
 This member function supports hexadecimal notation for the value in the .INI file. When you retrieve a signed integer, you should cast the value into an `int`.  
  
### Remarks  
 This member function is not case sensitive, so the strings in the `lpszSection` and `lpszEntry` parameters may differ in case.  
  
> [!IMPORTANT]
>  The data returned by this function is not necessarily NULL terminated, and the caller must perform validation. For more information, see [Avoiding Buffer Overruns](http://msdn.microsoft.com/library/windows/desktop/ms717795).  
  
### Example  
 [!code-cpp[NVC_MFCWindowing#42](../../mfc/reference/codesnippet/cpp/cwinapp-class_8.cpp)]  
  
 For an additional example, see [CWinApp::WriteProfileInt](#cwinapp__writeprofileint).  
  
##  <a name="cwinapp__getprofilestring"></a>  CWinApp::GetProfileString  
 Call this member function to retrieve the string associated with an entry within the specified section in the application's registry or .INI file.  
  
```  
CString GetProfileString(
    LPCTSTR lpszSection,  
    LPCTSTR lpszEntry,  
    LPCTSTR lpszDefault = NULL);
```  
  
### Parameters  
 `lpszSection`  
 Points to a null-terminated string that specifies the section containing the entry.  
  
 `lpszEntry`  
 Points to a null-terminated string that contains the entry whose string is to be retrieved. This value must not be **NULL**.  
  
 `lpszDefault`  
 Points to the default string value for the given entry if the entry cannot be found in the initialization file.  
  
### Return Value  
 The return value is the string from the application's .INI file or `lpszDefault` if the string cannot be found. The maximum string length supported by the framework is `_MAX_PATH`. If `lpszDefault` is **NULL**, the return value is an empty string.  
  
### Remarks  
  
> [!IMPORTANT]
>  The data returned by this function is not necessarily NULL terminated, and the caller must perform validation. For more information, see [Avoiding Buffer Overruns](http://msdn.microsoft.com/library/windows/desktop/ms717795).  
  
### Example  
 [!code-cpp[NVC_MFCWindowing#43](../../mfc/reference/codesnippet/cpp/cwinapp-class_9.cpp)]  
  
 For another example, see the example for [CWinApp::GetProfileInt](#cwinapp__getprofileint).  
  
##  <a name="cwinapp__getsectionkey"></a>  CWinApp::GetSectionKey  
 Returns the key for HKEY_CURRENT_USER\\"Software"\RegistryKey\AppName\lpszSection.  
  
```  
 
HKEY GetSectionKey(
LPCTSTR lpszSection,  
CAtlTransactionManager* pTM = NULL);
```  
  
### Parameters  
 `lpszSection`  
 The name of the key to be obtained.  
  
 `pTM`  
 Pointer to a `CAtlTransactionManager` object.  
  
### Return Value  
 Section key if the function succeeds; otherwise `NULL`.  
  
### Remarks  
  
##  <a name="cwinapp__hideapplication"></a>  CWinApp::HideApplication  
 Call this member function to hide an application before closing the open documents.  
  
```  
void HideApplication();
```  
  
##  <a name="cwinapp__htmlhelp"></a>  CWinApp::HtmlHelp  
 Call this member function to invoke the HTMLHelp application.  
  
```  
virtual void HtmlHelp(
    DWORD_PTR dwData,  
    UINT nCmd = 0x000F);
```  
  
### Parameters  
 `dwData`  
 Specifies additional data. The value used depends on the value of the `nCmd` parameter.  
  
 `nCmd`  
 Specifies the type of help requested. For a list of possible values and how they affect the `dwData` parameter, see the `uCommand` parameter described in About the HTMLHelp API Function in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Remarks  
 The framework also calls this function to invoke the HTMLHelp application.  
  
 The framework will automatically close the HTMLHelp application when your application terminates.  
  
##  <a name="cwinapp__initinstance"></a>  CWinApp::InitInstance  
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
>  MFC applications must be initialized as single threaded apartment (STA). If you call [CoInitializeEx](http://msdn.microsoft.com/library/windows/desktop/ms695279) in your `InitInstance` override, specify `COINIT_APARTMENTTHREADED` (rather than `COINIT_MULTITHREADED`). For more information, see PRB: MFC Application Stops Responding When You Initialize the Application as a Multithreaded Apartment (828643) at [http://support.microsoft.com/default.aspxscid=kb;en-us;828643](http://support.microsoft.com/default.aspxscid=kb;en-us;828643).  
  
### Example  
 [!code-cpp[NVC_MFCListView#9](../../atl/reference/codesnippet/cpp/cwinapp-class_10.cpp)]  
  
##  <a name="cwinapp__istaskbarinteractionenabled"></a>  CWinApp::IsTaskbarInteractionEnabled  
 Tells whether Windows 7 Taskbar interaction is enabled.  
  
```  
virtual BOOL IsTaskbarInteractionEnabled();
```  
  
### Return Value  
 Returns `TRUE` if `EnableTaskbarInteraction` has been called and the Operating System is Windows 7 or higher.  
  
### Remarks  
 Taskbar interaction means that MDI application displays the content of MDI children in separate tabbed thumbnails that appear when the mouse pointer is over the application taskbar button.  
  
##  <a name="cwinapp__loadcursor"></a>  CWinApp::LoadCursor  
 Loads the cursor resource named by `lpszResourceName` or specified by `nIDResource` from the current executable file.  
  
```  
HCURSOR LoadCursor(LPCTSTR lpszResourceName) const;

 
 
HCURSOR LoadCursor(UINT nIDResource) const;

 
```  
  
### Parameters  
 `lpszResourceName`  
 Points to a null-terminated string that contains the name of the cursor resource. You can use a `CString` for this argument.  
  
 `nIDResource`  
 ID of the cursor resource. For a list of resources, see [LoadCursor](http://msdn.microsoft.com/library/windows/desktop/ms648391) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Return Value  
 A handle to a cursor if successful; otherwise **NULL**.  
  
### Remarks  
 `LoadCursor` loads the cursor into memory only if it has not been previously loaded; otherwise, it retrieves a handle of the existing resource.  
  
 Use the [LoadStandardCursor](#cwinapp__loadstandardcursor) or [LoadOEMCursor](#cwinapp__loadoemcursor) member function to access the predefined Windows cursors.  
  
### Example  
 [!code-cpp[NVC_MFCWindowing#44](../../mfc/reference/codesnippet/cpp/cwinapp-class_11.cpp)]  
  
##  <a name="cwinapp__loadicon"></a>  CWinApp::LoadIcon  
 Loads the icon resource named by `lpszResourceName` or specified by `nIDResource` from the executable file.  
  
```  
HICON LoadIcon(LPCTSTR lpszResourceName) const;

 
 
HICON LoadIcon(UINT nIDResource) const;

 
```  
  
### Parameters  
 `lpszResourceName`  
 Points to a null-terminated string that contains the name of the icon resource. You can also use a `CString` for this argument.  
  
 `nIDResource`  
 ID number of the icon resource.  
  
### Return Value  
 A handle to an icon if successful; otherwise **NULL**.  
  
### Remarks  
 `LoadIcon` loads the icon only if it has not been previously loaded; otherwise, it retrieves a handle of the existing resource.  
  
 You can use the [LoadStandardIcon](#cwinapp__loadstandardicon) or [LoadOEMIcon](#cwinapp__loadoemicon) member function to access the predefined Windows icons.  
  
> [!NOTE]
>  This member function calls the Win32 API function [LoadIcon](http://msdn.microsoft.com/library/windows/desktop/ms648072), which can only load an icon whose size conforms to the **SM_CXICON** and **SM_CYICON** system metric values.  
  
##  <a name="cwinapp__loadoemcursor"></a>  CWinApp::LoadOEMCursor  
 Loads the Windows predefined cursor resource specified by `nIDCursor`.  
  
```  
HCURSOR LoadOEMCursor(UINT nIDCursor) const;

 
```  
  
### Parameters  
 `nIDCursor`  
 An **OCR_** manifest constant identifier that specifies a predefined Windows cursor. You must have **#define OEMRESOURCE** before **#include \<afxwin.h>** to gain access to the **OCR_** constants in WINDOWS.H.  
  
### Return Value  
 A handle to a cursor if successful; otherwise **NULL**.  
  
### Remarks  
 Use the `LoadOEMCursor` or [LoadStandardCursor](#cwinapp__loadstandardcursor) member function to access the predefined Windows cursors.  
  
### Example  
 [!code-cpp[NVC_MFCWindowing#45](../../mfc/reference/codesnippet/cpp/cwinapp-class_12.h)]  
  
 [!code-cpp[NVC_MFCWindowing#46](../../mfc/reference/codesnippet/cpp/cwinapp-class_13.cpp)]  
  
##  <a name="cwinapp__loadoemicon"></a>  CWinApp::LoadOEMIcon  
 Loads the Windows predefined icon resource specified by `nIDIcon`.  
  
```  
HICON LoadOEMIcon(UINT nIDIcon) const;

 
```  
  
### Parameters  
 `nIDIcon`  
 An **OIC_** manifest constant identifier that specifies a predefined Windows icon. You must have **#define OEMRESOURCE** before **#include \<afxwin.h>** to access the **OIC_** constants in WINDOWS.H.  
  
### Return Value  
 A handle to an icon if successful; otherwise **NULL**.  
  
### Remarks  
 Use the `LoadOEMIcon` or [LoadStandardIcon](#cwinapp__loadstandardicon) member function to access the predefined Windows icons.  
  
##  <a name="cwinapp__loadstandardcursor"></a>  CWinApp::LoadStandardCursor  
 Loads the Windows predefined cursor resource that `lpszCursorName` specifies.  
  
```  
HCURSOR LoadStandardCursor(LPCTSTR lpszCursorName) const;

 
```  
  
### Parameters  
 `lpszCursorName`  
 An **IDC_** manifest constant identifier that specifies a predefined Windows cursor. These identifiers are defined in WINDOWS.H. The following list shows the possible predefined values and meanings for `lpszCursorName`:  
  
- **IDC_ARROW** Standard arrow cursor  
  
- **IDC_IBEAM** Standard text-insertion cursor  
  
- **IDC_WAIT** Hourglass cursor used when Windows performs a time-consuming task  
  
- **IDC_CROSS** Cross-hair cursor for selection  
  
- **IDC_UPARROW** Arrow that points straight up  
  
- **IDC_SIZE** Obsolete and unsupported; use **IDC_SIZEALL**  
  
- **IDC_SIZEALL** A four-pointed arrow. The cursor to use to resize a window.  
  
- **IDC_ICON** Obsolete and unsupported. Use **IDC_ARROW**.  
  
- **IDC_SIZENWSE** Two-headed arrow with ends at upper left and lower right  
  
- **IDC_SIZENESW** Two-headed arrow with ends at upper right and lower left  
  
- **IDC_SIZEWE** Horizontal two-headed arrow  
  
- **IDC_SIZENS** Vertical two-headed arrow  
  
### Return Value  
 A handle to a cursor if successful; otherwise **NULL**.  
  
### Remarks  
 Use the `LoadStandardCursor` or [LoadOEMCursor](#cwinapp__loadoemcursor) member function to access the predefined Windows cursors.  
  
### Example  
 [!code-cpp[NVC_MFCWindowing#47](../../mfc/reference/codesnippet/cpp/cwinapp-class_14.cpp)]  
  
##  <a name="cwinapp__loadstandardicon"></a>  CWinApp::LoadStandardIcon  
 Loads the Windows predefined icon resource that `lpszIconName` specifies.  
  
```  
HICON LoadStandardIcon(LPCTSTR lpszIconName) const;

 
```  
  
### Parameters  
 `lpszIconName`  
 A manifest constant identifier that specifies a predefined Windows icon. These identifiers are defined in WINDOWS.H. For a list of the possible predefined values and their descriptions, see the *lpIconName* parameter in [LoadIcon](http://msdn.microsoft.com/library/windows/desktop/ms648072) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Return Value  
 A handle to an icon if successful; otherwise **NULL**.  
  
### Remarks  
 Use the `LoadStandardIcon` or [LoadOEMIcon](#cwinapp__loadoemicon) member function to access the predefined Windows icons.  
  
##  <a name="cwinapp__loadstdprofilesettings"></a>  CWinApp::LoadStdProfileSettings  
 Call this member function from within the [InitInstance](#cwinapp__initinstance) member function to enable and load the list of most recently used (MRU) files and last preview state.  
  
```  
void LoadStdProfileSettings(UINT nMaxMRU = _AFX_MRU_COUNT);
```  
  
### Parameters  
 `nMaxMRU`  
 The number of recently used files to track.  
  
### Remarks  
 If `nMaxMRU` is 0, no MRU list will be maintained.  
  
##  <a name="cwinapp__m_bhelpmode"></a>  CWinApp::m_bHelpMode  
 **TRUE** if the application is in Help context mode (conventionally invoked with SHIFT + F1); otherwise **FALSE**.  
  
```  
BOOL m_bHelpMode;  
```  
  
### Remarks  
 In Help context mode, the cursor becomes a question mark and the user can move it about the screen. Examine this flag if you want to implement special handling when in the Help mode. `m_bHelpMode` is a public variable of type **BOOL**.  
  
##  <a name="cwinapp__m_dwrestartmanagersupportflags"></a>  CWinApp::m_dwRestartManagerSupportFlags  
 Flags that determine how the restart manager behaves.  
  
```  
DWORD m_dwRestartManagerSupportFlags;  
```  
  
### Remarks  
 To enable the restart manager, set `m_dwRestartManagerSupportFlags` to the behavior that you want. The following table shows the flags that are available.  
  
|||  
|-|-|  
|Flag|Description|  
|`AFX_RESTART_MANAGER_SUPPORT_RESTART`|The application is registered by using [CWinApp::RegisterWithRestartManager](#cwinapp__registerwithrestartmanager). The restart manager is responsible for restarting the application if it unexpectedly exits.|  
|- `AFX_RESTART_MANAGER_SUPPORT_RECOVERY`|The application is registered with the restart manager and the restart manager calls the recovery callback function when it restarts the application. The default recovery callback function is [CWinApp::ApplicationRecoveryCallback](#cwinapp__applicationrecoverycallback).|  
|- `AFX_RESTART_MANAGER_AUTOSAVE_AT_RESTART`|Autosave is enabled and the restart manager autosaves any open documents when the application restarts.|  
|- `AFX_RESTART_MANAGER_AUTOSAVE_AT_INTERVAL`|Autosave is enabled and the restart manager autosaves any open documents at a regular interval. The interval is defined by [CWinApp::m_nAutosaveInterval](#cwinapp__m_nautosaveinterval).|  
|- `AFX_RESTART_MANAGER_REOPEN_PREVIOUS_FILES`|The restart manager opens previously open documents after restarting the application from an unexpected exit. The [CDataRecoveryHandler Class](../../mfc/reference/cdatarecoveryhandler-class.md) handles storing the list of open documents and restoring them.|  
|- `AFX_RESTART_MANAGER_RESTORE_AUTOSAVED_FILES`|The restart manager prompts the user to restore autosaved files after restarting the application. The `CDataRecoveryHandler` class queries the user.|  
|- `AFX_RESTART_MANAGER_SUPPORT_NO_AUTOSAVE`|The union of `AFX_RESTART_MANAGER_SUPPORT_RESTART`, `AFX_RESTART_MANAGER_SUPPORT_RECOVER`, and `AFX_RESTART_MANAGER_REOPEN_PREVIOUS_FILES`.|  
|- `AFX_RESTART_MANAGER_SUPPORT_ALL_ASPECTS`|The union of `AFX_RESTART_MANAGER_SUPPORT_NO_AUTOSAVE`, `AFX_RESTART_MANAGER_AUTOSAVE_AT_RESTART`, `AFX_RESTART_MANAGER_AUTOSAVE_AT_INTERVAL`, and `AFX_RESTART_MANAGER_RESTORE_AUTOSAVED_FILES`.|  
|- `AFX_RESTART_MANAGER_SUPPORT_RESTART_ASPECTS`|The union of `AFX_RESTART_MANAGER_SUPPORT_RESTART`, `AFX_RESTART_MANAGER_AUTOSAVE_AT_RESTART`, `AFX_RESTART_MANAGER_REOPEN_PREVIOUS_FILES`, and `AFX_RESTART_MANAGER_RESTORE_AUTOSAVED_FILES`.|  
|- `AFX_RESTART_MANAGER_SUPPORT_RECOVERY_ASPECTS`|The union of `AFX_RESTART_MANAGER_SUPPORT_RECOVERY`, `AFX_RESTART_MANAGER_AUTOSAVE_AT_INTERVAL`, `AFX_RESTART_MANAGER_REOPEN_PREVIOUS_FILES`, and `AFX_RESTART_MANAGER_RESTORE_AUTOSAVED_FILES`.|  
  
##  <a name="cwinapp__m_ehelptype"></a>  CWinApp::m_eHelpType  
 The type of this data member is the enumerated type **AFX_HELP_TYPE**, which is defined within the `CWinApp` class.  
  
```  
AFX_HELP_TYPE m_eHelpType;  
```  
  
### Remarks  
 The **AFX_HELP_TYPE** enumeration is defined as follows:  
  
 `enum AFX_HELP_TYPE`  
  
 `{`  
  
 `afxWinHelp = 0,`  
  
 `afxHTMLHelp = 1`  
  
 `};`  
  
-   To set the application's help to HTML Help, call [SetHelpMode](#cwinapp__sethelpmode) and specify **afxHTMLHelp**.  
  
-   To set the application's help to WinHelp, call `SetHelpMode` and specify **afxWinHelp**.  
  
##  <a name="cwinapp__m_hinstance"></a>  CWinApp::m_hInstance  
 Corresponds to the `hInstance` parameter passed by Windows to `WinMain`.  
  
```  
HINSTANCE m_hInstance;  
```  
  
### Remarks  
 The `m_hInstance` data member is a handle to the current instance of the application running under Windows. This is returned by the global function [AfxGetInstanceHandle](application-information-and-management.md#afxgetinstancehandle). `m_hInstance` is a public variable of type `HINSTANCE`.  
  
### Example  
 [!code-cpp[NVC_MFCWindowing#55](../../mfc/reference/codesnippet/cpp/cwinapp-class_15.cpp)]  
  
##  <a name="cwinapp__m_lpcmdline"></a>  CWinApp::m_lpCmdLine  
 Corresponds to the `lpCmdLine` parameter passed by Windows to `WinMain`.  
  
```  
LPTSTR m_lpCmdLine;  
```  
  
### Remarks  
 Points to a null-terminated string that specifies the command line for the application. Use `m_lpCmdLine` to access any command-line arguments the user entered when the application was started. `m_lpCmdLine` is a public variable of type `LPTSTR`.  
  
### Example  
 [!code-cpp[NVC_MFCWindowing#52](../../mfc/reference/codesnippet/cpp/cwinapp-class_16.cpp)]  
  
##  <a name="cwinapp__m_nautosaveinterval"></a>  CWinApp::m_nAutosaveInterval  
 The length of time in milliseconds between autosaves.  
  
```  
int m_nAutosaveInterval;  
```  
  
### Remarks  
 You can configure the restart manager to autosave open documents at set intervals. If your application does not autosave files, this parameter has no effect.  
  
##  <a name="cwinapp__m_ncmdshow"></a>  CWinApp::m_nCmdShow  
 Corresponds to the `nCmdShow` parameter passed by Windows to `WinMain`.  
  
```  
int m_nCmdShow;  
```  
  
### Remarks  
 You should pass `m_nCmdShow` as an argument when you call [CWnd::ShowWindow](../../mfc/reference/cwnd-class.md#cwnd__showwindow) for your application's main window. `m_nCmdShow` is a public variable of type `int`.  
  
### Example  
 [!code-cpp[NVC_MFCWindowing#56](../../mfc/reference/codesnippet/cpp/cwinapp-class_17.cpp)]  
  
##  <a name="cwinapp__m_pactivewnd"></a>  CWinApp::m_pActiveWnd  
 Use this data member to store a pointer to the main window of the OLE container application that has your OLE server application in-place activated.  
  
### Remarks  
 If this data member is **NULL**, the application is not in-place active.  
  
 The framework sets this member variable when the frame window is in-place activated by an OLE container application.  
  
##  <a name="cwinapp__m_pdatarecoveryhandler"></a>  CWinApp::m_pDataRecoveryHandler  
 Pointer to the data recovery handler for the application.  
  
```  
CDataRecoveryHandler* m_pDataRecoveryHandler;  
```  
  
### Remarks  
 The data recovery handler of an application monitors open documents and autosaves them. The framework uses the data recovery handler to restore autosaved files when an application restarts after it exits unexpectedly. For more information, see [CDataRecoveryHandler Class](../../mfc/reference/cdatarecoveryhandler-class.md).  
  
##  <a name="cwinapp__m_pszappname"></a>  CWinApp::m_pszAppName  
 Specifies the name of the application.  
  
```  
LPCTSTR m_pszAppName;  
```  
  
### Remarks  
 The application name can come from the parameter passed to the [CWinApp](#cwinapp__cwinapp) constructor, or, if not specified, to the resource string with the ID of **AFX_IDS_APP_TITLE**. If the application name is not found in the resource, it comes from the program's .EXE filename.  
  
 Returned by the global function [AfxGetAppName](application-information-and-management.md#afxgetappname). `m_pszAppName` is a public variable of type **const char\***.  
  
> [!NOTE]
>  If you assign a value to `m_pszAppName`, it must be dynamically allocated on the heap. The `CWinApp` destructor calls **free**( ) with this pointer. You many want to use the `_tcsdup`( ) run-time library function to do the allocating. Also, free the memory associated with the current pointer before assigning a new value. For example:  
  
 [!code-cpp[NVC_MFCWindowing#57](../../mfc/reference/codesnippet/cpp/cwinapp-class_18.cpp)]  
  
### Example  
 [!code-cpp[NVC_MFCWindowing#65](../../mfc/reference/codesnippet/cpp/cwinapp-class_19.cpp)]  
  
##  <a name="cwinapp__m_pszexename"></a>  CWinApp::m_pszExeName  
 Contains the name of the application's executable file without an extension.  
  
```  
LPCTSTR m_pszExeName;  
```  
  
### Remarks  
 Unlike [m_pszAppName](#cwinapp__m_pszappname), this name cannot contain blanks. `m_pszExeName` is a public variable of type **const char\***.  
  
> [!NOTE]
>  If you assign a value to `m_pszExeName`, it must be dynamically allocated on the heap. The `CWinApp` destructor calls **free**( ) with this pointer. You many want to use the `_tcsdup`( ) run-time library function to do the allocating. Also, free the memory associated with the current pointer before assigning a new value. For example:  
  
 [!code-cpp[NVC_MFCWindowing#58](../../mfc/reference/codesnippet/cpp/cwinapp-class_20.cpp)]  
  
##  <a name="cwinapp__m_pszhelpfilepath"></a>  CWinApp::m_pszHelpFilePath  
 Contains the path to the application's Help file.  
  
```  
LPCTSTR m_pszHelpFilePath;  
```  
  
### Remarks  
 By default, the framework initializes `m_pszHelpFilePath` to the name of the application with ".HLP" appended. To change the name of the help file, set `m_pszHelpFilePath` to point to a string that contains the complete name of the desired help file. A convenient place to do this is in the application's [InitInstance](#cwinapp__initinstance) function. `m_pszHelpFilePath` is a public variable of type **const char\***.  
  
> [!NOTE]
>  If you assign a value to `m_pszHelpFilePath`, it must be dynamically allocated on the heap. The `CWinApp` destructor calls **free**( ) with this pointer. You many want to use the `_tcsdup`( ) run-time library function to do the allocating. Also, free the memory associated with the current pointer before assigning a new value. For example:  
  
 [!code-cpp[NVC_MFCWindowing#59](../../mfc/reference/codesnippet/cpp/cwinapp-class_21.cpp)]  
  
##  <a name="cwinapp__m_pszprofilename"></a>  CWinApp::m_pszProfileName  
 Contains the name of the application's .INI file.  
  
```  
LPCTSTR m_pszProfileName;  
```  
  
### Remarks  
 `m_pszProfileName` is a public variable of type **const char\***.  
  
> [!NOTE]
>  If you assign a value to `m_pszProfileName`, it must be dynamically allocated on the heap. The `CWinApp` destructor calls **free**( ) with this pointer. You many want to use the `_tcsdup`( ) run-time library function to do the allocating. Also, free the memory associated with the current pointer before assigning a new value. For example:  
  
 [!code-cpp[NVC_MFCWindowing#60](../../mfc/reference/codesnippet/cpp/cwinapp-class_22.cpp)]  
  
##  <a name="cwinapp__m_pszregistrykey"></a>  CWinApp::m_pszRegistryKey  
 Used to determine where, in the registry or INI file, application profile settings are stored.  
  
```  
LPCTSTR m_pszRegistryKey;  
```  
  
### Remarks  
 Normally, this data member is treated as read-only.  
  
-   The value is stored to a registry key. The name for the application profile setting is appended to the following registry key: HKEY_CURRENT_USER/Software/LocalAppWizard-Generated/.  
  
 If you assign a value to `m_pszRegistryKey`, it must be dynamically allocated on the heap. The `CWinApp` destructor calls **free**( ) with this pointer. You many want to use the `_tcsdup`( ) run-time library function to do the allocating. Also, free the memory associated with the current pointer before assigning a new value. For example:  
  
 [!code-cpp[NVC_MFCWindowing#61](../../mfc/reference/codesnippet/cpp/cwinapp-class_23.cpp)]  
  
##  <a name="cwinapp__m_pszappid"></a>  CWinApp::m_pszAppID  
 Application User Model ID.  
  
```  
LPCTSTR m_pszAppID;  
```  
  
### Remarks  
  
##  <a name="cwinapp__oncontexthelp"></a>  CWinApp::OnContextHelp  
 Handles SHIFT+F1 Help within the application.  
  
```  
afx_msg void OnContextHelp();
```  
  
### Remarks  
 You must add an `ON_COMMAND( ID_CONTEXT_HELP, OnContextHelp )` statement to your `CWinApp` class message map and also add an accelerator table entry, typically SHIFT+F1, to enable this member function.  
  
 `OnContextHelp` puts the application into Help mode. The cursor changes to an arrow and a question mark, and the user can then move the mouse pointer and press the left mouse button to select a dialog box, window, menu, or command button. This member function retrieves the Help context of the object under the cursor and calls the Windows function WinHelp with that Help context.  
  
##  <a name="cwinapp__onddecommand"></a>  CWinApp::OnDDECommand  
 Called by the framework when the main frame window receives a DDE execute message.  
  
```  
virtual BOOL OnDDECommand(LPTSTR lpszCommand);
```  
  
### Parameters  
 *lpszCommand*  
 Points to a DDE command string received by the application.  
  
### Return Value  
 Nonzero if the command is handled; otherwise 0.  
  
### Remarks  
 The default implementation checks whether the command is a request to open a document and, if so, opens the specified document. The Windows File Manager usually sends such DDE command strings when the user double-clicks a data file. Override this function to handle other DDE execute commands, such as the command to print.  
  
### Example  
 [!code-cpp[NVC_MFCWindowing#48](../../mfc/reference/codesnippet/cpp/cwinapp-class_24.cpp)]  
  
##  <a name="cwinapp__onfilenew"></a>  CWinApp::OnFileNew  
 Implements the `ID_FILE_NEW` command.  
  
```  
afx_msg void OnFileNew();
```  
  
### Remarks  
 You must add an `ON_COMMAND( ID_FILE_NEW, OnFileNew )` statement to your `CWinApp` class message map to enable this member function. If enabled, this function handles execution of the File New command.  
  
 See [Technical Note 22](../../mfc/tn022-standard-commands-implementation.md) for information on default behavior and guidance on how to override this member function.  
  
### Example  
 [!code-cpp[NVC_MFCWindowing#49](../../mfc/reference/codesnippet/cpp/cwinapp-class_25.cpp)]  
  
 [!code-cpp[NVC_MFCWindowing#50](../../mfc/reference/codesnippet/cpp/cwinapp-class_26.cpp)]  
  
##  <a name="cwinapp__onfileopen"></a>  CWinApp::OnFileOpen  
 Implements the `ID_FILE_OPEN` command.  
  
```  
afx_msg void OnFileOpen();
```  
  
### Remarks  
 You must add an `ON_COMMAND( ID_FILE_OPEN, OnFileOpen )` statement to your `CWinApp` class message map to enable this member function. If enabled, this function handles execution of the File Open command.  
  
 For information on default behavior and guidance on how to override this member function, see [Technical Note 22](../../mfc/tn022-standard-commands-implementation.md).  
  
### Example  
 [!code-cpp[NVC_MFCWindowing#49](../../mfc/reference/codesnippet/cpp/cwinapp-class_25.cpp)]  
  
 [!code-cpp[NVC_MFCWindowing#50](../../mfc/reference/codesnippet/cpp/cwinapp-class_26.cpp)]  
  
##  <a name="cwinapp__onfileprintsetup"></a>  CWinApp::OnFilePrintSetup  
 Implements the **ID_FILE_PRINT_SETUP** command.  
  
```  
afx_msg void OnFilePrintSetup();
```  
  
### Remarks  
 You must add an `ON_COMMAND( ID_FILE_PRINT_SETUP, OnFilePrintSetup )` statement to your `CWinApp` class message map to enable this member function. If enabled, this function handles execution of the File Print command.  
  
 For information on default behavior and guidance on how to override this member function, see [Technical Note 22](../../mfc/tn022-standard-commands-implementation.md).  
  
### Example  
 [!code-cpp[NVC_MFCWindowing#49](../../mfc/reference/codesnippet/cpp/cwinapp-class_25.cpp)]  
  
 [!code-cpp[NVC_MFCWindowing#50](../../mfc/reference/codesnippet/cpp/cwinapp-class_26.cpp)]  
  
##  <a name="cwinapp__onhelp"></a>  CWinApp::OnHelp  
 Handles F1 Help within the application (using the current context).  
  
```  
afx_msg void OnHelp();
```  
  
### Remarks  
 Usually you will also add an accelerator-key entry for the F1 key. Enabling the F1 key is only a convention, not a requirement.  
  
 You must add an `ON_COMMAND( ID_HELP, OnHelp )` statement to your `CWinApp` class message map to enable this member function. If enabled, called by the framework when the user presses the F1 key.  
  
 The default implementation of this message-handler function determines the Help context that corresponds to the current window, dialog box, or menu item and then calls WINHELP.EXE. If no context is currently available, the function uses the default context.  
  
 Override this member function to set the Help context to something other than the window, dialog box, menu item, or toolbar button that currently has the focus. Call `WinHelp` with the desired Help context ID.  
  
##  <a name="cwinapp__onhelpfinder"></a>  CWinApp::OnHelpFinder  
 Handles the **ID_HELP_FINDER** and **ID_DEFAULT_HELP** commands.  
  
```  
afx_msg void OnHelpFinder();
```  
  
### Remarks  
 You must add an `ON_COMMAND( ID_HELP_FINDER, OnHelpFinder )` statement to your `CWinApp` class message map to enable this member function. If enabled, the framework calls this message-handler function when the user of your application selects the Help Finder command to invoke `WinHelp` with the standard **HELP_FINDER** topic.  
  
##  <a name="cwinapp__onhelpindex"></a>  CWinApp::OnHelpIndex  
 Handles the **ID_HELP_INDEX** command and provides a default Help topic.  
  
```  
afx_msg void OnHelpIndex();
```  
  
### Remarks  
 You must add an `ON_COMMAND( ID_HELP_INDEX, OnHelpIndex )` statement to your `CWinApp` class message map to enable this member function. If enabled, the framework calls this message-handler function when the user of your application selects the Help Index command to invoke `WinHelp` with the standard **HELP_INDEX** topic.  
  
##  <a name="cwinapp__onhelpusing"></a>  CWinApp::OnHelpUsing  
 Handles the **ID_HELP_USING** command.  
  
```  
afx_msg void OnHelpUsing();
```  
  
### Remarks  
 You must add an `ON_COMMAND( ID_HELP_USING, OnHelpUsing )` statement to your `CWinApp` class message map to enable this member function. The framework calls this message-handler function when the user of your application selects the Help Using command to invoke the `WinHelp` application with the standard **HELP_HELPONHELP** topic.  
  
##  <a name="cwinapp__onidle"></a>  CWinApp::OnIdle  
 Override this member function to perform idle-time processing.  
  
```  
virtual BOOL OnIdle(LONG lCount);
```  
  
### Parameters  
 `lCount`  
 A counter incremented each time `OnIdle` is called when the application's message queue is empty. This count is reset to 0 each time a new message is processed. You can use the `lCount` parameter to determine the relative length of time the application has been idle without processing a message.  
  
### Return Value  
 Nonzero to receive more idle processing time; 0 if no more idle time is needed.  
  
### Remarks  
 `OnIdle` is called in the default message loop when the application's message queue is empty. Use your override to call your own background idle-handler tasks.  
  
 `OnIdle` should return 0 to indicate that no idle processing time is required. The `lCount` parameter is incremented each time `OnIdle` is called when the message queue is empty and resets to 0 each time a new message is processed. You can call your different idle routines based on this count.  
  
 The following summarizes idle loop processing:  
  
1.  If the message loop in the Microsoft Foundation Class Library checks the message queue and finds no pending messages, it calls `OnIdle` for the application object and supplies 0 as the `lCount` argument.  
  
2. `OnIdle` performs some processing and returns a nonzero value to indicate it should be called again to do further processing.  
  
3.  The message loop checks the message queue again. If no messages are pending, it calls `OnIdle` again, incrementing the `lCount` argument.  
  
4.  Eventually, `OnIdle` finishes processing all its idle tasks and returns 0. This tells the message loop to stop calling `OnIdle` until the next message is received from the message queue, at which point the idle cycle restarts with the argument set to 0.  
  
 Do not perform lengthy tasks during `OnIdle` because your application cannot process user input until `OnIdle` returns.  
  
> [!NOTE]
>  The default implementation of `OnIdle` updates command user-interface objects such as menu items and toolbar buttons, and it performs internal data structure cleanup. Therefore, if you override `OnIdle`, you must call `CWinApp::OnIdle` with the `lCount` in your overridden version. First call all base-class idle processing (that is, until the base class `OnIdle` returns 0). If you need to perform work before the base-class processing completes, review the base-class implementation to select the proper `lCount` during which to do your work.  
  
 If you do not want `OnIdle` to be called whenever a message is retrieved from the message queue, you can override the [CWinThreadIsIdleMessage](../../mfc/reference/cwinthread-class.md#cwinthread__isidlemessage). If an application has set a very short timer, or if the system is sending the **WM_SYSTIMER** message, then `OnIdle` will be called repeatedly, and degrade performance.  
  
### Example  
 The following two examples show how to use `OnIdle`. The first example processes two idle tasks using the `lCount` argument to prioritize the tasks. The first task is high priority, and you should do it whenever possible. The second task is less important and should be done only when there is a long pause in user input. Note the call to the base-class version of `OnIdle`. The second example manages a group of idle tasks with different priorities.  
  
 [!code-cpp[NVC_MFCWindowing#51](../../mfc/reference/codesnippet/cpp/cwinapp-class_27.cpp)]  
  
##  <a name="cwinapp__opendocumentfile"></a>  CWinApp::OpenDocumentFile  
 The framework calls this method to open the named [CDocument](../../mfc/reference/cdocument-class.md) file for the application.  
  
```  
 
virtual CDocument* OpenDocumentFile(
LPCTSTR lpszFileName  
BOOL bAddToMRU = TRUE);
```  
  
### Parameters  
 [in] `lpszFileName`  
 The name of the file to be opened.  
  
 [in] `bAddToMRU`  
 `TRUE` indicates the document is one of the most recent files; `FALSE` indicates the document is not one of the most recent files.  
  
### Return Value  
 A pointer to a `CDocument` if successful; otherwise `NULL`.  
  
### Remarks  
 If a document that has that name is already open, the first frame window that contains that document will get the focus. If an application supports multiple document templates, the framework uses the file name extension to find the appropriate document template to try to load the document. If successful, the document template then creates a frame window and view for the document.  
  
### Example  
 [!code-cpp[NVC_MFCWindowing#52](../../mfc/reference/codesnippet/cpp/cwinapp-class_16.cpp)]  
  
##  <a name="cwinapp__parsecommandline"></a>  CWinApp::ParseCommandLine  
 Call this member function to parse the command line and send the parameters, one at a time, to [CCommandLineInfo::ParseParam](../../mfc/reference/ccommandlineinfo-class.md#ccommandlineinfo__parseparam).  
  
```  
void ParseCommandLine(CCommandLineInfo& rCmdInfo);
```  
  
### Parameters  
 `rCmdInfo`  
 A reference to a [CCommandLineInfo](../../mfc/reference/ccommandlineinfo-class.md) object.  
  
### Remarks  
 When you start a new MFC project using the Application Wizard, the Application Wizard will create a local instance of `CCommandLineInfo`, and then call `ProcessShellCommand` and `ParseCommandLine` in the [InitInstance](#cwinapp__initinstance) member function. A command line follows the route described below:  
  
1.  After being created in `InitInstance`, the `CCommandLineInfo` object is passed to `ParseCommandLine`.  
  
2. `ParseCommandLine` then calls `CCommandLineInfo::ParseParam` repeatedly, once for each parameter.  
  
3. `ParseParam` fills the `CCommandLineInfo` object, which is then passed to [ProcessShellCommand](#cwinapp__processshellcommand).  
  
4. `ProcessShellCommand` handles the command-line arguments and flags.  
  
 Note that you can call `ParseCommandLine` directly as needed.  
  
 For a description of the command-line flags, see [CCommandLineInfo::m_nShellCommand](../../mfc/reference/ccommandlineinfo-class.md#ccommandlineinfo__m_nshellcommand).  
  
##  <a name="cwinapp__pretranslatemessage"></a>  CWinApp::PreTranslateMessage  
 Override this function to filter window messages before they are dispatched to the Windows functions [TranslateMessage](http://msdn.microsoft.com/library/windows/desktop/ms644955) and [DispatchMessage](http://msdn.microsoft.com/library/windows/desktop/ms644934) The default implementation performs accelerator-key translation, so you must call the `CWinApp::PreTranslateMessage` member function in your overridden version.  
  
```  
virtual BOOL PreTranslateMessage(MSG* pMsg);
```  
  
### Parameters  
 `pMsg`  
 A pointer to a [MSG](../../mfc/reference/msg-structure1.md) structure that contains the message to process.  
  
### Return Value  
 Nonzero if the message was fully processed in `PreTranslateMessage` and should not be processed further. Zero if the message should be processed in the normal way.  
  
##  <a name="cwinapp__processmessagefilter"></a>  CWinApp::ProcessMessageFilter  
 The framework's hook function calls this member function to filter and respond to certain Windows messages.  
  
```  
virtual BOOL ProcessMessageFilter(
    int code,  
    LPMSG lpMsg);
```  
  
### Parameters  
 `code`  
 Specifies a hook code. This member function uses the code to determine how to process `lpMsg.`  
  
 `lpMsg`  
 A pointer to a Windows [MSG](../../mfc/reference/msg-structure1.md) structure.  
  
### Return Value  
 Nonzero if the message is processed; otherwise 0.  
  
### Remarks  
 A hook function processes events before they are sent to the application's normal message processing.  
  
 If you override this advanced feature, be sure to call the base-class version to maintain the framework's hook processing.  
  
##  <a name="cwinapp__processshellcommand"></a>  CWinApp::ProcessShellCommand  
 This member function is called by [InitInstance](#cwinapp__initinstance) to accept the parameters passed from the `CCommandLineInfo` object identified by `rCmdInfo`, and perform the indicated action.  
  
```  
BOOL ProcessShellCommand(CCommandLineInfo& rCmdInfo);
```  
  
### Parameters  
 `rCmdInfo`  
 A reference to a [CCommandLineInfo](../../mfc/reference/ccommandlineinfo-class.md) object.  
  
### Return Value  
 Nonzero if the shell command is processed successfully. If 0, return **FALSE** from [InitInstance](#cwinapp__initinstance).  
  
### Remarks  
 When you start a new MFC project using the Application Wizard, the Application Wizard will create a local instance of `CCommandLineInfo`, and then call `ProcessShellCommand` and [ParseCommandLine](#cwinapp__parsecommandline) in the `InitInstance` member function. A command line follows the route described below:  
  
1.  After being created in `InitInstance`, the `CCommandLineInfo` object is passed to `ParseCommandLine`.  
  
2. `ParseCommandLine` then calls [CCommandLineInfo::ParseParam](../../mfc/reference/ccommandlineinfo-class.md#ccommandlineinfo__parseparam) repeatedly, once for each parameter.  
  
3. `ParseParam` fills the `CCommandLineInfo` object, which is then passed to `ProcessShellCommand`.  
  
4. `ProcessShellCommand` handles the command-line arguments and flags.  
  
 The data members of the `CCommandLineInfo` object, identified by [CCommandLineInfo::m_nShellCommand](../../mfc/reference/ccommandlineinfo-class.md#ccommandlineinfo__m_nshellcommand), are of the following enumerated type, which is defined within the `CCommandLineInfo` class.  
  
 `enum {`  
  
 `FileNew,`  
  
 `FileOpen,`  
  
 `FilePrint,`  
  
 `FilePrintTo,`  
  
 `FileDDE,`  
  
 `};`  
  
 For a brief description of each of these values, see `CCommandLineInfo::m_nShellCommand`.  
  
##  <a name="cwinapp__processwndprocexception"></a>  CWinApp::ProcessWndProcException  
 The framework calls this member function whenever the handler does not catch an exception thrown in one of your application's message or command handlers.  
  
```  
virtual LRESULT ProcessWndProcException(
    CException* e,  
    const MSG* pMsg);
```  
  
### Parameters  
 *e*  
 A pointer to an uncaught exception.  
  
 `pMsg`  
 A [MSG](../../mfc/reference/msg-structure1.md) structure that contains information about the windows message that caused the framework to throw an exception.  
  
### Return Value  
 The value that should be returned to Windows. Normally this is 0L for windows messages, 1L ( **TRUE**) for command messages.  
  
### Remarks  
 Do not call this member function directly.  
  
 The default implementation of this member function creates a message box. If the uncaught exception originates with a menu, toolbar, or accelerator command failure, the message box displays a "Command failed" message; otherwise, it displays an "Internal application error" message.  
  
 Override this member function to provide global handling of your exceptions. Only call the base functionality if you wish the message box to be displayed.  
  
##  <a name="cwinapp__register"></a>  CWinApp::Register  
 Performs any registration tasks not handled by `RegisterShellFileTypes`.  
  
```  
virtual BOOL Register();
```  
  
### Return Value  
 Nonzero on success; otherwise 0.  
  
### Remarks  
 The default implementation simply returns TRUE. Override this function to provide any customized registration steps.  
  
##  <a name="cwinapp__registershellfiletypes"></a>  CWinApp::RegisterShellFileTypes  
 Call this member function to register all of your application's document types with the Windows File Manager.  
  
```  
 
void RegisterShellFileTypes(
BOOL bCompat = FALSE);
```  
  
### Parameters  
 [in] `bCompat`  
 `TRUE` adds registration entries for shell commands Print and Print To, allowing a user to print files directly from the shell, or by dragging the file to a printer object. It also adds a DefaultIcon key. By default, this parameter is `FALSE` for backward compatibility.  
  
### Remarks  
 This allows the user to open a data file created by your application by double-clicking it from within File Manager. Call `RegisterShellFileTypes` after you call [AddDocTemplate](#cwinapp__adddoctemplate) for each of the document templates in your application. Also call the [EnableShellOpen](#cwinapp__enableshellopen) member function when you call `RegisterShellFileTypes`.  
  
 `RegisterShellFileTypes` iterates through the list of [CDocTemplate](../../mfc/reference/cdoctemplate-class.md) objects that the application maintains and, for each document template, adds entries to the registration database that Windows maintains for file associations. File Manager uses these entries to open a data file when the user double-clicks it. This eliminates the need to ship a .REG file with your application.  
  
> [!NOTE]
> `RegisterShellFileTypes` only works if the user runs the program with administrator rights. If the program does not have administrator rights, it cannot alter registry keys.  
  
 If the registration database already associates a given filename extension with another file type, no new association is created. See the `CDocTemplate` class for the format of strings necessary to register this information.  
  
##  <a name="cwinapp__registerwithrestartmanager"></a>  CWinApp::RegisterWithRestartManager  
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
  
|||  
|-|-|  
|Parameter|Description|  
|[in] `bRegisterRecoveryCallback`|`TRUE` indicates that this instance of the application uses a recovery callback function; `FALSE` indicates that it does not. The framework calls the recovery callback function when the application exits unexpectedly. For more information, see [CWinApp::ApplicationRecoveryCallback](#cwinapp__applicationrecoverycallback).|  
|[in] `strRestartIdentifier`|The unique string that identifies this instance of the restart manager. The restart manager identifier is unique for each instance of an application.|  
|[in] `pwzCommandLineArgs`|A string that contains any extra arguments from the command line.|  
|[in] `dwRestartFlags`|Optional flags for the restart manager. For more information, see the Remarks section.|  
|[in] `pRecoveryCallback`|The recovery callback function. This function must take a `LPVOID` parameter as input and return a `DWORD`. The default recovery callback function is `CWinApp::ApplicationRecoveryCallback`.|  
|[in] `lpvParam`|The input parameter for the recovery callback function. For more information, see [CWinApp::ApplicationRecoveryCallback](#cwinapp__applicationrecoverycallback).|  
|[in] `dwPingInterval`|The length of time that the restart manager waits for the recovery callback function to return. This parameter is in milliseconds.|  
|[in] `dwCallbackFlags`|Flags passed to the recovery callback function. Reserved for future use.|  
  
### Return Value  
 `S_OK` if the method is successful; otherwise an error code.  
  
### Remarks  
 If your application uses the default MFC implementation for autosaving files, you should use the simple version of `RegisterWithRestartManager`. Use the complex version of `RegisterWithRestartManager` if you want to customize the autosave behavior of your application.  
  
 If you call this method with an empty string for `strRestartIdentifier`, `RegisterWithRestartManager` creates a unique identifier string for this instance of the restart manager.  
  
 When an application exits unexpectedly, the restart manager restarts the application from the command line and provides the unique restart identifier as an optional argument. In this scenario, the framework calls `RegisterWithRestartManager` two times. The first call comes from [CWinApp::InitInstance](#cwinapp__initinstance) with an empty string for the string identifier. Then, the method [CWinApp::ProcessShellCommand](#cwinapp__processshellcommand) calls `RegisterWithRestartManager` with the unique restart identifier.  
  
 After you register an application with the restart manager, the restart manager monitors the application. If the application exits unexpectedly, the restart manager calls the recovery callback function during the shut down process. The restart manager waits the `dwPingInterval` for a response from the recovery callback function. If the recovery callback function does not respond within this time, the application exits without executing the recovery callback function.  
  
 By default, the dwRestartFlags are not supported but are provided for future use. The possible values for `dwRestartFlags` are as follows:  
  
- `RESTART_NO_CRASH`  
  
- `RESTART_NO_HANG`  
  
- `RESTART_NO_PATCH`  
  
- `RESTART_NO_REBOOT`  
  
##  <a name="cwinapp__reopenpreviousfilesatrestart"></a>  CWinApp::ReopenPreviousFilesAtRestart  
 Determines whether the restart manager reopens the files that were open when the application exited unexpectedly.  
  
```  
virtual BOOL ReopenPreviousFilesAtRestart() const;

 
```  
  
### Return Value  
 `TRUE` indicates the restart manager reopens the previously open files; `FALSE` indicates the restart manager does not.  
  
##  <a name="cwinapp__restartinstance"></a>  CWinApp::RestartInstance  
 Handles an application restart initiated by the restart manager.  
  
```  
virtual BOOL CWinApp::RestartInstance();
```  
  
### Return Value  
 `TRUE` if the data recovery handler opens previously open documents; `FALSE` if the data recovery handler has an error or if there are no previously open documents.  
  
### Remarks  
 When the restart manager restarts an application, the framework calls this method. This method retrieves the data recovery handler and restores the autosaved files. This method calls [CDataRecoveryHandler::RestoreAutosavedDocuments](../../mfc/reference/cdatarecoveryhandler-class.md#cdatarecoveryhandler__restoreautosaveddocuments) to determine whether the user wants to restore the autosaved files.  
  
 This method returns `FALSE` if the [CDataRecoveryHandler](../../mfc/reference/cdatarecoveryhandler-class.md) determines that there were no open documents. If there were no open documents, the application starts ordinarily.  
  
##  <a name="cwinapp__restoreautosavedfilesatrestart"></a>  CWinApp::RestoreAutosavedFilesAtRestart  
 Determines whether the restart manager restores the autosaved files when it restarts the application.  
  
```  
virtual BOOL RestoreAutosavedFilesAtRestart() const;

 
```  
  
### Return Value  
 `TRUE` indicates the restart manager restores autosaved files; `FALSE` indicates the restart manager does not.  
  
##  <a name="cwinapp__run"></a>  CWinApp::Run  
 Provides a default message loop.  
  
```  
virtual int Run();
```  
  
### Return Value  
 An `int` value that is returned by `WinMain`.  
  
### Remarks  
 **Run** acquires and dispatches Windows messages until the application receives a **WM_QUIT** message. If the application's message queue currently contains no messages, **Run** calls [OnIdle](#cwinapp__onidle) to perform idle-time processing. Incoming messages go to the [PreTranslateMessage](#cwinapp__pretranslatemessage) member function for special processing and then to the Windows function **TranslateMessage** for standard keyboard translation; finally, the **DispatchMessage** Windows function is called.  
  
 **Run** is rarely overridden, but you can override it to provide special behavior.  
  
##  <a name="cwinapp__runautomated"></a>  CWinApp::RunAutomated  
 Call this function to determine whether the " **/Automation**" or " **-Automation**" option is present, which indicates whether the server application was launched by a client application.  
  
```  
BOOL RunAutomated();
```  
  
### Return Value  
 Nonzero if the option was found; otherwise 0.  
  
### Remarks  
 If present, the option is removed from the command line. For more information on OLE Automation, see the article [Automation Servers](../../mfc/automation-servers.md).  
  
##  <a name="cwinapp__runembedded"></a>  CWinApp::RunEmbedded  
 Call this function to determine whether the " **/Embedding**" or " **-Embedding**" option is present, which indicates whether the server application was launched by a client application.  
  
```  
BOOL RunEmbedded();
```  
  
### Return Value  
 Nonzero if the option was found; otherwise 0.  
  
### Remarks  
 If present, the option is removed from the command line. For more information on embedding, see the article [Servers: Implementing a Server](../../mfc/servers-implementing-a-server.md).  
  
##  <a name="cwinapp__saveallmodified"></a>  CWinApp::SaveAllModified  
 Called by the framework to save all documents when the application's main frame window is to be closed, or through a `WM_QUERYENDSESSION` message.  
  
```  
virtual BOOL SaveAllModified();
```  
  
### Return Value  
 Nonzero if safe to terminate the application; 0 if not safe to terminate the application.  
  
### Remarks  
 The default implementation of this member function calls the [CDocument::SaveModified](../../mfc/reference/cdocument-class.md#cdocument__savemodified) member function in turn for all modified documents within the application.  
  
##  <a name="cwinapp__selectprinter"></a>  CWinApp::SelectPrinter  
 Call this member function to select a specific printer, and release the printer that was previously selected in the Print Dialog box.  
  
```  
void SelectPrinter(
    HANDLE hDevNames,  
    HANDLE hDevMode,  
    BOOL bFreeOld = TRUE);
```  
  
### Parameters  
 `hDevNames`  
 A handle to a [DEVNAMES](../../mfc/reference/devnames-structure.md) structure that identifies the driver, device, and output port names of a specific printer.  
  
 `hDevMode`  
 A handle to a [DEVMODE](http://msdn.microsoft.com/library/windows/desktop/dd183565) structure that specifies information about the device initialization and environment of a printer.  
  
 *bFreeOld*  
 Frees the previously-selected printer.  
  
### Remarks  
 If both `hDevMode` and `hDevNames` are **NULL**, `SelectPrinter` uses the current default printer.  
  
##  <a name="cwinapp__sethelpmode"></a>  CWinApp::SetHelpMode  
 Sets the application's help type.  
  
```  
void SetHelpMode(AFX_HELP_TYPE eHelpType);
```  
  
### Parameters  
 `eHelpType`  
 Specifies the type of help to use. See [CWinApp::m_eHelpType](#cwinapp__m_ehelptype) for more information.  
  
### Remarks  
 Sets the application's Help type.  
  
 To set your application's Help type to HTMLHelp, you can call [EnableHTMLHelp](#cwinapp__enablehtmlhelp). Once you call `EnableHTMLHelp`, your application must use HTMLHelp as its help application. If you want to change to use WinHelp, you can call `SetHelpMode` and set `eHelpType` to **afxWinHelp**.  
  
##  <a name="cwinapp__setregistrykey"></a>  CWinApp::SetRegistryKey  
 Causes application settings to be stored in the registry instead of INI files.  
  
```  
void SetRegistryKey(LPCTSTR lpszRegistryKey);

 
void SetRegistryKey(UINT nIDRegistryKey);
```  
  
### Parameters  
 *lpszRegistryKey*  
 Pointer to a string containing the name of the key.  
  
 *nIDRegistryKey*  
 ID of a string resource containing the name of the registry key.  
  
### Remarks  
 This function sets *m_pszRegistryKey*, which is then used by the `GetProfileInt`, `GetProfileString`, `WriteProfileInt`, and `WriteProfileString` member functions of `CWinApp`. If this function has been called, the list of most recently-used (MRU) files is also stored in the registry. The registry key is usually the name of a company. It is stored in a key of the following form: HKEY_CURRENT_USER\Software\\<company name\>\\<application name\>\\<section name\>\\<value name\>.  
  
##  <a name="cwinapp__supportsapplicationrecovery"></a>  CWinApp::SupportsApplicationRecovery  
 Determines whether the restart manager recovers an application that exited unexpectedly.  
  
```  
virtual BOOL SupportsApplicationRecovery() const;

 
```  
  
### Return Value  
 `TRUE` indicates the restart manager recovers the application; `FALSE` indicates the restart manager does not.  
  
##  <a name="cwinapp__supportsautosaveatinterval"></a>  CWinApp::SupportsAutosaveAtInterval  
 Determines whether the restart manager autosaves open documents at a regular interval.  
  
```  
virtual BOOL SupportsAutosaveAtInterval() const;

 
```  
  
### Return Value  
 `TRUE` indicates the restart manager autosaves open documents; `FALSE` indicates the restart manager does not.  
  
##  <a name="cwinapp__supportsautosaveatrestart"></a>  CWinApp::SupportsAutosaveAtRestart  
 Determines whether the restart manager autosaves any open documents when the application restarts.  
  
```  
virtual BOOL SupportsAutosaveAtRestart() const;

 
```  
  
### Return Value  
 `TRUE` indicates the restart manager autosaves open documents when the application restarts; `FALSE` indicates the restart manager does not.  
  
##  <a name="cwinapp__supportsrestartmanager"></a>  CWinApp::SupportsRestartManager  
 Determines whether the application supports the restart manager.  
  
```  
virtual BOOL SupportsRestartManager() const;

 
```  
  
### Return Value  
 `TRUE` indicates the application supports the restart manager; `FALSE` indicates the application does not.  
  
##  <a name="cwinapp__unregister"></a>  CWinApp::Unregister  
 Unregisters all files registered by the application object.  
  
```  
virtual BOOL Unregister();
```  
  
### Return Value  
 Nonzero on success; otherwise 0.  
  
### Remarks  
 The `Unregister` function undoes the registration performed by the application object and the [Register](#cwinapp__register) function. Normally, both functions are called implicitly by MFC and therefore will not appear in your code.  
  
 Override this function to perform custom unregistration steps.  
  
##  <a name="cwinapp__unregistershellfiletypes"></a>  CWinApp::UnregisterShellFileTypes  
 Call this member function to unregister all of your application's document types with the Windows File Manager.  
  
```  
void UnregisterShellFileTypes();
```  
  
##  <a name="cwinapp__winhelp"></a>  CWinApp::WinHelp  
 Call this member function to invoke the WinHelp application.  
  
```  
virtual void WinHelp(
    DWORD_PTR dwData,  
    UINT nCmd = HELP_CONTEXT);
```  
  
### Parameters  
 `dwData`  
 Specifies additional data. The value used depends on the value of the `nCmd` parameter.  
  
 `nCmd`  
 Specifies the type of help requested. For a list of possible values and how they affect the `dwData` parameter, see the [WinHelp](http://msdn.microsoft.com/library/windows/desktop/bb762267) Windows function.  
  
### Remarks  
 The framework also calls this function to invoke the WinHelp application.  
  
 The framework will automatically close the WinHelp application when your application terminates.  
  
### Example  
 [!code-cpp[NVC_MFCWindowing#53](../../mfc/reference/codesnippet/cpp/cwinapp-class_28.cpp)]  
  
##  <a name="cwinapp__writeprofilebinary"></a>  CWinApp::WriteProfileBinary  
 Call this member function to write binary data into the specified section of the application's registry or .INI file.  
  
```  
BOOL WriteProfileBinary(
    LPCTSTR lpszSection,  
    LPCTSTR lpszEntry,  
    LPBYTE pData,  
    UINT nBytes);
```  
  
### Parameters  
 `lpszSection`  
 Points to a null-terminated string that specifies the section containing the entry. If the section does not exist, it is created. The name of the section is case independent; the string may be any combination of uppercase and lowercase letters.  
  
 `lpszEntry`  
 Points to a null-terminated string that contains the entry into which the value is to be written. If the entry does not exist in the specified section, it is created.  
  
 `pData`  
 Points to the data to be written.  
  
 `nBytes`  
 Contains the number of bytes to be written.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Example  
 This example uses `CWinApp* pApp = AfxGetApp();` to get at the CWinApp class illustrating a way that `WriteProfileBinary` and `GetProfileBinary` can be used from any function in an MFC application.  
  
 [!code-cpp[NVC_MFCWindowing#54](../../mfc/reference/codesnippet/cpp/cwinapp-class_29.cpp)]  
  
 For another example, see the example for [CWinApp::GetProfileBinary](#cwinapp__getprofilebinary).  
  
##  <a name="cwinapp__writeprofileint"></a>  CWinApp::WriteProfileInt  
 Call this member function to write the specified value into the specified section of the application's registry or .INI file.  
  
```  
BOOL WriteProfileInt(
    LPCTSTR lpszSection,  
    LPCTSTR lpszEntry,  
    int nValue);
```  
  
### Parameters  
 `lpszSection`  
 Points to a null-terminated string that specifies the section containing the entry. If the section does not exist, it is created. The name of the section is case independent; the string may be any combination of uppercase and lowercase letters.  
  
 `lpszEntry`  
 Points to a null-terminated string that contains the entry into which the value is to be written. If the entry does not exist in the specified section, it is created.  
  
 `nValue`  
 Contains the value to be written.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Example  
 This example uses `CWinApp* pApp = AfxGetApp();` to get at the CWinApp class illustrating a way that `WriteProfileString`, `WriteProfileInt`, `GetProfileString`, and `GetProfileInt` can be used from any function in an MFC application.  
  
 [!code-cpp[NVC_MFCWindowing#43](../../mfc/reference/codesnippet/cpp/cwinapp-class_9.cpp)]  
  
 For another example, see the example for [CWinApp::GetProfileInt](#cwinapp__getprofileint).  
  
##  <a name="cwinapp__writeprofilestring"></a>  CWinApp::WriteProfileString  
 Call this member function to write the specified string into the specified section of the application's registry or .INI file.  
  
```  
BOOL WriteProfileString(
    LPCTSTR lpszSection,  
    LPCTSTR lpszEntry,  
    LPCTSTR lpszValue);
```  
  
### Parameters  
 `lpszSection`  
 Points to a null-terminated string that specifies the section containing the entry. If the section does not exist, it is created. The name of the section is case independent; the string may be any combination of uppercase and lowercase letters.  
  
 `lpszEntry`  
 Points to a null-terminated string that contains the entry into which the value is to be written. If the entry does not exist in the specified section, it is created. If this parameter is `NULL`, the section specified by `lpszSection` is deleted.  
  
 `lpszValue`  
 Points to the string to be written. If this parameter is `NULL`, the entry specified by the `lpszEntry` parameter is deleted.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Example  
 [!code-cpp[NVC_MFCWindowing#43](../../mfc/reference/codesnippet/cpp/cwinapp-class_9.cpp)]  
  
 For another example, see the example for [CWinApp::GetProfileInt](#cwinapp__getprofileint).  
  
##  <a name="cwinapp__setappid"></a>  CWinApp::SetAppID  
 Explicitly sets Application User Model ID for the application. This method should be called before any user interface is presented to the user (the best place is the application constructor).  
  
```  
 
void SetAppID(
LPCTSTR lpcszAppID);
```  
  
### Parameters  
 `lpcszAppID`  
 Specifies the Application User Model ID.  
  
### Remarks  
  
## See Also  
 [CWinThread Class](../../mfc/reference/cwinthread-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [How to: Add Restart Manager Support](../../mfc/how-to-add-restart-manager-support.md)



