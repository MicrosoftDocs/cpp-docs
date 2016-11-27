---
title: "CBasePane Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CBasePane::get_accKeyboardShortcut"
  - "CBasePane.get_accKeyboardShortcut"
  - "CBasePane.accSelect"
  - "get_accDefaultAction"
  - "accSelect"
  - "CBasePane.accHitTest"
  - "CBasePane.get_accRole"
  - "get_accKeyboardShortcut"
  - "CBasePane::Serialize"
  - "CBasePane"
  - "CBasePane::get_accDefaultAction"
  - "get_accParent"
  - "CBasePane::accSelect"
  - "accLocation"
  - "CBasePane.get_accDescription"
  - "get_accName"
  - "CBasePane::get_accChildCount"
  - "CBasePane.get_accChild"
  - "CBasePane::accHitTest"
  - "accHitTest"
  - "get_accHelp"
  - "CBasePane.get_accChildCount"
  - "CBasePane.get_accValue"
  - "CBasePane::get_accDescription"
  - "get_accChildCount"
  - "CBasePane.accLocation"
  - "CBasePane.PreTranslateMessage"
  - "CBasePane.get_accName"
  - "PreTranslateMessage"
  - "CBasePane::get_accFocus"
  - "get_accDescription"
  - "CBasePane::get_accRole"
  - "get_accValue"
  - "CBasePane.Serialize"
  - "CBasePane::accLocation"
  - "get_accRole"
  - "CBasePane::get_accChild"
  - "get_accFocus"
  - "CBasePane::get_accHelp"
  - "CBasePane.get_accDefaultAction"
  - "CBasePane.get_accHelp"
  - "CBasePane::PreTranslateMessage"
  - "CBasePane::get_accState"
  - "CBasePane.get_accParent"
  - "CBasePane::get_accParent"
  - "get_accChild"
  - "CBasePane::get_accValue"
  - "Serialize"
  - "get_accState"
  - "CBasePane.get_accState"
  - "CBasePane.get_accFocus"
  - "CBasePane::get_accName"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "get_accState method"
  - "get_accHelp method"
  - "CBasePane class"
  - "accLocation method"
  - "accHitTest method"
  - "get_accDescription method"
  - "get_accDefaultAction method"
  - "get_accName method"
  - "get_accFocus method"
  - "get_accRole method"
  - "get_accValue method"
  - "get_accChild method"
  - "accSelect method"
  - "get_accKeyboardShortcut method"
  - "get_accChildCount method"
  - "Serialize method"
  - "PreTranslateMessage method"
  - "get_accParent method"
ms.assetid: 8163dd51-d7c7-4def-9c74-61f8ecdfad82
caps.latest.revision: 43
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
|`CBasePane::accHitTest`|Called by the framework to retrieve the child element or child object at a given point on the screen. (Overrides [CWnd::accHitTest](../../mfc/reference/cwnd-class.md#cwnd__acchittest).)|  
|`CBasePane::accLocation`|Called by the framework to retrieve the current screen location for the specified object. (Overrides [CWnd::accLocation](../../mfc/reference/cwnd-class.md#cwnd__acclocation).)|  
|[CBasePane::AccNotifyObjectFocusEvent](#cbasepane__accnotifyobjectfocusevent)|`CBasePane` does not use this method.|  
|`CBasePane::accSelect`|Called by the framework to modify the selection or move the keyboard focus of the specified object. (Overrides [CWnd::accSelect](../../mfc/reference/cwnd-class.md#cwnd__accselect).)|  
|[CBasePane::AddPane](#cbasepane__addpane)|Adds a pane to the docking manager.|  
|[CBasePane::AdjustDockingLayout](#cbasepane__adjustdockinglayout)|Redirects a call to the docking manager to adjust the docking layout.|  
|[CBasePane::AdjustLayout](#cbasepane__adjustlayout)|Called by the framework when the pane should adjust its internal layout.|  
|[CBasePane::CalcFixedLayout](#cbasepane__calcfixedlayout)|Calculates the horizontal size of a control bar.|  
|[CBasePane::CanAcceptPane](#cbasepane__canacceptpane)|Determines whether another pane can be docked to the pane.|  
|[CBasePane::CanAutoHide](#cbasepane__canautohide)|Determines whether the pane supports auto-hide mode.|  
|[CBasePane::CanBeAttached](#cbasepane__canbeattached)|Determines whether the pane can be docked to another pane.|  
|[CBasePane::CanBeClosed](#cbasepane__canbeclosed)|Determines whether the pane can be closed.|  
|[CBasePane::CanBeDocked](#cbasepane__canbedocked)|Determines whether the pane can be docked to another pane.|  
|[CBasePane::CanBeResized](#cbasepane__canberesized)|Determines whether the pane can be resized.|  
|[CBasePane::CanBeTabbedDocument](#cbasepane__canbetabbeddocument)|Specifies whether the pane can be converted to an MDI tabbed document.|  
|[CBasePane::CanFloat](#cbasepane__canfloat)|Determines whether the pane can float.|  
|[CBasePane::CanFocus](#cbasepane__canfocus)|Specifies whether the pane can receive focus.|  
|[CBasePane::CopyState](#cbasepane__copystate)|Copies the state of a given pane.|  
|[CBasePane::CreateDefaultMiniframe](#cbasepane__createdefaultminiframe)|If the pane can float, creates a mini-frame window.|  
|[CBasePane::CreateEx](#cbasepane__createex)|Creates the pane control.|  
|[CBasePane::DockPane](#cbasepane__dockpane)|Docks a pane to another pane or to a frame window.|  
|[CBasePane::DockPaneUsingRTTI](#cbasepane__dockpaneusingrtti)|Docks the pane by using run-time type information.|  
|[CBasePane::DockToFrameWindow](#cbasepane__docktoframewindow)|Docks a dockable pane to a frame.|  
|[CBasePane::DoesAllowDynInsertBefore](#cbasepane__doesallowdyninsertbefore)|Determines whether another pane can be dynamically inserted between this pane and the parent frame.|  
|[CBasePane::EnableDocking](#cbasepane__enabledocking)|Enables docking of the pane to the main frame.|  
|[CBasePane::EnableGripper](#cbasepane__enablegripper)|Enables or disables the gripper. If the gripper is enabled, the user can drag it to reposition the pane.|  
|`CBasePane::FillWindowRect`|Used internally.|  
|[CBasePane::FloatPane](#cbasepane__floatpane)|Floats the pane.|  
|`CBasePane::get_accChild`|Called by the framework to retrieve the address of an `IDispatch` interface for the specified child. (Overrides [CWnd::get_accChild](../../mfc/reference/cwnd-class.md#cwnd__get_accchild).)|  
|`CBasePane::get_accChildCount`|Called by the framework to retrieve the number of children that belong to this object. (Overrides [CWnd::get_accChildCount](../../mfc/reference/cwnd-class.md#cwnd__get_accchildcount).)|  
|`CBasePane::get_accDefaultAction`|Called by the framework to retrieve a string that describes the default action for the object. (Overrides [CWnd::get_accDefaultAction](../../mfc/reference/cwnd-class.md#cwnd__get_accdefaultaction).)|  
|`CBasePane::get_accDescription`|Called by framework to retrieve a string that describes the visual appearance of the specified object. (Overrides [CWnd::get_accDescription](../../mfc/reference/cwnd-class.md#cwnd__get_accdescription).)|  
|`CBasePane::get_accFocus`|Called by the framework to retrieve the object that has the keyboard focus. (Overrides [CWnd::get_accFocus](../../mfc/reference/cwnd-class.md#cwnd__get_accfocus).)|  
|`CBasePane::get_accHelp`|Called by the framework to retrieve a  Help property string for the object. (Overrides [CWnd::get_accHelp](../../mfc/reference/cwnd-class.md#cwnd__get_acchelp).)|  
|[CBasePane::get_accHelpTopic](#cbasepane__get_acchelptopic)|Called by the framework to retrieve the full path of the WinHelp file that is associated with the specified object and the identifier of the appropriate topic in that file. (Overrides [CWnd::get_accHelpTopic](../../mfc/reference/cwnd-class.md#cwnd__get_acchelptopic).)|  
|`CBasePane::get_accKeyboardShortcut`|Called by the framework to retrieve the specified shortcut key for the object. (Overrides [CWnd::get_accKeyboardShortcut](../../mfc/reference/cwnd-class.md#cwnd__get_acckeyboardshortcut).)|  
|`CBasePane::get_accName`|Called by the framework to retrieve the name of the specified object. (Overrides [CWnd::get_accName](../../mfc/reference/cwnd-class.md#cwnd__get_accname).)|  
|`CBasePane::get_accParent`|Called by the framework to retrieve the `IDispatch` interface for the parent of the object. (Overrides [CWnd::get_accParent](../../mfc/reference/cwnd-class.md#cwnd__get_accparent).)|  
|`CBasePane::get_accRole`|Called by the framework to retrieve information that describes the role of the specified object. (Overrides [CWnd::get_accRole](../../mfc/reference/cwnd-class.md#cwnd__get_accrole).)|  
|[CBasePane::get_accSelection](#cbasepane__get_accselection)|Called by the framework to retrieve the selected children of this object. (Overrides [CWnd::get_accSelection](../../mfc/reference/cwnd-class.md#cwnd__get_accselection).)|  
|`CBasePane::get_accState`|Called by the framework to retrieve the current state of the specified object. (Overrides [CWnd::get_accState](../../mfc/reference/cwnd-class.md#cwnd__get_accstate).)|  
|`CBasePane::get_accValue`|Called by the framework to retrieve the value of the specified object. (Overrides [CWnd::get_accValue](../../mfc/reference/cwnd-class.md#cwnd__get_accvalue).)|  
|[CBasePane::GetCaptionHeight](#cbasepane__getcaptionheight)|Returns the caption height.|  
|[CBasePane::GetControlBarStyle](#cbasepane__getcontrolbarstyle)|Returns the control bar style.|  
|[CBasePane::GetCurrentAlignment](#cbasepane__getcurrentalignment)|Returns the current pane alignment.|  
|[CBasePane::GetDockingMode](#cbasepane__getdockingmode)|Returns the current docking mode for the pane.|  
|[CBasePane::GetDockSiteFrameWnd](#cbasepane__getdocksiteframewnd)|Returns a pointer to the window that is the dock site for the pane.|  
|[CBasePane::GetEnabledAlignment](#cbasepane__getenabledalignment)|Returns the CBRS_ALIGN_ styles that are applied to the pane.|  
|[CBasePane::GetMFCStyle](#cbasepane__getmfcstyle)|Returns the pane styles specific to MFC.|  
|[CBasePane::GetPaneIcon](#cbasepane__getpaneicon)|Returns a handle to the pane icon.|  
|`CBasePane::GetPaneRect`|Used internally.|  
|[CBasePane::GetPaneRow](#cbasepane__getpanerow)|Returns a pointer to the [CDockingPanesRow](../../mfc/reference/cdockingpanesrow-class.md)object where the pane is docked.|  
|[CBasePane::GetPaneStyle](#cbasepane__getpanestyle)|Returns the pane style.|  
|[CBasePane::GetParentDockSite](#cbasepane__getparentdocksite)|Returns a pointer to the parent dock site.|  
|[CBasePane::GetParentMiniFrame](#cbasepane__getparentminiframe)|Returns a pointer to the parent mini-frame window.|  
|[CBasePane::GetParentTabbedPane](#cbasepane__getparenttabbedpane)|Returns a pointer to the parent tabbed pane.|  
|[CBasePane::GetParentTabWnd](#cbasepane__getparenttabwnd)|Returns a pointer to the parent window that is inside a tab.|  
|[CBasePane::GetRecentVisibleState](#cbasepane__getrecentvisiblestate)|The framework calls this method when a pane is restored from an archive.|  
|[CBasePane::HideInPrintPreviewMode](#cbasepane__hideinprintpreviewmode)|Specifies whether the pane is hidden in print preview.|  
|[CBasePane::InsertPane](#cbasepane__insertpane)|Registers the specified pane with the docking manager.|  
|[CBasePane::IsAccessibilityCompatible](#cbasepane__isaccessibilitycompatible)|Specifies whether the pane supports Active Accessibility.|  
|[CBasePane::IsAutoHideMode](#cbasepane__isautohidemode)|Determines whether a pane is in auto-hide mode.|  
|[CBasePane::IsDialogControl](#cbasepane__isdialogcontrol)|Specifies whether the pane is a dialog control.|  
|[CBasePane::IsDocked](#cbasepane__isdocked)|Determines whether the pane is docked.|  
|[CBasePane::IsFloating](#cbasepane__isfloating)|Determines whether the pane is floating.|  
|[CBasePane::IsHorizontal](#cbasepane__ishorizontal)|Determines whether the pane is docked horizontally.|  
|[CBasePane::IsInFloatingMultiPaneFrameWnd](#cbasepane__isinfloatingmultipaneframewnd)|Specifies whether the pane is in a multi-pane frame window.|  
|[CBasePane::IsMDITabbed](#cbasepane__ismditabbed)|Determines whether the pane has been added to an MDI child window as a tabbed document.|  
|[CBasePane::IsPaneVisible](#cbasepane__ispanevisible)|Specifies whether the `WS_VISIBLE` flag is set for the pane.|  
|[CBasePane::IsPointNearDockSite](#cbasepane__ispointneardocksite)|Determines whether a specified point is near the dock site.|  
|[CBasePane::IsResizable](#cbasepane__isresizable)|Determines whether the pane can be resized.|  
|[CBasePane::IsRestoredFromRegistry](#cbasepane__isrestoredfromregistry)|Determines whether the pane is restored from the registry.|  
|[CBasePane::IsTabbed](#cbasepane__istabbed)|Determines whether the pane has been inserted in the tab control of a tabbed window.|  
|`CBasePane::IsTooltipTopmost`|Used internally.|  
|[CBasePane::IsVisible](#cbasepane__isvisible)|Determines whether the pane is visible.|  
|[CBasePane::LoadState](#cbasepane__loadstate)|Loads the pane state from the registry.|  
|[CBasePane::MoveWindow](#cbasepane__movewindow)|Moves the pane.|  
|[CBasePane::OnAfterChangeParent](#cbasepane__onafterchangeparent)|Called by the framework when the pane's parent has been changed.|  
|[CBasePane::OnBeforeChangeParent](#cbasepane__onbeforechangeparent)|Called by the framework just before the pane changes its parent window.|  
|[CBasePane::OnDrawCaption](#cbasepane__ondrawcaption)|The framework calls this method when the caption is drawn.|  
|[CBasePane::OnMovePaneDivider](#cbasepane__onmovepanedivider)|This method is currently not used.|  
|[CBasePane::OnPaneContextMenu](#cbasepane__onpanecontextmenu)|Called by the framework when it builds a menu that has a list of panes.|  
|[CBasePane::OnRemoveFromMiniFrame](#cbasepane__onremovefromminiframe)|Called by the framework when a pane is removed from its parent mini frame window.|  
|[CBasePane::OnSetAccData](#cbasepane__onsetaccdata)|`CBasePane` does not use this method.|  
|`CBasePane::OnUpdateCmdUI`|Used internally.|  
|[CBasePane::PaneFromPoint](#cbasepane__panefrompoint)|Returns the pane that contains the given point.|  
|`CBasePane::PreTranslateMessage`|Used by class [CWinApp](../../mfc/reference/cwinapp-class.md) to translate window messages before they are dispatched to the [TranslateMessage](http://msdn.microsoft.com/library/windows/desktop/ms644955) and [DispatchMessage](http://msdn.microsoft.com/library/windows/desktop/ms644934) Windows functions. (Overrides [CWnd::PreTranslateMessage](../../mfc/reference/cwnd-class.md#cwnd__pretranslatemessage).)|  
|[CBasePane::RecalcLayout](#cbasepane__recalclayout)|`CBasePane` does not use this method.|  
|[CBasePane::RemovePaneFromDockManager](#cbasepane__removepanefromdockmanager)|Unregisters a pane and removes it from the list in the docking manager.|  
|[CBasePane::SaveState](#cbasepane__savestate)|Saves the pane's state to the registry.|  
|[CBasePane::SelectDefaultFont](#cbasepane__selectdefaultfont)|Selects the default font for a given device context.|  
|`CBasePane::Serialize`|Reads or writes this object from or to an archive. (Overrides [CObject::Serialize](../../mfc/reference/cobject-class.md#cobject__serialize).)|  
|[CBasePane::SetControlBarStyle](#cbasepane__setcontrolbarstyle)|Sets the control bar style.|  
|[CBasePane::SetDockingMode](#cbasepane__setdockingmode)|Sets the docking mode for the pane.|  
|`CBasePane::SetMDITabbed`|Used internally.|  
|[CBasePane::SetPaneAlignment](#cbasepane__setpanealignment)|Sets the alignment for the pane.|  
|`CBasePane::SetPaneRect`|Used internally.|  
|[CBasePane::SetPaneStyle](#cbasepane__setpanestyle)|Sets the style of the pane.|  
|`CBasePane::SetRestoredFromRegistry`|Used internally.|  
|[CBasePane::SetWindowPos](#cbasepane__setwindowpos)|Changes the size, position, and Z-order of a pane.|  
|[CBasePane::ShowPane](#cbasepane__showpane)|Shows or hides the pane.|  
|[CBasePane::StretchPane](#cbasepane__stretchpane)|Stretches a pane vertically or horizontally.|  
|[CBasePane::UndockPane](#cbasepane__undockpane)|Removes the pane from the dock site, default slider, or mini-frame window where it is currently docked.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CBasePane::DoPaint](#cbasepane__dopaint)|Fills the background of the pane.|  
  
## Remarks  
 If you want to create a pane class that supports the extended docking features available in MFC, you must derive it from `CBasePane` or from [CPane Class](../../mfc/reference/cpane-class.md).  
  
## Customization Tips  
 The following customization tips pertain to the [CBasePane Class](../../mfc/reference/cbasepane-class.md) and any classes that inherit from it:  
  
-   When you create a pane, you can apply several new styles:  
  
    - `AFX_CBRS_FLOAT` makes the pane float.  
  
    - `AFX_CBRS_AUTOHIDE` enables auto-hide mode.  
  
    - `AFX_CBRS_CLOSE` enables the pane to be closed (hidden).  
  
     These are flags that you can combine with a bitwise-OR operation.  
  
 `CBasePane` implements the following virtual Boolean methods to reflect these flags: [CBasePane::CanBeClosed](#cbasepane__canbeclosed), [CBasePane::CanAutoHide](#cbasepane__canautohide), [CBasePane::CanFloat](#cbasepane__canfloat). You can override them in derived classes to customize their behavior.  
  
-   You can customize docking behavior by overriding [CBasePane::CanAcceptPane](#cbasepane__canacceptpane). Have your pane return `FALSE` from this method to prevent another pane from docking to it.  
  
-   If you want to create a static pane that cannot float and that prevents any other pane from docking before it (similar to the Outlook bar in the OutlookDemo example), create it as non-floating and override [CBasePane::DoesAllowDynInsertBefore](#cbasepane__doesallowdyninsertbefore) to return `FALSE`. The default implementation returns `FALSE` if the pane is created without the `AFX_CBRS_FLOAT` style.  
  
-   Create all panes with IDs other than -1.  
  
-   To determine pane visibility, use [CBasePane::IsVisible](#cbasepane__isvisible). It correctly handles the visibility state in tabbed and auto-hide modes.  
  
-   If you want to create a non-floating resizable pane, create it without the `AFX_CBRS_FLOAT` style and call [CFrameWnd::DockControlBar](../../mfc/reference/cframewnd-class.md#cframewnd__dockcontrolbar).  
  
-   To exclude a pane from a docking layout or to remove a toolbar from its dock bar, call [CBasePane::UndockPane](#cbasepane__undockpane). Do not call this method for panes in auto-hide mode or for panes that reside in tabs of tabbed windows.  
  
-   If you want to float or undock a pane that is in auto-hide mode, you must call [CDockablePane::SetAutoHideMode](../../mfc/reference/cdockablepane-class.md#cdockablepane__setautohidemode) with `FALSE` as the first argument before you call [CBasePane::FloatPane](#cbasepane__floatpane) or [CBasePane::UndockPane](#cbasepane__undockpane).  
  
## Example  
 The following example demonstrates how to use various methods in the `CBasePane` class. The example demonstrates how to retrieve a pane from the `CFrameWndEx` class and how to set the docking mode, the pane alignment, and the pane style. The code is from the [Word Pad sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_WordPad#2](../../mfc/reference/codesnippet/cpp/cbasepane-class_1.cpp)]  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md)  
  
## Requirements  
 **Header:** afxbasepane.h  
  
##  <a name="cbasepane__accnotifyobjectfocusevent"></a>  CBasePane::AccNotifyObjectFocusEvent  
 `CBasePane` does not use this method.  
  
```  
virtual void AccNotifyObjectFocusEvent(int);
```  
  
### Parameters  
 [in] `int`  
 Not used.  
  
##  <a name="cbasepane__addpane"></a>  CBasePane::AddPane  
 Adds a pane to the docking manager.  
  
```  
void AddPane(CBasePane* pBar);
```  
  
### Parameters  
 [in] `pBar`  
 A pointer to a pane to add.  
  
### Remarks  
 This is a convenience method that adds a pane to a docking manager. By using this method, you do not have to write code that analyzes the type of the parent frame.  
  
 For more information, see [CDockingManager Class](../../mfc/reference/cdockingmanager-class.md) and [CMDIFrameWndEx::AddPane](../../mfc/reference/cmdiframewndex-class.md#cmdiframewndex__addpane).  
  
##  <a name="cbasepane__adjustdockinglayout"></a>  CBasePane::AdjustDockingLayout  
 Redirects a call to the docking manager to adjust the docking layout.  
  
```  
virtual void AdjustDockingLayout(HDWP hdwp=NULL);
```  
  
### Parameters  
 [out] `hdwp`  
 A handle to a structure containing multiple window positions.  
  
### Remarks  
 This is a convenience method that adjusts the docking layout. By using this method, you do not have to write code that analyzes the type of the parent frame.  
  
 For more information, see [CDockingManager::AdjustDockingLayout](../../mfc/reference/cdockingmanager-class.md#cdockingmanager__adjustdockinglayout)  
  
##  <a name="cbasepane__adjustlayout"></a>  CBasePane::AdjustLayout  
 Called by the framework to adjust the internal layout of a pane.  
  
```  
virtual void AdjustLayout();
```  
  
### Remarks  
 The framework calls this method when a pane has to adjust its internal layout. The base implementation does nothing.  
  
##  <a name="cbasepane__calcfixedlayout"></a>  CBasePane::CalcFixedLayout  
 Calculates the horizontal size of a control bar.  
  
```  
virtual CSize CalcFixedLayout(
    BOOL bStretch,  
    BOOL bHorz);
```  
  
### Parameters  
 [in] `bStretch`  
 Indicates whether the bar should be stretched to the size of the frame. The `bStretch` parameter is nonzero when the bar is not a docking bar (not available for docking) and is 0 when it is docked or floating (available for docking).  
  
 [in] `bHorz`  
 Indicates that the bar is horizontally or vertically oriented. The `bHorz` parameter is nonzero if the bar is horizontally oriented and is 0 if it is vertically oriented.  
  
### Return Value  
 The control bar size, in pixels, of a `CSize` object.  
  
### Remarks  
 See the remarks section in [CControlBar::CalcFixedLayout](../../mfc/reference/ccontrolbar-class.md#ccontrolbar__calcfixedlayout)  
  
##  <a name="cbasepane__canacceptpane"></a>  CBasePane::CanAcceptPane  
 Determines whether another pane can be docked to the pane.  
  
```  
virtual BOOL CanAcceptPane(const CBasePane* pBar) const;

 
```  
  
### Parameters  
 [in] `pBar`  
 A pointer to the pane to dock.  
  
### Return Value  
 `TRUE` if another pane can be accepted; otherwise `FALSE`.  
  
### Remarks  
 The framework calls this method before it docks the pane specified by `pBar` to the current pane.  
  
 Use this method and the [CBasePane::CanBeDocked](#cbasepane__canbedocked) method to control how panes dock to other panes in your application.  
  
 The default implementation returns `FALSE`.  
  
##  <a name="cbasepane__canautohide"></a>  CBasePane::CanAutoHide  
 Determines whether the pane supports auto-hide mode.  
  
```  
virtual BOOL CanAutoHide() const;

 
```  
  
### Return Value  
 `TRUE` if this pane supports auto-hide mode; otherwise `FALSE`.  
  
### Remarks  
 The framework calls this function to determine whether the pane supports auto-hide mode.  
  
 During construction, you can set this ability by passing the `AFX_CBRS_AUTOHIDE` flag to [CBasePane::CreateEx](#cbasepane__createex).  
  
 The default implementation checks for the `AFX_CBRS_AUTOHIDE` flag. Override this method in a derived class to customize this behavior.  
  
##  <a name="cbasepane__canbeattached"></a>  CBasePane::CanBeAttached  
 Determines whether the pane can be docked to another pane or frame window.  
  
```  
virtual BOOL CanBeAttached() const;

 
```  
  
### Return Value  
 `TRUE` if the pane can be docked to another pane or frame window; otherwise `FALSE`.  
  
### Remarks  
 The default implementation returns `FALSE`. Override this method in a derived class to enable or disable the ability to dock without calling [CBasePane::EnableDocking](#cbasepane__enabledocking).  
  
##  <a name="cbasepane__canbeclosed"></a>  CBasePane::CanBeClosed  
 Determines whether the pane can be closed.  
  
```  
virtual BOOL CanBeClosed() const;

 
```  
  
### Return Value  
 `TRUE` if the pane can be closed; otherwise `FALSE`.  
  
### Remarks  
 The framework calls this method to determine whether the pane can be closed. If the method returns `TRUE`, a **Close** button is added to the pane's title bar or, if the pane is floating, to the title bar of the pane's miniframe window.  
  
 During construction, you can set this ability by passing the `AFX_CBRS_CLOSE` flag to [CBasePane::CreateEx](#cbasepane__createex).  
  
 The default implementation checks for the `AFX_CBRS_CLOSE` flag.  
  
##  <a name="cbasepane__canbedocked"></a>  CBasePane::CanBeDocked  
 Determines whether the pane can be docked to another pane.  
  
```  
virtual BOOL CanBeDocked(CBasePane* pDockBar) const;

 
```  
  
### Parameters  
 [in] `pDockBar`  
 A pointer to another pane.  
  
### Return Value  
 `TRUE` if this pane can be docked to another pane; otherwise `FALSE`.  
  
### Remarks  
 The framework calls this method before it docks the pane specified by `pDockBar` to the current pane.  
  
 Use this method and the [CBasePane::CanAcceptPane](#cbasepane__canacceptpane) method to control how panes dock to other panes in your application.  
  
 The default implementation returns `FALSE`.  
  
##  <a name="cbasepane__canberesized"></a>  CBasePane::CanBeResized  
 Determines whether the pane can be resized.  
  
```  
virtual BOOL CanBeResized() const;

 
```  
  
### Return Value  
 `TRUE` if the pane can be resized; otherwise, `FALSE`.  
  
### Remarks  
 This method checks for the `AFX_CBRS_RESIZE` flag, which is specified by default in `CBasePane::OnCreate`. If this flag is not specified, the docking manager flags the pane internally as immovable instead of docking it.  
  
##  <a name="cbasepane__canbetabbeddocument"></a>  CBasePane::CanBeTabbedDocument  
 Specifies whether the pane can be converted to an MDI tabbed document.  
  
```  
virtual BOOL CanBeTabbedDocument() const;

 
```  
  
### Return Value  
 `TRUE` if the pane can be converted to a tabbed document; otherwise, `FALSE`. `CBasePane::CanBeTabbedDocument` always returns `FALSE`.  
  
### Remarks  
 Only objects of certain `CBasePane`-derived types, such as the [CDockablePane Class](../../mfc/reference/cdockablepane-class.md), can be converted to tabbed documents.  
  
##  <a name="cbasepane__canfloat"></a>  CBasePane::CanFloat  
 Determines whether the pane can float.  
  
```  
virtual BOOL CanFloat() const;

 
```  
  
### Return Value  
 `TRUE` if the pane can float; otherwise `FALSE`.  
  
### Remarks  
 The framework calls this method to determine whether the pane can float.  
  
 During construction, you can set this ability by passing the `AFX_CBRS_FLOAT` flag to [CBasePane::CreateEx](#cbasepane__createex).  
  
> [!NOTE]
>  The framework assumes that non-floating panes are static and that their docking state cannot change. Therefore, the framework does not save the docking state of non-floating panes.  
  
 The default implementation checks for the `AFX_CBRS_FLOAT` style.  
  
##  <a name="cbasepane__canfocus"></a>  CBasePane::CanFocus  
 Specifies whether the pane can receive focus.  
  
```  
virtual BOOL CanFocus() const;

 
```  
  
### Return Value  
 `TRUE` if the pane can receive focus; otherwise `FALSE`.  
  
### Remarks  
 Override this method in a derived class to control focus. For example, because toolbars cannot receive focus, this method returns `FALSE` when it is called on toolbar objects.  
  
 The framework tries to set the input focus when a pane is docked or floated.  
  
##  <a name="cbasepane__copystate"></a>  CBasePane::CopyState  
 Copies the state of a given pane.  
  
```  
virtual void CopyState(CBasePane* pOrgBar);
```  
  
### Parameters  
 [in] `pOrgBar`  
 A pointer to another pane.  
  
### Remarks  
 This method copies the state from `pOrgBar` to this pane.  
  
##  <a name="cbasepane__createdefaultminiframe"></a>  CBasePane::CreateDefaultMiniframe  
 If the pane can float, this method creates a mini-frame window for it.  
  
```  
virtual CPaneFrameWnd* CreateDefaultMiniframe(CRect rectInitial);
```  
  
### Parameters  
 [in] `rectInitial`  
 Specifies the initial coordinates of the mini-frame window.  
  
### Return Value  
 A pointer to the new mini-frame window or `NULL` if the creation failed.  
  
### Remarks  
 The framework calls this method when a pane switches to a floating state. The method creates a mini-frame window and attaches the pane to this window.  
  
 The default implementation returns `NULL`.  
  
##  <a name="cbasepane__createex"></a>  CBasePane::CreateEx  
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
 [in] `dwStyleEx`  
 The extended styles (see [CWnd::CreateEx](../../mfc/reference/cwnd-class.md#cwnd__createex) for more information).  
  
 [in] `lpszClassName`  
 The window class name.  
  
 [in] `lpszWindowName`  
 The window name.  
  
 [in] `dwStyle`  
 The window style (see [CWnd::CreateEx](../../mfc/reference/cwnd-class.md#cwnd__createex)).  
  
 [in] `rect`  
 The initial rectangle.  
  
 [in] `pParentWnd`  
 A pointer to the parent window.  
  
 [in] `nID`  
 Specifies the pane ID. Must be unique.  
  
 [in] `dwControlBarStyle`  
 Style flags for panes.  
  
 [in] `pContext`  
 A pointer to `CcreateContext`  
  
### Return Value  
 `TRUE` if the pane is created successfully; otherwise `FALSE`.  
  
### Remarks  
 Creates a window of class `lpszClassName`. If you specify `WS_CAPTION`, this method clears the `WS_CAPTION` style bit and sets `CBasePane::m_bHasCaption` to `TRUE`, because the library does not support panes with captions.  
  
 You can use any combination of child window styles and MFC control bar (CBRS_) styles.  
  
 The library adds several new styles for panes. The following table describes the new styles:  
  
|Style|Description|  
|-----------|-----------------|  
|`AFX_CBRS_FLOAT`|The pane can float.|  
|`AFX_CBRS_AUTOHIDE`|The pane supports auto-hide mode|  
|`AFX_CBRS_RESIZE`|The pane can be resized. **Important:**  This style is not implemented.|  
|`AFX_CBRS_CLOSE`|The pane can be closed.|  
|`AFX_CBRS_AUTO_ROLLUP`|The pane can be rolled up when it floats.|  
|`AFX_CBRS_REGULAR_TABS`|When one pane docks to another pane that has this style, a regular tabbed window is created. (For more information, see [CTabbedPane Class](../../mfc/reference/ctabbedpane-class.md).)|  
|`AFX_CBRS_OUTLOOK_TABS`|When one pane docks to another pane that has this style, an Outlook-style tabbed window is created. (For more information, see [CMFCOutlookBar Class](../../mfc/reference/cmfcoutlookbar-class.md).)|  
  
 To use the new styles, specify them in `dwControlBarStyle`.  
  
##  <a name="cbasepane__dockpane"></a>  CBasePane::DockPane  
 Docks a pane to another pane or to a frame window.  
  
```  
virtual BOOL DockPane(
    CBasePane* pDockBar,  
    LPCRECT lpRect,  
    AFX_DOCK_METHOD dockMethod);
```  
  
### Parameters  
 [in] `pDockBar`  
 A pointer to another pane.  
  
 [in] `lpRect`  
 Specifies the destination rectangle.  
  
 [in] `dockMethod`  
 Specifies the docking method.  
  
### Return Value  
 `TRUE` if the control bar was docked successfully; otherwise, `FALSE`.  
  
### Remarks  
 Call this function to dock a pane to another pane or a dock bar ( [CDockSite Class](../../mfc/reference/cdocksite-class.md)) that is specified by `pDockBar`, or to a main frame if `pDockBar` is `NULL`.  
  
 `dockMethod` specifies how the pane is docked. See [CPane::DockPane](../../mfc/reference/cpane-class.md#cpane__dockpane) for a list of possible values.  
  
##  <a name="cbasepane__dockpaneusingrtti"></a>  CBasePane::DockPaneUsingRTTI  
 Docks the pane by using run-time type information.  
  
```  
void DockPaneUsingRTTI(BOOL bUseDockSite);
```  
  
### Parameters  
 [in] `bUseDockSite`  
 If `TRUE`, dock to the docking site. If `FALSE`, dock to the parent frame.  
  
##  <a name="cbasepane__docktoframewindow"></a>  CBasePane::DockToFrameWindow  
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
 [in] `dwAlignment`  
 The side of the parent frame that you want to dock the pane to.  
  
 [in] `lpRect`  
 The desired size.  
  
 [in] `dwDockFlags`  
 Ignored.  
  
 [in] `pRelativeBar`  
 Ignored.  
  
 [in] `nRelativeIndex`  
 Ignored.  
  
 [in] `bOuterEdge`  
 If `TRUE` and there are other dockable panes at the side specified by `dwAlignment`, the pane is docked outside the other panes, closer to the edge of the parent frame. If `FALSE`, the pane is docked closer to the center of the client area.  
  
### Return Value  
 `TRUE` if the method was successful; otherwise `FALSE`.  
  
### Remarks  
 This method fails if a pane divider ( [CPaneDivider Class](../../mfc/reference/cpanedivider-class.md)) cannot be created. Otherwise, it always returns `TRUE`.  
  
##  <a name="cbasepane__doesallowdyninsertbefore"></a>  CBasePane::DoesAllowDynInsertBefore  
 Determines whether another pane can be dynamically inserted between this pane and the parent frame.  
  
```  
virtual BOOL DoesAllowDynInsertBefore() const;

 
```  
  
### Return Value  
 `TRUE` if a user can insert another pane; otherwise `FALSE`.  
  
### Remarks  
 The framework calls this method to determine whether a user can dynamically insert a pane before this pane.  
  
 For example, suppose your application creates a pane docked at the left side of the frame (such as the Outlook bar). To prevent the user from docking another pane to the left of the first pane, override this method and return `FALSE`.  
  
 We recommend that you override this method and return `FALSE` for non-floating panes derived from [CDockablePane Class](../../mfc/reference/cdockablepane-class.md).  
  
 The default implementation returns `TRUE`.  
  
##  <a name="cbasepane__dopaint"></a>  CBasePane::DoPaint  
 Fills the background of the pane.  
  
```  
virtual void DoPaint(CDC* pDC);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
### Remarks  
 The default implementation calls the current visual manager to fill the background ( [CMFCVisualManager::OnFillBarBackground](../../mfc/reference/cmfcvisualmanager-class.md#cmfcvisualmanager__onfillbarbackground)).  
  
##  <a name="cbasepane__enabledocking"></a>  CBasePane::EnableDocking  
 Enables docking of the pane to the main frame.  
  
```  
virtual void EnableDocking(DWORD dwAlignment);
```  
  
### Parameters  
 [in] `dwAlignment`  
 Specifies the docking alignment to enable.  
  
### Remarks  
 Call this method to enable docking alignment to the main frame. You can pass a combination of `CBRS_ALIGN_` flags (for more information, see [CControlBar::EnableDocking](../../mfc/reference/ccontrolbar-class.md#ccontrolbar__enabledocking)).  
  
 `EnableDocking` sets the internal flag `CBasePane::m_dwEnabledAlignment` and the framework checks this flag when a pane is docked.  
  
 Call [CBasePane::GetEnabledAlignment](#cbasepane__getenabledalignment) to determine the docking alignment for a pane.  
  
##  <a name="cbasepane__enablegripper"></a>  CBasePane::EnableGripper  
 Enables or disables the gripper. If the gripper is enabled, the user can drag it to reposition the pane.  
  
```  
virtual void EnableGripper(BOOL bEnable);
```  
  
### Parameters  
 [in] `bEnable`  
 `TRUE` to enable the gripper; `FALSE` to disable it.  
  
### Remarks  
 The framework uses this method to enable a gripper instead of using the `WS_CAPTION` style.  
  
##  <a name="cbasepane__floatpane"></a>  CBasePane::FloatPane  
 Floats the pane.  
  
```  
virtual BOOL FloatPane(
    CRect rectFloat,  
    AFX_DOCK_METHOD dockMethod=DM_UNKNOWN,  
    bool bShow=true);
```  
  
### Parameters  
 [in] `rectFloat`  
 Specifies the screen coordinates where the floating pane appears.  
  
 [in] `dockMethod`  
 Specifies the dock method to use to float the pane.  
  
 [in] `bShow`  
 Specifies whether the floating pane is visible ( `TRUE`) or hidden ( `FALSE`).  
  
### Return Value  
 `TRUE` if the pane was floated successfully; otherwise `FALSE`.  
  
### Remarks  
 Call this method to float a pane at the screen position specified by `rectFloat`.  
  
##  <a name="cbasepane__get_acchelptopic"></a>  CBasePane::get_accHelpTopic  
 The framework calls this method to retrieve the full path of the `WinHelp` file that is associated with the specified object and the identifier of the appropriate topic in that file.  
  
```  
virtual HRESULT get_accHelpTopic(
    BSTR* pszHelpFile,  
    VARIANT varChild,  
    long* pidTopic);
```  
  
### Parameters  
 [in] `pszHelpFile`  
 Address of a `BSTR` that receives the full path of the `WinHelp` file that is associated with the specified object, if any.  
  
 [in] `varChild`  
 Specifies whether the Help topic to be retrieved is that of the object or one of the child elements of the object. This parameter can be either `CHILDID_SELF` (to obtain a Help topic for the object) or a child ID (to obtain a Help topic for one of the child elements of the object).  
  
 [in] `pidTopic`  
 Identifies the `Help` file topic that is associated with the specified object.  
  
### Return Value  
 `CBasePane` does not implement this method. Therefore, `CBasePane::get_accHelpTopic` always returns `S_FALSE`.  
  
### Remarks  
 This function is part of the Active Accessibility support in MFC. Override this function in a derived class to provide help information about your object.  
  
##  <a name="cbasepane__get_accselection"></a>  CBasePane::get_accSelection  
 The framework calls this method to retrieve the selected children of this object.  
  
```  
virtual HRESULT get_accSelection(VARIANT* pvarChildren);
```  
  
### Parameters  
 [in] `pvarChildren`  
 Receives information that identifies the selected children.  
  
### Return Value  
 `CBasePane` does not implement this method. If `pvarChildren` is `NULL`, this method returns `E_INVALIDARG`. Otherwise, this method returns `DISP_E_MEMBERNOTFOUND`.  
  
### Remarks  
 This function is part of the Active Accessibility support in MFC. Override this function in a derived class if you have non-windowed user interface elements other than windowless ActiveX controls.  
  
##  <a name="cbasepane__getcaptionheight"></a>  CBasePane::GetCaptionHeight  
 Returns the caption height.  
  
```  
virtual int GetCaptionHeight() const;

 
```  
  
### Return Value  
 The caption height.  
  
##  <a name="cbasepane__getcontrolbarstyle"></a>  CBasePane::GetControlBarStyle  
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
|`AFX_CBRS_FLOAT`|Makes the control bar float.|  
|`AFX_CBRS_AUTOHIDE`|Enables auto-hide mode.|  
|`AFX_CBRS_RESIZE`|Enables resizing of the control bar. When this flag is set, the control bar can be placed in a dockable pane.|  
|`AFX_CBRS_CLOSE`|Enables hiding of the control bar.|  
  
##  <a name="cbasepane__getcurrentalignment"></a>  CBasePane::GetCurrentAlignment  
 Returns the current pane alignment.  
  
```  
virtual DWORD GetCurrentAlignment() const;

 
```  
  
### Return Value  
 The current alignment of the control bar. The following table shows the possible values:  
  
|Value|Alignment|  
|-----------|---------------|  
|`CBRS_ALIGN_LEFT`|Left alignment.|  
|`CBRS_ALIGN_RIGHT`|Right alignment.|  
|`CBRS_ALIGN_TOP`|Top alignment.|  
|`CBRS_ALIGN_BOTTOM`|Bottom alignment.|  
  
##  <a name="cbasepane__getdockingmode"></a>  CBasePane::GetDockingMode  
 Returns the current docking mode for the pane.  
  
```  
virtual AFX_DOCK_TYPE GetDockingMode() const;

 
```  
  
### Return Value  
 DT_STANDARD if dragging the pane is indicated on the screen by a drag rectangle. DT_IMMEDIATE if the contents of the pane are dragged.  
  
### Remarks  
 The framework calls this method to determine the current docking mode of the pane.  
  
 If `CBasePane::m_dockMode` is undefined (DT_UNDEFINED), then the docking mode is taken from the global docking mode ( `AFX_GLOBAL_DATA::m_dockModeGlobal`).  
  
 By setting `m_dockMode` or overriding `GetDockingMode` you can control the docking mode for each pane.  
  
##  <a name="cbasepane__getdocksiteframewnd"></a>  CBasePane::GetDockSiteFrameWnd  
 Returns a pointer to the [CDockingPanesRow](../../mfc/reference/cdockingpanesrow-class.md)object where the pane is docked.  
  
```  
virtual CWnd* GetDockSiteFrameWnd() const;

 
```  
  
### Return Value  
 A pointer to the dock site of the pane.  
  
### Remarks  
 Call this method to retrieve a pointer to the dock site of the pane. The dock site can be either a main frame window if the pane is docked to the main frame, or a mini-frame window if the pane is floating.  
  
##  <a name="cbasepane__getenabledalignment"></a>  CBasePane::GetEnabledAlignment  
 Returns the CBRS_ALIGN_ styles that are applied to the pane.  
  
```  
virtual DWORD GetEnabledAlignment() const;

 
```  
  
### Return Value  
 A combination of CBRS_ALIGN_ styles. The following table shows the possible styles:  
  
|Flag|Enabled alignment|  
|----------|-----------------------|  
|`CBRS_ALIGN_LEFT`|Left.|  
|`CBRS_ALIGN_RIGHT`|Right.|  
|`CBRS_ALIGN_TOP`|Top.|  
|`CBRS_ALIGN_BOTTOM`|Bottom.|  
|`CBRS_ALIGN_ANY`|Combination of all flags.|  
  
### Remarks  
 Call this method to determine the enabled alignment for the pane. Enabled alignment means the sides of the main frame window that a pane can be docked to.  
  
 Enable docking alignment by using [CBasePane::EnableDocking](#cbasepane__enabledocking).  
  
##  <a name="cbasepane__getmfcstyle"></a>  CBasePane::GetMFCStyle  
 Returns the pane styles that are specific to MFC.  
  
```  
virtual DWORD GetMFCStyle() const;

 
```  
  
### Return Value  
 A combination of library-specific (AFX_CBRS_) pane styles.  
  
##  <a name="cbasepane__getpaneicon"></a>  CBasePane::GetPaneIcon  
 Returns a handle to the pane icon.  
  
```  
virtual HICON GetPaneIcon(BOOL bBigIcon);
```  
  
### Parameters  
 [in] `bBigIcon`  
 Specifies a 32 pixel by 32 pixel icon if `TRUE`; specifies a 16 pixel by 16 pixel icon if `FALSE`.  
  
### Return Value  
 A handle to the pane icon. If unsuccessful, returns `NULL`.  
  
### Remarks  
 The default implementation calls [CWnd::GetIcon](../../mfc/reference/cwnd-class.md#cwnd__geticon).  
  
##  <a name="cbasepane__getpanerow"></a>  CBasePane::GetPaneRow  
 Returns a pointer to the [CDockingPanesRow](../../mfc/reference/cdockingpanesrow-class.md)object where the pane is docked.  
  
```  
CDockingPanesRow* GetPaneRow();
```  
  
### Return Value  
 A pointer to `CDockingPanesRow` if the pane is docked, or `NULL` if it is floating.  
  
### Remarks  
 Call this method to access the row where a pane is docked. For example, to arrange the panes in a particular row, call `GetPaneRow` and then call [CDockingPanesRow::ArrangePanes](../../mfc/reference/cdockingpanesrow-class.md#cdockingpanesrow__arrangepanes).  
  
##  <a name="cbasepane__getpanestyle"></a>  CBasePane::GetPaneStyle  
 Returns the pane style.  
  
```  
virtual DWORD GetPaneStyle() const;

 
```  
  
### Return Value  
 A combination of control bar styles (including CBRS_ styles) that was set by the [CBasePane::SetPaneStyle](#cbasepane__setpanestyle) method at creation time.  
  
##  <a name="cbasepane__getparentdocksite"></a>  CBasePane::GetParentDockSite  
 Returns a pointer to the parent dock site.  
  
```  
virtual CDockSite* GetParentDockSite() const;

 
```  
  
### Return Value  
 The parent dock site.  
  
##  <a name="cbasepane__getparentminiframe"></a>  CBasePane::GetParentMiniFrame  
 Returns a pointer to the parent mini-frame window.  
  
```  
virtual CPaneFrameWnd* GetParentMiniFrame(BOOL bNoAssert=FALSE) const;

 
```  
  
### Parameters  
 [in] `bNoAssert`  
 If `TRUE`, this method does not check for non-valid pointers. If you call this method when your application exits, set this parameter to `TRUE`.  
  
### Return Value  
 A valid pointer to the parent mini-frame window if the pane is floating; otherwise `NULL`.  
  
### Remarks  
 Call this function to retrieve a pointer to the parent mini-frame window. This method iterates through all parents and checks for an object derived from [CPaneFrameWnd Class](../../mfc/reference/cpaneframewnd-class.md).  
  
 Use `GetParentMiniFrame` to determine whether the pane is floating.  
  
##  <a name="cbasepane__getparenttabbedpane"></a>  CBasePane::GetParentTabbedPane  
 Returns a pointer to the parent tabbed pane.  
  
```  
CBaseTabbedPane* GetParentTabbedPane() const;

 
```  
  
### Return Value  
 A pointer to the parent tabbed pane if it exists; otherwise `NULL`.  
  
##  <a name="cbasepane__getparenttabwnd"></a>  CBasePane::GetParentTabWnd  
 Returns a pointer to the parent window that is inside a tab.  
  
```  
CMFCBaseTabCtrl* GetParentTabWnd(HWND& hWndTab) const;

 
```  
  
### Parameters  
 [out] `hWndTab`  
 If the return value is not `NULL`, this parameter contains the handle to the parent tabbed window.  
  
### Return Value  
 A valid pointer to the parent tabbed window or `NULL`.  
  
### Remarks  
 Use this function to retrieve a pointer to the parent tabbed window. Sometimes it is not enough to call `GetParent`, because a pane may be inside a docking wrapper ( [CDockablePaneAdapter Class](../../mfc/reference/cdockablepaneadapter-class.md)) or inside a pane adapter ( [CDockablePaneAdapter Class](../../mfc/reference/cdockablepaneadapter-class.md)). By using `GetParentTabWnd` you will be able to retrieve a valid pointer in those cases (assuming that the parent is a tabbed window).  
  
##  <a name="cbasepane__getrecentvisiblestate"></a>  CBasePane::GetRecentVisibleState  
 The framework calls this method when a pane is restored from an archive.  
  
```  
virtual BOOL GetRecentVisibleState() const;

 
```  
  
### Return Value  
 A `BOOL` that specifies the recent visible state. If `TRUE`, the pane was visible when serialized and should be visible when restored. If `FALSE`, the pane was hidden when serialized and should be hidden when restored.  
  
##  <a name="cbasepane__hideinprintpreviewmode"></a>  CBasePane::HideInPrintPreviewMode  
 Specifies whether the pane is hidden in print preview.  
  
```  
virtual BOOL HideInPrintPreviewMode() const;

 
```  
  
### Return Value  
 `TRUE` if the pane is not shown in print preview; otherwise, `FALSE`.  
  
### Remarks  
 Base panes are not shown in print preview. Therefore, this method always returns `TRUE`.  
  
##  <a name="cbasepane__insertpane"></a>  CBasePane::InsertPane  
 Registers the specified pane with the docking manager.  
  
```  
BOOL InsertPane(
    CBasePane* pControlBar,  
    CBasePane* pTarget,  
    BOOL bAfter = TRUE);
```  
  
### Parameters  
 [in] `pControlBar`  
 A pointer to the pane to insert.  
  
 [in] `pTarget`  
 A pointer to the adjacent pane.  
  
 [in] `bAfter`  
 If `TRUE`, `pControlBar` is inserted after `pTarget`. If `FALSE`, `pControlBar` is inserted before `pTarget`.  
  
### Return Value  
 `TRUE` if the method succeeds, `FALSE` otherwise.  
  
##  <a name="cbasepane__isaccessibilitycompatible"></a>  CBasePane::IsAccessibilityCompatible  
 Specifies whether the pane supports Active Accessibility.  
  
```  
virtual BOOL IsAccessibilityCompatible();
```  
  
### Return Value  
 `TRUE` if the pane supports Active Accessibility; otherwise, `FALSE`.  
  
##  <a name="cbasepane__isautohidemode"></a>  CBasePane::IsAutoHideMode  
 Determines whether a pane is in auto-hide mode.  
  
```  
virtual BOOL IsAutoHideMode() const;

 
```  
  
### Return Value  
 `TRUE` if the pane is in auto-hide mode; otherwise, `FALSE`.  
  
### Remarks  
 Base panes cannot auto-hide. This method always returns `FALSE`.  
  
##  <a name="cbasepane__isdialogcontrol"></a>  CBasePane::IsDialogControl  
 Specifies whether the pane is a dialog box control.  
  
```  
BOOL IsDialogControl() const;

 
```  
  
### Return Value  
 `TRUE` if the pane is a dialog box control; otherwise, `FALSE`.  
  
### Remarks  
 The framework uses this method to ensure layout consistency for all panes.  
  
##  <a name="cbasepane__isdocked"></a>  CBasePane::IsDocked  
 Determines whether the pane is docked.  
  
```  
virtual BOOL IsDocked() const;

 
```  
  
### Return Value  
 `TRUE` if the parent of the pane is not a mini-frame or if the pane is floating in a mini-frame with another pane; otherwise, `FALSE`.  
  
##  <a name="cbasepane__isfloating"></a>  CBasePane::IsFloating  
 Determines whether the pane is floating.  
  
```  
virtual BOOL IsFloating() const;

 
```  
  
### Return Value  
 `TRUE` if the pane is floating; otherwise, `FALSE`.  
  
### Remarks  
 This method returns the opposite value of [CBasePane::IsDocked](#cbasepane__isdocked).  
  
##  <a name="cbasepane__ishorizontal"></a>  CBasePane::IsHorizontal  
 Determines whether the pane is docked horizontally.  
  
```  
virtual BOOL IsHorizontal() const;

 
```  
  
### Return Value  
 `TRUE` if the pane is docked horizontally; otherwise `FALSE`.  
  
### Remarks  
 The default implementation checks the current docking alignment for `CBRS_ORIENT_HORZ`.  
  
##  <a name="cbasepane__isinfloatingmultipaneframewnd"></a>  CBasePane::IsInFloatingMultiPaneFrameWnd  
 Specifies whether the pane is in a multi-pane frame window ( [CMultiPaneFrameWnd Class](../../mfc/reference/cmultipaneframewnd-class.md)).  
  
```  
virtual BOOL IsInFloatingMultiPaneFrameWnd() const;

 
```  
  
### Return Value  
 `TRUE` if the pane is in a multi-pane frame window; otherwise, `FALSE`.  
  
### Remarks  
 Only dockable panes can float in a multi-pane frame window. Therefore, `CBasePane::IsInFloatingMultiPaneFrameWnd` always returns `FALSE`.  
  
##  <a name="cbasepane__ismditabbed"></a>  CBasePane::IsMDITabbed  
 Determines whether the pane has been added to an MDI child window as a tabbed document.  
  
```  
virtual BOOL IsMDITabbed() const;

 
```  
  
### Return Value  
 `TRUE` if the pane was added to an MDI child window as a tabbed document; otherwise, `FALSE`.  
  
##  <a name="cbasepane__ispanevisible"></a>  CBasePane::IsPaneVisible  
 Specifies whether the `WS_VISIBLE` flag is set for the pane.  
  
```  
BOOL IsPaneVisible() const;

 
```  
  
### Return Value  
 `TRUE` if `WS_VISIBLE` is set; otherwise, `FALSE`.  
  
### Remarks  
 Use [CBasePane::IsVisible](#cbasepane__isvisible) to determine pane visibility.  
  
##  <a name="cbasepane__ispointneardocksite"></a>  CBasePane::IsPointNearDockSite  
 Determines whether a specified point is near the dock site.  
  
```  
BOOL IsPointNearDockSite(
    CPoint point,  
    DWORD& dwBarAlignment,  
    BOOL& bOuterEdge) const;

 
```  
  
### Parameters  
 [in] `point`  
 The specified point.  
  
 [out] `dwBarAlignment`  
 Specifies which edge the point is near. Possible values are `CBRS_ALIGN_LEFT`, `CBRS_ALIGN_RIGHT`, `CBRS_ALIGN_TOP`, and `CBRS_ALIGN_BOTTOM`  
  
 [out] `bOuterEdge`  
 `TRUE` if the point is near the outer border of the dock site; `FALSE` otherwise.  
  
### Return Value  
 `TRUE` if the point is near the dock site; otherwise `FALSE`.  
  
### Remarks  
 The point is near the dock site when it is within the sensitivity set in the docking manager. The default sensitivity is 15 pixels.  
  
##  <a name="cbasepane__isresizable"></a>  CBasePane::IsResizable  
 Determines whether the pane can be resized.  
  
```  
virtual BOOL IsResizable() const;

 
```  
  
### Return Value  
 `TRUE` if the pane can be resized by the user; otherwise, `FALSE`.  
  
### Remarks  
 Panes of [CDockablePane Class](../../mfc/reference/cdockablepane-class.md) can be resized.  
  
 The status bar ( [CMFCStatusBar Class](../../mfc/reference/cmfcstatusbar-class.md)) and the dock bar ( [CDockSite Class](../../mfc/reference/cdocksite-class.md)) cannot be resized.  
  
##  <a name="cbasepane__isrestoredfromregistry"></a>  CBasePane::IsRestoredFromRegistry  
 Determines whether the pane is restored from the registry.  
  
```  
virtual BOOL IsRestoredFromRegistry() const;

 
```  
  
### Return Value  
 `TRUE` if the pane is restored from the registry; otherwise, `FALSE`.  
  
##  <a name="cbasepane__istabbed"></a>  CBasePane::IsTabbed  
 Determines whether the pane has been inserted in the tab control of a tabbed window.  
  
```  
virtual BOOL IsTabbed() const;

 
```  
  
### Return Value  
 `TRUE` if the control bar is inserted in a tab of a tabbed window; otherwise `FALSE`.  
  
### Remarks  
 This method retrieves a pointer to the immediate parent and determines if the parent's runtime class is [CMFCBaseTabCtrl Class](../../mfc/reference/cmfcbasetabctrl-class.md).  
  
##  <a name="cbasepane__isvisible"></a>  CBasePane::IsVisible  
 Determines whether the pane is visible.  
  
```  
virtual BOOL IsVisible() const;

 
```  
  
### Return Value  
 `TRUE` if the pane is visible; otherwise `FALSE`.  
  
### Remarks  
 Use this method to determine the visibility of a pane. Do not use `::IsWindowVisible`.  
  
 If the pane is not tabbed (see [CBasePane::IsTabbed](#cbasepane__istabbed)), this method checks for the `WS_VISIBLE` style. If the pane is tabbed, this method checks the visibility of the parent tabbed window. If the parent window is visible, the function checks the visibility of the pane tab using [CMFCBaseTabCtrl::IsTabVisible](../../mfc/reference/cmfcbasetabctrl-class.md#cmfcbasetabctrl__istabvisible).  
  
##  <a name="cbasepane__loadstate"></a>  CBasePane::LoadState  
 Loads the pane's state from the registry.  
  
```  
virtual BOOL LoadState(
    LPCTSTR lpszProfileName=NULL,  
    int nIndex=-1,  
    UINT uiID=(UINT)-1);
```  
  
### Parameters  
 [in] `lpszProfileName`  
 Profile name.  
  
 [in] `nIndex`  
 Profile index.  
  
 [in] `uiID`  
 Pane ID.  
  
### Return Value  
 `TRUE` if the pane state was loaded successfully; otherwise `FALSE`.  
  
### Remarks  
 The framework calls this method to load the pane state from the registry. Override it in a derived class to load additional information saved by [CBasePane::SaveState](#cbasepane__savestate).  
  
##  <a name="cbasepane__movewindow"></a>  CBasePane::MoveWindow  
 Moves the pane.  
  
```  
virtual HDWP MoveWindow(
    CRect& rect,  
    BOOL bRepaint = TRUE,  
    HDWP hdwp = NULL);
```  
  
### Parameters  
 [in] `rect`  
 A rectangle specifying the new location and size of the pane.  
  
 [in] `bRepaint`  
 If `TRUE`, the pane is repainted. If `FALSE`, the pane is not repainted.  
  
 [in] `hdwp`  
 Handle to a deferred window position structure.  
  
### Return Value  
 A handle to a deferred window position structure, or `NULL`.  
  
### Remarks  
 If you pass `NULL` as the `hdwp` parameter, this method moves the window normally. If you pass a handle, this method performs a deferred window move. You can obtain a handle by calling [BeginDeferWindowPos](http://msdn.microsoft.com/library/windows/desktop/ms632672) or by storing the return value of a previous call to this method.  
  
##  <a name="cbasepane__onafterchangeparent"></a>  CBasePane::OnAfterChangeParent  
 Called by the framework after the pane's parent changes.  
  
```  
virtual void OnAfterChangeParent(CWnd* pWndOldParent);
```  
  
### Parameters  
 [in] `pWndOldParent`  
 A pointer to the previous parent.  
  
### Remarks  
 The framework calls this method after the pane's parent changes, usually because of a docking or floating operation.  
  
 The default implementation does nothing.  
  
##  <a name="cbasepane__onbeforechangeparent"></a>  CBasePane::OnBeforeChangeParent  
 Called by the framework just before the pane changes its parent window.  
  
```  
virtual void OnBeforeChangeParent(
    CWnd* pWndNewParent,  
    BOOL bDelay=FALSE);
```  
  
### Parameters  
 [in] `pWndNewParent`  
 A pointer to a new parent window.  
  
 [in] `bDelay`  
 Specifies whether layout adjustments must be delayed.  
  
### Remarks  
 The framework calls this method just before the pane's parent changes, usually because of a docking, floating, or auto-hide operation.  
  
 The default implementation does nothing.  
  
##  <a name="cbasepane__ondrawcaption"></a>  CBasePane::OnDrawCaption  
 The framework calls this method when the caption is drawn.  
  
```  
virtual void OnDrawCaption();
```  
  
### Remarks  
 This method has no functionality for the `CBasePane` class.  
  
##  <a name="cbasepane__onmovepanedivider"></a>  CBasePane::OnMovePaneDivider  
 This method is currently not used.  
  
```  
virtual void OnMovePaneDivider(CPaneDivider*);
```  
  
### Parameters  
 [in] `CPaneDivider*`  
 Not used.  
  
##  <a name="cbasepane__onpanecontextmenu"></a>  CBasePane::OnPaneContextMenu  
 Called by the framework when it builds a menu that has a list of panes.  
  
```  
virtual void OnPaneContextMenu(
    CWnd* pParentFrame,  
    CPoint point);
```  
  
### Parameters  
 [in] `pParentFrame`  
 A pointer to the parent frame.  
  
 [in] `point`  
 Specifies the location of the shortcut menu.  
  
### Remarks  
 `OnPaneContextMenu` calls the docking manager, which maintains the list of panes that belong to the current frame window. This method adds the names of the panes to a shortcut menu and displays it. The commands on the menu show or hide individual panes.  
  
 Override this method to customize this behavior.  
  
##  <a name="cbasepane__onremovefromminiframe"></a>  CBasePane::OnRemoveFromMiniFrame  
 Called by the framework when a pane is removed from its parent mini frame window.  
  
```  
virtual void OnRemoveFromMiniFrame(CPaneFrameWnd* pMiniFrame);
```  
  
### Parameters  
 [in] `pMiniFrame`  
 A pointer to a mini-frame window from which the pane is removed.  
  
### Remarks  
 The framework calls this method when a pane is removed from its parent mini-frame window (as a result of docking, for example).  
  
 The default implementation does nothing.  
  
##  <a name="cbasepane__onsetaccdata"></a>  CBasePane::OnSetAccData  
 `CBasePane` does not use this method.  
  
```  
virtual BOOL OnSetAccData(long lVal);
```  
  
### Parameters  
 [in] `lVal`  
 Not used.  
  
### Return Value  
 This method always returns `TRUE`.  
  
### Remarks  
  
##  <a name="cbasepane__panefrompoint"></a>  CBasePane::PaneFromPoint  
 Returns the pane that contains the given point.  
  
```  
CBasePane* PaneFromPoint(
    CPoint point,  
    int nSensitivity,  
    bool bExactBar = false,  
    CRuntimeClass* pRTCBarType = NULL) const;

 
```  
  
### Parameters  
 [in] `point`  
 Specifies the point, in screen coordinates, to check.  
  
 [in] `nSensitivity`  
 Increase the search area by this amount. A pane will satisfy the search criteria if the given point falls in the increased area.  
  
 [in] `bExactBar`  
 `TRUE` to ignore the `nSensitivity` parameter; otherwise, `FALSE`.  
  
 [in] `pRTCBarType`  
 If not `NULL`, the method searches only panes of the specified type.  
  
### Return Value  
 The `CBasePane`-derived object that contains the given point, or `NULL` if no pane was found.  
  
##  <a name="cbasepane__recalclayout"></a>  CBasePane::RecalcLayout  
 `CBasePane` does not use this method.  
  
```  
virtual void RecalcLayout();
```  
  
##  <a name="cbasepane__removepanefromdockmanager"></a>  CBasePane::RemovePaneFromDockManager  
 Unregisters a pane and removes it from the list in the docking manager.  
  
```  
void RemovePaneFromDockManager(
    CBasePane* pBar,  
    BOOL bDestroy = TRUE,  
    BOOL bAdjustLayout = FALSE,  
    BOOL bAutoHide = FALSE,  
    CBasePane* pBarReplacement = NULL);
```  
  
### Parameters  
 [in] `pBar`  
 A pointer to a pane to be removed.  
  
 [in] `bDestroy`  
 If `TRUE`, the removed pane is destroyed.  
  
 [in] `bAdjustLayout`  
 If `TRUE`, adjust the docking layout immediately.  
  
 [in] `bAutoHide`  
 If `TRUE`, the docking layout is related to the list of autohide bars. If `FALSE`, the docking layout is related to the list of regular panes.  
  
 [in] `pBarReplacement`  
 A pointer to a pane that replaces the removed pane.  
  
##  <a name="cbasepane__savestate"></a>  CBasePane::SaveState  
 Saves the pane's state to the registry.  
  
```  
virtual BOOL SaveState(
    LPCTSTR lpszProfileName=NULL,  
    int nIndex=-1,  
    UINT uiID=(UINT)-1);
```  
  
### Parameters  
 [in] `lpszProfileName`  
 Profile name.  
  
 [in] `nIndex`  
 Profile index.  
  
 [in] `uiID`  
 Pane ID.  
  
### Return Value  
 `TRUE` if the state was saved successfully; otherwise `FALSE`.  
  
### Remarks  
 The framework calls this method when it saves the pane's state to the registry. Override `SaveState` in a derived class to store additional information.  
  
##  <a name="cbasepane__selectdefaultfont"></a>  CBasePane::SelectDefaultFont  
 Selects the default font for a given device context.  
  
```  
CFont* SelectDefaultFont(CDC* pDC);
```  
  
### Parameters  
 [in] `pDC`  
 A device context.  
  
### Return Value  
 A pointer to the default [CFont Class](../../mfc/reference/cfont-class.md) object.  
  
##  <a name="cbasepane__setcontrolbarstyle"></a>  CBasePane::SetControlBarStyle  
 Sets the control bar style.  
  
```  
virtual void SetControlBarStyle(DWORD dwNewStyle);
```  
  
### Parameters  
 [in] `dwNewStyle`  
 A bitwise-OR combination of the following possible values.  
  
|Style|Description|  
|-----------|-----------------|  
|`AFX_CBRS_FLOAT`|Makes the control bar float.|  
|`AFX_CBRS_AUTOHIDE`|Enables auto-hide mode.|  
|`AFX_CBRS_RESIZE`|Enables resizing of the control bar. When this flag is set, the control bar can be placed in a dockable pane.|  
|`AFX_CBRS_CLOSE`|Enables hiding of the control bar.|  
  
##  <a name="cbasepane__setdockingmode"></a>  CBasePane::SetDockingMode  
 Sets the docking mode for the pane.  
  
```  
void SetDockingMode(AFX_DOCK_TYPE dockModeNew);
```  
  
### Parameters  
 [in] `dockModeNew`  
 Specifies the new docking mode for the pane.  
  
### Remarks  
 The framework supports two docking modes: standard and immediate.  
  
 In the standard docking mode, panes and mini-frame windows are moved around using a drag rectangle. In the immediate docking mode, control bars and mini-frame windows are moved immediately with their context.  
  
 Initially, the docking mode is defined globally by [CDockingManager::m_dockModeGlobal](../../mfc/reference/cdockingmanager-class.md#cdockingmanager__m_dockmodeglobal). You can set the docking mode for each pane individually using the `SetDockingMode` method.  
  
##  <a name="cbasepane__setpanealignment"></a>  CBasePane::SetPaneAlignment  
 Sets the alignment for the pane.  
  
```  
virtual void SetPaneAlignment(DWORD dwAlignment);
```  
  
### Parameters  
 [in] `dwAlignment`  
 Specifies the new alignment.  
  
### Remarks  
 Usually, the framework calls this method when a pane is docked from one side of the main frame to another.  
  
 The following table shows the possible values for `dwAlignment`:  
  
|Value|Alignment|  
|-----------|---------------|  
|`CBRS_ALIGN_LEFT`|Left alignment.|  
|`CBRS_ALIGN_RIGHT`|Right alignment.|  
|`CBRS_ALIGN_TOP`|Top alignment.|  
|`CBRS_ALIGN_BOTTOM`|Bottom alignment.|  
  
##  <a name="cbasepane__setpanestyle"></a>  CBasePane::SetPaneStyle  
 Sets the style of the pane.  
  
```  
virtual void SetPaneStyle(DWORD dwNewStyle);
```  
  
### Parameters  
 [in] `dwNewStyle`  
 Specifies the new style to set.  
  
### Remarks  
 This method can be used to set any of the CBRS_ styles that are defined in afxres.h. Because pane style and pane alignment are stored together, set the new style by combining it with the current alignment as follows.  
  
 `pPane->SetPaneStyle (pPane->GetCurrentAlignment() | CBRS_TOOLTIPS);`  
  
##  <a name="cbasepane__setwindowpos"></a>  CBasePane::SetWindowPos  
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
 [in] `pWndInsertAfter`  
 Identifies the `CWnd` object that comes before this `CWnd` object in the Z-order. For more information, see [CWnd::SetWindowPos](../../mfc/reference/cwnd-class.md#cwnd__setwindowpos).  
  
 [in] `x`  
 Specifies the position of the left side of the window.  
  
 [in] `y`  
 Specifies the position of the top of the window.  
  
 [in] `cx`  
 Specifies the width of the window.  
  
 [in] `cy`  
 Specifies the height of the window.  
  
 [in] `nFlags`  
 Specifies size and position options. For more information, see [CWnd::SetWindowPos](../../mfc/reference/cwnd-class.md#cwnd__setwindowpos).  
  
 [in] `hdwp`  
 Handle to a structure that contains size and position information for one or more windows.  
  
### Return Value  
 A handle to an updated deferred window position structure, or `NULL`.  
  
### Remarks  
 If `pWndInsertAfter` is `NULL`, this method calls [CWnd::SetWindowPos](../../mfc/reference/cwnd-class.md#cwnd__setwindowpos). If `pWndInsertAfter` is non- `NULL`, this method calls `DeferWindowPos`.  
  
##  <a name="cbasepane__showpane"></a>  CBasePane::ShowPane  
 Shows or hides the pane.  
  
```  
virtual void ShowPane(
    BOOL bShow,  
    BOOL bDelay,  
    BOOL bActivate);
```  
  
### Parameters  
 [in] `bShow`  
 Specifies whether to show ( `TRUE`) or hide ( `FALSE`) a pane.  
  
 [in] `bDelay`  
 If `TRUE`, recalculating the docking layout is delayed.  
  
 [in] `bActivate`  
 If `TRUE`, the pane is active when shown.  
  
### Remarks  
 This method shows or hides a pane. Use this method instead of `ShowWindow` because this method notifies the relevant docking managers about changes in the pane's visibility.  
  
 Use [CBasePane::IsVisible](#cbasepane__isvisible) to determine the current visibility of a pane.  
  
##  <a name="cbasepane__stretchpane"></a>  CBasePane::StretchPane  
 Stretches a pane vertically or horizontally.  
  
```  
virtual CSize StretchPane(
    int nLength,  
    BOOL bVert);
```  
  
### Parameters  
 [in] `nLength`  
 The length by which to stretch the pane.  
  
 [in] `bVert`  
 If `TRUE`, stretch the pane vertically. If `FALSE`, stretch the pane horizontally.  
  
### Return Value  
 The size of the stretched pane.  
  
##  <a name="cbasepane__undockpane"></a>  CBasePane::UndockPane  
 Removes the pane from the dock site, default slider, or mini-frame window where it is currently docked.  
  
```  
virtual void UndockPane(BOOL bDelay=FALSE);
```  
  
### Parameters  
 `bDelay`  
 If TRUE, the docking layout is not recalculated immediately.  
  
### Remarks  
 Call this method to manipulate the pane state or exclude the pane from the docking layout.  
  
 If you want to continue to use this pane, call either [CBasePane::DockPane](#cbasepane__dockpane) or [CBasePane::FloatPane](#cbasepane__floatpane) before calling this method.  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CPane](../../mfc/reference/cbasepane-class.md)   
 [CWnd Class](../../mfc/reference/cwnd-class.md)
