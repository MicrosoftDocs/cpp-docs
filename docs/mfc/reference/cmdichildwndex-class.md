---
description: "Learn more about: CMDIChildWndEx Class"
title: "CMDIChildWndEx Class"
ms.date: "10/18/2018"
f1_keywords: ["CMDIChildWndEx", "AFXMDICHILDWNDEX/CMDIChildWndEx", "AFXMDICHILDWNDEX/CMDIChildWndEx::ActivateTopLevelFrame", "AFXMDICHILDWNDEX/CMDIChildWndEx::AddPane", "AFXMDICHILDWNDEX/CMDIChildWndEx::AddTabbedPane", "AFXMDICHILDWNDEX/CMDIChildWndEx::AdjustDockingLayout", "AFXMDICHILDWNDEX/CMDIChildWndEx::CanShowOnMDITabs", "AFXMDICHILDWNDEX/CMDIChildWndEx::CanShowOnTaskBarTabs", "AFXMDICHILDWNDEX/CMDIChildWndEx::CanShowOnWindowsList", "AFXMDICHILDWNDEX/CMDIChildWndEx::DockPane", "AFXMDICHILDWNDEX/CMDIChildWndEx::DockPaneLeftOf", "AFXMDICHILDWNDEX/CMDIChildWndEx::EnableAutoHidePanes", "AFXMDICHILDWNDEX/CMDIChildWndEx::EnableDocking", "AFXMDICHILDWNDEX/CMDIChildWndEx::EnableTaskbarThumbnailClipRect", "AFXMDICHILDWNDEX/CMDIChildWndEx::GetDockingManager", "AFXMDICHILDWNDEX/CMDIChildWndEx::GetDocumentName", "AFXMDICHILDWNDEX/CMDIChildWndEx::GetFrameIcon", "AFXMDICHILDWNDEX/CMDIChildWndEx::GetFrameText", "AFXMDICHILDWNDEX/CMDIChildWndEx::GetPane", "AFXMDICHILDWNDEX/CMDIChildWndEx::GetRelatedTabGroup", "AFXMDICHILDWNDEX/CMDIChildWndEx::GetTabbedPane", "AFXMDICHILDWNDEX/CMDIChildWndEx::GetTabProxyWnd", "AFXMDICHILDWNDEX/CMDIChildWndEx::GetTaskbarPreviewWnd", "AFXMDICHILDWNDEX/CMDIChildWndEx::GetTaskbarThumbnailClipRect", "AFXMDICHILDWNDEX/CMDIChildWndEx::GetToolbarButtonToolTipText", "AFXMDICHILDWNDEX/CMDIChildWndEx::InsertPane", "AFXMDICHILDWNDEX/CMDIChildWndEx::InvalidateIconicBitmaps", "AFXMDICHILDWNDEX/CMDIChildWndEx::IsPointNearDockSite", "AFXMDICHILDWNDEX/CMDIChildWndEx::IsReadOnly", "AFXMDICHILDWNDEX/CMDIChildWndEx::IsRegisteredWithTaskbarTabs", "AFXMDICHILDWNDEX/CMDIChildWndEx::IsTabbedPane", "AFXMDICHILDWNDEX/CMDIChildWndEx::IsTaskbarTabsSupportEnabled", "AFXMDICHILDWNDEX/CMDIChildWndEx::IsTaskbarThumbnailClipRectEnabled", "AFXMDICHILDWNDEX/CMDIChildWndEx::m_dwDefaultTaskbarTabPropertyFlags", "AFXMDICHILDWNDEX/CMDIChildWndEx::OnGetIconicLivePreviewBitmap", "AFXMDICHILDWNDEX/CMDIChildWndEx::OnGetIconicThumbnail", "AFXMDICHILDWNDEX/CMDIChildWndEx::OnMoveMiniFrame", "AFXMDICHILDWNDEX/CMDIChildWndEx::OnPressTaskbarThmbnailCloseButton", "AFXMDICHILDWNDEX/CMDIChildWndEx::OnSetPreviewMode", "AFXMDICHILDWNDEX/CMDIChildWndEx::OnTaskbarTabThumbnailActivate", "AFXMDICHILDWNDEX/CMDIChildWndEx::OnTaskbarTabThumbnailMouseActivate", "AFXMDICHILDWNDEX/CMDIChildWndEx::OnTaskbarTabThumbnailStretch", "AFXMDICHILDWNDEX/CMDIChildWndEx::OnUpdateFrameTitle", "AFXMDICHILDWNDEX/CMDIChildWndEx::PaneFromPoint", "AFXMDICHILDWNDEX/CMDIChildWndEx::RecalcLayout", "AFXMDICHILDWNDEX/CMDIChildWndEx::RegisterTaskbarTab", "AFXMDICHILDWNDEX/CMDIChildWndEx::RemovePaneFromDockManager", "AFXMDICHILDWNDEX/CMDIChildWndEx::SetRelatedTabGroup", "AFXMDICHILDWNDEX/CMDIChildWndEx::SetTaskbarTabActive", "AFXMDICHILDWNDEX/CMDIChildWndEx::SetTaskbarTabOrder", "AFXMDICHILDWNDEX/CMDIChildWndEx::SetTaskbarTabProperties", "AFXMDICHILDWNDEX/CMDIChildWndEx::SetTaskbarThumbnailClipRect", "AFXMDICHILDWNDEX/CMDIChildWndEx::ShowPane", "AFXMDICHILDWNDEX/CMDIChildWndEx::UnregisterTaskbarTab", "AFXMDICHILDWNDEX/CMDIChildWndEx::UpdateTaskbarTabIcon"]
helpviewer_keywords: ["CMDIChildWndEx [MFC], ActivateTopLevelFrame", "CMDIChildWndEx [MFC], AddPane", "CMDIChildWndEx [MFC], AddTabbedPane", "CMDIChildWndEx [MFC], AdjustDockingLayout", "CMDIChildWndEx [MFC], CanShowOnMDITabs", "CMDIChildWndEx [MFC], CanShowOnTaskBarTabs", "CMDIChildWndEx [MFC], CanShowOnWindowsList", "CMDIChildWndEx [MFC], DockPane", "CMDIChildWndEx [MFC], DockPaneLeftOf", "CMDIChildWndEx [MFC], EnableAutoHidePanes", "CMDIChildWndEx [MFC], EnableDocking", "CMDIChildWndEx [MFC], EnableTaskbarThumbnailClipRect", "CMDIChildWndEx [MFC], GetDockingManager", "CMDIChildWndEx [MFC], GetDocumentName", "CMDIChildWndEx [MFC], GetFrameIcon", "CMDIChildWndEx [MFC], GetFrameText", "CMDIChildWndEx [MFC], GetPane", "CMDIChildWndEx [MFC], GetRelatedTabGroup", "CMDIChildWndEx [MFC], GetTabbedPane", "CMDIChildWndEx [MFC], GetTabProxyWnd", "CMDIChildWndEx [MFC], GetTaskbarPreviewWnd", "CMDIChildWndEx [MFC], GetTaskbarThumbnailClipRect", "CMDIChildWndEx [MFC], GetToolbarButtonToolTipText", "CMDIChildWndEx [MFC], InsertPane", "CMDIChildWndEx [MFC], InvalidateIconicBitmaps", "CMDIChildWndEx [MFC], IsPointNearDockSite", "CMDIChildWndEx [MFC], IsReadOnly", "CMDIChildWndEx [MFC], IsRegisteredWithTaskbarTabs", "CMDIChildWndEx [MFC], IsTabbedPane", "CMDIChildWndEx [MFC], IsTaskbarTabsSupportEnabled", "CMDIChildWndEx [MFC], IsTaskbarThumbnailClipRectEnabled", "CMDIChildWndEx [MFC], m_dwDefaultTaskbarTabPropertyFlags", "CMDIChildWndEx [MFC], OnGetIconicLivePreviewBitmap", "CMDIChildWndEx [MFC], OnGetIconicThumbnail", "CMDIChildWndEx [MFC], OnMoveMiniFrame", "CMDIChildWndEx [MFC], OnPressTaskbarThmbnailCloseButton", "CMDIChildWndEx [MFC], OnSetPreviewMode", "CMDIChildWndEx [MFC], OnTaskbarTabThumbnailActivate", "CMDIChildWndEx [MFC], OnTaskbarTabThumbnailMouseActivate", "CMDIChildWndEx [MFC], OnTaskbarTabThumbnailStretch", "CMDIChildWndEx [MFC], OnUpdateFrameTitle", "CMDIChildWndEx [MFC], PaneFromPoint", "CMDIChildWndEx [MFC], RecalcLayout", "CMDIChildWndEx [MFC], RegisterTaskbarTab", "CMDIChildWndEx [MFC], RemovePaneFromDockManager", "CMDIChildWndEx [MFC], SetRelatedTabGroup", "CMDIChildWndEx [MFC], SetTaskbarTabActive", "CMDIChildWndEx [MFC], SetTaskbarTabOrder", "CMDIChildWndEx [MFC], SetTaskbarTabProperties", "CMDIChildWndEx [MFC], SetTaskbarThumbnailClipRect", "CMDIChildWndEx [MFC], ShowPane", "CMDIChildWndEx [MFC], UnregisterTaskbarTab", "CMDIChildWndEx [MFC], UpdateTaskbarTabIcon"]
ms.assetid: d39fec06-0bd6-4271-917d-35aae3b24d8e
---
# CMDIChildWndEx Class

The `CMDIChildWndEx` class provides the functionality of a Windows multiple document interface (MDI) child window. It extends the functionality of [CMDIChildWnd Class](../../mfc/reference/cmdichildwnd-class.md). The framework requires this class when an MDI application uses certain MFC classes.

For more detail see the source code located in the **VC\\atlmfc\\src\\mfc** folder of your Visual Studio installation.

## Syntax

```
class CMDIChildWndEx : public CMDIChildWnd
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMDIChildWndEx::ActivateTopLevelFrame](#activatetoplevelframe)|Called internally by the framework to activate top level frame when the application should be activated from a taskbar tab.|
|`CMDIChildWndEx::AddDockSite`|This method is not used or implemented.|
|[CMDIChildWndEx::AddPane](#addpane)|Adds a pane.|
|[CMDIChildWndEx::AddTabbedPane](#addtabbedpane)|Adds a tabbed pane.|
|[CMDIChildWndEx::AdjustDockingLayout](#adjustdockinglayout)|Adjusts the docking layout.|
|[CMDIChildWndEx::CanShowOnMDITabs](#canshowonmditabs)||
|[CMDIChildWndEx::CanShowOnTaskBarTabs](#canshowontaskbartabs)|Tells the framework whether this MDI child can be displayed on Windows 7 taskbar tabs.|
|[CMDIChildWndEx::CanShowOnWindowsList](#canshowonwindowslist)|Returns TRUE if the MDI child window name can be displayed in the [CMFCWindowsManagerDialog Class](../../mfc/reference/cmfcwindowsmanagerdialog-class.md) dialog box. Otherwise returns FALSE.|
|`CMDIChildWndEx::CreateObject`|Called by the framework to create a dynamic instance of this class type.|
|[CMDIChildWndEx::DockPane](#dockpane)|Docks a pane.|
|[CMDIChildWndEx::DockPaneLeftOf](#dockpaneleftof)|Docks one pane to the left of another pane.|
|[CMDIChildWndEx::EnableAutoHidePanes](#enableautohidepanes)|Enables auto-hide mode for panes when they are docked at the specified sides of the window.|
|[CMDIChildWndEx::EnableDocking](#enabledocking)|Enables docking of the child window to the main frame.|
|[CMDIChildWndEx::EnableTaskbarThumbnailClipRect](#enabletaskbarthumbnailcliprect)|Enables or disables automatic selection of a portion of a window's client area to display  as that window's thumbnail in the taskbar.|
|[CMDIChildWndEx::GetDockingManager](#getdockingmanager)||
|[CMDIChildWndEx::GetDocumentName](#getdocumentname)|Returns the name of the document that is displayed in the MDI child window.|
|[CMDIChildWndEx::GetFrameIcon](#getframeicon)|Called by the framework to retrieve the MDI child window icon.|
|[CMDIChildWndEx::GetFrameText](#getframetext)|Called by the framework to retrieve the text for the MDI child window.|
|[CMDIChildWndEx::GetPane](#getpane)|Finds a pane by the specified control ID.|
|[CMDIChildWndEx::GetRelatedTabGroup](#getrelatedtabgroup)||
|[CMDIChildWndEx::GetTabbedPane](#gettabbedpane)|Returns a pointer to an embedded docking pane that was converted to a tabbed document.|
|[CMDIChildWndEx::GetTabProxyWnd](#gettabproxywnd)|Returns tab proxy window actually registered with Windows 7 taskbar tabs.|
|[CMDIChildWndEx::GetTaskbarPreviewWnd](#gettaskbarpreviewwnd)|Called by the framework when it needs to obtain a child window (usually a view or splitter window) to be displayed on Windows 7 taskbar tab thumbnail.|
|[CMDIChildWndEx::GetTaskbarThumbnailClipRect](#gettaskbarthumbnailcliprect)|Called by the framework when it needs to select a portion of a window's client area to display  as that window's thumbnail in the taskbar.|
|`CMDIChildWndEx::GetThisClass`|Called by the framework to obtain a pointer to the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) object that is associated with this class type.|
|[CMDIChildWndEx::GetToolbarButtonToolTipText](#gettoolbarbuttontooltiptext)|Called by the framework to retrieve a tooltip for a toolbar button.|
|[CMDIChildWndEx::InsertPane](#insertpane)|Registers the specified pane with the docking manager.|
|[CMDIChildWndEx::InvalidateIconicBitmaps](#invalidateiconicbitmaps)|Invalidates iconic bitmap representation of MDI child.|
|[CMDIChildWndEx::IsPointNearDockSite](#ispointneardocksite)|Determines whether a specified point is near the dock site.|
|[CMDIChildWndEx::IsReadOnly](#isreadonly)|Returns TRUE if the document that is displayed in the child window is read-only. Otherwise returns FALSE.|
|[CMDIChildWndEx::IsRegisteredWithTaskbarTabs](#isregisteredwithtaskbartabs)|Returns TRUE if MDI child was successfully registered with Windows 7 taskbar tabs.|
|[CMDIChildWndEx::IsTabbedPane](#istabbedpane)|Returns TRUE if the MDI child window contains a docking pane. Otherwise returns FALSE.|
|[CMDIChildWndEx::IsTaskbarTabsSupportEnabled](#istaskbartabssupportenabled)|Tells whether the MDI child can appear on Windows 7 taskbar tabs.|
|[CMDIChildWndEx::IsTaskbarThumbnailClipRectEnabled](#istaskbarthumbnailcliprectenabled)|Tells whether automatic selection of a portion of a window's client area to display  as that window's thumbnail in the taskbar is enabled or disabled.|
|[CMDIChildWndEx::m_dwDefaultTaskbarTabPropertyFlags](#m_dwdefaulttaskbartabpropertyflags)|A combination of flags, which is passed by the framework to the SetTaskbarTabProperties method, when a tab (MDI child) is being registered with Windows 7 taskbar tabs. The default combination is STPF_USEAPPTHUMBNAILWHENACTIVE &#124; STPF_USEAPPPEEKWHENACTIVE.|
|[CMDIChildWndEx::OnGetIconicLivePreviewBitmap](#ongeticoniclivepreviewbitmap)|Called by the framework when it needs to obtain a bitmap for live preview of MDI child.|
|[CMDIChildWndEx::OnGetIconicThumbnail](#ongeticonicthumbnail)|Called by the framework when it needs to obtain a bitmap for iconic thumbnail of MDI child.|
|[CMDIChildWndEx::OnMoveMiniFrame](#onmoveminiframe)|Called by the framework to move a mini-frame window.|
|[CMDIChildWndEx::OnPressTaskbarThmbnailCloseButton](#onpresstaskbarthmbnailclosebutton)|Called by the framework when the user presses close button on Taskbar tab thumbnail..|
|[CMDIChildWndEx::OnSetPreviewMode](#onsetpreviewmode)|Called by the framework to enter or exit print preview mode.|
|[CMDIChildWndEx::OnTaskbarTabThumbnailActivate](#ontaskbartabthumbnailactivate)|Called by the framework when the Taskbar tab thumbnail should process WM_ACTIVATE message.|
|[CMDIChildWndEx::OnTaskbarTabThumbnailMouseActivate](#ontaskbartabthumbnailmouseactivate)|Called by the framework when the Taskbar tab thumbnail should process WM_MOUSEACTIVATE message.|
|[CMDIChildWndEx::OnTaskbarTabThumbnailStretch](#ontaskbartabthumbnailstretch)|Called by the framework when it needs to stretch a bitmap for Windows 7 taskbar tab thumbnail preview of MDI child.|
|[CMDIChildWndEx::OnUpdateFrameTitle](#onupdateframetitle)|Called by the framework to update the frame title. (Overrides `CMDIChildWnd::OnUpdateFrameTitle`.)|
|[CMDIChildWndEx::PaneFromPoint](#panefrompoint)|Returns the pane that contains the given point.|
|`CMDIChildWndEx::PreTranslateMessage`|Used by class [CWinApp](../../mfc/reference/cwinapp-class.md) to translate window messages before they are dispatched to the [TranslateMessage](/windows/win32/api/winuser/nf-winuser-translatemessage) and [DispatchMessage](/windows/win32/api/winuser/nf-winuser-dispatchmessage) Windows functions. (Overrides [CWnd::PreTranslateMessage](../../mfc/reference/cwnd-class.md#pretranslatemessage).)|
|[CMDIChildWndEx::RecalcLayout](#recalclayout)|Recalculates the layout of the window.|
|[CMDIChildWndEx::RegisterTaskbarTab](#registertaskbartab)|Registers MDI child with Windows 7 taskbar tabs.|
|[CMDIChildWndEx::RemovePaneFromDockManager](#removepanefromdockmanager)|Removes a pane from the docking manager.|
|[CMDIChildWndEx::SetRelatedTabGroup](#setrelatedtabgroup)||
|[CMDIChildWndEx::SetTaskbarTabActive](#settaskbartabactive)|Activates corresponding Windows 7 taskbar tab.|
|[CMDIChildWndEx::SetTaskbarTabOrder](#settaskbartaborder)|Inserts MDI child before specified window on Windows 7 taskbar tabs.|
|[CMDIChildWndEx::SetTaskbarTabProperties](#settaskbartabproperties)|Sets properties for a Windows 7 taskbar tab.|
|[CMDIChildWndEx::SetTaskbarThumbnailClipRect](#settaskbarthumbnailcliprect)|Called internally by the framework to set clipping rectangle to select a portion of a window's client area to display  as that window's thumbnail in the taskbar.|
|[CMDIChildWndEx::ShowPane](#showpane)||
|[CMDIChildWndEx::UnregisterTaskbarTab](#unregistertaskbartab)|Removes MDI child from Windows 7 taskbar tabs.|
|[CMDIChildWndEx::UpdateTaskbarTabIcon](#updatetaskbartabicon)|Updates Windows 7 taskbar tab icon.|

## Remarks

To take advantage of extended docking features in MDI applications, derive the MDI child window class of your application from `CMDIChildWndEx` instead of [CMDIChildWnd](../../mfc/reference/cmdichildwnd-class.md).

## Example

The following example derives a class from `CMDIChildWndEx`. This code snippet comes from the [VisualStudioDemo Sample: MFC Visual Studio Application](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_VisualStudioDemo#3](../../mfc/codesnippet/cpp/cmdichildwndex-class_1.h)]

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CFrameWnd](../../mfc/reference/cframewnd-class.md)

[CMDIChildWnd](../../mfc/reference/cmdichildwnd-class.md)

[CMDIChildWndEx](../../mfc/reference/cmdichildwndex-class.md)

## Requirements

**Header:** afxMDIChildWndEx.h

## <a name="addpane"></a> CMDIChildWndEx::AddPane

Adds a pane.

```
BOOL AddPane(
    CBasePane* pControlBar,
    BOOL bTail = TRUE);
```

### Parameters

*pControlBar*<br/>
[in] A pointer to the pane.

*bTail*<br/>
[in] TRUE to add the pane to the end of the list of panes for the docking manager; otherwise, FALSE.

### Return Value

TRUE if the pane was successfully registered with the docking manager; otherwise, FALSE.

## <a name="addtabbedpane"></a> CMDIChildWndEx::AddTabbedPane

Adds a tabbed pane.

```cpp
void AddTabbedPane(CDockablePane* pControlBar);
```

### Parameters

*pControlBar*<br/>
[in] A pointer to the pane.

## <a name="adjustdockinglayout"></a> CMDIChildWndEx::AdjustDockingLayout

Adjusts the docking layout.

```
virtual void AdjustDockingLayout(HDWP hdwp = NULL);
```

### Parameters

*hdwp*<br/>
[in] Handle to a deferred window position structure.

## <a name="canshowonmditabs"></a> CMDIChildWndEx::CanShowOnMDITabs

```
virtual BOOL CanShowOnMDITabs();
```

### Return Value

### Remarks

## <a name="canshowonwindowslist"></a> CMDIChildWndEx::CanShowOnWindowsList

Specifies whether the MDI child window name can be displayed in the [CMFCWindowsManagerDialog Class](../../mfc/reference/cmfcwindowsmanagerdialog-class.md) dialog box.

```
virtual BOOL CanShowOnWindowsList();
```

### Return Value

TRUE if the window can be displayed in the **Windows** dialog box; otherwise, FALSE.

### Remarks

Override this method in a derived class and return FALSE if the window should not be displayed in the **Windows** dialog box. This function is called from `CMFCWindowsManagerDialog`.

## <a name="dockpane"></a> CMDIChildWndEx::DockPane

Docks a pane.

```cpp
void DockPane(
    CBasePane* pBar,
    UINT nDockBarID = 0,
    LPCRECT lpRect = NULL);
```

### Parameters

*pBar*<br/>
[in] A pointer to the pane.

*nDockBarID*<br/>
[in] The ID of the pane.

*lpRect*<br/>
[in] A pointer to a rectangle.

### Remarks

The *lpRect* parameter is not used.

## <a name="dockpaneleftof"></a> CMDIChildWndEx::DockPaneLeftOf

Docks one pane to the left of another pane.

```
BOOL DockPaneLeftOf(
    CPane* pBar,
    CPane* pLeftOf);
```

### Parameters

*pBar*<br/>
A pointer to the pane that is to be docked.

*pLeftOf*<br/>
A pointer to the pane that serves as the point of reference.

### Return Value

TRUE on success, FALSE on failure.

### Remarks

This method takes the pane specified by *pBar* and docks it at the left side of the pane specified by *pLeftOf*.

Call this method when you want to dock several panes in predefined order.

## <a name="enableautohidepanes"></a> CMDIChildWndEx::EnableAutoHidePanes

Enables auto-hide mode for panes when they are docked at the specified sides of the window.

```
BOOL EnableAutoHidePanes(DWORD dwDockStyle);
```

### Parameters

*dwDockStyle*<br/>
[in] Specifies the sides of the main frame window that is enabled. Use one or more of the following flags.

- CBRS_ALIGN_LEFT

- CBRS_ALIGN_RIGHT

- CBRS_ALIGN_TOP

- CBRS_ALIGN_BOTTOM

### Return Value

TRUE if the method succeeds; otherwise FALSE.

## <a name="enabledocking"></a> CMDIChildWndEx::EnableDocking

Enables docking of the child window to the main frame.

```
BOOL EnableDocking(DWORD dwDockStyle);
```

### Parameters

*dwDockStyle*<br/>
[in] Specifies the docking alignment to enable.

### Return Value

TRUE if the method succeeds; otherwise FALSE.

### Remarks

Call this method to enable docking alignment to the main frame. You can pass a combination of CBRS_ALIGN_ flags (for more information, see [CControlBar::EnableDocking](../../mfc/reference/ccontrolbar-class.md#enabledocking)).

## <a name="getdockingmanager"></a> CMDIChildWndEx::GetDockingManager

```
CDockingManager* GetDockingManager();
```

### Return Value

### Remarks

## <a name="getdocumentname"></a> CMDIChildWndEx::GetDocumentName

Returns the name of the document that is displayed in the MDI child window.

```
virtual LPCTSTR GetDocumentName(CObject** pObj);
```

### Return Value

A pointer to a string that contains the name of a document.

### Remarks

A document is what the MDI child window displays. Generally, the window displays data that is loaded from or saved to a file. Therefore, the name of the document is the name of the file. The default implementation of `GetDocumentName` returns a string obtained from `CDocument::GetPathName`.

If the window displays a document that is not loaded from a file, override this method in a derived class and return a unique document identifier.

`GetDocumentName` is called by the framework when it saves the state of all opened documents. The returned string is written to the registry.

When the framework is restoring state later, the document name is read from the registry and passed to [CMDIFrameWndEx::CreateDocumentWindow](../../mfc/reference/cmdiframewndex-class.md#createdocumentwindow). Override this method in a [CMDIFrameWndEx](../../mfc/reference/cmdiframewndex-class.md)-derived class and create or open a document that has this name and read in the file that has this name. If the document is not based on a file, create the document based on the document identifier itself. You should do the preceding actions only if you intend to save and restore documents.

### Example

The following example demonstrates the use of the `GetDocumentName` method. This code snippet comes from the [VisualStudioDemo Sample: MFC Visual Studio Application](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_VisualStudioDemo#17](../../mfc/codesnippet/cpp/cmdichildwndex-class_2.cpp)]

## <a name="getframeicon"></a> CMDIChildWndEx::GetFrameIcon

Called by the framework to retrieve the icon of the MDI child window.

```
virtual HICON GetFrameIcon() const;
```

### Return Value

A handle to the window icon.

### Remarks

This method is called by the framework to determine what icon to display on the MDI tab that contains the MDI child frame window.

By default this method returns the window icon. Override `GetFrameIcon` in a `CMDIChildWndEx`-derived class to customize this behavior.

## <a name="getframetext"></a> CMDIChildWndEx::GetFrameText

Called by the framework to retrieve the text for the MDI child window.

```
virtual CString GetFrameText() const;
```

### Return Value

A string that contains the frame window text.

### Remarks

This method is called by the framework to determine what text to display on the MDI tab that contains the MDI child frame window.

By default this method returns the window text. Override `GetFrameText` in a `CMDIChildWndEx`-derived class to customize this behavior.

## <a name="getpane"></a> CMDIChildWndEx::GetPane

Finds a pane by the specified control ID.

```
CBasePane* GetPane(UINT nID);
```

### Parameters

*nID*<br/>
[in] The control ID of the pane to find.

### Return Value

A pointer to the pane if found, otherwise NULL.

## <a name="getrelatedtabgroup"></a> CMDIChildWndEx::GetRelatedTabGroup

```
CMFCTabCtrl* GetRelatedTabGroup();
```

### Return Value

### Remarks

## <a name="gettabbedpane"></a> CMDIChildWndEx::GetTabbedPane

Returns a pointer to a docking pane that is part of a group of MDI tabbed documents.

```
CDockablePane* GetTabbedPane() const;
```

### Return Value

A pointer to a docking pane that is part of a group of MDI tabbed documents.

## <a name="gettoolbarbuttontooltiptext"></a> CMDIChildWndEx::GetToolbarButtonToolTipText

Called by the framework to retrieve a tooltip for a toolbar button.

```
virtual BOOL GetToolbarButtonToolTipText(
    CMFCToolBarButton*,
    CString&);
```

### Return Value

TRUE if the tooltip has been displayed. The default implementation returns FALSE.

### Remarks

Override this method if you want to display custom tool tips for toolbar buttons.

## <a name="insertpane"></a> CMDIChildWndEx::InsertPane

Registers the specified pane with the docking manager.

```
BOOL InsertPane(
    CBasePane* pControlBar,
    CBasePane* pTarget,
    BOOL bAfter = TRUE);
```

### Parameters

*pControlBar*<br/>
[in] A pointer to the pane to insert.

*pTarget*<br/>
[in] A pointer to the adjacent pane.

*bAfter*<br/>
[in] If TRUE, *pControlBar* is inserted after *pTarget*. If FALSE, *pControlBar* is inserted before *pTarget*.

### Return Value

TRUE if the method succeeds, FALSE otherwise.

## <a name="ispointneardocksite"></a> CMDIChildWndEx::IsPointNearDockSite

Determines whether a specified point is near the dock site.

```
BOOL IsPointNearDockSite(
    CPoint point,
    DWORD& dwBarAlignment,
    BOOL& bOuterEdge) const;
```

### Parameters

*point*<br/>
[in] The specified point.

*dwBarAlignment*<br/>
[in] Specifies which edge the point is near. Possible values are CBRS_ALIGN_LEFT, CBRS_ALIGN_RIGHT, CBRS_ALIGN_TOP, and CBRS_ALIGN_BOTTOM

*bOuterEdge*<br/>
[in] TRUE if the point is near the outer border of the dock site; FALSE otherwise.

### Return Value

TRUE if the point is near the dock site; otherwise FALSE.

### Remarks

The point is near the dock site when it is within the sensitivity set in the docking manager. The default sensitivity is 15 pixels.

## <a name="isreadonly"></a> CMDIChildWndEx::IsReadOnly

Specifies whether the document that is displayed in the child window is read-only.

```
virtual BOOL IsReadOnly();
```

### Return Value

TRUE if the document is read-only; otherwise FALSE.

### Remarks

This function is used to prevent saving of read-only documents.

### Example

The following example demonstrates overriding the `IsReadOnly` method. This code snippet comes from the [VisualStudioDemo Sample: MFC Visual Studio Application](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_VisualStudioDemo#2](../../mfc/codesnippet/cpp/cmdichildwndex-class_3.cpp)]

## <a name="istabbedpane"></a> CMDIChildWndEx::IsTabbedPane

Specifies whether the MDI child window contains a docking pane.

```
BOOL IsTabbedPane() const;
```

### Return Value

TRUE if the MDI child window contains a docking pane that was converted to a tabbed document; otherwise FALSE.

## <a name="onmoveminiframe"></a> CMDIChildWndEx::OnMoveMiniFrame

Called by the framework to move a mini-frame window.

```
virtual BOOL OnMoveMiniFrame(CWnd* pFrame);
```

### Parameters

*pFrame*<br/>
[in] A pointer to a mini-frame window.

### Return Value

TRUE if the method succeeds, otherwise FALSE.

## <a name="onsetpreviewmode"></a> CMDIChildWndEx::OnSetPreviewMode

Called by the framework to enter or exit print preview mode.

```
virtual void OnSetPreviewMode(
    BOOL bPreview,
    CPrintPreviewState* pState);
```

### Parameters

*bPreview*<br/>
[in] If TRUE, enter print preview mode. If FALSE, exit print preview mode.

*pState*<br/>
[in] A pointer to the print preview state structure.

## <a name="onupdateframetitle"></a> CMDIChildWndEx::OnUpdateFrameTitle

Called by the framework to update the frame title.

```
virtual void OnUpdateFrameTitle(BOOL bAddToTitle);
```

### Parameters

*bAddToTitle*<br/>
[in] If TRUE, add the document name to the title.

## <a name="panefrompoint"></a> CMDIChildWndEx::PaneFromPoint

Returns the pane that contains the given point.

```
CBasePane* PaneFromPoint(
    CPoint point,
    int nSensitivity,
    bool bExactBar,
    CRuntimeClass* pRTCBarType) const;

CBasePane* PaneFromPoint(
    CPoint point,
    int nSensitivity,
    DWORD& dwAlignment,
    CRuntimeClass* pRTCBarType) const;
```

### Parameters

*point*<br/>
[in] Specifies the point, in screen coordinates, to check.

*nSensitivity*<br/>
[in] Increase the search area by this amount. A pane satisfies the search criteria if the given point falls in the increased area.

*bExactBar*<br/>
[in] TRUE to ignore the *nSensitivity* parameter; otherwise, FALSE.

*pRTCBarType*<br/>
[in] If not NULL, the method searches only panes of the specified type.

*dwAlignment*<br/>
[in] If a pane is found at the specified point, this parameter contains the side of the pane that was closest to the specified point. For more information, see the Remarks section.

### Return Value

A pointer to the `CBasePane`-derived object that contains the given point, or NULL if no pane was found.

### Remarks

Call this method to determine whether a pane contains the specified point according to the specified conditions such as runtime class and visibility.

When the function returns and a pane was found, *dwAlignment* contains the alignment of the specified point. For example, if the point was closest to the top of the pane, *dwAlignment* is set to CBRS_ALIGN_TOP.

## <a name="recalclayout"></a> CMDIChildWndEx::RecalcLayout

Recalculates the layout of the window.

```
virtual void RecalcLayout(BOOL bNotify = TRUE);
```

### Parameters

*bNotify*<br/>
[in] If TRUE, the active in-place item for the window receives notification of the layout change.

## <a name="removepanefromdockmanager"></a> CMDIChildWndEx::RemovePaneFromDockManager

Removes a pane from the docking manager.

```cpp
void RemovePaneFromDockManager(
    CBasePane* pControlBar,
    BOOL bDestroy,
    BOOL bAdjustLayout,
    BOOL bAutoHide,
    CBasePane* pBarReplacement);
```

### Parameters

*pControlBar*<br/>
[in] A pointer to the pane to remove.

*bDestroy*<br/>
[in] If TRUE, the removed pane is destroyed.

*bAdjustLayout*<br/>
[in] If TRUE, adjust the docking layout immediately.

*bAutoHide*<br/>
[in] If TRUE, the docking layout is related to the list of autohide bars. If FALSE, the docking layout is related to the list of regular panes.

*pBarReplacement*<br/>
[in] A pointer to a pane that replaces the removed pane.

## <a name="setrelatedtabgroup"></a> CMDIChildWndEx::SetRelatedTabGroup

```cpp
void SetRelatedTabGroup(CMFCTabCtrl* p);
```

### Parameters

[in] *p*<br/>

### Remarks

## <a name="showpane"></a> CMDIChildWndEx::ShowPane

```cpp
void ShowPane(
    CBasePane* pBar,
    BOOL bShow,
    BOOL bDelay,
    BOOL bActivate);
```

### Parameters

[in] *pBar*<br/>

[in] *bShow*<br/>

[in] *bDelay*<br/>

[in] *bActivate*<br/>

### Remarks

## <a name="updatetaskbartabicon"></a> CMDIChildWndEx::UpdateTaskbarTabIcon

Updates the Windows 7 taskbar tab icon.

```
virtual void UpdateTaskbarTabIcon(HICON hIcon);
```

### Parameters

*hIcon*<br/>
A handle to an icon to display on the Windows 7 taskbar tab.

### Remarks

## <a name="unregistertaskbartab"></a> CMDIChildWndEx::UnregisterTaskbarTab

Removes the MDI child from Windows 7 taskbar tabs.

```cpp
void UnregisterTaskbarTab(BOOL bCheckRegisteredMDIChildCount = TRUE);
```

### Parameters

*bCheckRegisteredMDIChildCount*<br/>
Specifies whether this function needs to check the number of MDI children registered with MDI tabs. If this number is 0, then this function removes the clipping rectangle from the application's taskbar thumbnail.

### Remarks

## <a name="settaskbarthumbnailcliprect"></a> CMDIChildWndEx::SetTaskbarThumbnailClipRect

Called by the framework to set the clipping rectangle to select a portion of a window's client area to display as that window's thumbnail in the taskbar.

```
virtual BOOL SetTaskbarThumbnailClipRect(CRect rect);
```

### Parameters

*rect*<br/>
Specifies the new clipping rectangle. If the rectangle is empty or null, the clipping is removed.

### Return Value

TRUE if successful; otherwise FALSE.

### Remarks

## <a name="settaskbartabproperties"></a> CMDIChildWndEx::SetTaskbarTabProperties

Sets properties for a Windows 7 taskbar tab.

```cpp
void SetTaskbarTabProperties(DWORD dwFlags);
```

### Parameters

*dwFlags*<br/>
A combination of STPFLAG values. For more information, see [ITaskbarList4::SetTabProperties](/windows/win32/api/shobjidl_core/nf-shobjidl_core-itaskbarlist4-settabproperties).

### Remarks

## <a name="settaskbartaborder"></a> CMDIChildWndEx::SetTaskbarTabOrder

Inserts the MDI child before the specified window on Windows 7 taskbar tabs.

```cpp
void SetTaskbarTabOrder(CMDIChildWndEx* pWndBefore = NULL);
```

### Parameters

*pWndBefore*<br/>
A pointer to the MDI child window whose thumbnail is inserted to the left. This window must already be registered through `RegisterTaskbarTab`. If this value is NULL, the new thumbnail is added to the end of the list.

### Remarks

## <a name="settaskbartabactive"></a> CMDIChildWndEx::SetTaskbarTabActive

Activates the corresponding Windows 7 taskbar tab.

```cpp
void SetTaskbarTabActive();
```

### Remarks

## <a name="registertaskbartab"></a> CMDIChildWndEx::RegisterTaskbarTab

Registers the MDI child with Windows 7 taskbar tabs.

```
virtual void RegisterTaskbarTab(CMDIChildWndEx* pWndBefore = NULL);
```

### Parameters

*pWndBefore*<br/>
A pointer to the MDI child window whose thumbnail is inserted to the left. This window must already be registered through `RegisterTaskbarTab`. If this value is NULL, the new thumbnail is added to the end of the list.

### Remarks

## <a name="ontaskbartabthumbnailstretch"></a> CMDIChildWndEx::OnTaskbarTabThumbnailStretch

Called by the framework when it needs to stretch a bitmap for a Windows 7 taskbar tab thumbnail preview of the MDI child.

```
virtual BOOL OnTaskbarTabThumbnailStretch(
    HBITMAP hBmpDst,
    const CRect& rectDst,
    HBITMAP hBmpSrc,
    const CRect& rectSrc);
```

### Parameters

*hBmpDst*<br/>
A handle to a destination bitmap.

*rectDst*<br/>
Specifies the destination rectangle.

*hBmpSrc*<br/>
A handle to a source bitmap.

*rectSrc*<br/>
Specifies the source rectangle.

### Remarks

Requirement : afxmdichildwndex.h

## <a name="ontaskbartabthumbnailmouseactivate"></a> CMDIChildWndEx::OnTaskbarTabThumbnailMouseActivate

Called by the framework when the Taskbar tab thumbnail should process the WM_MOUSEACTIVATE message.

```
virtual int OnTaskbarTabThumbnailMouseActivate(
    CWnd* pDesktopWnd,
    UINT nHitTest,
    UINT message);
```

### Parameters

*pDesktopWnd*<br/>
Specifies a pointer to the top-level parent window of the window being activated. The pointer may be temporary and should not be stored.

*nHitTest*<br/>
Specifies the hit-test area code. A hit test is a test that determines the location of the cursor.

*message*<br/>
Specifies the mouse message number.

### Remarks

The default implementation activates the related MDI child frame.

## <a name="ontaskbartabthumbnailactivate"></a> CMDIChildWndEx::OnTaskbarTabThumbnailActivate

Called by the framework when the Taskbar tab thumbnail should process the WM_ACTIVATE message.

```
virtual void OnTaskbarTabThumbnailActivate(
    UINT nState,
    CWnd* pWndOther,
    BOOL bMinimized);
```

### Parameters

*nState*<br/>
Specifies whether the `CWnd` is being activated or deactivated.

*pWndOther*<br/>
Pointer to the `CWnd` being activated or deactivated. The pointer can be NULL, and it may be temporary.

*bMinimized*<br/>
Specifies the minimized state of the `CWnd` being activated or deactivated. A value of TRUE indicates the window is minimized.

### Remarks

The default implementation activates the related MDI child frame.

## <a name="onpresstaskbarthmbnailclosebutton"></a> CMDIChildWndEx::OnPressTaskbarThmbnailCloseButton

Called by the framework when the user presses the close button on the Taskbar tab thumbnail.

```
virtual void OnPressTaskbarThmbnailCloseButton();
```

### Remarks

## <a name="ongeticonicthumbnail"></a> CMDIChildWndEx::OnGetIconicThumbnail

Called by the framework when it needs to obtain a bitmap for the iconic thumbnail of the MDI child.

```
virtual HBITMAP OnGetIconicThumbnail(
    int nWidth,
    int nHeight);
```

### Parameters

*nWidth*<br/>
Specifies the width of the required bitmap.

*nHeight*<br/>
Specifies the height of the required bitmap.

### Remarks

## <a name="ongeticoniclivepreviewbitmap"></a> CMDIChildWndEx::OnGetIconicLivePreviewBitmap

Called by the framework when it needs to obtain a bitmap for live preview of the MDI child.

```
virtual HBITMAP OnGetIconicLivePreviewBitmap(
    BOOL bIsMDIChildActive,
    CPoint& ptLocation);
```

### Parameters

*bIsMDIChildActive*<br/>
This parameter is TRUE if the bitmap is requested for the MDI child, which is currently active and the main window is not minimized. The default processing in this case takes a snapshot of the main window.

*ptLocation*<br/>
Specifies the location of the bitmap in the main (top level) window client coordinates. This point should be provided by the callee.

### Return Value

If processed, returns a handle to a valid 32bpp bitmap, otherwise NULL.

### Remarks

Override this method in a derived class and return a valid 32bpp bitmap for live preview of MDI child. This method is called only when the MDI child is displayed on Windows 7 taskbar tabs. If you return NULL, MFC calls the default handlers and obtains bitmaps using `PrintClient` or `PrintWindow`.

## <a name="m_dwdefaulttaskbartabpropertyflags"></a> CMDIChildWndEx::m_dwDefaultTaskbarTabPropertyFlags

A combination of flags, which is passed by the framework to the `SetTaskbarTabProperties` method, when a tab (MDI child) is being registered with Windows 7 taskbar tabs.

```
AFX_IMPORT_DATA static DWORD m_dwDefaultTaskbarTabPropertyFlags;
```

### Remarks

The default combination is STPF_USEAPPTHUMBNAILWHENACTIVE &#124; STPF_USEAPPPEEKWHENACTIVE.

## <a name="istaskbarthumbnailcliprectenabled"></a> CMDIChildWndEx::IsTaskbarThumbnailClipRectEnabled

Tells whether automatic selection of a portion of a window's client area to display as that window's thumbnail in the taskbar is enabled or disabled.

```
BOOL IsTaskbarThumbnailClipRectEnabled() const;
```

### Return Value

Returns TRUE if automatic selection of a portion of a window's client area to display is enabled; otherwise FALSE.

### Remarks

## <a name="istaskbartabssupportenabled"></a> CMDIChildWndEx::IsTaskbarTabsSupportEnabled

Tells whether the MDI child can appear on Windows 7 taskbar tabs.

```
BOOL IsTaskbarTabsSupportEnabled();
```

### Return Value

TRUE if the MDI child can appear on Windows 7 taskbar tabs; FALSE if the MDI child can not appear on Windows 7 taskbar tabs.

### Remarks

## <a name="isregisteredwithtaskbartabs"></a> CMDIChildWndEx::IsRegisteredWithTaskbarTabs

Returns TRUE if the MDI child was successfully registered with Windows 7 taskbar tabs.

```
BOOL IsRegisteredWithTaskbarTabs();
```

### Return Value

TRUE if the MDI child is registered with Windows 7 taskbar tabs; otherwise FALSE.

### Remarks

## <a name="invalidateiconicbitmaps"></a> CMDIChildWndEx::InvalidateIconicBitmaps

Invalidates an iconic bitmap representation of a MDI child.

```
BOOL InvalidateIconicBitmaps();
```

### Return Value

Returns FALSE if Windows 7 taskbar support is disabled or the MDI child is not registered with Windows 7 taskbar tabs; otherwise returns TRUE.

### Remarks

Should be called when the live content or size of a MDI child has changed.

## <a name="gettaskbarthumbnailcliprect"></a> CMDIChildWndEx::GetTaskbarThumbnailClipRect

Called by the framework when it needs to select a portion of a window's client area to display as that window's thumbnail in the taskbar.

```
virtual CRect GetTaskbarThumbnailClipRect() const;
```

### Return Value

A rectangle in windows coordinates. This rectangle is mapped to the client area of the top level frame. The rectangle should be empty to clear the clipping rectangle.

### Remarks

## <a name="gettaskbarpreviewwnd"></a> CMDIChildWndEx::GetTaskbarPreviewWnd

Called by the framework when it needs to obtain a child window (usually a view or splitter window) to be displayed on a Windows 7 taskbar tab thumbnail.

```
virtual CWnd* GetTaskbarPreviewWnd();
```

### Return Value

Should return a valid pointer to a `CWnd` object, whose preview should be displayed on a Windows 7 taskbar tab related to this MDI child. The default implementation returns a child window of this MDI child with AFX_IDW_PANE_FIRST control ID (which is usually a `CView`-derived class).

### Remarks

## <a name="gettabproxywnd"></a> CMDIChildWndEx::GetTabProxyWnd

Returns the tab proxy window registered with Windows 7 taskbar tabs.

```
CMDITabProxyWnd* GetTabProxyWnd();
```

### Return Value

A pointer to a `CMDITabProxyWnd` object, which is registered with Windows 7 taskbar tabs.

### Remarks

## <a name="enabletaskbarthumbnailcliprect"></a> CMDIChildWndEx::EnableTaskbarThumbnailClipRect

Enables or disables automatic selection of a portion of a window's client area to display as that window's thumbnail in the taskbar.

```cpp
void EnableTaskbarThumbnailClipRect(BOOL bEnable = TRUE);
```

### Parameters

*bEnable*<br/>
Specifies whether to enable (TRUE), or disable (FALSE) automatic selection of a portion of a window's client area to display.

### Remarks

## <a name="canshowontaskbartabs"></a> CMDIChildWndEx::CanShowOnTaskBarTabs

Tells the framework whether this MDI child can be displayed on Windows 7 taskbar tabs.

```
virtual BOOL CanShowOnTaskBarTabs();
```

### Return Value

TRUE if the content of the MDI child can be displayed on Windows 7 taskbar thumbnails.

### Remarks

Override this method in a derived class and return FALSE to disable the appearance of this MDI child on Windows 7 taskbar tabs.

## <a name="activatetoplevelframe"></a> CMDIChildWndEx::ActivateTopLevelFrame

Called by the framework to activate the top level frame when the application is activated from a taskbar tab.

```
virtual void ActivateTopLevelFrame();
```

### Remarks

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CMDIChildWnd Class](../../mfc/reference/cmdichildwnd-class.md)<br/>
[CMFCWindowsManagerDialog Class](../../mfc/reference/cmfcwindowsmanagerdialog-class.md)<br/>
[CMDIFrameWndEx Class](../../mfc/reference/cmdiframewndex-class.md)
