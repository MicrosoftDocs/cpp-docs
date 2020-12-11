---
description: "Learn more about: CBasePane Class"
title: "CBasePane Class"
ms.date: "11/06/2018"
f1_keywords: ["CBasePane", "AFXBASEPANE/CBasePane", "AFXBASEPANE/CBasePane::AccNotifyObjectFocusEvent", "AFXBASEPANE/CBasePane::AddPane", "AFXBASEPANE/CBasePane::AdjustDockingLayout", "AFXBASEPANE/CBasePane::AdjustLayout", "AFXBASEPANE/CBasePane::CalcFixedLayout", "AFXBASEPANE/CBasePane::CanAcceptPane", "AFXBASEPANE/CBasePane::CanAutoHide", "AFXBASEPANE/CBasePane::CanBeAttached", "AFXBASEPANE/CBasePane::CanBeClosed", "AFXBASEPANE/CBasePane::CanBeDocked", "AFXBASEPANE/CBasePane::CanBeResized", "AFXBASEPANE/CBasePane::CanBeTabbedDocument", "AFXBASEPANE/CBasePane::CanFloat", "AFXBASEPANE/CBasePane::CanFocus", "AFXBASEPANE/CBasePane::CopyState", "AFXBASEPANE/CBasePane::CreateDefaultMiniframe", "AFXBASEPANE/CBasePane::CreateEx", "AFXBASEPANE/CBasePane::DockPane", "AFXBASEPANE/CBasePane::DockPaneUsingRTTI", "AFXBASEPANE/CBasePane::DockToFrameWindow", "AFXBASEPANE/CBasePane::DoesAllowDynInsertBefore", "AFXBASEPANE/CBasePane::EnableDocking", "AFXBASEPANE/CBasePane::EnableGripper", "AFXBASEPANE/CBasePane::FloatPane", "AFXBASEPANE/CBasePane::get_accHelpTopic", "AFXBASEPANE/CBasePane::get_accSelection", "AFXBASEPANE/CBasePane::GetCaptionHeight", "AFXBASEPANE/CBasePane::GetControlBarStyle", "AFXBASEPANE/CBasePane::GetCurrentAlignment", "AFXBASEPANE/CBasePane::GetDockingMode", "AFXBASEPANE/CBasePane::GetDockSiteFrameWnd", "AFXBASEPANE/CBasePane::GetEnabledAlignment", "AFXBASEPANE/CBasePane::GetMFCStyle", "AFXBASEPANE/CBasePane::GetPaneIcon", "AFXBASEPANE/CBasePane::GetPaneRow", "AFXBASEPANE/CBasePane::GetPaneStyle", "AFXBASEPANE/CBasePane::GetParentDockSite", "AFXBASEPANE/CBasePane::GetParentMiniFrame", "AFXBASEPANE/CBasePane::GetParentTabbedPane", "AFXBASEPANE/CBasePane::GetParentTabWnd", "AFXBASEPANE/CBasePane::GetRecentVisibleState", "AFXBASEPANE/CBasePane::HideInPrintPreviewMode", "AFXBASEPANE/CBasePane::InsertPane", "AFXBASEPANE/CBasePane::IsAccessibilityCompatible", "AFXBASEPANE/CBasePane::IsAutoHideMode", "AFXBASEPANE/CBasePane::IsDialogControl", "AFXBASEPANE/CBasePane::IsDocked", "AFXBASEPANE/CBasePane::IsFloating", "AFXBASEPANE/CBasePane::IsHorizontal", "AFXBASEPANE/CBasePane::IsInFloatingMultiPaneFrameWnd", "AFXBASEPANE/CBasePane::IsMDITabbed", "AFXBASEPANE/CBasePane::IsPaneVisible", "AFXBASEPANE/CBasePane::IsPointNearDockSite", "AFXBASEPANE/CBasePane::IsResizable", "AFXBASEPANE/CBasePane::IsRestoredFromRegistry", "AFXBASEPANE/CBasePane::IsTabbed", "AFXBASEPANE/CBasePane::IsVisible", "AFXBASEPANE/CBasePane::LoadState", "AFXBASEPANE/CBasePane::MoveWindow", "AFXBASEPANE/CBasePane::OnAfterChangeParent", "AFXBASEPANE/CBasePane::OnBeforeChangeParent", "AFXBASEPANE/CBasePane::OnDrawCaption", "AFXBASEPANE/CBasePane::OnMovePaneDivider", "AFXBASEPANE/CBasePane::OnPaneContextMenu", "AFXBASEPANE/CBasePane::OnRemoveFromMiniFrame", "AFXBASEPANE/CBasePane::OnSetAccData", "AFXBASEPANE/CBasePane::PaneFromPoint", "AFXBASEPANE/CBasePane::RecalcLayout", "AFXBASEPANE/CBasePane::RemovePaneFromDockManager", "AFXBASEPANE/CBasePane::SaveState", "AFXBASEPANE/CBasePane::SelectDefaultFont", "AFXBASEPANE/CBasePane::SetControlBarStyle", "AFXBASEPANE/CBasePane::SetDockingMode", "AFXBASEPANE/CBasePane::SetPaneAlignment", "AFXBASEPANE/CBasePane::SetPaneStyle", "AFXBASEPANE/CBasePane::SetWindowPos", "AFXBASEPANE/CBasePane::ShowPane", "AFXBASEPANE/CBasePane::StretchPane", "AFXBASEPANE/CBasePane::UndockPane", "AFXBASEPANE/CBasePane::DoPaint"]
helpviewer_keywords: ["CBasePane [MFC], AccNotifyObjectFocusEvent", "CBasePane [MFC], AddPane", "CBasePane [MFC], AdjustDockingLayout", "CBasePane [MFC], AdjustLayout", "CBasePane [MFC], CalcFixedLayout", "CBasePane [MFC], CanAcceptPane", "CBasePane [MFC], CanAutoHide", "CBasePane [MFC], CanBeAttached", "CBasePane [MFC], CanBeClosed", "CBasePane [MFC], CanBeDocked", "CBasePane [MFC], CanBeResized", "CBasePane [MFC], CanBeTabbedDocument", "CBasePane [MFC], CanFloat", "CBasePane [MFC], CanFocus", "CBasePane [MFC], CopyState", "CBasePane [MFC], CreateDefaultMiniframe", "CBasePane [MFC], CreateEx", "CBasePane [MFC], DockPane", "CBasePane [MFC], DockPaneUsingRTTI", "CBasePane [MFC], DockToFrameWindow", "CBasePane [MFC], DoesAllowDynInsertBefore", "CBasePane [MFC], EnableDocking", "CBasePane [MFC], EnableGripper", "CBasePane [MFC], FloatPane", "CBasePane [MFC], get_accHelpTopic", "CBasePane [MFC], get_accSelection", "CBasePane [MFC], GetCaptionHeight", "CBasePane [MFC], GetControlBarStyle", "CBasePane [MFC], GetCurrentAlignment", "CBasePane [MFC], GetDockingMode", "CBasePane [MFC], GetDockSiteFrameWnd", "CBasePane [MFC], GetEnabledAlignment", "CBasePane [MFC], GetMFCStyle", "CBasePane [MFC], GetPaneIcon", "CBasePane [MFC], GetPaneRow", "CBasePane [MFC], GetPaneStyle", "CBasePane [MFC], GetParentDockSite", "CBasePane [MFC], GetParentMiniFrame", "CBasePane [MFC], GetParentTabbedPane", "CBasePane [MFC], GetParentTabWnd", "CBasePane [MFC], GetRecentVisibleState", "CBasePane [MFC], HideInPrintPreviewMode", "CBasePane [MFC], InsertPane", "CBasePane [MFC], IsAccessibilityCompatible", "CBasePane [MFC], IsAutoHideMode", "CBasePane [MFC], IsDialogControl", "CBasePane [MFC], IsDocked", "CBasePane [MFC], IsFloating", "CBasePane [MFC], IsHorizontal", "CBasePane [MFC], IsInFloatingMultiPaneFrameWnd", "CBasePane [MFC], IsMDITabbed", "CBasePane [MFC], IsPaneVisible", "CBasePane [MFC], IsPointNearDockSite", "CBasePane [MFC], IsResizable", "CBasePane [MFC], IsRestoredFromRegistry", "CBasePane [MFC], IsTabbed", "CBasePane [MFC], IsVisible", "CBasePane [MFC], LoadState", "CBasePane [MFC], MoveWindow", "CBasePane [MFC], OnAfterChangeParent", "CBasePane [MFC], OnBeforeChangeParent", "CBasePane [MFC], OnDrawCaption", "CBasePane [MFC], OnMovePaneDivider", "CBasePane [MFC], OnPaneContextMenu", "CBasePane [MFC], OnRemoveFromMiniFrame", "CBasePane [MFC], OnSetAccData", "CBasePane [MFC], PaneFromPoint", "CBasePane [MFC], RecalcLayout", "CBasePane [MFC], RemovePaneFromDockManager", "CBasePane [MFC], SaveState", "CBasePane [MFC], SelectDefaultFont", "CBasePane [MFC], SetControlBarStyle", "CBasePane [MFC], SetDockingMode", "CBasePane [MFC], SetPaneAlignment", "CBasePane [MFC], SetPaneStyle", "CBasePane [MFC], SetWindowPos", "CBasePane [MFC], ShowPane", "CBasePane [MFC], StretchPane", "CBasePane [MFC], UndockPane", "CBasePane [MFC], DoPaint"]
ms.assetid: 8163dd51-d7c7-4def-9c74-61f8ecdfad82
---
# CBasePane Class

Base class for all panes in MFC.

## Syntax

```
class CBasePane : public CWnd
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|`CBasePane::CBasePane`|Default constructor.|
|`CBasePane::~CBasePane`|Destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|`CBasePane::accHitTest`|Called by the framework to retrieve the child element or child object at a given point on the screen. (Overrides [CWnd::accHitTest](../../mfc/reference/cwnd-class.md#acchittest).)|
|`CBasePane::accLocation`|Called by the framework to retrieve the current screen location for the specified object. (Overrides [CWnd::accLocation](../../mfc/reference/cwnd-class.md#acclocation).)|
|[CBasePane::AccNotifyObjectFocusEvent](#accnotifyobjectfocusevent)|`CBasePane` does not use this method.|
|`CBasePane::accSelect`|Called by the framework to modify the selection or move the keyboard focus of the specified object. (Overrides [CWnd::accSelect](../../mfc/reference/cwnd-class.md#accselect).)|
|[CBasePane::AddPane](#addpane)|Adds a pane to the docking manager.|
|[CBasePane::AdjustDockingLayout](#adjustdockinglayout)|Redirects a call to the docking manager to adjust the docking layout.|
|[CBasePane::AdjustLayout](#adjustlayout)|Called by the framework when the pane should adjust its internal layout.|
|[CBasePane::CalcFixedLayout](#calcfixedlayout)|Calculates the horizontal size of a control bar.|
|[CBasePane::CanAcceptPane](#canacceptpane)|Determines whether another pane can be docked to the pane.|
|[CBasePane::CanAutoHide](#canautohide)|Determines whether the pane supports auto-hide mode.|
|[CBasePane::CanBeAttached](#canbeattached)|Determines whether the pane can be docked to another pane.|
|[CBasePane::CanBeClosed](#canbeclosed)|Determines whether the pane can be closed.|
|[CBasePane::CanBeDocked](#canbedocked)|Determines whether the pane can be docked to another pane.|
|[CBasePane::CanBeResized](#canberesized)|Determines whether the pane can be resized.|
|[CBasePane::CanBeTabbedDocument](#canbetabbeddocument)|Specifies whether the pane can be converted to an MDI tabbed document.|
|[CBasePane::CanFloat](#canfloat)|Determines whether the pane can float.|
|[CBasePane::CanFocus](#canfocus)|Specifies whether the pane can receive focus.|
|[CBasePane::CopyState](#copystate)|Copies the state of a given pane.|
|[CBasePane::CreateDefaultMiniframe](#createdefaultminiframe)|If the pane can float, creates a mini-frame window.|
|[CBasePane::CreateEx](#createex)|Creates the pane control.|
|[CBasePane::DockPane](#dockpane)|Docks a pane to another pane or to a frame window.|
|[CBasePane::DockPaneUsingRTTI](#dockpaneusingrtti)|Docks the pane by using run-time type information.|
|[CBasePane::DockToFrameWindow](#docktoframewindow)|Docks a dockable pane to a frame.|
|[CBasePane::DoesAllowDynInsertBefore](#doesallowdyninsertbefore)|Determines whether another pane can be dynamically inserted between this pane and the parent frame.|
|[CBasePane::EnableDocking](#enabledocking)|Enables docking of the pane to the main frame.|
|[CBasePane::EnableGripper](#enablegripper)|Enables or disables the gripper. If the gripper is enabled, the user can drag it to reposition the pane.|
|`CBasePane::FillWindowRect`|Used internally.|
|[CBasePane::FloatPane](#floatpane)|Floats the pane.|
|`CBasePane::get_accChild`|Called by the framework to retrieve the address of an `IDispatch` interface for the specified child. (Overrides [CWnd::get_accChild](../../mfc/reference/cwnd-class.md#get_accchild).)|
|`CBasePane::get_accChildCount`|Called by the framework to retrieve the number of children that belong to this object. (Overrides [CWnd::get_accChildCount](../../mfc/reference/cwnd-class.md#get_accchildcount).)|
|`CBasePane::get_accDefaultAction`|Called by the framework to retrieve a string that describes the default action for the object. (Overrides [CWnd::get_accDefaultAction](../../mfc/reference/cwnd-class.md#get_accdefaultaction).)|
|`CBasePane::get_accDescription`|Called by framework to retrieve a string that describes the visual appearance of the specified object. (Overrides [CWnd::get_accDescription](../../mfc/reference/cwnd-class.md#get_accdescription).)|
|`CBasePane::get_accFocus`|Called by the framework to retrieve the object that has the keyboard focus. (Overrides [CWnd::get_accFocus](../../mfc/reference/cwnd-class.md#get_accfocus).)|
|`CBasePane::get_accHelp`|Called by the framework to retrieve a  Help property string for the object. (Overrides [CWnd::get_accHelp](../../mfc/reference/cwnd-class.md#get_acchelp).)|
|[CBasePane::get_accHelpTopic](#get_acchelptopic)|Called by the framework to retrieve the full path of the WinHelp file that is associated with the specified object and the identifier of the appropriate topic in that file. (Overrides [CWnd::get_accHelpTopic](../../mfc/reference/cwnd-class.md#get_acchelptopic).)|
|`CBasePane::get_accKeyboardShortcut`|Called by the framework to retrieve the specified shortcut key for the object. (Overrides [CWnd::get_accKeyboardShortcut](../../mfc/reference/cwnd-class.md#get_acckeyboardshortcut).)|
|`CBasePane::get_accName`|Called by the framework to retrieve the name of the specified object. (Overrides [CWnd::get_accName](../../mfc/reference/cwnd-class.md#get_accname).)|
|`CBasePane::get_accParent`|Called by the framework to retrieve the `IDispatch` interface for the parent of the object. (Overrides [CWnd::get_accParent](../../mfc/reference/cwnd-class.md#get_accparent).)|
|`CBasePane::get_accRole`|Called by the framework to retrieve information that describes the role of the specified object. (Overrides [CWnd::get_accRole](../../mfc/reference/cwnd-class.md#get_accrole).)|
|[CBasePane::get_accSelection](#get_accselection)|Called by the framework to retrieve the selected children of this object. (Overrides [CWnd::get_accSelection](../../mfc/reference/cwnd-class.md#get_accselection).)|
|`CBasePane::get_accState`|Called by the framework to retrieve the current state of the specified object. (Overrides [CWnd::get_accState](../../mfc/reference/cwnd-class.md#get_accstate).)|
|`CBasePane::get_accValue`|Called by the framework to retrieve the value of the specified object. (Overrides [CWnd::get_accValue](../../mfc/reference/cwnd-class.md#get_accvalue).)|
|[CBasePane::GetCaptionHeight](#getcaptionheight)|Returns the caption height.|
|[CBasePane::GetControlBarStyle](#getcontrolbarstyle)|Returns the control bar style.|
|[CBasePane::GetCurrentAlignment](#getcurrentalignment)|Returns the current pane alignment.|
|[CBasePane::GetDockingMode](#getdockingmode)|Returns the current docking mode for the pane.|
|[CBasePane::GetDockSiteFrameWnd](#getdocksiteframewnd)|Returns a pointer to the window that is the dock site for the pane.|
|[CBasePane::GetEnabledAlignment](#getenabledalignment)|Returns the CBRS_ALIGN_ styles that are applied to the pane.|
|[CBasePane::GetMFCStyle](#getmfcstyle)|Returns the pane styles specific to MFC.|
|[CBasePane::GetPaneIcon](#getpaneicon)|Returns a handle to the pane icon.|
|`CBasePane::GetPaneRect`|Used internally.|
|[CBasePane::GetPaneRow](#getpanerow)|Returns a pointer to the [CDockingPanesRow](../../mfc/reference/cdockingpanesrow-class.md)object where the pane is docked.|
|[CBasePane::GetPaneStyle](#getpanestyle)|Returns the pane style.|
|[CBasePane::GetParentDockSite](#getparentdocksite)|Returns a pointer to the parent dock site.|
|[CBasePane::GetParentMiniFrame](#getparentminiframe)|Returns a pointer to the parent mini-frame window.|
|[CBasePane::GetParentTabbedPane](#getparenttabbedpane)|Returns a pointer to the parent tabbed pane.|
|[CBasePane::GetParentTabWnd](#getparenttabwnd)|Returns a pointer to the parent window that is inside a tab.|
|[CBasePane::GetRecentVisibleState](#getrecentvisiblestate)|The framework calls this method when a pane is restored from an archive.|
|[CBasePane::HideInPrintPreviewMode](#hideinprintpreviewmode)|Specifies whether the pane is hidden in print preview.|
|[CBasePane::InsertPane](#insertpane)|Registers the specified pane with the docking manager.|
|[CBasePane::IsAccessibilityCompatible](#isaccessibilitycompatible)|Specifies whether the pane supports Active Accessibility.|
|[CBasePane::IsAutoHideMode](#isautohidemode)|Determines whether a pane is in auto-hide mode.|
|[CBasePane::IsDialogControl](#isdialogcontrol)|Specifies whether the pane is a dialog control.|
|[CBasePane::IsDocked](#isdocked)|Determines whether the pane is docked.|
|[CBasePane::IsFloating](#isfloating)|Determines whether the pane is floating.|
|[CBasePane::IsHorizontal](#ishorizontal)|Determines whether the pane is docked horizontally.|
|[CBasePane::IsInFloatingMultiPaneFrameWnd](#isinfloatingmultipaneframewnd)|Specifies whether the pane is in a multi-pane frame window.|
|[CBasePane::IsMDITabbed](#ismditabbed)|Determines whether the pane has been added to an MDI child window as a tabbed document.|
|[CBasePane::IsPaneVisible](#ispanevisible)|Specifies whether the WS_VISIBLE flag is set for the pane.|
|[CBasePane::IsPointNearDockSite](#ispointneardocksite)|Determines whether a specified point is near the dock site.|
|[CBasePane::IsResizable](#isresizable)|Determines whether the pane can be resized.|
|[CBasePane::IsRestoredFromRegistry](#isrestoredfromregistry)|Determines whether the pane is restored from the registry.|
|[CBasePane::IsTabbed](#istabbed)|Determines whether the pane has been inserted in the tab control of a tabbed window.|
|`CBasePane::IsTooltipTopmost`|Used internally.|
|[CBasePane::IsVisible](#isvisible)|Determines whether the pane is visible.|
|[CBasePane::LoadState](#loadstate)|Loads the pane state from the registry.|
|[CBasePane::MoveWindow](#movewindow)|Moves the pane.|
|[CBasePane::OnAfterChangeParent](#onafterchangeparent)|Called by the framework when the pane's parent has been changed.|
|[CBasePane::OnBeforeChangeParent](#onbeforechangeparent)|Called by the framework just before the pane changes its parent window.|
|[CBasePane::OnDrawCaption](#ondrawcaption)|The framework calls this method when the caption is drawn.|
|[CBasePane::OnMovePaneDivider](#onmovepanedivider)|This method is currently not used.|
|[CBasePane::OnPaneContextMenu](#onpanecontextmenu)|Called by the framework when it builds a menu that has a list of panes.|
|[CBasePane::OnRemoveFromMiniFrame](#onremovefromminiframe)|Called by the framework when a pane is removed from its parent mini frame window.|
|[CBasePane::OnSetAccData](#onsetaccdata)|`CBasePane` does not use this method.|
|`CBasePane::OnUpdateCmdUI`|Used internally.|
|[CBasePane::PaneFromPoint](#panefrompoint)|Returns the pane that contains the given point.|
|`CBasePane::PreTranslateMessage`|Used by class [CWinApp](../../mfc/reference/cwinapp-class.md) to translate window messages before they are dispatched to the [TranslateMessage](/windows/win32/api/winuser/nf-winuser-translatemessage) and [DispatchMessage](/windows/win32/api/winuser/nf-winuser-dispatchmessage) Windows functions. (Overrides [CWnd::PreTranslateMessage](../../mfc/reference/cwnd-class.md#pretranslatemessage).)|
|[CBasePane::RecalcLayout](#recalclayout)|`CBasePane` does not use this method.|
|[CBasePane::RemovePaneFromDockManager](#removepanefromdockmanager)|Unregisters a pane and removes it from the list in the docking manager.|
|[CBasePane::SaveState](#savestate)|Saves the pane's state to the registry.|
|[CBasePane::SelectDefaultFont](#selectdefaultfont)|Selects the default font for a given device context.|
|`CBasePane::Serialize`|Reads or writes this object from or to an archive. (Overrides [CObject::Serialize](../../mfc/reference/cobject-class.md#serialize).)|
|[CBasePane::SetControlBarStyle](#setcontrolbarstyle)|Sets the control bar style.|
|[CBasePane::SetDockingMode](#setdockingmode)|Sets the docking mode for the pane.|
|`CBasePane::SetMDITabbed`|Used internally.|
|[CBasePane::SetPaneAlignment](#setpanealignment)|Sets the alignment for the pane.|
|`CBasePane::SetPaneRect`|Used internally.|
|[CBasePane::SetPaneStyle](#setpanestyle)|Sets the style of the pane.|
|`CBasePane::SetRestoredFromRegistry`|Used internally.|
|[CBasePane::SetWindowPos](#setwindowpos)|Changes the size, position, and Z-order of a pane.|
|[CBasePane::ShowPane](#showpane)|Shows or hides the pane.|
|[CBasePane::StretchPane](#stretchpane)|Stretches a pane vertically or horizontally.|
|[CBasePane::UndockPane](#undockpane)|Removes the pane from the dock site, default slider, or mini-frame window where it is currently docked.|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[CBasePane::DoPaint](#dopaint)|Fills the background of the pane.|

## Remarks

If you want to create a pane class that supports the extended docking features available in MFC, you must derive it from `CBasePane` or from [CPane Class](../../mfc/reference/cpane-class.md).

## Customization Tips

The following customization tips pertain to the `CBasePane Class` and any classes that inherit from it:

- When you create a pane, you can apply several new styles:

  - AFX_CBRS_FLOAT makes the pane float.

  - AFX_CBRS_AUTOHIDE enables auto-hide mode.

  - AFX_CBRS_CLOSE enables the pane to be closed (hidden).

  These are flags that you can combine with a bitwise-OR operation.

`CBasePane` implements the following virtual Boolean methods to reflect these flags: [CBasePane::CanBeClosed](#canbeclosed), [CBasePane::CanAutoHide](#canautohide), [CBasePane::CanFloat](#canfloat). You can override them in derived classes to customize their behavior.

- You can customize docking behavior by overriding [CBasePane::CanAcceptPane](#canacceptpane). Have your pane return FALSE from this method to prevent another pane from docking to it.

- If you want to create a static pane that cannot float and that prevents any other pane from docking before it (similar to the Outlook bar in the OutlookDemo example), create it as non-floating and override [CBasePane::DoesAllowDynInsertBefore](#doesallowdyninsertbefore) to return FALSE. The default implementation returns FALSE if the pane is created without the AFX_CBRS_FLOAT style.

- Create all panes with IDs other than -1.

- To determine pane visibility, use [CBasePane::IsVisible](#isvisible). It correctly handles the visibility state in tabbed and auto-hide modes.

- If you want to create a non-floating resizable pane, create it without the AFX_CBRS_FLOAT style and call [CFrameWnd::DockControlBar](../../mfc/reference/cframewnd-class.md#dockcontrolbar).

- To exclude a pane from a docking layout or to remove a toolbar from its dock bar, call [CBasePane::UndockPane](#undockpane). Do not call this method for panes in auto-hide mode or for panes that reside in tabs of tabbed windows.

- If you want to float or undock a pane that is in auto-hide mode, you must call [CDockablePane::SetAutoHideMode](../../mfc/reference/cdockablepane-class.md#setautohidemode) with FALSE as the first argument before you call [CBasePane::FloatPane](#floatpane) or [CBasePane::UndockPane](#undockpane).

## Example

The following example demonstrates how to use various methods in the `CBasePane` class. The example demonstrates how to retrieve a pane from the `CFrameWndEx` class and how to set the docking mode, the pane alignment, and the pane style. The code is from the [Word Pad sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_WordPad#2](../../mfc/reference/codesnippet/cpp/cbasepane-class_1.cpp)]

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CBasePane](../../mfc/reference/cbasepane-class.md)

## Requirements

**Header:** afxbasepane.h

## <a name="accnotifyobjectfocusevent"></a> CBasePane::AccNotifyObjectFocusEvent

`CBasePane` does not use this method.

```
virtual void AccNotifyObjectFocusEvent(int);
```

### Parameters

*int*<br/>
[in] Not used.

## <a name="addpane"></a> CBasePane::AddPane

Adds a pane to the docking manager.

```cpp
void AddPane(CBasePane* pBar);
```

### Parameters

*pBar*<br/>
[in] A pointer to a pane to add.

### Remarks

This is a convenience method that adds a pane to a docking manager. By using this method, you do not have to write code that analyzes the type of the parent frame.

For more information, see [CDockingManager Class](../../mfc/reference/cdockingmanager-class.md) and [CMDIFrameWndEx::AddPane](../../mfc/reference/cmdiframewndex-class.md#addpane).

## <a name="adjustdockinglayout"></a> CBasePane::AdjustDockingLayout

Redirects a call to the docking manager to adjust the docking layout.

```
virtual void AdjustDockingLayout(HDWP hdwp=NULL);
```

### Parameters

*hdwp*<br/>
[out] A handle to a structure containing multiple window positions.

### Remarks

This is a convenience method that adjusts the docking layout. By using this method, you do not have to write code that analyzes the type of the parent frame.

For more information, see [CDockingManager::AdjustDockingLayout](../../mfc/reference/cdockingmanager-class.md#adjustdockinglayout)

## <a name="adjustlayout"></a> CBasePane::AdjustLayout

Called by the framework to adjust the internal layout of a pane.

```
virtual void AdjustLayout();
```

### Remarks

The framework calls this method when a pane has to adjust its internal layout. The base implementation does nothing.

## <a name="calcfixedlayout"></a> CBasePane::CalcFixedLayout

Calculates the horizontal size of a control bar.

```
virtual CSize CalcFixedLayout(
    BOOL bStretch,
    BOOL bHorz);
```

### Parameters

*bStretch*<br/>
[in] Indicates whether the bar should be stretched to the size of the frame. The *bStretch* parameter is nonzero when the bar is not a docking bar (not available for docking) and is 0 when it is docked or floating (available for docking).

*bHorz*<br/>
[in] Indicates that the bar is horizontally or vertically oriented. The *bHorz* parameter is nonzero if the bar is horizontally oriented and is 0 if it is vertically oriented.

### Return Value

The control bar size, in pixels, of a `CSize` object.

### Remarks

See the remarks section in [CControlBar::CalcFixedLayout](../../mfc/reference/ccontrolbar-class.md#calcfixedlayout)

## <a name="canacceptpane"></a> CBasePane::CanAcceptPane

Determines whether another pane can be docked to the pane.

```
virtual BOOL CanAcceptPane(const CBasePane* pBar) const;
```

### Parameters

*pBar*<br/>
[in] A pointer to the pane to dock.

### Return Value

TRUE if another pane can be accepted; otherwise FALSE.

### Remarks

The framework calls this method before it docks the pane specified by *pBar* to the current pane.

Use this method and the [CBasePane::CanBeDocked](#canbedocked) method to control how panes dock to other panes in your application.

The default implementation returns FALSE.

## <a name="canautohide"></a> CBasePane::CanAutoHide

Determines whether the pane supports auto-hide mode.

```
virtual BOOL CanAutoHide() const;
```

### Return Value

TRUE if this pane supports auto-hide mode; otherwise FALSE.

### Remarks

The framework calls this function to determine whether the pane supports auto-hide mode.

During construction, you can set this ability by passing the AFX_CBRS_AUTOHIDE flag to [CBasePane::CreateEx](#createex).

The default implementation checks for the AFX_CBRS_AUTOHIDE flag. Override this method in a derived class to customize this behavior.

## <a name="canbeattached"></a> CBasePane::CanBeAttached

Determines whether the pane can be docked to another pane or frame window.

```
virtual BOOL CanBeAttached() const;
```

### Return Value

TRUE if the pane can be docked to another pane or frame window; otherwise FALSE.

### Remarks

The default implementation returns FALSE. Override this method in a derived class to enable or disable the ability to dock without calling [CBasePane::EnableDocking](#enabledocking).

## <a name="canbeclosed"></a> CBasePane::CanBeClosed

Determines whether the pane can be closed.

```
virtual BOOL CanBeClosed() const;
```

### Return Value

TRUE if the pane can be closed; otherwise FALSE.

### Remarks

The framework calls this method to determine whether the pane can be closed. If the method returns TRUE, a **Close** button is added to the pane's title bar or, if the pane is floating, to the title bar of the pane's miniframe window.

During construction, you can set this ability by passing the AFX_CBRS_CLOSE flag to [CBasePane::CreateEx](#createex).

The default implementation checks for the AFX_CBRS_CLOSE flag.

## <a name="canbedocked"></a> CBasePane::CanBeDocked

Determines whether the pane can be docked to another pane.

```
virtual BOOL CanBeDocked(CBasePane* pDockBar) const;
```

### Parameters

*pDockBar*<br/>
[in] A pointer to another pane.

### Return Value

TRUE if this pane can be docked to another pane; otherwise FALSE.

### Remarks

The framework calls this method before it docks the pane specified by *pDockBar* to the current pane.

Use this method and the [CBasePane::CanAcceptPane](#canacceptpane) method to control how panes dock to other panes in your application.

The default implementation returns FALSE.

## <a name="canberesized"></a> CBasePane::CanBeResized

Determines whether the pane can be resized.

```
virtual BOOL CanBeResized() const;
```

### Return Value

TRUE if the pane can be resized; otherwise, FALSE.

### Remarks

This method checks for the AFX_CBRS_RESIZE flag, which is specified by default in `CBasePane::OnCreate`. If this flag is not specified, the docking manager flags the pane internally as immovable instead of docking it.

## <a name="canbetabbeddocument"></a> CBasePane::CanBeTabbedDocument

Specifies whether the pane can be converted to an MDI tabbed document.

```
virtual BOOL CanBeTabbedDocument() const;
```

### Return Value

TRUE if the pane can be converted to a tabbed document; otherwise, FALSE. `CBasePane::CanBeTabbedDocument` always returns FALSE.

### Remarks

Only objects of certain `CBasePane`-derived types, such as the [CDockablePane Class](../../mfc/reference/cdockablepane-class.md), can be converted to tabbed documents.

## <a name="canfloat"></a> CBasePane::CanFloat

Determines whether the pane can float.

```
virtual BOOL CanFloat() const;
```

### Return Value

TRUE if the pane can float; otherwise FALSE.

### Remarks

The framework calls this method to determine whether the pane can float.

During construction, you can set this ability by passing the AFX_CBRS_FLOAT flag to [CBasePane::CreateEx](#createex).

> [!NOTE]
> The framework assumes that non-floating panes are static and that their docking state cannot change. Therefore, the framework does not save the docking state of non-floating panes.

The default implementation checks for the AFX_CBRS_FLOAT style.

## <a name="canfocus"></a> CBasePane::CanFocus

Specifies whether the pane can receive focus.

```
virtual BOOL CanFocus() const;
```

### Return Value

TRUE if the pane can receive focus; otherwise FALSE.

### Remarks

Override this method in a derived class to control focus. For example, because toolbars cannot receive focus, this method returns FALSE when it is called on toolbar objects.

The framework tries to set the input focus when a pane is docked or floated.

## <a name="copystate"></a> CBasePane::CopyState

Copies the state of a given pane.

```
virtual void CopyState(CBasePane* pOrgBar);
```

### Parameters

*pOrgBar*<br/>
[in] A pointer to another pane.

### Remarks

This method copies the state from *pOrgBar* to this pane.

## <a name="createdefaultminiframe"></a> CBasePane::CreateDefaultMiniframe

If the pane can float, this method creates a mini-frame window for it.

```
virtual CPaneFrameWnd* CreateDefaultMiniframe(CRect rectInitial);
```

### Parameters

*rectInitial*<br/>
[in] Specifies the initial coordinates of the mini-frame window.

### Return Value

A pointer to the new mini-frame window or NULL if the creation failed.

### Remarks

The framework calls this method when a pane switches to a floating state. The method creates a mini-frame window and attaches the pane to this window.

The default implementation returns NULL.

## <a name="createex"></a> CBasePane::CreateEx

Creates the pane control.

```
virtual BOOL CreateEx(
    DWORD dwStyleEx,
    LPCTSTR lpszClassName,
    LPCTSTR lpszWindowName,
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID,
    DWORD dwControlBarStyle=0,
    CCreateContext* pContext=NULL);
```

### Parameters

*dwStyleEx*<br/>
[in] The extended styles (see [CWnd::CreateEx](../../mfc/reference/cwnd-class.md#createex) for more information).

*lpszClassName*<br/>
[in] The window class name.

*lpszWindowName*<br/>
[in] The window name.

*dwStyle*<br/>
[in] The window style (see [CWnd::CreateEx](../../mfc/reference/cwnd-class.md#createex)).

*rect*<br/>
[in] The initial rectangle.

*pParentWnd*<br/>
[in] A pointer to the parent window.

*nID*<br/>
[in] Specifies the pane ID. Must be unique.

*dwControlBarStyle*<br/>
[in] Style flags for panes.

*pContext*<br/>
[in] A pointer to `CcreateContext`

### Return Value

TRUE if the pane is created successfully; otherwise FALSE.

### Remarks

Creates a window of class `lpszClassName`. If you specify WS_CAPTION, this method clears the WS_CAPTION style bit and sets `CBasePane::m_bHasCaption` to TRUE, because the library does not support panes with captions.

You can use any combination of child window styles and MFC control bar (CBRS_) styles.

The library adds several new styles for panes. The following table describes the new styles:

|Style|Description|
|-----------|-----------------|
|AFX_CBRS_FLOAT|The pane can float.|
|AFX_CBRS_AUTOHIDE|The pane supports auto-hide mode|
|AFX_CBRS_RESIZE|The pane can be resized. **Important:**  This style is not implemented.|
|AFX_CBRS_CLOSE|The pane can be closed.|
|AFX_CBRS_AUTO_ROLLUP|The pane can be rolled up when it floats.|
|AFX_CBRS_REGULAR_TABS|When one pane docks to another pane that has this style, a regular tabbed window is created. (For more information, see [CTabbedPane Class](../../mfc/reference/ctabbedpane-class.md).)|
|AFX_CBRS_OUTLOOK_TABS|When one pane docks to another pane that has this style, an Outlook-style tabbed window is created. (For more information, see [CMFCOutlookBar Class](../../mfc/reference/cmfcoutlookbar-class.md).)|

To use the new styles, specify them in *dwControlBarStyle*.

## <a name="dockpane"></a> CBasePane::DockPane

Docks a pane to another pane or to a frame window.

```
virtual BOOL DockPane(
    CBasePane* pDockBar,
    LPCRECT lpRect,
    AFX_DOCK_METHOD dockMethod);
```

### Parameters

*pDockBar*<br/>
[in] A pointer to another pane.

*lpRect*<br/>
[in] Specifies the destination rectangle.

*dockMethod*<br/>
[in] Specifies the docking method.

### Return Value

TRUE if the control bar was docked successfully; otherwise, FALSE.

### Remarks

Call this function to dock a pane to another pane or a dock bar ( [CDockSite Class](../../mfc/reference/cdocksite-class.md)) that is specified by *pDockBar*, or to a main frame if *pDockBar* is NULL.

*dockMethod* specifies how the pane is docked. See [CPane::DockPane](../../mfc/reference/cpane-class.md#dockpane) for a list of possible values.

## <a name="dockpaneusingrtti"></a> CBasePane::DockPaneUsingRTTI

Docks the pane by using run-time type information.

```cpp
void DockPaneUsingRTTI(BOOL bUseDockSite);
```

### Parameters

*bUseDockSite*<br/>
[in] If TRUE, dock to the docking site. If FALSE, dock to the parent frame.

## <a name="docktoframewindow"></a> CBasePane::DockToFrameWindow

Docks a dockable pane to a frame.

```
virtual BOOL DockToFrameWindow(
    DWORD dwAlignment,
    LPCRECT lpRect = NULL,
    DWORD dwDockFlags = DT_DOCK_LAST,
    CBasePane* pRelativeBar = NULL,
    int nRelativeIndex = -1,
    BOOL bOuterEdge = FALSE);
```

### Parameters

*dwAlignment*<br/>
[in] The side of the parent frame that you want to dock the pane to.

*lpRect*<br/>
[in] The desired size.

*dwDockFlags*<br/>
[in] Ignored.

*pRelativeBar*<br/>
[in] Ignored.

*nRelativeIndex*<br/>
[in] Ignored.

*bOuterEdge*<br/>
[in] If TRUE and there are other dockable panes at the side specified by *dwAlignment*, the pane is docked outside the other panes, closer to the edge of the parent frame. If FALSE, the pane is docked closer to the center of the client area.

### Return Value

TRUE if the method was successful; otherwise FALSE.

### Remarks

This method fails if a pane divider ( [CPaneDivider Class](../../mfc/reference/cpanedivider-class.md)) cannot be created. Otherwise, it always returns TRUE.

## <a name="doesallowdyninsertbefore"></a> CBasePane::DoesAllowDynInsertBefore

Determines whether another pane can be dynamically inserted between this pane and the parent frame.

```
virtual BOOL DoesAllowDynInsertBefore() const;
```

### Return Value

TRUE if a user can insert another pane; otherwise FALSE.

### Remarks

The framework calls this method to determine whether a user can dynamically insert a pane before this pane.

For example, suppose your application creates a pane docked at the left side of the frame (such as the Outlook bar). To prevent the user from docking another pane to the left of the first pane, override this method and return FALSE.

We recommend that you override this method and return FALSE for non-floating panes derived from [CDockablePane Class](../../mfc/reference/cdockablepane-class.md).

The default implementation returns TRUE.

## <a name="dopaint"></a> CBasePane::DoPaint

Fills the background of the pane.

```
virtual void DoPaint(CDC* pDC);
```

### Parameters

*pDC*<br/>
[in] A pointer to a device context.

### Remarks

The default implementation calls the current visual manager to fill the background ( [CMFCVisualManager::OnFillBarBackground](../../mfc/reference/cmfcvisualmanager-class.md#onfillbarbackground)).

## <a name="enabledocking"></a> CBasePane::EnableDocking

Enables docking of the pane to the main frame.

```
virtual void EnableDocking(DWORD dwAlignment);
```

### Parameters

*dwAlignment*<br/>
[in] Specifies the docking alignment to enable.

### Remarks

Call this method to enable docking alignment to the main frame. You can pass a combination of CBRS_ALIGN_ flags (for more information, see [CControlBar::EnableDocking](../../mfc/reference/ccontrolbar-class.md#enabledocking)).

`EnableDocking` sets the internal flag `CBasePane::m_dwEnabledAlignment` and the framework checks this flag when a pane is docked.

Call [CBasePane::GetEnabledAlignment](#getenabledalignment) to determine the docking alignment for a pane.

## <a name="enablegripper"></a> CBasePane::EnableGripper

Enables or disables the gripper. If the gripper is enabled, the user can drag it to reposition the pane.

```
virtual void EnableGripper(BOOL bEnable);
```

### Parameters

*bEnable*<br/>
[in] TRUE to enable the gripper; FALSE to disable it.

### Remarks

The framework uses this method to enable a gripper instead of using the WS_CAPTION style.

## <a name="floatpane"></a> CBasePane::FloatPane

Floats the pane.

```
virtual BOOL FloatPane(
    CRect rectFloat,
    AFX_DOCK_METHOD dockMethod=DM_UNKNOWN,
    bool bShow=true);
```

### Parameters

*rectFloat*<br/>
[in] Specifies the screen coordinates where the floating pane appears.

*dockMethod*<br/>
[in] Specifies the dock method to use to float the pane.

*bShow*<br/>
[in] Specifies whether the floating pane is visible (TRUE) or hidden (FALSE).

### Return Value

TRUE if the pane was floated successfully; otherwise FALSE.

### Remarks

Call this method to float a pane at the screen position specified by *rectFloat*.

## <a name="get_acchelptopic"></a> CBasePane::get_accHelpTopic

The framework calls this method to retrieve the full path of the **WinHelp** file that is associated with the specified object and the identifier of the appropriate topic in that file.

```
virtual HRESULT get_accHelpTopic(
    BSTR* pszHelpFile,
    VARIANT varChild,
    long* pidTopic);
```

### Parameters

*pszHelpFile*<br/>
[in] Address of a BSTR that receives the full path of the **WinHelp** file that is associated with the specified object, if any.

*varChild*<br/>
[in] Specifies whether the Help topic to be retrieved is that of the object or one of the child elements of the object. This parameter can be either CHILDID_SELF (to obtain a Help topic for the object) or a child ID (to obtain a Help topic for one of the child elements of the object).

*pidTopic*<br/>
[in] Identifies the **Help** file topic that is associated with the specified object.

### Return Value

`CBasePane` does not implement this method. Therefore, `CBasePane::get_accHelpTopic` always returns S_FALSE.

### Remarks

This function is part of the Active Accessibility support in MFC. Override this function in a derived class to provide help information about your object.

## <a name="get_accselection"></a> CBasePane::get_accSelection

The framework calls this method to retrieve the selected children of this object.

```
virtual HRESULT get_accSelection(VARIANT* pvarChildren);
```

### Parameters

*pvarChildren*<br/>
[in] Receives information that identifies the selected children.

### Return Value

`CBasePane` does not implement this method. If *pvarChildren* is NULL, this method returns E_INVALIDARG. Otherwise, this method returns DISP_E_MEMBERNOTFOUND.

### Remarks

This function is part of the Active Accessibility support in MFC. Override this function in a derived class if you have non-windowed user interface elements other than windowless ActiveX controls.

## <a name="getcaptionheight"></a> CBasePane::GetCaptionHeight

Returns the caption height.

```
virtual int GetCaptionHeight() const;
```

### Return Value

The caption height.

## <a name="getcontrolbarstyle"></a> CBasePane::GetControlBarStyle

Returns the control bar style.

```
virtual DWORD GetControlBarStyle() const
```

### Return Value

A bitwise-OR combination of AFX_CBRS_ flags.

### Remarks

The return value is a combination of the following possible values.

|Style|Description|
|-----------|-----------------|
|AFX_CBRS_FLOAT|Makes the control bar float.|
|AFX_CBRS_AUTOHIDE|Enables auto-hide mode.|
|AFX_CBRS_RESIZE|Enables resizing of the control bar. When this flag is set, the control bar can be placed in a dockable pane.|
|AFX_CBRS_CLOSE|Enables hiding of the control bar.|

## <a name="getcurrentalignment"></a> CBasePane::GetCurrentAlignment

Returns the current pane alignment.

```
virtual DWORD GetCurrentAlignment() const;
```

### Return Value

The current alignment of the control bar. The following table shows the possible values:

|Value|Alignment|
|-----------|---------------|
|CBRS_ALIGN_LEFT|Left alignment.|
|CBRS_ALIGN_RIGHT|Right alignment.|
|CBRS_ALIGN_TOP|Top alignment.|
|CBRS_ALIGN_BOTTOM|Bottom alignment.|

## <a name="getdockingmode"></a> CBasePane::GetDockingMode

Returns the current docking mode for the pane.

```
virtual AFX_DOCK_TYPE GetDockingMode() const;
```

### Return Value

DT_STANDARD if dragging the pane is indicated on the screen by a drag rectangle. DT_IMMEDIATE if the contents of the pane are dragged.

### Remarks

The framework calls this method to determine the current docking mode of the pane.

If `CBasePane::m_dockMode` is undefined (DT_UNDEFINED), then the docking mode is taken from the global docking mode (`AFX_GLOBAL_DATA::m_dockModeGlobal`).

By setting *m_dockMode* or overriding `GetDockingMode` you can control the docking mode for each pane.

## <a name="getdocksiteframewnd"></a> CBasePane::GetDockSiteFrameWnd

Returns a pointer to the [CDockingPanesRow](../../mfc/reference/cdockingpanesrow-class.md)object where the pane is docked.

```
virtual CWnd* GetDockSiteFrameWnd() const;
```

### Return Value

A pointer to the dock site of the pane.

### Remarks

Call this method to retrieve a pointer to the dock site of the pane. The dock site can be either a main frame window if the pane is docked to the main frame, or a mini-frame window if the pane is floating.

## <a name="getenabledalignment"></a> CBasePane::GetEnabledAlignment

Returns the CBRS_ALIGN_ styles that are applied to the pane.

```
virtual DWORD GetEnabledAlignment() const;
```

### Return Value

A combination of CBRS_ALIGN_ styles. The following table shows the possible styles:

|Flag|Enabled alignment|
|----------|-----------------------|
|CBRS_ALIGN_LEFT|Left.|
|CBRS_ALIGN_RIGHT|Right.|
|CBRS_ALIGN_TOP|Top.|
|CBRS_ALIGN_BOTTOM|Bottom.|
|CBRS_ALIGN_ANY|Combination of all flags.|

### Remarks

Call this method to determine the enabled alignment for the pane. Enabled alignment means the sides of the main frame window that a pane can be docked to.

Enable docking alignment by using [CBasePane::EnableDocking](#enabledocking).

## <a name="getmfcstyle"></a> CBasePane::GetMFCStyle

Returns the pane styles that are specific to MFC.

```
virtual DWORD GetMFCStyle() const;
```

### Return Value

A combination of library-specific (AFX_CBRS_) pane styles.

## <a name="getpaneicon"></a> CBasePane::GetPaneIcon

Returns a handle to the pane icon.

```
virtual HICON GetPaneIcon(BOOL bBigIcon);
```

### Parameters

*bBigIcon*<br/>
[in] Specifies a 32 pixel by 32 pixel icon if TRUE; specifies a 16 pixel by 16 pixel icon if FALSE.

### Return Value

A handle to the pane icon. If unsuccessful, returns NULL.

### Remarks

The default implementation calls [CWnd::GetIcon](../../mfc/reference/cwnd-class.md#geticon).

## <a name="getpanerow"></a> CBasePane::GetPaneRow

Returns a pointer to the [CDockingPanesRow](../../mfc/reference/cdockingpanesrow-class.md)object where the pane is docked.

```
CDockingPanesRow* GetPaneRow();
```

### Return Value

A pointer to `CDockingPanesRow` if the pane is docked, or NULL if it is floating.

### Remarks

Call this method to access the row where a pane is docked. For example, to arrange the panes in a particular row, call `GetPaneRow` and then call [CDockingPanesRow::ArrangePanes](../../mfc/reference/cdockingpanesrow-class.md#arrangepanes).

## <a name="getpanestyle"></a> CBasePane::GetPaneStyle

Returns the pane style.

```
virtual DWORD GetPaneStyle() const;
```

### Return Value

A combination of control bar styles (including CBRS_ styles) that was set by the [CBasePane::SetPaneStyle](#setpanestyle) method at creation time.

## <a name="getparentdocksite"></a> CBasePane::GetParentDockSite

Returns a pointer to the parent dock site.

```
virtual CDockSite* GetParentDockSite() const;
```

### Return Value

The parent dock site.

## <a name="getparentminiframe"></a> CBasePane::GetParentMiniFrame

Returns a pointer to the parent mini-frame window.

```
virtual CPaneFrameWnd* GetParentMiniFrame(BOOL bNoAssert=FALSE) const;
```

### Parameters

*bNoAssert*<br/>
[in] If TRUE, this method does not check for non-valid pointers. If you call this method when your application exits, set this parameter to TRUE.

### Return Value

A valid pointer to the parent mini-frame window if the pane is floating; otherwise NULL.

### Remarks

Call this function to retrieve a pointer to the parent mini-frame window. This method iterates through all parents and checks for an object derived from [CPaneFrameWnd Class](../../mfc/reference/cpaneframewnd-class.md).

Use `GetParentMiniFrame` to determine whether the pane is floating.

## <a name="getparenttabbedpane"></a> CBasePane::GetParentTabbedPane

Returns a pointer to the parent tabbed pane.

```
CBaseTabbedPane* GetParentTabbedPane() const;
```

### Return Value

A pointer to the parent tabbed pane if it exists; otherwise NULL.

## <a name="getparenttabwnd"></a> CBasePane::GetParentTabWnd

Returns a pointer to the parent window that is inside a tab.

```
CMFCBaseTabCtrl* GetParentTabWnd(HWND& hWndTab) const;
```

### Parameters

*hWndTab*<br/>
[out] If the return value is not NULL, this parameter contains the handle to the parent tabbed window.

### Return Value

A valid pointer to the parent tabbed window or NULL.

### Remarks

Use this function to retrieve a pointer to the parent tabbed window. Sometimes it is not enough to call `GetParent`, because a pane may be inside a docking wrapper ( [CDockablePaneAdapter Class](../../mfc/reference/cdockablepaneadapter-class.md)) or inside a pane adapter ( [CDockablePaneAdapter Class](../../mfc/reference/cdockablepaneadapter-class.md)). By using `GetParentTabWnd` you will be able to retrieve a valid pointer in those cases (assuming that the parent is a tabbed window).

## <a name="getrecentvisiblestate"></a> CBasePane::GetRecentVisibleState

The framework calls this method when a pane is restored from an archive.

```
virtual BOOL GetRecentVisibleState() const;
```

### Return Value

A BOOL that specifies the recent visible state. If TRUE, the pane was visible when serialized and should be visible when restored. If FALSE, the pane was hidden when serialized and should be hidden when restored.

## <a name="hideinprintpreviewmode"></a> CBasePane::HideInPrintPreviewMode

Specifies whether the pane is hidden in print preview.

```
virtual BOOL HideInPrintPreviewMode() const;
```

### Return Value

TRUE if the pane is not shown in print preview; otherwise, FALSE.

### Remarks

Base panes are not shown in print preview. Therefore, this method always returns TRUE.

## <a name="insertpane"></a> CBasePane::InsertPane

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

## <a name="isaccessibilitycompatible"></a> CBasePane::IsAccessibilityCompatible

Specifies whether the pane supports Active Accessibility.

```
virtual BOOL IsAccessibilityCompatible();
```

### Return Value

TRUE if the pane supports Active Accessibility; otherwise, FALSE.

## <a name="isautohidemode"></a> CBasePane::IsAutoHideMode

Determines whether a pane is in auto-hide mode.

```
virtual BOOL IsAutoHideMode() const;
```

### Return Value

TRUE if the pane is in auto-hide mode; otherwise, FALSE.

### Remarks

Base panes cannot auto-hide. This method always returns FALSE.

## <a name="isdialogcontrol"></a> CBasePane::IsDialogControl

Specifies whether the pane is a dialog box control.

```
BOOL IsDialogControl() const;
```

### Return Value

TRUE if the pane is a dialog box control; otherwise, FALSE.

### Remarks

The framework uses this method to ensure layout consistency for all panes.

## <a name="isdocked"></a> CBasePane::IsDocked

Determines whether the pane is docked.

```
virtual BOOL IsDocked() const;
```

### Return Value

TRUE if the parent of the pane is not a mini-frame or if the pane is floating in a mini-frame with another pane; otherwise, FALSE.

## <a name="isfloating"></a> CBasePane::IsFloating

Determines whether the pane is floating.

```
virtual BOOL IsFloating() const;
```

### Return Value

TRUE if the pane is floating; otherwise, FALSE.

### Remarks

This method returns the opposite value of [CBasePane::IsDocked](#isdocked).

## <a name="ishorizontal"></a> CBasePane::IsHorizontal

Determines whether the pane is docked horizontally.

```
virtual BOOL IsHorizontal() const;
```

### Return Value

TRUE if the pane is docked horizontally; otherwise FALSE.

### Remarks

The default implementation checks the current docking alignment for CBRS_ORIENT_HORZ.

## <a name="isinfloatingmultipaneframewnd"></a> CBasePane::IsInFloatingMultiPaneFrameWnd

Specifies whether the pane is in a multi-pane frame window ( [CMultiPaneFrameWnd Class](../../mfc/reference/cmultipaneframewnd-class.md)).

```
virtual BOOL IsInFloatingMultiPaneFrameWnd() const;
```

### Return Value

TRUE if the pane is in a multi-pane frame window; otherwise, FALSE.

### Remarks

Only dockable panes can float in a multi-pane frame window. Therefore, `CBasePane::IsInFloatingMultiPaneFrameWnd` always returns FALSE.

## <a name="ismditabbed"></a> CBasePane::IsMDITabbed

Determines whether the pane has been added to an MDI child window as a tabbed document.

```
virtual BOOL IsMDITabbed() const;
```

### Return Value

TRUE if the pane was added to an MDI child window as a tabbed document; otherwise, FALSE.

## <a name="ispanevisible"></a> CBasePane::IsPaneVisible

Specifies whether the WS_VISIBLE flag is set for the pane.

```
BOOL IsPaneVisible() const;
```

### Return Value

TRUE if WS_VISIBLE is set; otherwise, FALSE.

### Remarks

Use [CBasePane::IsVisible](#isvisible) to determine pane visibility.

## <a name="ispointneardocksite"></a> CBasePane::IsPointNearDockSite

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
[out] Specifies which edge the point is near. Possible values are CBRS_ALIGN_LEFT, CBRS_ALIGN_RIGHT, CBRS_ALIGN_TOP, and CBRS_ALIGN_BOTTOM

*bOuterEdge*<br/>
[out] TRUE if the point is near the outer border of the dock site; FALSE otherwise.

### Return Value

TRUE if the point is near the dock site; otherwise FALSE.

### Remarks

The point is near the dock site when it is within the sensitivity set in the docking manager. The default sensitivity is 15 pixels.

## <a name="isresizable"></a> CBasePane::IsResizable

Determines whether the pane can be resized.

```
virtual BOOL IsResizable() const;
```

### Return Value

TRUE if the pane can be resized by the user; otherwise, FALSE.

### Remarks

Panes of [CDockablePane Class](../../mfc/reference/cdockablepane-class.md) can be resized.

The status bar ( [CMFCStatusBar Class](../../mfc/reference/cmfcstatusbar-class.md)) and the dock bar ( [CDockSite Class](../../mfc/reference/cdocksite-class.md)) cannot be resized.

## <a name="isrestoredfromregistry"></a> CBasePane::IsRestoredFromRegistry

Determines whether the pane is restored from the registry.

```
virtual BOOL IsRestoredFromRegistry() const;
```

### Return Value

TRUE if the pane is restored from the registry; otherwise, FALSE.

## <a name="istabbed"></a> CBasePane::IsTabbed

Determines whether the pane has been inserted in the tab control of a tabbed window.

```
virtual BOOL IsTabbed() const;
```

### Return Value

TRUE if the control bar is inserted in a tab of a tabbed window; otherwise FALSE.

### Remarks

This method retrieves a pointer to the immediate parent and determines if the parent's runtime class is [CMFCBaseTabCtrl Class](../../mfc/reference/cmfcbasetabctrl-class.md).

## <a name="isvisible"></a> CBasePane::IsVisible

Determines whether the pane is visible.

```
virtual BOOL IsVisible() const;
```

### Return Value

TRUE if the pane is visible; otherwise FALSE.

### Remarks

Use this method to determine the visibility of a pane. Do not use `::IsWindowVisible`.

If the pane is not tabbed (see [CBasePane::IsTabbed](#istabbed)), this method checks for the WS_VISIBLE style. If the pane is tabbed, this method checks the visibility of the parent tabbed window. If the parent window is visible, the function checks the visibility of the pane tab using [CMFCBaseTabCtrl::IsTabVisible](../../mfc/reference/cmfcbasetabctrl-class.md#istabvisible).

## <a name="loadstate"></a> CBasePane::LoadState

Loads the pane's state from the registry.

```
virtual BOOL LoadState(
    LPCTSTR lpszProfileName=NULL,
    int nIndex=-1,
    UINT uiID=(UINT)-1);
```

### Parameters

*lpszProfileName*<br/>
[in] Profile name.

*nIndex*<br/>
[in] Profile index.

*uiID*<br/>
[in] Pane ID.

### Return Value

TRUE if the pane state was loaded successfully; otherwise FALSE.

### Remarks

The framework calls this method to load the pane state from the registry. Override it in a derived class to load additional information saved by [CBasePane::SaveState](#savestate).

## <a name="movewindow"></a> CBasePane::MoveWindow

Moves the pane.

```
virtual HDWP MoveWindow(
    CRect& rect,
    BOOL bRepaint = TRUE,
    HDWP hdwp = NULL);
```

### Parameters

*rect*<br/>
[in] A rectangle specifying the new location and size of the pane.

*bRepaint*<br/>
[in] If TRUE, the pane is repainted. If FALSE, the pane is not repainted.

*hdwp*<br/>
[in] Handle to a deferred window position structure.

### Return Value

A handle to a deferred window position structure, or NULL.

### Remarks

If you pass NULL as the *hdwp* parameter, this method moves the window normally. If you pass a handle, this method performs a deferred window move. You can obtain a handle by calling [BeginDeferWindowPos](/windows/win32/api/winuser/nf-winuser-begindeferwindowpos) or by storing the return value of a previous call to this method.

## <a name="onafterchangeparent"></a> CBasePane::OnAfterChangeParent

Called by the framework after the pane's parent changes.

```
virtual void OnAfterChangeParent(CWnd* pWndOldParent);
```

### Parameters

*pWndOldParent*<br/>
[in] A pointer to the previous parent.

### Remarks

The framework calls this method after the pane's parent changes, usually because of a docking or floating operation.

The default implementation does nothing.

## <a name="onbeforechangeparent"></a> CBasePane::OnBeforeChangeParent

Called by the framework just before the pane changes its parent window.

```
virtual void OnBeforeChangeParent(
    CWnd* pWndNewParent,
    BOOL bDelay=FALSE);
```

### Parameters

*pWndNewParent*<br/>
[in] A pointer to a new parent window.

*bDelay*<br/>
[in] Specifies whether layout adjustments must be delayed.

### Remarks

The framework calls this method just before the pane's parent changes, usually because of a docking, floating, or auto-hide operation.

The default implementation does nothing.

## <a name="ondrawcaption"></a> CBasePane::OnDrawCaption

The framework calls this method when the caption is drawn.

```
virtual void OnDrawCaption();
```

### Remarks

This method has no functionality for the `CBasePane` class.

## <a name="onmovepanedivider"></a> CBasePane::OnMovePaneDivider

This method is currently not used.

```
virtual void OnMovePaneDivider(CPaneDivider* /* unused */);
```

### Parameters

*unused*<br/>
[in] Not used.

## <a name="onpanecontextmenu"></a> CBasePane::OnPaneContextMenu

Called by the framework when it builds a menu that has a list of panes.

```
virtual void OnPaneContextMenu(
    CWnd* pParentFrame,
    CPoint point);
```

### Parameters

*pParentFrame*<br/>
[in] A pointer to the parent frame.

*point*<br/>
[in] Specifies the location of the shortcut menu.

### Remarks

`OnPaneContextMenu` calls the docking manager, which maintains the list of panes that belong to the current frame window. This method adds the names of the panes to a shortcut menu and displays it. The commands on the menu show or hide individual panes.

Override this method to customize this behavior.

## <a name="onremovefromminiframe"></a> CBasePane::OnRemoveFromMiniFrame

Called by the framework when a pane is removed from its parent mini frame window.

```
virtual void OnRemoveFromMiniFrame(CPaneFrameWnd* pMiniFrame);
```

### Parameters

*pMiniFrame*<br/>
[in] A pointer to a mini-frame window from which the pane is removed.

### Remarks

The framework calls this method when a pane is removed from its parent mini-frame window (as a result of docking, for example).

The default implementation does nothing.

## <a name="onsetaccdata"></a> CBasePane::OnSetAccData

`CBasePane` does not use this method.

```
virtual BOOL OnSetAccData(long lVal);
```

### Parameters

*lVal*<br/>
[in] Not used.

### Return Value

This method always returns TRUE.

### Remarks

## <a name="panefrompoint"></a> CBasePane::PaneFromPoint

Returns the pane that contains the given point.

```
CBasePane* PaneFromPoint(
    CPoint point,
    int nSensitivity,
    bool bExactBar = false,
    CRuntimeClass* pRTCBarType = NULL) const;
```

### Parameters

*point*<br/>
[in] Specifies the point, in screen coordinates, to check.

*nSensitivity*<br/>
[in] Increase the search area by this amount. A pane will satisfy the search criteria if the given point falls in the increased area.

*bExactBar*<br/>
[in] TRUE to ignore the *nSensitivity* parameter; otherwise, FALSE.

*pRTCBarType*<br/>
[in] If not NULL, the method searches only panes of the specified type.

### Return Value

The `CBasePane`-derived object that contains the given point, or NULL if no pane was found.

## <a name="recalclayout"></a> CBasePane::RecalcLayout

`CBasePane` does not use this method.

```
virtual void RecalcLayout();
```

## <a name="removepanefromdockmanager"></a> CBasePane::RemovePaneFromDockManager

Unregisters a pane and removes it from the list in the docking manager.

```cpp
void RemovePaneFromDockManager(
    CBasePane* pBar,
    BOOL bDestroy = TRUE,
    BOOL bAdjustLayout = FALSE,
    BOOL bAutoHide = FALSE,
    CBasePane* pBarReplacement = NULL);
```

### Parameters

*pBar*<br/>
[in] A pointer to a pane to be removed.

*bDestroy*<br/>
[in] If TRUE, the removed pane is destroyed.

*bAdjustLayout*<br/>
[in] If TRUE, adjust the docking layout immediately.

*bAutoHide*<br/>
[in] If TRUE, the docking layout is related to the list of autohide bars. If FALSE, the docking layout is related to the list of regular panes.

*pBarReplacement*<br/>
[in] A pointer to a pane that replaces the removed pane.

## <a name="savestate"></a> CBasePane::SaveState

Saves the pane's state to the registry.

```
virtual BOOL SaveState(
    LPCTSTR lpszProfileName=NULL,
    int nIndex=-1,
    UINT uiID=(UINT)-1);
```

### Parameters

*lpszProfileName*<br/>
[in] Profile name.

*nIndex*<br/>
[in] Profile index.

*uiID*<br/>
[in] Pane ID.

### Return Value

TRUE if the state was saved successfully; otherwise FALSE.

### Remarks

The framework calls this method when it saves the pane's state to the registry. Override `SaveState` in a derived class to store additional information.

## <a name="selectdefaultfont"></a> CBasePane::SelectDefaultFont

Selects the default font for a given device context.

```
CFont* SelectDefaultFont(CDC* pDC);
```

### Parameters

*pDC*<br/>
[in] A device context.

### Return Value

A pointer to the default [CFont Class](../../mfc/reference/cfont-class.md) object.

## <a name="setcontrolbarstyle"></a> CBasePane::SetControlBarStyle

Sets the control bar style.

```
virtual void SetControlBarStyle(DWORD dwNewStyle);
```

### Parameters

*dwNewStyle*<br/>
[in] A bitwise-OR combination of the following possible values.

|Style|Description|
|-----------|-----------------|
|AFX_CBRS_FLOAT|Makes the control bar float.|
|AFX_CBRS_AUTOHIDE|Enables auto-hide mode.|
|AFX_CBRS_RESIZE|Enables resizing of the control bar. When this flag is set, the control bar can be placed in a dockable pane.|
|AFX_CBRS_CLOSE|Enables hiding of the control bar.|

## <a name="setdockingmode"></a> CBasePane::SetDockingMode

Sets the docking mode for the pane.

```cpp
void SetDockingMode(AFX_DOCK_TYPE dockModeNew);
```

### Parameters

*dockModeNew*<br/>
[in] Specifies the new docking mode for the pane.

### Remarks

The framework supports two docking modes: standard and immediate.

In the standard docking mode, panes and mini-frame windows are moved around using a drag rectangle. In the immediate docking mode, control bars and mini-frame windows are moved immediately with their context.

Initially, the docking mode is defined globally by [CDockingManager::m_dockModeGlobal](../../mfc/reference/cdockingmanager-class.md#m_dockmodeglobal). You can set the docking mode for each pane individually using the `SetDockingMode` method.

## <a name="setpanealignment"></a> CBasePane::SetPaneAlignment

Sets the alignment for the pane.

```
virtual void SetPaneAlignment(DWORD dwAlignment);
```

### Parameters

*dwAlignment*<br/>
[in] Specifies the new alignment.

### Remarks

Usually, the framework calls this method when a pane is docked from one side of the main frame to another.

The following table shows the possible values for *dwAlignment*:

|Value|Alignment|
|-----------|---------------|
|CBRS_ALIGN_LEFT|Left alignment.|
|CBRS_ALIGN_RIGHT|Right alignment.|
|CBRS_ALIGN_TOP|Top alignment.|
|CBRS_ALIGN_BOTTOM|Bottom alignment.|

## <a name="setpanestyle"></a> CBasePane::SetPaneStyle

Sets the style of the pane.

```
virtual void SetPaneStyle(DWORD dwNewStyle);
```

### Parameters

*dwNewStyle*<br/>
[in] Specifies the new style to set.

### Remarks

This method can be used to set any of the CBRS_ styles that are defined in afxres.h. Because pane style and pane alignment are stored together, set the new style by combining it with the current alignment as follows.

`pPane->SetPaneStyle (pPane->GetCurrentAlignment() | CBRS_TOOLTIPS);`

## <a name="setwindowpos"></a> CBasePane::SetWindowPos

Changes the size, position, and Z-order of a pane.

```
virtual HDWP SetWindowPos(
    const CWnd* pWndInsertAfter,
    int x,
    int y,
    int cx,
    int cy,
    UINT nFlags,
    HDWP hdwp = NULL);
```

### Parameters

*pWndInsertAfter*<br/>
[in] Identifies the `CWnd` object that comes before this `CWnd` object in the Z-order. For more information, see [CWnd::SetWindowPos](../../mfc/reference/cwnd-class.md#setwindowpos).

*x*<br/>
[in] Specifies the position of the left side of the window.

*y*<br/>
[in] Specifies the position of the top of the window.

*cx*<br/>
[in] Specifies the width of the window.

*cy*<br/>
[in] Specifies the height of the window.

*nFlags*<br/>
[in] Specifies size and position options. For more information, see [CWnd::SetWindowPos](../../mfc/reference/cwnd-class.md#setwindowpos).

*hdwp*<br/>
[in] Handle to a structure that contains size and position information for one or more windows.

### Return Value

A handle to an updated deferred window position structure, or NULL.

### Remarks

If *pWndInsertAfter* is NULL, this method calls [CWnd::SetWindowPos](../../mfc/reference/cwnd-class.md#setwindowpos). If *pWndInsertAfter* is non-NULL, this method calls `DeferWindowPos`.

## <a name="showpane"></a> CBasePane::ShowPane

Shows or hides the pane.

```
virtual void ShowPane(
    BOOL bShow,
    BOOL bDelay,
    BOOL bActivate);
```

### Parameters

*bShow*<br/>
[in] Specifies whether to show (TRUE) or hide (FALSE) a pane.

*bDelay*<br/>
[in] If TRUE, recalculating the docking layout is delayed.

*bActivate*<br/>
[in] If TRUE, the pane is active when shown.

### Remarks

This method shows or hides a pane. Use this method instead of `ShowWindow` because this method notifies the relevant docking managers about changes in the pane's visibility.

Use [CBasePane::IsVisible](#isvisible) to determine the current visibility of a pane.

## <a name="stretchpane"></a> CBasePane::StretchPane

Stretches a pane vertically or horizontally.

```
virtual CSize StretchPane(
    int nLength,
    BOOL bVert);
```

### Parameters

*nLength*<br/>
[in] The length by which to stretch the pane.

*bVert*<br/>
[in] If TRUE, stretch the pane vertically. If FALSE, stretch the pane horizontally.

### Return Value

The size of the stretched pane.

## <a name="undockpane"></a> CBasePane::UndockPane

Removes the pane from the dock site, default slider, or mini-frame window where it is currently docked.

```
virtual void UndockPane(BOOL bDelay=FALSE);
```

### Parameters

*bDelay*<br/>
If TRUE, the docking layout is not recalculated immediately.

### Remarks

Call this method to manipulate the pane state or exclude the pane from the docking layout.

If you want to continue to use this pane, call either [CBasePane::DockPane](#dockpane) or [CBasePane::FloatPane](#floatpane) before calling this method.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CPane](../../mfc/reference/cbasepane-class.md)<br/>
[CWnd Class](../../mfc/reference/cwnd-class.md)
