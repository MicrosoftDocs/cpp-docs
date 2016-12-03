---
title: "CMDIFrameWnd Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMDIFrameWnd"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MDI frame windows"
  - "CMDIFrameWnd class"
ms.assetid: fa8736e6-511b-4c51-8b4d-eba78378aeb9
caps.latest.revision: 22
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
# CMDIFrameWnd Class
Provides the functionality of a Windows multiple document interface (MDI) frame window, along with members for managing the window.  
  
## Syntax  
  
```  
class CMDIFrameWnd : public CFrameWnd  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMDIFrameWnd::CMDIFrameWnd](#cmdiframewnd__cmdiframewnd)|Constructs a `CMDIFrameWnd`.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMDIFrameWnd::CreateClient](#cmdiframewnd__createclient)|Creates a Windows **MDICLIENT** window for this `CMDIFrameWnd`. Called by the `OnCreate` member function of `CWnd`.|  
|[CMDIFrameWnd::CreateNewChild](#cmdiframewnd__createnewchild)|Creates a new child window.|  
|[CMDIFrameWnd::GetWindowMenuPopup](#cmdiframewnd__getwindowmenupopup)|Returns the Window pop-up menu.|  
|[CMDIFrameWnd::MDIActivate](#cmdiframewnd__mdiactivate)|Activates a different MDI child window.|  
|[CMDIFrameWnd::MDICascade](#cmdiframewnd__mdicascade)|Arranges all child windows in a cascaded format.|  
|[CMDIFrameWnd::MDIGetActive](#cmdiframewnd__mdigetactive)|Retrieves the currently active MDI child window, along with a flag indicating whether or not the child is maximized.|  
|[CMDIFrameWnd::MDIIconArrange](#cmdiframewnd__mdiiconarrange)|Arranges all minimized document child windows.|  
|[CMDIFrameWnd::MDIMaximize](#cmdiframewnd__mdimaximize)|Maximizes an MDI child window.|  
|[CMDIFrameWnd::MDINext](#cmdiframewnd__mdinext)|Activates the child window immediately behind the currently active child window and places the currently active child window behind all other child windows.|  
|[CMDIFrameWnd::MDIPrev](#cmdiframewnd__mdiprev)|Activates the previous child window and places the currently active child window immediately behind it.|  
|[CMDIFrameWnd::MDIRestore](#cmdiframewnd__mdirestore)|Restores an MDI child window from maximized or minimized size.|  
|[CMDIFrameWnd::MDISetMenu](#cmdiframewnd__mdisetmenu)|Replaces the menu of an MDI frame window, the Window pop-up menu, or both.|  
|[CMDIFrameWnd::MDITile](#cmdiframewnd__mditile)|Arranges all child windows in a tiled format.|  
  
## Remarks  
 To create a useful MDI frame window for your application, derive a class from `CMDIFrameWnd`. Add member variables to the derived class to store data specific to your application. Implement message-handler member functions and a message map in the derived class to specify what happens when messages are directed to the window.  
  
 You can construct an MDI frame window by calling the [Create](../../mfc/reference/cframewnd-class.md#cframewnd__create) or [LoadFrame](../../mfc/reference/cframewnd-class.md#cframewnd__loadframe) member function of `CFrameWnd`.  
  
 Before you call **Create** or `LoadFrame`, you must construct the frame window object on the heap using the C++ **new** operator. Before calling **Create** you can also register a window class with the [AfxRegisterWndClass](application-information-and-management.md#afxregisterwndclass) global function to set the icon and class styles for the frame.  
  
 Use the **Create** member function to pass the frame's creation parameters as immediate arguments.  
  
 `LoadFrame` requires fewer arguments than **Create**, and instead retrieves most of its default values from resources, including the frame's caption, icon, accelerator table, and menu. To be accessed by `LoadFrame`, all these resources must have the same resource ID (for example, **IDR_MAINFRAME**).  
  
 Though **MDIFrameWnd** is derived from `CFrameWnd`, a frame window class derived from `CMDIFrameWnd` need not be declared with `DECLARE_DYNCREATE`.  
  
 The `CMDIFrameWnd` class inherits much of its default implementation from `CFrameWnd`. For a detailed list of these features, refer to the [CFrameWnd](../../mfc/reference/cframewnd-class.md) class description. The `CMDIFrameWnd` class has the following additional features:  
  
-   An MDI frame window manages the **MDICLIENT** window, repositioning it in conjunction with control bars. The MDI client window is the direct parent of MDI child frame windows. The **WS_HSCROLL** and **WS_VSCROLL** window styles specified on a `CMDIFrameWnd` apply to the MDI client window rather than the main frame window so the user can scroll the MDI client area (as in the Windows Program Manager, for example).  
  
-   An MDI frame window owns a default menu that is used as the menu bar when there is no active MDI child window. When there is an active MDI child, the MDI frame window's menu bar is automatically replaced by the MDI child window menu.  
  
-   An MDI frame window works in conjunction with the current MDI child window, if there is one. For instance, command messages are delegated to the currently active MDI child before the MDI frame window.  
  
-   An MDI frame window has default handlers for the following standard Window menu commands:  
  
    - **ID_WINDOW_TILE_VERT**  
  
    - **ID_WINDOW_TILE_HORZ**  
  
    - **ID_WINDOW_CASCADE**  
  
    - **ID_WINDOW_ARRANGE**  
  
-   An MDI frame window also has an implementation of **ID_WINDOW_NEW**, which creates a new frame and view on the current document. An application can override these default command implementations to customize MDI window handling.  
  
 Do not use the C++ **delete** operator to destroy a frame window. Use `CWnd::DestroyWindow` instead. The `CFrameWnd` implementation of `PostNcDestroy` will delete the C++ object when the window is destroyed. When the user closes the frame window, the default `OnClose` handler will call `DestroyWindow`.  
  
 For more information on `CMDIFrameWnd`, see [Frame Windows](../../mfc/frame-windows.md).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CFrameWnd](../../mfc/reference/cframewnd-class.md)  
  
 `CMDIFrameWnd`  
  
## Requirements  
 **Header:** afxwin.h  
  
##  <a name="cmdiframewnd__cmdiframewnd"></a>  CMDIFrameWnd::CMDIFrameWnd  
 Constructs a `CMDIFrameWnd` object.  
  
```  
CMDIFrameWnd();
```  
  
### Remarks  
 Call the **Create** or `LoadFrame` member function to create the visible MDI frame window.  
  
### Example  
 [!code-cpp[NVC_MFCWindowing#13](../../mfc/reference/codesnippet/cpp/cmdiframewnd-class_1.cpp)]  
  
##  <a name="cmdiframewnd__createclient"></a>  CMDIFrameWnd::CreateClient  
 Creates the MDI client window that manages the `CMDIChildWnd` objects.  
  
```  
virtual BOOL CreateClient(
    LPCREATESTRUCT lpCreateStruct,  
    CMenu* pWindowMenu);
```  
  
### Parameters  
 `lpCreateStruct`  
 A long pointer to a [CREATESTRUCT](../../mfc/reference/createstruct-structure.md) structure.  
  
 `pWindowMenu`  
 A pointer to the Window pop-up menu.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 This member function should be called if you override the `OnCreate` member function directly.  
  
### Example  
 [!code-cpp[NVC_MFCWindowing#14](../../mfc/reference/codesnippet/cpp/cmdiframewnd-class_2.cpp)]  
  
##  <a name="cmdiframewnd__createnewchild"></a>  CMDIFrameWnd::CreateNewChild  
 Creates a new child window.  
  
```  
CMDIChildWnd* CreateNewChild(
    CRuntimeClass* pClass,  
    UINT nResource,  
    HMENU hMenu = NULL,  
    HACCEL hAccel = NULL);
```  
  
### Parameters  
 `pClass`  
 The run-time class of the child window to be created.  
  
 *nResource*  
 The ID of shared resources associated with the child window.  
  
 `hMenu`  
 The child window's menu.  
  
 `hAccel`  
 The child window's accelerator.  
  
### Remarks  
 Use this function to create child windows of an MDI frame window.  
  
### Example  
 [!code-cpp[NVC_MFCWindowing#15](../../mfc/reference/codesnippet/cpp/cmdiframewnd-class_3.cpp)]  
  
 This example is an excerpt from Knowledge Base article Q201045, "HOWTO: Add Multiple Window Types to a Non-Document/View MDI App." Knowledge Base articles are available in the MSDN Library Visual Studio documentation or at [http://support.microsoft.com](http://support.microsoft.com/).  
  
##  <a name="cmdiframewnd__getwindowmenupopup"></a>  CMDIFrameWnd::GetWindowMenuPopup  
 Call this member function to obtain a handle to the current pop-up menu named "Window" (the pop-up menu with menu items for MDI window management).  
  
```  
virtual HMENU GetWindowMenuPopup(HMENU hMenuBar);
```  
  
### Parameters  
 *hMenuBar*  
 The current menu bar.  
  
### Return Value  
 The Window pop-up menu if one exists; otherwise **NULL**.  
  
### Remarks  
 The default implementation looks for a pop-up menu containing standard Window menu commands such as **ID_WINDOW_NEW** and **ID_WINDOW_TILE_HORZ**.  
  
 Override this member function if you have a Window menu that does not use the standard menu command IDs.  
  
### Example  
 [!code-cpp[NVC_MFCWindowing#16](../../mfc/reference/codesnippet/cpp/cmdiframewnd-class_4.cpp)]  
  
##  <a name="cmdiframewnd__mdiactivate"></a>  CMDIFrameWnd::MDIActivate  
 Activates a different MDI child window.  
  
```  
void MDIActivate(CWnd* pWndActivate);
```  
  
### Parameters  
 *pWndActivate*  
 Points to the MDI child window to be activated.  
  
### Remarks  
 This member function sends the [WM_MDIACTIVATE](../../mfc/reference/cwnd-class.md#cwnd__onmdiactivate) message to both the child window being activated and the child window being deactivated.  
  
 This is the same message that is sent if the user changes the focus to an MDI child window by using the mouse or keyboard.  
  
> [!NOTE]
>  An MDI child window is activated independently of the MDI frame window. When the frame becomes active, the child window that was last activated is sent a [WM_NCACTIVATE](../../mfc/reference/cwnd-class.md#cwnd__onncactivate) message to draw an active window frame and caption bar, but it does not receive another `WM_MDIACTIVATE` message.  
  
### Example  
 See the example for [CMDIFrameWnd::GetWindowMenuPopup](#cmdiframewnd__getwindowmenupopup).  
  
##  <a name="cmdiframewnd__mdicascade"></a>  CMDIFrameWnd::MDICascade  
 Arranges all the MDI child windows in a cascade format.  
  
```  
void MDICascade();

 
void MDICascade(int nType);
```  
  
### Parameters  
 `nType`  
 Specifies a cascade flag. Only the following flag can be specified: `MDITILE_SKIPDISABLED`, which prevents disabled MDI child windows from being cascaded.  
  
### Remarks  
 The first version of `MDICascade`, with no parameters, cascades all MDI child windows, including disabled ones. The second version optionally does not cascade disabled MDI child windows if you specify `MDITILE_SKIPDISABLED` for the `nType` parameter.  
  
### Example  
 [!code-cpp[NVC_MFCWindowing#17](../../mfc/reference/codesnippet/cpp/cmdiframewnd-class_5.cpp)]  
  
##  <a name="cmdiframewnd__mdigetactive"></a>  CMDIFrameWnd::MDIGetActive  
 Retrieves the current active MDI child window, along with a flag indicating whether the child window is maximized.  
  
```  
CMDIChildWnd* MDIGetActive(BOOL* pbMaximized = NULL) const;

 
```  
  
### Parameters  
 *pbMaximized*  
 A pointer to a **BOOL** return value. Set to **TRUE** on return if the window is maximized; otherwise **FALSE**.  
  
### Return Value  
 A pointer to the active MDI child window.  
  
### Example  
 See the example for [CMDIChildWnd::MDIMaximize](../../mfc/reference/cmdichildwnd-class.md#cmdichildwnd__mdimaximize).  
  
##  <a name="cmdiframewnd__mdiiconarrange"></a>  CMDIFrameWnd::MDIIconArrange  
 Arranges all minimized document child windows.  
  
```  
void MDIIconArrange();
```  
  
### Remarks  
 It does not affect child windows that are not minimized.  
  
### Example  
 See the example for [CMDIFrameWnd::MDICascade](#cmdiframewnd__mdicascade).  
  
##  <a name="cmdiframewnd__mdimaximize"></a>  CMDIFrameWnd::MDIMaximize  
 Maximizes the specified MDI child window.  
  
```  
void MDIMaximize(CWnd* pWnd);
```  
  
### Parameters  
 `pWnd`  
 Points to the window to maximize.  
  
### Remarks  
 When a child window is maximized, Windows resizes it to make its client area fill the client window. Windows places the child window's Control menu in the frame's menu bar so the user can restore or close the child window. It also adds the title of the child window to the frame-window title.  
  
 If another MDI child window is activated when the currently active MDI child window is maximized, Windows restores the currently active child and maximizes the newly activated child window.  
  
### Example  
 See the example for [CMDIChildWnd::MDIMaximize](../../mfc/reference/cmdichildwnd-class.md#cmdichildwnd__mdimaximize).  
  
##  <a name="cmdiframewnd__mdinext"></a>  CMDIFrameWnd::MDINext  
 Activates the child window immediately behind the currently active child window and places the currently active child window behind all other child windows.  
  
```  
void MDINext();
```  
  
### Remarks  
 If the currently active MDI child window is maximized, the member function restores the currently active child and maximizes the newly activated child.  
  
### Example  
 [!code-cpp[NVC_MFCWindowing#18](../../mfc/reference/codesnippet/cpp/cmdiframewnd-class_6.cpp)]  
  
##  <a name="cmdiframewnd__mdiprev"></a>  CMDIFrameWnd::MDIPrev  
 Activates the previous child window and places the currently active child window immediately behind it.  
  
```  
void MDIPrev();
```  
  
### Remarks  
 If the currently active MDI child window is maximized, the member function restores the currently active child and maximizes the newly activated child.  
  
##  <a name="cmdiframewnd__mdirestore"></a>  CMDIFrameWnd::MDIRestore  
 Restores an MDI child window from maximized or minimized size.  
  
```  
void MDIRestore(CWnd* pWnd);
```  
  
### Parameters  
 `pWnd`  
 Points to the window to restore.  
  
### Example  
 See the example for [CMDIChildWnd::MDIRestore](../../mfc/reference/cmdichildwnd-class.md#cmdichildwnd__mdirestore).  
  
##  <a name="cmdiframewnd__mdisetmenu"></a>  CMDIFrameWnd::MDISetMenu  
 Replaces the menu of an MDI frame window, the Window pop-up menu, or both.  
  
```  
CMenu* MDISetMenu(
    CMenu* pFrameMenu,  
    CMenu* pWindowMenu);
```  
  
### Parameters  
 *pFrameMenu*  
 Specifies the menu of the new frame-window menu. If **NULL**, the menu is not changed.  
  
 `pWindowMenu`  
 Specifies the menu of the new Window pop-up menu. If **NULL**, the menu is not changed.  
  
### Return Value  
 A pointer to the frame-window menu replaced by this message. The pointer may be temporary and should not be stored for later use.  
  
### Remarks  
 After calling `MDISetMenu`, an application must call the [DrawMenuBar](../../mfc/reference/cwnd-class.md#cwnd__drawmenubar) member function of `CWnd` to update the menu bar.  
  
 If this call replaces the Window pop-up menu, MDI child-window menu items are removed from the previous Window menu and added to the new Window pop-up menu.  
  
 If an MDI child window is maximized and this call replaces the MDI frame-window menu, the Control menu and restore controls are removed from the previous frame-window menu and added to the new menu.  
  
 Do not call this member function if you use the framework to manage your MDI child windows.  
  
### Example  
 [!code-cpp[NVC_MFCWindowing#19](../../mfc/reference/codesnippet/cpp/cmdiframewnd-class_7.cpp)]  
  
 [!code-cpp[NVC_MFCWindowing#20](../../mfc/reference/codesnippet/cpp/cmdiframewnd-class_8.cpp)]  
  
##  <a name="cmdiframewnd__mditile"></a>  CMDIFrameWnd::MDITile  
 Arranges all child windows in a tiled format.  
  
```  
void MDITile();

 
void MDITile(int nType);
```  
  
### Parameters  
 `nType`  
 Specifies a tiling flag. This parameter can be any one of the following flags:  
  
- `MDITILE_HORIZONTAL` Tiles MDI child windows so that one window appears above another.  
  
- `MDITILE_SKIPDISABLED` Prevents disabled MDI child windows from being tiled.  
  
- `MDITILE_VERTICAL` Tiles MDI child windows so that one window appears beside another.  
  
### Remarks  
 The first version of `MDITile`, without parameters, tiles the windows vertically under Windows versions 3.1 and later. The second version tiles windows vertically or horizontally, depending on the value of the `nType` parameter.  
  
### Example  
 See the example for [CMDIFrameWnd::MDICascade](#cmdiframewnd__mdicascade).  
  
## See Also  
 [MFC Sample MDI](../../visual-cpp-samples.md)   
 [MFC Sample MDIDOCVW](../../visual-cpp-samples.md)   
 [MFC Sample SNAPVW](../../visual-cpp-samples.md)   
 [CFrameWnd Class](../../mfc/reference/cframewnd-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CWnd Class](../../mfc/reference/cwnd-class.md)   
 [CMDIChildWnd Class](../../mfc/reference/cmdichildwnd-class.md)
