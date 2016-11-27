---
title: "CMFCAutoHideBar Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCAutoHideBar"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCAutoHideToolBar class"
ms.assetid: 54c8d84f-de64-4efd-8a47-3ea0ade40a70
caps.latest.revision: 35
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
# CMFCAutoHideBar Class
The `CMFCAutoHideBar` class is a special toolbar class that implements the auto-hide feature.  
  
## Syntax  
  
```  
class CMFCAutoHideBar : public CPane  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCAutoHideBar::CMFCAutoHideBar](#cmfcautohidebar__cmfcautohidebar)||  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCAutoHideBar::AddAutoHideWindow](#cmfcautohidebar__addautohidewindow)||  
|[CMFCAutoHideBar::AllowShowOnPaneMenu](#cmfcautohidebar__allowshowonpanemenu)|(Overrides `CPane::AllowShowOnPaneMenu`.)|  
|[CMFCAutoHideBar::CalcFixedLayout](#cmfcautohidebar__calcfixedlayout)|(Overrides [CBasePane::CalcFixedLayout](../../mfc/reference/cbasepane-class.md#cbasepane__calcfixedlayout).)|  
|[CMFCAutoHideBar::Create](#cmfcautohidebar__create)|Creates a control bar and attaches it to the [CPane](../../mfc/reference/cpane-class.md) object. (Overrides [CPane::Create](../../mfc/reference/cpane-class.md#cpane__create).)|  
|[CMFCAutoHideBar::GetFirstAHWindow](#cmfcautohidebar__getfirstahwindow)||  
|[CMFCAutoHideBar::GetVisibleCount](#cmfcautohidebar__getvisiblecount)||  
|[CMFCAutoHideBar::OnShowControlBarMenu](#cmfcautohidebar__onshowcontrolbarmenu)|Called by the framework when a special pane menu is about to be displayed. (Overrides [CPane::OnShowControlBarMenu](../../mfc/reference/cpane-class.md#cpane__onshowcontrolbarmenu).)|  
|[CMFCAutoHideBar::RemoveAutoHideWindow](#cmfcautohidebar__removeautohidewindow)||  
|[CMFCAutoHideBar::SetActiveInGroup](#cmfcautohidebar__setactiveingroup)|(Overrides [CPane::SetActiveInGroup](../../mfc/reference/cpane-class.md#cpane__setactiveingroup).)|  
|[CMFCAutoHideBar::SetRecentVisibleState](#cmfcautohidebar__setrecentvisiblestate)||  
|[CMFCAutoHideBar::ShowAutoHideWindow](#cmfcautohidebar__showautohidewindow)||  
|[CMFCAutoHideBar::StretchPane](#cmfcautohidebar__stretchpane)|Stretches a pane vertically or horizontally. (Overrides [CBasePane::StretchPane](../../mfc/reference/cbasepane-class.md#cbasepane__stretchpane).)|  
|[CMFCAutoHideBar::UnSetAutoHideMode](#cmfcautohidebar__unsetautohidemode)||  
|[CMFCAutoHideBar::UpdateVisibleState](#cmfcautohidebar__updatevisiblestate)||  
  
### Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCAutoHideBar::m_nShowAHWndDelay](#cmfcautohidebar__m_nshowahwnddelay)|The time delay between the moment when the user places the mouse cursor over a [CMFCAutoHideButton Class](../../mfc/reference/cmfcautohidebutton-class.md) and the moment when the framework shows the associated window.|  
  
## Remarks  
 When the user switches a dock pane to auto-hide mode, the framework automatically creates a `CMFCAutoHideBar` object. It also creates the necessary [CAutoHideDockSite](../../mfc/reference/cautohidedocksite-class.md) and [CMFCAutoHideButton](../../mfc/reference/cmfcautohidebutton-class.md) objects. Each `CAutoHideDockSite` object is associated with an individual `CMFCAutoHideButton`.  
  
 The `CMFCAutoHideBar` class implements the display of a `CAutoHideDockSite` when a user's mouse hovers over a `CMFCAutoHideButton`. When the toolbar receives a WM_MOUSEMOVE message, `CMFCAutoHideBar` starts a timer. When the timer finishes, it sends the toolbar a WM_TIMER event notification. The toolbar handles this event by checking whether the mouse pointer is positioned over the same auto-hide button that it was positioned over when the timer started. If it is, the attached `CAutoHideDockSite` is displayed.  
  
 You can control the length of the timer's delay by setting `m_nShowAHWndDelay`. The default value is 400 ms.  
  
## Example  
 The following example demonstrates how to construct a `CMFCAutoHideBar` object and use its `GetDockSiteRow` method.  
  
 [!code-cpp[NVC_MFC_RibbonApp#26](../../mfc/reference/codesnippet/cpp/cmfcautohidebar-class_1.cpp)]  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md)  
  
 [CPane](../../mfc/reference/cpane-class.md)  
  
 [CMFCAutoHideBar](../../mfc/reference/cmfcautohidebar-class.md)  
  
## Requirements  
 **Header:** afxautohidebar.h  
  
##  <a name="cmfcautohidebar__addautohidewindow"></a>  CMFCAutoHideBar::AddAutoHideWindow  
 Adds functionality to a `CDockablePane` window that enables it to auto-hide.  
  
```  
CMFCAutoHideButton* AddAutoHideWindow(
    CDockablePane* pAutoHideWnd,  
    DWORD dwAlignment);
```  
  
### Parameters  
 [in] `pAutoHideWnd`  
 The window that you want to hide.  
  
 [in] `dwAlignment`  
 A value that specifies the alignment of the auto-hide button with the application window.  
  
### Return Value  
  
### Remarks  
 The `dwAlignment` parameter indicates where the auto-hide button resides in the application. The parameter can be any one of the following values:  
  
- `CBRS_ALIGN_LEFT`  
  
- `CBRS_ALIGN_RIGHT`  
  
- `CBRS_ALIGN_TOP`  
  
- `CBRS_ALIGN_BOTTOM`  
  
##  <a name="cmfcautohidebar__allowshowonpanemenu"></a>  CMFCAutoHideBar::AllowShowOnPaneMenu  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL AllowShowOnPaneMenu() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcautohidebar__calcfixedlayout"></a>  CMFCAutoHideBar::CalcFixedLayout  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual CSize CalcFixedLayout(
    BOOL bStretch,  
    BOOL bHorz);
```  
  
### Parameters  
 [in] `bStretch`  
 [in] `bHorz`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcautohidebar__cmfcautohidebar"></a>  CMFCAutoHideBar::CMFCAutoHideBar  
 Constructs a CMFCAutoHideBar object.  
  
```  
CMFCAutoHideBar();
```  
  
### Remarks  
  
##  <a name="cmfcautohidebar__create"></a>  CMFCAutoHideBar::Create  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL Create(
    LPCTSTR lpszClassName,  
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID,  
    DWORD dwControlBarStyle = AFX_DEFAULT_PANE_STYLE,  
    CCreateContext* pContext = NULL);
```  
  
### Parameters  
 [in] `lpszClassName`  
 [in] `dwStyle`  
 [in] `rect`  
 [in] `pParentWnd`  
 [in] `nID`  
 [in] `dwControlBarStyle`  
 [in] `pContext`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcautohidebar__getfirstahwindow"></a>  CMFCAutoHideBar::GetFirstAHWindow  
 Returns a pointer to the first auto-hide window in the application.  
  
```  
CDockablePane* GetFirstAHWindow();
```  
  
### Return Value  
 The first auto-hide window in the application, or NULL if there isn't one.  
  
### Remarks  
  
##  <a name="cmfcautohidebar__getvisiblecount"></a>  CMFCAutoHideBar::GetVisibleCount  
 Gets the number of visible auto-hide buttons.  
  
```  
int GetVisibleCount();
```  
  
### Return Value  
 Returns the number of visible auto-hide buttons.  
  
### Remarks  
  
##  <a name="cmfcautohidebar__m_nshowahwnddelay"></a>  CMFCAutoHideBar::m_nShowAHWndDelay  
 The time delay between the moment when the user places the mouse cursor over a [CMFCAutoHideButton Class](../../mfc/reference/cmfcautohidebutton-class.md) and the moment when the framework shows the associated window.  
  
```  
int CMFCAutoHideBar::m_nShowAHWndDelay = 400;  
```  
  
### Remarks  
 When the user places the mouse cursor over a `CMFCAutoHideButton`, there is a slight delay before the framework displays the associated window. This parameter determines the length of that delay in milliseconds.  
  
##  <a name="cmfcautohidebar__onshowcontrolbarmenu"></a>  CMFCAutoHideBar::OnShowControlBarMenu  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL OnShowControlBarMenu(CPoint);
```  
  
### Parameters  
 [in] `CPoint`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcautohidebar__removeautohidewindow"></a>  CMFCAutoHideBar::RemoveAutoHideWindow  
 Removes and destroys the auto-hide window.  
  
```  
    BOOL RemoveAutoHideWindow(
		    CDockablePane* pAutoHideWnd);
```  
  
### Parameters  
 CDockablePane* `pAutoHideWnd`  
 The auto-hide window to remove.  
  
### Return Value  
 TRUE if successful; otherwise FALSE.  
  
### Remarks  
  
##  <a name="cmfcautohidebar__setactiveingroup"></a>  CMFCAutoHideBar::SetActiveInGroup  
 Flags an auto-hide bar as active.  
  
```  
virtual void SetActiveInGroup(
		    BOOL bActive);

 
```  
  
### Parameters  
 [in] BOOL `bActive`  
 TRUE to set to active; otherwise FALSE.  
  
### Remarks  
 See [CPane::SetActiveInGroup](../../mfc/reference/cpane-class.md#cpane__setactiveingroup).  
  
##  <a name="cmfcautohidebar__setrecentvisiblestate"></a>  CMFCAutoHideBar::SetRecentVisibleState  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void SetRecentVisibleState(BOOL bState);
```  
  
### Parameters  
 [in] `bState`  
  
### Remarks  
  
##  <a name="cmfcautohidebar__showautohidewindow"></a>  CMFCAutoHideBar::ShowAutoHideWindow  
 Shows the auto-hide window.  
  
```  
BOOL ShowAutoHideWindow(
		CDockablePane* pAutoHideWnd,  
		BOOL bShow,  
		BOOL bDelay);

 
```  
  
### Parameters  
 [in] CDockablePane* `pAutoHideWnd`  
 [in] BOOL `bShow`  
 TRUE to show the window.  
  
 [in] BOOL `bDelay`  
 This parameter is ignored.  
  
### Return Value  
 TRUE if successful; otherwise FALSE.  
  
### Remarks  
  
##  <a name="cmfcautohidebar__stretchpane"></a>  CMFCAutoHideBar::StretchPane  
 Resizes the auto-hide bar in its collapsed state to fit the `CMFCAutoHideButton` object.  
  
```  
virtual CSize StretchPane(
    int nLength,   
    BOOL bVert);
```  
  
### Parameters  
 [in] `nLength`  
 The value is unused in the base implementation. In derived implementations, use this value to indicate the length of the resized pane.  
  
 [in] `bVert`  
 The value is unused in the base implementation. In derived implementations, use `TRUE` to handle the case where the auto-hide bar is collapsed vertically, and `FALSE` for the case where the auto-hide bar is collapsed horizontally.  
  
### Return Value  
 The resulting size of the resized pane.  
  
### Remarks  
 Derived classes can override this method to customize the behavior.  
  
##  <a name="cmfcautohidebar__unsetautohidemode"></a>  CMFCAutoHideBar::UnSetAutoHideMode  
 Disables auto-hide mode for a group of auto-hide bars.  
  
```  
void UnSetAutoHideMode(CDockablePane* pFirstBarInGroup)  
```  
  
### Parameters  
 [in] pFirstBarInGroup  
 A pointer to the first auto-hide bar in the group.  
  
### Remarks  
  
##  <a name="cmfcautohidebar__updatevisiblestate"></a>  CMFCAutoHideBar::UpdateVisibleState  
 Called by the framework when the auto-hide bar needs to be redrawn.  
  
```  
void UpdateVisibleState();
```  
  
### Remarks  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CPane Class](../../mfc/reference/cpane-class.md)   
 [CAutoHideDockSite Class](../../mfc/reference/cautohidedocksite-class.md)   
 [CMFCAutoHideButton Class](../../mfc/reference/cmfcautohidebutton-class.md)
