---
title: "CWinAppEx Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CWinAppEx"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CWinAppEx class"
ms.assetid: a3d3e053-3e22-463f-9444-c73abb1bb9d7
caps.latest.revision: 37
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
# CWinAppEx Class
`CWinAppEx` handles the application state, saves the state to the registry, loads the state from the registry, initializes application managers, and provides links to those same application managers.  
  
## Syntax  
  
```  
class CWinAppEx : public CWinApp  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CWinAppEx::CWinAppEx](#cwinappex__cwinappex)|Constructs a `CWinAppEx` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CWinAppEx::CleanState](#cwinappex__cleanstate)|Removes information about the application from the Windows registry.|  
|[CWinAppEx::EnableLoadWindowPlacement](#cwinappex__enableloadwindowplacement)|Specifies whether the application will load the initial size and location of the main frame window from the registry.|  
|[CWinAppEx::EnableTearOffMenus](#cwinappex__enabletearoffmenus)|Enables tear-off menus for the application.|  
|[CWinAppEx::EnableUserTools](#cwinappex__enableusertools)|Enables the user to create custom menu commands in the application.|  
|[CWinAppEx::ExitInstance](#cwinappex__exitinstance)|Called by the framework from within the `Run` member function to exit this instance of the application. (Overrides [CWinApp::ExitInstance](../../mfc/reference/cwinapp-class.md#cwinapp__exitinstance).)|  
|[CWinAppEx::GetBinary](#cwinappex__getbinary)|Reads binary data that is associated with the specified registry value.|  
|[CWinAppEx::GetContextMenuManager](#cwinappex__getcontextmenumanager)|Returns a pointer to the global [CContextMenuManager](../../mfc/reference/ccontextmenumanager-class.md) object.|  
|[CWinAppEx::GetDataVersion](#cwinappex__getdataversion)||  
|[CWinAppEx::GetDataVersionMajor](#cwinappex__getdataversionmajor)|Returns the major version of the application saved in the Windows registry.|  
|[CWinAppEx::GetDataVersionMinor](#cwinappex__getdataversionminor)|Returns the minor version of the application saved in the Windows registry.|  
|[CWinAppEx::GetInt](#cwinappex__getint)|Reads numeric data that is associated with the specified value from the registry.|  
|[CWinAppEx::GetKeyboardManager](#cwinappex__getkeyboardmanager)|Returns a pointer to the global [CKeyboardManager](../../mfc/reference/ckeyboardmanager-class.md) object.|  
|[CWinAppEx::GetMouseManager](#cwinappex__getmousemanager)|Returns a pointer to the global [CMouseManager](../../mfc/reference/cmousemanager-class.md) object.|  
|[CWinAppEx::GetObject](#cwinappex__getobject)|Reads `CObject`-derived data that is associated with the specified value from the registry.|  
|[CWinAppEx::GetRegSectionPath](#cwinappex__getregsectionpath)|Returns a string that is the path of a registry key. This path concatenates the supplied relative path with the application path.|  
|[CWinAppEx::GetRegistryBase](#cwinappex__getregistrybase)|Returns the registry path for the application.|  
|[CWinAppEx::GetSectionBinary](#cwinappex__getsectionbinary)|Reads binary data that is associated with the specified key and value from the registry.|  
|[CWinAppEx::GetSectionInt](#cwinappex__getsectionint)|Reads numeric data from the registry associated with the specified key and value.|  
|[CWinAppEx::GetSectionObject](#cwinappex__getsectionobject)|Reads `CObject` data that is associated with the specified key and value from the registry.|  
|[CWinAppEx::GetSectionString](#cwinappex__getsectionstring)|Reads string data that is associated with the specified key and value from the registry.|  
|[CWinAppEx::GetShellManager](#cwinappex__getshellmanager)|Returns a pointer to the global [CShellManager](../../mfc/reference/cshellmanager-class.md) object.|  
|[CWinAppEx::GetString](#cwinappex__getstring)|Reads string data that is associated with the specified value from the registry.|  
|[CWinAppEx::GetTooltipManager](#cwinappex__gettooltipmanager)|Returns a pointer to the global [CTooltipManager](../../mfc/reference/ctooltipmanager-class.md) object.|  
|[CWinAppEx::GetUserToolsManager](#cwinappex__getusertoolsmanager)|Returns a pointer to the global [CUserToolsManager](../../mfc/reference/cusertoolsmanager-class.md) object.|  
|[CWinAppEx::InitContextMenuManager](#cwinappex__initcontextmenumanager)|Initializes the `CContextMenuManager` object.|  
|[CWinAppEx::InitKeyboardManager](#cwinappex__initkeyboardmanager)|Initializes the `CKeyboardManager` object.|  
|[CWinAppEx::InitMouseManager](#cwinappex__initmousemanager)|Initializes the `CMouseManager` object.|  
|[CWinAppEx::InitShellManager](#cwinappex__initshellmanager)|Initializes the `CShellManager` class|  
|[CWinAppEx::InitTooltipManager](#cwinappex__inittooltipmanager)|Initializes the `CTooltipManager` class.|  
|[CWinAppEx::IsResourceSmartUpdate](#cwinappex__isresourcesmartupdate)||  
|[CWinAppEx::IsStateExists](#cwinappex__isstateexists)|Indicates whether the specified key is in the registry.|  
|[CWinAppEx::LoadState](#cwinappex__loadstate)|Loads the application state from the registry.|  
|[CWinAppEx::OnAppContextHelp](#cwinappex__onappcontexthelp)|Called by the framework when the user requests context help for the **Customization** dialog box.|  
|[CWinAppEx::OnViewDoubleClick](#cwinappex__onviewdoubleclick)|Calls the user-defined command when the user double-clicks anywhere in the application.|  
|[CWinAppEx::OnWorkspaceIdle](#cwinappex__onworkspaceidle)||  
|[CWinAppEx::SaveState](#cwinappex__savestate)|Writes the state of the application framework to the Windows registry.|  
|[CWinAppEx::SetRegistryBase](#cwinappex__setregistrybase)|Sets the path of the default registry key. This key will serve as a root for all subsequent registry calls.|  
|[CWinAppEx::ShowPopupMenu](#cwinappex__showpopupmenu)|Displays a popup menu.|  
|[CWinAppEx::WriteBinary](#cwinappex__writebinary)|Writes the binary data to the specified registry value.|  
|[CWinAppEx::WriteInt](#cwinappex__writeint)|Writes the numeric data to the specified registry value.|  
|[CWinAppEx::WriteObject](#cwinappex__writeobject)|Writes data that is derived from the [CObject Class](../../mfc/reference/cobject-class.md) to the specified registry value.|  
|[CWinAppEx::WriteSectionBinary](#cwinappex__writesectionbinary)|Writes the binary data to a value of the specified registry key.|  
|[CWinAppEx::WriteSectionInt](#cwinappex__writesectionint)|Writes the numeric data to a value of the specified registry key.|  
|[CWinAppEx::WriteSectionObject](#cwinappex__writesectionobject)|Writes data derived from the `CObject` class to a value of the specified registry key.|  
|[CWinAppEx::WriteSectionString](#cwinappex__writesectionstring)|Writes the string data to a value of the specified registry key.|  
|[CWinAppEx::WriteString](#cwinappex__writestring)|Writes the string data to the specified registry value.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CWinAppEx::LoadCustomState](#cwinappex__loadcustomstate)|Called by the framework when the application state has been loaded.|  
|[CWinAppEx::LoadWindowPlacement](#cwinappex__loadwindowplacement)|Called by the framework when it loads the size and location of your application from the registry. The loaded data includes the size and location of the main frame at the time your application last closed.|  
|[CWinAppEx::OnClosingMainFrame](#cwinappex__onclosingmainframe)|Called by the framework when a main frame window is processing `WM_CLOSE`.|  
|[CWinAppEx::PreLoadState](#cwinappex__preloadstate)|Called by the framework immediately before the application state is loaded.|  
|[CWinAppEx::PreSaveState](#cwinappex__presavestate)|Called by the framework immediately before the application state is saved.|  
|[CWinAppEx::ReloadWindowPlacement](#cwinappex__reloadwindowplacement)|Reloads the size and location of the supplied window from the registry|  
|[CWinAppEx::SaveCustomState](#cwinappex__savecustomstate)|Called by the framework after it writes the application state to the registry.|  
|[CWinAppEx::StoreWindowPlacement](#cwinappex__storewindowplacement)|Called by the framework to write the size and location of the main frame to the registry.|  
  
### Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CWinAppEx::m_bForceImageReset](#cwinappex__m_bforceimagereset)|Specifies whether the framework will reset all toolbar images when the frame window that contains the toolbar is loaded.|  
  
## Remarks  
 Much of the functionality provided by the MFC framework depends on the `CWinAppEx` class. You can incorporate the `CWinAppEx` class into your application in one of two ways:  
  
-   Construct a `CWinAppEx` class in the main thread.  
  
-   Derive the main application class from `CWinAppEx`.  
  
 After you incorporate `CWinAppEx` into your application, you can initialize any one of the application managers. Before you use an application manager, you must initialize it by calling the appropriate initialize method. To obtain a pointer to a specific manager, call the associated get method. The `CWinAppEx` class manages the following application managers: [CMouseManager Class](../../mfc/reference/cmousemanager-class.md), [CContextMenuManager Class](../../mfc/reference/ccontextmenumanager-class.md), [CKeyboardManager Class](../../mfc/reference/ckeyboardmanager-class.md), [CUserToolsManager Class](../../mfc/reference/cusertoolsmanager-class.md), and [CMenuTearOffManager Class](../../mfc/reference/cmenutearoffmanager-class.md).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWinThread](../../mfc/reference/cwinthread-class.md)  
  
 [CWinApp](../../mfc/reference/cwinapp-class.md)  
  
 [CWinAppEx](../../mfc/reference/cwinappex-class.md)  
  
## Requirements  
 **Header:** afxwinappex.h  
  
##  <a name="cwinappex__cleanstate"></a>  CWinAppEx::CleanState  
 Removes all the information about the application from the Windows registry.  
  
```  
virtual BOOL CleanState(LPCTSTR lpszSectionName=NULL);
```  
  
### Parameters  
 [in] `lpszSectionName`  
 A string that contains a path of a registry key.  
  
### Return Value  
 Nonzero if the method was successful; otherwise 0.  
  
### Remarks  
 This method clears application data from a specific section of the registry. You can specify the section to clear by using the parameter `lpszSectionName`. If `lpszSectionName` is `NULL`, this method will use the default registry path stored in the `CWinAppEx` object. To get the default registry path, use [CWinAppEx::GetRegistryBase](#cwinappex__getregistrybase).  
  
##  <a name="cwinappex__cwinappex"></a>  CWinAppEx::CWinAppEx  
 Constructs a `CWinAppEx` object.  
  
```  
CWinAppEx(BOOL bResourceSmartUpdate = FALSE);
```  
  
### Parameters  
 [in] `bResourceSmartUpdate`  
 A Boolean parameter that specifies whether the workspace object should detect and handle resource updates.  
  
### Remarks  
 The `CWinAppEx` class has initialization methods, provides functionality for saving and loading application information to the registry, and controls global application settings. It also enables you to use global managers such as the [CKeyboardManager Class](../../mfc/reference/ckeyboardmanager-class.md) and the [CUserToolsManager Class](../../mfc/reference/cusertoolsmanager-class.md). Each application can have only one instance of the `CWinAppEx` class.  
  
##  <a name="cwinappex__enableloadwindowplacement"></a>  CWinAppEx::EnableLoadWindowPlacement  
 Specifies whether the application will load the initial size and location of the main frame window from the registry.  
  
```  
void EnableLoadWindowPlacement(BOOL bEnable = TRUE);
```  
  
### Parameters  
 [in] `bEnable`  
 Specifies whether the application loads the initial size and location of the main frame window from the registry.  
  
### Remarks  
 By default, the size and location of the main frame is loaded from the registry together with other application settings. This occurs during [CWinAppEx::LoadState](#cwinappex__loadstate). If you do not want to load the initial window placement from the registry, call this method with `bEnable` set to `false`.  
  
##  <a name="cwinappex__enabletearoffmenus"></a>  CWinAppEx::EnableTearOffMenus  
 Creates and initializes a [CMenuTearOffManager](../../mfc/reference/cmenutearoffmanager-class.md) object.  
  
```  
BOOL EnableTearOffMenus(
    LPCTSTR lpszRegEntry,  
    const UINT uiCmdFirst,  
    const UINT uiCmdLast);
```  
  
### Parameters  
 [in] `lpszRegEntry`  
 A string that contains the path of a registry key. The application uses this registry key to store information for the tear-off menus.  
  
 [in] `uiCmdFirst`  
 The first tear off menu ID.  
  
 [in] `uiCmdLast`  
 The last tear off menu ID.  
  
### Return Value  
 `True` if the `CMenuTearOffManager` is created and initialized successfully; `false` if an error occurs or if the `CMenuTearOffManager` already exists.  
  
### Remarks  
 Use this function to enable tear-off menus in your application. You should call this function from `InitInstance`.  
  
##  <a name="cwinappex__enableusertools"></a>  CWinAppEx::EnableUserTools  
 Enables the user to create custom menu commands that reduce keystrokes in your application. This method creates a [CUserToolsManager](../../mfc/reference/cusertoolsmanager-class.md) object.  
  
```  
BOOL EnableUserTools(
    const UINT uiCmdToolsDummy,  
    const UINT uiCmdFirst,  
    const UINT uiCmdLast,  
    CRuntimeClass* pToolRTC = RUNTIME_CLASS(CUserTool),  
    UINT uArgMenuID = 0,  
    UINT uInitDirMenuID = 0);
```  
  
### Parameters  
 [in] `uiCmdToolsDummy`  
 An unsigned integer that the framework uses as a placeholder for the command ID of the user tools menu.  
  
 [in] `uiCmdFirst`  
 The command ID for the first user tool command.  
  
 [in] `uiCmdLast`  
 The command ID for the last user tool command.  
  
 [in] `pToolRTC`  
 A class that the `CUserToolsManager` object uses to create new user tools.  
  
 [in] `uArgMenuID`  
 The argument menu ID.  
  
 [in] `uInitDirMenuID`  
 The menu ID for the initial tool directory.  
  
### Return Value  
 `TRUE` if the method creates and initializes a `CUserToolsManager` object; `FALSE` if the method fails or if a `CUserToolsManager` object already exists.  
  
### Remarks  
 When you enable user-defined tools, the framework automatically supports a dynamic menu that can be extended during customization. The framework associates each new item with an external command. The framework invokes these commands when the user selects the appropriate item from the **Tools** menu.  
  
 Every time the user adds a new item, the framework creates a new object. The class type for the new object is defined by `pToolRTC`. The `pToolRTC` class type must be derived from the [CUserTool Class](../../mfc/reference/cusertool-class.md).  
  
 For more information about user tools and how to incorporate them into your application, see [User-defined Tools](../../mfc/user-defined-tools.md).  
  
##  <a name="cwinappex__exitinstance"></a>  CWinAppEx::ExitInstance  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual int ExitInstance();
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cwinappex__getbinary"></a>  CWinAppEx::GetBinary  
 Reads binary data from a specified registry key.  
  
```  
BOOL GetBinary(
    LPCTSTR lpszEntry,  
    LPBYTE* ppData,  
    UINT* pBytes);
```  
  
### Parameters  
 [in] `lpszEntry`  
 A string that contains the name of a registry key.  
  
 [out] `ppData`  
 A pointer to the buffer that the method fills with the binary data.  
  
 [out] `pBytes`  
 A pointer to an unsigned integer that the method uses to write the number of bytes read.  
  
### Return Value  
 `True` if successful; `false` otherwise.  
  
### Remarks  
 This method reads binary data written to the registry. To write data to the registry, use the methods [CWinAppEx::WriteBinary](#cwinappex__writebinary) and [CWinAppEx::WriteSectionBinary](#cwinappex__writesectionbinary).  
  
 The `lpszEntry` parameter is the name of a registry entry located under the default registry key for your application. To get or set the default registry key, use the methods [CWinAppEx::GetRegistryBase](#cwinappex__getregistrybase) and [CWinAppEx::SetRegistryBase](#cwinappex__setregistrybase) respectively.  
  
##  <a name="cwinappex__getcontextmenumanager"></a>  CWinAppEx::GetContextMenuManager  
 Returns a pointer to the global [CContextMenuManager](../../mfc/reference/ccontextmenumanager-class.md) object.  
  
```  
CContextMenuManager* GetContextMenuManager();
```  
  
### Return Value  
 A pointer to the global `CContextMenuManager` object.  
  
### Remarks  
 If the CContextMenuManager object is not initialized, this function calls [CWinAppEx::InitContextMenuManager](#cwinappex__initcontextmenumanager) before it returns a pointer.  
  
##  <a name="cwinappex__getdataversion"></a>  CWinAppEx::GetDataVersion  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
int GetDataVersion() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cwinappex__getdataversionmajor"></a>  CWinAppEx::GetDataVersionMajor  
 Returns the major version of the application that is saved in the Windows registry when you call [CWinAppEx::SaveState](#cwinappex__savestate).  
  
```  
int GetDataVersionMajor() const;

 
```  
  
### Return Value  
 An integer value that contains the major version number.  
  
##  <a name="cwinappex__getdataversionminor"></a>  CWinAppEx::GetDataVersionMinor  
 Returns the minor version of the application that is saved in the Windows registry when you call [CWinAppEx::SaveState](#cwinappex__savestate).  
  
```  
int GetDataVersionMinor() const;

 
```  
  
### Return Value  
 An integer value that contains the minor version number.  
  
##  <a name="cwinappex__getint"></a>  CWinAppEx::GetInt  
 Reads integer data from a specified registry key.  
  
```  
int GetInt(
    LPCTSTR lpszEntry,  
    int nDefault = 0);
```  
  
### Parameters  
 [in] `lpszEntry`  
 A string that contains the name of a registry entry.  
  
 [in] `nDefault`  
 The default value that the method returns if the specified registry entry does not exist.  
  
### Return Value  
 The registry data if the method was successful; otherwise `nDefault`.  
  
### Remarks  
 This method reads integer data from the registry. If there is no integer data associated with the registry key indicated by `lpszEntry`, this method returns `nDefault`. To write data to the registry, use the methods [CWinAppEx::WriteSectionInt](#cwinappex__writesectionint) and [CWinAppEx::WriteInt](#cwinappex__writeint).  
  
 The `lpszEntry` parameter is the name of a registry entry located under the default registry key for your application. To get or set the default registry key, use the methods [CWinAppEx::GetRegistryBase](#cwinappex__getregistrybase) and [CWinAppEx::SetRegistryBase](#cwinappex__setregistrybase) respectively.  
  
##  <a name="cwinappex__getkeyboardmanager"></a>  CWinAppEx::GetKeyboardManager  
 Returns a pointer to the global [CKeyboardManager](../../mfc/reference/ckeyboardmanager-class.md) object.  
  
```  
CKeyboardManager* GetKeyboardManager();
```  
  
### Return Value  
 A pointer to the global `CKeyboardManager` object.  
  
### Remarks  
 If the keyboard manager is not initialized, this function calls [CWinAppEx::InitKeyboardManager](#cwinappex__initkeyboardmanager) before it returns a pointer.  
  
##  <a name="cwinappex__getmousemanager"></a>  CWinAppEx::GetMouseManager  
 Returns a pointer to the global [CMouseManager](../../mfc/reference/cmousemanager-class.md) object.  
  
```  
CMouseManager* GetMouseManager();
```  
  
### Return Value  
 A pointer to the global `CMouseManager` object.  
  
### Remarks  
 If the mouse manager is not initialized,, this function calls [CWinAppEx::InitMouseManager](#cwinappex__initmousemanager) before it returns a pointer.  
  
##  <a name="cwinappex__getobject"></a>  CWinAppEx::GetObject  
 Reads [CObject](../../mfc/reference/cobject-class.md)-dervied data from the registry.  
  
```  
BOOL GetObject(
    LPCTSTR lpszEntry,  
    CObject& obj);
```  
  
### Parameters  
 [in] `lpszEntry`  
 A string that contains the relative path of a registry entry.  
  
 [out] `obj`  
 A reference to a `CObject`. The method uses this reference to store the registry data.  
  
### Return Value  
 Nonzero if the method was successful; otherwise 0.  
  
### Remarks  
 This method reads data from the registry that is derived from `CObject`. To write `CObject` data to the registry, use either [CWinAppEx::WriteObject](#cwinappex__writeobject) or [CWinAppEx::WriteSectionObject](#cwinappex__writesectionobject).  
  
 The `lpszEntry` parameter is the name of a registry entry that is located under the default registry key for your application. To get or set the default registry key, use the methods [CWinAppEx::GetRegistryBase](#cwinappex__getregistrybase) and [CWinAppEx::SetRegistryBase](#cwinappex__setregistrybase) respectively.  
  
##  <a name="cwinappex__getregistrybase"></a>  CWinAppEx::GetRegistryBase  
 Retrieves the default registry path for the application.  
  
```  
LPCTSTR GetRegistryBase();
```  
  
### Return Value  
 A string that contains the path of the default registry location.  
  
### Remarks  
 All methods of the [CWinAppEx Class](../../mfc/reference/cwinappex-class.md) that access the registry start in a default location. Use this method to retrieve a path of the default registry location. Use [CWinAppEx::SetRegistryBase](#cwinappex__setregistrybase) to change the default registry location.  
  
##  <a name="cwinappex__getregsectionpath"></a>  CWinAppEx::GetRegSectionPath  
 Creates and returns the absolute path of a registry key.  
  
```  
CString GetRegSectionPath(LPCTSTR szSectionAdd = _T(""));
```  
  
### Parameters  
 [in] `szSectionAdd`  
 A string that contains the relative path of a registry key.  
  
### Return Value  
 A `CString` that contains the absolute path of a registry key.  
  
### Remarks  
 This method defines the registry key's absolute path by appending the relative path in `szSectionAdd` to the default registry location for your application. To get the default registry key, use the method [CWinAppEx::GetRegistryBase](#cwinappex__getregistrybase).  
  
##  <a name="cwinappex__getsectionbinary"></a>  CWinAppEx::GetSectionBinary  
 Reads binary data from the registry.  
  
```  
BOOL GetSectionBinary(
    LPCTSTR lpszSubSection,  
    LPCTSTR lpszEntry,  
    LPBYTE* ppData,  
    UINT* pBytes);
```  
  
### Parameters  
 [in] `lpszSubSection`  
 A string that contains the relative path of a registry key.  
  
 [in] `lpszEntry`  
 A string that contains the value to read.  
  
 [out] `ppData`  
 A pointer to the buffer where the method stores the data.  
  
 [out] `pBytes`  
 A pointer to an unsigned integer. The method writes the size of `ppData` to this parameter.  
  
### Return Value  
 `True` if successful; otherwise `false`.  
  
### Remarks  
 This method reads binary data that is written to the registry using the methods [CWinAppEx::WriteBinary](#cwinappex__writebinary) and [CWinAppEx::WriteSectionBinary](#cwinappex__writesectionbinary).  
  
 The `lpszSubSection` parameter is not an absolute path for a registry entry. It is a relative path that is appended to the end of the default registry key for your application. To get or set the default registry key, use the methods [CWinAppEx::GetRegistryBase](#cwinappex__getregistrybase) and [CWinAppEx::SetRegistryBase](#cwinappex__setregistrybase) respectively.  
  
##  <a name="cwinappex__getsectionint"></a>  CWinAppEx::GetSectionInt  
 Reads integer data from the registry.  
  
```  
int GetSectionInt(
    LPCTSTR lpszSubSection,  
    LPCTSTR lpszEntry,  
    int nDefault = 0);
```  
  
### Parameters  
 [in] `lpszSubSection`  
 A string that contains the relative path of a registry key.  
  
 [in] `lpszEntry`  
 A string that contains the value to read.  
  
 [in] `nDefault`  
 The default value to return if the specified value does not exist.  
  
### Return Value  
 The integer data that is stored in the specified registry value; `nDefault` if the data does not exist.  
  
### Remarks  
 Use the methods [CWinAppEx::WriteInt](#cwinappex__writeint) and [CWinAppEx::WriteSectionInt](#cwinappex__writesectionint) to write integer data to the registry.  
  
 The `lpszSubSection` parameter is not an absolute path of a registry entry. It is a relative path that is added to the end of the default registry key for your application. To get or set the default registry key, use the methods [CWinAppEx::GetRegistryBase](#cwinappex__getregistrybase) and [CWinAppEx::SetRegistryBase](#cwinappex__setregistrybase) respectively.  
  
##  <a name="cwinappex__getsectionobject"></a>  CWinAppEx::GetSectionObject  
 Reads [CObject](../../mfc/reference/cobject-class.md) registry data from the registry.  
  
```  
BOOL GetSectionObject(
    LPCTSTR lpszSubSection,  
    LPCTSTR lpszEntry,  
    CObject& obj);
```  
  
### Parameters  
 [in] `lpszSubSection`  
 A string that contains the relative path of a registry key.  
  
 [in] `lpszEntry`  
 A string that contains the value to read.  
  
 [out] `obj`  
 A reference to a `CObject`. The method uses this `CObject` to store the registry data.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 This method reads data from the registry. The data read is `CObject` data, or data for a class derived from `CObject`. To write `CObject` data to the registry, use either [CWinAppEx::WriteObject](#cwinappex__writeobject) or [CWinAppEx::WriteSectionObject](#cwinappex__writesectionobject).  
  
 The `lpszSubSection` parameter is not an absolute path for a registry entry. It is a relative path that is appended to the end of the default registry key for your application. To get or set the default registry key, use the methods [CWinAppEx::GetRegistryBase](#cwinappex__getregistrybase) and [CWinAppEx::SetRegistryBase](#cwinappex__setregistrybase) respectively.  
  
##  <a name="cwinappex__getsectionstring"></a>  CWinAppEx::GetSectionString  
 Reads string data from the registry.  
  
```  
CString GetSectionString(
    LPCTSTR lpszSubSection,  
    LPCTSTR lpszEntry,  
    LPCTSTR lpszDefault = _T(""));
```  
  
### Parameters  
 [in] `lpszSubSection`  
 A string that contains the relative path of a registry key.  
  
 [in] `lpszEntry`  
 A string that contains the value to read.  
  
 [in] `lpszDefault`  
 The default value to return if the specified value does not exist.  
  
### Return Value  
 The string data stored in the specified registry value if the data exists; otherwise `lpszDefault`.  
  
### Remarks  
 This method reads string data written to the registry. Use [CWinAppEx::WriteString](#cwinappex__writestring) and [CWinAppEx::WriteSectionString](#cwinappex__writesectionstring) to write string data to the registry.  
  
 The `lpszSubSection` parameter is not an absolute path for a registry entry. It is a relative path that is appended to the end of the default registry key for your application. To get or set the default registry key, use the methods [CWinAppEx::GetRegistryBase](#cwinappex__getregistrybase) and [CWinAppEx::SetRegistryBase](#cwinappex__setregistrybase) respectively.  
  
##  <a name="cwinappex__getshellmanager"></a>  CWinAppEx::GetShellManager  
 Returns a pointer to the global [CShellManager](../../mfc/reference/cshellmanager-class.md) object.  
  
```  
CShellManager* GetShellManager();
```  
  
### Return Value  
 A pointer to the global `CShellManager` object.  
  
### Remarks  
 If the `CShellManager` object is not initialized, this function calls [CWinAppEx::InitShellManager](#cwinappex__initshellmanager) before it returns a pointer.  
  
##  <a name="cwinappex__getstring"></a>  CWinAppEx::GetString  
 Reads string data from a specified registry key.  
  
```  
CString GetString(
    LPCTSTR lpszEntry,  
    LPCTSTR lpzDefault= _T(""));
```  
  
### Parameters  
 [in] `lpszEntry`  
 A string that contains the name of a registry key  
  
 [in] `lpzDefault`  
 The default value that the method returns if the specified registry entry does not exist.  
  
### Return Value  
 The string data stored in the registry if successful; `lpszDefault` otherwise.  
  
### Remarks  
 This method reads string data written to the registry. To write data to the registry, use the methods [CWinAppEx::WriteString](#cwinappex__writestring) or [CWinAppEx::WriteSectionString](#cwinappex__writesectionstring).  
  
 The `lpszEntry` parameter is the name of a registry entry located under the default registry key for your application. To get or set the default registry key, use the methods [CWinAppEx::GetRegistryBase](#cwinappex__getregistrybase) and [CWinAppEx::SetRegistryBase](#cwinappex__setregistrybase) respectively.  
  
##  <a name="cwinappex__gettooltipmanager"></a>  CWinAppEx::GetTooltipManager  
 Returns a pointer to the global [CTooltipManager](../../mfc/reference/ctooltipmanager-class.md) object.  
  
```  
CTooltipManager* GetTooltipManager();
```  
  
### Return Value  
 A pointer to the global `CTooltipManager` object.  
  
### Remarks  
 If the `CTooltipManager` object is not initialized, this function calls [CWinAppEx::InitTooltipManager](#cwinappex__inittooltipmanager) before it returns a pointer.  
  
##  <a name="cwinappex__getusertoolsmanager"></a>  CWinAppEx::GetUserToolsManager  
 Returns a pointer to the global [CUserToolsManager](../../mfc/reference/cusertoolsmanager-class.md) object.  
  
```  
CUserToolsManager* GetUserToolsManager();
```  
  
### Return Value  
 A pointer to the global `CUserToolsManager` object; `NULL` if user tools management is not enabled for the application.  
  
### Remarks  
 Before you retrieve a pointer to the `CUserToolsManager` object, you must initialize the manager by calling [CWinAppEx::EnableUserTools](#cwinappex__enableusertools).  
  
##  <a name="cwinappex__initcontextmenumanager"></a>  CWinAppEx::InitContextMenuManager  
 Initializes the [CContextMenuManager](../../mfc/reference/ccontextmenumanager-class.md) object.  
  
```  
BOOL InitContextMenuManager();
```  
  
### Return Value  
 Nonzero if the method creates the CContextMenuManager object; 0 if the `CContextMenuManager` object already exists.  
  
### Remarks  
 If you call [CWinAppEx::GetContextMenuManager](#cwinappex__getcontextmenumanager), the default implementation of that method calls `InitContextMenuManager`.  
  
 If your application already has a context menu manager and you call `InitContextMenuManager`, your application will have an [ASSERT](http://msdn.microsoft.com/library/1e70902d-d58c-4e7b-9f69-2aeb6cbe476c) failure. Therefore, you should not call `InitContextMenuManager` if you create a `CContextMenuManager` object directly. If you are not using a custom `CContextMenuManager`, you should use `GetContextMenuManager` to create a `CContextMenuManager` object.  
  
##  <a name="cwinappex__initkeyboardmanager"></a>  CWinAppEx::InitKeyboardManager  
 Initializes the [CKeyboardManager](../../mfc/reference/ckeyboardmanager-class.md) object.  
  
```  
BOOL InitKeyboardManager();
```  
  
### Return Value  
 Nonzero if the method creates the `CKeyboardManager` object; 0 if the `CKeyboardManager` object already exists.  
  
### Remarks  
 If you call [CWinAppEx::GetKeyboardManager](#cwinappex__getkeyboardmanager), the default implementation of that method calls `InitKeyboardManager`.  
  
 If your application already has a keyboard manager and you call `InitKeyboardManager`, your application will have an [ASSERT](http://msdn.microsoft.com/library/1e70902d-d58c-4e7b-9f69-2aeb6cbe476c) failure. Therefore, you should not call `InitKeyboardManager` if you create a `CKeyboardManager` object directly. If you are not using a custom `CKeyboardManager`, you should use `GetKeyboardManager` to create a `CKeyboardManager` object.  
  
##  <a name="cwinappex__initmousemanager"></a>  CWinAppEx::InitMouseManager  
 Initializes the [CMouseManager](../../mfc/reference/cmousemanager-class.md) object.  
  
```  
BOOL InitMouseManager();
```  
  
### Return Value  
 Nonzero if the method creates the `CMouseManager` object; 0 if the `CMouseManager` object already exists.  
  
### Remarks  
 If you call [CWinAppEx::GetMouseManager](#cwinappex__getmousemanager), the default implementation of that method calls `InitMouseManager`.  
  
 If your application already has a mouse manager and you call `InitMouseManager`, your application will have an [ASSERT](http://msdn.microsoft.com/library/1e70902d-d58c-4e7b-9f69-2aeb6cbe476c) failure. Therefore you should not call `InitMouseManager` if you create a `CMouseManager` object directly. If you are not using a custom `CMouseManager`, you should use `GetMouseManager` to create a `CMouseManager` object.  
  
##  <a name="cwinappex__initshellmanager"></a>  CWinAppEx::InitShellManager  
 Initializes the [CShellManager](../../mfc/reference/cshellmanager-class.md) object.  
  
```  
BOOL InitShellManager();
```  
  
### Return Value  
 Nonzero if the method creates the `CShellManager` object; 0 if the `CShellManager` object already exists.  
  
### Remarks  
 If you call [CWinAppEx::GetShellManager](#cwinappex__getshellmanager), the default implementation of that method calls `InitShellManager`.  
  
 If your application already has a shell manager and you call `InitShellManager`, your application raises an [ASSERT](http://msdn.microsoft.com/library/1e70902d-d58c-4e7b-9f69-2aeb6cbe476c) failure. Therefore, do not call `InitShellManager` if you create a `CShellManager` object directly. If you are not using a custom `CShellManager`, use `GetShellManager` to create a `CShellManager` object.  
  
##  <a name="cwinappex__inittooltipmanager"></a>  CWinAppEx::InitTooltipManager  
 Initializes the [CTooltipManager](../../mfc/reference/ctooltipmanager-class.md) object.  
  
```  
BOOL InitTooltipManager();
```  
  
### Return Value  
 Nonzero if the method creates the `CTooltipManager` object; 0 if the `CTooltipManager` object already exists.  
  
### Remarks  
 If you call [CWinAppEx::GetTooltipManager](#cwinappex__gettooltipmanager), the default implementation of that method calls `InitTooltipManager`.  
  
 If your application already has a tooltip manager and you call `InitTooltipManager`, your application will have an [ASSERT](http://msdn.microsoft.com/library/1e70902d-d58c-4e7b-9f69-2aeb6cbe476c) failure. Therefore, you should not call `InitTooltipManager` if you create a `CTooltipManager` object directly. If you are not using a custom `CTooltipManager`, you should use `GetTooltipManager` to create a `CTooltipManager` object.  
  
##  <a name="cwinappex__isresourcesmartupdate"></a>  CWinAppEx::IsResourceSmartUpdate  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsResourceSmartUpdate() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cwinappex__isstateexists"></a>  CWinAppEx::IsStateExists  
 Indicates whether the specified key is in the registry.  
  
```  
BOOL IsStateExists(LPCTSTR lpszSectionName);
```  
  
### Parameters  
 [in] `lpszSectionName`  
 A string that contains a path of a registry key.  
  
### Return Value  
 Nonzero if the key is in the registry; otherwise 0.  
  
##  <a name="cwinappex__loadcustomstate"></a>  CWinAppEx::LoadCustomState  
 The framework calls this method after it loads the state of the application from the registry.  
  
```  
virtual void LoadCustomState();
```  
  
### Remarks  
 Override this method if you want to do any processing after the application loads the state from the registry. By default, this method does nothing.  
  
 In order to load custom state information from the registry, the information must first be saved by using [CWinAppEx::SaveCustomState](#cwinappex__savecustomstate).  
  
##  <a name="cwinappex__loadstate"></a>  CWinAppEx::LoadState  
 Reads the application state from the Windows registry.  
  
```  
BOOL LoadState(
    CMDIFrameWndEx* pFrame,  
    LPCTSTR lpszSectionName = NULL);

 
BOOL LoadState(
    CFrameWndEx* pFrame,  
    LPCTSTR lpszSectionName = NULL);

 
BOOL LoadState(
    COleIPFrameWndEx* pFrame,  
    LPCTSTR lpszSectionName = NULL);

 
virtual BOOL LoadState(
    LPCTSTR lpszSectionName = NULL,  
    CFrameImpl* pFrameImpl = NULL);
```  
  
### Parameters  
 [in] `pFrame`  
 A pointer to a frame window object. The method applies the state information in the registry to this frame window.  
  
 [in] `lpszSectionName`  
 A string that contains the relative path of a registry key.  
  
 [in] `pFrameImpl`  
 A pointer to a `CFrameImpl` object. The method applies the state information in the registry to this frame window.  
  
### Return Value  
 Nonzero if successful; 0 otherwise.  
  
### Remarks  
 This method loads the state of the application and any state information for a frame window. The loaded information for the frame window is applied to the supplied frame window. If you do not supply a frame window, only the application state information is loaded. The application information includes the state of the [CMouseManager Class](../../mfc/reference/cmousemanager-class.md), [CContextMenuManager Class](../../mfc/reference/ccontextmenumanager-class.md), [CKeyboardManager Class](../../mfc/reference/ckeyboardmanager-class.md), and the [CUserToolsManager Class](../../mfc/reference/cusertoolsmanager-class.md).  
  
 The default implementation of `CFrameImpl::OnLoadFrame` calls `LoadState`.  
  
 The `lpszSectionName` parameter is not the absolute path for a registry entry. It is a relative path that is added to the end of the default registry key for your application. To get or set the default registry key, use the methods [CWinAppEx::GetRegistryBase](#cwinappex__getregistrybase) and [CWinAppEx::SetRegistryBase](#cwinappex__setregistrybase) respectively.  
  
##  <a name="cwinappex__loadwindowplacement"></a>  CWinAppEx::LoadWindowPlacement  
 Called by the framework when it loads the size and location of the main frame window from the registry.  
  
```  
virtual BOOL LoadWindowPlacement(
    CRect& rectNormalPosition,  
    int& nFlags,  
    int& nShowCmd);
```  
  
### Parameters  
 [out] `rectNormalPosition`  
 A rectangle that contains the coordinates of the main frame window when it is in the restored position.  
  
 [out] `nFlags`  
 Flags that control the position of the minimized window and how the operating system switches between a minimized window and a restored window.  
  
 [out] `nShowCmd`  
 An integer that specifies the show state of the window. For more information about possible values, see [CWnd::ShowWindow](../../mfc/reference/cwnd-class.md#cwnd__showwindow).  
  
### Return Value  
 Nonzero if successful; 0 otherwise.  
  
### Remarks  
 By default, MFC automatically loads the previous position and state of the main frame window when the application starts. For more information about how this information is stored in the registry, see [CWinAppEx::StoreWindowPlacement](#cwinappex__storewindowplacement).  
  
 Override this method if you want to load additional information about the main frame window.  
  
##  <a name="cwinappex__m_bforceimagereset"></a>  CWinAppEx::m_bForceImageReset  
 Specifies whether the framework resets all toolbar images when it reloads the frame window that contains the toolbar.  
  
```  
BOOL m_bForceImageReset;  
```  
  
### Remarks  
 The `m_bForceImageReset` data member is a protected variable.  
  
##  <a name="cwinappex__onappcontexthelp"></a>  CWinAppEx::OnAppContextHelp  
 The framework calls this method when the user requests context help for the **Customization** dialog box.  
  
```  
virtual void OnAppContextHelp(
    CWnd* pWndControl,  
    const DWORD dwHelpIDArray[]);
```  
  
### Parameters  
 [in] `pWndControl`  
 A pointer to a window object for which the user invoked context help.  
  
 [in] `dwHelpIDArray[]`  
 A reserved value.  
  
### Remarks  
 This method is currently reserved for future use. The default implementation does nothing and it is currently not called by the framework.  
  
##  <a name="cwinappex__onclosingmainframe"></a>  CWinAppEx::OnClosingMainFrame  
 The framework calls this method when a frame window is processing `WM_CLOSE`.  
  
```  
virtual void OnClosingMainFrame(CFrameImpl* pFrameImpl);
```  
  
### Parameters  
 [in] `pFrameImpl`  
 A pointer to a `CFrameImpl` object.  
  
### Remarks  
 The default implementation of this method saves the state of `pFrameImpl`.  
  
##  <a name="cwinappex__onviewdoubleclick"></a>  CWinAppEx::OnViewDoubleClick  
 Calls the user-defined command that is associated with a view when the user double-clicks anywhere within that view.  
  
```  
virtual BOOL OnViewDoubleClick(
    CWnd* pWnd,  
    int iViewId);
```  
  
### Parameters  
 [in] `pWnd`  
 A pointer to an object derived from the [CView Class](../../mfc/reference/cview-class.md).  
  
 [in] `iViewId`  
 The view ID.  
  
### Return Value  
 `True` if the framework finds a command; otherwise false.  
  
### Remarks  
 In order to support custom mouse behavior, you must call this function when you process the `WM_LBUTTONDBLCLK` message. This method will execute the command associated with the view ID supplied by `iViewId`. For more information about custom mouse behavior, see [Keyboard and Mouse Customization](../../mfc/keyboard-and-mouse-customization.md).  
  
##  <a name="cwinappex__onworkspaceidle"></a>  CWinAppEx::OnWorkspaceIdle  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL OnWorkspaceIdle(CWnd*);
```  
  
### Parameters  
 [in] `CWnd*`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cwinappex__preloadstate"></a>  CWinAppEx::PreLoadState  
 The framework calls this method immediately before it loads the state of the application from the registry.  
  
```  
virtual void PreLoadState();
```  
  
### Remarks  
 Override this method if you want to do any processing immediately before the framework loads the application state.  
  
##  <a name="cwinappex__presavestate"></a>  CWinAppEx::PreSaveState  
 The framework calls this method immediately before it saves the application state.  
  
```  
virtual void PreSaveState();
```  
  
### Remarks  
 Override this method if you want to do any processing immediately before the framework saves the application state.  
  
##  <a name="cwinappex__reloadwindowplacement"></a>  CWinAppEx::ReloadWindowPlacement  
 Reloads the size and location of a window from the registry.  
  
```  
virtual BOOL ReloadWindowPlacement(CFrameWnd* pFrame);
```  
  
### Parameters  
 [in] `pFrame`  
 A pointer to a frame window.  
  
### Return Value  
 Nonzero if the method was successful; 0 if the load failed or there is no data to load.  
  
### Remarks  
 Use the function [CWinAppEx::StoreWindowPlacement](#cwinappex__storewindowplacement) to write the size and location of a window to the registry.  
  
##  <a name="cwinappex__savecustomstate"></a>  CWinAppEx::SaveCustomState  
 The framework calls this method after it saves the state of the application to the registry.  
  
```  
virtual void SaveCustomState();
```  
  
### Remarks  
 Override this method if you want to do any processing after the application saves the state to the registry. By default, this method does nothing.  
  
##  <a name="cwinappex__savestate"></a>  CWinAppEx::SaveState  
 Writes the application state to the Windows registry.  
  
```  
virtual BOOL SaveState(
    LPCTSTR lpszSectionName = NULL,  
    CFrameImpl* pFrameImpl = NULL);

 
BOOL SaveState(
    CMDIFrameWndEx* pFrame,  
    LPCTSTR lpszSectionName = NULL);

 
BOOL SaveState(
    CFrameWndEx* pFrame,  
    LPCTSTR lpszSectionName = NULL);

 
BOOL SaveState(
    COleIPFrameWndEx* pFrame,  
    LPCTSTR lpszSectionName = NULL);
```  
  
### Parameters  
 [in] `lpszSectionName`  
 A string that contains the relative path of a registry key.  
  
 [in] `pFrameImpl`  
 A pointer to a `CFrameImpl` object. This frame is saved to the Windows registry.  
  
 [in] `pFrame`  
 A pointer to a frame window object. This frame is saved to the Windows registry.  
  
### Return Value  
 `True` if successful; `false` otherwise.  
  
### Remarks  
 This method saves the state of the application and any state information for the provided frame window. If you do not provide a frame window, the method only saves the application state. The application information includes the state of the [CMouseManager Class](../../mfc/reference/cmousemanager-class.md), [CContextMenuManager Class](../../mfc/reference/ccontextmenumanager-class.md), [CKeyboardManager Class](../../mfc/reference/ckeyboardmanager-class.md), and the [CUserToolsManager Class](../../mfc/reference/cusertoolsmanager-class.md).  
  
 The `lpszSectionName` parameter is not the absolute path for a registry entry. It is a relative path that is appended to the end of the default registry key for your application. To get or set the default registry key, use the methods [CWinAppEx::GetRegistryBase](#cwinappex__getregistrybase) and [CWinAppEx::SetRegistryBase](#cwinappex__setregistrybase) respectively.  
  
##  <a name="cwinappex__setregistrybase"></a>  CWinAppEx::SetRegistryBase  
 Sets the default registry path for the application.  
  
```  
LPCTSTR SetRegistryBase(LPCTSTR lpszSectionName = NULL);
```  
  
### Parameters  
 [in] `lpszSectionName`  
 A string that contains the path of a registry key.  
  
### Return Value  
 A string that contains the path of the default registry location.  
  
### Remarks  
 All methods of the [CWinAppEx Class](../../mfc/reference/cwinappex-class.md) that access the registry start in a default location. Use this method to change that default registry location. Use [CWinAppEx::GetRegistryBase](#cwinappex__getregistrybase) to retrieve the default registry location.  
  
##  <a name="cwinappex__showpopupmenu"></a>  CWinAppEx::ShowPopupMenu  
 Displays a popup menu.  
  
```  
virtual BOOL ShowPopupMenu(
    UINT uiMenuResId,  
    const CPoint& point,  
    CWnd* pWnd);
```  
  
### Parameters  
 [in] `uiMenuResId`  
 A menu resource ID.  
  
 [in] `point`  
 A [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) that specifies the position of the menu in screen coordinates.  
  
 [in] `pWnd`  
 A pointer to the window that owns the popup menu.  
  
### Return Value  
 Nonzero if the popup menu is displayed successfully; 0 otherwise.  
  
### Remarks  
 This method displays the menu associated with `uiMenuResId`.  
  
 To support popup menus, you must have a [CContextMenuManager](../../mfc/reference/ccontextmenumanager-class.md) object. If you have not initialized the `CContextMenuManager` object, `ShowPopupMenu` will fail.  
  
##  <a name="cwinappex__storewindowplacement"></a>  CWinAppEx::StoreWindowPlacement  
 Called by the framework to write the size and location of the main frame window to the registry.  
  
```  
virtual BOOL StoreWindowPlacement(
    const CRect& rectNormalPosition,  
    int nFlags,  
    int nShowCmd);
```  
  
### Parameters  
 [in] `nFlags`  
 Flags that control the position of the minimized window and how the operating system switches between a minimized window and a restored window.  
  
 [in] `nShowCmd`  
 An integer that specifies the show state of the window. For more information about possible values, see [CWnd::ShowWindow](../../mfc/reference/cwnd-class.md#cwnd__showwindow).  
  
 [in] `rectNormalPosition`  
 A rectangle that contains the coordinates of the main frame window when it is in the restored state.  
  
### Return Value  
 Nonzero if successful; 0 otherwise.  
  
### Remarks  
 By default, MFC automatically saves the position and state of the main frame window before the application exits. This information is stored in the Windows registry under the WindowPlacement key in the default registry location for your application. For more information about the default registry location of your application, see [CWinAppEx::GetRegistryBase](#cwinappex__getregistrybase).  
  
 Override this method if you want to store additional information about the main frame window.  
  
##  <a name="cwinappex__writebinary"></a>  CWinAppEx::WriteBinary  
 Writes binary data to the registry.  
  
```  
BOOL WriteBinary(
    LPCTSTR lpszEntry,  
    LPBYTE pData,  
    UINT nBytes);
```  
  
### Parameters  
 [in] `lpszEntry`  
 A string that contains the name of a registry key.  
  
 [in] `pData`  
 The data to store.  
  
 [in] `nBytes`  
 The size of `pData` in bytes.  
  
### Return Value  
 `TRUE` if this method is successful; otherwise `FALSE`.  
  
### Remarks  
 The `lpszEntry` parameter is the name of a registry entry that is located under the default registry key for your application. To get or set the default registry key, use the methods [CWinAppEx::GetRegistryBase](#cwinappex__getregistrybase) and [CWinAppEx::SetRegistryBase](#cwinappex__setregistrybase) respectively.  
  
 If the key specified by `lpszEntry` does not exist, this method will create it.  
  
##  <a name="cwinappex__writeint"></a>  CWinAppEx::WriteInt  
 Writes numeric data to the registry.  
  
```  
BOOL WriteInt(
    LPCTSTR lpszEntry,  
    int nValue);
```  
  
### Parameters  
 [in] `lpszEntry`  
 A string that contains the name of a registry key.  
  
 [in] `nValue`  
 The data to store.  
  
### Return Value  
 `TRUE` if this method is successful; otherwise `FALSE`.  
  
### Remarks  
 The `lpszEntry` parameter is the name of a registry entry located under the default registry key for your application. To get or set the default registry key, use the methods [CWinAppEx::GetRegistryBase](#cwinappex__getregistrybase) and [CWinAppEx::SetRegistryBase](#cwinappex__setregistrybase) respectively.  
  
 If the key specified by `lpszEntry` does not exist, this method will create it.  
  
##  <a name="cwinappex__writeobject"></a>  CWinAppEx::WriteObject  
 Writes data derived from the [CObject Class](../../mfc/reference/cobject-class.md) to the registry.  
  
```  
BOOL WriteObject(
    LPCTSTR lpszEntry,  
    CObject& obj);
```  
  
### Parameters  
 [in] `lpszEntry`  
 A string that contains the value to set.  
  
 [in] `obj`  
 A reference to `CObject` data that the method will store.  
  
### Return Value  
 `TRUE` if this method is successful; otherwise `FALSE`.  
  
### Remarks  
 This method writes the `obj` data to the specified value under the default registry key. Use [CWinAppEx::GetRegistryBase](#cwinappex__getregistrybase) to determine the current registry key.  
  
##  <a name="cwinappex__writesectionbinary"></a>  CWinAppEx::WriteSectionBinary  
 Writes binary data to a value in the registry.  
  
```  
BOOL WriteSectionBinary(
    LPCTSTR lpszSubSection,  
    LPCTSTR lpszEntry,  
    LPBYTE pData,  
    UINT nBytes);
```  
  
### Parameters  
 [in] `lpszSubSection`  
 A string that contains the name of a registry key  
  
 [in] `lpszEntry`  
 A string that contains the value to set.  
  
 [in] `pData`  
 The data to write to the registry.  
  
 [in] `nBytes`  
 The size of `pData` in bytes.  
  
### Return Value  
 `TRUE` if this method is successful; otherwise `FALSE`.  
  
### Remarks  
 The `lpszSubSection` parameter is not the absolute path for a registry entry. It is a relative path that is appended to the end of the default registry key for your application. To get or set the default registry key, use the methods [CWinAppEx::GetRegistryBase](#cwinappex__getregistrybase) and [CWinAppEx::SetRegistryBase](#cwinappex__setregistrybase) respectively.  
  
 If the key specified by `lpszEntry` does not exist, this method will create it.  
  
##  <a name="cwinappex__writesectionint"></a>  CWinAppEx::WriteSectionInt  
 Writes numeric data to the registry.  
  
```  
BOOL WriteSectionInt(
    LPCTSTR lpszSubSection,  
    LPCTSTR lpszEntry,  
    int nValue);
```  
  
### Parameters  
 [in] `lpszSubSection`  
 A string that contains the relative path of a registry key.  
  
 [in] `lpszEntry`  
 A string that contains the value to set.  
  
 [in] `nValue`  
 The data to write to the registry.  
  
### Return Value  
 `TRUE` if this method is successful; otherwise `FALSE`.  
  
### Remarks  
 The `lpszSubSection` parameter is not an absolute path for a registry entry. It is a relative path that is appended to the default registry key for your application. To get or set the default registry key, use the methods [CWinAppEx::GetRegistryBase](#cwinappex__getregistrybase) and [CWinAppEx::SetRegistryBase](#cwinappex__setregistrybase) respectively.  
  
 If the key specified by `lpszEntry` does not exist, this method will create it.  
  
##  <a name="cwinappex__writesectionobject"></a>  CWinAppEx::WriteSectionObject  
 Writes data derived from the [CObject Class](../../mfc/reference/cobject-class.md) to a specific registry value.  
  
```  
BOOL WriteSectionObject(
    LPCTSTR lpszSubSection,  
    LPCTSTR lpszEntry,  
    CObject& obj);
```  
  
### Parameters  
 [in] `lpszSubSection`  
 A string that contains the name of a registry key.  
  
 [in] `lpszEntry`  
 A string that contains the name of the value to set.  
  
 [in] `obj`  
 The data to store.  
  
### Return Value  
 `TRUE` if this method is successful; otherwise `FALSE`.  
  
### Remarks  
 The `lpszSubSection` parameter is not an absolute path for a registry entry. It is a relative path that is appended to the end of the default registry key for your application. To get or set the default registry key, use the methods [CWinAppEx::GetRegistryBase](#cwinappex__getregistrybase) and [CWinAppEx::SetRegistryBase](#cwinappex__setregistrybase), respectively.  
  
 If the value specified by `lpszEntry` does not exist under the registry key specified by `lpszSubSection`, this method will create that value.  
  
##  <a name="cwinappex__writesectionstring"></a>  CWinAppEx::WriteSectionString  
 Writes string data to a value in the registry.  
  
```  
BOOL WriteSectionString(
    LPCTSTR lpszSubSection,  
    LPCTSTR lpszEntry,  
    LPCTSTR lpszValue);
```  
  
### Parameters  
 [in] `lpszSubSection`  
 A string that contains the name of a registry key.  
  
 [in] `lpszEntry`  
 A string that contains the value to set.  
  
 [in] `lpszValue`  
 The string data to write to the registry.  
  
### Return Value  
 `TRUE` if this method is successful; otherwise `FALSE`.  
  
### Remarks  
 The `lpszSubSection` parameter is not an absolute path for a registry entry. It is a relative path that is appended to the end of the default registry key for your application. To get or set the default registry key, use the methods [CWinAppEx::GetRegistryBase](#cwinappex__getregistrybase) and [CWinAppEx::SetRegistryBase](#cwinappex__setregistrybase), respectively.  
  
 If the value specified by `lpszEntry` does not exist under `lpszSubSection`, this method will create it.  
  
##  <a name="cwinappex__writestring"></a>  CWinAppEx::WriteString  
 Writes string data to the registry.  
  
```  
BOOL WriteString(
    LPCTSTR lpszEntry,  
    LPCTSTR lpszValue);
```  
  
### Parameters  
 [in] `lpszEntry`  
 A string that contains the name of a registry key.  
  
 [in] `lpszValue`  
 The data to store.  
  
### Return Value  
 `TRUE` if this method is successful; otherwise `FALSE`.  
  
### Remarks  
 The `lpszEntry` parameter is the name of a registry entry located under the default registry key for your application. To get or set the default registry key, use the methods [CWinAppEx::GetRegistryBase](#cwinappex__getregistrybase) and [CWinAppEx::SetRegistryBase](#cwinappex__setregistrybase) respectively.  
  
 If the key specified by `lspzEntry` does not exist, this method will create it.  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CWinApp Class](../../mfc/reference/cwinapp-class.md)   
 [CMouseManager Class](../../mfc/reference/cmousemanager-class.md)   
 [CContextMenuManager Class](../../mfc/reference/ccontextmenumanager-class.md)   
 [CKeyboardManager Class](../../mfc/reference/ckeyboardmanager-class.md)   
 [CUserToolsManager Class](../../mfc/reference/cusertoolsmanager-class.md)
