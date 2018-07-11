---
title: "CAtlExeModuleT Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-atl"]
ms.topic: "reference"
f1_keywords: ["CAtlExeModuleT", "ATLBASE/ATL::CAtlExeModuleT", "ATLBASE/ATL::CAtlExeModuleT::CAtlExeModuleT", "ATLBASE/ATL::CAtlExeModuleT::InitializeCom", "ATLBASE/ATL::CAtlExeModuleT::ParseCommandLine", "ATLBASE/ATL::CAtlExeModuleT::PostMessageLoop", "ATLBASE/ATL::CAtlExeModuleT::PreMessageLoop", "ATLBASE/ATL::CAtlExeModuleT::RegisterClassObjects", "ATLBASE/ATL::CAtlExeModuleT::RevokeClassObjects", "ATLBASE/ATL::CAtlExeModuleT::Run", "ATLBASE/ATL::CAtlExeModuleT::RunMessageLoop", "ATLBASE/ATL::CAtlExeModuleT::UninitializeCom", "ATLBASE/ATL::CAtlExeModuleT::Unlock", "ATLBASE/ATL::CAtlExeModuleT::WinMain", "ATLBASE/ATL::CAtlExeModuleT::m_bDelayShutdown", "ATLBASE/ATL::CAtlExeModuleT::m_dwPause", "ATLBASE/ATL::CAtlExeModuleT::m_dwTimeOut"]
dev_langs: ["C++"]
helpviewer_keywords: ["CAtlExeModuleT class"]
ms.assetid: 82245f3d-91d4-44fa-aa86-7cc7fbd758d9
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CAtlExeModuleT Class
This class represents the module for an application.  
  
## Syntax  
  
```
template <class T>  
class ATL_NO_VTABLE CAtlExeModuleT : public CAtlModuleT<T>
```  
  
#### Parameters  
 *T*  
 Your class derived from `CAtlExeModuleT`.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CAtlExeModuleT::CAtlExeModuleT](#catlexemodulet)|The constructor.|  
|[CAtlExeModuleT::~CAtlExeModuleT](#dtor)|The destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CAtlExeModuleT::InitializeCom](#initializecom)|Initializes COM.|  
|[CAtlExeModuleT::ParseCommandLine](#parsecommandline)|Parses the command line and performs registration if necessary.|  
|[CAtlExeModuleT::PostMessageLoop](#postmessageloop)|This method is called immediately after the message loop exits.|  
|[CAtlExeModuleT::PreMessageLoop](#premessageloop)|This method is called immediately before entering the message loop.|  
|[CAtlExeModuleT::RegisterClassObjects](#registerclassobjects)|Registers the class object.|  
|[CAtlExeModuleT::RevokeClassObjects](#revokeclassobjects)|Revokes the class object.|  
|[CAtlExeModuleT::Run](#run)|This method executes code in the EXE module to initialize, run the message loop, and clean up.|  
|[CAtlExeModuleT::RunMessageLoop](#runmessageloop)|This method executes the message loop.|  
|[CAtlExeModuleT::UninitializeCom](#uninitializecom)|Uninitializes COM.|  
|[CAtlExeModuleT::Unlock](#unlock)|Decrements the module's lock count.|  
|[CAtlExeModuleT::WinMain](#winmain)|This method implements the code required to run an EXE.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CAtlExeModuleT::m_bDelayShutdown](#m_bdelayshutdown)|A flag indicating that there should be a delay shutting down the module.|  
|[CAtlExeModuleT::m_dwPause](#m_dwpause)|A pause value used to ensure all objects are released before shutdown.|  
|[CAtlExeModuleT::m_dwTimeOut](#m_dwtimeout)|A time-out value used to delay the unloading of the module.|  
  
## Remarks  
 `CAtlExeModuleT` represents the module for an application (EXE) and contains code that supports creating an EXE, processing the command line, registering class objects, running the message loop, and cleaning up on exit.  
  
 This class is designed to improve performance when COM objects in the EXE server are continually created and destroyed. After the last COM object is released, the EXE waits for a duration specified by the [CAtlExeModuleT::m_dwTimeOut](#m_dwtimeout) data member. If there is no activity during this period (that is, no COM objects are created), the shutdown process is initiated.  
  
 The [CAtlExeModuleT::m_bDelayShutdown](#m_bdelayshutdown) data member is a flag used to determine if the EXE should use the mechanism defined above. If it is set to false, then the module will terminate immediately.  
  
 For more information on modules in ATL, see [ATL Module Classes](../../atl/atl-module-classes.md).  
  
## Inheritance Hierarchy  
 [_ATL_MODULE](atl-typedefs.md#_atl_module)  

  
 [CAtlModule](../../atl/reference/catlmodule-class.md)  
  
 [CAtlModuleT](../../atl/reference/catlmodulet-class.md)  
  
 `CAtlExeModuleT`  
  
## Requirements  
 **Header:** atlbase.h  
  
##  <a name="catlexemodulet"></a>  CAtlExeModuleT::CAtlExeModuleT  
 The constructor.  
  
```
CAtlExeModuleT() throw();
```  
  
### Remarks  
 If the EXE module could not be initialized, WinMain will immediately return without further processing.  
  
##  <a name="dtor"></a>  CAtlExeModuleT::~CAtlExeModuleT  
 The destructor.  
  
```
~CAtlExeModuleT() throw();
```  
  
### Remarks  
 Frees all allocated resources.  
  
##  <a name="initializecom"></a>  CAtlExeModuleT::InitializeCom  
 Initializes COM.  
  
```
static HRESULT InitializeCom() throw();
```  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method is called from the constructor and can be overridden to initialize COM in a manner different from the default implementation. The default implementation either calls `CoInitializeEx(NULL, COINIT_MULTITHREADED)` or `CoInitialize(NULL)` depending on the project configuration.  
  
 Overriding this method normally requires overriding [CAtlExeModuleT::UninitializeCom](#uninitializecom).  
  
##  <a name="m_bdelayshutdown"></a>  CAtlExeModuleT::m_bDelayShutdown  
 A flag indicating that there should be a delay shutting down the module.  
  
```
bool m_bDelayShutdown;
```  
  
### Remarks  
 See the [CAtlExeModuleT Overview](../../atl/reference/catlexemodulet-class.md) for details.  
  
##  <a name="m_dwpause"></a>  CAtlExeModuleT::m_dwPause  
 A pause value used to ensure all objects are gone before shutdown.  
  
```
DWORD m_dwPause;
```  
  
### Remarks  
 Change this value after calling [CAtlExeModuleT::InitializeCom](#initializecom) to set the number of milliseconds used as the pause value for shutting down the server. The default value is 1000 milliseconds.  
  
##  <a name="m_dwtimeout"></a>  CAtlExeModuleT::m_dwTimeOut  
 A time-out value used to delay the unloading of the module.  
  
```
DWORD m_dwTimeOut;
```  
  
### Remarks  
 Change this value after calling [CAtlExeModuleT::InitializeCom](#initializecom) to define the number of milliseconds used as the time-out value for shutting down the server. The default value is 5000 milliseconds. See the [CAtlExeModuleT Overview](../../atl/reference/catlexemodulet-class.md) for more details.  
  
##  <a name="parsecommandline"></a>  CAtlExeModuleT::ParseCommandLine  
 Parses the command line and performs registration if necessary.  
  
```
bool ParseCommandLine(LPCTSTR lpCmdLine, HRESULT* pnRetCode) throw();
```  
  
### Parameters  
 *lpCmdLine*  
 The command line passed to the application.  
  
 *pnRetCode*  
 The HRESULT corresponding to the registration (if it took place).  
  
### Return Value  
 Return true if the application should continue to run, otherwise false.  
  
### Remarks  
 This method is called from [CAtlExeModuleT::WinMain](#winmain) and can be overridden to handle command-line switches. The default implementation checks for **/RegServer** and **/UnRegServer** command-line arguments and performs registration or unregistration.  
  
##  <a name="postmessageloop"></a>  CAtlExeModuleT::PostMessageLoop  
 This method is called immediately after the message loop exits.  
  
```
HRESULT PostMessageLoop() throw();
```  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 Override this method to perform custom application cleanup. The default implementation calls [CAtlExeModuleT::RevokeClassObjects](#revokeclassobjects).  
  
##  <a name="premessageloop"></a>  CAtlExeModuleT::PreMessageLoop  
 This method is called immediately before entering the message loop.  
  
```
HRESULT PreMessageLoop(int nShowCmd) throw();
```  
  
### Parameters  
 *nShowCmd*  
 The value passed as the *nShowCmd* parameter in WinMain.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 Override this method to add custom initialization code for the application. The default implementation registers the class objects.  
  
##  <a name="registerclassobjects"></a>  CAtlExeModuleT::RegisterClassObjects  
 Registers the class object with OLE so other applications can connect to it.  
  
```
HRESULT RegisterClassObjects(DWORD dwClsContext, DWORD dwFlags) throw();
```  
  
### Parameters  
 *dwClsContext*  
 Specifies the context in which the class object is to be run. Possible values are CLSCTX_INPROC_SERVER, CLSCTX_INPROC_HANDLER, or CLSCTX_LOCAL_SERVER.  
  
 *dwFlags*  
 Determines the connection types to the class object. Possible values are REGCLS_SINGLEUSE, REGCLS_MULTIPLEUSE, or REGCLS_MULTI_SEPARATE.  
  
### Return Value  
 Returns S_OK on success, S_FALSE if there were no classes to register, or an error HRESULT on failure.  
  
##  <a name="revokeclassobjects"></a>  CAtlExeModuleT::RevokeClassObjects  
 Removes the class object.  
  
```
HRESULT RevokeClassObjects() throw();
```  
  
### Return Value  
 Returns S_OK on success, S_FALSE if there were no classes to register, or an error HRESULT on failure.  
  
##  <a name="run"></a>  CAtlExeModuleT::Run  
 This method executes code in the EXE module to initialize, run the message loop, and clean up.  
  
```
HRESULT Run(int nShowCmd = SW_HIDE) throw();
```  
  
### Parameters  
 *nShowCmd*  
 Specifies how the window is to be shown. This parameter can be one of the values discussed in the [WinMain](http://msdn.microsoft.com/library/windows/desktop/ms633559) section. Defaults to SW_HIDE.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method can be overridden. However, in practice is it better to override [CAtlExeModuleT::PreMessageLoop](#premessageloop), [CAtlExeModuleT::RunMessageLoop](#runmessageloop), or [CAtlExeModuleT::PostMessageLoop](#postmessageloop) instead.  
  
##  <a name="runmessageloop"></a>  CAtlExeModuleT::RunMessageLoop  
 This method executes the message loop.  
  
```
void RunMessageLoop() throw();
```  
  
### Remarks  
 This method can be overridden to change the behavior of the message loop.  
  
##  <a name="uninitializecom"></a>  CAtlExeModuleT::UninitializeCom  
 Uninitializes COM.  
  
```
static void UninitializeCom() throw();
```  
  
### Remarks  
 By default this method simply calls [CoUninitialize](http://msdn.microsoft.com/library/windows/desktop/ms688715) and is called from the destructor. Override this method if you override [CAtlExeModuleT::InitializeCom](#initializecom).  
  
##  <a name="unlock"></a>  CAtlExeModuleT::Unlock  
 Decrements the module's lock count.  
  
```
LONG Unlock() throw();
```  
  
### Return Value  
 Returns a value which may be useful for diagnostics or testing.  
  
##  <a name="winmain"></a>  CAtlExeModuleT::WinMain  
 This method implements the code required to run an EXE.  
  
```
int WinMain(int nShowCmd) throw();
```  
  
### Parameters  
 *nShowCmd*  
 Specifies how the window is to be shown. This parameter can be one of the values discussed in the [WinMain](http://msdn.microsoft.com/library/windows/desktop/ms633559) section.  
  
### Return Value  
 Returns the executable's return value.  
  
### Remarks  
 This method can be overridden. If overriding [CAtlExeModuleT::PreMessageLoop](#premessageloop), [CAtlExeModuleT::PostMessageLoop](#postmessageloop), or [CAtlExeModuleT::RunMessageLoop](#runmessageloop) doesn't provide enough flexibility, it's possible to override the `WinMain` function using this method.  
  
## See Also  
 [ATLDuck Sample](../../visual-cpp-samples.md)   
 [CAtlModuleT Class](../../atl/reference/catlmodulet-class.md)   
 [CAtlDllModuleT Class](../../atl/reference/catldllmodulet-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)
