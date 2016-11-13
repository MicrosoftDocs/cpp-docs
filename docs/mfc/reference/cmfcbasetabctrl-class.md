---
title: "CMFCBaseTabCtrl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCBaseTabCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCBaseTabCtrl class"
ms.assetid: 7270c55f-6f6e-4dd2-b0d2-291afeac3882
caps.latest.revision: 41
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
# CMFCBaseTabCtrl Class
Implements the base functionality for tabbed windows.  
  
## Syntax  
  
```  
class CMFCBaseTabCtrl : public CWnd  
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCBaseTabCtrl::AddIcon](#cmfcbasetabctrl__addicon)||  
|[CMFCBaseTabCtrl::AddTab](#cmfcbasetabctrl__addtab)|Adds a new tab to the tabbed window.|  
|[CMFCBaseTabCtrl::ApplyRestoredTabInfo](#cmfcbasetabctrl__applyrestoredtabinfo)||  
|[CMFCBaseTabCtrl::AutoDestroyWindow](#cmfcbasetabctrl__autodestroywindow)||  
|[CMFCBaseTabCtrl::CalcRectEdit](#cmfcbasetabctrl__calcrectedit)||  
|[CMFCBaseTabCtrl::CleanUp](#cmfcbasetabctrl__cleanup)||  
|[CMFCBaseTabCtrl::ClearImageList](#cmfcbasetabctrl__clearimagelist)||  
|[CMFCBaseTabCtrl::DetachTab](#cmfcbasetabctrl__detachtab)|Detaches a tab from a tabbed window.|  
|[CMFCBaseTabCtrl::EnableActivateLastActive](#cmfcbasetabctrl__enableactivatelastactive)||  
|[CMFCBaseTabCtrl::EnableAutoColor](#cmfcbasetabctrl__enableautocolor)|Enables or disables automatic tab coloring.|  
|[CMFCBaseTabCtrl::EnableCustomToolTips](#cmfcbasetabctrl__enablecustomtooltips)|Enables or disables custom tooltips for tabs.|  
|[CMFCBaseTabCtrl::EnableInPlaceEdit](#cmfcbasetabctrl__enableinplaceedit)|Enables or disables direct editing of tab labels.|  
|[CMFCBaseTabCtrl::EnableTabDetach](#cmfcbasetabctrl__enabletabdetach)|Enables detachable tabs.|  
|[CMFCBaseTabCtrl::EnableTabSwap](#cmfcbasetabctrl__enabletabswap)|Enables or disables whether the user can change the tab order by using a mouse.|  
|[CMFCBaseTabCtrl::EnsureVisible](#cmfcbasetabctrl__ensurevisible)|Scrolls the tabs until the specified tab is visible. This method has no effect if the specified tab is already visible.|  
|[CMFCBaseTabCtrl::EnterDragMode](#cmfcbasetabctrl__enterdragmode)||  
|[CMFCBaseTabCtrl::FindTargetWnd](#cmfcbasetabctrl__findtargetwnd)|Returns a pane that contains a specified point.|  
|[CMFCBaseTabCtrl::FireChangeActiveTab](#cmfcbasetabctrl__firechangeactivetab)||  
|[CMFCBaseTabCtrl::FireChangingActiveTab](#cmfcbasetabctrl__firechangingactivetab)||  
|[CMFCBaseTabCtrl::GetActiveTab](#cmfcbasetabctrl__getactivetab)|Returns the index of the active tab.|  
|[CMFCBaseTabCtrl::GetActiveTabColor](#cmfcbasetabctrl__getactivetabcolor)|Returns the background color of the active tab.|  
|[CMFCBaseTabCtrl::GetActiveTabTextColor](#cmfcbasetabctrl__getactivetabtextcolor)|Returns the text color of the active tab.|  
|[CMFCBaseTabCtrl::GetActiveWnd](#cmfcbasetabctrl__getactivewnd)|Returns a pointer the active page of the tab control.|  
|[CMFCBaseTabCtrl::GetAutoColors](#cmfcbasetabctrl__getautocolors)|Returns a reference to the array of colors that are used for automatic coloring.|  
|[CMFCBaseTabCtrl::GetFirstVisibleTab](#cmfcbasetabctrl__getfirstvisibletab)|Returns a pointer to the first visible tab.|  
|[CMFCBaseTabCtrl::GetFirstVisibleTabNum](#cmfcbasetabctrl__getfirstvisibletabnum)||  
|[CMFCBaseTabCtrl::GetHighlightedTab](#cmfcbasetabctrl__gethighlightedtab)|Returns the index of the currently highlighted tab.|  
|[CMFCBaseTabCtrl::GetImageList](#cmfcbasetabctrl__getimagelist)||  
|[CMFCBaseTabCtrl::GetImageSize](#cmfcbasetabctrl__getimagesize)||  
|[CMFCBaseTabCtrl::GetLastVisibleTab](#cmfcbasetabctrl__getlastvisibletab)||  
|[CMFCBaseTabCtrl::GetLocation](#cmfcbasetabctrl__getlocation)|Returns a variable of the LOCATION data type that indicates where the tab area is positioned relative to the tab control. For example, on the top or on the bottom.|  
|[CMFCBaseTabCtrl::GetMaxWindowSize](#cmfcbasetabctrl__getmaxwindowsize)||  
|[CMFCBaseTabCtrl::GetTabArea](#cmfcbasetabctrl__gettabarea)|Returns the size and the position of the tab area in the tabbed window. The position of the tab area is defined by using coordinates.|  
|[CMFCBaseTabCtrl::GetTabBkColor](#cmfcbasetabctrl__gettabbkcolor)|Returns the background color of the specified tab.|  
|[CMFCBaseTabCtrl::GetTabBorderSize](#cmfcbasetabctrl__gettabbordersize)|Returns the size of the tab borders in the tab control.|  
|[CMFCBaseTabCtrl::GetTabByID](#cmfcbasetabctrl__gettabbyid)|Returns the index of the tab that is identified by a specified ID.|  
|[CMFCBaseTabCtrl::GetTabCloseButton](#cmfcbasetabctrl__gettabclosebutton)||  
|[CMFCBaseTabCtrl::GetTabFromHwnd](#cmfcbasetabctrl__gettabfromhwnd)|Returns the index of a tab that contains a specified HWND object.|  
|[CMFCBaseTabCtrl::GetTabFromPoint](#cmfcbasetabctrl__gettabfrompoint)|Returns the tab that contains a specified point.|  
|[CMFCBaseTabCtrl::GetTabFullWidth](#cmfcbasetabctrl__gettabfullwidth)||  
|[CMFCBaseTabCtrl::GetTabHicon](#cmfcbasetabctrl__gettabhicon)|Returns the icon associated with the specified tab.|  
|[CMFCBaseTabCtrl::GetTabID](#cmfcbasetabctrl__gettabid)|Returns the ID of a tab by using the index of the tab.|  
|[CMFCBaseTabCtrl::GetTabIcon](#cmfcbasetabctrl__gettabicon)|Returns the icon ID for a specified tab.|  
|[CMFCBaseTabCtrl::GetTabLabel](#cmfcbasetabctrl__gettablabel)|Returns the text of a specified tab.|  
|[CMFCBaseTabCtrl::GetTabRect](#cmfcbasetabctrl__gettabrect)|Retrieves the size and position of a specified tab.|  
|[CMFCBaseTabCtrl::GetTabsHeight](#cmfcbasetabctrl__gettabsheight)||  
|[CMFCBaseTabCtrl::GetTabsRect](#cmfcbasetabctrl__gettabsrect)||  
|[CMFCBaseTabCtrl::GetTabTextColor](#cmfcbasetabctrl__gettabtextcolor)|Returns the text color of a specified tab.|  
|[CMFCBaseTabCtrl::GetTabWnd](#cmfcbasetabctrl__gettabwnd)|Returns the pointer to a pane that resides on a specified tab page.|  
|[CMFCBaseTabCtrl::GetTabWndNoWrapper](#cmfcbasetabctrl__gettabwndnowrapper)|Returns the direct pointer to a control that resides on a specified tab page, even if the control has a wrapper.|  
|[CMFCBaseTabCtrl::GetTabsNum](#cmfcbasetabctrl__gettabsnum)|Returns the number of tabs that are contained in the tab control.|  
|[CMFCBaseTabCtrl::GetToolTipCtrl](#cmfcbasetabctrl__gettooltipctrl)|Returns a reference to the tooltip control associated with the `CMFCBaseTabCtrl` object.|  
|[CMFCBaseTabCtrl::GetVisibleTabsNum](#cmfcbasetabctrl__getvisibletabsnum)|Returns the number of visible tabs.|  
|[CMFCBaseTabCtrl::HasImage](#cmfcbasetabctrl__hasimage)||  
|[CMFCBaseTabCtrl::HideSingleTab](#cmfcbasetabctrl__hidesingletab)|Sets an option that hides a window tab, but only if the tabbed window displays a just one visible tab.|  
|[CMFCBaseTabCtrl::InsertTab](#cmfcbasetabctrl__inserttab)|Inserts a new tab.|  
|[CMFCBaseTabCtrl::InvalidateTab](#cmfcbasetabctrl__invalidatetab)||  
|[CMFCBaseTabCtrl::IsActiveTabCloseButton](#cmfcbasetabctrl__isactivetabclosebutton)||  
|[CMFCBaseTabCtrl::IsAutoColor](#cmfcbasetabctrl__isautocolor)|Returns a value that indicates whether a tabbed window is in automatic-color mode.|  
|[CMFCBaseTabCtrl::IsAutoDestroyWindow](#cmfcbasetabctrl__isautodestroywindow)||  
|[CMFCBaseTabCtrl::IsColored](#cmfcbasetabctrl__iscolored)||  
|[CMFCBaseTabCtrl::IsDialogControl](#cmfcbasetabctrl__isdialogcontrol)||  
|[CMFCBaseTabCtrl::IsDrawNoPrefix](#cmfcbasetabctrl__isdrawnoprefix)||  
|[CMFCBaseTabCtrl::IsFlatFrame](#cmfcbasetabctrl__isflatframe)|Returns a value that indicates whether the frame for the tab area is flat or 3D.|  
|[CMFCBaseTabCtrl::IsFlatTab](#cmfcbasetabctrl__isflattab)||  
|[CMFCBaseTabCtrl::IsHideSingleTab](#cmfcbasetabctrl__ishidesingletab)|Returns a value that indicates whether the tab control is configured to hide a tab, but only if a tabbed window has just one visible tab.|  
|[CMFCBaseTabCtrl::IsIconAdded](#cmfcbasetabctrl__isiconadded)||  
|[CMFCBaseTabCtrl::IsInPlaceEdit](#cmfcbasetabctrl__isinplaceedit)|Indicates whether users can modify the label on a tab.|  
|[CMFCBaseTabCtrl::IsLeftRightRounded](#cmfcbasetabctrl__isleftrightrounded)||  
|[CMFCBaseTabCtrl::IsMDITab](#cmfcbasetabctrl__ismditab)||  
|[CMFCBaseTabCtrl::IsOneNoteStyle](#cmfcbasetabctrl__isonenotestyle)|Indicates whether a tabbed window displays tabs in Microsoft OneNote style.|  
|[CMFCBaseTabCtrl::IsPtInTabArea](#cmfcbasetabctrl__isptintabarea)|Checks whether a specified point exists in the tab area.|  
|[CMFCBaseTabCtrl::IsTabCloseButtonHighlighted](#cmfcbasetabctrl__istabclosebuttonhighlighted)||  
|[CMFCBaseTabCtrl::IsTabCloseButtonPressed](#cmfcbasetabctrl__istabclosebuttonpressed)||  
|[CMFCBaseTabCtrl::IsTabDetachable](#cmfcbasetabctrl__istabdetachable)|Indicates whether a tab is detachable.|  
|[CMFCBaseTabCtrl::IsTabIconOnly](#cmfcbasetabctrl__istabicononly)|Indicates whether tabs display icons but not labels.|  
|[CMFCBaseTabCtrl::IsTabSwapEnabled](#cmfcbasetabctrl__istabswapenabled)|Indicates whether the user can change tab positions by dragging tabs.|  
|[CMFCBaseTabCtrl::IsTabVisible](#cmfcbasetabctrl__istabvisible)|Indicates whether a specified tab is visible.|  
|[CMFCBaseTabCtrl::IsVS2005Style](#cmfcbasetabctrl__isvs2005style)||  
|[CMFCBaseTabCtrl::MoveTab](#cmfcbasetabctrl__movetab)||  
|[CMFCBaseTabCtrl::OnChangeTabs](#cmfcbasetabctrl__onchangetabs)|Called by the framework when the number of tabs changes.|  
|[CMFCBaseTabCtrl::OnDragEnter](#cmfcbasetabctrl__ondragenter)||  
|[CMFCBaseTabCtrl::OnDragLeave](#cmfcbasetabctrl__ondragleave)||  
|[CMFCBaseTabCtrl::OnDragOver](#cmfcbasetabctrl__ondragover)||  
|[CMFCBaseTabCtrl::OnDrop](#cmfcbasetabctrl__ondrop)||  
|[CMFCBaseTabCtrl::OnRenameTab](#cmfcbasetabctrl__onrenametab)||  
|[CMFCBaseTabCtrl::PreTranslateMessage](#cmfcbasetabctrl__pretranslatemessage)|Used by class [CWinApp](../../mfc/reference/cwinapp-class.md) to translate window messages before they are dispatched to the [TranslateMessage](http://msdn.microsoft.com/library/windows/desktop/ms644955) and [DispatchMessage](http://msdn.microsoft.com/library/windows/desktop/ms644934) Windows functions. (Overrides [CWnd::PreTranslateMessage](../../mfc/reference/cwnd-class.md#cwnd__pretranslatemessage).)|  
|[CMFCBaseTabCtrl::RecalcLayout](#cmfcbasetabctrl__recalclayout)|Recalculates the internal layout of a tabbed window.|  
|[CMFCBaseTabCtrl::RemoveAllTabs](#cmfcbasetabctrl__removealltabs)|Removes all tabs from the tabbed window.|  
|[CMFCBaseTabCtrl::RemoveTab](#cmfcbasetabctrl__removetab)|Removes a tab from a tabbed window.|  
|[CMFCBaseTabCtrl::RenameTab](#cmfcbasetabctrl__renametab)||  
|[CMFCBaseTabCtrl::ResetImageList](#cmfcbasetabctrl__resetimagelist)|Resets the image list that is attached to a tabbed window.|  
|[CMFCBaseTabCtrl::Serialize](#cmfcbasetabctrl__serialize)|Reads or writes this object from or to an archive. (Overrides [CObject::Serialize](../../mfc/reference/cobject-class.md#cobject__serialize).)|  
|[CMFCBaseTabCtrl::SetActiveTab](#cmfcbasetabctrl__setactivetab)|Activates a tab.|  
|[CMFCBaseTabCtrl::SetActiveTabColor](#cmfcbasetabctrl__setactivetabcolor)|Sets the background color for the currently active tab.|  
|[CMFCBaseTabCtrl::SetActiveTabTextColor](#cmfcbasetabctrl__setactivetabtextcolor)|Sets the text color for active tabs.|  
|[CMFCBaseTabCtrl::SetAutoColors](#cmfcbasetabctrl__setautocolors)|Sets the tab control colors that are applied in automatic color mode.|  
|[CMFCBaseTabCtrl::SetDockingBarWrapperRTC](#cmfcbasetabctrl__setdockingbarwrapperrtc)|Sets the wrapper class that is used for any objects that are not derived from the [CDockablePane Class](../../mfc/reference/cdockablepane-class.md).|  
|[CMFCBaseTabCtrl::SetDrawNoPrefix](#cmfcbasetabctrl__setdrawnoprefix)|Enables and disables the processing of prefix characters when tab labels are drawn.|  
|[CMFCBaseTabCtrl::SetImageList](#cmfcbasetabctrl__setimagelist)|Sets the icon image list.|  
|[CMFCBaseTabCtrl::SetLocation](#cmfcbasetabctrl__setlocation)||  
|[CMFCBaseTabCtrl::SetTabBkColor](#cmfcbasetabctrl__settabbkcolor)|Sets the background color for a specified tab.|  
|[CMFCBaseTabCtrl::SetTabBorderSize](#cmfcbasetabctrl__settabbordersize)|Sets a new tab border size.|  
|[CMFCBaseTabCtrl::SetTabHicon](#cmfcbasetabctrl__settabhicon)|Sets a tab icon.|  
|[CMFCBaseTabCtrl::SetTabIcon](#cmfcbasetabctrl__settabicon)|Sets a tab icon ID.|  
|[CMFCBaseTabCtrl::SetTabIconOnly](#cmfcbasetabctrl__settabicononly)|Enables and disables the "icon only" mode for a specified tab.|  
|[CMFCBaseTabCtrl::SetTabLabel](#cmfcbasetabctrl__settablabel)|Sets a tab label equal to a specified string value.|  
|[CMFCBaseTabCtrl::SetTabsHeight](#cmfcbasetabctrl__settabsheight)||  
|[CMFCBaseTabCtrl::SetTabTextColor](#cmfcbasetabctrl__settabtextcolor)|Sets the text color for a specified tab.|  
|[CMFCBaseTabCtrl::SetTabsOrder](#cmfcbasetabctrl__settabsorder)|Arranges tabs in the specified order.|  
|[CMFCBaseTabCtrl::ShowTab](#cmfcbasetabctrl__showtab)|Shows or hides the specified tab.|  
|[CMFCBaseTabCtrl::StartRenameTab](#cmfcbasetabctrl__startrenametab)||  
|[CMFCBaseTabCtrl::SwapTabs](#cmfcbasetabctrl__swaptabs)||  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCBaseTabCtrl::CreateWrapper](#cmfcbasetabctrl__createwrapper)|Creates a wrapper for an object derived from [CWnd](../../mfc/reference/cwnd-class.md) that is not derived from `CDockablePane`. To dock a `CMFCBaseTabCtrl` object, every embedded control must either have a docking wrapper or be derived from `CDockablePane`.<br /><br /> You set the class of the wrapper by using `SetDockingBayWrapperRTC`.|  
  
### Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCBaseTabCtrl::m_bActivateTabOnRightClick](#cmfcbasetabctrl__m_bactivatetabonrightclick)|Specifies whether tabs are selected by using a left mouse click or a right mouse click.|  
|[CMFCBaseTabCtrl::m_bAutoDestroyWindow](#cmfcbasetabctrl__m_bautodestroywindow)|Specifies whether the panes that are contained in the tabs are destroyed automatically.|  
  
## Remarks  
 The `CMFCBaseTabCtrl` class is an abstract class. Therefore, it cannot be instantiated. To create a tabbed window, you must derive a class from `CMFCBaseTabCtrl`. The MFC library contains some derived class examples, two of which are [CMFCTabCtrl Class](../../mfc/reference/cmfctabctrl-class.md) and [CMFCOutlookBarTabCtrl Class](../../mfc/reference/cmfcoutlookbartabctrl-class.md).  
  
 Starting with [!INCLUDE[vs_dev14](../../ide/includes/vs_dev14_md.md)], this class supports Microsoft Active Accessibility.  
  
## Customization Tips  
 The following tips pertain to the [CMFCBaseTabCtrl Class](../../mfc/reference/cmfcbasetabctrl-class.md) and any classes that inherit from it:  
  
-   If you enable detachable tabs, do not keep pointers to the tabbed windows. These detachable tabs can be created and destroyed dynamically. Therefore, pointers can become invalid.  
  
-   You can configure the tab control so that users can move tabs dynamically on a tab control by using the mouse. This functionality is built into the `CMFCBaseTabCtrl` class. To enable it, call [CMFCBaseTabCtrl::EnableTabSwap](#cmfcbasetabctrl__enabletabswap).  
  
-   By default, tabs are detachable when you add them to a tab control. You can also add non-detachable tabs by using [CMFCBaseTabCtrl::AddTab](#cmfcbasetabctrl__addtab). If you set the parameter `bDetachable` to `FALSE`, the tab will not be detachable. You can also change whether tabs are detachable by calling the method [CMFCBaseTabCtrl::EnableTabDetach](#cmfcbasetabctrl__enabletabdetach).  
  
-   Objects that are derived from the [CWnd Class](../../mfc/reference/cwnd-class.md) can be put on a dockable control bar or dockable tab. For the whole control to be docked, you must make the `CWnd` object dockable. To accomplish this, MFC uses a wrapper class. This wrapper class is the [CDockablePaneAdapter Class](../../mfc/reference/cdockablepaneadapter-class.md). Any `CWnd` objects that are added to a dockable control bar or dockable tab will be wrapped inside a `CDockablePaneAdapter` object. You can disable the automatic wrapping by setting the parameter `m_bEnableWrapping` of your `CMFCBaseTablCtrl` object to `FALSE`. You can also change the class that your application will use as a wrapper by using the method [CMFCBaseTabCtrl::SetDockingBarWrapperRTC](#cmfcbasetabctrl__setdockingbarwrapperrtc).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CMFCBaseTabCtrl](../../mfc/reference/cmfcbasetabctrl-class.md)  
  
## Requirements  
 **Header:** afxbasetabctrl.h  
  
##  <a name="cmfcbasetabctrl__addicon"></a>  CMFCBaseTabCtrl::AddIcon  
 Adds an icon to the list of icons in the protected `CMap``m_mapAddedIcons` member.  
  
```  
void AddIcon(
    HICON hIcon,  
    int iIcon);
```  
  
### Parameters  
 [in] `hIcon`  
 A handle to the icon to be added.  
  
 [in] `iIcon`  
 Zero-based index of the icon in the protected `CImageList``m_Images` member.  
  
### Remarks  
  
##  <a name="cmfcbasetabctrl__addtab"></a>  CMFCBaseTabCtrl::AddTab  
 Adds a new tab to the tab control.  
  
```  
virtual void AddTab(
    CWnd* pTabWnd,  
    LPCTSTR lpszTabLabel,  
    UINT uiImageId = (UINT)-1,,  
    BOOL bDetachable = TRUE);

 
virtual void AddTab(
    CWnd* pTabWnd,  
    UINT uiResTabLabel,  
    UINT uiImageId = (UINT)-1,  
    BOOL bDetachable = TRUE);
```  
  
### Parameters  
 [in] `pTabWnd`  
 A pointer to the window that this method represents as a new tab.  
  
 [in] `lpszTabLabel`  
 A string that contains the label for the new tab.  
  
 [in] `uiImageId`  
 An image ID from the image list. The tab control uses this image as the icon for the new tab.  
  
 [in] `uiResTabLabel`  
 The resource ID for the label.  
  
 [in] `bDetachable`  
 A Boolean parameter that determines whether the new tab is detachable.  
  
### Remarks  
 If `pTabWnd` points to an object that is not derived from the [CDockablePane Class](../../mfc/reference/cdockablepane-class.md) and if `bDetachable` is `TRUE`, the framework automatically creates a wrapper for the `pTabWnd` object. The wrapper makes the `pTabWnd` object detachable. By default, the wrapper is an instance of the [CDockablePaneAdapter Class](../../mfc/reference/cdockablepaneadapter-class.md). If the functionality offered by the default wrapper is unacceptable, use the [CMFCBaseTabCtrl::SetDockingBarWrapperRTC](#cmfcbasetabctrl__setdockingbarwrapperrtc) method to specify a different wrapper.  
  
##  <a name="cmfcbasetabctrl__applyrestoredtabinfo"></a>  CMFCBaseTabCtrl::ApplyRestoredTabInfo  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void ApplyRestoredTabInfo(BOOL bUseTabIndexes = FALSE);
```  
  
### Parameters  
 [in] `bUseTabIndexes`  
  
### Remarks  
  
##  <a name="cmfcbasetabctrl__autodestroywindow"></a>  CMFCBaseTabCtrl::AutoDestroyWindow  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void AutoDestroyWindow(BOOL bAutoDestroy = TRUE);
```  
  
### Parameters  
 [in] `bAutoDestroy`  
  
### Remarks  
  
##  <a name="cmfcbasetabctrl__calcrectedit"></a>  CMFCBaseTabCtrl::CalcRectEdit  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void CalcRectEdit(CRect& rectEdit);
```  
  
### Parameters  
 [in] `rectEdit`  
  
### Remarks  
  
##  <a name="cmfcbasetabctrl__cleanup"></a>  CMFCBaseTabCtrl::CleanUp  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void CleanUp();
```  
  
### Remarks  
  
##  <a name="cmfcbasetabctrl__clearimagelist"></a>  CMFCBaseTabCtrl::ClearImageList  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void ClearImageList();
```  
  
### Remarks  
  
##  <a name="cmfcbasetabctrl__createwrapper"></a>  CMFCBaseTabCtrl::CreateWrapper  
 Creates a wrapper for a frame window that is derived from the [CWnd Class](../../mfc/reference/cwnd-class.md) but is not derived from the [CDockablePane Class](../../mfc/reference/cdockablepane-class.md).  
  
```  
virtual CWnd* CreateWrapper(
    CWnd* pWndToWrap,  
    LPCTSTR lpszTabLabel,  
    BOOL bDetachable);
```  
  
### Parameters  
 [in] `pWndToWrap`  
 A pointer to the frame window that is wrapped.  
  
 [in] `lpszTabLabel`  
 A string that contains the label for the window.  
  
 [in] `bDetachable`  
 A Boolean parameter that indicates whether the window is detachable.  
  
### Return Value  
 A pointer to wrapper derived from the `CDockablePane` class if `CreateWrapper` successfully creates a wrapper class for `pWndToWrap`. If the method fails, it retruns `pWndToWrap`.  
  
### Remarks  
 A tabbed window can dock any object derived from `CWnd`. However, in order for a [CMFCBaseTabCtrl Class](../../mfc/reference/cmfcbasetabctrl-class.md) object to be dockable, each object on the `CMFCBaseTabCtrl` must be detachable. Therefore, `CMFCBaseTabCtrl` automatically wraps any objects that are not derived from `CDockablePane`.  
  
 By default, the `CMFCBaseTabCtrl` creates instances of the [CDockablePaneAdapter Class](../../mfc/reference/cdockablepaneadapter-class.md). To change the wrapper's default class, call [CMFCBaseTabCtrl::SetDockingBarWrapperRTC](#cmfcbasetabctrl__setdockingbarwrapperrtc).  
  
 If `pWndToWrap` is derived from `CDockablePane`, this method will not create a wrapper. Instead, it will fail and return `pWndToWrap`.  
  
##  <a name="cmfcbasetabctrl__detachtab"></a>  CMFCBaseTabCtrl::DetachTab  
 The framework calls this method to detach a tab from the tab control.  
  
```  
virtual BOOL DetachTab(
    AFX_DOCK_METHOD dockMethod,  
    int nTabNum = -1,  
    BOOL bHide = FALSE);
```  
  
### Parameters  
 [in] `dockMethod`  
 An enumerated data type provided by the [CBasePane Class](../../mfc/reference/cbasepane-class.md). This data type specifies the method that was used to detach the tab.  
  
 [in] `nTabNum`  
 The zero-based index of the tab to be detached.  
  
 [in] `bHide`  
 A Boolean parameter that indicates whether the framework should hide the detached tab.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 If the tab specified by `nTabNum` is non-detachable, this function fails and returns `FALSE`.  
  
##  <a name="cmfcbasetabctrl__enableactivatelastactive"></a>  CMFCBaseTabCtrl::EnableActivateLastActive  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void EnableActivateLastActive(BOOL bLastActive = TRUE);
```  
  
### Parameters  
 [in] `bLastActive`  
  
### Remarks  
  
##  <a name="cmfcbasetabctrl__enableautocolor"></a>  CMFCBaseTabCtrl::EnableAutoColor  
 Controls whether the framework uses the automatic background colors when drawing a tab.  
  
```  
void EnableAutoColor(BOOL bEnable = TRUE);
```  
  
### Parameters  
 [in] `bEnable`  
 A Boolean parameter that determines whether the framework uses automatic colors.  
  
### Remarks  
 A tab control has an array of several predefined colors. When the framework uses automatic colors, each tab in a series of tabs is assigned the next color from this array.  
  
 By default, the automatic colors are determined by the library-defined colors. You can provide a custom array of colors by calling [CMFCBaseTabCtrl::SetAutoColors](#cmfcbasetabctrl__setautocolors).  
  
##  <a name="cmfcbasetabctrl__enablecustomtooltips"></a>  CMFCBaseTabCtrl::EnableCustomToolTips  
 Enables custom tooltips for the tab control.  
  
```  
BOOL EnableCustomToolTips(BOOL bEnable = TRUE);
```  
  
### Parameters  
 [in] `bEnable`  
 A Boolean that determines whether to use custom tooltips.  
  
### Return Value  
 `TRUE` if successful; otherwise `FALSE`.  
  
### Remarks  
 If custom tooltips are enabled, the tab control sends the `AFX_WM_ON_GET_TAB_TOOLTIP` message to the main frame. If you want to support custom tooltips in your application, the main frame window must handle this method and provide the custom tooltip text. For more information about providing custom tooltip text, see [CMFCTabToolTipInfo Structure](../../mfc/reference/cmfctabtooltipinfo-structure.md).  
  
##  <a name="cmfcbasetabctrl__enableinplaceedit"></a>  CMFCBaseTabCtrl::EnableInPlaceEdit  
 Enables direct editing of the tab labels by the user.  
  
```  
virtual void EnableInPlaceEdit(BOOL bEnable) = 0;  
```  
  
### Parameters  
 [in] `bEnable`  
 A Boolean parameter that specifies whether to enable direct editing of the tab labels.  
  
### Remarks  
 By default, direct editing of the tab labels is disabled for tab controls.  
  
 You can enable direct editing for a subset of the tabs on the tab control. To do this, override the method `CMFCBaseTabCtrl::StartRenameTab`. `StartRenameTab` should return a nonzero value for all tabs that support direct editing of tab labels.  
  
 In the [CMFCBaseTabCtrl Class](../../mfc/reference/cmfcbasetabctrl-class.md), this method is a pure virtual function and has no implementation. If you derive a class from `CMFCBaseTabCtrl`, you must implement this function.  
  
##  <a name="cmfcbasetabctrl__enabletabdetach"></a>  CMFCBaseTabCtrl::EnableTabDetach  
 Enables detachable tabs.  
  
```  
virtual BOOL EnableTabDetach(
    int iTab,  
    BOOL bEnable);
```  
  
### Parameters  
 [in] `iTab`  
 The zero-based index of a tab.  
  
 [in] `bEnable`  
 A Boolean that indicates whether to make the tab detachable.  
  
### Return Value  
 `TRUE` if successful; otherwise `FALSE`.  
  
##  <a name="cmfcbasetabctrl__enabletabswap"></a>  CMFCBaseTabCtrl::EnableTabSwap  
 Enables the user to change the tab order using a mouse.  
  
```  
void EnableTabSwap(BOOL bEnable);
```  
  
### Parameters  
 [in] `bEnable`  
 A Boolean that indicates whether to enable tab swapping.  
  
### Remarks  
 When tab swapping is enabled, the user can drag a tab and change its relative position in the tab control.  
  
##  <a name="cmfcbasetabctrl__ensurevisible"></a>  CMFCBaseTabCtrl::EnsureVisible  
 Scrolls the tabs until the specified tab is visible.  
  
```  
virtual BOOL EnsureVisible(int iTab);
```  
  
### Parameters  
 [in] `iTab`  
 The zero-based index of a tab.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 This method has no effect if the tab indicated by `iTab` is already visible.  
  
 By default, this method is not supported by the [CMFCBaseTabCtrl Class](../../mfc/reference/cmfcbasetabctrl-class.md). You should implement this function in a custom class derived from `CMFCBaseTabCtrl` if that custom tab control supports tab scrolling. This method is supported by the [CMFCTabCtrl Class](../../mfc/reference/cmfctabctrl-class.md).  
  
##  <a name="cmfcbasetabctrl__enterdragmode"></a>  CMFCBaseTabCtrl::EnterDragMode  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void EnterDragMode();
```  
  
### Remarks  
  
##  <a name="cmfcbasetabctrl__findtargetwnd"></a>  CMFCBaseTabCtrl::FindTargetWnd  
 Identifies the pane that contains a specified point.  
  
```  
virtual CWnd* FindTargetWnd(const CPoint& pt) = 0;  
```  
  
### Parameters  
 [in] `pt`  
 A point that is defined by using client-area coordinates of the [CMFCBaseTabCtrl](../../mfc/reference/cmfcbasetabctrl-class.md) object.  
  
### Return Value  
 A pointer to a [CWnd](../../mfc/reference/cwnd-class.md) object if successful; otherwise `NULL`.  
  
### Remarks  
 In the `CMFCBaseTabCtrl` class, this method is a pure virtual function: you must implement it if you derive a class from `CMFCBaseTabCtrl`.  
  
##  <a name="cmfcbasetabctrl__firechangeactivetab"></a>  CMFCBaseTabCtrl::FireChangeActiveTab  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void FireChangeActiveTab(int nNewTab);
```  
  
### Parameters  
 [in] `nNewTab`  
  
### Remarks  
  
##  <a name="cmfcbasetabctrl__firechangingactivetab"></a>  CMFCBaseTabCtrl::FireChangingActiveTab  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL FireChangingActiveTab(int nNewTab);
```  
  
### Parameters  
 [in] `nNewTab`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcbasetabctrl__getactivetab"></a>  CMFCBaseTabCtrl::GetActiveTab  
 Retrieves the index of the currently active tab.  
  
```  
virtual int GetActiveTab() const;

 
```  
  
### Return Value  
 The zero-based index of the active tab; -1 if there is no active tab.  
  
##  <a name="cmfcbasetabctrl__getactivetabcolor"></a>  CMFCBaseTabCtrl::GetActiveTabColor  
 Retrieves the background color of the currently active tab.  
  
```  
virtual COLORREF GetActiveTabColor() const;

 
```  
  
### Return Value  
 A [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) value that specifies the background color of the active tab.  
  
### Remarks  
 By default, the background color of the active tab is `COLOR_WINDOW`. You can change the background color for the active tab by using the method [CMFCBaseTabCtrl::SetActiveTabColor](#cmfcbasetabctrl__setactivetabcolor).  
  
##  <a name="cmfcbasetabctrl__getactivetabtextcolor"></a>  CMFCBaseTabCtrl::GetActiveTabTextColor  
 Retrieves the text color for the active tab.  
  
```  
virtual COLORREF GetActiveTabTextColor() const;

 
```  
  
### Return Value  
 A [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) value that specifies the text color of the active tab.  
  
### Remarks  
 By default, the text color for active tabs is `COLOR_WINDOWTEXT`. You can change the text color with the method [CMFCBaseTabCtrl::SetActiveTabTextColor](#cmfcbasetabctrl__setactivetabtextcolor).  
  
##  <a name="cmfcbasetabctrl__getactivewnd"></a>  CMFCBaseTabCtrl::GetActiveWnd  
 Retrieves a pointer to the currently active tab window.  
  
```  
virtual CWnd* GetActiveWnd() const;

 
```  
  
### Return Value  
 A pointer to a window.  
  
##  <a name="cmfcbasetabctrl__getautocolors"></a>  CMFCBaseTabCtrl::GetAutoColors  
 Retrieves the array of colors used for automatic coloring.  
  
```  
const CArray<COLORREF,COLORREF>& GetAutoColors() const;

 
```  
  
### Return Value  
 A reference to an array of [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) values that the [CMFCBaseTabCtrl](../../mfc/reference/cmfcbasetabctrl-class.md) object uses for automatic tab coloring.  
  
### Remarks  
 By default, the framework initializes the array of colors to library-defined colors. You can provide a custom array of colors by calling the method [CMFCBaseTabCtrl::SetAutoColors](#cmfcbasetabctrl__setautocolors).  
  
##  <a name="cmfcbasetabctrl__getfirstvisibletab"></a>  CMFCBaseTabCtrl::GetFirstVisibleTab  
 Retrieves a pointer to the first visible tab.  
  
```  
virtual CWnd* GetFirstVisibleTab(
    int& iTabNum);

 
virtual CWnd* GetFirstVisibleTab(
    int iStartFrom,  
    int& iTabNum);
```  
  
### Parameters  
 [out] `iTabNum`  
 A reference to an integer. This method writes the zero-based index of the first visible tab to this parameter.  
  
 [in] `iStartFrom`  
 The zero-based index of the first tab to check.  
  
### Return Value  
 A pointer to the first visible tab if successful; otherwise `NULL`.  
  
### Remarks  
 If this method fails, it writes the value -1 to `iStartFrom`.  
  
 If `iStartFrom` is larger than or equal to the number of tabs in the tab control, `GetFirstVisibleTab` automatically fails.  
  
##  <a name="cmfcbasetabctrl__getfirstvisibletabnum"></a>  CMFCBaseTabCtrl::GetFirstVisibleTabNum  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual int GetFirstVisibleTabNum() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcbasetabctrl__gethighlightedtab"></a>  CMFCBaseTabCtrl::GetHighlightedTab  
 Retrieves the index of the currently highlighted tab.  
  
```  
int GetHighlightedTab() const;

 
```  
  
### Return Value  
 The zero-based index of the highlighted tab.  
  
##  <a name="cmfcbasetabctrl__getimagelist"></a>  CMFCBaseTabCtrl::GetImageList  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual const CImageList* GetImageList() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcbasetabctrl__getimagesize"></a>  CMFCBaseTabCtrl::GetImageSize  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual CSize GetImageSize() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcbasetabctrl__getlastvisibletab"></a>  CMFCBaseTabCtrl::GetLastVisibleTab  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual CWnd* GetLastVisibleTab(int& iTabNum);
```  
  
### Parameters  
 [in] `iTabNum`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcbasetabctrl__getlocation"></a>  CMFCBaseTabCtrl::GetLocation  
 Retrieves the location of the tab area portion of the tab control.  
  
```  
Location GetLocation() const;

 
```  
  
### Return Value  
 The location of the tab area.  
  
### Remarks  
 Possible tab area location values are `LOCATION_BOTTOM` and `LOCATION_TOP`.  
  
##  <a name="cmfcbasetabctrl__getmaxwindowsize"></a>  CMFCBaseTabCtrl::GetMaxWindowSize  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual CSize GetMaxWindowSize() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcbasetabctrl__gettabarea"></a>  CMFCBaseTabCtrl::GetTabArea  
 Retrieves the size and position of the tab area of the tab control.  
  
```  
virtual void GetTabArea(
    CRect& rectTabAreaTop,  
    CRect& rectTabAreaBottom) const = 0;  
```  
  
### Parameters  
 [in] `rectTabAreaTop`  
 A reference to a `CRect` object. `GetTabArea` uses this object to store the size and position of the top tab area.  
  
 [in] `rectTabAreaBottom`  
 A reference to a `CRect` object. `GetTabArea` uses this object to store the size and position of the bottom tab area.  
  
### Remarks  
 After `GetTabArea` returns, the `CRect` parameters contain the size and position of the tab area in client coordinates of the tab control. If there is no tab area at the top or bottom of the tab control, `rectTabAreaTop` or `rectTabAreaBottom` are empty.  
  
 In the [CMFCBaseTabCtrl Class](../../mfc/reference/cmfcbasetabctrl-class.md), this method is a pure virtual function and has no implementation. If you derive a class from `CMFCBaseTabCtrl`, you have to implement this function.  
  
##  <a name="cmfcbasetabctrl__gettabbkcolor"></a>  CMFCBaseTabCtrl::GetTabBkColor  
 Retrieves the background color of the specified tab.  
  
```  
virtual COLORREF GetTabBkColor(int iTab) const;

 
```  
  
### Parameters  
 [in] `iTab`  
 The zero-based index of the tab.  
  
### Return Value  
 A [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) value that indicates the background color of the specified tab; -1 if `iTab` is out of range.  
  
##  <a name="cmfcbasetabctrl__gettabbordersize"></a>  CMFCBaseTabCtrl::GetTabBorderSize  
 Retrieves the size of the tab borders in the tab control.  
  
```  
virtual int GetTabBorderSize() const;

 
```  
  
### Return Value  
 The size of the tab border, in pixels.  
  
### Remarks  
 The default size for the tab border is three pixels. You can change this border size with the method [CMFCBaseTabCtrl::SetTabBorderSize](#cmfcbasetabctrl__settabbordersize).  
  
##  <a name="cmfcbasetabctrl__gettabbyid"></a>  CMFCBaseTabCtrl::GetTabByID  
 Retrieves the index of a tab based on a tab ID.  
  
```  
virtual int GetTabByID(int id) const;

 
```  
  
### Parameters  
 [in] `id`  
 A tab ID.  
  
### Return Value  
 The zero-based index of a tab if it is found; -1 if the tab ID is not found.  
  
### Remarks  
 The tab IDs are assigned automatically when tabs are added to a tab control.  
  
##  <a name="cmfcbasetabctrl__gettabclosebutton"></a>  CMFCBaseTabCtrl::GetTabCloseButton  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CRect GetTabCloseButton() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcbasetabctrl__gettabfromhwnd"></a>  CMFCBaseTabCtrl::GetTabFromHwnd  
 Retrieves the index of the tab that contains the specified HWND object.  
  
```  
virtual int GetTabFromHwnd(HWND hwnd) const;

 
```  
  
### Parameters  
 [in] `hwnd`  
 A handle to a window.  
  
### Return Value  
 The zero-based index of the tab if successful; -1 if no tab contains `hwnd`.  
  
##  <a name="cmfcbasetabctrl__gettabfrompoint"></a>  CMFCBaseTabCtrl::GetTabFromPoint  
 Retrieves the tab that contains a specified point.  
  
```  
virtual int GetTabFromPoint(CPoint& pt) const;

 
```  
  
### Parameters  
 [in] `pt`  
 A point in client coordinates of the tab control.  
  
### Return Value  
 The index of the tab that contains `pt`; -1 if no tab contains `pt`.  
  
##  <a name="cmfcbasetabctrl__gettabfullwidth"></a>  CMFCBaseTabCtrl::GetTabFullWidth  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual int GetTabFullWidth(int iTab) const;

 
```  
  
### Parameters  
 [in] `iTab`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcbasetabctrl__gettabhicon"></a>  CMFCBaseTabCtrl::GetTabHicon  
 Returns the HICON associated with the specified tab.  
  
```  
virtual HICON GetTabHicon(int iTab) const;

 
```  
  
### Parameters  
 [in] `iTab`  
 The zero-based index for the tab.  
  
### Return Value  
 The HICON associated with a tab label if successful; `NULL` if there is no HICON or if the method fails.  
  
##  <a name="cmfcbasetabctrl__gettabicon"></a>  CMFCBaseTabCtrl::GetTabIcon  
 Retrieves the icon associated with the specified tab.  
  
```  
virtual UINT GetTabIcon(int iTab) const;

 
```  
  
### Parameters  
 [in] `iTab`  
 The zero-based index of the tab.  
  
### Return Value  
 The icon ID for the specified tab if successful; -1 if the index is invalid.  
  
### Remarks  
 The [CMFCBaseTabCtrl](../../mfc/reference/cmfcbasetabctrl-class.md) object stores the icons in the internal [CImageList](../../mfc/reference/cimagelist-class.md) object.  
  
##  <a name="cmfcbasetabctrl__gettabid"></a>  CMFCBaseTabCtrl::GetTabID  
 Retrieves the ID for a tab specified by the tab index.  
  
```  
int GetTabID(int iTab) const;

 
```  
  
### Parameters  
 [in] `iTab`  
 The zero-based index of the tab.  
  
### Return Value  
 An ID of the tab or -1 if `iTab` is out of range.  
  
##  <a name="cmfcbasetabctrl__gettablabel"></a>  CMFCBaseTabCtrl::GetTabLabel  
 Retrieves the text of a tab label.  
  
```  
virtual BOOL GetTabLabel(
    int iTab,  
    CString& strLabel) const;

 
```  
  
### Parameters  
 [in] `iTab`  
 The zero-based index of the tab.  
  
 [out] `strLabel`  
 A reference to a `CString` object. This method stores the label of the tab in this parameter.  
  
### Return Value  
 `TRUE` if successful; `FALSE` otherwise.  
  
### Remarks  
 This method fails if the index `iTab` is invalid.  
  
 You set the label for a tab when you create the tab by using [CMFCBaseTabCtrl::AddTab](#cmfcbasetabctrl__addtab). You can also change the label after creation with the method [CMFCBaseTabCtrl::SetTabLabel](#cmfcbasetabctrl__settablabel).  
  
##  <a name="cmfcbasetabctrl__gettabrect"></a>  CMFCBaseTabCtrl::GetTabRect  
 Retrieves the size and position of the specified tab.  
  
```  
virtual BOOL GetTabRect(
    int iTab,  
    CRect& rect) const;

 
```  
  
### Parameters  
 [in] `iTab`  
 The zero-based index of the tab.  
  
 [out] `rect`  
 A reference to a `CRect` object. This method stores the size and position of the tab in this parameter.  
  
### Return Value  
 `TRUE` if successful; `FALSE` if the tab index is invalid.  
  
##  <a name="cmfcbasetabctrl__gettabsheight"></a>  CMFCBaseTabCtrl::GetTabsHeight  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual int GetTabsHeight() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcbasetabctrl__gettabsnum"></a>  CMFCBaseTabCtrl::GetTabsNum  
 Retrieves the number of tabs in the tab control.  
  
```  
virtual int GetTabsNum() const;

 
```  
  
### Return Value  
 The number of tabs in the tab control.  
  
##  <a name="cmfcbasetabctrl__gettabsrect"></a>  CMFCBaseTabCtrl::GetTabsRect  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void GetTabsRect(CRect& rect) const;

 
```  
  
### Parameters  
 [in] `rect`  
  
### Remarks  
  
##  <a name="cmfcbasetabctrl__gettabtextcolor"></a>  CMFCBaseTabCtrl::GetTabTextColor  
 Retrieves the text color for the specified tab.  
  
```  
virtual COLORREF GetTabTextColor(int iTab) const;

 
```  
  
### Parameters  
 [in] `iTab`  
 The zero-based index of the tab.  
  
### Return Value  
 A [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) parameter that indicates the text color of the specified tab; -1 if `iTab` is out of range.  
  
##  <a name="cmfcbasetabctrl__gettabwnd"></a>  CMFCBaseTabCtrl::GetTabWnd  
 Returns the pointer to the pane that resides on the specified tab.  
  
```  
virtual CWnd* GetTabWnd(int iTab) const;

 
```  
  
### Parameters  
 [in] `iTab`  
 The zero-based index of a tab.  
  
### Return Value  
 A pointer to the [CWnd](../../mfc/reference/cwnd-class.md) object that resides on the tab that `iTab` specifies. `NULL` if `iTab` is invalid.  
  
### Remarks  
 The returned object is the one that the application added when it called either [CMFCBaseTabCtrl::AddTab](#cmfcbasetabctrl__addtab) or [CMFCBaseTabCtrl::InsertTab](#cmfcbasetabctrl__inserttab).  
  
 If the object on a tab has a wrapper, this method will return the wrapper for the object. For more information about wrappers, see [CMFCBaseTabCtrl::CreateWrapper](#cmfcbasetabctrl__createwrapper). If you want to access a pointer to the direct object without the wrapper, use the method [CMFCBaseTabCtrl::GetTabWndNoWrapper](#cmfcbasetabctrl__gettabwndnowrapper).  
  
##  <a name="cmfcbasetabctrl__gettabwndnowrapper"></a>  CMFCBaseTabCtrl::GetTabWndNoWrapper  
 Returns a pointer to the control that resides on a tab, even if the control has a wrapper.  
  
```  
virtual CWnd* GetTabWndNoWrapper(int iTab) const;

 
```  
  
### Parameters  
 [in] `iTab`  
 The zero-based index of a tab.  
  
### Return Value  
 A pointer to the [CWnd](../../mfc/reference/cwnd-class.md) object that resides on the specified tab; `NULL` if `iTab` is invalid.  
  
### Remarks  
 This method retrieves a direct pointer to the `CWnd` object that you added by using either the method [CMFCBaseTabCtrl::AddTab](#cmfcbasetabctrl__addtab) or [CMFCBaseTabCtrl::InsertTab](#cmfcbasetabctrl__inserttab). `GetTabWndNoWrapper` will retrieve a pointer to the added `CWnd`, even if the framework added a wrapper for the object. For more information about wrappers and the [CMFCBaseTabCtrl Class](../../mfc/reference/cmfcbasetabctrl-class.md), see [CMFCBaseTabCtrl::CreateWrapper](#cmfcbasetabctrl__createwrapper).  
  
 Use the method [CMFCBaseTabCtrl::GetTabWnd](#cmfcbasetabctrl__gettabwnd) if you do not want to ignore the wrapper class.  
  
##  <a name="cmfcbasetabctrl__gettooltipctrl"></a>  CMFCBaseTabCtrl::GetToolTipCtrl  
 Retrieves a reference to the tooltip contorl.  
  
```  
CToolTipCtrl& GetToolTipCtrl() const;

 
```  
  
### Return Value  
 A reference to the tooltip control.  
  
##  <a name="cmfcbasetabctrl__getvisibletabsnum"></a>  CMFCBaseTabCtrl::GetVisibleTabsNum  
 Retrieves the number of currently visible tabs.  
  
```  
virtual int GetVisibleTabsNum() const;

 
```  
  
### Return Value  
 The number of visible tabs.  
  
##  <a name="cmfcbasetabctrl__hasimage"></a>  CMFCBaseTabCtrl::HasImage  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL HasImage(int iTab) const;

 
```  
  
### Parameters  
 [in] `iTab`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcbasetabctrl__hidesingletab"></a>  CMFCBaseTabCtrl::HideSingleTab  
 Sets the option to hide the tabs for the tab control when there is one visible tab.  
  
```  
virtual void HideSingleTab(BOOL bHide = TRUE);
```  
  
### Parameters  
 [in] `bHide`  
 A Boolean that specifies whether to enable hiding single tabs.  
  
### Remarks  
 When your application is configured to hide single tabs, the framework automatically displays tabs when a second tab is added to the tab control.  
  
##  <a name="cmfcbasetabctrl__inserttab"></a>  CMFCBaseTabCtrl::InsertTab  
 Inserts a tab into the tab control.  
  
```  
Virtual void InsertTab(
    CWnd* pNewWnd,  
    LPCTSTR lpszTabLabel,  
    int nInsertAt,  
    UINT uiImageId = (UINT)-1,  
    BOOL bDetachable = TRUE);

 
virtual void InsertTab(
    CWnd* pNewWnd,  
    UINT uiResTabLabel,  
    int nInsertAt,  
    UINT uiImageId = (UINT)-1,  
    BOOL bDetachable = TRUE);
```  
  
### Parameters  
 [in] `pNewWnd`  
 A pointer to the window that this method adds as a new tab.  
  
 [in] `lpszTabLabel`  
 A string that contains the label for the new tab.  
  
 [in] `nInsertAt`  
 The zero-based index of the new tab.  
  
 [in] `uiImageId`  
 An image ID from the image list. The tab control uses this image as the icon for the new tab.  
  
 [in] `bDetachable`  
 A Boolean parameter that determines whether the new tab is detachable.  
  
 [in] `uiResTabLabel`  
 The resource ID for the label.  
  
### Remarks  
 If the object indicated by `pNewWnd` is not derived from the [CDockablePane Class](../../mfc/reference/cdockablepane-class.md) and if the `bDetachable` parameter is `TRUE`, the framework creates a special wrapper for the new tab. By default, the wrapper is an instance of the [CDockablePaneAdapter Class](../../mfc/reference/cdockablepaneadapter-class.md). Use the [CMFCBaseTabCtrl::SetDockingBarWrapperRTC](#cmfcbasetabctrl__setdockingbarwrapperrtc) method to create a different wrapper class. Any custom wrapper class needs to be derived from `CDockablePaneAdapter`.  
  
##  <a name="cmfcbasetabctrl__invalidatetab"></a>  CMFCBaseTabCtrl::InvalidateTab  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void InvalidateTab(int iTab);
```  
  
### Parameters  
 [in] `iTab`  
  
### Remarks  
  
##  <a name="cmfcbasetabctrl__isactivetabclosebutton"></a>  CMFCBaseTabCtrl::IsActiveTabCloseButton  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL IsActiveTabCloseButton() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcbasetabctrl__isautocolor"></a>  CMFCBaseTabCtrl::IsAutoColor  
 Determines whether the tab control is in autocolor mode.  
  
```  
BOOL IsAutoColor() const;

 
```  
  
### Return Value  
 `TRUE` if the tab control is in autocolor mode; `FALSE` otherwise.  
  
### Remarks  
 You can enable or disable the autocolor mode by using the [CMFCBaseTabCtrl::EnableAutoColor](#cmfcbasetabctrl__enableautocolor) method.  
  
##  <a name="cmfcbasetabctrl__isautodestroywindow"></a>  CMFCBaseTabCtrl::IsAutoDestroyWindow  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsAutoDestroyWindow() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcbasetabctrl__iscolored"></a>  CMFCBaseTabCtrl::IsColored  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL IsColored() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcbasetabctrl__isdialogcontrol"></a>  CMFCBaseTabCtrl::IsDialogControl  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsDialogControl() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcbasetabctrl__isdrawnoprefix"></a>  CMFCBaseTabCtrl::IsDrawNoPrefix  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsDrawNoPrefix() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcbasetabctrl__isflatframe"></a>  CMFCBaseTabCtrl::IsFlatFrame  
 Indicates whether the frame of the tab control is rendered in a flat style or in a 3D style.  
  
```  
virtual BOOL IsFlatFrame() const;

 
```  
  
### Return Value  
 `TRUE` if the frame of the tab control is rendered in a flat style; `FALSE` if the frame is rendered in a 3D style.  
  
### Remarks  
 Use [CMFCTabCtrl::SetFlatFrame](../../mfc/reference/cmfctabctrl-class.md#cmfctabctrl__setflatframe) to change the style for the frame of the tab control.  
  
 Tab controls that use the Outlook style cannot be rendered with flat frames. This includes the [CMFCOutlookBarTabCtrl Class](../../mfc/reference/cmfcoutlookbartabctrl-class.md) and any classes derived from that class.  
  
##  <a name="cmfcbasetabctrl__isflattab"></a>  CMFCBaseTabCtrl::IsFlatTab  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL IsFlatTab() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcbasetabctrl__ishidesingletab"></a>  CMFCBaseTabCtrl::IsHideSingleTab  
 Determines whether the tab control hides the tab label if there is only one tab.  
  
```  
virtual BOOL IsHideSingleTab() const;

 
```  
  
### Return Value  
 `TRUE` if the tab control hides the tab label when it has one tab; otherwise `FALSE`.  
  
### Remarks  
 Use the method [CMFCBaseTabCtrl::HideSingleTab](#cmfcbasetabctrl__hidesingletab) to enable hiding the tab label when there is only one tab.  
  
##  <a name="cmfcbasetabctrl__isiconadded"></a>  CMFCBaseTabCtrl::IsIconAdded  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsIconAdded(
    HICON hIcon,  
    int& iIcon);
```  
  
### Parameters  
 [in] `hIcon`  
 [in] `iIcon`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcbasetabctrl__isinplaceedit"></a>  CMFCBaseTabCtrl::IsInPlaceEdit  
 Indicates whether the tab control is configured to enable the user to dynamically modify the tab labels.  
  
```  
virtual BOOL IsInPlaceEdit() const;

 
```  
  
### Return Value  
 Nonzero if in-place editing is enabled; otherwise 0.  
  
### Remarks  
 You can enable or disable in-place editing by calling the method [CMFCBaseTabCtrl::EnableInPlaceEdit](#cmfcbasetabctrl__enableinplaceedit).  
  
##  <a name="cmfcbasetabctrl__isleftrightrounded"></a>  CMFCBaseTabCtrl::IsLeftRightRounded  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL IsLeftRightRounded() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcbasetabctrl__ismditab"></a>  CMFCBaseTabCtrl::IsMDITab  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsMDITab() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcbasetabctrl__isonenotestyle"></a>  CMFCBaseTabCtrl::IsOneNoteStyle  
 Determines whether tabs are displayed in the style of Microsoft OneNote.  
  
```  
virtual BOOL IsOneNoteStyle() const;

 
```  
  
### Return Value  
 `TRUE` if tabs are displayed in the style of Microsoft OneNote; otherwise `FALSE`.  
  
### Remarks  
 Call the method [CMDIFrameWndEx::EnableMDITabs](../../mfc/reference/cmdiframewndex-class.md#cmdiframewndex__enablemditabs) to enable the Microsoft OneNote style. You can also enable this style when you instantiate the [CMFCTabCtrl Class](../../mfc/reference/cmfctabctrl-class.md): simply pass the style STYLE_3D_ONENOTE to the method [CMFCTabCtrl::Create](../../mfc/reference/cmfctabctrl-class.md#cmfctabctrl__create).  
  
 By default, the Microsoft OneNote style is not supported in a custom class derived from the [CMFCBaseTabCtrl Class](../../mfc/reference/cmfcbasetabctrl-class.md). However, it is supported in the `CMFCTabCtrl` class.  
  
##  <a name="cmfcbasetabctrl__isptintabarea"></a>  CMFCBaseTabCtrl::IsPtInTabArea  
 Determines if a point is inside the tab area.  
  
```  
virtual BOOL IsPtInTabArea(CPoint point) const = 0;  
```  
  
### Parameters  
 [in] `point`  
 The point to test.  
  
### Return Value  
 Nonzero if the point is in the tab area; 0 otherwise.  
  
### Remarks  
 In the [CMFCBaseTabCtrl Class](../../mfc/reference/cmfcbasetabctrl-class.md), this method is a pure virtual function and has no implementation. If you derive a class from `CMFCBaseTabCtrl`, you have to implement this function.  
  
##  <a name="cmfcbasetabctrl__istabclosebuttonhighlighted"></a>  CMFCBaseTabCtrl::IsTabCloseButtonHighlighted  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsTabCloseButtonHighlighted() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcbasetabctrl__istabclosebuttonpressed"></a>  CMFCBaseTabCtrl::IsTabCloseButtonPressed  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsTabCloseButtonPressed() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcbasetabctrl__istabdetachable"></a>  CMFCBaseTabCtrl::IsTabDetachable  
 Determines whether a tab is detachable.  
  
```  
virtual BOOL IsTabDetachable(int iTab) const;

 
```  
  
### Parameters  
 [in] `iTab`  
 The zero-based index of the tab to check.  
  
### Return Value  
 `TRUE` if the tab is detachable; `FALSE` otherwise.  
  
### Remarks  
 To make a tab detachable, use the method [CMFCBaseTabCtrl::EnableTabDetach](#cmfcbasetabctrl__enabletabdetach).  
  
##  <a name="cmfcbasetabctrl__istabicononly"></a>  CMFCBaseTabCtrl::IsTabIconOnly  
 Determines whether a tab label contains only icons and no text.  
  
```  
virtual BOOL IsTabIconOnly(int iTab) const;

 
```  
  
### Parameters  
 [in] `iTab`  
 The zero-based index of the tab.  
  
### Return Value  
 `TRUE` if a tab label has only icons; `FALSE` otherwise.  
  
### Remarks  
 To set the tabs in your application to display only icons, call the method [CMFCBaseTabCtrl::SetTabIconOnly](#cmfcbasetabctrl__settabicononly).  
  
##  <a name="cmfcbasetabctrl__istabswapenabled"></a>  CMFCBaseTabCtrl::IsTabSwapEnabled  
 Determines whether the tab control allows the user to change tab positions by using the mouse.  
  
```  
BOOL IsTabSwapEnabled() const;

 
```  
  
### Return Value  
 Nonzero if tab positions can be changed by the user; otherwise 0.  
  
### Remarks  
 By default, users cannot change the order of tabs in a tab control. Use the [CMFCBaseTabCtrl::EnableTabSwap](#cmfcbasetabctrl__enabletabswap) method to enable this functionality.  
  
##  <a name="cmfcbasetabctrl__istabvisible"></a>  CMFCBaseTabCtrl::IsTabVisible  
 Indicates whether the specified tab is visible.  
  
```  
virtual BOOL IsTabVisible(int iTab) const;

 
```  
  
### Parameters  
 [in] `iTab`  
 The zero-based index of the tab to check.  
  
### Return Value  
 Nonzero if the specified tab is visible; otherwise 0.  
  
##  <a name="cmfcbasetabctrl__isvs2005style"></a>  CMFCBaseTabCtrl::IsVS2005Style  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL IsVS2005Style() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcbasetabctrl__m_bactivatetabonrightclick"></a>  CMFCBaseTabCtrl::m_bActivateTabOnRightClick  
 `m_bActivateTabOnRightClick` determines whether tabs are in focus when the user clicks on a tab label by using the right mouse button.  
  
```  
BOOL m_bActivateTabOnRightClick;  
```  
  
### Remarks  
 The default value for this data member is `FALSE`.  
  
##  <a name="cmfcbasetabctrl__m_bautodestroywindow"></a>  CMFCBaseTabCtrl::m_bAutoDestroyWindow  
 `m_bAutoDestroyWindow` determines whether the framework automatically destroys the objects on tabs when the tabs are removed.  
  
```  
BOOL m_bAutoDestroyWindow;  
```  
  
### Remarks  
 By default, this member is `FALSE`.  
  
##  <a name="cmfcbasetabctrl__movetab"></a>  CMFCBaseTabCtrl::MoveTab  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void MoveTab(
    int nSource,  
    int nDest);
```  
  
### Parameters  
 [in] `nSource`  
 [in] `nDest`  
  
### Remarks  
  
##  <a name="cmfcbasetabctrl__onchangetabs"></a>  CMFCBaseTabCtrl::OnChangeTabs  
 The framework calls this method when the number of tabs on a tab control changes.  
  
```  
virtual void OnChangeTabs();
```  
  
### Remarks  
 By default, this method does nothing. Override this method to execute custom code when the number of tabs on the tab control changes.  
  
##  <a name="cmfcbasetabctrl__ondrop"></a>  CMFCBaseTabCtrl::OnDrop  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL OnDrop(
    COleDataObject*,
    DROPEFFECT,
    CPoint);
```  
  
### Parameters  
 [in] `COleDataObject*`  
 [in] `DROPEFFECT`  
 [in] `CPoint`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcbasetabctrl__ondragover"></a>  CMFCBaseTabCtrl::OnDragOver  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual DROPEFFECT OnDragOver(
    COleDataObject*,
    DWORD,
    CPoint);
```  
  
### Parameters  
 [in] `COleDataObject*`  
 [in] `DWORD`  
 [in] `CPoint`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcbasetabctrl__ondragleave"></a>  CMFCBaseTabCtrl::OnDragLeave  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDragLeave();
```  
  
### Remarks  
  
##  <a name="cmfcbasetabctrl__ondragenter"></a>  CMFCBaseTabCtrl::OnDragEnter  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual DROPEFFECT OnDragEnter(
    COleDataObject*,
    DWORD,
    CPoint);
```  
  
### Parameters  
 [in] `COleDataObject*`  
 [in] `DWORD`  
 [in] `CPoint`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcbasetabctrl__onrenametab"></a>  CMFCBaseTabCtrl::OnRenameTab  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL OnRenameTab(
    int, CString&);
```  
  
### Parameters  
 [in] `int`  
 [in] `CString&`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcbasetabctrl__pretranslatemessage"></a>  CMFCBaseTabCtrl::PreTranslateMessage  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL PreTranslateMessage(MSG* pMsg);
```  
  
### Parameters  
 [in] `pMsg`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcbasetabctrl__recalclayout"></a>  CMFCBaseTabCtrl::RecalcLayout  
 Recalculates the internal layout of the tab control.  
  
```  
virtual void RecalcLayout() = 0;  
```  
  
### Remarks  
 In the [CMFCBaseTabCtrl Class](../../mfc/reference/cmfcbasetabctrl-class.md), this method is a pure virtual function. If you derive a class from `CMFCBaseTabCtrl`, you have to implement this function.  
  
##  <a name="cmfcbasetabctrl__removealltabs"></a>  CMFCBaseTabCtrl::RemoveAllTabs  
 Removes all the tabs from the tab control.  
  
```  
virtual void RemoveAllTabs();
```  
  
### Remarks  
 If [CMFCBaseTabCtrl::m_bAutoDestroyWindow](#cmfcbasetabctrl__m_bautodestroywindow) is `TRUE`, the framework deletes all the [CWnd](../../mfc/reference/cwnd-class.md) objects attached to the removed tabs.  
  
##  <a name="cmfcbasetabctrl__removetab"></a>  CMFCBaseTabCtrl::RemoveTab  
 Removes a tab from the tab control.  
  
```  
virtual BOOL RemoveTab(
    int iTab,  
    BOOL bRecalcLayout = TRUE);
```  
  
### Parameters  
 [in] `iTab`  
 The zero-based index of a tab.  
  
 [in] `bRecalcLayout`  
 A Boolean parameter that specifies whether to recalculate the layout of the tab.  
  
### Return Value  
 `TRUE` if the method removes the tab successfully; otherwise `FALSE`.  
  
### Remarks  
 If [CMFCBaseTabCtrl::m_bAutoDestroyWindow](#cmfcbasetabctrl__m_bautodestroywindow) is `TRUE`, `RemoveTab` destroys the [CWnd](../../mfc/reference/cwnd-class.md) object associated with the specified tab.  
  
##  <a name="cmfcbasetabctrl__renametab"></a>  CMFCBaseTabCtrl::RenameTab  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL RenameTab();
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcbasetabctrl__resetimagelist"></a>  CMFCBaseTabCtrl::ResetImageList  
 Resets the image list for an instance of the [CMFCBaseTabCtrl Class](../../mfc/reference/cmfcbasetabctrl-class.md).  
  
```  
void ResetImageList();
```  
  
##  <a name="cmfcbasetabctrl__serialize"></a>  CMFCBaseTabCtrl::Serialize  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void Serialize(CArchive& ar);
```  
  
### Parameters  
 [in] `ar`  
  
### Remarks  
  
##  <a name="cmfcbasetabctrl__setactivetab"></a>  CMFCBaseTabCtrl::SetActiveTab  
 Activates the specified tab.  
  
```  
virtual BOOL SetActiveTab(int iTab) = 0;  
```  
  
### Parameters  
 [in] `iTab`  
 The zero-based index of a tab. `SetActiveTab` makes the tab with this index active.  
  
### Return Value  
 `TRUE` if successful; otherwise `FALSE`.  
  
### Remarks  
 In the [CMFCBaseTabCtrl Class](../../mfc/reference/cmfcbasetabctrl-class.md), this method is a pure virtual function. If you derive a class from `CMFCBaseTabCtrl`, you have to implement this function.  
  
##  <a name="cmfcbasetabctrl__setactivetabcolor"></a>  CMFCBaseTabCtrl::SetActiveTabColor  
 Sets the background color for the active tab.  
  
```  
virtual void SetActiveTabColor(COLORREF clr);
```  
  
### Parameters  
 [in] `clr`  
 Specifies the new background color.  
  
### Remarks  
 The framework obtains the default background color for active tabs from the [GetSysColor](http://msdn.microsoft.com/library/windows/desktop/ms724371)method.  
  
##  <a name="cmfcbasetabctrl__setactivetabtextcolor"></a>  CMFCBaseTabCtrl::SetActiveTabTextColor  
 Sets the text color for active tabs.  
  
```  
virtual void SetActiveTabTextColor(COLORREF clr);
```  
  
### Parameters  
 [in] `clr`  
 A [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) parameter that specifies the new text color.  
  
### Remarks  
 By default, the framework obtains the text color from [GetSysColor](http://msdn.microsoft.com/library/windows/desktop/ms724371). Override this default color by using the `SetActiveTabTextColor` method.  
  
##  <a name="cmfcbasetabctrl__setautocolors"></a>  CMFCBaseTabCtrl::SetAutoColors  
 Sets the colors of the tab control that the framework uses in automatic color mode.  
  
```  
void SetAutoColors(
    const CArray<COLORREF,COLORREF>& arColors);
```  
  
### Parameters  
 [in] `arColors`  
 An array of RGB colors.  
  
### Remarks  
 If you provide a custom array of colors, the default array of colors is ignored. If the parameter `arColors` is empty, the framework reverts to the default array of colors.  
  
 To enable autocolor mode, use the [CMFCBaseTabCtrl::EnableAutoColor](#cmfcbasetabctrl__enableautocolor) method.  
  
##  <a name="cmfcbasetabctrl__setdockingbarwrapperrtc"></a>  CMFCBaseTabCtrl::SetDockingBarWrapperRTC  
 Sets the wrapper class that is used for any objects that are not derived from the [CDockablePane Class](../../mfc/reference/cdockablepane-class.md).  
  
```  
void SetDockingBarWrapperRTC(CRuntimeClass* pRTC);
```  
  
### Parameters  
 [in] `pRTC`  
 The runtime class information for the new wrapper class.  
  
### Remarks  
 You add tabs to a tab control by using the methods [CMFCBaseTabCtrl::AddTab](#cmfcbasetabctrl__addtab) and [CMFCBaseTabCtrl::InsertTab](#cmfcbasetabctrl__inserttab). When you add a tab, each control on that tab must be dockable. Any objects that are not derived from `CDockablePane` must be wrapped. `AddTab` and `InsertTab` create a wrapper for these objects. The default wrapper class is the [CDockablePaneAdapter Class](../../mfc/reference/cdockablepaneadapter-class.md). The method `SetDockingBarWrapperRTC` enables you to change the class that is used as a wrapper class. The wrapper class that you provide must be derived from `CDockablePaneAdapter`.  
  
##  <a name="cmfcbasetabctrl__setdrawnoprefix"></a>  CMFCBaseTabCtrl::SetDrawNoPrefix  
 Enables and disables the processing of prefix characters in tab labels.  
  
```  
void SetDrawNoPrefix(
    BOOL bNoPrefix,  
    BOOL bRedraw = TRUE);
```  
  
### Parameters  
 [in] `bNoPrefix`  
 `TRUE` if you want to process prefix characters; otherwise `FALSE`.  
  
 [in] `bRedraw`  
 `TRUE` if you want to redraw the tabbed window; otherwise `FALSE`.  
  
### Remarks  
 A prefix character is a mnemonic character that is preceded by an ampersand (&).  
  
##  <a name="cmfcbasetabctrl__setimagelist"></a>  CMFCBaseTabCtrl::SetImageList  
 Sets the icon image list for the tab control.  
  
```  
virtual BOOL SetImageList(
    UINT uiID,  
    int cx = 15,  
    COLORREF clrTransp = RGB(255,
    0,
    255));

 
virtual BOOL SetImageList(
    HIMAGELIST hImageList);
```  
  
### Parameters  
 [in] `uiID`  
 A bitmap resource ID. `SetImageList` loads the image list from this resource.  
  
 [in] `cx`  
 The width of each image in pixels.  
  
 [in] `clrTransp`  
 A [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) parameter that indicates the transparent color of the image.  
  
 [in] `hImageList`  
 A handle to a preloaded image list.  
  
### Return Value  
 Nonzero if the method was successful; 0 otherwise.  
  
### Remarks  
 The images from the icon image list are displayed alongside the labels for the tab. To display an icon, you must specify its index when you call [CMFCBaseTabCtrl::AddTab](#cmfcbasetabctrl__addtab).  
  
 `SetImageList` will fail if the tab control was created with a flat style. It will also fail if the framework cannot load the image indicated by `uiID`.  
  
 This method recalculates the height of the tab according to the image and text sizes.  
  
##  <a name="cmfcbasetabctrl__setlocation"></a>  CMFCBaseTabCtrl::SetLocation  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void SetLocation(Location location);
```  
  
### Parameters  
 [in] `location`  
  
### Remarks  
  
##  <a name="cmfcbasetabctrl__settabbkcolor"></a>  CMFCBaseTabCtrl::SetTabBkColor  
 Sets the background color for the specified tab.  
  
```  
virtual BOOL SetTabBkColor(
    int iTab,  
    COLORREF color = (COLORREF)-1);
```  
  
### Parameters  
 [in] `iTab`  
 The zero-based index of the tab.  
  
 [in] `color`  
 The color to set.  
  
### Return Value  
 `TRUE` if successful; `FALSE` otherwise.  
  
##  <a name="cmfcbasetabctrl__settabbordersize"></a>  CMFCBaseTabCtrl::SetTabBorderSize  
 Sets a new border size for the tab control.  
  
```  
virtual void SetTabBorderSize(
    int nTabBorderSize,  
    BOOL bRepaint = TRUE);
```  
  
### Parameters  
 [in] `nTabBorderSize`  
 The new border size, in pixels.  
  
 [in] `bRepaint`  
 A Boolean parameter that indicates whether the framework redraws the control.  
  
##  <a name="cmfcbasetabctrl__settabhicon"></a>  CMFCBaseTabCtrl::SetTabHicon  
 Sets the icon for a tab label.  
  
```  
virtual BOOL SetTabHicon(
    int iTab,  
    HICON hIcon);
```  
  
### Parameters  
 [in] `iTab`  
 The zero-based index of a tab. This method changes the icon for this tab.  
  
 [in] `hIcon`  
 A handle to an icon.  
  
### Return Value  
 `TRUE` if successful; otherwise `FALSE`.  
  
##  <a name="cmfcbasetabctrl__settabicon"></a>  CMFCBaseTabCtrl::SetTabIcon  
 Sets the icon for a tab.  
  
```  
virtual BOOL SetTabIcon(
    int iTab,  
    UINT uiIcon);
```  
  
### Parameters  
 [in] `iTab`  
 The zero-based index of the tab to update.  
  
 [in] `uiIcon`  
 The icon ID for the new icon. This ID references the internal [CImageList](../../mfc/reference/cimagelist-class.md) object.  
  
### Return Value  
 `TRUE` if successful; otherwise `FALSE`.  
  
##  <a name="cmfcbasetabctrl__settabicononly"></a>  CMFCBaseTabCtrl::SetTabIconOnly  
 Enables displaying only an icon (and no text label) on a specific tab.  
  
```  
virtual BOOL SetTabIconOnly(
    int iTab,  
    BOOL bIconOnly = TRUE,  
    BOOL bShowTooltipAlways = FALSE);
```  
  
### Parameters  
 [in] `iTab`  
 The zero-based index of the tab to change.  
  
 [in] `bIconOnly`  
 A Boolean parameter that determines whether to display only icons.  
  
 [in] `bShowTooltipAlways`  
 A Boolean parameter that determines whether the framework shows tooltips for a tab label that displays only icons.  
  
### Return Value  
 `TRUE` if successful; otherwise `FALSE`.  
  
### Remarks  
 By default, a tab control displays the icon and text label for each tab.  
  
##  <a name="cmfcbasetabctrl__settablabel"></a>  CMFCBaseTabCtrl::SetTabLabel  
 Sets the text for a tab label.  
  
```  
virtual BOOL SetTabLabel(
    int iTab,  
    const CString& strLabel);
```  
  
### Parameters  
 [in] `iTab`  
 The zero-based index of the tab to update.  
  
 [in] `strLabel`  
 A reference to a string that contains the new text for the tab label.  
  
### Return Value  
 Nonzero if successful; 0 otherwise.  
  
##  <a name="cmfcbasetabctrl__settabsheight"></a>  CMFCBaseTabCtrl::SetTabsHeight  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void SetTabsHeight();
```  
  
### Remarks  
  
##  <a name="cmfcbasetabctrl__settabsorder"></a>  CMFCBaseTabCtrl::SetTabsOrder  
 Arranges the tabs in the specified order.  
  
```  
BOOL SetTabsOrder(
    const CArray<int,int>& arOrder);
```  
  
### Parameters  
 [in] `arOrder`  
 An array of zero-based indexes that defines the new tab order.  
  
### Return Value  
 `TRUE` if successful; `FAIL` otherwise.  
  
### Remarks  
 The size of the `arOrder` array must be equal to the number of tabs in the tab control.  
  
##  <a name="cmfcbasetabctrl__settabtextcolor"></a>  CMFCBaseTabCtrl::SetTabTextColor  
 Sets the text color for a specific tab.  
  
```  
virtual BOOL SetTabTextColor(
    int iTab,  
    COLORREF color = (COLORREF)-1);
```  
  
### Parameters  
 [in] `iTab`  
 The zero-based index of the tab.  
  
 [in] `color`  
 A [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) parameter that indicates the new text color.  
  
### Return Value  
 Nonzero if successful; 0 otherwise.  
  
##  <a name="cmfcbasetabctrl__showtab"></a>  CMFCBaseTabCtrl::ShowTab  
 Shows or hides the specified tab.  
  
```  
virtual BOOL ShowTab(
    int iTab,  
    BOOL bShow = TRUE,  
    BOOL bRecalcLayout = TRUE,  
    BOOL bActivate = FALSE);
```  
  
### Parameters  
 [in] `iTab`  
 The index of the tab that `ShowTab` will show or hide.  
  
 [in] `bShow`  
 A Boolean parameter that indicates whether to show the tab.  
  
 [in] `bRecalcLayout`  
 A Boolean parameter that indicates whether to immediately recalculate the window layout.  
  
 [in] `bActivate`  
 A Boolean parameter that indicates whether to select the tab specified by `iTab`.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 The parameter `bActivate` only applies if `bShow` is `TRUE`. If `bActivate` is `TRUE` and if `ShowTab` is successful, `ShowTab` will send the message AFX_WM_CHANGE_ACTIVE_TAB to the parent of the tab window.  
  
##  <a name="cmfcbasetabctrl__startrenametab"></a>  CMFCBaseTabCtrl::StartRenameTab  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL StartRenameTab(int iTab);
```  
  
### Parameters  
 [in] `iTab`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcbasetabctrl__swaptabs"></a>  CMFCBaseTabCtrl::SwapTabs  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void SwapTabs(
    int nFisrtTabID,  
    int nSecondTabID);
```  
  
### Parameters  
 [in] `nFisrtTabID`  
 [in] `nSecondTabID`  
  
### Remarks  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CMFCTabCtrl Class](../../mfc/reference/cmfctabctrl-class.md)   
 [CMFCOutlookBarTabCtrl Class](../../mfc/reference/cmfcoutlookbartabctrl-class.md)
