---
title: "CPaneFrameWnd Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CPaneFrameWnd.Serialize"
  - "CPaneFrameWnd.PreTranslateMessage"
  - "CPaneFrameWnd"
  - "CPaneFrameWnd::Serialize"
  - "PreTranslateMessage"
  - "CPaneFrameWnd::PreTranslateMessage"
  - "Serialize"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CPaneFrameWnd class"
  - "Serialize method"
  - "PreTranslateMessage method"
ms.assetid: ea3423a3-2763-482e-b763-817036ded10d
caps.latest.revision: 28
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# CPaneFrameWnd Class
[!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
 Implements a mini-frame window that contains one pane. The pane fills the client area of the window.  
  
## Syntax  
  
```  
class CPaneFrameWnd : public CWnd  
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CPaneFrameWnd::AddPane](#cpaneframewnd__addpane)|Adds a pane.|  
|[CPaneFrameWnd::AddRemovePaneFromGlobalList](#cpaneframewnd__addremovepanefromgloballist)|Adds or removes a pane from the global list.|  
|[CPaneFrameWnd::AdjustLayout](#cpaneframewnd__adjustlayout)|Adjusts the layout of the mini-frame window.|  
|[CPaneFrameWnd::AdjustPaneFrames](#cpaneframewnd__adjustpaneframes)||  
|[CPaneFrameWnd::CalcBorderSize](#cpaneframewnd__calcbordersize)|Calculates the size of the borders for a mini-frame window.|  
|[CPaneFrameWnd::CalcExpectedDockedRect](#cpaneframewnd__calcexpecteddockedrect)|Calculate the expected rectangle of a docked window.|  
|[CPaneFrameWnd::CanBeAttached](#cpaneframewnd__canbeattached)|Determines whether the current pane can be docked to another pane or frame window.|  
|[CPaneFrameWnd::CanBeDockedToPane](#cpaneframewnd__canbedockedtopane)|Determines whether the mini-frame window can be docked to a pane.|  
|[CPaneFrameWnd::CheckGripperVisibility](#cpaneframewnd__checkgrippervisibility)||  
|[CPaneFrameWnd::ConvertToTabbedDocument](#cpaneframewnd__converttotabbeddocument)|Converts the pane to a tabbed document.|  
|[CPaneFrameWnd::Create](#cpaneframewnd__create)|Creates a mini-frame window and attaches it to the `CPaneFrameWnd` object.|  
|[CPaneFrameWnd::CreateEx](#cpaneframewnd__createex)|Creates a mini-frame window and attaches it to the `CPaneFrameWnd` object.|  
|[CPaneFrameWnd::DockPane](#cpaneframewnd__dockpane)|Docks the pane.|  
|[CPaneFrameWnd::FindFloatingPaneByID](#cpaneframewnd__findfloatingpanebyid)|Finds a pane with the specified control ID in the global list of floating panes.|  
|[CPaneFrameWnd::FrameFromPoint](#cpaneframewnd__framefrompoint)|Finds the mini-frame window containing a user-supplied point.|  
|[CPaneFrameWnd::GetCaptionHeight](#cpaneframewnd__getcaptionheight)|Returns the height of the mini-frame window caption.|  
|[CPaneFrameWnd::GetCaptionRect](#cpaneframewnd__getcaptionrect)|Calculates the bounding rectangle of a mini-frame window caption.|  
|[CPaneFrameWnd::GetCaptionText](#cpaneframewnd__getcaptiontext)|Returns the caption text.|  
|[CPaneFrameWnd::GetDockingManager](#cpaneframewnd__getdockingmanager)||  
|[CPaneFrameWnd::GetDockingMode](#cpaneframewnd__getdockingmode)|Returns the docking mode.|  
|[CPaneFrameWnd::GetFirstVisiblePane](#cpaneframewnd__getfirstvisiblepane)|Returns the first visible pane that is contained in a mini-frame window.|  
|[CPaneFrameWnd::GetHotPoint](#cpaneframewnd__gethotpoint)||  
|[CPaneFrameWnd::GetPane](#cpaneframewnd__getpane)|Returns a pane that is contained in the mini-frame window.|  
|[CPaneFrameWnd::GetPaneCount](#cpaneframewnd__getpanecount)|Returns the number of panes that are contained in a mini-frame window.|  
|[CPaneFrameWnd::GetParent](#cpaneframewnd__getparent)||  
|[CPaneFrameWnd::GetPinState](#cpaneframewnd__getpinstate)||  
|[CPaneFrameWnd::GetRecentFloatingRect](#cpaneframewnd__getrecentfloatingrect)||  
|[CPaneFrameWnd::GetVisiblePaneCount](#cpaneframewnd__getvisiblepanecount)|Returns the number of visible panes that are contained in a mini-frame window.|  
|[CPaneFrameWnd::HitTest](#cpaneframewnd__hittest)|Determines what part of a mini-frame window is at a given point.|  
|[CPaneFrameWnd::IsCaptured](#cpaneframewnd__iscaptured)||  
|[CPaneFrameWnd::IsDelayShow](#cpaneframewnd__isdelayshow)||  
|[CPaneFrameWnd::IsRollDown](#cpaneframewnd__isrolldown)|Determines whether a mini-frame window should be rolled down.|  
|[CPaneFrameWnd::IsRollUp](#cpaneframewnd__isrollup)|Determines whether a mini-frame window should be rolled up.|  
|[CPaneFrameWnd::KillDockingTimer](#cpaneframewnd__killdockingtimer)|Stops the docking timer.|  
|[CPaneFrameWnd::LoadState](#cpaneframewnd__loadstate)|Loads the pane's state from the registry.|  
|[CPaneFrameWnd::OnBeforeDock](#cpaneframewnd__onbeforedock)|Determines if docking is possible.|  
|[CPaneFrameWnd::OnDockToRecentPos](#cpaneframewnd__ondocktorecentpos)|Docks the mini-frame window at its most recent position.|  
|[CPaneFrameWnd::OnKillRollUpTimer](#cpaneframewnd__onkillrolluptimer)|Stops the rollup timer.|  
|[CPaneFrameWnd::OnMovePane](#cpaneframewnd__onmovepane)|Moves the mini-frame window by a specified offset.|  
|[CPaneFrameWnd::OnPaneRecalcLayout](#cpaneframewnd__onpanerecalclayout)|Adjusts the layout of a contained pane.|  
|[CPaneFrameWnd::OnSetRollUpTimer](#cpaneframewnd__onsetrolluptimer)|Sets the rollup timer.|  
|[CPaneFrameWnd::OnShowPane](#cpaneframewnd__onshowpane)|Called by the framework when a pane in the mini-frame window is hidden or displayed.|  
|[CPaneFrameWnd::PaneFromPoint](#cpaneframewnd__panefrompoint)|Returns a pane if it contains a user-supplied point inside a mini-frame window.|  
|[CPaneFrameWnd::Pin](#cpaneframewnd__pin)||  
|`CPaneFrameWnd::PreTranslateMessage`|Used by class [CWinApp](../../mfc/reference/cwinapp-class.md) to translate window messages before they are dispatched to the [TranslateMessage](http://msdn.microsoft.com/library/windows/desktop/ms644955) and [DispatchMessage](http://msdn.microsoft.com/library/windows/desktop/ms644934) Windows functions.|  
|[CPaneFrameWnd::RedrawAll](#cpaneframewnd__redrawall)|Redraws all mini-frame windows.|  
|[CPaneFrameWnd::RemoveNonValidPanes](#cpaneframewnd__removenonvalidpanes)|Called by the framework to remove non-valid panes.|  
|[CPaneFrameWnd::RemovePane](#cpaneframewnd__removepane)|Removes a pane from the mini-frame window.|  
|[CPaneFrameWnd::ReplacePane](#cpaneframewnd__replacepane)|Replaces one pane with another.|  
|[CPaneFrameWnd::SaveState](#cpaneframewnd__savestate)|Saves the pane's state to the registry.|  
|`CPaneFrameWnd::Serialize`|Reads or writes this object from or to an archive.|  
|[CPaneFrameWnd::SetCaptionButtons](#cpaneframewnd__setcaptionbuttons)|Sets caption buttons.|  
|[CPaneFrameWnd::SetDelayShow](#cpaneframewnd__setdelayshow)||  
|[CPaneFrameWnd::SetDockingManager](#cpaneframewnd__setdockingmanager)||  
|[CPaneFrameWnd::SetDockingTimer](#cpaneframewnd__setdockingtimer)|Sets the docking timer.|  
|[CPaneFrameWnd::SetDockState](#cpaneframewnd__setdockstate)|Sets the docking state.|  
|[CPaneFrameWnd::SetHotPoint](#cpaneframewnd__sethotpoint)||  
|[CPaneFrameWnd::SetPreDockState](#cpaneframewnd__setpredockstate)|Called by the framework to set the predocking state.|  
|[CPaneFrameWnd::SizeToContent](#cpaneframewnd__sizetocontent)|Adjusts the size of a mini-frame window so that it is equivalent in size to a contained pane.|  
|[CPaneFrameWnd::StartTearOff](#cpaneframewnd__starttearoff)|Tears off a menu.|  
|[CPaneFrameWnd::StoreRecentDockSiteInfo](#cpaneframewnd__storerecentdocksiteinfo)||  
|[CPaneFrameWnd::StoreRecentTabRelatedInfo](#cpaneframewnd__storerecenttabrelatedinfo)||  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CPaneFrameWnd::OnCheckRollState](#cpaneframewnd__oncheckrollstate)|Determines whether a mini-frame window should be rolled up or down.|  
|[CPaneFrameWnd::OnDrawBorder](#cpaneframewnd__ondrawborder)|Draws the borders of a mini-frame window.|  
  
### Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CPaneFrameWnd::m_bUseSaveBits](#cpaneframewnd__m_busesavebits)|Specifies whether to register the window class with the `CS_SAVEBITS` class style.|  
  
## Remarks  
 The framework automatically creates a `CPaneFrameWnd` object when a pane is switched from a docked state to a floating state.  
  
 A mini-frame window can be dragged with its contents visible (immediate docking) or using a drag rectangle (standard docking). The docking mode of the mini-frame's container pane determines the mini-frame's dragging behavior. For more information, see [CBasePane::GetDockingMode](../../mfc/reference/cbasepane-class.md#cbasepane__getdockingmode).  
  
 A mini-frame window displays buttons on the caption in accordance with the contained pane style. If the pane can be closed ( [CBasePane::CanBeClosed](../../mfc/reference/cbasepane-class.md#cbasepane__canbeclosed)), it displays a Close button. If the pane has the `AFX_CBRS_AUTO_ROLLUP` style, it displays a pin.  
  
 If you derive a class from `CPaneFrameWnd`, you must tell the framework how to create it. Either create the class by overriding [CPane::CreateDefaultMiniframe](../../mfc/reference/cpane-class.md#cpane__createdefaultminiframe), or set the `CPane::m_pMiniFrameRTC` member so that it points to the runtime class information for your class.  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CPaneFrameWnd](../../mfc/reference/cpaneframewnd-class.md)  
  
## Requirements  
 **Header:** afxPaneFrameWnd.h  
  
##  <a name="cpaneframewnd__addpane"></a>  CPaneFrameWnd::AddPane  
 Adds a pane.  
  
```  
virtual void AddPane(CBasePane* pWnd);
```  
  
### Parameters  
 [in] `pWnd`  
 The pane to add.  
  
##  <a name="cpaneframewnd__addremovepanefromgloballist"></a>  CPaneFrameWnd::AddRemovePaneFromGlobalList  
 Adds or removes a pane from the global list.  
  
```  
static BOOL __stdcall AddRemovePaneFromGlobalList(
    CBasePane* pWnd,  
    BOOL bAdd);
```  
  
### Parameters  
 [in] `pWnd`  
 The pane to add or remove.  
  
 [in] `bAdd`  
 If non-zero, add the pane. If 0, remove the pane.  
  
### Return Value  
 Nonzero if the method was successful; otherwise 0.  
  
##  <a name="cpaneframewnd__adjustlayout"></a>  CPaneFrameWnd::AdjustLayout  
 Adjusts the layout of the mini-frame window.  
  
```  
virtual void AdjustLayout();
```  
  
##  <a name="cpaneframewnd__adjustpaneframes"></a>  CPaneFrameWnd::AdjustPaneFrames  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void AdjustPaneFrames();
```  
  
### Remarks  
  
##  <a name="cpaneframewnd__calcbordersize"></a>  CPaneFrameWnd::CalcBorderSize  
 Calculates the size of the borders for a miniframe window.  
  
```  
virtual void CalcBorderSize(CRect& rectBorderSize) const;

 
```  
  
### Parameters  
 [out] `rectBorderSize`  
 Contains the size, in pixels, of the border of the miniframe window.  
  
### Remarks  
 This method is called by the framework to calculate the size of the border of a miniframe window. The returned size depends on whether a miniframe window contains a toolbar or a [CDockablePane](../../mfc/reference/cdockablepane-class.md).  
  
##  <a name="cpaneframewnd__calcexpecteddockedrect"></a>  CPaneFrameWnd::CalcExpectedDockedRect  
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
 [in] `pWndToDock`  
 A pointer to the window to dock.  
  
 [in] `ptMouse`  
 The mouse location.  
  
 [out] `rectResult`  
 The calculated rectangle.  
  
 [out] `bDrawTab`  
 If `TRUE`, draw a tab. If `FALSE`, do not draw a tab.  
  
 [out] `ppTargetBar`  
 A pointer to the target pane.  
  
### Remarks  
 This method calculates the rectangle that a window would occupy if a user dragged the window to the point specified by `ptMouse` and docked it there.  
  
##  <a name="cpaneframewnd__canbeattached"></a>  CPaneFrameWnd::CanBeAttached  
 Determines whether the current pane can be docked to another pane or frame window.  
  
```  
virtual BOOL CanBeAttached() const;

 
```  
  
### Return Value  
 `TRUE` if the pane can be docked to another pane or frame window; otherwise `FALSE`.  
  
##  <a name="cpaneframewnd__canbedockedtopane"></a>  CPaneFrameWnd::CanBeDockedToPane  
 Determines whether the mini-frame window can be docked to a pane.  
  
```  
virtual BOOL CanBeDockedToPane(const CDockablePane* pDockingBar) const;

 
```  
  
### Parameters  
 [in] `pDockingBar`  
 A pane.  
  
### Return Value  
 Nonzero if the mini-frame can be docked to `pDockingBar`; otherwise 0.  
  
##  <a name="cpaneframewnd__checkgrippervisibility"></a>  CPaneFrameWnd::CheckGripperVisibility  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void CheckGripperVisibility();
```  
  
### Remarks  
  
##  <a name="cpaneframewnd__converttotabbeddocument"></a>  CPaneFrameWnd::ConvertToTabbedDocument  
 Converts the pane to a tabbed document.  
  
```  
virtual void ConvertToTabbedDocument();
```  
  
##  <a name="cpaneframewnd__create"></a>  CPaneFrameWnd::Create  
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
 [in] `lpszWindowName`  
 Specifies the text to display on the miniframe window.  
  
 [in] `dwStyle`  
 Specifies the window style. For more information, see [Window Styles](../../mfc/reference/window-styles.md).  
  
 [in] `rect`  
 Specifies the initial size and position of the miniframe window.  
  
 [in] [out] `pParentWnd`  
 Specifies the parent frame of the miniframe window. This value must not be `NULL`.  
  
 [in] [out] `pContext`  
 Specifies user-defined context.  
  
### Return Value  
 `TRUE` if the window was created successfully; otherwise, `FALSE`.  
  
### Remarks  
 A miniframe window is created in two steps. First, the framework creates a [CPaneFrameWnd](../../mfc/reference/cpaneframewnd-class.md) object. Second, it calls `Create` to create the Windows miniframe window and attach it to the `CPaneFrameWnd` object.  
  
##  <a name="cpaneframewnd__createex"></a>  CPaneFrameWnd::CreateEx  
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
 [in] `dwStyleEx`  
 Specifies the extended window style. For more information, see [Extended Window Styles](../../mfc/reference/extended-window-styles.md)  
  
 [in] `lpszWindowName`  
 Specifies the text to display on the miniframe window.  
  
 [in] `dwStyle`  
 Specifies the window style. For more information, see [Window Styles](../../mfc/reference/window-styles.md).  
  
 [in] `rect`  
 Specifies the initial size and position of the miniframe window.  
  
 [in] [out] `pParentWnd`  
 Specifies the parent frame of the miniframe window. This value must not be `NULL`.  
  
 [in] [out] `pContext`  
 Specifies user-defined context.  
  
### Return Value  
 `TRUE` if the window was created successfully; otherwise, `FALSE`.  
  
### Remarks  
 A miniframe window is created in two steps. First, the framework creates a [CPaneFrameWnd](../../mfc/reference/cpaneframewnd-class.md) object. Second, it calls `Create` to create the Windows miniframe window and attach it to the `CPaneFrameWnd` object.  
  
##  <a name="cpaneframewnd__dockpane"></a>  CPaneFrameWnd::DockPane  
 Docks the pane.  
  
```  
virtual CDockablePane* DockPane(BOOL& bWasDocked);
```  
  
### Parameters  
 [out] `bWasDocked`  
 `TRUE` if the pane was already docked; otherwise `FALSE`.  
  
### Return Value  
 If the operation was successful, the `CDockablePane` that the pane was docked to; otherwise `NULL`.  
  
##  <a name="cpaneframewnd__findfloatingpanebyid"></a>  CPaneFrameWnd::FindFloatingPaneByID  
 Finds a pane with the specified control ID in the global list of floating panes.  
  
```  
static CBasePane* FindFloatingPaneByID(UINT nID);
```  
  
### Parameters  
 [in] `nID`  
 Represents the control ID of the pane to find.  
  
### Return Value  
 The pane with the specified control ID; otherwise, `NULL`, if no pane has the specified control ID.  
  
##  <a name="cpaneframewnd__framefrompoint"></a>  CPaneFrameWnd::FrameFromPoint  
 Finds the mini-frame window that contains the specified point.  
  
```  
static CPaneFrameWnd* __stdcall FrameFromPoint(
    CPoint pt,  
    int nSensitivity,  
    CPaneFrameWnd* pFrameToExclude = NULL,  
    BOOL bFloatMultiOnly = FALSE);
```  
  
### Parameters  
 [in] `pt`  
 The point, in screen coordinates.  
  
 [in] `nSensitivity`  
 Increase the search area of the mini-frame window by this size. A mini-frame window satisfies the search criteria if the given point falls in the increased area.  
  
 [in] `pFrameToExclude`  
 Specifies a mini-frame window to exclude from the search.  
  
 [in] `bFloatMultiOnly`  
 If `TRUE`, only search mini-frame windows that have the `CBRS_FLOAT_MULTI` style. If `FALSE`, search all mini-frame windows.  
  
### Return Value  
 A pointer to the mini-frame window that contains `pt`; otherwise `NULL`.  
  
##  <a name="cpaneframewnd__getcaptionheight"></a>  CPaneFrameWnd::GetCaptionHeight  
 Returns the height of the mini-frame window caption.  
  
```  
virtual int GetCaptionHeight() const;

 
```  
  
### Return Value  
 The height, in pixels, of the mini-frame window.  
  
### Remarks  
 Call this method to determine the height of a mini-frame window. By default, the height is set to `SM_CYSMCAPTION`. For more information, see [GetSystemMetrics Function](http://msdn.microsoft.com/library/windows/desktop/ms724385).  
  
##  <a name="cpaneframewnd__getcaptionrect"></a>  CPaneFrameWnd::GetCaptionRect  
 Calculates the bounding rectangle of a mini-frame window caption.  
  
```  
virtual void GetCaptionRect(CRect& rectCaption) const;

 
```  
  
### Parameters  
 [out] `rectCaption`  
 Contains the size and position of the mini-frame window caption, in screen coordinates.  
  
### Remarks  
 This method is called by the framework to calculate the bounding rectangle of a mini-frame window caption.  
  
##  <a name="cpaneframewnd__getcaptiontext"></a>  CPaneFrameWnd::GetCaptionText  
 Returns the caption text.  
  
```  
virtual CString GetCaptionText();
```  
  
### Return Value  
 The caption text of the mini-frame window.  
  
### Remarks  
 This method is called by the framework when it displays the caption text.  
  
##  <a name="cpaneframewnd__getdockingmanager"></a>  CPaneFrameWnd::GetDockingManager  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CDockingManager* GetDockingManager() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpaneframewnd__getdockingmode"></a>  CPaneFrameWnd::GetDockingMode  
 Returns the docking mode.  
  
```  
virtual AFX_DOCK_TYPE GetDockingMode() const;

 
```  
  
### Return Value  
 The docking mode. One of the following values:  
  
- `DT_STANDARD`  
  
- `DT_IMMEDIATE`  
  
- `DT_SMART`  
  
##  <a name="cpaneframewnd__getfirstvisiblepane"></a>  CPaneFrameWnd::GetFirstVisiblePane  
 Returns the first visible pane that is contained in a mini-frame window.  
  
```  
virtual CWnd* GetFirstVisiblePane() const;

 
```  
  
### Return Value  
 The first pane in the mini-frame window, or `NULL` if the mini-frame window contains no panes.  
  
##  <a name="cpaneframewnd__gethotpoint"></a>  CPaneFrameWnd::GetHotPoint  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CPoint GetHotPoint() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpaneframewnd__getpane"></a>  CPaneFrameWnd::GetPane  
 Returns a pane that is contained in the mini-frame window.  
  
```  
virtual CWnd* GetPane() const;

 
```  
  
### Return Value  
 The pane that is contained in the mini-frame, or `NULL` if the mini-frame window contains no panes.  
  
### Remarks  
  
##  <a name="cpaneframewnd__getpanecount"></a>  CPaneFrameWnd::GetPaneCount  
 Returns the number of panes that are contained in a mini-frame window.  
  
```  
virtual int GetPaneCount() const;

 
```  
  
### Return Value  
 The number of panes in the mini-frame window. This value can be zero.  
  
### Remarks  
  
##  <a name="cpaneframewnd__getparent"></a>  CPaneFrameWnd::GetParent  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CWnd* GetParent();
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpaneframewnd__getpinstate"></a>  CPaneFrameWnd::GetPinState  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL GetPinState() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpaneframewnd__getrecentfloatingrect"></a>  CPaneFrameWnd::GetRecentFloatingRect  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CRect GetRecentFloatingRect() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpaneframewnd__getvisiblepanecount"></a>  CPaneFrameWnd::GetVisiblePaneCount  
 Returns the number of visible panes that are contained in a mini-frame window.  
  
```  
virtual int GetVisiblePaneCount() const;

 
```  
  
### Return Value  
 The number of visible panes.  
  
### Remarks  
  
##  <a name="cpaneframewnd__hittest"></a>  CPaneFrameWnd::HitTest  
 Determines what part of a mini-frame window is at a given point.  
  
```  
virtual LRESULT HitTest(
    CPoint point,  
    BOOL bDetectCaption);
```  
  
### Parameters  
 [in] `point`  
 The point to test.  
  
 [in] `bDetectCaption`  
 If `TRUE`, check the point against the caption. If `FALSE`, ignore the caption.  
  
### Return Value  
 One of the following values:  
  
|Value|Meaning|  
|-----------|-------------|  
|`HTNOWHERE`|The point is outside the mini-frame window.|  
|`HTCLIENT`|The point is in the client area.|  
|`HTCAPTION`|The point is on the caption.|  
|`HTTOP`|The point is at the top.|  
|`HTTOPLEFT`|The point is at the top left.|  
|`HTTOPRIGHT`|The point is at the top right.|  
|`HTLEFT`|The point is at the left.|  
|`HTRIGHT`|The point is at the right.|  
|`HTBOTTOM`|The point is at the bottom.|  
|`HTBOTTOMLEFT`|The point is at the bottom left.|  
|`HTBOTTOMRIGHT`|The point is at the bottom right.|  
  
##  <a name="cpaneframewnd__iscaptured"></a>  CPaneFrameWnd::IsCaptured  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsCaptured() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpaneframewnd__isdelayshow"></a>  CPaneFrameWnd::IsDelayShow  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsDelayShow() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpaneframewnd__isrolldown"></a>  CPaneFrameWnd::IsRollDown  
 Determines whether a mini-frame window should be rolled down.  
  
```  
virtual BOOL IsRollDown() const;

 
```  
  
### Return Value  
 `TRUE` if the mini-frame window must be rolled down; otherwise, `FALSE`.  
  
### Remarks  
 This method is called by the framework to determine whether a mini-frame window should be rolled down. The rollup/rolldown feature is enabled for a mini-frame window if it contains at least one pane that has the `AFX_CBRS_AUTO_ROLLUP` flag. This flag is set when a pane is created. For more information, see [CBasePane::CreateEx](../../mfc/reference/cbasepane-class.md#cbasepane__createex).  
  
 By default, the framework checks whether the mouse pointer is inside the mini-frame window bounding rectangle to determine whether the window has to be rolled down. You can override this behavior in a derived class.  
  
##  <a name="cpaneframewnd__isrollup"></a>  CPaneFrameWnd::IsRollUp  
 Determines whether a mini-frame window should be rolled up.  
  
```  
virtual BOOL IsRollUp() const;

 
```  
  
### Return Value  
 `TRUE` if the mini-frame window must be rolled up; otherwise, `FALSE`.  
  
### Remarks  
 This method is called by the framework to determine whether a mini-frame window should be rolled up. The rollup/rolldown feature is enabled for a mini-frame window if it contains at least one pane that has the `AFX_CBRS_AUTO_ROLLUP` flag. This flag is set when a pane is created. For more information, see [CBasePane::CreateEx](../../mfc/reference/cbasepane-class.md#cbasepane__createex).  
  
 By default, the framework checks whether the mouse pointer is inside the mini-frame window bounding rectangle to determine whether the window has to be rolled up. You can override this behavior in a derived class.  
  
##  <a name="cpaneframewnd__killdockingtimer"></a>  CPaneFrameWnd::KillDockingTimer  
 Stops the docking timer.  
  
```  
void KillDockingTimer();
```  
  
##  <a name="cpaneframewnd__loadstate"></a>  CPaneFrameWnd::LoadState  
 Loads the pane's state from the registry.  
  
```  
virtual BOOL LoadState(
    LPCTSTR lpszProfileName = NULL,  
    UINT uiID = (UINT) -1);
```  
  
### Parameters  
 [in] `lpszProfileName`  
 The profile name.  
  
 [in] `uiID`  
 The pane ID.  
  
### Return Value  
 `TRUE` if the pane state was loaded successfully; otherwise `FALSE`.  
  
##  <a name="cpaneframewnd__m_busesavebits"></a>  CPaneFrameWnd::m_bUseSaveBits  
 Specifies whether to register the window class that has the `CS_SAVEBITS` class style.  
  
```  
AFX_IMPORT_DATA static BOOL m_bUseSaveBits;  
```  
  
### Remarks  
 Set this static member to `TRUE` to register the mini-frame window class that has the `CS_SAVEBITS` style. This may help reduce flickering when a user drags the mini-frame window.  
  
##  <a name="cpaneframewnd__onbeforedock"></a>  CPaneFrameWnd::OnBeforeDock  
 Determines if docking is possible.  
  
```  
virtual BOOL OnBeforeDock();
```  
  
### Return Value  
 `TRUE` if docking is possible; otherwise, `FALSE`.  
  
##  <a name="cpaneframewnd__oncheckrollstate"></a>  CPaneFrameWnd::OnCheckRollState  
 Determines whether a mini-frame window should be rolled up or down.  
  
```  
virtual void OnCheckRollState();
```  
  
### Remarks  
 This method is called by the framework to determine whether a mini-frame window should be rolled up or down.  
  
 By default, the framework calls [CPaneFrameWnd::IsRollUp](#cpaneframewnd__isrollup) and [CPaneFrameWnd::IsRollDown](#cpaneframewnd__isrolldown) and just stretches or restores the mini-frame window. You can override this method in a derived class to use a different visual effect.  
  
##  <a name="cpaneframewnd__ondocktorecentpos"></a>  CPaneFrameWnd::OnDockToRecentPos  
 Docks the mini-frame window at its most recent position.  
  
```  
virtual void OnDockToRecentPos();
```  
  
##  <a name="cpaneframewnd__ondrawborder"></a>  CPaneFrameWnd::OnDrawBorder  
 Draws the borders of a mini-frame window.  
  
```  
virtual void OnDrawBorder(CDC* pDC);
```  
  
### Parameters  
 [in] `pDC`  
 The device context used to draw the border.  
  
### Remarks  
 This method is called by the framework to draw the borders of the mini-frame window.  
  
##  <a name="cpaneframewnd__onkillrolluptimer"></a>  CPaneFrameWnd::OnKillRollUpTimer  
 Stops the rollup timer.  
  
```  
virtual void OnKillRollUpTimer();
```  
  
##  <a name="cpaneframewnd__onmovepane"></a>  CPaneFrameWnd::OnMovePane  
 Moves the mini-frame window by a specified offset.  
  
```  
virtual void OnMovePane(
    CPane* pBar,  
    CPoint ptOffset);
```  
  
### Parameters  
 [in] `pBar`  
 A pointer to a pane (ignored).  
  
 [in] `ptOffset`  
 The offset by which to move the pane.  
  
##  <a name="cpaneframewnd__onpanerecalclayout"></a>  CPaneFrameWnd::OnPaneRecalcLayout  
 Adjusts the layout of a pane inside a mini-frame window.  
  
```  
virtual void OnPaneRecalcLayout();
```  
  
### Remarks  
 The framework calls this method when it must adjust the layout of a pane inside the mini-frame window.  
  
 By default, the pane is positioned to cover the complete client area of the mini-frame window.  
  
##  <a name="cpaneframewnd__onsetrolluptimer"></a>  CPaneFrameWnd::OnSetRollUpTimer  
 Sets the rollup timer.  
  
```  
virtual void OnSetRollUpTimer();
```  
  
##  <a name="cpaneframewnd__onshowpane"></a>  CPaneFrameWnd::OnShowPane  
 Called by the framework when a pane in the mini-frame window is hidden or displayed.  
  
```  
virtual void OnShowPane(
    CDockablePane* pBar,  
    BOOL bShow);
```  
  
### Parameters  
 [in] `pBar`  
 The pane that is being shown or hidden.  
  
 [in] `bShow`  
 `TRUE` if the pane is being shown; `FALSE` if the pane is being hidden.  
  
### Remarks  
 Called by the framework when a pane in the mini-frame window is shown or hidden. The default implementation does nothing.  
  
##  <a name="cpaneframewnd__pin"></a>  CPaneFrameWnd::Pin  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void Pin(BOOL bPin = TRUE);
```  
  
### Parameters  
 [in] `bPin`  
  
### Remarks  
  
##  <a name="cpaneframewnd__panefrompoint"></a>  CPaneFrameWnd::PaneFromPoint  
 Returns a pane if it contains a user-supplied point inside a mini-frame window.  
  
```  
virtual CBasePane* PaneFromPoint(
    CPoint point,  
    int nSensitivity,  
    BOOL bCheckVisibility);
```  
  
### Parameters  
 [in] `point`  
 The point that the user clicked, in screen coordinates.  
  
 [in] `nSensitivity`  
 This parameter is not used.  
  
 [in] `bCheckVisibility`  
 `TRUE` to specify that only visible panes should be returned; otherwise, `FALSE`.  
  
### Return Value  
 The pane that the user clicked, or `NULL` if no pane exists at that location.  
  
### Remarks  
 Call this method to obtain a pane that contains the given point.  
  
##  <a name="cpaneframewnd__redrawall"></a>  CPaneFrameWnd::RedrawAll  
 Redraws all mini-frame windows.  
  
```  
static void RedrawAll();
```  
  
### Remarks  
 This method updates all mini-frame windows by calling [CWnd::RedrawWindow](../../mfc/reference/cwnd-class.md#cwnd__redrawwindow) for each window.  
  
##  <a name="cpaneframewnd__removenonvalidpanes"></a>  CPaneFrameWnd::RemoveNonValidPanes  
 Called by the framework to remove non-valid panes.  
  
```  
virtual void RemoveNonValidPanes();
```  
  
##  <a name="cpaneframewnd__removepane"></a>  CPaneFrameWnd::RemovePane  
 Removes a pane from the mini-frame window.  
  
```  
virtual void RemovePane(
    CBasePane* pWnd,  
    BOOL bDestroy = FALSE,  
    BOOL bNoDelayedDestroy = FALSE);
```  
  
### Parameters  
 [in] `pWnd`  
 A pointer to the pane to remove.  
  
 [in] `bDestroy`  
 Specifies what happens to the mini-frame window. If `bDestroy` is `TRUE`, this method destroys the mini-frame window immediately. If it is `FALSE`, this method destroys the mini-frame window after a certain delay.  
  
 [in] `bNoDelayedDestroy`  
 If `TRUE`, delayed destruction is disabled. If `FALSE`, delayed destruction is enabled.  
  
### Remarks  
 The framework can destroy mini-frame windows immediately or after a certain delay. If you want to delay destruction of mini-frame windows, pass `FALSE` in the `bNoDelayedDestroy` parameter. Delayed destruction occurs when the framework processes the `AFX_WM_CHECKEMPTYMINIFRAME` message.  
  
##  <a name="cpaneframewnd__replacepane"></a>  CPaneFrameWnd::ReplacePane  
 Replaces one pane with another.  
  
```  
virtual void ReplacePane(
    CBasePane* pBarOrg,  
    CBasePane* pBarReplaceWith);
```  
  
### Parameters  
 [in] `pBarOrg`  
 A pointer to the original pane.  
  
 [in] `pBarReplaceWith`  
 A pointer to the pane that replaces the original pane.  
  
##  <a name="cpaneframewnd__savestate"></a>  CPaneFrameWnd::SaveState  
 Saves the pane's state to the registry.  
  
```  
virtual BOOL SaveState(
    LPCTSTR lpszProfileName = NULL,  
    UINT uiID = (UINT) -1);
```  
  
### Parameters  
 [in] `lpszProfileName`  
 The profile name.  
  
 [in] `uiID`  
 The pane ID.  
  
### Return Value  
 `TRUE` if the pane state was saved successfully; otherwise `FALSE`.  
  
##  <a name="cpaneframewnd__setcaptionbuttons"></a>  CPaneFrameWnd::SetCaptionButtons  
 Sets caption buttons.  
  
```  
virtual void SetCaptionButtons(DWORD dwButtons);
```  
  
### Parameters  
 [in] `dwButtons`  
 Bitwise-OR combination of the following values:  
  
- `AFX_CAPTION_BTN_CLOSE`  
  
- `AFX_CAPTION_BTN_PIN`  
  
- `AFX_CAPTION_BTN_MENU`  
  
- `AFX_CAPTION_BTN_CUSTOMIZE`  
  
##  <a name="cpaneframewnd__setdelayshow"></a>  CPaneFrameWnd::SetDelayShow  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void SetDelayShow(BOOL bDelayShow);
```  
  
### Parameters  
 [in] `bDelayShow`  
  
### Remarks  
  
##  <a name="cpaneframewnd__setdockingmanager"></a>  CPaneFrameWnd::SetDockingManager  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void SetDockingManager(CDockingManager* pManager);
```  
  
### Parameters  
 [in] `pManager`  
  
### Remarks  
  
##  <a name="cpaneframewnd__setdockingtimer"></a>  CPaneFrameWnd::SetDockingTimer  
 Sets the docking timer.  
  
```  
void SetDockingTimer(UINT nTimeOut);
```  
  
### Parameters  
 [in] `nTimeOut`  
 Timeout value in milliseconds.  
  
##  <a name="cpaneframewnd__setdockstate"></a>  CPaneFrameWnd::SetDockState  
 Sets the docking state.  
  
```  
virtual void SetDockState(CDockingManager* pDockManager);
```  
  
### Parameters  
 [in] `pDockManager`  
 A pointer to a docking manager.  
  
##  <a name="cpaneframewnd__sethotpoint"></a>  CPaneFrameWnd::SetHotPoint  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void SetHotPoint(CPoint& ptNew);
```  
  
### Parameters  
 [in] `ptNew`  
  
### Remarks  
  
##  <a name="cpaneframewnd__setpredockstate"></a>  CPaneFrameWnd::SetPreDockState  
 Called by the framework to set the predocking state.  
  
```  
virtual BOOL SetPreDockState(
    AFX_PREDOCK_STATE preDockState,  
    CBasePane* pBarToDock = NULL,  
    AFX_DOCK_METHOD dockMethod = DM_MOUSE);
```  
  
### Parameters  
 [in] `preDockState`  
 Possible values:  
  
- `PDS_NOTHING`,  
  
- `PDS_DOCK_REGULAR`,  
  
- `PDS_DOCK_TO_TAB`  
  
 [in] `pBarToDock`  
 A pointer to the pane to dock.  
  
 [in] `dockMethod`  
 The docking method. (This parameter is ignored.)  
  
### Return Value  
 `TRUE` if the mini-frame window is undocked; `FALSE` if it is docked.  
  
##  <a name="cpaneframewnd__sizetocontent"></a>  CPaneFrameWnd::SizeToContent  
 Adjusts the size of a mini-frame window so that it is equivalent to a contained pane.  
  
```  
virtual void SizeToContent();
```  
  
### Remarks  
 Call this method to adjust the size of a mini-frame window to the size of a contained pane.  
  
##  <a name="cpaneframewnd__starttearoff"></a>  CPaneFrameWnd::StartTearOff  
 Tears off a menu.  
  
```  
BOOL StartTearOff(CMFCPopu* pMenu);
```  
  
### Parameters  
 [in] `pMenu`  
 A pointer to a menu.  
  
### Return Value  
 `TRUE` if the method was successful; otherwise, `FALSE`.  
  
##  <a name="cpaneframewnd__storerecentdocksiteinfo"></a>  CPaneFrameWnd::StoreRecentDockSiteInfo  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void StoreRecentDockSiteInfo(CPane* pBar);
```  
  
### Parameters  
 [in] `pBar`  
  
### Remarks  
  
##  <a name="cpaneframewnd__storerecenttabrelatedinfo"></a>  CPaneFrameWnd::StoreRecentTabRelatedInfo  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void StoreRecentTabRelatedInfo(
    CDockablePane* pDockingBar,  
    CDockablePane* pTabbedBar);
```  
  
### Parameters  
 [in] `pDockingBar`  
 [in] `pTabbedBar`  
  
### Remarks  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CWnd Class](../../mfc/reference/cwnd-class.md)
