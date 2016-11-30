---
title: "CAtlServiceModuleT Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL::CAtlServiceModuleT"
  - "ATL.CAtlServiceModuleT"
  - "CAtlServiceModuleT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAtlServiceModuleT class"
ms.assetid: 8fc753ce-4a50-402b-9b4a-0a4ce5dd496c
caps.latest.revision: 20
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
# CAtlServiceModuleT Class
This class implements a service.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```
template <class T,  UINT nServiceNameID>  class ATL_NO_VTABLE CAtlServiceModuleT :  public CAtlExeModuleT<T>
```  
  
#### Parameters  
 `T`  
 Your class derived from `CAtlServiceModuleT`.  
  
 *nServiceNameID*  
 The resource identifier of the service.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CAtlServiceModuleT::CAtlServiceModuleT](#catlservicemodulet__catlservicemodulet)|The constructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CAtlServiceModuleT::Handler](#catlservicemodulet__handler)|The handler routine for the service.|  
|[CAtlServiceModuleT::InitializeSecurity](#catlservicemodulet__initializesecurity)|Provides the default security settings for the service.|  
|[CAtlServiceModuleT::Install](#catlservicemodulet__install)|Installs and creates the service.|  
|[CAtlServiceModuleT::IsInstalled](#catlservicemodulet__isinstalled)|Confirms that the service has been installed.|  
|[CAtlServiceModuleT::LogEvent](#catlservicemodulet__logevent)|Writes to the event log.|  
|[CAtlServiceModuleT::OnContinue](#catlservicemodulet__oncontinue)|Override this method to continue the service.|  
|[CAtlServiceModuleT::OnInterrogate](#catlservicemodulet__oninterrogate)|Override this method to interrogate the service.|  
|[CAtlServiceModuleT::OnPause](#catlservicemodulet__onpause)|Override this method to pause the service.|  
|[CAtlServiceModuleT::OnShutdown](#catlservicemodulet__onshutdown)|Override this method to shut down the service|  
|[CAtlServiceModuleT::OnStop](#catlservicemodulet__onstop)|Override this method to stop the service|  
|[CAtlServiceModuleT::OnUnknownRequest](#catlservicemodulet__onunknownrequest)|Override this method to handle unknown requests to the service|  
|[CAtlServiceModuleT::ParseCommandLine](#catlservicemodulet__parsecommandline)|Parses the command line and performs registration if necessary.|  
|[CAtlServiceModuleT::PreMessageLoop](#catlservicemodulet__premessageloop)|This method is called immediately before entering the message loop.|  
|[CAtlServiceModuleT::RegisterAppId](#catlservicemodulet__registerappid)|Registers the service in the registry.|  
|[CAtlServiceModuleT::Run](#catlservicemodulet__run)|Runs the service.|  
|[CAtlServiceModuleT::ServiceMain](#catlservicemodulet__servicemain)|The method called by the Service Control Manager.|  
|[CAtlServiceModuleT::SetServiceStatus](#catlservicemodulet__setservicestatus)|Updates the service status.|  
|[CAtlServiceModuleT::Start](#catlservicemodulet__start)|Called by `CAtlServiceModuleT::WinMain` when the service starts.|  
|[CAtlServiceModuleT::Uninstall](#catlservicemodulet__uninstall)|Stops and removes the service.|  
|[CAtlServiceModuleT::Unlock](#catlservicemodulet__unlock)|Decrements the service's lock count.|  
|[CAtlServiceModuleT::UnregisterAppId](#catlservicemodulet__unregisterappid)|Removes the service from the registry.|  
|[CAtlServiceModuleT::WinMain](#catlservicemodulet__winmain)|This method implements the code required to run the service.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CAtlServiceModuleT::m_bService](#catlservicemodulet__m_bservice)|Flag indicating the program is running as a service.|  
|[CAtlServiceModuleT::m_dwThreadID](#catlservicemodulet__m_dwthreadid)|Member variable storing the thread identifier.|  
|[CAtlServiceModuleT::m_hServiceStatus](#catlservicemodulet__m_hservicestatus)|Member variable storing a handle to the status information structure for the current service.|  
|[CAtlServiceModuleT::m_status](#catlservicemodulet__m_status)|Member variable storing the status information structure for the current service.|  
|[CAtlServiceModuleT::m_szServiceName](#catlservicemodulet__m_szservicename)|The name of the service being registered.|  
  
## Remarks  
 `CAtlServiceModuleT`, derived from [CAtlExeModuleT](../../atl/reference/catlexemodulet-class.md), implements a ATL Service module. `CAtlServiceModuleT` provides methods for command-line processing, installation, registering, and removal. If extra functionality is required, these and other methods can be overridden.  
  
 This class replaces the obsolete [CComModule Class](../../atl/reference/ccommodule-class.md) used in earlier versions of ATL. See [ATL Module Classes](../../atl/atl-module-classes.md) for more details.  
  
## Inheritance Hierarchy  
 [_ATL_MODULE](atl-typedefs.md#_atl_module)  
  
 [CAtlModule](../../atl/reference/catlmodule-class.md)  
  
 [CAtlModuleT](../../atl/reference/catlmodulet-class.md)  
  
 [CAtlExeModuleT](../../atl/reference/catlexemodulet-class.md)  
  
 `CAtlServiceModuleT`  
  
## Requirements  
 **Header:** atlbase.h  
  
##  <a name="catlservicemodulet__catlservicemodulet"></a>  CAtlServiceModuleT::CAtlServiceModuleT  
 The constructor.  
  
```
CAtlServiceModuleT() throw();
```  
  
### Remarks  
 Initializes the data members and sets the initial service status.  
  
##  <a name="catlservicemodulet__handler"></a>  CAtlServiceModuleT::Handler  
 The handler routine for the service.  
  
```
void Handler(DWORD dwOpcode) throw();
```  
  
### Parameters  
 *dwOpcode*  
 A switch that defines the handler operation. For details, see the Remarks.  
  
### Remarks  
 This is the code that the Service Control Manager (SCM) calls to retrieve the status of the service and issue instructions such as stop or pause. The SCM passes an operation code, shown below, to `Handler` to indicate what the service should do.  
  
|Operation code|Meaning|  
|--------------------|-------------|  
|SERVICE_CONTROL_STOP|Stops the service. Override the method [CAtlServiceModuleT::OnStop](#catlservicemodulet__onstop) in atlbase.h to change the behavior.|  
|SERVICE_CONTROL_PAUSE|User implemented. Override the empty method [CAtlServiceModuleT::OnPause](#catlservicemodulet__onpause) in atlbase.h to pause the service.|  
|SERVICE_CONTROL_CONTINUE|User implemented. Override the empty method [CAtlServiceModuleT::OnContinue](#catlservicemodulet__oncontinue) in atlbase.h to continue the service.|  
|SERVICE_CONTROL_INTERROGATE|User implemented. Override the empty method [CAtlServiceModuleT::OnInterrogate](#catlservicemodulet__oninterrogate) in atlbase.h to interrogate the service.|  
|SERVICE_CONTROL_SHUTDOWN|User implemented. Override the empty method [CAtlServiceModuleT::OnShutdown](#catlservicemodulet__onshutdown) in atlbase.h to shutdown the service.|  
  
 If the operation code isn't recognized, the method [CAtlServiceModuleT::OnUnknownRequest](#catlservicemodulet__onunknownrequest) is called.  
  
 A default ATL-generated service only handles the stop instruction. If the SCM passes the stop instruction, the service tells the SCM that the program is about to stop. The service then calls `PostThreadMessage` to post a quit message to itself. This terminates the message loop and the service will ultimately close.  
  
##  <a name="catlservicemodulet__initializesecurity"></a>  CAtlServiceModuleT::InitializeSecurity  
 Provides the default security settings for the service.  
  
```
HRESULT InitializeSecurity() throw();
```  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 In Visual Studio .NET 2003, this method is not implemented in the base class. The Visual Studio project wizard includes this method in the generated code, but a compilation error will occur if a project created in an earlier version of Visual C++ is compiled using ATL 7.1. Any class that derives from `CAtlServiceModuleT` must implement this method in the derived class.  
  
 Use PKT-level authentication, impersonation level of RPC_C_IMP_LEVEL_IDENTIFY and an appropriate non-null security descriptor in the call to **CoInitializeSecurity**.  
  
 For wizard-generated nonattributed service projects, this would be in  
  
 [!code-cpp[NVC_ATL_Service#1](../../atl/reference/codesnippet/cpp/catlservicemodulet-class_1.cpp)]  
  
 For attributed service projects, this would be in  
  
 [!code-cpp[NVC_ATL_ServiceAttrib#1](../../atl/reference/codesnippet/cpp/catlservicemodulet-class_2.cpp)]  
  
##  <a name="catlservicemodulet__install"></a>  CAtlServiceModuleT::Install  
 Installs and creates the service.  
  
```
BOOL Install() throw();
```  
  
### Return Value  
 Returns TRUE on success, FALSE on failure.  
  
### Remarks  
 Installs the service into the Service Control Manager (SCM) database and then creates the service object. If the service could not be created, a message box is displayed and the method returns FALSE.  
  
##  <a name="catlservicemodulet__isinstalled"></a>  CAtlServiceModuleT::IsInstalled  
 Confirms that the service has been installed.  
  
```
BOOL IsInstalled() throw();
```  
  
### Return Value  
 Returns TRUE if the service is installed, FALSE otherwise.  
  
##  <a name="catlservicemodulet__logevent"></a>  CAtlServiceModuleT::LogEvent  
 Writes to the event log.  
  
```
void __cdecl LogEvent(LPCTSTR pszFormat,
 ...) throw();
```  
  
### Parameters  
 `pszFormat`  
 The string to write to the event log.  
  
 ...  
 Optional extra strings to be written to the event log.  
  
### Remarks  
 This method writes details out to an event log, using the function [ReportEvent](http://msdn.microsoft.com/library/windows/desktop/aa363679). If no service is running, the string is sent to the console.  
  
##  <a name="catlservicemodulet__m_bservice"></a>  CAtlServiceModuleT::m_bService  
 Flag indicating the program is running as a service.  
  
```
BOOL m_bService;
```  
  
### Remarks  
 Used to distinguish a Service EXE from an Application EXE.  
  
##  <a name="catlservicemodulet__m_dwthreadid"></a>  CAtlServiceModuleT::m_dwThreadID  
 Member variable storing the thread identifier of the Service.  
  
```
DWORD m_dwThreadID;
```  
  
### Remarks  
 This variable stores the thread identifier of the current thread.  
  
##  <a name="catlservicemodulet__m_hservicestatus"></a>  CAtlServiceModuleT::m_hServiceStatus  
 Member variable storing a handle to the status information structure for the current service.  
  
```
SERVICE_STATUS_HANDLE m_hServiceStatus;
```  
  
### Remarks  
 The [SERVICE_STATUS](http://msdn.microsoft.com/library/windows/desktop/ms685996) structure contains information about a service.  
  
##  <a name="catlservicemodulet__m_status"></a>  CAtlServiceModuleT::m_status  
 Member variable storing the status information structure for the current service.  
  
```
SERVICE_STATUS m_status;
```  
  
### Remarks  
 The [SERVICE_STATUS](http://msdn.microsoft.com/library/windows/desktop/ms685996) structure contains information about a service.  
  
##  <a name="catlservicemodulet__m_szservicename"></a>  CAtlServiceModuleT::m_szServiceName  
 The name of the service being registered.  
  
```
TCHAR [256] m_szServiceName;
```  
  
### Remarks  
 A null-terminated string which stores the name of the service.  
  
##  <a name="catlservicemodulet__oncontinue"></a>  CAtlServiceModuleT::OnContinue  
 Override this method to continue the service.  
  
```
void OnContinue() throw();
```  
  
##  <a name="catlservicemodulet__oninterrogate"></a>  CAtlServiceModuleT::OnInterrogate  
 Override this method to interrogate the service.  
  
```
void OnInterrogate() throw();
```  
  
##  <a name="catlservicemodulet__onpause"></a>  CAtlServiceModuleT::OnPause  
 Override this method to pause the service.  
  
```
void OnPause() throw();
```  
  
##  <a name="catlservicemodulet__onshutdown"></a>  CAtlServiceModuleT::OnShutdown  
 Override this method to shut down the service.  
  
```
void OnShutdown() throw();
```  
  
##  <a name="catlservicemodulet__onstop"></a>  CAtlServiceModuleT::OnStop  
 Override this method to stop the service.  
  
```
void OnStop() throw();
```  
  
##  <a name="catlservicemodulet__onunknownrequest"></a>  CAtlServiceModuleT::OnUnknownRequest  
 Override this method to handle unknown requests to the service.  
  
```
void OnUnknownRequest(DWORD /* dwOpcode*/) throw();
```  
  
### Parameters  
 */\* dwOpcode \*/*  
 Reserved.  
  
##  <a name="catlservicemodulet__parsecommandline"></a>  CAtlServiceModuleT::ParseCommandLine  
 Parses the command line and performs registration if necessary.  
  
```
bool ParseCommandLine(LPCTSTR lpCmdLine,
    HRESULT* pnRetCode) throw();
```  
  
### Parameters  
 `lpCmdLine`  
 The command line.  
  
 `pnRetCode`  
 The HRESULT corresponding to the registration (if it took place).  
  
### Return Value  
 Returns true on success, or false if the RGS file supplied in the command line could not be registered.  
  
### Remarks  
 Parses the command line and registers or unregisters the supplied RGS file if necessary. This method calls [CAtlExeModuleT::ParseCommandLine](../../atl/reference/catlexemodulet-class.md#catlexemodulet__parsecommandline) to check for **/RegServer** and **/UnregServer**. Adding the argument **-/Service** will register the service.  
  
##  <a name="catlservicemodulet__premessageloop"></a>  CAtlServiceModuleT::PreMessageLoop  
 This method is called immediately before entering the message loop.  
  
```
HRESULT PreMessageLoop(int nShowCmd) throw();
```  
  
### Parameters  
 `nShowCmd`  
 This parameter is passed to [CAtlExeModuleT::PreMessageLoop](../../atl/reference/catlexemodulet-class.md#catlexemodulet__premessageloop).  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 Override this method to add custom initialization code for the Service.  
  
##  <a name="catlservicemodulet__registerappid"></a>  CAtlServiceModuleT::RegisterAppId  
 Registers the service in the registry.  
  
```
inline HRESULT RegisterAppId(bool bService = false) throw();
```  
  
### Parameters  
 *bService*  
 Must be true to register as a service.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="catlservicemodulet__run"></a>  CAtlServiceModuleT::Run  
 Runs the service.  
  
```
HRESULT Run(int nShowCmd = SW_HIDE) throw();
```  
  
### Parameters  
 `nShowCmd`  
 Specifies how the window is to be shown. This parameter can be one of the values discussed in the [WinMain](http://msdn.microsoft.com/library/windows/desktop/ms633559) section. The default value is SW_HIDE.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 After being called, **Run** calls [CAtlServiceModuleT::PreMessageLoop](#catlservicemodulet__premessageloop), [CAtlExeModuleT::RunMessageLoop](../../atl/reference/catlexemodulet-class.md#catlexemodulet__runmessageloop), and [CAtlExeModuleT::PostMessageLoop](../../atl/reference/catlexemodulet-class.md#catlexemodulet__postmessageloop).  
  
##  <a name="catlservicemodulet__servicemain"></a>  CAtlServiceModuleT::ServiceMain  
 This method is called by the Service Control Manager.  
  
```
void ServiceMain(DWORD dwArgc,
    LPTSTR* lpszArgv) throw();
```  
  
### Parameters  
 *dwArgc*  
 The argc argument.  
  
 *lpszArgv*  
 The argv argument.  
  
### Remarks  
 The Service Control Manager (SCM) calls `ServiceMain` when you open the Services application in the Control Panel, select the service, and click Start.  
  
 After the SCM calls `ServiceMain`, a service must give the SCM a handler function. This function lets the SCM obtain the service's status and pass specific instructions (such as pausing or stopping). Subsequently, [CAtlServiceModuleT::Run](#catlservicemodulet__run) is called to perform the main work of the service. **Run** continues to execute until the service is stopped.  
  
##  <a name="catlservicemodulet__setservicestatus"></a>  CAtlServiceModuleT::SetServiceStatus  
 This method updates the service status.  
  
```
void SetServiceStatus(DWORD dwState) throw();
```  
  
### Parameters  
 `dwState`  
 The new status. See [SetServiceStatus](http://msdn.microsoft.com/library/windows/desktop/ms686241) for possible values.  
  
### Remarks  
 Updates the Service Control Manager's status information for the service. It is called by [CAtlServiceModuleT::Run](#catlservicemodulet__run), [CAtlServiceModuleT::ServiceMain](#catlservicemodulet__servicemain) and other handler methods. The status is also stored in the member variable [CAtlServiceModuleT::m_status](#catlservicemodulet__m_status).  
  
##  <a name="catlservicemodulet__start"></a>  CAtlServiceModuleT::Start  
 Called by `CAtlServiceModuleT::WinMain` when the service starts.  
  
```
HRESULT Start(int nShowCmd) throw();
```  
  
### Parameters  
 `nShowCmd`  
 Specifies how the window is to be shown. This parameter can be one of the values discussed in the [WinMain](http://msdn.microsoft.com/library/windows/desktop/ms633559) section.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 The [CAtlServiceModuleT::WinMain](#catlservicemodulet__winmain) method handles both registration and installation, as well as tasks involved in removing registry entries and uninstalling the module. When the service is run, `WinMain` calls **Start**.  
  
##  <a name="catlservicemodulet__uninstall"></a>  CAtlServiceModuleT::Uninstall  
 Stops and removes the service.  
  
```
BOOL Uninstall() throw();
```  
  
### Return Value  
 Returns TRUE on success, FALSE on failure.  
  
### Remarks  
 Stops the service from running and removes it from the Service Control Manager database.  
  
##  <a name="catlservicemodulet__unlock"></a>  CAtlServiceModuleT::Unlock  
 Decrements the service's lock count.  
  
```
LONG Unlock() throw();
```  
  
### Return Value  
 Returns the lock count, which may be useful for diagnostics and debugging.  
  
##  <a name="catlservicemodulet__unregisterappid"></a>  CAtlServiceModuleT::UnregisterAppId  
 Removes the service from the registry.  
  
```
HRESULT UnregisterAppId() throw();
```  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="catlservicemodulet__winmain"></a>  CAtlServiceModuleT::WinMain  
 This method implements the code required to start the service.  
  
```
int WinMain(int nShowCmd) throw();
```  
  
### Parameters  
 `nShowCmd`  
 Specifies how the window is to be shown. This parameter can be one of the values discussed in the [WinMain](http://msdn.microsoft.com/library/windows/desktop/ms633559) section.  
  
### Return Value  
 Returns the service's return value.  
  
### Remarks  
 This method processes the command line (with [CAtlServiceModuleT::ParseCommandLine](#catlservicemodulet__parsecommandline)) and then starts the service (using [CAtlServiceModuleT::Start](#catlservicemodulet__start)).  
  
## See Also  
 [CAtlExeModuleT Class](../../atl/reference/catlexemodulet-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)
