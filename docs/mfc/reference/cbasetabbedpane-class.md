---
description: "Learn more about: CBaseTabbedPane Class"
title: "CBaseTabbedPane Class"
ms.date: "11/04/2016"
f1_keywords: ["CBaseTabbedPane", "AFXBASETABBEDPANE/CBaseTabbedPane", "AFXBASETABBEDPANE/CBaseTabbedPane::AddTab", "AFXBASETABBEDPANE/CBaseTabbedPane::AllowDestroyEmptyTabbedPane", "AFXBASETABBEDPANE/CBaseTabbedPane::ApplyRestoredTabInfo", "AFXBASETABBEDPANE/CBaseTabbedPane::CanFloat", "AFXBASETABBEDPANE/CBaseTabbedPane::CanSetCaptionTextToTabName", "AFXBASETABBEDPANE/CBaseTabbedPane::ConvertToTabbedDocument", "AFXBASETABBEDPANE/CBaseTabbedPane::DetachPane", "AFXBASETABBEDPANE/CBaseTabbedPane::EnableSetCaptionTextToTabName", "AFXBASETABBEDPANE/CBaseTabbedPane::FillDefaultTabsOrderArray", "AFXBASETABBEDPANE/CBaseTabbedPane::FindBarByTabNumber", "AFXBASETABBEDPANE/CBaseTabbedPane::FindPaneByID", "AFXBASETABBEDPANE/CBaseTabbedPane::FloatTab", "AFXBASETABBEDPANE/CBaseTabbedPane::GetDefaultTabsOrder", "AFXBASETABBEDPANE/CBaseTabbedPane::GetFirstVisibleTab", "AFXBASETABBEDPANE/CBaseTabbedPane::GetMinSize", "AFXBASETABBEDPANE/CBaseTabbedPane::GetPaneIcon", "AFXBASETABBEDPANE/CBaseTabbedPane::GetPaneList", "AFXBASETABBEDPANE/CBaseTabbedPane::GetTabArea", "AFXBASETABBEDPANE/CBaseTabbedPane::GetTabsNum", "AFXBASETABBEDPANE/CBaseTabbedPane::GetUnderlyingWindow", "AFXBASETABBEDPANE/CBaseTabbedPane::GetVisibleTabsNum", "AFXBASETABBEDPANE/CBaseTabbedPane::HasAutoHideMode", "AFXBASETABBEDPANE/CBaseTabbedPane::IsHideSingleTab", "AFXBASETABBEDPANE/CBaseTabbedPane::RecalcLayout", "AFXBASETABBEDPANE/CBaseTabbedPane::RemovePane", "AFXBASETABBEDPANE/CBaseTabbedPane::SetAutoDestroy", "AFXBASETABBEDPANE/CBaseTabbedPane::SetAutoHideMode", "AFXBASETABBEDPANE/CBaseTabbedPane::ShowTab"]
helpviewer_keywords: ["CBaseTabbedPane [MFC], AddTab", "CBaseTabbedPane [MFC], AllowDestroyEmptyTabbedPane", "CBaseTabbedPane [MFC], ApplyRestoredTabInfo", "CBaseTabbedPane [MFC], CanFloat", "CBaseTabbedPane [MFC], CanSetCaptionTextToTabName", "CBaseTabbedPane [MFC], ConvertToTabbedDocument", "CBaseTabbedPane [MFC], DetachPane", "CBaseTabbedPane [MFC], EnableSetCaptionTextToTabName", "CBaseTabbedPane [MFC], FillDefaultTabsOrderArray", "CBaseTabbedPane [MFC], FindBarByTabNumber", "CBaseTabbedPane [MFC], FindPaneByID", "CBaseTabbedPane [MFC], FloatTab", "CBaseTabbedPane [MFC], GetDefaultTabsOrder", "CBaseTabbedPane [MFC], GetFirstVisibleTab", "CBaseTabbedPane [MFC], GetMinSize", "CBaseTabbedPane [MFC], GetPaneIcon", "CBaseTabbedPane [MFC], GetPaneList", "CBaseTabbedPane [MFC], GetTabArea", "CBaseTabbedPane [MFC], GetTabsNum", "CBaseTabbedPane [MFC], GetUnderlyingWindow", "CBaseTabbedPane [MFC], GetVisibleTabsNum", "CBaseTabbedPane [MFC], HasAutoHideMode", "CBaseTabbedPane [MFC], IsHideSingleTab", "CBaseTabbedPane [MFC], RecalcLayout", "CBaseTabbedPane [MFC], RemovePane", "CBaseTabbedPane [MFC], SetAutoDestroy", "CBaseTabbedPane [MFC], SetAutoHideMode", "CBaseTabbedPane [MFC], ShowTab"]
ms.assetid: f22c0080-5b29-4a0a-8f74-8f0a4cd2dbcf
---
# CBaseTabbedPane Class

Extends the functionality of the [CDockablePane Class](../../mfc/reference/cdockablepane-class.md) to support the creation of tabbed windows.

## Syntax

```
class CBaseTabbedPane : public CDockablePane
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|`CBaseTabbedPane::CBaseTabbedPane`|Default constructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CBaseTabbedPane::AddTab](#addtab)|Adds a new tab to a tabbed pane.|
|[CBaseTabbedPane::AllowDestroyEmptyTabbedPane](#allowdestroyemptytabbedpane)|Specifies whether an empty tabbed pane can be destroyed.|
|[CBaseTabbedPane::ApplyRestoredTabInfo](#applyrestoredtabinfo)|Applies tab settings, which are loaded from the registry, to a tabbed pane.|
|[CBaseTabbedPane::CanFloat](#canfloat)|Determines whether the pane can float. (Overrides [CBasePane::CanFloat](../../mfc/reference/cbasepane-class.md#canfloat).)|
|[CBaseTabbedPane::CanSetCaptionTextToTabName](#cansetcaptiontexttotabname)|Determines whether the caption for the tabbed pane should display the same text as the active tab.|
|[CBaseTabbedPane::ConvertToTabbedDocument](#converttotabbeddocument)|(Overrides [CDockablePane::ConvertToTabbedDocument](../../mfc/reference/cdockablepane-class.md#converttotabbeddocument).)|
|[CBaseTabbedPane::DetachPane](#detachpane)|Converts one or more dockable panes to MDI tabbed documents.|
|[CBaseTabbedPane::EnableSetCaptionTextToTabName](#enablesetcaptiontexttotabname)|Enables or disables the ability of the tabbed pane to synchronize caption text with the label text on the active tab.|
|[CBaseTabbedPane::FillDefaultTabsOrderArray](#filldefaulttabsorderarray)|Restores the internal tab order to a default state.|
|[CBaseTabbedPane::FindBarByTabNumber](#findbarbytabnumber)|Returns a pane that resides in a tab when the tab is identified by a zero-based tab index.|
|[CBaseTabbedPane::FindPaneByID](#findpanebyid)|Returns a pane that is identified by the pane ID.|
|[CBaseTabbedPane::FloatTab](#floattab)|Floats a pane, but only if the pane currently resides in a detachable tab.|
|[CBaseTabbedPane::GetDefaultTabsOrder](#getdefaulttabsorder)|Returns the default order of tabs in the pane.|
|[CBaseTabbedPane::GetFirstVisibleTab](#getfirstvisibletab)|Retrieves a pointer to the first displayed tab.|
|[CBaseTabbedPane::GetMinSize](#getminsize)|Retrieves the minimum allowed size for the pane. (Overrides [CPane::GetMinSize](../../mfc/reference/cpane-class.md#getminsize).)|
|[CBaseTabbedPane::GetPaneIcon](#getpaneicon)|Returns a handle to the pane icon. (Overrides [CBasePane::GetPaneIcon](../../mfc/reference/cbasepane-class.md#getpaneicon).)|
|[CBaseTabbedPane::GetPaneList](#getpanelist)|Returns a list of panes that are contained in the tabbed pane.|
|[CBaseTabbedPane::GetTabArea](#gettabarea)|Returns the bounding rectangles for the top and bottom tab areas.|
|[CBaseTabbedPane::GetTabsNum](#gettabsnum)|Returns the count of tabs in a tab window.|
|[CBaseTabbedPane::GetUnderlyingWindow](#getunderlyingwindow)|Gets the underlying (wrapped) tab window.|
|[CBaseTabbedPane::GetVisibleTabsNum](#getvisibletabsnum)|Returns the count of displayed tabs.|
|[CBaseTabbedPane::HasAutoHideMode](#hasautohidemode)|Determines whether the tabbed pane can be switched to auto-hide mode.|
|[CBaseTabbedPane::IsHideSingleTab](#ishidesingletab)|Determines whether the tabbed pane is hidden if only one tab is displayed.|
|`CBaseTabbedPane::LoadSiblingPaneIDs`|Used internally during serialization.|
|[CBaseTabbedPane::RecalcLayout](#recalclayout)|Recalculates layout information for the pane. (Overrides [CPane::RecalcLayout](../../mfc/reference/cpane-class.md#recalclayout).)|
|[CBaseTabbedPane::RemovePane](#removepane)|Removes a pane from the tabbed pane.|
|`CBaseTabbedPane::SaveSiblingBarIDs`|Used internally during serialization.|
|`CBaseTabbedPane::Serialize`|(Overrides [CDockablePane::Serialize](cdockablepane-class.md).)|
|`CBaseTabbedPane::SerializeTabWindow`|Used internally during serialization.|
|[CBaseTabbedPane::SetAutoDestroy](#setautodestroy)|Determines whether the tabbed control bar will be destroyed automatically.|
|[CBaseTabbedPane::SetAutoHideMode](#setautohidemode)|Toggles the docking pane between displayed and auto-hide mode. (Overrides [CDockablePane::SetAutoHideMode](../../mfc/reference/cdockablepane-class.md#setautohidemode).)|
|[CBaseTabbedPane::ShowTab](#showtab)|Shows or hides a tab.|

## Remarks

This class is an abstract class and cannot be instantiated. It implements the services that are common to all kinds of tabbed panes.

Currently, the library includes two derived tabbed pane classes: [CTabbedPane Class](../../mfc/reference/ctabbedpane-class.md) and [CMFCOutlookBar Class](../../mfc/reference/cmfcoutlookbar-class.md).

A `CBaseTabbedPane` object wraps a pointer to a [CMFCBaseTabCtrl Class](../../mfc/reference/cmfcbasetabctrl-class.md) object. [CMFCBaseTabCtrl Class](../../mfc/reference/cmfcbasetabctrl-class.md) then becomes a child window of the tabbed pane.

For more information about how to create tabbed panes, see [CDockablePane Class](../../mfc/reference/cdockablepane-class.md), [CTabbedPane Class](../../mfc/reference/ctabbedpane-class.md), and [CMFCOutlookBar Class](../../mfc/reference/cmfcoutlookbar-class.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CBasePane](../../mfc/reference/cbasepane-class.md)

[CPane](../../mfc/reference/cpane-class.md)

[CDockablePane](../../mfc/reference/cdockablepane-class.md)

`CBaseTabbedPane`

## Requirements

**Header:** afxBaseTabbedPane.h

## <a name="addtab"></a> CBaseTabbedPane::AddTab

Adds a new tab to a tabbed pane.

```
virtual BOOL AddTab(
    CWnd* pNewBar,
    BOOL bVisible = TRUE,
    BOOL bSetActive = TRUE,
    BOOL bDetachable = TRUE);
```

### Parameters

*pNewBar*<br/>
[in, out] A pointer to the pane to add. This pointer may become invalid after you call this method. For more information, see the Remarks section.

*bVisible*<br/>
[in] TRUE to make the tab visible; otherwise, FALSE.

*bSetActive*<br/>
[in] TRUE to make the tab the active tab; otherwise, FALSE.

*bDetachable*<br/>
[in] TRUE to make the tab detachable; otherwise, FALSE.

### Return Value

TRUE if the pane was successfully added as a tab and was not destroyed in the process. FALSE if the pane being added is an object of type `CBaseTabbedPane`. For more information, see the Remarks section.

### Remarks

Call this method to add a pane as a new tab on a tabbed pane. If *pNewBar* points to an object of type `CBaseTabbedPane`, all its tabs are copied onto the tabbed pane and then *pNewBar* is destroyed. Thus, *pNewBar* becomes an invalid pointer and should not be used.

## <a name="allowdestroyemptytabbedpane"></a> CBaseTabbedPane::AllowDestroyEmptyTabbedPane

Specifies whether an empty tabbed pane can be destroyed.

```
virtual BOOL AllowDestroyEmptyTabbedPane() const;
```

### Return Value

TRUE if an empty tabbed pane can be destroyed; otherwise, FALSE. The default implementation always returns TRUE.

### Remarks

If an empty tabbed pane is not allowed to be destroyed, the framework hides the pane instead.

## <a name="applyrestoredtabinfo"></a> CBaseTabbedPane::ApplyRestoredTabInfo

Loads tab settings from the registry and applies them to a tabbed pane.

```
virtual void ApplyRestoredTabInfo(BOOL bUseTabIndexes = FALSE);
```

### Parameters

*bUseTabIndexes*<br/>
[in] This parameter is used internally by the framework.

### Remarks

This method is called by the framework when it reloads docking state information from the registry. The method obtains information about tab order and tab names for a tabbed pane.

## <a name="canfloat"></a> CBaseTabbedPane::CanFloat

Specifies whether the tabbed pane can float.

```
virtual BOOL CanFloat() const;
```

### Return Value

TRUE if the pane can float; otherwise, FALSE.

## <a name="cansetcaptiontexttotabname"></a> CBaseTabbedPane::CanSetCaptionTextToTabName

Determines whether the caption for the tabbed pane should display the same text as the active tab.

```
virtual BOOL CanSetCaptionTextToTabName() const;
```

### Return Value

TRUE if the caption text of the tabbed pane is set to the text of the active tab; otherwise, FALSE.

### Remarks

The method is used to determine whether the text displayed on the tabbed pane caption duplicates the label of the active tab. You can enable or disable this functionality by calling [CBaseTabbedPane::EnableSetCaptionTextToTabName](#enablesetcaptiontexttotabname).

## <a name="converttotabbeddocument"></a> CBaseTabbedPane::ConvertToTabbedDocument

Converts one or more dockable panes to MDI tabbed documents.

```
virtual void ConvertToTabbedDocument(BOOL bActiveTabOnly = TRUE);
```

### Parameters

*bActiveTabOnly*<br/>
[in] When you convert a tabbed pane, specify TRUE to convert only the active tab. Specify FALSE to convert all tabs in the pane.

## <a name="detachpane"></a> CBaseTabbedPane::DetachPane

Detaches a pane from the tabbed pane.

```
virtual BOOL DetachPane(
    CWnd* pBar,
    BOOL bHide = FALSE);
```

### Parameters

*pBar*<br/>
[in] Pointer to the pane to detach.

*bHide*<br/>
[in] Boolean parameter that specifies whether the framework hides the pane after it is detached.

### Return Value

TRUE if the framework successfully detaches the pane; FALSE if *pBar* is NULL or refers to a pane that is not in the tabbed pane.

### Remarks

The framework floats the detached pane if possible. For more information, see [CBasePane::CanFloat](../../mfc/reference/cbasepane-class.md#canfloat).

## <a name="enablesetcaptiontexttotabname"></a> CBaseTabbedPane::EnableSetCaptionTextToTabName

Enables or disables the ability of the tabbed pane to synchronize caption text with the label text on the active tab.

```
virtual void EnableSetCaptionTextToTabName(BOOL bEnable);
```

### Parameters

*bEnable*<br/>
[in] TRUE to synchronize the tabbed pane caption with the active tab caption; otherwise, FALSE.

## <a name="filldefaulttabsorderarray"></a> CBaseTabbedPane::FillDefaultTabsOrderArray

Restores the internal tab order to a default state.

```cpp
void FillDefaultTabsOrderArray();
```

### Remarks

This method is called when the framework restores an Outlook bar to an initial state.

## <a name="findpanebyid"></a> CBaseTabbedPane::FindPaneByID

Returns a pane identified by the pane ID.

```
virtual CWnd* FindPaneByID(UINT uBarID);
```

### Parameters

*uBarID*<br/>
[in] Specifies the ID of the pane to find.

### Return Value

A pointer to the pane if it was found; otherwise, NULL.

### Remarks

This method compares all tabs in the pane and returns the one with the ID specified by the *uBarID* parameter.

## <a name="findbarbytabnumber"></a> CBaseTabbedPane::FindBarByTabNumber

Returns a pane that resides in a tab.

```
virtual CWnd* FindBarByTabNumber(
    int nTabNum,
    BOOL bGetWrappedBar = FALSE);
```

### Parameters

*nTabNum*<br/>
[in] Specifies the zero-based index of the tab to retrieve.

*bGetWrappedBar*<br/>
[in] TRUE to return the underlying (wrapped) window of the pane instead of the pane itself; otherwise FALSE. This only applies to panes derived from [CDockablePaneAdapter](../../mfc/reference/cdockablepaneadapter-class.md).

### Return Value

If the pane is found, then a valid pointer to the pane being searched for is returned; otherwise, NULL.

### Remarks

Call this method to retrieve the pane residing in the tab specified by the *nTabNum* parameter.

## <a name="floattab"></a> CBaseTabbedPane::FloatTab

Floats a pane, but only if the pane currently resides in a detachable tab.

```
virtual BOOL FloatTab(
    CWnd* pBar,
    int nTabID,
    AFX_DOCK_METHOD dockMethod,
    BOOL bHide = FALSE);
```

### Parameters

*pBar*<br/>
[in, out] A pointer to the pane to float.

*nTabID*<br/>
[in] Specifies the zero-based index of the tab to float.

*dockMethod*<br/>
[in] Specifies the method to use to make the pane float. For more information, see the Remarks section.

*bHide*<br/>
[in] TRUE to hide the pane before floating; otherwise, FALSE.

### Return Value

TRUE if the pane floated; otherwise, FALSE.

### Remarks

Call this method to float a pane that currently resides in a detachable tab.

If you want to detach a pane programmatically, specify DM_SHOW for the *dockMethod* parameter. If you want to float the pane in the same position where it floated previously, specify DM_DBL_CLICK as the *dockMethod* parameter.

## <a name="getdefaulttabsorder"></a> CBaseTabbedPane::GetDefaultTabsOrder

Returns the default order of tabs in the pane.

```
const CArray<int,int>& GetDefaultTabsOrder();
```

### Return Value

A `CArray` object that specifies the default order of tabs in the pane.

### Remarks

The framework calls this method when an Outlook bar is reset to an initial state.

## <a name="getfirstvisibletab"></a> CBaseTabbedPane::GetFirstVisibleTab

Retrieves a pointer to the first displayed tab.

```
virtual CWnd* GetFirstVisibleTab(int& iTabNum);
```

### Parameters

*iTabNum*<br/>
[in] A reference to an integer. This method writes the zero-based index of the first displayed tab to this parameter, or -1 if no displayed tab is found.

### Return Value

If successful, a pointer to the first displayed tab; otherwise, NULL.

## <a name="getminsize"></a> CBaseTabbedPane::GetMinSize

Retrieves the minimum allowed size for the pane.

```
virtual void GetMinSize(CSize& size) const;
```

### Parameters

*size*<br/>
[out] A `CSize` object that is filled with the minimum allowed size.

### Remarks

If consistent handling of minimum pane sizes is active ( [CPane::m_bHandleMinSize](../../mfc/reference/cpane-class.md#m_bhandleminsize)), *size* is filled with the minimum allowed size for the active tab. Otherwise, *size* is filled with the return value of [CPane::GetMinSize](../../mfc/reference/cpane-class.md#getminsize).

## <a name="getpaneicon"></a> CBaseTabbedPane::GetPaneIcon

Retrieves the minimum allowed size for the pane.

```
virtual void GetMinSize(CSize& size) const;
```

### Parameters

*size*<br/>
[out] A `CSize` object that is filled with the minimum allowed size.

### Remarks

If consistent handling of minimum pane sizes is active ( [CPane::m_bHandleMinSize](../../mfc/reference/cpane-class.md#m_bhandleminsize)), *size* is filled with the minimum allowed size for the active tab. Otherwise, *size* is filled with the return value of [CPane::GetMinSize](../../mfc/reference/cpane-class.md#getminsize).

## <a name="getpanelist"></a> CBaseTabbedPane::GetPaneList

Returns a list of panes that are contained in the tabbed pane.

```
virtual void GetPaneList(
    CObList& lst,
    CRuntimeClass* pRTCFilter = NULL);
```

### Parameters

*lst*<br/>
[out] A `CObList` that is filled with the panes that are contained in the tabbed pane.

*pRTCFilter*<br/>
[in] If it is not NULL, the returned list contains only panes that are of the specified runtime class.

## <a name="gettabarea"></a> CBaseTabbedPane::GetTabArea

Returns the bounding rectangles for the top and bottom tab areas.

```
virtual void GetTabArea(
    CRect& rectTabAreaTop,
    CRect& rectTabAreaBottom) const = 0;
```

### Parameters

*rectTabAreaTop*<br/>
[out] Receives the screen coordinates of the upper tab area.

*rectTabAreaBottom*<br/>
[out] Receives the screen coordinates of the lower tab area.

### Remarks

Call this method to determine the bounding rectangles, in screen coordinates, for the upper and lower tab areas.

## <a name="gettabsnum"></a> CBaseTabbedPane::GetTabsNum

Returns the count of tabs in a tab window.

```
virtual int GetTabsNum() const;
```

### Return Value

The number of tabs in the tabbed pane.

## <a name="getunderlyingwindow"></a> CBaseTabbedPane::GetUnderlyingWindow

Gets the underlying (wrapped) tab window.

```
virtual CMFCBaseTabCtrl* GetUnderlyingWindow();
```

### Return Value

A pointer to the underlying tab window.

## <a name="getvisibletabsnum"></a> CBaseTabbedPane::GetVisibleTabsNum

Returns the count of visible tabs.

```
virtual int GetVisibleTabsNum() const;
```

### Return Value

The number of visible tabs, which will be greater than or equal to zero.

### Remarks

Call this method to determine the number of visible tabs in the tabbed pane.

## <a name="hasautohidemode"></a> CBaseTabbedPane::HasAutoHideMode

Determines whether the tabbed pane can be switched to autohide mode.

```
virtual BOOL HasAutoHideMode() const;
```

### Return Value

TRUE if the pane can be switched to autohide mode; otherwise, FALSE.

### Remarks

If autohide mode is disabled, no pin button is displayed on the tabbed pane caption.

## <a name="ishidesingletab"></a> CBaseTabbedPane::IsHideSingleTab

Determines whether the tabbed pane is hidden if only one tab is displayed.

```
virtual BOOL IsHideSingleTab() const;
```

### Return Value

TRUE if the tab window is not shown when there is only one visible tab; otherwise, FALSE.

### Remarks

If the pane is not displayed because only one tab is open, you can call this method to determine whether the tabbed pane is working correctly.

## <a name="removepane"></a> CBaseTabbedPane::RemovePane

Removes a pane from the tabbed pane.

```
virtual BOOL RemovePane(CWnd* pBar);
```

### Parameters

*pBar*<br/>
[in, out] A pointer to the pane to remove from the tabbed pane.

### Return Value

TRUE if the pane was successfully removed from the tabbed pane and if the tabbed pane is still valid. FALSE if the last pane has been removed from the tabbed pane and the tabbed pane is about to be destroyed. If the return value is FALSE, do not use the tabbed pane any more.

### Remarks

Call this method to remove the pane specified by the *pBar* parameter from the tabbed pane.

## <a name="setautodestroy"></a> CBaseTabbedPane::SetAutoDestroy

Determines whether the tabbed control bar will be destroyed automatically.

```cpp
void SetAutoDestroy(BOOL bAutoDestroy = TRUE);
```

### Parameters

*bAutoDestroy*<br/>
[in] TRUE if the tabbed pane was created dynamically and you are not controlling its lifetime; otherwise, FALSE.

### Remarks

Set the auto-destroy mode to TRUE if you create a tabbed pane dynamically and if you are not controlling its lifetime. If auto-destroy mode is TRUE, the tabbed pane will be destroyed automatically by the framework.

## <a name="showtab"></a> CBaseTabbedPane::ShowTab

Shows or hides a tab.

```
virtual BOOL ShowTab(
    CWnd* pBar,
    BOOL bShow,
    BOOL bDelay,
    BOOL bActivate);
```

### Parameters

*pBar*<br/>
[in] A pointer to the pane to show or hide.

*bShow*<br/>
[in] TRUE to show the pane; FALSE to hide the pane.

*bDelay*<br/>
[in] TRUE to delay the adjustment of the tab layout; otherwise, FALSE.

*bActivate*<br/>
[in] TRUE to make the tab the active tab; otherwise, FALSE.

### Return Value

TRUE if the tab was either shown or hidden successfully; otherwise, FALSE.

### Remarks

When you call this method, a pane is either shown or hidden, depending on the value of the *bShow* parameter. If you hide a tab and it is the last visible tab in the underlying tab window, the tabbed pane is hidden. If you show a tab when there were previously no tabs visible, the tabbed pane is shown.

## <a name="recalclayout"></a> CBaseTabbedPane::RecalcLayout

Recalculates layout information for the pane.

```
virtual void RecalcLayout();
```

### Remarks

If the pane is floating, this method notifies the framework to resize the pane to the current size of the mini-frame.

If the pane is docked, this method does nothing.

## <a name="setautohidemode"></a> CBaseTabbedPane::SetAutoHideMode

Sets the auto-hide mode for detachable panes in the tabbed pane.

```
virtual CMFCAutoHideToolBar* SetAutoHideMode(
    BOOL bMode,
    DWORD dwAlignment,
    CMFCAutoHideToolBar* pCurrAutoHideBar = NULL,
    BOOL bUseTimer = TRUE);
```

### Parameters

*bMode*<br/>
[in] TRUE to enable auto-hide mode; FALSE to enable regular docking mode.

*dwAlignment*<br/>
[in] Specifies the alignment of the auto-hide pane that is to be created. For a list of possible values, see [CPane::MoveByAlignment](../../mfc/reference/cpane-class.md#movebyalignment).

*pCurrAutoHideBar*<br/>
[in, out] A pointer to the current auto-hide toolbar. Can be NULL.

*bUseTimer*<br/>
[in] Specifies whether to use the auto-hide effect when the user switches the pane to auto-hide mode, or to hide the pane immediately.

### Return Value

A pointer to the auto-hide toolbar that is created when switching to auto-hide mode, or NULL if no toolbar is created.

### Remarks

The framework calls this method when a user chooses the pin button to switch the tabbed pane to auto-hide mode or to regular docking mode.

Auto-hide mode is set for each detachable pane in the tabbed pane. Panes that are non-detachable are ignored. For more information, see [CMFCBaseTabCtrl::EnableTabDetach](../../mfc/reference/cmfcbasetabctrl-class.md#enabletabdetach).

Call this method to switch a tabbed pane to auto-hide mode programmatically. The pane must be docked to the main frame window ( [CDockablePane::GetDefaultPaneDivider](../../mfc/reference/cdockablepane-class.md#getdefaultpanedivider) must return a valid pointer to the [CPaneDivider](../../mfc/reference/cpanedivider-class.md)).

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CDockablePane Class](../../mfc/reference/cdockablepane-class.md)
