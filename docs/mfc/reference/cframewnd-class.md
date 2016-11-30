---
title: "CFrameWnd Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CFrameWnd"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "frame window classes, base class"
  - "single document interface (SDI), frame windows"
  - "frame windows, creating"
  - "CFrameWnd class"
ms.assetid: e2220aba-5bf4-4002-b960-fbcafcad01f1
caps.latest.revision: 21
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
# CFrameWnd Class
Provides the functionality of a Windows single document interface (SDI) overlapped or pop-up frame window, along with members for managing the window.  
  
## Syntax  
  
```  
class CFrameWnd : public CWnd  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CFrameWnd::CFrameWnd](#cframewnd__cframewnd)|Constructs a `CFrameWnd` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CFrameWnd::ActivateFrame](#cframewnd__activateframe)|Makes the frame visible and available to the user.|  
|[CFrameWnd::BeginModalState](#cframewnd__beginmodalstate)|Sets the frame window to modal.|  
|[CFrameWnd::Create](#cframewnd__create)|Call to create and initialize the Windows frame window associated with the `CFrameWnd` object.|  
|[CFrameWnd::CreateView](#cframewnd__createview)|Creates a view within a frame that is not derived from `CView`.|  
|[CFrameWnd::DockControlBar](#cframewnd__dockcontrolbar)|Docks a control bar.|  
|[CFrameWnd::EnableDocking](#cframewnd__enabledocking)|Allows a control bar to be docked.|  
|[CFrameWnd::EndModalState](#cframewnd__endmodalstate)|Ends the frame window's modal state. Enables all of the windows disabled by `BeginModalState`.|  
|[CFrameWnd::FloatControlBar](#cframewnd__floatcontrolbar)|Floats a control bar.|  
|[CFrameWnd::GetActiveDocument](#cframewnd__getactivedocument)|Returns the active **CDocument** object.|  
|[CFrameWnd::GetActiveFrame](#cframewnd__getactiveframe)|Returns the active `CFrameWnd` object.|  
|[CFrameWnd::GetActiveView](#cframewnd__getactiveview)|Returns the active `CView` object.|  
|[CFrameWnd::GetControlBar](#cframewnd__getcontrolbar)|Retrieves the control bar.|  
|[CFrameWnd::GetDockState](#cframewnd__getdockstate)|Retrieves the dock state of a frame window.|  
|[CFrameWnd::GetMenuBarState](#cframewnd__getmenubarstate)|Retrieves the display state of the menu in the current MFC application.|  
|[CFrameWnd::GetMenuBarVisibility](#cframewnd__getmenubarvisibility)|Indicates whether the default behavior of the menu in the current MFC application is  either hidden or visible.|  
|[CFrameWnd::GetMessageBar](#cframewnd__getmessagebar)|Returns a pointer to the status bar belonging to the frame window.|  
|[CFrameWnd::GetMessageString](#cframewnd__getmessagestring)|Retrieves message corresponding to a command ID.|  
|[CFrameWnd::GetTitle](#cframewnd__gettitle)|Retrieves the title of the related control bar.|  
|[CFrameWnd::InitialUpdateFrame](#cframewnd__initialupdateframe)|Causes the `OnInitialUpdate` member function belonging to all views in the frame window to be called.|  
|[CFrameWnd::InModalState](#cframewnd__inmodalstate)|Returns a value indicating whether or not a frame window is in a modal state.|  
|[CFrameWnd::IsTracking](#cframewnd__istracking)|Determines if splitter bar is currently being moved.|  
|[CFrameWnd::LoadAccelTable](#cframewnd__loadacceltable)|Call to load an accelerator table.|  
|[CFrameWnd::LoadBarState](#cframewnd__loadbarstate)|Call to restore control bar settings.|  
|[CFrameWnd::LoadFrame](#cframewnd__loadframe)|Call to dynamically create a frame window from resource information.|  
|[CFrameWnd::NegotiateBorderSpace](#cframewnd__negotiateborderspace)|Negotiates border space in the frame window.|  
|[CFrameWnd::OnBarCheck](#cframewnd__onbarcheck)|Called whenever an action is performed on the specified control bar.|  
|[CFrameWnd::OnContextHelp](#cframewnd__oncontexthelp)|Handles SHIFT+F1 Help for in-place items.|  
|[CFrameWnd::OnSetPreviewMode](#cframewnd__onsetpreviewmode)|Sets the application's main frame window into and out of print-preview mode.|  
|[CFrameWnd::OnUpdateControlBarMenu](#cframewnd__onupdatecontrolbarmenu)|Called by the framework when the associated menu is updated.|  
|[CFrameWnd::RecalcLayout](#cframewnd__recalclayout)|Repositions the control bars of the `CFrameWnd` object.|  
|[CFrameWnd::SaveBarState](#cframewnd__savebarstate)|Call to save control bar settings.|  
|[CFrameWnd::SetActivePreviewView](#cframewnd__setactivepreviewview)|Designates the specified view to be the active view for Rich Preview.|  
|[CFrameWnd::SetActiveView](#cframewnd__setactiveview)|Sets the active `CView` object.|  
|[CFrameWnd::SetDockState](#cframewnd__setdockstate)|Call to dock the frame window in the main window.|  
|[CFrameWnd::SetMenuBarState](#cframewnd__setmenubarstate)|Sets the display state of the menu in the current MFC application to hidden or displayed.|  
|[CFrameWnd::SetMenuBarVisibility](#cframewnd__setmenubarvisibility)|Sets the default behavior of the menu in the current MFC application to be either hidden or visible.|  
|[CFrameWnd::SetMessageText](#cframewnd__setmessagetext)|Sets the text of a standard status bar.|  
|[CFrameWnd::SetProgressBarPosition](#cframewnd__setprogressbarposition)|Sets current position for Windows 7 progress bar displayed on taskbar.|  
|[CFrameWnd::SetProgressBarRange](#cframewnd__setprogressbarrange)|Sets range for Windows 7 progress bar displayed on taskbar.|  
|[CFrameWnd::SetProgressBarState](#cframewnd__setprogressbarstate)|Sets the type and state of the progress indicator displayed on a taskbar button.|  
|[CFrameWnd::SetTaskbarOverlayIcon](#cframewnd__settaskbaroverlayicon)|Overloaded. Applies an overlay to a taskbar button to indicate application status or a notification to the user.|  
|[CFrameWnd::SetTitle](#cframewnd__settitle)|Sets the title of the related control bar.|  
|[CFrameWnd::ShowControlBar](#cframewnd__showcontrolbar)|Call to show the control bar.|  
|[CFrameWnd::ShowOwnedWindows](#cframewnd__showownedwindows)|Shows all windows that are descendants of the `CFrameWnd` object.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CFrameWnd::OnCreateClient](#cframewnd__oncreateclient)|Creates a client window for the frame.|  
|[CFrameWnd::OnHideMenuBar](#cframewnd__onhidemenubar)|Called before the menu in the current MFC application is hidden.|  
|[CFrameWnd::OnShowMenuBar](#cframewnd__onshowmenubar)|Called before the menu in the current MFC application is displayed.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CFrameWnd::m_bAutoMenuEnable](#cframewnd__m_bautomenuenable)|Controls automatic enable and disable functionality for menu items.|  
|[CFrameWnd::rectDefault](#cframewnd__rectdefault)|Pass this static `CRect` as a parameter when creating a `CFrameWnd` object to allow Windows to choose the window's initial size and position.|  
  
## Remarks  
 To create a useful frame window for your application, derive a class from `CFrameWnd`. Add member variables to the derived class to store data specific to your application. Implement message-handler member functions and a message map in the derived class to specify what happens when messages are directed to the window.  
  
 There are three ways to construct a frame window:  
  
-   Directly construct it using [Create](#cframewnd__create).  
  
-   Directly construct it using [LoadFrame](#cframewnd__loadframe).  
  
-   Indirectly construct it using a document template.  
  
 Before you call either **Create** or `LoadFrame`, you must construct the frame-window object on the heap using the C++ **new** operator. Before calling **Create**, you can also register a window class with the [AfxRegisterWndClass](../../mfc/reference/application-information-and-management.md#afxregisterwndclass) global function to set the icon and class styles for the frame.  
  
 Use the **Create** member function to pass the frame's creation parameters as immediate arguments.  
  
 `LoadFrame` requires fewer arguments than **Create**, and instead retrieves most of its default values from resources, including the frame's caption, icon, accelerator table, and menu. To be accessible by `LoadFrame`, all these resources must have the same resource ID (for example, **IDR_MAINFRAME**).  
  
 When a `CFrameWnd` object contains views and documents, they are created indirectly by the framework instead of directly by the programmer. The `CDocTemplate` object orchestrates the creation of the frame, the creation of the containing views, and the connection of the views to the appropriate document. The parameters of the `CDocTemplate` constructor specify the `CRuntimeClass` of the three classes involved (document, frame, and view). A `CRuntimeClass` object is used by the framework to dynamically create new frames when specified by the user (for example, by using the File New command or the multiple document interface (MDI) Window New command).  
  
 A frame-window class derived from `CFrameWnd` must be declared with `DECLARE_DYNCREATE` in order for the above `RUNTIME_CLASS` mechanism to work correctly.  
  
 A `CFrameWnd` contains default implementations to perform the following functions of a main window in a typical application for Windows:  
  
-   A `CFrameWnd` frame window keeps track of a currently active view that is independent of the Windows active window or the current input focus. When the frame is reactivated, the active view is notified by calling `CView::OnActivateView`.  
  
-   Command messages and many common frame-notification messages, including those handled by the `OnSetFocus`, `OnHScroll`, and `OnVScroll` functions of `CWnd`, are delegated by a `CFrameWnd` frame window to the currently active view.  
  
-   The currently active view (or currently active MDI child frame window in the case of an MDI frame) can determine the caption of the frame window. This feature can be disabled by turning off the **FWS_ADDTOTITLE** style bit of the frame window.  
  
-   A `CFrameWnd` frame window manages the positioning of the control bars, views, and other child windows inside the frame window's client area. A frame window also does idle-time updating of toolbar and other control-bar buttons. A `CFrameWnd` frame window also has default implementations of commands for toggling on and off the toolbar and status bar.  
  
-   A `CFrameWnd` frame window manages the main menu bar. When a pop-up menu is displayed, the frame window uses the **UPDATE_COMMAND_UI** mechanism to determine which menu items should be enabled, disabled, or checked. When the user selects a menu item, the frame window updates the status bar with the message string for that command.  
  
-   A `CFrameWnd` frame window has an optional accelerator table that automatically translates keyboard accelerators.  
  
-   A `CFrameWnd` frame window has an optional help ID set with `LoadFrame` that is used for context-sensitive help. A frame window is the main orchestrator of semimodal states such as context-sensitive help (SHIFT+F1) and print-preview modes.  
  
-   A `CFrameWnd` frame window will open a file dragged from the File Manager and dropped on the frame window. If a file extension is registered and associated with the application, the frame window responds to the dynamic data exchange (DDE) open request that occurs when the user opens a data file in the File Manager or when the **ShellExecute** Windows function is called.  
  
-   If the frame window is the main application window (that is, `CWinThread::m_pMainWnd`), when the user closes the application, the frame window prompts the user to save any modified documents (for `OnClose` and `OnQueryEndSession`).  
  
-   If the frame window is the main application window, the frame window is the context for running WinHelp. Closing the frame window will shut down WINHELP.EXE if it was launched for help for this application.  
  
 Do not use the C++ **delete** operator to destroy a frame window. Use `CWnd::DestroyWindow` instead. The `CFrameWnd` implementation of `PostNcDestroy` will delete the C++ object when the window is destroyed. When the user closes the frame window, the default `OnClose` handler will call `DestroyWindow`.  
  
 For more information on `CFrameWnd`, see [Frame Windows](../../mfc/frame-windows.md).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CFrameWnd`  
  
## Requirements  
 **Header:** afxwin.h  
  
##  <a name="cframewnd__activateframe"></a>  CFrameWnd::ActivateFrame  
 Call this member function to activate and restore the frame window so that it is visible and available to the user.  
  
```  
virtual void ActivateFrame(int nCmdShow = -1);
```  
  
### Parameters  
 `nCmdShow`  
 Specifies the parameter to pass to [CWnd::ShowWindow](../../mfc/reference/cwnd-class.md#cwnd__showwindow). By default, the frame is shown and correctly restored.  
  
### Remarks  
 This member function is usually called after a non-user interface event such as a DDE, OLE, or other event that may show the frame window or its contents to the user.  
  
 The default implementation activates the frame and brings it to the top of the Z-order and, if necessary, carries out the same steps for the application's main frame window.  
  
 Override this member function to change how a frame is activated. For example, you can force MDI child windows to be maximized. Add the appropriate functionality, then call the base class version with an explicit `nCmdShow`.  
  
### Example  
 [!code-cpp[NVC_MFCWindowing#1](../../mfc/reference/codesnippet/cpp/cframewnd-class_1.cpp)]  
  
##  <a name="cframewnd__beginmodalstate"></a>  CFrameWnd::BeginModalState  
 Call this member function to make a frame window modal.  
  
```  
virtual void BeginModalState();
```  
  
##  <a name="cframewnd__cframewnd"></a>  CFrameWnd::CFrameWnd  
 Constructs a `CFrameWnd` object, but does not create the visible frame window.  
  
```  
CFrameWnd();
```  
  
### Remarks  
 Call **Create** to create the visible window.  
  
##  <a name="cframewnd__create"></a>  CFrameWnd::Create  
 Call to create and initialize the Windows frame window associated with the `CFrameWnd` object.  
  
```  
virtual BOOL Create(
    LPCTSTR lpszClassName,  
    LPCTSTR lpszWindowName,  
    DWORD dwStyle = WS_OVERLAPPEDWINDOW,  
    const RECT& rect = rectDefault,  
    CWnd* pParentWnd = NULL,  
    LPCTSTR lpszMenuName = NULL,  
    DWORD dwExStyle = 0,  
    CCreateContext* pContext = NULL);
```  
  
### Parameters  
 `lpszClassName`  
 Points to a null-terminated character string that names the Windows class. The class name can be any name registered with the `AfxRegisterWndClass` global function or the **RegisterClass** Windows function. If **NULL**, uses the predefined default `CFrameWnd` attributes.  
  
 `lpszWindowName`  
 Points to a null-terminated character string that represents the window name. Used as text for the title bar.  
  
 `dwStyle`  
 Specifies the window [style](../../mfc/reference/window-styles.md) attributes. Include the **FWS_ADDTOTITLE** style if you want the title bar to automatically display the name of the document represented in the window.  
  
 `rect`  
 Specifies the size and position of the window. The `rectDefault` value allows Windows to specify the size and position of the new window.  
  
 `pParentWnd`  
 Specifies the parent window of this frame window. This parameter should be **NULL** for top-level frame windows.  
  
 *lpszMenuName*  
 Identifies the name of the menu resource to be used with the window. Use **MAKEINTRESOURCE** if the menu has an integer ID instead of a string. This parameter can be **NULL**.  
  
 `dwExStyle`  
 Specifies the window extended [style](../../mfc/reference/extended-window-styles.md) attributes.  
  
 `pContext`  
 Specifies a pointer to a [CCreateContext](../../mfc/reference/ccreatecontext-structure.md) structure. This parameter can be **NULL**.  
  
### Return Value  
 Nonzero if initialization is successful; otherwise 0.  
  
### Remarks  
 Construct a `CFrameWnd` object in two steps. First, invoke the constructor, which constructs the `CFrameWnd` object, and then call **Create**, which creates the Windows frame window and attaches it to the `CFrameWnd` object. **Create** initializes the window's class name and window name and registers default values for its style, parent, and associated menu.  
  
 Use `LoadFrame` rather than **Create** to load the frame window from a resource instead of specifying its arguments.  
  
##  <a name="cframewnd__createview"></a>  CFrameWnd::CreateView  
 Call `CreateView` to create a view within a frame.  
  
```  
CWnd* CreateView(
    CCreateContext* pContext,  
    UINT nID = AFX_IDW_PANE_FIRST);
```  
  
### Parameters  
 `pContext`  
 Specifies the type of view and document.  
  
 `nID`  
 The ID number of a view.  
  
### Return Value  
 Pointer to a `CWnd` object if successful; otherwise **NULL**.  
  
### Remarks  
 Use this member function to create "views" that are not `CView`-derived within a frame. After calling `CreateView`, you must manually set the view to active and set it to be visible; these tasks are not automatically performed by `CreateView`.  
  
##  <a name="cframewnd__dockcontrolbar"></a>  CFrameWnd::DockControlBar  
 Causes a control bar to be docked to the frame window.  
  
```  
void DockControlBar(
    CControlBar* pBar,  
    UINT nDockBarID = 0,  
    LPCRECT lpRect = NULL);
```  
  
### Parameters  
 `pBar`  
 Points to the control bar to be docked.  
  
 `nDockBarID`  
 Determines which sides of the frame window to consider for docking. It can be 0, or one or more of the following:  
  
- `AFX_IDW_DOCKBAR_TOP` Dock to the top side of the frame window.  
  
- **AFX_IDW_DOCKBAR_BOTTOM** Dock to the bottom side of the frame window.  
  
- `AFX_IDW_DOCKBAR_LEFT` Dock to the left side of the frame window.  
  
- `AFX_IDW_DOCKBAR_RIGHT` Dock to the right side of the frame window.  
  
 If 0, the control bar can be docked to any side enabled for docking in the destination frame window.  
  
 `lpRect`  
 Determines, in screen coordinates, where the control bar will be docked in the nonclient area of the destination frame window.  
  
### Remarks  
 The control bar will be docked to one of the sides of the frame window specified in the calls to both [CControlBar::EnableDocking](../../mfc/reference/ccontrolbar-class.md#ccontrolbar__enabledocking) and [CFrameWnd::EnableDocking](#cframewnd__enabledocking). The side chosen is determined by `nDockBarID`.  
  
##  <a name="cframewnd__enabledocking"></a>  CFrameWnd::EnableDocking  
 Call this function to enable dockable control bars in a frame window.  
  
```  
void EnableDocking(DWORD dwDockStyle);
```  
  
### Parameters  
 `dwDockStyle`  
 Specifies which sides of the frame window can serve as docking sites for control bars. It can be one or more of the following:  
  
- `CBRS_ALIGN_TOP` Allows docking at the top of the client area.  
  
- `CBRS_ALIGN_BOTTOM` Allows docking at the bottom of the client area.  
  
- `CBRS_ALIGN_LEFT` Allows docking on the left side of the client area.  
  
- `CBRS_ALIGN_RIGHT` Allows docking on the right side of the client area.  
  
- `CBRS_ALIGN_ANY` Allows docking on any side of the client area.  
  
### Remarks  
 By default, control bars will be docked to a side of the frame window in the following order: top, bottom, left, right.  
  
### Example  
  See the example for [CToolBar::Create](../../mfc/reference/ctoolbar-class.md#ctoolbar__create).  
  
##  <a name="cframewnd__endmodalstate"></a>  CFrameWnd::EndModalState  
 Call this member function to change a frame window from modal to modeless.  
  
```  
virtual void EndModalState();
```  
  
### Remarks  
 `EndModalState` enables all of the windows disabled by [BeginModalState](#cframewnd__beginmodalstate).  
  
##  <a name="cframewnd__floatcontrolbar"></a>  CFrameWnd::FloatControlBar  
 Call this function to cause a control bar to not be docked to the frame window.  
  
```  
void FloatControlBar(
    CControlBar* pBar,  
    CPoint point,  
    DWORD dwStyle = CBRS_ALIGN_TOP);
```  
  
### Parameters  
 `pBar`  
 Points to the control bar to be floated.  
  
 `point`  
 The location, in screen coordinates, where the top left corner of the control bar will be placed.  
  
 `dwStyle`  
 Specifies whether to align the control bar horizontally or vertically within its new frame window. It can be any one of the following:  
  
- `CBRS_ALIGN_TOP` Orients the control bar vertically.  
  
- `CBRS_ALIGN_BOTTOM` Orients the control bar vertically.  
  
- `CBRS_ALIGN_LEFT` Orients the control bar horizontally.  
  
- `CBRS_ALIGN_RIGHT` Orients the control bar horizontally.  
  
 If styles are passed specifying both horizontal and vertical orientation, the toolbar will be oriented horizontally.  
  
### Remarks  
 Typically, this is done at application startup when the program is restoring settings from the previous execution.  
  
 This function is called by the framework when the user causes a drop operation by releasing the left mouse button while dragging the control bar over a location that is not available for docking.  
  
##  <a name="cframewnd__getactivedocument"></a>  CFrameWnd::GetActiveDocument  
 Call this member function to obtain a pointer to the current **CDocument** attached to the current active view.  
  
```  
virtual CDocument* GetActiveDocument();
```  
  
### Return Value  
 A pointer to the current [CDocument](../../mfc/reference/cdocument-class.md). If there is no current document, returns **NULL**.  
  
##  <a name="cframewnd__getactiveframe"></a>  CFrameWnd::GetActiveFrame  
 Call this member function to obtain a pointer to the active multiple document interface (MDI) child window of an MDI frame window.  
  
```  
virtual CFrameWnd* GetActiveFrame();
```  
  
### Return Value  
 A pointer to the active MDI child window. If the application is an SDI application, or the MDI frame window has no active document, the implicit **this** pointer will be returned.  
  
### Remarks  
 If there is no active MDI child or the application is a single document interface (SDI), the implicit **this** pointer is returned.  
  
##  <a name="cframewnd__getactiveview"></a>  CFrameWnd::GetActiveView  
 Call this member function to obtain a pointer to the active view (if any) attached to a frame window ( `CFrameWnd`).  
  
```  
CView* GetActiveView() const;

 
```  
  
### Return Value  
 A pointer to the current [CView](../../mfc/reference/cview-class.md). If there is no current view, returns **NULL**.  
  
### Remarks  
 This function returns **NULL** when called for an MDI main frame window ( `CMDIFrameWnd`). In an MDI application, the MDI main frame window does not have a view associated with it. Instead, each individual child window ( `CMDIChildWnd`) has one or more associated views. The active view in an MDI application can be obtained by first finding the active MDI child window and then finding the active view for that child window. The active MDI child window can be found by calling the function `MDIGetActive` or **GetActiveFrame** as demonstrated in the following:  
  
 [!code-cpp[NVC_MFCWindowing#2](../../mfc/reference/codesnippet/cpp/cframewnd-class_2.cpp)]  
  
##  <a name="cframewnd__getcontrolbar"></a>  CFrameWnd::GetControlBar  
 Call `GetControlBar` to gain access to the control bar that is associated with the ID.  
  
```  
CControlBar* GetControlBar(UINT nID);
```  
  
### Parameters  
 `nID`  
 The ID number of a control bar.  
  
### Return Value  
 A pointer to the control bar that is associated with the ID.  
  
### Remarks  
 The `nID` parameter refers to the unique identifier passed to the **Create** method of the control bar. For more information on control bars, refer to the topic entitled [Control Bars](../../mfc/control-bars.md).  
  
 `GetControlBar` will return the control bar even if it is floating and thus is not currently a child window of the frame.  
  
##  <a name="cframewnd__getdockstate"></a>  CFrameWnd::GetDockState  
 Call this member function to store state information about the frame window's control bars in a `CDockState` object.  
  
```  
void GetDockState(CDockState& state) const;

 
```  
  
### Parameters  
 `state`  
 Contains the current state of the frame window's control bars upon return.  
  
### Remarks  
 You can then write the contents of `CDockState` to storage using `CDockState::SaveState` or `Serialize`. If you later want to restore the control bars to a previous state, load the state with `CDockState::LoadState` or `Serialize`, then call `SetDockState` to apply the previous state to the frame window's control bars.  
  
##  <a name="cframewnd__getmenubarstate"></a>  CFrameWnd::GetMenuBarState  
 Retrieves the display state of the menu in the current MFC application.  
  
```  
virtual DWORD GetMenuBarState();
```  
  
### Return Value  
 The return value can have the following values:  
  
-   AFX_MBS_VISIBLE (0x01) – The menu is visible.  
  
-   AFX_MBS_HIDDEN (0x02) – The menu is hidden.  
  
### Remarks  
 If a runtime error occurs, this method asserts in Debug mode and raises an exception derived from the [CException](../../mfc/reference/cexception-class.md) class.  
  
##  <a name="cframewnd__getmenubarvisibility"></a>  CFrameWnd::GetMenuBarVisibility  
 Indicates whether the default state of the menu in the current MFC application is hidden or visible.  
  
```  
virtual DWORD CFrameWnd::GetMenuBarVisibility();
```  
  
### Return Value  
 This method returns one of the following values:  
  
-   AFX_MBV_KEEPVISIBLE (0x01) - The menu is displayed at all times, and by default does not have the focus.  
  
-   AFX_MBV_DISPLAYONFOCUS (0x02) - The menu is hidden by default. If the menu is hidden, press the ALT key to display the menu and give it the focus. If the menu is displayed, press the ALT or ESC key to hide it.  
  
-   AFX_MBV_ DISPLAYONFOCUS (0x02) &#124; AFX_MBV_DISPLAYONF10 (0x04) (bitwise combination (OR)) - The menu is hidden by default. If the menu is hidden, press the F10 key to display the menu and give it the focus. If the menu is displayed, press the F10 key to toggle the focus on or off the menu. The menu is displayed until you press the ALT or ESC key to hide it.  
  
### Remarks  
 If a runtime error occurs, this method asserts in Debug mode and raises an exception derived from the [CException](../../mfc/reference/cexception-class.md) class.  
  
##  <a name="cframewnd__getmessagebar"></a>  CFrameWnd::GetMessageBar  
 Call this member function to get a pointer to the status bar.  
  
```  
virtual CWnd* GetMessageBar();
```  
  
### Return Value  
 Pointer to the status-bar window.  
  
##  <a name="cframewnd__getmessagestring"></a>  CFrameWnd::GetMessageString  
 Override this function to provide custom strings for command IDs.  
  
```  
virtual void GetMessageString(
    UINT nID,  
    CString& rMessage) const;

 
```  
  
### Parameters  
 `nID`  
 Resource ID of the desired message.  
  
 `rMessage`  
 `CString` object into which to place the message.  
  
### Remarks  
 The default implementation simply loads the string specified by `nID` from the resource file. This function is called by the framework when the message string in the status bar needs updating.  
  
##  <a name="cframewnd__gettitle"></a>  CFrameWnd::GetTitle  
 Retrieves the title of the window object.  
  
```  
CString GetTitle() const;

 
```  
  
### Return Value  
 A [CString](../../atl-mfc-shared/reference/cstringt-class.md) object containing the current title of the window object.  
  
##  <a name="cframewnd__initialupdateframe"></a>  CFrameWnd::InitialUpdateFrame  
 Call **IntitialUpdateFrame** after creating a new frame with **Create**.  
  
```  
void InitialUpdateFrame(
    CDocument* pDoc,  
    BOOL bMakeVisible);
```  
  
### Parameters  
 `pDoc`  
 Points to the document to which the frame window is associated. Can be **NULL**.  
  
 `bMakeVisible`  
 If **TRUE**, indicates that the frame should become visible and active. If **FALSE**, no descendants are made visible.  
  
### Remarks  
 This causes all views in that frame window to receive their `OnInitialUpdate` calls.  
  
 Also, if there was not previously an active view, the primary view of the frame window is made active. The primary view is a view with a child ID of **AFX_IDW_PANE_FIRST**. Finally, the frame window is made visible if `bMakeVisible` is nonzero. If `bMakeVisible` is 0, the current focus and visible state of the frame window will remain unchanged. It is not necessary to call this function when using the framework's implementation of File New and File Open.  
  
##  <a name="cframewnd__inmodalstate"></a>  CFrameWnd::InModalState  
 Call this member function to check if a frame window is modal or modeless.  
  
```  
BOOL InModalState() const;

 
```  
  
### Return Value  
 Nonzero if yes; otherwise 0.  
  
##  <a name="cframewnd__istracking"></a>  CFrameWnd::IsTracking  
 Call this member function to determine if the splitter bar in the window is currently being moved.  
  
```  
BOOL IsTracking() const;

 
```  
  
### Return Value  
 Nonzero if a splitter operation is in progress; otherwise 0.  
  
##  <a name="cframewnd__loadacceltable"></a>  CFrameWnd::LoadAccelTable  
 Call to load the specified accelerator table.  
  
```  
BOOL LoadAccelTable(LPCTSTR lpszResourceName);
```  
  
### Parameters  
 `lpszResourceName`  
 Identifies the name of the accelerator resource. Use **MAKEINTRESOURCE** if the resource is identified with an integer ID.  
  
### Return Value  
 Nonzero if the accelerator table was successfully loaded; otherwise 0.  
  
### Remarks  
 Only one table can be loaded at a time.  
  
 Accelerator tables loaded from resources are freed automatically when the application terminates.  
  
 If you call `LoadFrame` to create the frame window, the framework loads an accelerator table along with the menu and icon resources, and a subsequent call to this member function is then unnecessary.  
  
##  <a name="cframewnd__loadbarstate"></a>  CFrameWnd::LoadBarState  
 Call this function to restore the settings of each control bar owned by the frame window.  
  
```  
void LoadBarState(LPCTSTR lpszProfileName);
```  
  
### Parameters  
 `lpszProfileName`  
 Name of a section in the initialization (INI) file or a key in the Windows registry where state information is stored.  
  
### Remarks  
 Information restored includes visibility, horizontal/vertical orientation, docking state, and control-bar position.  
  
 The settings you want to restore must be written to the registry before you call `LoadBarState`. Write the information to the registry by calling [CWinApp::SetRegistryKey](../../mfc/reference/cwinapp-class.md#cwinapp__setregistrykey). Write the information to the INI file by calling [SaveBarState](#cframewnd__savebarstate).  
  
##  <a name="cframewnd__loadframe"></a>  CFrameWnd::LoadFrame  
 Call to dynamically create a frame window from resource information.  
  
```  
virtual BOOL LoadFrame(
    UINT nIDResource,  
    DWORD dwDefaultStyle = WS_OVERLAPPEDWINDOW | FWS_ADDTOTITLE,  
    CWnd* pParentWnd = NULL,  
    CCreateContext* pContext = NULL);
```  
  
### Parameters  
 `nIDResource`  
 The ID of shared resources associated with the frame window.  
  
 *dwDefaultStyle*  
 The frame's [style](../../mfc/reference/window-styles.md). Include the **FWS_ADDTOTITLE** style if you want the title bar to automatically display the name of the document represented in the window.  
  
 `pParentWnd`  
 A pointer to the frame's parent.  
  
 `pContext`  
 A pointer to a [CCreateContext](../../mfc/reference/ccreatecontext-structure.md) structure. This parameter can be **NULL**.  
  
### Remarks  
 Construct a `CFrameWnd` object in two steps. First, invoke the constructor, which constructs the `CFrameWnd` object, and then call `LoadFrame`, which loads the Windows frame window and associated resources and attaches the frame window to the `CFrameWnd` object. The `nIDResource` parameter specifies the menu, the accelerator table, the icon, and the string resource of the title for the frame window.  
  
 Use the **Create** member function rather than `LoadFrame` when you want to specify all of the frame window's creation parameters.  
  
 The framework calls `LoadFrame` when it creates a frame window using a document template object.  
  
 The framework uses the `pContext` argument to specify the objects to be connected to the frame window, including any contained view objects. You can set the `pContext` argument to **NULL** when you call `LoadFrame`.  
  
##  <a name="cframewnd__m_bautomenuenable"></a>  CFrameWnd::m_bAutoMenuEnable  
 When this data member is enabled (which is the default), menu items that do not have `ON_UPDATE_COMMAND_UI` or `ON_COMMAND` handlers will be automatically disabled when the user pulls down a menu.  
  
```  
BOOL m_bAutoMenuEnable;  
```  
  
### Remarks  
 Menu items that have an `ON_COMMAND` handler but no `ON_UPDATE_COMMAND_UI` handler will be automatically enabled.  
  
 When this data member is set, menu items are automatically enabled in the same way that toolbar buttons are enabled.  
  
> [!NOTE]
> `m_bAutoMenuEnable` has no effect on top-level menu items.  
  
 This data member simplifies the implementation of optional commands based on the current selection and reduces the need to write `ON_UPDATE_COMMAND_UI` handlers for enabling and disabling menu items.  
  
### Example  
 [!code-cpp[NVC_MFCWindowing#3](../../mfc/reference/codesnippet/cpp/cframewnd-class_3.cpp)]  
  
##  <a name="cframewnd__negotiateborderspace"></a>  CFrameWnd::NegotiateBorderSpace  
 Call this member function to negotiate border space in a frame window during OLE inplace activation.  
  
```  
virtual BOOL NegotiateBorderSpace(
    UINT nBorderCmd,  
    LPRECT lpRectBorder);
```  
  
### Parameters  
 *nBorderCmd*  
 Contains one of the following values from the **enum BorderCmd**:  
  
- **borderGet** = 1  
  
- **borderRequest** = 2  
  
- **borderSet** = 3  
  
 `lpRectBorder`  
 Pointer to a [RECT](../../mfc/reference/rect-structure1.md) structure or a [CRect](../../atl-mfc-shared/reference/crect-class.md) object that specifies the coordinates of the border.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 This member function is the **CFrameWnd** implementation of OLE border space negotiation.  
  
##  <a name="cframewnd__onbarcheck"></a>  CFrameWnd::OnBarCheck  
 Called whenever an action is performed on the specified control bar.  
  
```  
afx_msg BOOL OnBarCheck(UINT nID);
```  
  
### Parameters  
 `nID`  
 The ID of the control bar being shown.  
  
### Return Value  
 Nonzero if the control bar existed; otherwise 0.  
  
##  <a name="cframewnd__oncontexthelp"></a>  CFrameWnd::OnContextHelp  
 Handles SHIFT+F1 Help for in-place items.  
  
```  
afx_msg void OnContextHelp();
```  
  
### Remarks  
 To enable context-sensitive help, you must add an  
  
 [!code-cpp[NVC_MFCDocViewSDI#16](../../mfc/codesnippet/cpp/cframewnd-class_4.cpp)]  
  
 statement to your `CFrameWnd` class message map and also add an accelerator-table entry, typically SHIFT+F1, to enable this member function.  
  
 If your application is an OLE Container, `OnContextHelp` puts all in-place items contained within the frame window object into Help mode. The cursor changes to an arrow and a question mark, and the user can then move the mouse pointer and press the left mouse button to select a dialog box, window, menu, or command button. This member function calls the Windows function `WinHelp` with the Help context of the object under the cursor.  
  
##  <a name="cframewnd__oncreateclient"></a>  CFrameWnd::OnCreateClient  
 Called by the framework during the execution of `OnCreate`.  
  
```  
virtual BOOL OnCreateClient(
    LPCREATESTRUCT lpcs,  
    CCreateContext* pContext);
```  
  
### Parameters  
 `lpcs`  
 A pointer to a Windows [CREATESTRUCT](../../mfc/reference/createstruct-structure.md) structure *.*  
  
 `pContext`  
 A pointer to a [CCreateContext](../../mfc/reference/ccreatecontext-structure.md) structure *.*  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 Never call this function.  
  
 The default implementation of this function creates a `CView` object from the information provided in `pContext`, if possible.  
  
 Override this function to override values passed in the `CCreateContext` object or to change the way controls in the main client area of the frame window are created. The `CCreateContext` members you can override are described in the [CCreateContext](../../mfc/reference/ccreatecontext-structure.md) class.  
  
> [!NOTE]
>  Do not replace values passed in the `CREATESTRUCT` structure. They are for informational use only. If you want to override the initial window rectangle, for example, override the `CWnd` member function [PreCreateWindow](../../mfc/reference/cwnd-class.md#cwnd__precreatewindow).  
  
##  <a name="cframewnd__onhidemenubar"></a>  CFrameWnd::OnHideMenuBar  
 This function is called when the system is about to hide the menu bar in the current MFC application.  
  
```  
virtual void OnHideMenuBar();
```  
  
### Remarks  
 This event handler enables your application to perform custom actions when the system is about to hide the menu. You cannot prevent the menu from being hidden, but you can, for example, call other methods to retrieve the menu style or state.  
  
##  <a name="cframewnd__onsetpreviewmode"></a>  CFrameWnd::OnSetPreviewMode  
 Call this member function to set the application's main frame window into and out of print-preview mode.  
  
```  
virtual void OnSetPreviewMode(
    BOOL bPreview,  
    CPrintPreviewState* pState);
```  
  
### Parameters  
 *bPreview*  
 Specifies whether or not to place the application in print-preview mode. Set to **TRUE** to place in print preview, **FALSE** to cancel preview mode.  
  
 `pState`  
 A pointer to a **CPrintPreviewState** structure.  
  
### Remarks  
 The default implementation disables all standard toolbars and hides the main menu and the main client window. This turns MDI frame windows into temporary SDI frame windows.  
  
 Override this member function to customize the hiding and showing of control bars and other frame window parts during print preview. Call the base class implementation from within the overridden version.  
  
##  <a name="cframewnd__onshowmenubar"></a>  CFrameWnd::OnShowMenuBar  
 This function is called when the system is about to display the menu bar in the current MFC application.  
  
```  
virtual void OnShowMenuBar();
```  
  
### Remarks  
 This event handler enables your application to perform custom actions when the menu is about to be displayed. You cannot prevent the menu from being displayed, but you can, for example, call other methods to retrieve the menu style or state.  
  
##  <a name="cframewnd__onupdatecontrolbarmenu"></a>  CFrameWnd::OnUpdateControlBarMenu  
 Called by the framework when the associated menu is updated.  
  
```  
afx_msg void OnUpdateControlBarMenu(CCmdUI* pCmdUI);
```  
  
### Parameters  
 `pCmdUI`  
 A pointer to a [CCmdUI](../../mfc/reference/ccmdui-class.md) object representing the menu that generated the update command. The update handler calls the [Enable](../../mfc/reference/ccmdui-class.md#ccmdui__enable) member function of the `CCmdUI` object through `pCmdUI` to update the user interface.  
  
##  <a name="cframewnd__recalclayout"></a>  CFrameWnd::RecalcLayout  
 Called by the framework when the standard control bars are toggled on or off or when the frame window is resized.  
  
```  
virtual void RecalcLayout(BOOL bNotify = TRUE);
```  
  
### Parameters  
 `bNotify`  
 Determines whether the active in-place item for the frame window receives notification of the layout change. If **TRUE**, the item is notified; otherwise **FALSE**.  
  
### Remarks  
 The default implementation of this member function calls the `CWnd` member function `RepositionBars` to reposition all the control bars in the frame as well as in the main client window (usually a `CView` or **MDICLIENT**).  
  
 Override this member function to control the appearance and behavior of control bars after the layout of the frame window has changed. For example, call it when you turn control bars on or off or add another control bar.  
  
##  <a name="cframewnd__rectdefault"></a>  CFrameWnd::rectDefault  
 Pass this static `CRect` as a parameter when creating a window to allow Windows to choose the window's initial size and position.  
  
```  
static AFX_DATA const CRect rectDefault;  
```  
  
##  <a name="cframewnd__savebarstate"></a>  CFrameWnd::SaveBarState  
 Call this function to store information about each control bar owned by the frame window.  
  
```  
void SaveBarState(LPCTSTR lpszProfileName) const;

 
```  
  
### Parameters  
 `lpszProfileName`  
 Name of a section in the initialization file or a key in the Windows registry where state information is stored.  
  
### Remarks  
 This information can be read from the initialization file using [LoadBarState](#cframewnd__loadbarstate). Information stored includes visibility, horizontal/vertical orientation, docking state, and control bar position.  
  
##  <a name="cframewnd__setactivepreviewview"></a>  CFrameWnd::SetActivePreviewView  
 Designates the specified view to be the active view for Rich Preview.  
  
```  
void SetActivePreviewView(CView* pViewNew);
```  
  
### Parameters  
 `pViewNew`  
 A pointer to a view to be activated.  
  
### Remarks  
  
##  <a name="cframewnd__setactiveview"></a>  CFrameWnd::SetActiveView  
 Call this member function to set the active view.  
  
```  
void SetActiveView(
    CView* pViewNew,  
    BOOL bNotify = TRUE);
```  
  
### Parameters  
 *pViewNew*  
 Specifies a pointer to a [CView](../../mfc/reference/cview-class.md) object, or **NULL** for no active view.  
  
 `bNotify`  
 Specifies whether the view is to be notified of activation. If **TRUE**, `OnActivateView` is called for the new view; if **FALSE**, it is not.  
  
### Remarks  
 The framework will call this function automatically as the user changes the focus to a view within the frame window. You can explicitly call `SetActiveView` to change the focus to the specified view.  
  
##  <a name="cframewnd__setdockstate"></a>  CFrameWnd::SetDockState  
 Call this member function to apply state information stored in a `CDockState` object to the frame window's control bars.  
  
```  
void SetDockState(const CDockState& state);
```  
  
### Parameters  
 `state`  
 Apply the stored state to the frame window's control bars.  
  
### Remarks  
 To restore a previous state of the control bars, you can load the stored state with `CDockState::LoadState` or `Serialize`, then use `SetDockState` to apply it to the frame window's control bars. The previous state is stored in the `CDockState` object with `GetDockState`  
  
##  <a name="cframewnd__setmenubarstate"></a>  CFrameWnd::SetMenuBarState  
 Sets the display state of the menu in the current MFC application to hidden or displayed.  
  
```  
virtual BOOL SetMenuBarState(DWORD nState);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `nState`|Specifies whether to display or hide the menu. The `nState` parameter can have the following values:<br /><br /> -   AFX_MBS_VISIBLE (0x01) – Displays the menu if it is hidden, but has no effect if it is visible.<br />-   AFX_MBS_HIDDEN (0x02) – Hides the menu if it is visible, but has no effect if it is hidden.|  
  
### Return Value  
 `true` if this method successfully changes the menu state; otherwise, `false`.  
  
### Remarks  
 If a runtime error occurs, this method asserts in Debug mode and raises an exception derived from the [CException](../../mfc/reference/cexception-class.md) class.  
  
##  <a name="cframewnd__setmenubarvisibility"></a>  CFrameWnd::SetMenuBarVisibility  
 Sets the default behavior of the menu in the current MFC application to be either hidden or visible.  
  
```  
virtual void SetMenuBarVisibility(DWORD nStyle);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `nStyle`|Specifies whether the menu is by default hidden, or is visible and has the focus. The `nStyle` parameter can have the following values:<br /><br /> -   AFX_MBV_KEEPVISIBLE (0x01) -<br />     The menu is displayed at all times, and by default does not have the focus.<br />-   AFX_MBV_DISPLAYONFOCUS (0x02) -<br />     The menu is hidden by default. If the menu is hidden, press the ALT key to display the menu and give it the focus. If the menu is displayed, press the ALT or ESC key to hide menu.<br />-   AFX_MBV_ DISPLAYONFOCUS (0x02) &#124; AFX_MBV_DISPLAYONF10 (0x04)<br />     (bitwise combination (OR)) - The menu is hidden by default. If the menu is hidden, press the F10 key to display the menu and give it the focus. If the menu is displayed, press the F10 key to toggle the focus on or off the menu. The menu is displayed until you press the ALT or ESC key to hide it.|  
  
### Remarks  
 If the value of the `nStyle` parameter is not valid, this method asserts in Debug mode and raises [CInvalidArgException](../../mfc/reference/cinvalidargexception-class.md) in Release mode. In case of other runtime errors, this method asserts in Debug mode and raises an exception derived from the [CException](../../mfc/reference/cexception-class.md) class.  
  
 This method affects the state of menus in applications written for [!INCLUDE[windowsver](../../build/reference/includes/windowsver_md.md)] and later.  
  
##  <a name="cframewnd__setmessagetext"></a>  CFrameWnd::SetMessageText  
 Call this function to place a string in the status-bar pane that has an ID of 0.  
  
```  
void SetMessageText(LPCTSTR lpszText);

 
void SetMessageText(UINT nID);
```  
  
### Parameters  
 `lpszText`  
 Points to the string to be placed on the status bar.  
  
 `nID`  
 String resource ID of the string to be placed on the status bar.  
  
### Remarks  
 This is typically the leftmost, and longest, pane of the status bar.  
  
##  <a name="cframewnd__setprogressbarposition"></a>  CFrameWnd::SetProgressBarPosition  
 Sets the current position for the Windows 7 progress bar displayed on the taskbar.  
  
```  
void SetProgressBarPosition(int nProgressPos);
```  
  
### Parameters  
 `nProgressPos`  
 Specifies the position to set. It must be within the range set by `SetProgressBarRange`.  
  
### Remarks  
  
##  <a name="cframewnd__setprogressbarrange"></a>  CFrameWnd::SetProgressBarRange  
 Sets the range for the Windows 7 progress bar displayed on the taskbar.  
  
```  
void SetProgressBarRange(
    int nRangeMin,  
    int nRangeMax);
```  
  
### Parameters  
 `nRangeMin`  
 Minimal value.  
  
 `nRangeMax`  
 Maximal value.  
  
### Remarks  
  
##  <a name="cframewnd__setprogressbarstate"></a>  CFrameWnd::SetProgressBarState  
 Sets the type and state of the progress indicator displayed on a taskbar button.  
  
```  
void SetProgressBarState(TBPFLAG tbpFlags);
```  
  
### Parameters  
 `tbpFlags`  
 Flags that control the current state of the progress button. Specify only one of the following flags because all states are mutually exclusive: TBPF_NOPROGRESS, TBPF_INDETERMINATE, TBPF_NORMAL, TBPF_ERROR, TBPF_PAUSED.  
  
### Remarks  
  
##  <a name="cframewnd__settaskbaroverlayicon"></a>  CFrameWnd::SetTaskbarOverlayIcon  
 Overloaded. Applies an overlay to a taskbar button to indicate application status or to notify the user.  
  
```  
BOOL SetTaskbarOverlayIcon(
    UINT nIDResource,  
    LPCTSTR lpcszDescr);

 
BOOL SetTaskbarOverlayIcon(
    HICON hIcon,  
    LPCTSTR lpcszDescr);
```  
  
### Parameters  
 `nIDResource`  
 Specifies the Resource ID of an icon to use as the overlay. See description for `hIcon` for details.  
  
 `lpcszDescr`  
 A pointer to a string that provides an alt text version of the information conveyed by the overlay, for accessibility purposes.  
  
 `hIcon`  
 The handle of an icon to use as the overlay. This should be a small icon, measuring 16x16 pixels at 96 dots per inch (dpi). If an overlay icon is already applied to the taskbar button, that existing overlay is replaced. This value can be `NULL`. How a `NULL` value is handled depends on whether the taskbar button represents a single window or a group of windows. It is the responsibility of the calling application to free `hIcon` when it is no longer needed.  
  
### Return Value  
 `TRUE` if successful; `FALSE` if OS version is less than Windows 7 or if an error occurs setting the icon.  
  
### Remarks  
  
##  <a name="cframewnd__settitle"></a>  CFrameWnd::SetTitle  
 Sets the title of the window object.  
  
```  
void SetTitle(LPCTSTR lpszTitle);
```  
  
### Parameters  
 `lpszTitle`  
 A pointer to a character string containing the title of the window object.  
  
##  <a name="cframewnd__showcontrolbar"></a>  CFrameWnd::ShowControlBar  
 Call this member function to show or hide the control bar.  
  
```  
void ShowControlBar(
    CControlBar* pBar,  
    BOOL bShow,  
    BOOL bDelay);
```  
  
### Parameters  
 `pBar`  
 Pointer to the control bar to be shown or hidden.  
  
 `bShow`  
 If **TRUE**, specifies that the control bar is to be shown. If **FALSE**, specifies that the control bar is to be hidden.  
  
 *bDelay*  
 If **TRUE**, delay showing the control bar. If **FALSE**, show the control bar immediately.  
  
##  <a name="cframewnd__showownedwindows"></a>  CFrameWnd::ShowOwnedWindows  
 Call this member function to show all windows that are descendants of the `CFrameWnd` object.  
  
```  
void ShowOwnedWindows(BOOL bShow);
```  
  
### Parameters  
 `bShow`  
 Specifies whether the owned windows are to be shown or hidden.  
  
## See Also  
 [CWnd Class](../../mfc/reference/cwnd-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CWnd Class](../../mfc/reference/cwnd-class.md)   
 [CMDIFrameWnd Class](../../mfc/reference/cmdiframewnd-class.md)   
 [CMDIChildWnd Class](../../mfc/reference/cmdichildwnd-class.md)   
 [CView Class](../../mfc/reference/cview-class.md)   
 [CDocTemplate Class](../../mfc/reference/cdoctemplate-class.md)   
 [CRuntimeClass Structure](../../mfc/reference/cruntimeclass-structure.md)
