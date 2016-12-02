---
title: "CMFCOutlookBarTabCtrl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCOutlookBarTabCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCOutlookBarTabCtrl class"
ms.assetid: b1f2b3f7-cc59-49a3-99d8-7ff9b37c044b
caps.latest.revision: 26
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
# CMFCOutlookBarTabCtrl Class
A tab control that has the visual appearance of the **Navigation Pane** in Microsoft Outlook.  
  
## Syntax  
  
```  
class CMFCOutlookBarTabCtrl : public CMFCBaseTabCtrl  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|`CMFCOutlookBarTabCtrl::CMFCOutlookBarTabCtrl`|Default constructor.|  
|`CMFCOutlookBarTabCtrl::~CMFCOutlookBarTabCtrl`|Destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCOutlookBarTabCtrl::AddControl](#cmfcoutlookbartabctrl__addcontrol)|Adds a Windows control as a new tab in the Outlook bar.|  
|`CMFCOutlookBarTabCtrl::CalcRectEdit`|Called by the framework to determine the dimensions of the edit box that appears when a user renames a tab. (Overrides `CMFCBaseTabCtrl::CalcRectEdit`.)|  
|[CMFCOutlookBarTabCtrl::CanShowFewerPageButtons](#cmfcoutlookbartabctrl__canshowfewerpagebuttons)|Called by the framework during resizing operations to determine if fewer Outlook bar tab page buttons can be displayed than are currently visible.|  
|[CMFCOutlookBarTabCtrl::CanShowMorePageButtons](#cmfcoutlookbartabctrl__canshowmorepagebuttons)|Called by the framework during resizing operations to determine if more Outlook bar tab page buttons can be displayed than are currently visible.|  
|[CMFCOutlookBarTabCtrl::Create](#cmfcoutlookbartabctrl__create)|Creates the Outlook bar tab control.|  
|`CMFCOutlookBarTabCtrl::CreateObject`|Used by the framework to create a dynamic instance of this class type.|  
|[CMFCOutlookBarTabCtrl::EnableAnimation](#cmfcoutlookbartabctrl__enableanimation)|Specifies whether the animation that occurs during the switch between active tabs is enabled.|  
|[CMFCOutlookBarTabCtrl::EnableInPlaceEdit](#cmfcoutlookbartabctrl__enableinplaceedit)|Specifies whether a user can modify the text labels on the tab buttons of the Outlook bar. (Overrides [CMFCBaseTabCtrl::EnableInPlaceEdit](../../mfc/reference/cmfcbasetabctrl-class.md#cmfcbasetabctrl__enableinplaceedit).)|  
|[CMFCOutlookBarTabCtrl::EnableScrollButtons](#cmfcoutlookbartabctrl__enablescrollbuttons)|Called by the framework to enable buttons that allow the user to scroll through buttons on the Outlook bar pane.|  
|`CMFCOutlookBarTabCtrl::FindTargetWnd`|Identifies the pane that contains a specified point. (Overrides [CMFCBaseTabCtrl::FindTargetWnd](../../mfc/reference/cmfcbasetabctrl-class.md#cmfcbasetabctrl__findtargetwnd).)|  
|[CMFCOutlookBarTabCtrl::GetBorderSize](#cmfcoutlookbartabctrl__getbordersize)|Returns the border size of the Outlook tab control.|  
|`CMFCOutlookBarTabCtrl::GetTabArea`|Retrieves the size and position of the tab area of the tab control. (Overrides [CMFCBaseTabCtrl::GetTabArea](../../mfc/reference/cmfcbasetabctrl-class.md#cmfcbasetabctrl__gettabarea).)|  
|`CMFCOutlookBarTabCtrl::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) object that is associated with this class type.|  
|[CMFCOutlookBarTabCtrl::GetVisiblePageButtons](#cmfcoutlookbartabctrl__getvisiblepagebuttons)||  
|[CMFCOutlookBarTabCtrl::IsAnimation](#cmfcoutlookbartabctrl__isanimation)|Determines whether the animation that occurs during the switch between active tabs is enabled.|  
|[CMFCOutlookBarTabCtrl::IsMode2003](#cmfcoutlookbartabctrl__ismode2003)|Determines if the Outlook bar tab control is in a mode that emulates Microsoft Outlook 2003.|  
|`CMFCOutlookBarTabCtrl::IsPtInTabArea`|Determines if a point is inside the tab area. (Overrides [CMFCBaseTabCtrl::IsPtInTabArea](../../mfc/reference/cmfcbasetabctrl-class.md#cmfcbasetabctrl__isptintabarea).)|  
|`CMFCOutlookBarTabCtrl::IsTabDetachable`|Determines whether a tab is detachable. (Overrides [CMFCBaseTabCtrl::IsTabDetachable](../../mfc/reference/cmfcbasetabctrl-class.md#cmfcbasetabctrl__istabdetachable).)|  
|`CMFCOutlookBarTabCtrl::OnChangeTabs`|Called by the framework when a tab is inserted or removed. (Overrides `CMFCBaseTabCtrl::OnChangeTabs`.)|  
|[CMFCOutlookBarTabCtrl::OnShowFewerPageButtons](#cmfcoutlookbartabctrl__onshowfewerpagebuttons)|Called by the framework to decrease the number of tab page buttons that are visible.|  
|[CMFCOutlookBarTabCtrl::OnShowMorePageButtons](#cmfcoutlookbartabctrl__onshowmorepagebuttons)|Called by the framework to increase the number of tab page buttons that are visible.|  
|[CMFCOutlookBarTabCtrl::OnShowOptions](#cmfcoutlookbartabctrl__onshowoptions)|Displays the **Navigation Pane Options** dialog.|  
|`CMFCOutlookBarTabCtrl::RecalcLayout`|Recalculates the internal layout of the tab control. (Overrides [CMFCBaseTabCtrl::RecalcLayout](../../mfc/reference/cmfcbasetabctrl-class.md#cmfcbasetabctrl__recalclayout).)|  
|[CMFCOutlookBarTabCtrl::SetActiveTab](#cmfcoutlookbartabctrl__setactivetab)|Sets the active tab. (Overrides [CMFCBaseTabCtrl::SetActiveTab](../../mfc/reference/cmfcbasetabctrl-class.md#cmfcbasetabctrl__setactivetab).)|  
|[CMFCOutlookBarTabCtrl::SetBorderSize](#cmfcoutlookbartabctrl__setbordersize)|Sets the border size of the Outlook tab control.|  
|[CMFCOutlookBarTabCtrl::SetPageButtonTextAlign](#cmfcoutlookbartabctrl__setpagebuttontextalign)|Sets the alignment of the text labels on the tab buttons of the Outlook bar.|  
|[CMFCOutlookBarTabCtrl::SetToolbarImageList](#cmfcoutlookbartabctrl__settoolbarimagelist)|Sets the bitmap that contains the icons that are displayed on the bottom of the Outlook bar in Outlook 2003 mode (see [CMFCOutlookBar Class](../../mfc/reference/cmfcoutlookbar-class.md)).|  
|[CMFCOutlookBarTabCtrl::SetVisiblePageButtons](#cmfcoutlookbartabctrl__setvisiblepagebuttons)||  
  
## Remarks  
 To create an Outlook bar that has docking support, use a `CMFCOutlookBar` object to host the Outlook bar tab control. For more information, see [CMFCOutlookBar Class](../../mfc/reference/cmfcoutlookbar-class.md).  
  
## Example  
 The following example demonstrates how to initialize a `CMFCOutlookBarTabCtrl` object and use various methods in the `CMFCOutlookBarTabCtrl` class. The example shows how to enable the in-place editing of the text label on the tab page buttons of the Outlook bar, enable the animation, enable scroll handles that enable the user to scroll through buttons on the Outlook bar pane, set the border size of the Outlook tab control, and set the alignment of the text labels on the tab buttons of the Outlook bar. This code snippet is part of the [Outlook Demo sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_OutlookDemo#1](../../mfc/reference/codesnippet/cpp/cmfcoutlookbartabctrl-class_1.cpp)]  
[!code-cpp[NVC_MFC_OutlookDemo#2](../../mfc/reference/codesnippet/cpp/cmfcoutlookbartabctrl-class_2.cpp)]  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CMFCBaseTabCtrl](../../mfc/reference/cmfcbasetabctrl-class.md)  
  
 [CMFCOutlookBarTabCtrl](../../mfc/reference/cmfcoutlookbartabctrl-class.md)  
  
## Requirements  
 **Header:** afxoutlookbartabctrl.h  
  
##  <a name="cmfcoutlookbartabctrl__addcontrol"></a>  CMFCOutlookBarTabCtrl::AddControl  
 Adds a Windows control as a new tab in the Outlook bar.  
  
```  
void AddControl(
    CWnd* pWndCtrl,  
    LPCTSTR lpszName,  
    int nImageID=-1,  
    BOOL bDetachable=TRUE,  
    DWORD dwControlBarStyle=AFX_CBRS_FLOAT |  AFX_CBRS_CLOSE | AFX_CBRS_RESIZE |  CBRS_AFX_AUTOHIDE);
```  
  
### Parameters  
 [in] `pWndCtrl`  
 A pointer to a control to add.  
  
 [in] `lpszName`  
 Specifies the name of tab.  
  
 [in] `bDetachable`  
 If `TRUE`, the page will be created as detachable.  
  
 [in] `nImageID`  
 Image index in the internal image list for the image to be displayed in the new tab.  
  
 [in] `dwControlBarStyle`  
 Specifies the AFX_ `CBRS_`* style for wrapped docking panes.  
  
### Remarks  
 Use this function to add a control as a new page of an outlook bar.  
  
 This function internally calls on [CMFCBaseTabCtrl::AddTab](../../mfc/reference/cmfcbasetabctrl-class.md#cmfcbasetabctrl__addtab).  
  
 If you set `bDetachable` to `TRUE`, `AddControl` internally creates a `CDockablePaneAdapter` object and wraps the added control. It automatically sets the runtime class of the tabbed window to the runtime class of `CMFCOutlookBar` and the runtime class of the floating frame to `CMultiPaneFrameWnd`.  
  
### Example  
 The following example demonstrates how to use the `AddControl` method in the `CMFCOutlookBarTabCtrl` class. This code snippet is part of the [Outlook Demo sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_OutlookDemo#3](../../mfc/reference/codesnippet/cpp/cmfcoutlookbartabctrl-class_3.cpp)]  
  
##  <a name="cmfcoutlookbartabctrl__canshowfewerpagebuttons"></a>  CMFCOutlookBarTabCtrl::CanShowFewerPageButtons  
 Called by the framework during resizing operations to determine whether fewer Outlook bar tab page buttons can be displayed than are currently visible.  
  
```  
virtual BOOL CanShowFewerPageButtons() const;

 
```  
  
### Return Value  
 `TRUE` if there is more than one button; otherwise `FALSE`.  
  
### Remarks  
 The Outlook bar tab control dynamically adds or removes tabs from the display depending on how much room is available. This method is used by the framework to assist in that process.  
  
##  <a name="cmfcoutlookbartabctrl__canshowmorepagebuttons"></a>  CMFCOutlookBarTabCtrl::CanShowMorePageButtons  
 Called by the framework during resizing operations to determine whether more Outlook bar tab page buttons can be displayed than are currently visible.  
  
```  
virtual BOOL CanShowMorePageButtons() const;

 
```  
  
### Return Value  
 `TRUE` if there are buttons that are not currently visible; otherwise `FALSE`.  
  
### Remarks  
 The Outlook bar tab control dynamically adds or removes tabs from the display, depending on how much room is available. This method is used by the framework to assist in that process.  
  
##  <a name="cmfcoutlookbartabctrl__create"></a>  CMFCOutlookBarTabCtrl::Create  
 Creates the Outlook bar tab control.  
  
```  
virtual BOOL Create(
    const CRect& rect,  
    CWnd* pParentWnd,  
    UINT nID);
```  
  
### Parameters  
 [in] `rect`  
 Specifies the initial size and position, in pixels.  
  
 [in] `pParentWnd`  
 Points to the parent window. Must not be `NULL`.  
  
 [in] `nID`  
 The control ID.  
  
### Return Value  
 Nonzero if the control has been created successfully; otherwise 0.  
  
### Remarks  
 Usually, outlook bar tab controls are created when [CMFCOutlookBar Class](../../mfc/reference/cmfcoutlookbar-class.md) controls the `WM_CREATE` message of the process.  
  
##  <a name="cmfcoutlookbartabctrl__enableanimation"></a>  CMFCOutlookBarTabCtrl::EnableAnimation  
 Specifies whether the animation that occurs during the switch between active tabs is enabled.  
  
```  
static void EnableAnimation(BOOL bEnable=TRUE);
```  
  
### Parameters  
 [in] `bEnable`  
 Specifies whether the animation should be enabled or disabled.  
  
### Remarks  
 Call this function to enable and disable animation. When the user opens a tab page, the page's caption slides up or down if animation is enabled. If animation is disabled, the page becomes active immediately.  
  
 By the default, the animation is enabled.  
  
##  <a name="cmfcoutlookbartabctrl__enableinplaceedit"></a>  CMFCOutlookBarTabCtrl::EnableInPlaceEdit  
 Specifies whether a user can modify the text labels on the tab page buttons of the Outlook bar.  
  
```  
virtual void EnableInPlaceEdit(BOOL bEnable);
```  
  
### Parameters  
 `bEnable`  
 If `TRUE`, enable the in-place editing of the text label. If `FALSE`, disable the in-place editing.  
  
### Remarks  
 Call this function to enable or disable in-place editing of text  labels on tab page buttons. By default the in-place editing is disabled.  
  
##  <a name="cmfcoutlookbartabctrl__enablescrollbuttons"></a>  CMFCOutlookBarTabCtrl::EnableScrollButtons  
 Called by the framework to enable scroll handles that allow the user to scroll through buttons on the Outlook bar pane.  
  
```  
void EnableScrollButtons(
    BOOL bEnable = TRUE,  
    BOOL bIsUp = TRUE,  
    BOOL bIsDown = TRUE);
```  
  
### Parameters  
 [in] `bEnable`  
 Determines whether the scroll buttons are displayed.  
  
 [in] `bIsUp`  
 Determines whether the top scrollbar is displayed.  
  
 [in] `bIsDown`  
 Determines whether the bottom scrollbar is displayed.  
  
### Remarks  
 Enables the display of the scroll buttons. This method is called by the framework when the active tab changes to restore the scroll buttons.  
  
##  <a name="cmfcoutlookbartabctrl__getbordersize"></a>  CMFCOutlookBarTabCtrl::GetBorderSize  
 Returns the border size of the Outlook tab control.  
  
```  
int GetBorderSize() const;

 
```  
  
### Return Value  
 The border size, in pixels.  
  
##  <a name="cmfcoutlookbartabctrl__getvisiblepagebuttons"></a>  CMFCOutlookBarTabCtrl::GetVisiblePageButtons  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
int GetVisiblePageButtons() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcoutlookbartabctrl__isanimation"></a>  CMFCOutlookBarTabCtrl::IsAnimation  
 Specifies whether the animation that occurs during the switch between active tabs is enabled.  
  
```  
static BOOL IsAnimation();
```  
  
### Return Value  
 Nonzero if the animation is enabled; otherwise 0.  
  
### Remarks  
 Call the [CMFCOutlookBarTabCtrl::EnableAnimation](#cmfcoutlookbartabctrl__enableanimation) function to enable or disable animation.  
  
##  <a name="cmfcoutlookbartabctrl__ismode2003"></a>  CMFCOutlookBarTabCtrl::IsMode2003  
 Determines whether the Outlook bar tab control is in a mode that emulates Microsoft Outlook 2003.  
  
```  
BOOL IsMode2003() const;

 
```  
  
### Return Value  
 `TRUE` if the Outlook bar tab control is in Outlook 2003 mode; otherwise `FALSE`;  
  
### Remarks  
 This value is set by [CMFCOutlookBar::SetMode2003](../../mfc/reference/cmfcoutlookbar-class.md#cmfcoutlookbar__setmode2003).  
  
##  <a name="cmfcoutlookbartabctrl__onshowfewerpagebuttons"></a>  CMFCOutlookBarTabCtrl::OnShowFewerPageButtons  
 Called by the framework to decrease the number of tab page buttons that are visible.  
  
```  
virtual void OnShowFewerPageButtons();
```  
  
### Remarks  
 This method adjusts the number of visible page tab buttons when the control is resized.  
  
##  <a name="cmfcoutlookbartabctrl__onshowmorepagebuttons"></a>  CMFCOutlookBarTabCtrl::OnShowMorePageButtons  
 Called by the framework to increase the number of tab page buttons that are visible.  
  
```  
virtual void OnShowMorePageButtons();
```  
  
### Remarks  
 This method adjust the number of tab page buttons that are visible when the control is resized.  
  
##  <a name="cmfcoutlookbartabctrl__onshowoptions"></a>  CMFCOutlookBarTabCtrl::OnShowOptions  
 Displays the **Navigation Pane Options** dialog box.  
  
```  
virtual void OnShowOptions();
```  
  
### Remarks  
 The **Navigation Pane Options** dialog box allows the user to select which tab page buttons are to be displayed, and the order in which they are displayed.  
  
 This method is called by the framework when the user selects the **Navigation Pane Options** menu item from the control's customization menu.  
  
##  <a name="cmfcoutlookbartabctrl__setactivetab"></a>  CMFCOutlookBarTabCtrl::SetActiveTab  
 Sets the active tab. The active tab is the one that is open, with its contents visible.  
  
```  
virtual BOOL SetActiveTab(int iTab);
```  
  
### Parameters  
 [in] `iTab`  
 The zero-based index of a tab to be opened.  
  
### Return Value  
 Nonzero if the specified tab has been opened successfully; otherwise 0.  
  
### Remarks  
 The visual effect of setting the active tab depends on whether you have enabled animation. For more information, see [CMFCOutlookBarTabCtrl::EnableAnimation](#cmfcoutlookbartabctrl__enableanimation).  
  
##  <a name="cmfcoutlookbartabctrl__setbordersize"></a>  CMFCOutlookBarTabCtrl::SetBorderSize  
 Sets the border size of the Outlook tab control.  
  
```  
void SetBorderSize(int nBorderSize);
```  
  
### Parameters  
 [in] `nBorderSize`  
 Specifies the new border size in pixels.  
  
### Remarks  
 Sets the new border size and recalculates the outlook window layout.  
  
##  <a name="cmfcoutlookbartabctrl__setpagebuttontextalign"></a>  CMFCOutlookBarTabCtrl::SetPageButtonTextAlign  
 Sets the alignment of the text labels on the tab buttons of the Outlook bar.  
  
```  
void SetPageButtonTextAlign(
    UINT uiAlign,  
    BOOL bRedraw=TRUE);
```  
  
### Parameters  
 [in] `uiAlign`  
 Specifies the text alignment.  
  
 [in] `bRedraw`  
 If `TRUE`, the outlook window will be redrawn.  
  
### Remarks  
 Use this function to change text alignment for page buttons.  
  
 `uiAlign` can be one of the following values:  
  
|Constant|Meaning|  
|--------------|-------------|  
|TA_LEFT|Left alignment|  
|TA_CENTER|Center alignment|  
|TA_RIGHT|Right alignment|  
  
 The default value is TA_CENTER.  
  
##  <a name="cmfcoutlookbartabctrl__settoolbarimagelist"></a>  CMFCOutlookBarTabCtrl::SetToolbarImageList  
 Sets the bitmap that contains the icons that are displayed on the bottom of the Outlook bar in Outlook 2003 mode.  
  
```  
BOOL SetToolbarImageList(
    UINT uiID,  
    int cx,  
    COLORREF clrTransp=RGB(255,
    0,
    255));
```  
  
### Parameters  
 [in] `uiID`  
 Specifies the resource ID of the image to load.  
  
 [in] `cx`  
 Specifies the width of an image in the image list, in pixels.  
  
 [in] `clrTransp`  
 An RGB value that specifies the transparent color.  
  
### Return Value  
 Returns `TRUE` if successful; otherwise returns `FALSE`.  
  
### Remarks  
 Use this function to attach an image list whose images will be displayed on toolbar buttons in Microsoft Office 2003 mode. Image indexes should correspond to page indexes.  
  
 This method should not be called if not in Microsoft Office 2003 mode. For more information, see [CMFCOutlookBar Class](../../mfc/reference/cmfcoutlookbar-class.md).  
  
##  <a name="cmfcoutlookbartabctrl__setvisiblepagebuttons"></a>  CMFCOutlookBarTabCtrl::SetVisiblePageButtons  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void SetVisiblePageButtons(int nVisiblePageButtons);
```  
  
### Parameters  
 [in] `nVisiblePageButtons`  
  
### Remarks  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CMFCBaseTabCtrl Class](../../mfc/reference/cmfcbasetabctrl-class.md)   
 [CMFCOutlookBar Class](../../mfc/reference/cmfcoutlookbar-class.md)   
 [CMFCOutlookBarPane Class](../../mfc/reference/cmfcoutlookbarpane-class.md)
