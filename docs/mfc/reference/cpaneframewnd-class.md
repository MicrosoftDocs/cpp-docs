---
description: "Learn more about: CPaneFrameWnd Class"
title: "CPaneFrameWnd Class"
ms.date: "11/04/2016"
f1_keywords: ["CPaneFrameWnd", "AFXPANEFRAMEWND/CPaneFrameWnd", "AFXPANEFRAMEWND/CPaneFrameWnd::AddPane", "AFXPANEFRAMEWND/CPaneFrameWnd::AddRemovePaneFromGlobalList", "AFXPANEFRAMEWND/CPaneFrameWnd::AdjustLayout", "AFXPANEFRAMEWND/CPaneFrameWnd::AdjustPaneFrames", "AFXPANEFRAMEWND/CPaneFrameWnd::CalcBorderSize", "AFXPANEFRAMEWND/CPaneFrameWnd::CalcExpectedDockedRect", "AFXPANEFRAMEWND/CPaneFrameWnd::CanBeAttached", "AFXPANEFRAMEWND/CPaneFrameWnd::CanBeDockedToPane", "AFXPANEFRAMEWND/CPaneFrameWnd::CheckGripperVisibility", "AFXPANEFRAMEWND/CPaneFrameWnd::ConvertToTabbedDocument", "AFXPANEFRAMEWND/CPaneFrameWnd::Create", "AFXPANEFRAMEWND/CPaneFrameWnd::CreateEx", "AFXPANEFRAMEWND/CPaneFrameWnd::DockPane", "AFXPANEFRAMEWND/CPaneFrameWnd::FindFloatingPaneByID", "AFXPANEFRAMEWND/CPaneFrameWnd::FrameFromPoint", "AFXPANEFRAMEWND/CPaneFrameWnd::GetCaptionHeight", "AFXPANEFRAMEWND/CPaneFrameWnd::GetCaptionRect", "AFXPANEFRAMEWND/CPaneFrameWnd::GetCaptionText", "AFXPANEFRAMEWND/CPaneFrameWnd::GetDockingManager", "AFXPANEFRAMEWND/CPaneFrameWnd::GetDockingMode", "AFXPANEFRAMEWND/CPaneFrameWnd::GetFirstVisiblePane", "AFXPANEFRAMEWND/CPaneFrameWnd::GetHotPoint", "AFXPANEFRAMEWND/CPaneFrameWnd::GetPane", "AFXPANEFRAMEWND/CPaneFrameWnd::GetPaneCount", "AFXPANEFRAMEWND/CPaneFrameWnd::GetParent", "AFXPANEFRAMEWND/CPaneFrameWnd::GetPinState", "AFXPANEFRAMEWND/CPaneFrameWnd::GetRecentFloatingRect", "AFXPANEFRAMEWND/CPaneFrameWnd::GetVisiblePaneCount", "AFXPANEFRAMEWND/CPaneFrameWnd::HitTest", "AFXPANEFRAMEWND/CPaneFrameWnd::IsCaptured", "AFXPANEFRAMEWND/CPaneFrameWnd::IsDelayShow", "AFXPANEFRAMEWND/CPaneFrameWnd::IsRollDown", "AFXPANEFRAMEWND/CPaneFrameWnd::IsRollUp", "AFXPANEFRAMEWND/CPaneFrameWnd::KillDockingTimer", "AFXPANEFRAMEWND/CPaneFrameWnd::LoadState", "AFXPANEFRAMEWND/CPaneFrameWnd::OnBeforeDock", "AFXPANEFRAMEWND/CPaneFrameWnd::OnDockToRecentPos", "AFXPANEFRAMEWND/CPaneFrameWnd::OnKillRollUpTimer", "AFXPANEFRAMEWND/CPaneFrameWnd::OnMovePane", "AFXPANEFRAMEWND/CPaneFrameWnd::OnPaneRecalcLayout", "AFXPANEFRAMEWND/CPaneFrameWnd::OnSetRollUpTimer", "AFXPANEFRAMEWND/CPaneFrameWnd::OnShowPane", "AFXPANEFRAMEWND/CPaneFrameWnd::PaneFromPoint", "AFXPANEFRAMEWND/CPaneFrameWnd::Pin", "AFXPANEFRAMEWND/CPaneFrameWnd::RedrawAll", "AFXPANEFRAMEWND/CPaneFrameWnd::RemoveNonValidPanes", "AFXPANEFRAMEWND/CPaneFrameWnd::RemovePane", "AFXPANEFRAMEWND/CPaneFrameWnd::ReplacePane", "AFXPANEFRAMEWND/CPaneFrameWnd::SaveState", "AFXPANEFRAMEWND/CPaneFrameWnd::SetCaptionButtons", "AFXPANEFRAMEWND/CPaneFrameWnd::SetDelayShow", "AFXPANEFRAMEWND/CPaneFrameWnd::SetDockingManager", "AFXPANEFRAMEWND/CPaneFrameWnd::SetDockingTimer", "AFXPANEFRAMEWND/CPaneFrameWnd::SetDockState", "AFXPANEFRAMEWND/CPaneFrameWnd::SetHotPoint", "AFXPANEFRAMEWND/CPaneFrameWnd::SetPreDockState", "AFXPANEFRAMEWND/CPaneFrameWnd::SizeToContent", "AFXPANEFRAMEWND/CPaneFrameWnd::StartTearOff", "AFXPANEFRAMEWND/CPaneFrameWnd::StoreRecentDockSiteInfo", "AFXPANEFRAMEWND/CPaneFrameWnd::StoreRecentTabRelatedInfo", "AFXPANEFRAMEWND/CPaneFrameWnd::OnCheckRollState", "AFXPANEFRAMEWND/CPaneFrameWnd::OnDrawBorder", "AFXPANEFRAMEWND/CPaneFrameWnd::m_bUseSaveBits"]
helpviewer_keywords: ["CPaneFrameWnd [MFC], AddPane", "CPaneFrameWnd [MFC], AddRemovePaneFromGlobalList", "CPaneFrameWnd [MFC], AdjustLayout", "CPaneFrameWnd [MFC], AdjustPaneFrames", "CPaneFrameWnd [MFC], CalcBorderSize", "CPaneFrameWnd [MFC], CalcExpectedDockedRect", "CPaneFrameWnd [MFC], CanBeAttached", "CPaneFrameWnd [MFC], CanBeDockedToPane", "CPaneFrameWnd [MFC], CheckGripperVisibility", "CPaneFrameWnd [MFC], ConvertToTabbedDocument", "CPaneFrameWnd [MFC], Create", "CPaneFrameWnd [MFC], CreateEx", "CPaneFrameWnd [MFC], DockPane", "CPaneFrameWnd [MFC], FindFloatingPaneByID", "CPaneFrameWnd [MFC], FrameFromPoint", "CPaneFrameWnd [MFC], GetCaptionHeight", "CPaneFrameWnd [MFC], GetCaptionRect", "CPaneFrameWnd [MFC], GetCaptionText", "CPaneFrameWnd [MFC], GetDockingManager", "CPaneFrameWnd [MFC], GetDockingMode", "CPaneFrameWnd [MFC], GetFirstVisiblePane", "CPaneFrameWnd [MFC], GetHotPoint", "CPaneFrameWnd [MFC], GetPane", "CPaneFrameWnd [MFC], GetPaneCount", "CPaneFrameWnd [MFC], GetParent", "CPaneFrameWnd [MFC], GetPinState", "CPaneFrameWnd [MFC], GetRecentFloatingRect", "CPaneFrameWnd [MFC], GetVisiblePaneCount", "CPaneFrameWnd [MFC], HitTest", "CPaneFrameWnd [MFC], IsCaptured", "CPaneFrameWnd [MFC], IsDelayShow", "CPaneFrameWnd [MFC], IsRollDown", "CPaneFrameWnd [MFC], IsRollUp", "CPaneFrameWnd [MFC], KillDockingTimer", "CPaneFrameWnd [MFC], LoadState", "CPaneFrameWnd [MFC], OnBeforeDock", "CPaneFrameWnd [MFC], OnDockToRecentPos", "CPaneFrameWnd [MFC], OnKillRollUpTimer", "CPaneFrameWnd [MFC], OnMovePane", "CPaneFrameWnd [MFC], OnPaneRecalcLayout", "CPaneFrameWnd [MFC], OnSetRollUpTimer", "CPaneFrameWnd [MFC], OnShowPane", "CPaneFrameWnd [MFC], PaneFromPoint", "CPaneFrameWnd [MFC], Pin", "CPaneFrameWnd [MFC], RedrawAll", "CPaneFrameWnd [MFC], RemoveNonValidPanes", "CPaneFrameWnd [MFC], RemovePane", "CPaneFrameWnd [MFC], ReplacePane", "CPaneFrameWnd [MFC], SaveState", "CPaneFrameWnd [MFC], SetCaptionButtons", "CPaneFrameWnd [MFC], SetDelayShow", "CPaneFrameWnd [MFC], SetDockingManager", "CPaneFrameWnd [MFC], SetDockingTimer", "CPaneFrameWnd [MFC], SetDockState", "CPaneFrameWnd [MFC], SetHotPoint", "CPaneFrameWnd [MFC], SetPreDockState", "CPaneFrameWnd [MFC], SizeToContent", "CPaneFrameWnd [MFC], StartTearOff", "CPaneFrameWnd [MFC], StoreRecentDockSiteInfo", "CPaneFrameWnd [MFC], StoreRecentTabRelatedInfo", "CPaneFrameWnd [MFC], OnCheckRollState", "CPaneFrameWnd [MFC], OnDrawBorder", "CPaneFrameWnd [MFC], m_bUseSaveBits"]
ms.assetid: ea3423a3-2763-482e-b763-817036ded10d
---
# CPaneFrameWnd Class

For more detail see the source code located in the **VC\\atlmfc\\src\\mfc** folder of your Visual Studio installation.

Implements a mini-frame window that contains one pane. The pane fills the client area of the window.

## Syntax

```
class CPaneFrameWnd : public CWnd
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[CPaneFrameWnd::AddPane](#addpane)|Adds a pane.|
|[CPaneFrameWnd::AddRemovePaneFromGlobalList](#addremovepanefromgloballist)|Adds or removes a pane from the global list.|
|[CPaneFrameWnd::AdjustLayout](#adjustlayout)|Adjusts the layout of the mini-frame window.|
|[CPaneFrameWnd::AdjustPaneFrames](#adjustpaneframes)||
|[CPaneFrameWnd::CalcBorderSize](#calcbordersize)|Calculates the size of the borders for a mini-frame window.|
|[CPaneFrameWnd::CalcExpectedDockedRect](#calcexpecteddockedrect)|Calculate the expected rectangle of a docked window.|
|[CPaneFrameWnd::CanBeAttached](#canbeattached)|Determines whether the current pane can be docked to another pane or frame window.|
|[CPaneFrameWnd::CanBeDockedToPane](#canbedockedtopane)|Determines whether the mini-frame window can be docked to a pane.|
|[CPaneFrameWnd::CheckGripperVisibility](#checkgrippervisibility)||
|[CPaneFrameWnd::ConvertToTabbedDocument](#converttotabbeddocument)|Converts the pane to a tabbed document.|
|[CPaneFrameWnd::Create](#create)|Creates a mini-frame window and attaches it to the `CPaneFrameWnd` object.|
|[CPaneFrameWnd::CreateEx](#createex)|Creates a mini-frame window and attaches it to the `CPaneFrameWnd` object.|
|[CPaneFrameWnd::DockPane](#dockpane)|Docks the pane.|
|[CPaneFrameWnd::FindFloatingPaneByID](#findfloatingpanebyid)|Finds a pane with the specified control ID in the global list of floating panes.|
|[CPaneFrameWnd::FrameFromPoint](#framefrompoint)|Finds the mini-frame window containing a user-supplied point.|
|[CPaneFrameWnd::GetCaptionHeight](#getcaptionheight)|Returns the height of the mini-frame window caption.|
|[CPaneFrameWnd::GetCaptionRect](#getcaptionrect)|Calculates the bounding rectangle of a mini-frame window caption.|
|[CPaneFrameWnd::GetCaptionText](#getcaptiontext)|Returns the caption text.|
|[CPaneFrameWnd::GetDockingManager](#getdockingmanager)||
|[CPaneFrameWnd::GetDockingMode](#getdockingmode)|Returns the docking mode.|
|[CPaneFrameWnd::GetFirstVisiblePane](#getfirstvisiblepane)|Returns the first visible pane that is contained in a mini-frame window.|
|[CPaneFrameWnd::GetHotPoint](#gethotpoint)||
|[CPaneFrameWnd::GetPane](#getpane)|Returns a pane that is contained in the mini-frame window.|
|[CPaneFrameWnd::GetPaneCount](#getpanecount)|Returns the number of panes that are contained in a mini-frame window.|
|[CPaneFrameWnd::GetParent](#getparent)||
|[CPaneFrameWnd::GetPinState](#getpinstate)||
|[CPaneFrameWnd::GetRecentFloatingRect](#getrecentfloatingrect)||
|[CPaneFrameWnd::GetVisiblePaneCount](#getvisiblepanecount)|Returns the number of visible panes that are contained in a mini-frame window.|
|[CPaneFrameWnd::HitTest](#hittest)|Determines what part of a mini-frame window is at a given point.|
|[CPaneFrameWnd::IsCaptured](#iscaptured)||
|[CPaneFrameWnd::IsDelayShow](#isdelayshow)||
|[CPaneFrameWnd::IsRollDown](#isrolldown)|Determines whether a mini-frame window should be rolled down.|
|[CPaneFrameWnd::IsRollUp](#isrollup)|Determines whether a mini-frame window should be rolled up.|
|[CPaneFrameWnd::KillDockingTimer](#killdockingtimer)|Stops the docking timer.|
|[CPaneFrameWnd::LoadState](#loadstate)|Loads the pane's state from the registry.|
|[CPaneFrameWnd::OnBeforeDock](#onbeforedock)|Determines if docking is possible.|
|[CPaneFrameWnd::OnDockToRecentPos](#ondocktorecentpos)|Docks the mini-frame window at its most recent position.|
|[CPaneFrameWnd::OnKillRollUpTimer](#onkillrolluptimer)|Stops the rollup timer.|
|[CPaneFrameWnd::OnMovePane](#onmovepane)|Moves the mini-frame window by a specified offset.|
|[CPaneFrameWnd::OnPaneRecalcLayout](#onpanerecalclayout)|Adjusts the layout of a contained pane.|
|[CPaneFrameWnd::OnSetRollUpTimer](#onsetrolluptimer)|Sets the rollup timer.|
|[CPaneFrameWnd::OnShowPane](#onshowpane)|Called by the framework when a pane in the mini-frame window is hidden or displayed.|
|[CPaneFrameWnd::PaneFromPoint](#panefrompoint)|Returns a pane if it contains a user-supplied point inside a mini-frame window.|
|[CPaneFrameWnd::Pin](#pin)||
|`CPaneFrameWnd::PreTranslateMessage`|Used by class [CWinApp](../../mfc/reference/cwinapp-class.md) to translate window messages before they are dispatched to the [TranslateMessage](/windows/win32/api/winuser/nf-winuser-translatemessage) and [DispatchMessage](/windows/win32/api/winuser/nf-winuser-dispatchmessage) Windows functions.|
|[CPaneFrameWnd::RedrawAll](#redrawall)|Redraws all mini-frame windows.|
|[CPaneFrameWnd::RemoveNonValidPanes](#removenonvalidpanes)|Called by the framework to remove non-valid panes.|
|[CPaneFrameWnd::RemovePane](#removepane)|Removes a pane from the mini-frame window.|
|[CPaneFrameWnd::ReplacePane](#replacepane)|Replaces one pane with another.|
|[CPaneFrameWnd::SaveState](#savestate)|Saves the pane's state to the registry.|
|`CPaneFrameWnd::Serialize`|Reads or writes this object from or to an archive.|
|[CPaneFrameWnd::SetCaptionButtons](#setcaptionbuttons)|Sets caption buttons.|
|[CPaneFrameWnd::SetDelayShow](#setdelayshow)||
|[CPaneFrameWnd::SetDockingManager](#setdockingmanager)||
|[CPaneFrameWnd::SetDockingTimer](#setdockingtimer)|Sets the docking timer.|
|[CPaneFrameWnd::SetDockState](#setdockstate)|Sets the docking state.|
|[CPaneFrameWnd::SetHotPoint](#sethotpoint)||
|[CPaneFrameWnd::SetPreDockState](#setpredockstate)|Called by the framework to set the predocking state.|
|[CPaneFrameWnd::SizeToContent](#sizetocontent)|Adjusts the size of a mini-frame window so that it is equivalent in size to a contained pane.|
|[CPaneFrameWnd::StartTearOff](#starttearoff)|Tears off a menu.|
|[CPaneFrameWnd::StoreRecentDockSiteInfo](#storerecentdocksiteinfo)||
|[CPaneFrameWnd::StoreRecentTabRelatedInfo](#storerecenttabrelatedinfo)||

### Protected Methods

|Name|Description|
|----------|-----------------|
|[CPaneFrameWnd::OnCheckRollState](#oncheckrollstate)|Determines whether a mini-frame window should be rolled up or down.|
|[CPaneFrameWnd::OnDrawBorder](#ondrawborder)|Draws the borders of a mini-frame window.|

### Data Members

|Name|Description|
|----------|-----------------|
|[CPaneFrameWnd::m_bUseSaveBits](#m_busesavebits)|Specifies whether to register the window class with the CS_SAVEBITS class style.|

## Remarks

The framework automatically creates a `CPaneFrameWnd` object when a pane is switched from a docked state to a floating state.

A mini-frame window can be dragged with its contents visible (immediate docking) or using a drag rectangle (standard docking). The docking mode of the mini-frame's container pane determines the mini-frame's dragging behavior. For more information, see [CBasePane::GetDockingMode](../../mfc/reference/cbasepane-class.md#getdockingmode).

A mini-frame window displays buttons on the caption in accordance with the contained pane style. If the pane can be closed ( [CBasePane::CanBeClosed](../../mfc/reference/cbasepane-class.md#canbeclosed)), it displays a Close button. If the pane has the AFX_CBRS_AUTO_ROLLUP style, it displays a pin.

If you derive a class from `CPaneFrameWnd`, you must tell the framework how to create it. Either create the class by overriding [CPane::CreateDefaultMiniframe](../../mfc/reference/cpane-class.md#createdefaultminiframe), or set the `CPane::m_pMiniFrameRTC` member so that it points to the runtime class information for your class.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CPaneFrameWnd`

## Requirements

**Header:** afxPaneFrameWnd.h

## <a name="addpane"></a> CPaneFrameWnd::AddPane

Adds a pane.

```
virtual void AddPane(CBasePane* pWnd);
```

### Parameters

*pWnd*<br/>
[in] The pane to add.

## <a name="addremovepanefromgloballist"></a> CPaneFrameWnd::AddRemovePaneFromGlobalList

Adds or removes a pane from the global list.

```
static BOOL __stdcall AddRemovePaneFromGlobalList(
    CBasePane* pWnd,
    BOOL bAdd);
```

### Parameters

*pWnd*<br/>
[in] The pane to add or remove.

*bAdd*<br/>
[in] If non-zero, add the pane. If 0, remove the pane.

### Return Value

Nonzero if the method was successful; otherwise 0.

## <a name="adjustlayout"></a> CPaneFrameWnd::AdjustLayout

Adjusts the layout of the mini-frame window.

```
virtual void AdjustLayout();
```

## <a name="adjustpaneframes"></a> CPaneFrameWnd::AdjustPaneFrames

```
virtual void AdjustPaneFrames();
```

### Remarks

## <a name="calcbordersize"></a> CPaneFrameWnd::CalcBorderSize

Calculates the size of the borders for a miniframe window.

```
virtual void CalcBorderSize(CRect& rectBorderSize) const;
```

### Parameters

*rectBorderSize*<br/>
[out] Contains the size, in pixels, of the border of the miniframe window.

### Remarks

This method is called by the framework to calculate the size of the border of a miniframe window. The returned size depends on whether a miniframe window contains a toolbar or a [CDockablePane](../../mfc/reference/cdockablepane-class.md).

## <a name="calcexpecteddockedrect"></a> CPaneFrameWnd::CalcExpectedDockedRect

Calculate the expected rectangle of a docked window.

```
virtual void CalcExpectedDockedRect(
    CWnd* pWndToDock,
    CPoint ptMouse,
    CRect& rectResult,
    BOOL& bDrawTab,
    CDockablePane** ppTargetBar);
```

### Parameters

*pWndToDock*<br/>
[in] A pointer to the window to dock.

*ptMouse*<br/>
[in] The mouse location.

*rectResult*<br/>
[out] The calculated rectangle.

*bDrawTab*<br/>
[out] If TRUE, draw a tab. If FALSE, do not draw a tab.

*ppTargetBar*<br/>
[out] A pointer to the target pane.

### Remarks

This method calculates the rectangle that a window would occupy if a user dragged the window to the point specified by *ptMouse* and docked it there.

## <a name="canbeattached"></a> CPaneFrameWnd::CanBeAttached

Determines whether the current pane can be docked to another pane or frame window.

```
virtual BOOL CanBeAttached() const;
```

### Return Value

TRUE if the pane can be docked to another pane or frame window; otherwise FALSE.

## <a name="canbedockedtopane"></a> CPaneFrameWnd::CanBeDockedToPane

Determines whether the mini-frame window can be docked to a pane.

```
virtual BOOL CanBeDockedToPane(const CDockablePane* pDockingBar) const;
```

### Parameters

*pDockingBar*<br/>
[in] A pane.

### Return Value

Nonzero if the mini-frame can be docked to *pDockingBar*; otherwise 0.

## <a name="checkgrippervisibility"></a> CPaneFrameWnd::CheckGripperVisibility

```
virtual void CheckGripperVisibility();
```

### Remarks

## <a name="converttotabbeddocument"></a> CPaneFrameWnd::ConvertToTabbedDocument

Converts the pane to a tabbed document.

```
virtual void ConvertToTabbedDocument();
```

## <a name="create"></a> CPaneFrameWnd::Create

Creates a miniframe window and attaches it to the [CPaneFrameWnd](../../mfc/reference/cpaneframewnd-class.md) object.

```
virtual BOOL Create(
    LPCTSTR lpszWindowName,
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    CCreateContext* pContext = NULL);
```

### Parameters

*lpszWindowName*<br/>
[in] Specifies the text to display on the miniframe window.

*dwStyle*<br/>
[in] Specifies the window style. For more information, see [Window Styles](../../mfc/reference/styles-used-by-mfc.md#window-styles).

*rect*<br/>
[in] Specifies the initial size and position of the miniframe window.

*pParentWnd*<br/>
[in, out] Specifies the parent frame of the miniframe window. This value must not be NULL.

*pContext*<br/>
[in, out] Specifies user-defined context.

### Return Value

TRUE if the window was created successfully; otherwise, FALSE.

### Remarks

A miniframe window is created in two steps. First, the framework creates a `CPaneFrameWnd`  object. Second, it calls `Create` to create the Windows miniframe window and attach it to the `CPaneFrameWnd` object.

## <a name="createex"></a> CPaneFrameWnd::CreateEx

Creates a miniframe window and attaches it to the [CPaneFrameWnd](../../mfc/reference/cpaneframewnd-class.md) object.

```
virtual BOOL CreateEx(
    DWORD dwStyleEx,
    LPCTSTR lpszWindowName,
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    CCreateContext* pContext=NULL);
```

### Parameters

*dwStyleEx*<br/>
[in] Specifies the extended window style. For more information, see [Extended Window Styles](../../mfc/reference/styles-used-by-mfc.md#extended-window-styles)

*lpszWindowName*<br/>
[in] Specifies the text to display on the miniframe window.

*dwStyle*<br/>
[in] Specifies the window style. For more information, see [Window Styles](../../mfc/reference/styles-used-by-mfc.md#window-styles).

*rect*<br/>
[in] Specifies the initial size and position of the miniframe window.

*pParentWnd*<br/>
[in, out] Specifies the parent frame of the miniframe window. This value must not be NULL.

*pContext*<br/>
[in, out] Specifies user-defined context.

### Return Value

TRUE if the window was created successfully; otherwise, FALSE.

### Remarks

A miniframe window is created in two steps. First, the framework creates a `CPaneFrameWnd`  object. Second, it calls `Create` to create the Windows miniframe window and attach it to the `CPaneFrameWnd` object.

## <a name="dockpane"></a> CPaneFrameWnd::DockPane

Docks the pane.

```
virtual CDockablePane* DockPane(BOOL& bWasDocked);
```

### Parameters

*bWasDocked*<br/>
[out] TRUE if the pane was already docked; otherwise FALSE.

### Return Value

If the operation was successful, the `CDockablePane` that the pane was docked to; otherwise NULL.

## <a name="findfloatingpanebyid"></a> CPaneFrameWnd::FindFloatingPaneByID

Finds a pane with the specified control ID in the global list of floating panes.

```
static CBasePane* FindFloatingPaneByID(UINT nID);
```

### Parameters

*nID*<br/>
[in] Represents the control ID of the pane to find.

### Return Value

The pane with the specified control ID; otherwise, NULL, if no pane has the specified control ID.

## <a name="framefrompoint"></a> CPaneFrameWnd::FrameFromPoint

Finds the mini-frame window that contains the specified point.

```
static CPaneFrameWnd* __stdcall FrameFromPoint(
    CPoint pt,
    int nSensitivity,
    CPaneFrameWnd* pFrameToExclude = NULL,
    BOOL bFloatMultiOnly = FALSE);
```

### Parameters

*pt*<br/>
[in] The point, in screen coordinates.

*nSensitivity*<br/>
[in] Increase the search area of the mini-frame window by this size. A mini-frame window satisfies the search criteria if the given point falls in the increased area.

*pFrameToExclude*<br/>
[in] Specifies a mini-frame window to exclude from the search.

*bFloatMultiOnly*<br/>
[in] If TRUE, only search mini-frame windows that have the CBRS_FLOAT_MULTI style. If FALSE, search all mini-frame windows.

### Return Value

A pointer to the mini-frame window that contains *pt*; otherwise NULL.

## <a name="getcaptionheight"></a> CPaneFrameWnd::GetCaptionHeight

Returns the height of the mini-frame window caption.

```
virtual int GetCaptionHeight() const;
```

### Return Value

The height, in pixels, of the mini-frame window.

### Remarks

Call this method to determine the height of a mini-frame window. By default, the height is set to SM_CYSMCAPTION. For more information, see [GetSystemMetrics Function](/windows/win32/api/winuser/nf-winuser-getsystemmetrics).

## <a name="getcaptionrect"></a> CPaneFrameWnd::GetCaptionRect

Calculates the bounding rectangle of a mini-frame window caption.

```
virtual void GetCaptionRect(CRect& rectCaption) const;
```

### Parameters

*rectCaption*<br/>
[out] Contains the size and position of the mini-frame window caption, in screen coordinates.

### Remarks

This method is called by the framework to calculate the bounding rectangle of a mini-frame window caption.

## <a name="getcaptiontext"></a> CPaneFrameWnd::GetCaptionText

Returns the caption text.

```
virtual CString GetCaptionText();
```

### Return Value

The caption text of the mini-frame window.

### Remarks

This method is called by the framework when it displays the caption text.

## <a name="getdockingmanager"></a> CPaneFrameWnd::GetDockingManager

```
CDockingManager* GetDockingManager() const;
```

### Return Value

### Remarks

## <a name="getdockingmode"></a> CPaneFrameWnd::GetDockingMode

Returns the docking mode.

```
virtual AFX_DOCK_TYPE GetDockingMode() const;
```

### Return Value

The docking mode. One of the following values:

- DT_STANDARD

- DT_IMMEDIATE

- DT_SMART

## <a name="getfirstvisiblepane"></a> CPaneFrameWnd::GetFirstVisiblePane

Returns the first visible pane that is contained in a mini-frame window.

```
virtual CWnd* GetFirstVisiblePane() const;
```

### Return Value

The first pane in the mini-frame window, or NULL if the mini-frame window contains no panes.

## <a name="gethotpoint"></a> CPaneFrameWnd::GetHotPoint

```
CPoint GetHotPoint() const;
```

### Return Value

### Remarks

## <a name="getpane"></a> CPaneFrameWnd::GetPane

Returns a pane that is contained in the mini-frame window.

```
virtual CWnd* GetPane() const;
```

### Return Value

The pane that is contained in the mini-frame, or NULL if the mini-frame window contains no panes.

### Remarks

## <a name="getpanecount"></a> CPaneFrameWnd::GetPaneCount

Returns the number of panes that are contained in a mini-frame window.

```
virtual int GetPaneCount() const;
```

### Return Value

The number of panes in the mini-frame window. This value can be zero.

### Remarks

## <a name="getparent"></a> CPaneFrameWnd::GetParent

```
CWnd* GetParent();
```

### Return Value

### Remarks

## <a name="getpinstate"></a> CPaneFrameWnd::GetPinState

```
BOOL GetPinState() const;
```

### Return Value

### Remarks

## <a name="getrecentfloatingrect"></a> CPaneFrameWnd::GetRecentFloatingRect

```
CRect GetRecentFloatingRect() const;
```

### Return Value

### Remarks

## <a name="getvisiblepanecount"></a> CPaneFrameWnd::GetVisiblePaneCount

Returns the number of visible panes that are contained in a mini-frame window.

```
virtual int GetVisiblePaneCount() const;
```

### Return Value

The number of visible panes.

### Remarks

## <a name="hittest"></a> CPaneFrameWnd::HitTest

Determines what part of a mini-frame window is at a given point.

```
virtual LRESULT HitTest(
    CPoint point,
    BOOL bDetectCaption);
```

### Parameters

*point*<br/>
[in] The point to test.

*bDetectCaption*<br/>
[in] If TRUE, check the point against the caption. If FALSE, ignore the caption.

### Return Value

One of the following values:

|Value|Meaning|
|-----------|-------------|
|HTNOWHERE|The point is outside the mini-frame window.|
|HTCLIENT|The point is in the client area.|
|HTCAPTION|The point is on the caption.|
|HTTOP|The point is at the top.|
|HTTOPLEFT|The point is at the top left.|
|HTTOPRIGHT|The point is at the top right.|
|HTLEFT|The point is at the left.|
|HTRIGHT|The point is at the right.|
|HTBOTTOM|The point is at the bottom.|
|HTBOTTOMLEFT|The point is at the bottom left.|
|HTBOTTOMRIGHT|The point is at the bottom right.|

## <a name="iscaptured"></a> CPaneFrameWnd::IsCaptured

```
BOOL IsCaptured() const;
```

### Return Value

### Remarks

## <a name="isdelayshow"></a> CPaneFrameWnd::IsDelayShow

```
BOOL IsDelayShow() const;
```

### Return Value

### Remarks

## <a name="isrolldown"></a> CPaneFrameWnd::IsRollDown

Determines whether a mini-frame window should be rolled down.

```
virtual BOOL IsRollDown() const;
```

### Return Value

TRUE if the mini-frame window must be rolled down; otherwise, FALSE.

### Remarks

This method is called by the framework to determine whether a mini-frame window should be rolled down. The rollup/rolldown feature is enabled for a mini-frame window if it contains at least one pane that has the AFX_CBRS_AUTO_ROLLUP flag. This flag is set when a pane is created. For more information, see [CBasePane::CreateEx](../../mfc/reference/cbasepane-class.md#createex).

By default, the framework checks whether the mouse pointer is inside the mini-frame window bounding rectangle to determine whether the window has to be rolled down. You can override this behavior in a derived class.

## <a name="isrollup"></a> CPaneFrameWnd::IsRollUp

Determines whether a mini-frame window should be rolled up.

```
virtual BOOL IsRollUp() const;
```

### Return Value

TRUE if the mini-frame window must be rolled up; otherwise, FALSE.

### Remarks

This method is called by the framework to determine whether a mini-frame window should be rolled up. The rollup/rolldown feature is enabled for a mini-frame window if it contains at least one pane that has the AFX_CBRS_AUTO_ROLLUP flag. This flag is set when a pane is created. For more information, see [CBasePane::CreateEx](../../mfc/reference/cbasepane-class.md#createex).

By default, the framework checks whether the mouse pointer is inside the mini-frame window bounding rectangle to determine whether the window has to be rolled up. You can override this behavior in a derived class.

## <a name="killdockingtimer"></a> CPaneFrameWnd::KillDockingTimer

Stops the docking timer.

```cpp
void KillDockingTimer();
```

## <a name="loadstate"></a> CPaneFrameWnd::LoadState

Loads the pane's state from the registry.

```
virtual BOOL LoadState(
    LPCTSTR lpszProfileName = NULL,
    UINT uiID = (UINT) -1);
```

### Parameters

*lpszProfileName*<br/>
[in] The profile name.

*uiID*<br/>
[in] The pane ID.

### Return Value

TRUE if the pane state was loaded successfully; otherwise FALSE.

## <a name="m_busesavebits"></a> CPaneFrameWnd::m_bUseSaveBits

Specifies whether to register the window class that has the CS_SAVEBITS class style.

```
AFX_IMPORT_DATA static BOOL m_bUseSaveBits;
```

### Remarks

Set this static member to TRUE to register the mini-frame window class that has the CS_SAVEBITS style. This may help reduce flickering when a user drags the mini-frame window.

## <a name="onbeforedock"></a> CPaneFrameWnd::OnBeforeDock

Determines if docking is possible.

```
virtual BOOL OnBeforeDock();
```

### Return Value

TRUE if docking is possible; otherwise, FALSE.

## <a name="oncheckrollstate"></a> CPaneFrameWnd::OnCheckRollState

Determines whether a mini-frame window should be rolled up or down.

```
virtual void OnCheckRollState();
```

### Remarks

This method is called by the framework to determine whether a mini-frame window should be rolled up or down.

By default, the framework calls [CPaneFrameWnd::IsRollUp](#isrollup) and [CPaneFrameWnd::IsRollDown](#isrolldown) and just stretches or restores the mini-frame window. You can override this method in a derived class to use a different visual effect.

## <a name="ondocktorecentpos"></a> CPaneFrameWnd::OnDockToRecentPos

Docks the mini-frame window at its most recent position.

```
virtual void OnDockToRecentPos();
```

## <a name="ondrawborder"></a> CPaneFrameWnd::OnDrawBorder

Draws the borders of a mini-frame window.

```
virtual void OnDrawBorder(CDC* pDC);
```

### Parameters

*pDC*<br/>
[in] The device context used to draw the border.

### Remarks

This method is called by the framework to draw the borders of the mini-frame window.

## <a name="onkillrolluptimer"></a> CPaneFrameWnd::OnKillRollUpTimer

Stops the rollup timer.

```
virtual void OnKillRollUpTimer();
```

## <a name="onmovepane"></a> CPaneFrameWnd::OnMovePane

Moves the mini-frame window by a specified offset.

```
virtual void OnMovePane(
    CPane* pBar,
    CPoint ptOffset);
```

### Parameters

*pBar*<br/>
[in] A pointer to a pane (ignored).

*ptOffset*<br/>
[in] The offset by which to move the pane.

## <a name="onpanerecalclayout"></a> CPaneFrameWnd::OnPaneRecalcLayout

Adjusts the layout of a pane inside a mini-frame window.

```
virtual void OnPaneRecalcLayout();
```

### Remarks

The framework calls this method when it must adjust the layout of a pane inside the mini-frame window.

By default, the pane is positioned to cover the complete client area of the mini-frame window.

## <a name="onsetrolluptimer"></a> CPaneFrameWnd::OnSetRollUpTimer

Sets the rollup timer.

```
virtual void OnSetRollUpTimer();
```

## <a name="onshowpane"></a> CPaneFrameWnd::OnShowPane

Called by the framework when a pane in the mini-frame window is hidden or displayed.

```
virtual void OnShowPane(
    CDockablePane* pBar,
    BOOL bShow);
```

### Parameters

*pBar*<br/>
[in] The pane that is being shown or hidden.

*bShow*<br/>
[in] TRUE if the pane is being shown; FALSE if the pane is being hidden.

### Remarks

Called by the framework when a pane in the mini-frame window is shown or hidden. The default implementation does nothing.

## <a name="pin"></a> CPaneFrameWnd::Pin

```cpp
void Pin(BOOL bPin = TRUE);
```

### Parameters

[in] *bPin*<br/>

### Remarks

## <a name="panefrompoint"></a> CPaneFrameWnd::PaneFromPoint

Returns a pane if it contains a user-supplied point inside a mini-frame window.

```
virtual CBasePane* PaneFromPoint(
    CPoint point,
    int nSensitivity,
    BOOL bCheckVisibility);
```

### Parameters

*point*<br/>
[in] The point that the user clicked, in screen coordinates.

*nSensitivity*<br/>
[in] This parameter is not used.

*bCheckVisibility*<br/>
[in] TRUE to specify that only visible panes should be returned; otherwise, FALSE.

### Return Value

The pane that the user clicked, or NULL if no pane exists at that location.

### Remarks

Call this method to obtain a pane that contains the given point.

## <a name="redrawall"></a> CPaneFrameWnd::RedrawAll

Redraws all mini-frame windows.

```
static void RedrawAll();
```

### Remarks

This method updates all mini-frame windows by calling [CWnd::RedrawWindow](../../mfc/reference/cwnd-class.md#redrawwindow) for each window.

## <a name="removenonvalidpanes"></a> CPaneFrameWnd::RemoveNonValidPanes

Called by the framework to remove non-valid panes.

```
virtual void RemoveNonValidPanes();
```

## <a name="removepane"></a> CPaneFrameWnd::RemovePane

Removes a pane from the mini-frame window.

```
virtual void RemovePane(
    CBasePane* pWnd,
    BOOL bDestroy = FALSE,
    BOOL bNoDelayedDestroy = FALSE);
```

### Parameters

*pWnd*<br/>
[in] A pointer to the pane to remove.

*bDestroy*<br/>
[in] Specifies what happens to the mini-frame window. If *bDestroy* is TRUE, this method destroys the mini-frame window immediately. If it is FALSE, this method destroys the mini-frame window after a certain delay.

*bNoDelayedDestroy*<br/>
[in] If TRUE, delayed destruction is disabled. If FALSE, delayed destruction is enabled.

### Remarks

The framework can destroy mini-frame windows immediately or after a certain delay. If you want to delay destruction of mini-frame windows, pass FALSE in the *bNoDelayedDestroy* parameter. Delayed destruction occurs when the framework processes the AFX_WM_CHECKEMPTYMINIFRAME message.

## <a name="replacepane"></a> CPaneFrameWnd::ReplacePane

Replaces one pane with another.

```
virtual void ReplacePane(
    CBasePane* pBarOrg,
    CBasePane* pBarReplaceWith);
```

### Parameters

*pBarOrg*<br/>
[in] A pointer to the original pane.

*pBarReplaceWith*<br/>
[in] A pointer to the pane that replaces the original pane.

## <a name="savestate"></a> CPaneFrameWnd::SaveState

Saves the pane's state to the registry.

```
virtual BOOL SaveState(
    LPCTSTR lpszProfileName = NULL,
    UINT uiID = (UINT) -1);
```

### Parameters

*lpszProfileName*<br/>
[in] The profile name.

*uiID*<br/>
[in] The pane ID.

### Return Value

TRUE if the pane state was saved successfully; otherwise FALSE.

## <a name="setcaptionbuttons"></a> CPaneFrameWnd::SetCaptionButtons

Sets caption buttons.

```
virtual void SetCaptionButtons(DWORD dwButtons);
```

### Parameters

*dwButtons*<br/>
[in] Bitwise-OR combination of the following values:

- AFX_CAPTION_BTN_CLOSE

- AFX_CAPTION_BTN_PIN

- AFX_CAPTION_BTN_MENU

- AFX_CAPTION_BTN_CUSTOMIZE

## <a name="setdelayshow"></a> CPaneFrameWnd::SetDelayShow

```cpp
void SetDelayShow(BOOL bDelayShow);
```

### Parameters

[in] *bDelayShow*<br/>

### Remarks

## <a name="setdockingmanager"></a> CPaneFrameWnd::SetDockingManager

```cpp
void SetDockingManager(CDockingManager* pManager);
```

### Parameters

[in] *pManager*<br/>

### Remarks

## <a name="setdockingtimer"></a> CPaneFrameWnd::SetDockingTimer

Sets the docking timer.

```cpp
void SetDockingTimer(UINT nTimeOut);
```

### Parameters

*nTimeOut*<br/>
[in] Timeout value in milliseconds.

## <a name="setdockstate"></a> CPaneFrameWnd::SetDockState

Sets the docking state.

```
virtual void SetDockState(CDockingManager* pDockManager);
```

### Parameters

*pDockManager*<br/>
[in] A pointer to a docking manager.

## <a name="sethotpoint"></a> CPaneFrameWnd::SetHotPoint

```cpp
void SetHotPoint(CPoint& ptNew);
```

### Parameters

[in] *ptNew*<br/>

### Remarks

## <a name="setpredockstate"></a> CPaneFrameWnd::SetPreDockState

Called by the framework to set the predocking state.

```
virtual BOOL SetPreDockState(
    AFX_PREDOCK_STATE preDockState,
    CBasePane* pBarToDock = NULL,
    AFX_DOCK_METHOD dockMethod = DM_MOUSE);
```

### Parameters

*preDockState*<br/>
[in] Possible values:

- PDS_NOTHING,

- PDS_DOCK_REGULAR,

- PDS_DOCK_TO_TAB

*pBarToDock*<br/>
[in] A pointer to the pane to dock.

*dockMethod*<br/>
[in] The docking method. (This parameter is ignored.)

### Return Value

TRUE if the mini-frame window is undocked; FALSE if it is docked.

## <a name="sizetocontent"></a> CPaneFrameWnd::SizeToContent

Adjusts the size of a mini-frame window so that it is equivalent to a contained pane.

```
virtual void SizeToContent();
```

### Remarks

Call this method to adjust the size of a mini-frame window to the size of a contained pane.

## <a name="starttearoff"></a> CPaneFrameWnd::StartTearOff

Tears off a menu.

```
BOOL StartTearOff(CMFCPopu* pMenu);
```

### Parameters

*pMenu*<br/>
[in] A pointer to a menu.

### Return Value

TRUE if the method was successful; otherwise, FALSE.

## <a name="storerecentdocksiteinfo"></a> CPaneFrameWnd::StoreRecentDockSiteInfo

```
virtual void StoreRecentDockSiteInfo(CPane* pBar);
```

### Parameters

[in] *pBar*<br/>

### Remarks

## <a name="storerecenttabrelatedinfo"></a> CPaneFrameWnd::StoreRecentTabRelatedInfo

```
virtual void StoreRecentTabRelatedInfo(
    CDockablePane* pDockingBar,
    CDockablePane* pTabbedBar);
```

### Parameters

[in] *pDockingBar*<br/>
[in] *pTabbedBar*<br/>

### Remarks

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CWnd Class](../../mfc/reference/cwnd-class.md)
