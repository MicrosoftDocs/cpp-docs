---
description: "Learn more about: CDockablePane Class"
title: "CDockablePane Class"
ms.date: "07/02/2019"
f1_keywords: ["CDockablePane", "AFXDOCKABLEPANE/CDockablePane", "AFXDOCKABLEPANE/CDockablePane::CDockablePane", "AFXDOCKABLEPANE/CDockablePane::AttachToTabWnd", "AFXDOCKABLEPANE/CDockablePane::CalcFixedLayout", "AFXDOCKABLEPANE/CDockablePane::CanAcceptMiniFrame", "AFXDOCKABLEPANE/CDockablePane::CanAcceptPane", "AFXDOCKABLEPANE/CDockablePane::CanAutoHide", "AFXDOCKABLEPANE/CDockablePane::CanBeAttached", "AFXDOCKABLEPANE/CDockablePane::ConvertToTabbedDocument", "AFXDOCKABLEPANE/CDockablePane::CopyState", "AFXDOCKABLEPANE/CDockablePane::Create", "AFXDOCKABLEPANE/CDockablePane::CreateDefaultPaneDivider", "AFXDOCKABLEPANE/CDockablePane::CreateEx", "AFXDOCKABLEPANE/CDockablePane::CreateTabbedPane", "AFXDOCKABLEPANE/CDockablePane::DockPaneContainer", "AFXDOCKABLEPANE/CDockablePane::DockPaneStandard", "AFXDOCKABLEPANE/CDockablePane::DockToRecentPos", "AFXDOCKABLEPANE/CDockablePane::DockToWindow", "AFXDOCKABLEPANE/CDockablePane::EnableAutohideAll", "AFXDOCKABLEPANE/CDockablePane::EnableGripper", "AFXDOCKABLEPANE/CDockablePane::GetAHRestoredRect", "AFXDOCKABLEPANE/CDockablePane::GetAHSlideMode", "AFXDOCKABLEPANE/CDockablePane::GetCaptionHeight", "AFXDOCKABLEPANE/CDockablePane::GetDefaultPaneDivider", "AFXDOCKABLEPANE/CDockablePane::GetDockingStatus", "AFXDOCKABLEPANE/CDockablePane::GetDragSensitivity", "AFXDOCKABLEPANE/CDockablePane::GetLastPercentInPaneContainer", "AFXDOCKABLEPANE/CDockablePane::GetTabArea", "AFXDOCKABLEPANE/CDockablePane::GetTabbedPaneRTC", "AFXDOCKABLEPANE/CDockablePane::HasAutoHideMode", "AFXDOCKABLEPANE/CDockablePane::HitTest", "AFXDOCKABLEPANE/CDockablePane::IsAutohideAllEnabled", "AFXDOCKABLEPANE/CDockablePane::IsAutoHideMode", "AFXDOCKABLEPANE/CDockablePane::IsDocked", "AFXDOCKABLEPANE/CDockablePane::IsHideInAutoHideMode", "AFXDOCKABLEPANE/CDockablePane::IsInFloatingMultiPaneFrameWnd", "AFXDOCKABLEPANE/CDockablePane::IsResizable", "AFXDOCKABLEPANE/CDockablePane::IsTabLocationBottom", "AFXDOCKABLEPANE/CDockablePane::IsTracked", "AFXDOCKABLEPANE/CDockablePane::IsVisible", "AFXDOCKABLEPANE/CDockablePane::OnAfterChangeParent", "AFXDOCKABLEPANE/CDockablePane::OnAfterDockFromMiniFrame", "AFXDOCKABLEPANE/CDockablePane::OnBeforeChangeParent", "AFXDOCKABLEPANE/CDockablePane::OnBeforeFloat", "AFXDOCKABLEPANE/CDockablePane::RemoveFromDefaultPaneDividier", "AFXDOCKABLEPANE/CDockablePane::ReplacePane", "AFXDOCKABLEPANE/CDockablePane::RestoreDefaultPaneDivider", "AFXDOCKABLEPANE/CDockablePane::SetAutoHideMode", "AFXDOCKABLEPANE/CDockablePane::SetAutoHideParents", "AFXDOCKABLEPANE/CDockablePane::SetLastPercentInPaneContainer", "AFXDOCKABLEPANE/CDockablePane::SetRestoredDefaultPaneDivider", "AFXDOCKABLEPANE/CDockablePane::SetTabbedPaneRTC", "AFXDOCKABLEPANE/CDockablePane::ShowPane", "AFXDOCKABLEPANE/CDockablePane::Slide", "AFXDOCKABLEPANE/CDockablePane::ToggleAutoHide", "AFXDOCKABLEPANE/CDockablePane::UndockPane", "AFXDOCKABLEPANE/CDockablePane::CheckAutoHideCondition", "AFXDOCKABLEPANE/CDockablePane::CheckStopSlideCondition", "AFXDOCKABLEPANE/CDockablePane::DrawCaption", "AFXDOCKABLEPANE/CDockablePane::OnPressButtons", "AFXDOCKABLEPANE/CDockablePane::OnSlide", "AFXDOCKABLEPANE/CDockablePane::m_bDisableAnimation", "AFXDOCKABLEPANE/CDockablePane::m_bHideInAutoHideMode", "AFXDOCKABLEPANE/CDockablePane::m_nSlideSteps"]
helpviewer_keywords: ["CDockablePane [MFC], CDockablePane", "CDockablePane [MFC], AttachToTabWnd", "CDockablePane [MFC], CalcFixedLayout", "CDockablePane [MFC], CanAcceptMiniFrame", "CDockablePane [MFC], CanAcceptPane", "CDockablePane [MFC], CanAutoHide", "CDockablePane [MFC], CanBeAttached", "CDockablePane [MFC], ConvertToTabbedDocument", "CDockablePane [MFC], CopyState", "CDockablePane [MFC], Create", "CDockablePane [MFC], CreateDefaultPaneDivider", "CDockablePane [MFC], CreateEx", "CDockablePane [MFC], CreateTabbedPane", "CDockablePane [MFC], DockPaneContainer", "CDockablePane [MFC], DockPaneStandard", "CDockablePane [MFC], DockToRecentPos", "CDockablePane [MFC], DockToWindow", "CDockablePane [MFC], EnableAutohideAll", "CDockablePane [MFC], EnableGripper", "CDockablePane [MFC], GetAHRestoredRect", "CDockablePane [MFC], GetAHSlideMode", "CDockablePane [MFC], GetCaptionHeight", "CDockablePane [MFC], GetDefaultPaneDivider", "CDockablePane [MFC], GetDockingStatus", "CDockablePane [MFC], GetDragSensitivity", "CDockablePane [MFC], GetLastPercentInPaneContainer", "CDockablePane [MFC], GetTabArea", "CDockablePane [MFC], GetTabbedPaneRTC", "CDockablePane [MFC], HasAutoHideMode", "CDockablePane [MFC], HitTest", "CDockablePane [MFC], IsAutohideAllEnabled", "CDockablePane [MFC], IsAutoHideMode", "CDockablePane [MFC], IsDocked", "CDockablePane [MFC], IsHideInAutoHideMode", "CDockablePane [MFC], IsInFloatingMultiPaneFrameWnd", "CDockablePane [MFC], IsResizable", "CDockablePane [MFC], IsTabLocationBottom", "CDockablePane [MFC], IsTracked", "CDockablePane [MFC], IsVisible", "CDockablePane [MFC], OnAfterChangeParent", "CDockablePane [MFC], OnAfterDockFromMiniFrame", "CDockablePane [MFC], OnBeforeChangeParent", "CDockablePane [MFC], OnBeforeFloat", "CDockablePane [MFC], RemoveFromDefaultPaneDividier", "CDockablePane [MFC], ReplacePane", "CDockablePane [MFC], RestoreDefaultPaneDivider", "CDockablePane [MFC], SetAutoHideMode", "CDockablePane [MFC], SetAutoHideParents", "CDockablePane [MFC], SetLastPercentInPaneContainer", "CDockablePane [MFC], SetRestoredDefaultPaneDivider", "CDockablePane [MFC], SetTabbedPaneRTC", "CDockablePane [MFC], ShowPane", "CDockablePane [MFC], Slide", "CDockablePane [MFC], ToggleAutoHide", "CDockablePane [MFC], UndockPane", "CDockablePane [MFC], CheckAutoHideCondition", "CDockablePane [MFC], CheckStopSlideCondition", "CDockablePane [MFC], DrawCaption", "CDockablePane [MFC], OnPressButtons", "CDockablePane [MFC], OnSlide", "CDockablePane [MFC], m_bDisableAnimation", "CDockablePane [MFC], m_bHideInAutoHideMode", "CDockablePane [MFC], m_nSlideSteps"]
ms.assetid: e2495f4c-765f-48f9-a2e2-e45e47608d91
---
# CDockablePane Class

Implements a pane that can either be docked in a dock site or included in a tabbed pane.

## Syntax

```
class CDockablePane : public CPane
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CDockablePane::CDockablePane](#cdockablepane)|Constructs and initializes a `CDockablePane` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CDockablePane::AttachToTabWnd](#attachtotabwnd)|Attaches a pane to another pane. This creates a tabbed pane.|
|[CDockablePane::CalcFixedLayout](#calcfixedlayout)|Returns the size of the pane rectangle.|
|[CDockablePane::CanAcceptMiniFrame](#canacceptminiframe)|Determines whether the specified mini frame can be docked to the pane.|
|[CDockablePane::CanAcceptPane](#canacceptpane)|Determines whether another pane can be docked to the current pane.|
|[CDockablePane::CanAutoHide](#canautohide)|Determines whether the pane supports auto-hide mode. (Overrides [CBasePane::CanAutoHide](../../mfc/reference/cbasepane-class.md#canautohide).)|
|[CDockablePane::CanBeAttached](#canbeattached)|Determines whether the current pane can be docked to another pane.|
|[CDockablePane::ConvertToTabbedDocument](#converttotabbeddocument)|Converts one or more dockable panes to MDI tabbed documents.|
|[CDockablePane::CopyState](#copystate)|Copies the state of a dockable pane.|
|[CDockablePane::Create](#create)|Creates the Windows control and attaches it to the `CDockablePane` object.|
|[CDockablePane::CreateDefaultPaneDivider](#createdefaultpanedivider)|Creates a default divider for the pane as it is being docked to a frame window.|
|[CDockablePane::CreateEx](#createex)|Creates the Windows control and attaches it to the `CDockablePane` object.|
|[CDockablePane::CreateTabbedPane](#createtabbedpane)|Creates a tabbed pane from the current pane.|
|[CDockablePane::DockPaneContainer](#dockpanecontainer)|Docks a container to the pane.|
|[CDockablePane::DockPaneStandard](#dockpanestandard)|Docks a pane by using outline (standard) docking.|
|`CDockablePane::DockToFrameWindow`|Used internally. To dock a pane, use [CPane::DockPane](../../mfc/reference/cpane-class.md#dockpane) or [CDockablePane::DockToWindow](#docktowindow).|
|[CDockablePane::DockToRecentPos](#docktorecentpos)|Docks a pane to its stored recent docking position.|
|[CDockablePane::DockToWindow](#docktowindow)|Docks one docking pane to another docking pane.|
|[CDockablePane::EnableAutohideAll](#enableautohideall)|Enables or disables auto-hide mode for this pane together with other panes in the container.|
|[CDockablePane::EnableGripper](#enablegripper)|Shows or hides the caption (gripper).|
|[CDockablePane::GetAHRestoredRect](#getahrestoredrect)|Specifies the position of the pane when visible in auto-hide mode.|
|[CDockablePane::GetAHSlideMode](#getahslidemode)|Retrieves the auto hide slide mode for the pane.|
|`CDockablePane::GetAutoHideButton`|Used internally.|
|`CDockablePane::GetAutoHideToolBar`|Used internally.|
|[CDockablePane::GetCaptionHeight](#getcaptionheight)|Returns the height of the current caption.|
|[CDockablePane::GetDefaultPaneDivider](#getdefaultpanedivider)|Returns the default pane divider for the pane's container.|
|[CDockablePane::GetDockingStatus](#getdockingstatus)|Determines the ability of a pane to be docked based on the provided pointer location.|
|[CDockablePane::GetDragSensitivity](#getdragsensitivity)|Returns the drag sensitivity of a docking pane.|
|[CDockablePane::GetLastPercentInPaneContainer](#getlastpercentinpanecontainer)|Retrieves the percentage of space that a pane occupies within its container.|
|[CDockablePane::GetTabArea](#gettabarea)|Retrieves the tab area for the pane.|
|[CDockablePane::GetTabbedPaneRTC](#gettabbedpanertc)|Returns the runtime class information about a tabbed window that is created when another pane docks to the current pane.|
|[CDockablePane::HasAutoHideMode](#hasautohidemode)|Specifies whether a docking pane can be switched to auto-hide mode.|
|[CDockablePane::HitTest](#hittest)|Specifies the specific location in a pane where the user clicks a mouse.|
|`CDockablePane::IsAccessibilityCompatible`|Used internally.|
|[CDockablePane::IsAutohideAllEnabled](#isautohideallenabled)|Indicates whether the docking pane and all other panes in the container can be placed in auto-hide mode.|
|[CDockablePane::IsAutoHideMode](#isautohidemode)|Determines whether a pane is in auto-hide mode.|
|`CDockablePane::IsChangeState`|Used internally.|
|[CDockablePane::IsDocked](#isdocked)|Determines whether the current pane is docked.|
|[CDockablePane::IsHideInAutoHideMode](#ishideinautohidemode)|Determines the behavior of a pane that is in auto-hide mode if it is shown (or hidden) by calling `ShowPane`.|
|[CDockablePane::IsInFloatingMultiPaneFrameWnd](#isinfloatingmultipaneframewnd)|Specifies whether the pane is in a multi-pane frame window.|
|[CDockablePane::IsResizable](#isresizable)|Specifies whether the pane is resizable.|
|[CDockablePane::IsTabLocationBottom](#istablocationbottom)|Specifies whether tabs are located at the top or bottom of the pane.|
|[CDockablePane::IsTracked](#istracked)|Specifies whether a pane is being dragged by the user.|
|[CDockablePane::IsVisible](#isvisible)|Determines whether the current pane is visible.|
|[CDockablePane::LoadState](#loadstate)|Used internally.|
|[CDockablePane::OnAfterChangeParent](#onafterchangeparent)|Called by the framework when the parent of a pane has changed. (Overrides [CPane::OnAfterChangeParent](../../mfc/reference/cpane-class.md#onafterchangeparent).)|
|[CDockablePane::OnAfterDockFromMiniFrame](#onafterdockfromminiframe)|Called by the framework when a floating docking bar docks at a frame window.|
|[CDockablePane::OnBeforeChangeParent](#onbeforechangeparent)|Called by the framework when the parent of the pane is about to change. (Overrides [CPane::OnBeforeChangeParent](../../mfc/reference/cpane-class.md#onbeforechangeparent).)|
|[CDockablePane::OnBeforeFloat](#onbeforefloat)|Called by the framework when a pane is about to float. (Overrides [CPane::OnBeforeFloat](../../mfc/reference/cpane-class.md#onbeforefloat).)|
|[CDockablePane::RemoveFromDefaultPaneDividier](#removefromdefaultpanedividier)|The framework calls this method when a pane is being undocked.|
|[CDockablePane::ReplacePane](#replacepane)|Replaces the pane with a specified pane.|
|[CDockablePane::RestoreDefaultPaneDivider](#restoredefaultpanedivider)|The framework calls this method as a pane is deserialized to restore the default pane divider.|
|`CDockablePane::SaveState`|Used internally.|
|`CDockablePane::Serialize`|Serializes the pane. (Overrides `CBasePane::Serialize`.)|
|[CDockablePane::SetAutoHideMode](#setautohidemode)|Toggles the docking pane between visible and auto-hide mode.|
|[CDockablePane::SetAutoHideParents](#setautohideparents)|Sets the auto-hide button and auto-hide toolbar for the pane.|
|`CDockablePane::SetDefaultPaneDivider`|Used internally.|
|[CDockablePane::SetLastPercentInPaneContainer](#setlastpercentinpanecontainer)|Sets the percentage of space that a pane occupies within its container.|
|`CDockablePane::SetResizeMode`|Used internally.|
|[CDockablePane::SetRestoredDefaultPaneDivider](#setrestoreddefaultpanedivider)|Sets the restored default pane divider.|
|[CDockablePane::SetTabbedPaneRTC](#settabbedpanertc)|Sets the runtime class information for a tabbed window that is created when two panes dock together.|
|[CDockablePane::ShowPane](#showpane)|Shows or hides a pane.|
|[CDockablePane::Slide](#slide)|Shows or hides a pane with a sliding animation which displays only when the pane is in auto-hide mode.|
|[CDockablePane::ToggleAutoHide](#toggleautohide)|Toggles auto-hide mode. (Overrides [CPane::ToggleAutoHide](../../mfc/reference/cpane-class.md#toggleautohide) .)|
|[CDockablePane::UndockPane](#undockpane)|Undocks a pane from either the main frame window or a miniframe window container.|
|`CDockablePane::UnSetAutoHideMode`|Used internally. To set the auto-hide mode, use [CDockablePane::SetAutoHideMode](#setautohidemode)|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[CDockablePane::CheckAutoHideCondition](#checkautohidecondition)|Determines whether the docking pane is hidden (in auto-hide mode).|
|[CDockablePane::CheckStopSlideCondition](#checkstopslidecondition)|Determines when an auto-hide docking pane should stop sliding.|
|[CDockablePane::DrawCaption](#drawcaption)|Draws the docking pane caption (gripper).|
|[CDockablePane::OnPressButtons](#onpressbuttons)|Called when the user presses a caption button other than the AFX_HTCLOSE and AFX_HTMAXBUTTON buttons.|
|[CDockablePane::OnSlide](#onslide)|Called by the framework to render the auto-hide slide effect when the pane is either shown or hidden.|

### Data Members

|Name|Description|
|----------|-----------------|
|[CDockablePane::m_bDisableAnimation](#m_bdisableanimation)|Specifies whether auto-hide animation of the dockable pane is disabled.|
|[CDockablePane::m_bHideInAutoHideMode](#m_bhideinautohidemode)|Determines the behavior of the pane when the pane is in auto-hide mode.|
|[CDockablePane::m_nSlideSteps](#m_nslidesteps)|Specifies the animation speed of the pane when it is being shown or hidden when in auto-hide mode.|

## Remarks

`CDockablePane` implements the following functionality:

- Docking a pane to a main frame window.

- Switching a pane to auto-hide mode.

- Attaching a pane to a tabbed window.

- Floating a pane in a miniframe window.

- Docking a pane to another pane that is floating in a miniframe window.

- Resizing a pane.

- Loading and saving state for a docking pane.

    > [!NOTE]
    >  State information is saved to the Windows registry.

- Creating a pane with or without a caption. The caption can have a text label and it can be filled with a gradient color.

- Dragging a pane while displaying the contents of the pane

- Dragging a pane while displaying a drag rectangle.

To use a docking pane in your application, derive your pane class from the `CDockablePane` class. Either embed the derived object into the main frame window object or into a window object that controls the instance of your pane. Then call the [CDockablePane::Create](#create) method or the [CDockablePane::CreateEx](#createex) method when you process the WM_CREATE message in the main frame window. Finally, set up the pane object by calling [CBasePane::EnableDocking](../../mfc/reference/cbasepane-class.md#enabledocking), [CBasePane::DockPane](../../mfc/reference/cbasepane-class.md#dockpane), or [CDockablePane::AttachToTabWnd](#attachtotabwnd).

## Customization Tips

The following tips apply to `CDockablePane` objects:

- If you call [CDockablePane::AttachToTabWnd](#attachtotabwnd) for two non-tabbed, dockable panes, a pointer to a tabbed window will be returned in the *ppTabbedControlBar* parameter. You can continue to add tabs to the tabbed window by using this parameter.

- The kind of tabbed pane that is created by [CDockablePane::AttachToTabWnd](#attachtotabwnd) is determined by the `CDockablePane` object in the *pTabControlBarAttachTo* parameter. You can call [CDockablePane::SetTabbedPaneRTC](#settabbedpanertc) to set the kind of tabbed pane that the `CDockablePane` will create. The default type is determined by the `dwTabbedStyle` of [CDockablePane::Create](#create) when you first create the `CDockablePane`. If *dwTabbedStyle* is AFX_CBRS_OUTLOOK_TABS the default type is [CMFCOutlookBar Class](../../mfc/reference/cmfcoutlookbar-class.md); if *dwTabbedStyle* is AFX_CBRS_REGULAR_TABS the default type is [CTabbedPane Class](../../mfc/reference/ctabbedpane-class.md).

- If you want to dock one dockable pane to another, call the [CDockablePane::DockToWindow](#docktowindow) method. The original pane must be docked somewhere before you call this method.

- The member variable [CDockablePane::m_bHideInAutoHideMode](#m_bhideinautohidemode) controls how dockable panes behave in auto hide mode when you call [CDockablePane::ShowPane](#showpane). If this member variable is set to TRUE, dockable panes and their auto hide buttons will be hidden. Otherwise, they will slide in and out.

- You can disable auto-hide animation by setting the [CDockablePane::m_bDisableAnimation](#m_bdisableanimation) member variable to TRUE.

## Example

The following example demonstrates how to configure a `CDockablePane` object by using various methods in the `CDockablePane` class. The example illustrates how to enable the auto-hide all feature for the dockable pane, enable the caption or the gripper, enable the auto-hide mode, show the pane, and animate a pane that is in auto-hide mode. This code snippet is part of the [Visual Studio Demo sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_VisualStudioDemo#27](../../mfc/codesnippet/cpp/cdockablepane-class_1.cpp)]
[!code-cpp[NVC_MFC_VisualStudioDemo#28](../../mfc/codesnippet/cpp/cdockablepane-class_2.cpp)]

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CBasePane](../../mfc/reference/cbasepane-class.md)

[CPane](../../mfc/reference/cpane-class.md)

[CDockablePane](../../mfc/reference/cdockablepane-class.md)

## Requirements

**Header:** afxDockablePane.h

## <a name="attachtotabwnd"></a> CDockablePane::AttachToTabWnd

Attaches the current pane to a target pane, creating a tabbed pane.

```
virtual CDockablePane* AttachToTabWnd(
    CDockablePane* pTabControlBarAttachTo,
    AFX_DOCK_METHOD dockMethod,
    BOOL bSetActive= TRUE,
    CDockablePane** ppTabbedControlBar = NULL);
```

### Parameters

*pTabControlBarAttachTo*<br/>
[in, out] Specifies the target pane that the current pane attaches to. The target pane must be a dockable pane.

*dockMethod*<br/>
[in] Specifies the docking method.

*bSetActive*<br/>
[in] TRUE to activate the tabbed pane after the attach operation; otherwise, FALSE.

*ppTabbedControlBar*<br/>
[out] Contains the tabbed pane that results from the attach operation.

### Return Value

A pointer to the current pane, if it is not a tabbed pane; otherwise a pointer to the tabbed pane that results from the attach operation. The return value is NULL if the current pane cannot be attached, or if an error occurs.

### Remarks

When one dockable pane attaches to another pane using this method, the following occurs:

1. The framework checks whether the target pane *pTabControlBarAttachTo* is a regular docking pane or if it is derived from [CBaseTabbedPane](../../mfc/reference/cbasetabbedpane-class.md).

1. If the target pane is a tabbed pane, the framework adds the current pane to it as a tab.

1. If the target pane is a regular docking pane, the framework creates a tabbed pane.

   - The framework calls `pTabControlBarAttachTo->CreateTabbedPane`. The style of the new tabbed pane depends on the `m_pTabbedControlBarRTC` member. By default, this member is set to the runtime class of [CTabbedPane](../../mfc/reference/ctabbedpane-class.md). If you pass the AFX_CBRS_OUTLOOK_TABS style as the *dwTabbedStyle* parameter to the [CDockablePane::Create](#create) method, the runtime class object is set to the runtime class of [CMFCOutlookBar](../../mfc/reference/cmfcoutlookbar-class.md). You can change this member at any time to change the style of the new pane.

   - When this method creates a tabbed pane, the framework replaces the pointer to *pTabControlBarAttachTo* (if the pane is docked or floating in a multi-miniframe window) with a pointer to the new tabbed pane.

   - The framework adds the *pTabControlBarAttachTo* pane to the tabbed pane as the first tab. The framework then adds the current pane as a second tab.

1. If the current pane is derived from `CBaseTabbedPane`, all of its tabs are moved to *pTabControlBarAttachTo* and the current pane is destroyed. Therefore, be careful when you call this method, because a pointer to the current pane may be invalid when the method returns.

If you attach one pane to another when building a docking layout, set `dockMethod` to DM_SHOW.

You should dock the first pane before you attach another pane to it.

## <a name="calcfixedlayout"></a> CDockablePane::CalcFixedLayout

Returns the size of the pane rectangle.

```
virtual CSize CalcFixedLayout(
    BOOL bStretch,
    BOOL bHorz);
```

### Parameters

*bStretch*<br/>
[in] Not used.

*bHorz*<br/>
[in] Not used.

### Return Value

A `CSize` object that contains the size of the pane rectangle.

## <a name="canacceptminiframe"></a> CDockablePane::CanAcceptMiniFrame

Determines whether the specified mini-frame can be docked to the pane.

```
virtual BOOL CanAcceptMiniFrame(CPaneFrameWnd* pMiniFrame) const;
```

### Parameters

*pMiniFrame*<br/>
[in] Pointer to a `CPaneFrameWnd` object.

### Return Value

TRUE if *pMiniFrame* can be docked to the pane; otherwise, FALSE.

## <a name="canacceptpane"></a> CDockablePane::CanAcceptPane

Determines whether another pane can be docked to the current pane.

```
virtual BOOL CanAcceptPane(const CBasePane* pBar) const;
```

### Parameters

*pBar*<br/>
[in] Specifies the pane to dock to the current pane.

### Return Value

TRUE if the specified pane can be docked to this pane; otherwise, FALSE.

### Remarks

The framework calls this method before a pane is docked to the current pane.

Override this function in a derived class to enable or disable docking to a specific pane.

By default, this method returns TRUE if either *pBar* or its parent is of type `CDockablePane`.

## <a name="canautohide"></a> CDockablePane::CanAutoHide

Determines whether the pane can auto-hide.

```
virtual BOOL CanAutoHide() const;
```

### Return Value

TRUE if the pane can auto-hide; otherwise, FALSE.

### Remarks

`CDockablePane::CanAutoHide` returns FALSE in any of the following situations:

- The pane has no parent.

- The docking manager does not allow panes to auto-hide.

- The pane is not docked.

## <a name="canbeattached"></a> CDockablePane::CanBeAttached

Determines whether the current pane can be docked to another pane.

```
virtual BOOL CanBeAttached() const;
```

### Return Value

TRUE if the dockable pane can be docked to another pane or to the main frame window; otherwise, FALSE.

### Remarks

By default, this method always returns TRUE. Override this method in a derived class to enable or disable docking without calling [CBasePane::EnableDocking](../../mfc/reference/cbasepane-class.md#enabledocking).

## <a name="cdockablepane"></a> CDockablePane::CDockablePane

Constructs and initializes a [CDockablePane](../../mfc/reference/cdockablepane-class.md) object.

```
CDockablePane();
```

### Remarks

After you construct a dockable pane object, call [CDockablePane::Create](#create) or [CDockablePane::CreateEx](#createex) to create it.

## <a name="converttotabbeddocument"></a> CDockablePane::ConvertToTabbedDocument

Converts one or more dockable panes to MDI tabbed documents.

```
virtual void ConvertToTabbedDocument(BOOL bActiveTabOnly = TRUE);
```

### Parameters

*bActiveTabOnly*<br/>
[in] When you convert a `CTabbedPane`, specify TRUE to convert only the active tab. Specify FALSE to convert all tabs in the pane.

## <a name="checkautohidecondition"></a> CDockablePane::CheckAutoHideCondition

Determines whether the docking pane is hidden (also known as autohide mode).

```
virtual BOOL CheckAutoHideCondition();
```

### Return Value

TRUE if the hide condition is met; otherwise, FALSE.

### Remarks

The framework uses a timer to periodically check whether to hide an autohide dockable pane. The method returns TRUE when the pane is not active, the pane is not being resized, and the mouse pointer is not over the pane.

If all the previous conditions are met, the framework calls [CDockablePane::Slide](#slide) to hide the pane.

## <a name="checkstopslidecondition"></a> CDockablePane::CheckStopSlideCondition

Determines when an autohide docking pane should stop sliding.

```
virtual BOOL CheckStopSlideCondition(BOOL bDirection);
```

### Parameters

*bDirection*<br/>
[in] TRUE if the pane is visible; FALSE if the pane is hidden.

### Return Value

TRUE if the stop condition is met; otherwise, FALSE.

### Remarks

When a dockable pane is set to autohide mode, the framework uses sliding effects to show or hide the pane. The framework calls this function when the pane is sliding. `CheckStopSlideCondition` returns TRUE when the pane is fully visible or when it is fully hidden.

Override this method in a derived class to implement custom autohide effects.

## <a name="copystate"></a> CDockablePane::CopyState

Copies the state of a dockable pane.

```
virtual void CopyState(CDockablePane* pOrgBar);
```

### Parameters

*pOrgBar*<br/>
[in] A pointer to a dockable pane.

### Remarks

`CDockablePane::CopyState` copies the state of *pOrgBar* to the current pane by calling the following methods:

- [CPane::CopyState](../../mfc/reference/cpane-class.md#copystate)

- [CDockablePane::GetAHRestoredRect](#getahrestoredrect)

- [CDockablePane::GetAHSlideMode](#getahslidemode)

- [CDockablePane::GetLastPercentInPaneContainer](#getlastpercentinpanecontainer)

- [CDockablePane::IsAutohideAllEnabled](#isautohideallenabled)

## <a name="create"></a> CDockablePane::Create

Creates the Windows control and attaches it to the [CDockablePane](../../mfc/reference/cdockablepane-class.md) object.

```
virtual BOOL Create(
    LPCTSTR lpszCaption,
    CWnd* pParentWnd,
    const RECT& rect,
    BOOL bHasGripper,
    UINT nID,
    DWORD dwStyle,
    DWORD dwTabbedStyle = AFX_CBRS_REGULAR_TABS,
    DWORD dwControlBarStyle = AFX_DEFAULT_DOCKING_PANE_STYLE,
    CCreateContext* pContext = NULL);

virtual BOOL Create(
    LPCTSTR lpszWindowName,
    CWnd* pParentWnd,
    CSize sizeDefault,
    BOOL bHasGripper,
    UINT nID,
    DWORD dwStyle = WS_CHILD|WS_VISIBLE|CBRS_TOP|CBRS_HIDE_INPLACE,
    DWORD dwTabbedStyle = AFX_CBRS_REGULAR_TABS,
    DWORD dwControlBarStyle = AFX_DEFAULT_DOCKING_PANE_STYLE);
```

### Parameters

*lpszCaption*<br/>
[in] Specifies the window name.

*pParentWnd*<br/>
[in, out] Specifies the parent window.

*rect*<br/>
[in] Specifies the size and position of the window, in client coordinates of *pParentWnd*.

*bHasGripper*<br/>
[in] TRUE to create the pane with a caption; otherwise, FALSE.

*nID*<br/>
[in] Specifies the ID of the child window. This value must be unique if you want to save docking state for this docking pane.

*dwStyle*<br/>
[in] Specifies the window style attributes.

*dwTabbedStyle*<br/>
[in] Specifies the tabbed style of a tabbed window that is created when the user drags a pane on the caption of this pane.

*dwControlBarStyle*<br/>
[in] Specifies additional style attributes.

*pContext*<br/>
[in, out] Specifies the create context of the window.

*lpszWindowName*<br/>
[in] Specifies the window name.

*sizeDefault*<br/>
[in] Specifies the size of the window.

### Return Value

TRUE if the dockable pane is successfully created; otherwise, FALSE.

### Remarks

Creates a Windows pane and attaches it to the `CDockablePane` object.

If the *dwStyle* window style has the CBRS_FLOAT_MULTI flag, the miniframe window can float with other panes in the miniframe window. By default, docking panes can only float individually.

If the *dwTabbedStyle* parameter has the AFX_CBRS_OUTLOOK_TABS flag specified, the pane creates Outlook-style tabbed panes when another pane is attached to this pane using the [CDockablePane::AttachToTabWnd](#attachtotabwnd) method. By default, dockable panes create regular tabbed panes of type [CTabbedPane](../../mfc/reference/ctabbedpane-class.md).

## <a name="createdefaultpanedivider"></a> CDockablePane::CreateDefaultPaneDivider

Creates a default divider for the pane as it is being docked to a frame window.

```
static CPaneDivider* __stdcall CreateDefaultPaneDivider(
    DWORD dwAlignment,
    CWnd* pParent,
    CRuntimeClass* pSliderRTC = NULL);
```

### Parameters

*dwAlignment*<br/>
[in] Specifies the side of the main frame to which the pane is being docked. If *dwAlignment* contains the CBRS_ALIGN_LEFT or CBRS_ALIGN_RIGHT flag, this method creates a vertical (`CPaneDivider::SS_VERT`) divider; otherwise, this method creates a horizontal (`CPaneDivider::SS_HORZ`) divider.

*pParent*<br/>
[in] Pointer to the parent frame.

*pSliderRTC*<br/>
[in] Not used.

### Return Value

This method returns a pointer to the newly-created divider, or NULL if divider creation fails.

### Remarks

*dwAlignment* can be any of the following values:

|Value|Description|
|-----------|-----------------|
|CBRS_ALIGN_TOP|The pane is being docked to the top of the client area of a frame window.|
|CBRS_ALIGN_BOTTOM|The pane is being docked to the bottom of the client area of a frame window.|
|CBRS_ALIGN_LEFT|The pane is being docked to the left side of the client area of a frame window.|
|CBRS_ALIGN_RIGHT|The pane is being docked to the right side of the client area of a frame window.|

## <a name="createex"></a> CDockablePane::CreateEx

Creates the Windows control and attaches it to the [CDockablePane](../../mfc/reference/cdockablepane-class.md) object.

```
virtual BOOL CreateEx(
    DWORD dwStyleEx,
    LPCTSTR lpszCaption,
    CWnd* pParentWnd,
    const RECT& rect,
    BOOL bHasGripper,
    UINT nID,
    DWORD dwStyle,
    DWORD dwTabbedStyle = AFX_CBRS_REGULAR_TABS,
    DWORD dwControlBarStyle = AFX_DEFAULT_DOCKING_PANE_STYLE,
    CCreateContext* pContext = NULL);
```

### Parameters

*dwStyleEx*<br/>
[in] Specifies the extended style attributes for the new window.

*lpszCaption*<br/>
[in] Specifies the window name.

*pParentWnd*<br/>
[in, out] Specifies the parent window.

*rect*<br/>
[in] Specifies the size and position of the window, in client coordinates of *pParentWnd*.

*bHasGripper*<br/>
[in] TRUE to create the pane with a caption; otherwise, FALSE.

*nID*<br/>
[in] Specifies the ID of the child window. This value must be unique if you want to save the docking state for this docking pane.

*dwStyle*<br/>
[in] Specifies the window style attributes.

*dwTabbedStyle*<br/>
[in] Specifies the tabbed style of a tabbed window that is created when the user drags a pane on the caption of this pane.

*dwControlBarStyle*<br/>
[in] Specifies the additional style attributes.

*pContext*<br/>
[in, out] Specifies the create context of the window.

### Return Value

TRUE if the dockable pane is successfully created; otherwise, FALSE.

### Remarks

Creates a Windows pane and attaches it to the `CDockablePane` object.

If the *dwStyle* window style has the CBRS_FLOAT_MULTI flag, the miniframe window can float with other panes in the miniframe window. By default, docking panes can only float individually.

If the *dwTabbedStyle* parameter has the AFX_CBRS_OUTLOOK_TABS flag specified, the pane creates Outlook-style tabbed panes when another pane is attached to this pane using the [CDockablePane::AttachToTabWnd](#attachtotabwnd) method. By default, dockable panes create regular tabbed panes of type [CTabbedPane](../../mfc/reference/ctabbedpane-class.md).

## <a name="createtabbedpane"></a> CDockablePane::CreateTabbedPane

Creates a tabbed pane from the current pane.

```
virtual CTabbedPane* CreateTabbedPane();
```

### Return Value

The new tabbed pane, or NULL if the create operation failed.

### Remarks

The framework calls this method when it creates a tabbed pane to replace this pane. For more information, see [CDockablePane::AttachToTabWnd](#attachtotabwnd).

Override this method in a derived class to customize how tabbed panes are created and initialized.

The tabbed pane is created according to the runtime class information stored in the `m_pTabbedControlBarRTC` member, which is initialized by the [CDockablePane::CreateEx](#createex) method.

## <a name="dockpanecontainer"></a> CDockablePane::DockPaneContainer

Docks a container to the pane.

```
virtual BOOL DockPaneContainer(
    CPaneContainerManager& barContainerManager,
    DWORD dwAlignment,
    AFX_DOCK_METHOD dockMethod);
```

### Parameters

*barContainerManager*<br/>
[in] A reference to the container manager of the container that is being docked.

*dwAlignment*<br/>
[in] DWORD that specifies the side of the pane to which the container is being docked.

*dockMethod*<br/>
[in] Not used.

### Return Value

TRUE if the container was successfully docked to the pane; otherwise, FALSE.

### Remarks

*dwAlignment* can be any of the following values:

|Value|Description|
|-----------|-----------------|
|CBRS_ALIGN_TOP|The container is being docked to the top of the pane.|
|CBRS_ALIGN_BOTTOM|The container is being docked to the bottom of the pane.|
|CBRS_ALIGN_LEFT|The container is being docked to the left of the pane.|
|CBRS_ALIGN_RIGHT|The container is being docked to the right of the pane.|

## <a name="dockpanestandard"></a> CDockablePane::DockPaneStandard

Docks a pane by using outline (standard) docking.

```
virtual CPane* DockPaneStandard(BOOL& bWasDocked);
```

### Parameters

*bWasDocked*<br/>
[in] When the method returns, this value contains TRUE if the pane was successfully docked; otherwise, it contains FALSE.

### Return Value

If the pane was docked to a tabbed window, or if a tabbed window was created as a result of docking, this method returns a pointer to the tabbed window. If the pane was otherwise successfully docked, this method returns the **`this`** pointer. If docking failed, this method returns NULL.

## <a name="docktorecentpos"></a> CDockablePane::DockToRecentPos

Docks a pane to its stored docking position.

```
BOOL CDockablePane::DockToRecentPos();
```

### Return Value

TRUE if the pane is successfully docked; otherwise, FALSE.

### Remarks

Dockable panes store recent docking information in a [CRecentDockSiteInfo](../../mfc/reference/crecentdocksiteinfo-class.md) object.

## <a name="docktowindow"></a> CDockablePane::DockToWindow

Docks one docking pane to another docking pane.

```
virtual BOOL DockToWindow(
    CDockablePane* pTargetWindow,
    DWORD dwAlignment,
    LPCRECT lpRect = NULL);
```

### Parameters

*pTargetWindow*<br/>
[in, out] Specifies the dockable pane to dock this pane to.

*dwAlignment*<br/>
[in] Specifies the docking alignment for the pane. May be one of CBRS_ALIGN_LEFT, CBRS_ALIGN_TOP, CBRS_ALIGN_RIGHT, CBRS_ALIGN_BOTTOM or CBRS_ALIGN_ANY. (Defined in afxres.h.)

*lpRect*<br/>
[in] Specifies the docking rectangle for the pane.

### Return Value

TRUE if the pane was docked successfully; otherwise, FALSE.

### Remarks

Call this method to dock one pane to another pane with the alignment specified by *dwAlignment*.

## <a name="drawcaption"></a> CDockablePane::DrawCaption

Draws the caption (also called the gripper) of a docking pane.

```
virtual void DrawCaption(
    CDC* pDC,
    CRect rectCaption);
```

### Parameters

*pDC*<br/>
[in] Represents the device context used for drawing.

*rectCaption*<br/>
[in] Specifies the bounding rectangle of the pane's caption.

### Remarks

The framework calls this method to draw the caption of a dockable pane.

Override this method in a derived class to customize the appearance of the caption.

## <a name="enableautohideall"></a> CDockablePane::EnableAutohideAll

Enables or disables autohide mode for this pane and for other panes in the container.

```cpp
void EnableAutohideAll(BOOL bEnable = TRUE);
```

### Parameters

*bEnable*<br/>
[in] TRUE to enable the autohide all feature for the dockable pane; otherwise, FALSE.

### Remarks

When a user holds the **Ctrl** key and clicks the pin button to switch a pane to autohide mode, all other panes in the same container are also switched to autohide mode.

Call this method with *bEnable* set to FALSE to disable this feature for a particular pane.

## <a name="enablegripper"></a> CDockablePane::EnableGripper

Shows or hides the caption (also called the gripper).

```
virtual void EnableGripper(BOOL bEnable);
```

### Parameters

*bEnable*<br/>
[in] TRUE to enable the caption; otherwise, FALSE.

### Remarks

When the framework creates dockable panes, they do not have the WS_STYLE window style, even if specified. This means that the pane's caption is a non-client area that is controlled by the framework, but this area differs from the standard window caption.

You can show or hide the caption at any time. The framework hides the caption when a pane is added as a tab to a tabbed window or when a pane is floated in a miniframe window.

## <a name="getahrestoredrect"></a> CDockablePane::GetAHRestoredRect

Specifies the position of the pane when in auto-hide mode.

```
CRect GetAHRestoredRect() const;
```

### Return Value

A `CRect` object that contains the position of the pane when it is in auto-hide mode.

### Remarks

## <a name="getahslidemode"></a> CDockablePane::GetAHSlideMode

Retrieves the auto-hide slide mode for the pane.

```
virtual UINT GetAHSlideMode() const;
```

### Return Value

A UINT that specifies the auto-hide slide mode for the pane. The return value can be either AFX_AHSM_MOVE or AFX_AHSM_STRETCH, but the implementation only uses AFX_AHSM_MOVE.

### Remarks

## <a name="getcaptionheight"></a> CDockablePane::GetCaptionHeight

Returns the height, in pixels, of the current caption.

```
virtual int GetCaptionHeight() const;
```

### Return Value

The height of the caption, in pixels.

### Remarks

The caption height is 0 if the caption was hidden by the [CDockablePane::EnableGripper](#enablegripper) method, or if the pane does not have a caption.

## <a name="getdefaultpanedivider"></a> CDockablePane::GetDefaultPaneDivider

Returns the default pane divider for the pane's container.

```
CPaneDivider* GetDefaultPaneDivider() const;
```

### Return Value

A valid [CPaneDivider](../../mfc/reference/cpanedivider-class.md) object if the dockable pane is docked to the main frame window, or `NULL` if the dockable pane is not docked or if it is floating.

### Remarks

For more information about pane dividers, see [CPaneDivider Class](../../mfc/reference/cpanedivider-class.md).

## <a name="getdockingstatus"></a> CDockablePane::GetDockingStatus

Determines the ability of a pane to be docked based on the provided pointer location.

```
virtual AFX_CS_STATUS GetDockingStatus(
    CPoint pt,
    int nSensitivity);
```

### Parameters

*pt*<br/>
[in] The location of the pointer in screen coordinates.

*nSensitivity*<br/>
[in] The distance, in pixels, away from the edge of a rectangle the pointer must be to enable docking.

### Return Value

One of the following status values:

|AFX_CS_STATUS value|Meaning|
|---------------------------|-------------|
|CS_NOTHING|The pointer is not over a dock site. The framework does not dock the pane.|
|CS_DOCK_IMMEDIATELY|The pointer is located over the dock site in immediate mode (the pane uses the DT_IMMEDIATE docking mode). The framework docks the pane immediately.|
|CS_DELAY_DOCK|The pointer is over a dock site that is another docking pane or is an edge of the main frame. The framework docks the pane after a delay. See the Remarks section for more information about this delay.|
|CS_DELAY_DOCK_TO_TAB|The pointer is located over a dock site that causes the pane to be docked in a tabbed window. This occurs when the pointer is located over the caption of another docking pane or over the tab area of a tabbed pane.|

### Remarks

The framework calls this method to handle docking of a floating pane.

For floating toolbars or docking panes that use the DT_IMMEDIATE docking mode, the framework delays the dock command to enable the user to move the window out of the client area of the parent frame before docking occurs. The length of the delay is measured in milliseconds and is controlled by the [CDockingManager::m_nTimeOutBeforeToolBarDock](../../mfc/reference/cdockingmanager-class.md#m_ntimeoutbeforetoolbardock) data member.. The default value of [CDockingManager::m_nTimeOutBeforeToolBarDock](../../mfc/reference/cdockingmanager-class.md#m_ntimeoutbeforetoolbardock) is 200. This behavior emulates the docking behavior of Microsoft Word 2007.

For delayed docking states (CS_DELAY_DOCK and CS_DELAY_DOCK_TO_TAB), the framework does not perform docking until the user releases the mouse button. If a pane uses the DT_STANDARD docking mode, the framework displays a rectangle at the projected docking location. If a pane uses the DT_SMART docking mode, the framework displays smart docking markers and semi-transparent rectangles at the projected docking location. To specify the docking mode for your pane, call the [CBasePane::SetDockingMode](../../mfc/reference/cbasepane-class.md#setdockingmode) method. For more information about smart docking, see [CDockingManager::GetSmartDockingParams](../../mfc/reference/cdockingmanager-class.md#getsmartdockingparams).

## <a name="getdragsensitivity"></a> CDockablePane::GetDragSensitivity

Returns the drag sensitivity of a docking pane.

```
static const CSize& GetDragSensitivity();
```

### Return Value

A [CSize](../../atl-mfc-shared/reference/csize-class.md) object that contains the width and height, in pixels, of a rectangle centered on a drag point. The drag operation does not begin until the mouse pointer moves outside this rectangle.

## <a name="getlastpercentinpanecontainer"></a> CDockablePane::GetLastPercentInPaneContainer

Retrieves the percentage of space that a pane occupies in its container ( [CPaneContainer Class](../../mfc/reference/cpanecontainer-class.md)).

```
int GetLastPercentInPaneContainer() const;
```

### Return Value

An *int* that specifies the percentage of space that the pane occupies in its container.

### Remarks

This method is used when the container adjusts its layout.

## <a name="gettabarea"></a> CDockablePane::GetTabArea

Retrieves the tab area for the pane.

```
virtual void GetTabArea(
    CRect& rectTabAreaTop,
    CRect& rectTabAreaBottom) const;
```

### Parameters

*rectTabAreaTop*<br/>
[in] `GetTabArea` fills this variable with the tab area if tabs are located at the top of the pane. If tabs are located at the bottom of the pane, this variable is filled with an empty rectangle.

*rectTabAreaBottom*<br/>
[in] `GetTabArea` fills this variable with the tab area if tabs are located at the bottom of the pane. If tabs are located at the top of the pane, this variable is filled with an empty rectangle.

### Remarks

This method is used only in classes that are derived from `CDockablePane` and have tabs. For more information, see [CTabbedPane::GetTabArea](../../mfc/reference/ctabbedpane-class.md#gettabarea) and [CMFCOutlookBar::GetTabArea](../../mfc/reference/cmfcoutlookbar-class.md#gettabarea).

## <a name="gettabbedpanertc"></a> CDockablePane::GetTabbedPaneRTC

Returns the runtime class information about a tabbed window that is created when another pane docks to the current pane.

```
CRuntimeClass* GetTabbedPaneRTC() const;
```

### Return Value

The runtime class information for the dockable pane.

### Remarks

Call this method to retrieve the runtime class information for tabbed panes that are created dynamically. This can occur when a user drags one pane to the caption of another pane, or if you call the [CDockablePane::AttachToTabWnd](#attachtotabwnd) method to programmatically create a tabbed pane from two dockable panes.

You can set the runtime class information by calling the [CDockablePane::SetTabbedPaneRTC](#settabbedpanertc) method.

## <a name="hasautohidemode"></a> CDockablePane::HasAutoHideMode

Specifies whether a docking pane can be switched to autohide mode.

```
virtual BOOL HasAutoHideMode() const;
```

### Return Value

TRUE if the dockable pane can be switched to autohide mode; otherwise, FALSE.

### Remarks

Override this method in a derived class to disable autohide mode for a specific dockable pane.

## <a name="hittest"></a> CDockablePane::HitTest

Specifies the location in a pane where the user clicks a mouse.

```
virtual int HitTest(
    CPoint point,
    BOOL bDetectCaption = FALSE);
```

### Parameters

*point*<br/>
[in] Specifies the point to test.

*bDetectCaption*<br/>
[in] TRUE if HTCAPTION should be returned if the point is on the pane's caption; otherwise, FALSE.

### Return Value

One of the following values:

- HTNOWHERE if *point* is not in the dockable pane.

- HTCLIENT if *point* is in the client area of the dockable pane.

- HTCAPTION if *point* is in the caption area of the dockable pane.

- AFX_HTCLOSE if *point* is on the close button.

- HTMAXBUTTON if *point* is on the pin button.

## <a name="isautohideallenabled"></a> CDockablePane::IsAutohideAllEnabled

Indicates whether the docking pane and all other panes in the container can be switched to autohide mode.

```
virtual BOOL IsAutohideAllEnabled() const;
```

### Return Value

TRUE if the dockable pane, and all other panes in the container, can be switched to autohide mode; otherwise, FALSE.

### Remarks

A user enables autohide mode by clicking the docking pin button while holding the **Ctrl** key

To enable or disable this behavior, call the [CDockablePane::EnableAutohideAll](#enableautohideall) method.

## <a name="isautohidemode"></a> CDockablePane::IsAutoHideMode

Determines whether a pane is in autohide mode.

```
virtual BOOL IsAutoHideMode() const;
```

### Return Value

TRUE if the dockable pane is in autohide mode; otherwise, FALSE.

## <a name="isdocked"></a> CDockablePane::IsDocked

Determines whether the current pane is docked.

```
virtual BOOL IsDocked() const;
```

### Return Value

TRUE if the dockable pane does not belong to a miniframe window or if it is floating in a miniframe window with another pane. FALSE if the pane is a child of a miniframe window and there are no other panes that belong to the miniframe window.

### Remarks

To determine whether the pane is docked to the main frame window, call [CDockablePane::GetDefaultPaneDivider](#getdefaultpanedivider). If the method returns a non-NULL pointer, the pane is docked at the main frame window.

## <a name="ishideinautohidemode"></a> CDockablePane::IsHideInAutoHideMode

Determines the behavior of a pane that is in autohide mode if it is shown (or hidden) by calling [CDockablePane::ShowPane](#showpane).

```
virtual BOOL IsHideInAutoHideMode() const;
```

### Return Value

TRUE if the dockable pane should be hidden when in autohide mode; otherwise, FALSE.

### Remarks

When a dockable pane is in autohide mode, it behaves differently when you call `ShowPane` to hide or show the pane. This behavior is controlled by the static member [CDockablePane::m_bHideInAutoHideMode](#m_bhideinautohidemode). If this member is TRUE, the dockable pane and its related autohide toolbar or autohide button is hidden or shown when you call `ShowPane`. Otherwise, the dockable pane is activated or deactivated, and its related autohide toolbar or autohide button is always visible.

Override this method in a derived class to change the default behavior for individual panes.

The default value for `m_bHideInAutoHideMode` is FALSE.

## <a name="isinfloatingmultipaneframewnd"></a> CDockablePane::IsInFloatingMultiPaneFrameWnd

Specifies whether the pane is in a multi-pane frame window ( [CMultiPaneFrameWnd Class](../../mfc/reference/cmultipaneframewnd-class.md)).

```
virtual BOOL IsInFloatingMultiPaneFrameWnd() const;
```

### Return Value

TRUE if the pane is in a multi-pane frame window; otherwise, FALSE.

### Remarks

## <a name="isresizable"></a> CDockablePane::IsResizable

Specifies whether the pane is resizable.

```
virtual BOOL IsResizable() const;
```

### Return Value

TRUE if the pane is resizable; otherwise, FALSE.

### Remarks

By default, dockable panes are resizable. To prevent resizing, override this method in a derived class and return FALSE. Note that a FALSE value leads to a failed **ASSERT** in [CPane::DockPane](../../mfc/reference/cpane-class.md#dockpane). Use [CDockingManager::AddPane](../../mfc/reference/cdockingmanager-class.md#addpane) instead to dock a pane within a parent frame.

Panes that cannot be resized can neither float nor enter auto-hide mode and are always located at the outer edge of the parent frame.

## <a name="istablocationbottom"></a> CDockablePane::IsTabLocationBottom

Specifies whether tabs are located at the top or bottom of the pane.

```
virtual BOOL IsTabLocationBottom() const;
```

### Return Value

TRUE if tabs are located at the bottom of the pane; FALSE if tabs are located at the top of the pane.

### Remarks

For more information, see [CTabbedPane::IsTabLocationBottom](../../mfc/reference/ctabbedpane-class.md#istablocationbottom).

## <a name="istracked"></a> CDockablePane::IsTracked

Specifies whether a pane is being moved by the user.

```
BOOL IsTracked() const;
```

### Return Value

TRUE if the pane is being moved; otherwise, FALSE.

## <a name="isvisible"></a> CDockablePane::IsVisible

Determines whether the current pane is visible.

```
virtual BOOL IsVisible() const;
```

### Return Value

TRUE if the dockable pane is visible; otherwise, FALSE.

### Remarks

Call this method to determine whether a dockable pane is visible. You can use this method instead of calling [CWnd::IsWindowVisible](../../mfc/reference/cwnd-class.md#iswindowvisible) or testing for the WS_VISIBLE style. The returned visibility state depends on whether autohide mode is enabled or disabled and on the value of the [CDockablePane::IsHideInAutoHideMode](#ishideinautohidemode) property.

If the dockable pane is in autohide mode and `IsHideInAutoHideMode` returns FALSE the visibility state is always FALSE.

If the dockable pane is in autohide mode and `IsHideInAutoHideMode` returns TRUE the visibility state depends on the visibility state of the related autohide toolbar.

If the dockable pane is not in autohide mode, the visibility state is determined by the [CBasePane::IsVisible](../../mfc/reference/cbasepane-class.md#isvisible) method.

## ##  <a name="loadstate"></a> CDockablePane::LoadState

For internal use only. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.

```
virtual BOOL LoadState(
   LPCTSTR lpszProfileName = NULL,
   int nIndex = -1,
   UINT uiID = (UINT) -1
);
```

## <a name="m_bdisableanimation"></a> CDockablePane::m_bDisableAnimation

Specifies whether autohide animation of the dockable pane is disabled.

```
AFX_IMPORT_DATA static BOOL m_bDisableAnimation;
```

## <a name="m_bhideinautohidemode"></a> CDockablePane::m_bHideInAutoHideMode

Determines the behavior of the pane when the pane is in autohide mode.

```
AFX_IMPORT_DATA static BOOL m_bHideInAutoHideMode;
```

### Remarks

This value affects all docking panes in the application.

If you set this member to TRUE, dockable panes are hidden or shown with their related autohide toolbars and buttons when you call [CDockablePane::ShowPane](#showpane).

If you set this member to FALSE, dockable panes are activated or deactivated when you call [CDockablePane::ShowPane](#showpane).

## <a name="m_nslidesteps"></a> CDockablePane::m_nSlideSteps

Specifies the animation speed of the pane when it is in autohide mode.

```
AFX_IMPORT_DATA static int m_nSlideSteps;
```

### Remarks

For a faster animation effect, decrease this value. For a slower animation effect, increase this value.

## <a name="onafterchangeparent"></a> CDockablePane::OnAfterChangeParent

For more detail see the source code located in the **VC\\atlmfc\\src\\mfc** folder of your Visual Studio installation.

```
virtual void OnAfterChangeParent(CWnd* pWndOldParent);
```

### Parameters

[in] *pWndOldParent*<br/>

### Remarks

## <a name="onafterdockfromminiframe"></a> CDockablePane::OnAfterDockFromMiniFrame

Called by the framework when a floating docking bar docks at a frame window.

```
virtual void OnAfterDockFromMiniFrame();
```

### Remarks

By default, this method does nothing.

## <a name="onbeforechangeparent"></a> CDockablePane::OnBeforeChangeParent

The framework calls this method before it changes the parent of the pane.

```
virtual void OnBeforeChangeParent(
    CWnd* pWndNewParent,
    BOOL bDelay = FALSE);
```

### Parameters

*pWndNewParent*<br/>
[in] A pointer to the new parent window.

*bDelay*<br/>
[in] BOOL that specifies whether to delay recalculation of the docking layout if the pane is undocked. For more information, see [CDockablePane::UndockPane](#undockpane).

### Remarks

If the pane is docked and the new parent does not allow docking, this method undocks the pane.

If the pane is being converted to a tabbed document, this method stores its recent docking position. The framework uses the recent docking position to restore the position of the pane when it is converted back to a docked state.

## <a name="onbeforefloat"></a> CDockablePane::OnBeforeFloat

The framework calls this method before a pane transitions to a floating state.

```
virtual BOOL OnBeforeFloat(
    CRect& rectFloat,
    AFX_DOCK_METHOD dockMethod);
```

### Parameters

*rectFloat*<br/>
[in] Specifies the position and size of the pane when it is in a floating state.

*dockMethod*<br/>
[in] Specifies the docking method. See [CPane::DockPane](../../mfc/reference/cpane-class.md#dockpane) for a list of possible values.

### Return Value

TRUE if the pane can be floated; otherwise, FALSE.

### Remarks

This method is called by the framework when a pane is about to float. You can override this method in a derived class if you want to perform any processing before the pane floats.

## <a name="onpressbuttons"></a> CDockablePane::OnPressButtons

Called when the user presses a caption button other than the AFX_HTCLOSE and AFX_HTMAXBUTTON buttons.

```
virtual void OnPressButtons(UINT nHit);
```

### Parameters

*nHit*<br/>
[in] This parameter is not used.

### Remarks

If you add a custom button to the caption of a dockable pane, override this method to receive notifications when a user presses the button.

## <a name="onslide"></a> CDockablePane::OnSlide

Called by the framework to animate the pane when it is in autohide mode.

```
virtual void OnSlide(BOOL bSlideOut);
```

### Parameters

*bSlideOut*<br/>
[in] TRUE to show the pane; FALSE to hide the pane.

### Remarks

Override this method in a derived class to implement custom autohide effects.

## <a name="removefromdefaultpanedividier"></a> CDockablePane::RemoveFromDefaultPaneDividier

The framework calls this method when a pane is being undocked.

```cpp
void RemoveFromDefaultPaneDividier();
```

### Remarks

This method sets the default pane divider to NULL and removes the pane from its container.

## <a name="replacepane"></a> CDockablePane::ReplacePane

Replaces the pane with a specified pane.

```
BOOL ReplacePane(
    CDockablePane* pBarToReplaceWith,
    AFX_DOCK_METHOD dockMethod,
    BOOL bRegisterWithFrame = FALSE);
```

### Parameters

*pBarToReplaceWith*<br/>
[in] A pointer to a dockable pane.

*dockMethod*<br/>
[in] Not used.

*bRegisterWithFrame*<br/>
[in] If TRUE, the new pane is registered with the docking manager of the parent of the old pane. The new pane is inserted at the index of the old pane in the list of panes that is maintained by the docking manager.

### Return Value

TRUE if the replacement is successful; otherwise, FALSE.

## <a name="restoredefaultpanedivider"></a> CDockablePane::RestoreDefaultPaneDivider

When a pane is deserialized, the framework calls this method to restore the default pane divider.

```cpp
void RestoreDefaultPaneDivider();
```

### Remarks

The restored default pane divider replaces the current default pane divider, if it exists.

## <a name="setautohidemode"></a> CDockablePane::SetAutoHideMode

Toggles the docking pane between visible and autohide mode.

```
virtual CMFCAutoHideBar* SetAutoHideMode(
    BOOL bMode,
    DWORD dwAlignment,
    CMFCAutoHideBar* pCurrAutoHideBar = NULL,
    BOOL bUseTimer = TRUE);
```

### Parameters

*bMode*<br/>
[in] TRUE to enable autohide mode; FALSE to enable regular docking mode.

*dwAlignment*<br/>
[in] Specifies the alignment of the autohide pane to create.

*pCurrAutoHideBar*<br/>
[in, out] A pointer to the current autohide toolbar. Can be NULL.

*bUseTimer*<br/>
[in] Specifies whether to use the autohide effect when the user switches the pane to autohide mode or to hide the pane immediately.

### Return Value

The autohide toolbar that was created as a result of switching to autohide mode, or NULL.

### Remarks

The framework calls this method when a user clicks the pin button to switch the dockable pane to autohide mode or to regular docking mode.

Call this method to switch a dockable pane to autohide mode programmatically. The pane must be docked to the main frame window ( [CDockablePane::GetDefaultPaneDivider](#getdefaultpanedivider) must return a valid pointer to the [CPaneDivider](../../mfc/reference/cpanedivider-class.md)).

## <a name="setautohideparents"></a> CDockablePane::SetAutoHideParents

Sets the auto-hide button and auto-hide toolbar for the pane.

```cpp
void SetAutoHideParents(
    CMFCAutoHideBar* pToolBar,
    CMFCAutoHideButton* pBtn);
```

### Parameters

*pToolBar*<br/>
[in] Pointer to an auto-hide toolbar.

*pBtn*<br/>
[in] Pointer to an auto-hide button.

## <a name="setlastpercentinpanecontainer"></a> CDockablePane::SetLastPercentInPaneContainer

Sets the percentage of space that a pane occupies in its container.

```cpp
void SetLastPercentInPaneContainer(int n);
```

### Parameters

*n*<br/>
[in] An **`int`** that specifies the percentage of space that the pane occupies in its container.

### Remarks

The framework adjusts the pane to use the new value when the layout is recalculated.

## <a name="setrestoreddefaultpanedivider"></a> CDockablePane::SetRestoredDefaultPaneDivider

Sets the restored default pane divider.

```cpp
void SetRestoredDefaultPaneDivider(HWND hRestoredSlider);
```

### Parameters

*hRestoredSlider*<br/>
[in] A handle to a pane divider (slider).

### Remarks

A restored default pane divider is obtained when a pane is deserialized. For more information, see [CDockablePane::RestoreDefaultPaneDivider](#restoredefaultpanedivider).

## <a name="settabbedpanertc"></a> CDockablePane::SetTabbedPaneRTC

Sets the runtime class information for a tabbed window that is created when two panes dock together.

```cpp
void SetTabbedPaneRTC(CRuntimeClass* pRTC);
```

### Parameters

*pRTC*<br/>
[in] The runtime class information for the tabbed pane.

### Remarks

Call this method to set the runtime class information for tabbed panes that are created dynamically. This can occur when a user drags one pane to the caption of another pane, or if you call the [CDockablePane::AttachToTabWnd](#attachtotabwnd) method to programmatically create a tabbed pane from two dockable panes.

The default runtime class is set according to the *dwTabbedStyle* parameter of [CDockablePane::Create](#create) and [CDockablePane::CreateEx](#createex). To customize the new tabbed panes, derive your class from one of the following classes:

- [CBaseTabbedPane Class](../../mfc/reference/cbasetabbedpane-class.md)

- [CTabbedPane Class](../../mfc/reference/ctabbedpane-class.md)

- [CMFCOutlookBar Class](../../mfc/reference/cmfcoutlookbar-class.md).

Then, call this method with the pointer to its runtime class information.

## <a name="showpane"></a> CDockablePane::ShowPane

Shows or hides a pane.

```
virtual void ShowPane(
    BOOL bShow,
    BOOL bDelay,
    BOOL bActivate);
```

### Parameters

*bShow*<br/>
[in] TRUE to show the pane; FALSE to hide the pane.

*bDelay*<br/>
[in] TRUE to delay adjusting the docking layout; FALSE to adjust the docking layout immediately.

*bActivate*<br/>
[in] TRUE to activate the pane when shown; otherwise, FALSE.

### Remarks

Call this method instead of the [CWnd::ShowWindow](../../mfc/reference/cwnd-class.md#showwindow) when showing or hiding dockable panes.

## <a name="slide"></a> CDockablePane::Slide

Animates a pane that is in autohide mode.

```
virtual void Slide(
    BOOL bSlideOut,
    BOOL bUseTimer = TRUE);
```

### Parameters

*bSlideOut*<br/>
[in] TRUE to show the pane; FALSE to hide the pane.

*bUseTimer*<br/>
[in] TRUE to show or hide the pane with the autohide effect; FALSE to show or hide the pane immediately.

### Remarks

The framework calls this method to animate a pane that is in autohide mode.

This method uses the `CDockablePane::m_nSlideDefaultTimeOut` value to determine the time out for the slide effect. The default value for the time out is 1. If you customize the autohide algorithm, modify this member to change the time out.

## <a name="toggleautohide"></a> CDockablePane::ToggleAutoHide

Toggles the pane between always visible and auto-hide mode.

```
virtual void ToggleAutoHide();
```

### Remarks

This method toggles auto-hide mode for the pane by calling [CDockablePane::SetAutoHideMode](#setautohidemode).

## <a name="undockpane"></a> CDockablePane::UndockPane

Undocks a pane from either the main frame window or a miniframe window container.

```
virtual void UndockPane(BOOL bDelay = FALSE);
```

### Parameters

*bDelay*<br/>
[in] TRUE to delay calculating the docking layout; FALSE to recalculate the docking layout immediately.

### Remarks

Call this method to undock a pane from the main frame window or from a multi-miniframe window container (a pane that is floating in a single miniframe window with other panes).

You must undock a pane before you perform any external operation that is not performed by the [CDockingManager](../../mfc/reference/cdockingmanager-class.md). For example, you must undock a pane to move it programmatically from one location to another.

The framework automatically undocks panes before they are destroyed.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CPane Class](../../mfc/reference/cpane-class.md)
