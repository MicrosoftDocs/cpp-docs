---
title: "CMFCVisualManagerWindows Class"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: 568b6e9e-8e67-4477-9a3d-2981cbd09861
caps.latest.revision: 42
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# CMFCVisualManagerWindows Class
`CMFCVisualManagerWindows` mimics the appearance of Microsoft Windows XP or Microsoft Vista when the user selects a Windows XP or Vista theme.  
  
## Syntax  
  
```  
class CMFCVisualManagerWindows : public CMFCVisualManagerOfficeXP  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|`CMFCVisualManagerWindows::CMFCVisualManagerWindows`|Default constructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCVisualManagerWindows::AlwaysHighlight3DTabs](#cmfcvisualmanagerwindows__alwayshighlight3dtabs)|The framework calls this method to determine whether 3D tabs should always be highlighted in the application. (Overrides [CMFCVisualManager::AlwaysHighlight3DTabs](../VS_visualcpp/CMFCVisualManager-Class.md#cmfcvisualmanager__alwayshighlight3dtabs).)|  
|[CMFCVisualManagerWindows::DrawComboBorderWinXP](#cmfcvisualmanagerwindows__drawcomboborderwinxp)|(Overrides `CMFCVisualManager::DrawComboBorderWinXP`.)|  
|[CMFCVisualManagerWindows::DrawComboDropButtonWinXP](#cmfcvisualmanagerwindows__drawcombodropbuttonwinxp)|(Overrides [CMFCVisualManager::DrawComboDropButtonWinXP](../VS_visualcpp/CMFCVisualManager-Class.md#cmfcvisualmanager__drawcombodropbuttonwinxp).)|  
|[CMFCVisualManagerWindows::DrawPushButtonWinXP](#cmfcvisualmanagerwindows__drawpushbuttonwinxp)|(Overrides [CMFCVisualManager::DrawPushButtonWinXP](../VS_visualcpp/CMFCVisualManager-Class.md#cmfcvisualmanager__drawpushbuttonwinxp).)|  
|[CMFCVisualManagerWindows::GetButtonExtraBorder](#cmfcvisualmanagerwindows__getbuttonextraborder)|The framework calls this method when it draws a toolbar button. (Overrides [CMFCVisualManager::GetButtonExtraBorder](../VS_visualcpp/CMFCVisualManager-Class.md#cmfcvisualmanager__getbuttonextraborder).)|  
|[CMFCVisualManagerWindows::GetCaptionButtonExtraBorder](#cmfcvisualmanagerwindows__getcaptionbuttonextraborder)|(Overrides [CMFCVisualManager::GetCaptionButtonExtraBorder](../VS_visualcpp/CMFCVisualManager-Class.md#cmfcvisualmanager__getcaptionbuttonextraborder).)|  
|[CMFCVisualManagerWindows::GetDockingPaneCaptionExtraHeight](#cmfcvisualmanagerwindows__getdockingpanecaptionextraheight)|(Overrides `CMFCVisualManager::GetDockingPaneCaptionExtraHeight`.)|  
|[CMFCVisualManagerWindows::GetHighlightedMenuItemTextColor](#cmfcvisualmanagerwindows__gethighlightedmenuitemtextcolor)|(Overrides `CMFCVisualManagerOfficeXP::GetHighlightedMenuItemTextColor`.)|  
|[CMFCVisualManagerWindows::GetPopupMenuGap](#cmfcvisualmanagerwindows__getpopupmenugap)|(Overrides `CMFCVisualManagerOfficeXP::GetPopupMenuGap`.)|  
|[CMFCVisualManagerWindows::GetToolbarButtonTextColor](#cmfcvisualmanagerwindows__gettoolbarbuttontextcolor)|(Overrides `CMFCVisualManagerOfficeXP::GetToolbarButtonTextColor`.)|  
|[CMFCVisualManagerWindows::IsDefaultWinXPPopupButton](#cmfcvisualmanagerwindows__isdefaultwinxppopupbutton)|(Overrides [CMFCVisualManager::IsDefaultWinXPPopupButton](../VS_visualcpp/CMFCVisualManager-Class.md#cmfcvisualmanager__isdefaultwinxppopupbutton).)|  
|[CMFCVisualManagerWindows::IsHighlightWholeMenuItem](#cmfcvisualmanagerwindows__ishighlightwholemenuitem)|(Overrides `CMFCVisualManagerOfficeXP::IsHighlightWholeMenuItem`.)|  
|[CMFCVisualManagerWindows::IsOfficeStyleMenus](#cmfcvisualmanagerwindows__isofficestylemenus)||  
|[CMFCVisualManagerWindows::IsOfficeXPStyleMenus](#cmfcvisualmanagerwindows__isofficexpstylemenus)|Indicates whether the visual manager implements Office XP-style menus. (Overrides [CMFCVisualManager::IsOfficeXPStyleMenus](../VS_visualcpp/CMFCVisualManager-Class.md#cmfcvisualmanager__isofficexpstylemenus).)|  
|[CMFCVisualManagerWindows::IsWindowsThemingSupported](#cmfcvisualmanagerwindows__iswindowsthemingsupported)|(Overrides `CMFCVisualManager::IsWindowsThemingSupported`.)|  
|[CMFCVisualManagerWindows::IsWinXPThemeAvailable](#cmfcvisualmanagerwindows__iswinxpthemeavailable)|Indicates whether a Windows theme is available. A theme can be either a Windows XP theme or a Windows Vista theme.|  
|[CMFCVisualManagerWindows::OnDrawBarGripper](#cmfcvisualmanagerwindows__ondrawbargripper)|(Overrides `CMFCVisualManagerOfficeXP::OnDrawBarGripper`.)|  
|[CMFCVisualManagerWindows::OnDrawBrowseButton](#cmfcvisualmanagerwindows__ondrawbrowsebutton)|(Overrides `CMFCVisualManagerOfficeXP::OnDrawBrowseButton`.)|  
|[CMFCVisualManagerWindows::OnDrawButtonBorder](#cmfcvisualmanagerwindows__ondrawbuttonborder)|(Overrides `CMFCVisualManagerOfficeXP::OnDrawButtonBorder`.)|  
|[CMFCVisualManagerWindows::OnDrawButtonSeparator](#cmfcvisualmanagerwindows__ondrawbuttonseparator)|(Overrides `CMFCVisualManagerOfficeXP::OnDrawButtonSeparator`.)|  
|[CMFCVisualManagerWindows::OnDrawCaptionButton](#cmfcvisualmanagerwindows__ondrawcaptionbutton)|(Overrides `CMFCVisualManagerOfficeXP::OnDrawCaptionButton`.)|  
|[CMFCVisualManagerWindows::OnDrawCaptionButtonIcon](#cmfcvisualmanagerwindows__ondrawcaptionbuttonicon)|(Overrides `CMFCVisualManagerOfficeXP::OnDrawCaptionButtonIcon`.)|  
|[CMFCVisualManagerWindows::OnDrawCheckBoxEx](#cmfcvisualmanagerwindows__ondrawcheckboxex)|(Overrides [CMFCVisualManager::OnDrawCheckBoxEx](../VS_visualcpp/CMFCVisualManager-Class.md#cmfcvisualmanager__ondrawcheckboxex).)|  
|[CMFCVisualManagerWindows::OnDrawComboBorder](#cmfcvisualmanagerwindows__ondrawcomboborder)|(Overrides `CMFCVisualManagerOfficeXP::OnDrawComboBorder`.)|  
|[CMFCVisualManagerWindows::OnDrawComboDropButton](#cmfcvisualmanagerwindows__ondrawcombodropbutton)|(Overrides `CMFCVisualManagerOfficeXP::OnDrawComboDropButton`.)|  
|[CMFCVisualManagerWindows::OnDrawControlBorder](#cmfcvisualmanagerwindows__ondrawcontrolborder)|(Overrides [CMFCVisualManager::OnDrawControlBorder](../VS_visualcpp/CMFCVisualManager-Class.md#cmfcvisualmanager__ondrawcontrolborder).)|  
|[CMFCVisualManagerWindows::OnDrawEditBorder](#cmfcvisualmanagerwindows__ondraweditborder)|(Overrides `CMFCVisualManagerOfficeXP::OnDrawEditBorder`.)|  
|[CMFCVisualManagerWindows::OnDrawExpandingBox](#cmfcvisualmanagerwindows__ondrawexpandingbox)|(Overrides [CMFCVisualManager::OnDrawExpandingBox](../VS_visualcpp/CMFCVisualManager-Class.md#cmfcvisualmanager__ondrawexpandingbox).)|  
|[CMFCVisualManagerWindows::OnDrawFloatingToolbarBorder](#cmfcvisualmanagerwindows__ondrawfloatingtoolbarborder)|(Overrides `CMFCVisualManagerOfficeXP::OnDrawFloatingToolbarBorder`.)|  
|[CMFCVisualManagerWindows::OnDrawHeaderCtrlBorder](#cmfcvisualmanagerwindows__ondrawheaderctrlborder)|The framework calls this method when it draws the border around an instance of the [CMFCHeaderCtrl Class](../VS_visualcpp/CMFCHeaderCtrl-Class.md). (Overrides [CMFCVisualManager::OnDrawHeaderCtrlBorder](../VS_visualcpp/CMFCVisualManager-Class.md#cmfcvisualmanager__ondrawheaderctrlborder).)|  
|[CMFCVisualManagerWindows::OnDrawHeaderCtrlSortArrow](#cmfcvisualmanagerwindows__ondrawheaderctrlsortarrow)|The framework calls this function when it draws the sort arrow of a header control. (Overrides [CMFCVisualManager::OnDrawHeaderCtrlSortArrow](../VS_visualcpp/CMFCVisualManager-Class.md#cmfcvisualmanager__ondrawheaderctrlsortarrow).)|  
|[CMFCVisualManagerWindows::OnDrawMenuBorder](#cmfcvisualmanagerwindows__ondrawmenuborder)|(Overrides `CMFCVisualManagerOfficeXP::OnDrawMenuBorder`.)|  
|[CMFCVisualManagerWindows::OnDrawMenuSystemButton](#cmfcvisualmanagerwindows__ondrawmenusystembutton)|(Overrides `CMFCVisualManagerOfficeXP::OnDrawMenuSystemButton`.)|  
|[CMFCVisualManagerWindows::OnDrawMiniFrameBorder](#cmfcvisualmanagerwindows__ondrawminiframeborder)|(Overrides `CMFCVisualManagerOfficeXP::OnDrawMiniFrameBorder`.)|  
|[CMFCVisualManagerWindows::OnDrawOutlookPageButtonBorder](#cmfcvisualmanagerwindows__ondrawoutlookpagebuttonborder)|Called by the framework when it draws the border of an Outlook page button. (Overrides [CMFCVisualManager::OnDrawOutlookPageButtonBorder](../VS_visualcpp/CMFCVisualManager-Class.md#cmfcvisualmanager__ondrawoutlookpagebuttonborder).)|  
|[CMFCVisualManagerWindows::OnDrawPaneBorder](#cmfcvisualmanagerwindows__ondrawpaneborder)|(Overrides `CMFCVisualManagerOfficeXP::OnDrawPaneBorder`.)|  
|[CMFCVisualManagerWindows::OnDrawPaneCaption](#cmfcvisualmanagerwindows__ondrawpanecaption)|(Overrides `CMFCVisualManagerOfficeXP::OnDrawPaneCaption`.)|  
|[CMFCVisualManagerWindows::OnDrawPopupWindowButtonBorder](#cmfcvisualmanagerwindows__ondrawpopupwindowbuttonborder)|(Overrides `CMFCVisualManagerOfficeXP::OnDrawPopupWindowButtonBorder`.)|  
|[CMFCVisualManagerWindows::OnDrawScrollButtons](#cmfcvisualmanagerwindows__ondrawscrollbuttons)|(Overrides `CMFCVisualManagerOfficeXP::OnDrawScrollButtons`.)|  
|[CMFCVisualManagerWindows::OnDrawSeparator](#cmfcvisualmanagerwindows__ondrawseparator)|(Overrides `CMFCVisualManagerOfficeXP::OnDrawSeparator`.)|  
|[CMFCVisualManagerWindows::OnDrawSpinButtons](#cmfcvisualmanagerwindows__ondrawspinbuttons)|(Overrides `CMFCVisualManagerOfficeXP::OnDrawSpinButtons`.)|  
|[CMFCVisualManagerWindows::OnDrawStatusBarPaneBorder](#cmfcvisualmanagerwindows__ondrawstatusbarpaneborder)|(Overrides `CMFCVisualManagerOfficeXP::OnDrawStatusBarPaneBorder`.)|  
|[CMFCVisualManagerWindows::OnDrawStatusBarProgress](#cmfcvisualmanagerwindows__ondrawstatusbarprogress)|The framework calls this method when it draws the progress indicator on the [CMFCStatusBar](../VS_visualcpp/CMFCStatusBar-Class.md) object. (Overrides [CMFCVisualManager::OnDrawStatusBarProgress](../VS_visualcpp/CMFCVisualManager-Class.md#cmfcvisualmanager__ondrawstatusbarprogress).)|  
|[CMFCVisualManagerWindows::OnDrawStatusBarSizeBox](#cmfcvisualmanagerwindows__ondrawstatusbarsizebox)|The framework calls this method when it draws the size box for a [CMFCStatusBar](../VS_visualcpp/CMFCStatusBar-Class.md). (Overrides [CMFCVisualManager::OnDrawStatusBarSizeBox](../VS_visualcpp/CMFCVisualManager-Class.md#cmfcvisualmanager__ondrawstatusbarsizebox).)|  
|[CMFCVisualManagerWindows::OnDrawTab](#cmfcvisualmanagerwindows__ondrawtab)|(Overrides `CMFCVisualManagerOfficeXP::OnDrawTab`.)|  
|[CMFCVisualManagerWindows::OnDrawTabCloseButton](#cmfcvisualmanagerwindows__ondrawtabclosebutton)|(Overrides `CMFCVisualManagerOfficeXP::OnDrawTabCloseButton`.)|  
|[CMFCVisualManagerWindows::OnDrawTabsButtonBorder](#cmfcvisualmanagerwindows__ondrawtabsbuttonborder)|(Overrides `CMFCVisualManagerOfficeXP::OnDrawTabsButtonBorder`.)|  
|[CMFCVisualManagerWindows::OnDrawTask](#cmfcvisualmanagerwindows__ondrawtask)|(Overrides `CMFCVisualManagerOfficeXP::OnDrawTask`.)|  
|[CMFCVisualManagerWindows::OnDrawTasksGroupAreaBorder](#cmfcvisualmanagerwindows__ondrawtasksgroupareaborder)|(Overrides `CMFCVisualManagerOfficeXP::OnDrawTasksGroupAreaBorder`.)|  
|[CMFCVisualManagerWindows::OnDrawTasksGroupCaption](#cmfcvisualmanagerwindows__ondrawtasksgroupcaption)|(Overrides `CMFCVisualManagerOfficeXP::OnDrawTasksGroupCaption`.)|  
|[CMFCVisualManagerWindows::OnDrawTearOffCaption](#cmfcvisualmanagerwindows__ondrawtearoffcaption)|(Overrides `CMFCVisualManagerOfficeXP::OnDrawTearOffCaption`.)|  
|[CMFCVisualManagerWindows::OnErasePopupWindowButton](#cmfcvisualmanagerwindows__onerasepopupwindowbutton)|(Overrides `CMFCVisualManagerOfficeXP::OnErasePopupWindowButton`.)|  
|[CMFCVisualManagerWindows::OnEraseTabsArea](#cmfcvisualmanagerwindows__onerasetabsarea)|(Overrides `CMFCVisualManagerOfficeXP::OnEraseTabsArea`.)|  
|[CMFCVisualManagerWindows::OnEraseTabsButton](#cmfcvisualmanagerwindows__onerasetabsbutton)|(Overrides `CMFCVisualManagerOfficeXP::OnEraseTabsButton`.)|  
|[CMFCVisualManagerWindows::OnEraseTabsFrame](#cmfcvisualmanagerwindows__onerasetabsframe)|The framework calls this method when it erases a frame on a [CMFCBaseTabCtrl Class](../VS_visualcpp/CMFCBaseTabCtrl-Class.md). (Overrides [CMFCVisualManager::OnEraseTabsFrame](../VS_visualcpp/CMFCVisualManager-Class.md#cmfcvisualmanager__onerasetabsframe).)|  
|[CMFCVisualManagerWindows::OnFillBarBackground](#cmfcvisualmanagerwindows__onfillbarbackground)|(Overrides `CMFCVisualManagerOfficeXP::OnFillBarBackground`.)|  
|[CMFCVisualManagerWindows::OnFillButtonInterior](#cmfcvisualmanagerwindows__onfillbuttoninterior)|(Overrides `CMFCVisualManagerOfficeXP::OnFillButtonInterior`.)|  
|[CMFCVisualManagerWindows::OnFillCommandsListBackground](#cmfcvisualmanagerwindows__onfillcommandslistbackground)|(Overrides `CMFCVisualManagerOfficeXP::OnFillCommandsListBackground`.)|  
|[CMFCVisualManagerWindows::OnFillMiniFrameCaption](#cmfcvisualmanagerwindows__onfillminiframecaption)|(Overrides `CMFCVisualManagerOfficeXP::OnFillMiniFrameCaption`.)|  
|[CMFCVisualManagerWindows::OnFillOutlookPageButton](#cmfcvisualmanagerwindows__onfilloutlookpagebutton)|The framework calls this method when it fills the interior of an Outlook page button. (Overrides [CMFCVisualManager::OnFillOutlookPageButton](../VS_visualcpp/CMFCVisualManager-Class.md#cmfcvisualmanager__onfilloutlookpagebutton).)|  
|[CMFCVisualManagerWindows::OnFillTasksGroupInterior](#cmfcvisualmanagerwindows__onfilltasksgroupinterior)|(Overrides `CMFCVisualManagerOfficeXP::OnFillTasksGroupInterior`.)|  
|[CMFCVisualManagerWindows::OnFillTasksPaneBackground](#cmfcvisualmanagerwindows__onfilltaskspanebackground)|The framework calls this method when it fills the background of a [CMFCTasksPane](../VS_visualcpp/CMFCTasksPane-Class.md) control. (Overrides [CMFCVisualManager::OnFillTasksPaneBackground](../VS_visualcpp/CMFCVisualManager-Class.md#cmfcvisualmanager__onfilltaskspanebackground).)|  
|[CMFCVisualManagerWindows::OnHighlightMenuItem](#cmfcvisualmanagerwindows__onhighlightmenuitem)|(Overrides `CMFCVisualManagerOfficeXP::OnHighlightMenuItem`.)|  
|[CMFCVisualManagerWindows::OnHighlightRarelyUsedMenuItems](#cmfcvisualmanagerwindows__onhighlightrarelyusedmenuitems)|(Overrides `CMFCVisualManagerOfficeXP::OnHighlightRarelyUsedMenuItems`.)|  
|[CMFCVisualManagerWindows::OnUpdateSystemColors](#cmfcvisualmanagerwindows__onupdatesystemcolors)|(Overrides `CMFCVisualManagerOfficeXP::OnUpdateSystemColors`.)|  
|[CMFCVisualManagerWindows::SetOfficeStyleMenus](#cmfcvisualmanagerwindows__setofficestylemenus)||  
  
### Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCVisualManagerWindows::m_b3DTabsXPTheme](#cmfcvisualmanagerwindows__m_b3dtabsxptheme)|Specifies whether the Windows XP theme displays 3D tabs.|  
  
## Remarks  
 Use the `CMFCVisualManagerWindows` class to change the appearance of your application to mimic the current Windows XP or Windows Vista theme on the computer where the application runs.  
  
 However, a Windows theme might be unavailable if your application is running on a version of Windows earlier than Windows XP or if themes are disabled because the user is using the **Classic** view. If no theme is available, the application uses the default visual manager defined in [CMFCVisualManager](../VS_visualcpp/CMFCVisualManager-Class.md).  
  
## Example  
 The following example demonstrates how to use `CMFCVisualManagerWindows`. This code snippet is part of the [Desktop Alert Demo sample](../VS_visualcpp/Visual-C---Samples.md).  
  
 [!CODE [NVC_MFC_DesktopAlertDemo#10](../CodeSnippet/VS_Snippets_Misc/NVC_MFC_DesktopAlertDemo#10)]  
  
## Inheritance Hierarchy  
 [CObject](../VS_visualcpp/CObject-Class.md)  
  
 [CMFCBaseVisualManager](../VS_visualcpp/CMFCBaseVisualManager-Class.md)  
  
 [CMFCVisualManager](../VS_visualcpp/CMFCVisualManager-Class.md)  
  
 [CMFCVisualManagerOfficeXP](../VS_visualcpp/CMFCVisualManagerOfficeXP-Class.md)  
  
 [CMFCVisualManagerWindows](../VS_visualcpp/CMFCVisualManagerWindows-Class.md)  
  
## Requirements  
 **Header:** afxvisualmanagerwindows.h  
  
##  <a name="cmfcvisualmanagerwindows__alwayshighlight3dtabs"></a>  CMFCVisualManagerWindows::AlwaysHighlight3DTabs  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL AlwaysHighlight3DTabs() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__cmfcvisualmanagerwindows"></a>  CMFCVisualManagerWindows::CMFCVisualManagerWindows  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
CMFCVisualManagerWindows(  
    BOOL bIsTemporary = FALSE);  
```  
  
### Parameters  
 [in] `bIsTemporary`  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__drawcomboborderwinxp"></a>  CMFCVisualManagerWindows::DrawComboBorderWinXP  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL DrawComboBorderWinXP(  
    CDC* pDC,  
    CRect rect,  
    BOOL bDisabled,  
    BOOL bIsDropped,  
    BOOL bIsHighlighted );  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rect`  
  [in] `bDisabled`  
  [in] `bIsDropped`  
  [in] `bIsHighlighted`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__drawcombodropbuttonwinxp"></a>  CMFCVisualManagerWindows::DrawComboDropButtonWinXP  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL DrawComboDropButtonWinXP(  
    CDC* pDC,  
    CRect rect,  
    BOOL bDisabled,  
    BOOL bIsDropped,  
    BOOL bIsHighlighted );  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rect`  
  [in] `bDisabled`  
  [in] `bIsDropped`  
  [in] `bIsHighlighted`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__drawpushbuttonwinxp"></a>  CMFCVisualManagerWindows::DrawPushButtonWinXP  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL DrawPushButtonWinXP(  
    CDC* pDC,  
    CRect rect,  
    CMFCButton* pButton,  
    UINT uiState );  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rect`  
  [in] `pButton`  
  [in] `uiState`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__getbuttonextraborder"></a>  CMFCVisualManagerWindows::GetButtonExtraBorder  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual CSize GetButtonExtraBorder() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__getcaptionbuttonextraborder"></a>  CMFCVisualManagerWindows::GetCaptionButtonExtraBorder  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual CSize GetCaptionButtonExtraBorder() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__getdockingpanecaptionextraheight"></a>  CMFCVisualManagerWindows::GetDockingPaneCaptionExtraHeight  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual int GetDockingPaneCaptionExtraHeight() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__gethighlightedmenuitemtextcolor"></a>  CMFCVisualManagerWindows::GetHighlightedMenuItemTextColor  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual COLORREF GetHighlightedMenuItemTextColor( CMFCToolBarMenuButton* pButton );  
```  
  
### Parameters  
 [in] `pButton`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__getpopupmenugap"></a>  CMFCVisualManagerWindows::GetPopupMenuGap  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual int GetPopupMenuGap() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__gettoolbarbuttontextcolor"></a>  CMFCVisualManagerWindows::GetToolbarButtonTextColor  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual COLORREF GetToolbarButtonTextColor(  
    CMFCToolBarButton* pButton,  
    CMFCVisualManager::AFX_BUTTON_STATE state );  
```  
  
### Parameters  
 [in] `pButton`  
  [in] `state`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__isdefaultwinxppopupbutton"></a>  CMFCVisualManagerWindows::IsDefaultWinXPPopupButton  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL IsDefaultWinXPPopupButton( CMFCDesktopAlertWndButton* pButton ) const;  
```  
  
### Parameters  
 [in] `pButton`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__ishighlightwholemenuitem"></a>  CMFCVisualManagerWindows::IsHighlightWholeMenuItem  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL IsHighlightWholeMenuItem();  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__isofficestylemenus"></a>  CMFCVisualManagerWindows::IsOfficeStyleMenus  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
BOOL IsOfficeStyleMenus() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__isofficexpstylemenus"></a>  CMFCVisualManagerWindows::IsOfficeXPStyleMenus  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL IsOfficeXPStyleMenus() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__iswindowsthemingsupported"></a>  CMFCVisualManagerWindows::IsWindowsThemingSupported  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL IsWindowsThemingSupported() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__iswinxpthemeavailable"></a>  CMFCVisualManagerWindows::IsWinXPThemeAvailable  
 Determines whether a Windows XP or Windows Vista theme is available.  
  
```  
static BOOL IsWinXPThemeAvailible();  
```  
  
### Return Value  
 Nonzero if a theme is available; otherwise 0.  
  
### Remarks  
 This method is valid for both Windows XP and Windows Vista themes.  
  
 `IsWinXPThemeAvailable` is identical to `CMFCVisualManagerWindows::IsWindowsThemingAvailable` except that `IsWinXPThemeAvailable` is a static method. Therefore, it will create a temporary visual manager if one does not exist.  
  
 `IsWinXPThemeAvailable` always return 0s for versions of Windows earlier than Windows XP.  
  
##  <a name="cmfcvisualmanagerwindows__m_b3dtabsxptheme"></a>  CMFCVisualManagerWindows::m_b3DTabsXPTheme  
 A Boolean parameter that determines whether the visual manager displays 3D tabs.  
  
```  
AFX_IMPORT_DATA static BOOL m_b3DTabsXPTheme;  
```  
  
##  <a name="cmfcvisualmanagerwindows__ondrawbargripper"></a>  CMFCVisualManagerWindows::OnDrawBarGripper  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawBarGripper(  
    CDC* pDC,  
    CRect rectGripper,  
    BOOL bHorz,  
    CBasePane* pBar );  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rectGripper`  
  [in] `bHorz`  
  [in] `pBar`  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__ondrawbrowsebutton"></a>  CMFCVisualManagerWindows::OnDrawBrowseButton  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL OnDrawBrowseButton(  
    CDC* pDC,  
    CRect rect,  
    CMFCEditBrowseCtrl* pEdit,  
    CMFCVisualManager::AFX_BUTTON_STATE state,  
    COLORREF& clrText );  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rect`  
  [in] `pEdit`  
  [in] `state`  
  [in] `clrText`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__ondrawbuttonborder"></a>  CMFCVisualManagerWindows::OnDrawButtonBorder  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawButtonBorder(  
    CDC* pDC,  
    CMFCToolBarButton* pButton,  
    CRect rect,  
    CMFCVisualManager::AFX_BUTTON_STATE state );  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pButton`  
  [in] `rect`  
  [in] `state`  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__ondrawbuttonseparator"></a>  CMFCVisualManagerWindows::OnDrawButtonSeparator  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawButtonSeparator(  
    CDC* pDC,  
    CMFCToolBarButton* pButton,  
    CRect rect,  
    CMFCVisualManager::AFX_BUTTON_STATE state,  
    BOOL bHorz );  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pButton`  
  [in] `rect`  
  [in] `state`  
  [in] `bHorz`  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__ondrawcaptionbutton"></a>  CMFCVisualManagerWindows::OnDrawCaptionButton  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawCaptionButton(  
    CDC* pDC,  
    CMFCCaptionButton* pButton,  
    BOOL bActive,  
    BOOL bHorz,  
    BOOL bMaximized,  
    BOOL bDisabled,  
    int nImageID = -1);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pButton`  
  [in] `bActive`  
  [in] `bHorz`  
  [in] `bMaximized`  
  [in] `bDisabled`  
  [in] `nImageID`  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__ondrawcaptionbuttonicon"></a>  CMFCVisualManagerWindows::OnDrawCaptionButtonIcon  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawCaptionButtonIcon(  
    CDC* pDC,  
    CMFCCaptionButton* pButton,  
    CMenuImages::IMAGES_IDS id,  
    BOOL bActive,  
    BOOL bDisabled,  
    CPoint ptImage );  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pButton`  
  [in] `id`  
  [in] `bActive`  
  [in] `bDisabled`  
  [in] `ptImage`  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__ondrawcheckboxex"></a>  CMFCVisualManagerWindows::OnDrawCheckBoxEx  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawCheckBoxEx(  
    CDC * pDC,  
    CRect rect,  
    int nState,  
    BOOL bHighlighted,  
    BOOL bPressed,  
    BOOL bEnabled );  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rect`  
  [in] `nState`  
  [in] `bHighlighted`  
  [in] `bPressed`  
  [in] `bEnabled`  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__ondrawcomboborder"></a>  CMFCVisualManagerWindows::OnDrawComboBorder  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawComboBorder(  
    CDC* pDC,  
    CRect rect,  
    BOOL bDisabled,  
    BOOL bIsDropped,  
    BOOL bIsHighlighted,  
    CMFCToolBarComboBoxButton* pButton );  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rect`  
  [in] `bDisabled`  
  [in] `bIsDropped`  
  [in] `bIsHighlighted`  
  [in] `pButton`  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__ondrawcombodropbutton"></a>  CMFCVisualManagerWindows::OnDrawComboDropButton  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawComboDropButton(  
    CDC* pDC,  
    CRect rect,  
    BOOL bDisabled,  
    BOOL bIsDropped,  
    BOOL bIsHighlighted,  
    CMFCToolBarComboBoxButton* pButton );  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rect`  
  [in] `bDisabled`  
  [in] `bIsDropped`  
  [in] `bIsHighlighted`  
  [in] `pButton`  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__ondrawcontrolborder"></a>  CMFCVisualManagerWindows::OnDrawControlBorder  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawControlBorder( CWnd* pWndCtrl );  
```  
  
### Parameters  
 [in] `pWndCtrl`  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__ondraweditborder"></a>  CMFCVisualManagerWindows::OnDrawEditBorder  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawEditBorder(  
    CDC* pDC,  
    CRect rect,  
    BOOL bDisabled,  
    BOOL bIsHighlighted,  
    CMFCToolBarEditBoxButton* pButton );  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rect`  
  [in] `bDisabled`  
  [in] `bIsHighlighted`  
  [in] `pButton`  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__ondrawexpandingbox"></a>  CMFCVisualManagerWindows::OnDrawExpandingBox  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawExpandingBox(  
    CDC* pDC,  
    CRect rect,  
    BOOL bIsOpened,  
    COLORREF colorBox );  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rect`  
  [in] `bIsOpened`  
  [in] `colorBox`  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__ondrawfloatingtoolbarborder"></a>  CMFCVisualManagerWindows::OnDrawFloatingToolbarBorder  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawFloatingToolbarBorder(  
    CDC* pDC,  
    CMFCBaseToolBar* pToolBar,  
    CRect rectBorder,  
    CRect rectBorderSize );  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pToolBar`  
  [in] `rectBorder`  
  [in] `rectBorderSize`  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__ondrawheaderctrlborder"></a>  CMFCVisualManagerWindows::OnDrawHeaderCtrlBorder  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawHeaderCtrlBorder(  
    CMFCHeaderCtrl* pCtrl,  
    CDC* pDC,  
    CRect& rect,  
    BOOL bIsPressed,  
    BOOL bIsHighlighted );  
```  
  
### Parameters  
 [in] `pCtrl`  
  [in] `pDC`  
  [in] `rect`  
  [in] `bIsPressed`  
  [in] `bIsHighlighted`  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__ondrawheaderctrlsortarrow"></a>  CMFCVisualManagerWindows::OnDrawHeaderCtrlSortArrow  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawHeaderCtrlSortArrow(  
    CMFCHeaderCtrl* pCtrl,  
    CDC* pDC,  
    CRect& rect,  
    BOOL bIsUp );  
```  
  
### Parameters  
 [in] `pCtrl`  
  [in] `pDC`  
  [in] `rect`  
  [in] `bIsUp`  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__ondrawmenuborder"></a>  CMFCVisualManagerWindows::OnDrawMenuBorder  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawMenuBorder(  
    CDC* pDC,  
    CMFCPopu* pMenu,  
    CRect rect );  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pMenu`  
  [in] `rect`  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__ondrawmenusystembutton"></a>  CMFCVisualManagerWindows::OnDrawMenuSystemButton  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawMenuSystemButton(  
    CDC* pDC,  
    CRect rect,  
    UINT uiSystemCommand,  
    UINT nStyle,  
    BOOL bHighlight );  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rect`  
  [in] `uiSystemCommand`  
  [in] `nStyle`  
  [in] `bHighlight`  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__ondrawminiframeborder"></a>  CMFCVisualManagerWindows::OnDrawMiniFrameBorder  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawMiniFrameBorder(  
    CDC* pDC,  
    CPaneFrameWnd* pFrameWnd,  
    CRect rectBorder,  
    CRect rectBorderSize );  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pFrameWnd`  
  [in] `rectBorder`  
  [in] `rectBorderSize`  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__ondrawoutlookpagebuttonborder"></a>  CMFCVisualManagerWindows::OnDrawOutlookPageButtonBorder  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawOutlookPageButtonBorder(  
    CDC* pDC,  
    CRect& rectBtn,  
    BOOL bIsHighlighted,  
    BOOL bIsPressed );  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rectBtn`  
  [in] `bIsHighlighted`  
  [in] `bIsPressed`  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__ondrawpaneborder"></a>  CMFCVisualManagerWindows::OnDrawPaneBorder  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawPaneBorder(  
    CDC* pDC,  
    CBasePane* pBar,  
    CRect& rect );  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pBar`  
  [in] `rect`  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__ondrawpanecaption"></a>  CMFCVisualManagerWindows::OnDrawPaneCaption  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual COLORREF OnDrawPaneCaption(  
    CDC* pDC,  
    CDockablePane* pBar,  
    BOOL bActive,  
    CRect rectCaption,  
    CRect rectButtons );  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pBar`  
  [in] `bActive`  
  [in] `rectCaption`  
  [in] `rectButtons`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__ondrawpopupwindowbuttonborder"></a>  CMFCVisualManagerWindows::OnDrawPopupWindowButtonBorder  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawPopupWindowButtonBorder(  
    CDC* pDC,  
    CRect rectClient,  
    CMFCDesktopAlertWndButton* pButton );  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rectClient`  
  [in] `pButton`  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__ondrawscrollbuttons"></a>  CMFCVisualManagerWindows::OnDrawScrollButtons  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawScrollButtons(  
    CDC* pDC,  
    const CRect& rect,  
    const int nBorderSize,  
    int iImage,  
    BOOL bHilited );  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rect`  
  [in] `nBorderSize`  
  [in] `iImage`  
  [in] `bHilited`  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__ondrawseparator"></a>  CMFCVisualManagerWindows::OnDrawSeparator  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawSeparator(  
    CDC* pDC,  
    CBasePane* pBar,  
    CRect rect,  
    BOOL bIsHoriz );  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pBar`  
  [in] `rect`  
  [in] `bIsHoriz`  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__ondrawspinbuttons"></a>  CMFCVisualManagerWindows::OnDrawSpinButtons  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawSpinButtons(  
    CDC* pDC,  
    CRect rectSpin,  
    int nState,  
    BOOL bOrientation,  
    CMFCSpinButtonCtrl* pSpinCtrl );  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rectSpin`  
  [in] `nState`  
  [in] `bOrientation`  
  [in] `pSpinCtrl`  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__ondrawstatusbarpaneborder"></a>  CMFCVisualManagerWindows::OnDrawStatusBarPaneBorder  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawStatusBarPaneBorder(  
    CDC* pDC,  
    CMFCStatusBar* pBar,  
    CRect rectPane,  
    UINT uiID,  
    UINT nStyle );  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pBar`  
  [in] `rectPane`  
  [in] `uiID`  
  [in] `nStyle`  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__ondrawstatusbarprogress"></a>  CMFCVisualManagerWindows::OnDrawStatusBarProgress  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawStatusBarProgress(  
    CDC* pDC,  
    CMFCStatusBar* pStatusBar,  
    CRect rectProgress,  
    int nProgressTotal,  
    int nProgressCurr,  
    COLORREF clrBar,  
    COLORREF clrProgressBarDest,  
    COLORREF clrProgressText,  
    BOOL bProgressText );  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pStatusBar`  
  [in] `rectProgress`  
  [in] `nProgressTotal`  
  [in] `nProgressCurr`  
  [in] `clrBar`  
  [in] `clrProgressBarDest`  
  [in] `clrProgressText`  
  [in] `bProgressText`  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__ondrawstatusbarsizebox"></a>  CMFCVisualManagerWindows::OnDrawStatusBarSizeBox  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawStatusBarSizeBox(  
    CDC* pDC,  
    CMFCStatusBar* pStatBar,  
    CRect rectSizeBox );  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pStatBar`  
  [in] `rectSizeBox`  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__ondrawtab"></a>  CMFCVisualManagerWindows::OnDrawTab  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawTab(  
    CDC* pDC,  
    CRect rectTab,  
    int iTab,  
    BOOL bIsActive,  
    const CMFCBaseTabCtrl* pTabWnd );  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rectTab`  
  [in] `iTab`  
  [in] `bIsActive`  
  [in] `pTabWnd`  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__ondrawtabclosebutton"></a>  CMFCVisualManagerWindows::OnDrawTabCloseButton  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawTabCloseButton(  
    CDC* pDC,  
    CRect rect,  
    const CMFCBaseTabCtrl* pTabWnd,  
    BOOL bIsHighlighted,  
    BOOL bIsPressed,  
    BOOL bIsDisabled );  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rect`  
  [in] `pTabWnd`  
  [in] `bIsHighlighted`  
  [in] `bIsPressed`  
  [in] `bIsDisabled`  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__ondrawtabsbuttonborder"></a>  CMFCVisualManagerWindows::OnDrawTabsButtonBorder  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawTabsButtonBorder(  
    CDC* pDC,  
    CRect& rect,  
    CMFCButton* pButton,  
    UINT uiState,  
    CMFCBaseTabCtrl* pWndTab );  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rect`  
  [in] `pButton`  
  [in] `uiState`  
  [in] `pWndTab`  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__ondrawtask"></a>  CMFCVisualManagerWindows::OnDrawTask  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawTask(  
    CDC* pDC,  
    CMFCTasksPaneTask* pTask,  
    CImageList* pIcons,  
    BOOL bIsHighlighted = FALSE,  
    BOOL bIsSelected = FALSE);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pTask`  
  [in] `pIcons`  
  [in] `bIsHighlighted`  
  [in] `bIsSelected`  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__ondrawtasksgroupareaborder"></a>  CMFCVisualManagerWindows::OnDrawTasksGroupAreaBorder  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawTasksGroupAreaBorder(  
    CDC* pDC,  
    CRect rect,  
    BOOL bSpecial = FALSE,  
    BOOL bNoTitle = FALSE);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rect`  
  [in] `bSpecial`  
  [in] `bNoTitle`  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__ondrawtasksgroupcaption"></a>  CMFCVisualManagerWindows::OnDrawTasksGroupCaption  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawTasksGroupCaption(  
    CDC* pDC,  
    CMFCTasksPaneTaskGroup* pGroup,  
    BOOL bIsHighlighted = FALSE,  
    BOOL bIsSelected = FALSE,  
    BOOL bCanCollapse = FALSE);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pGroup`  
  [in] `bIsHighlighted`  
  [in] `bIsSelected`  
  [in] `bCanCollapse`  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__ondrawtearoffcaption"></a>  CMFCVisualManagerWindows::OnDrawTearOffCaption  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawTearOffCaption(  
    CDC* pDC,  
    CRect rect,  
    BOOL bIsActive );  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rect`  
  [in] `bIsActive`  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__onerasepopupwindowbutton"></a>  CMFCVisualManagerWindows::OnErasePopupWindowButton  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnErasePopupWindowButton(  
    CDC* pDC,  
    CRect rectClient,  
    CMFCDesktopAlertWndButton* pButton );  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rectClient`  
  [in] `pButton`  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__onerasetabsarea"></a>  CMFCVisualManagerWindows::OnEraseTabsArea  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnEraseTabsArea(  
    CDC* pDC,  
    CRect rect,  
    const CMFCBaseTabCtrl* pTabWnd );  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rect`  
  [in] `pTabWnd`  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__onerasetabsbutton"></a>  CMFCVisualManagerWindows::OnEraseTabsButton  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnEraseTabsButton(  
    CDC* pDC,  
    CRect rect,  
    CMFCButton* pButton,  
    CMFCBaseTabCtrl* pWndTab );  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rect`  
  [in] `pButton`  
  [in] `pWndTab`  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__onerasetabsframe"></a>  CMFCVisualManagerWindows::OnEraseTabsFrame  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL OnEraseTabsFrame(  
    CDC* pDC,  
    CRect rect,  
    const CMFCBaseTabCtrl* pTabWnd );  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rect`  
  [in] `pTabWnd`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__onfillbarbackground"></a>  CMFCVisualManagerWindows::OnFillBarBackground  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnFillBarBackground(  
    CDC* pDC,  
    CBasePane* pBar,  
    CRect rectClient,  
    CRect rectClip,  
    BOOL bNCArea = FALSE);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pBar`  
  [in] `rectClient`  
  [in] `rectClip`  
  [in] `bNCArea`  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__onfillbuttoninterior"></a>  CMFCVisualManagerWindows::OnFillButtonInterior  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnFillButtonInterior(  
    CDC* pDC,  
    CMFCToolBarButton* pButton,  
    CRect rect,  
    CMFCVisualManager::AFX_BUTTON_STATE state );  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pButton`  
  [in] `rect`  
  [in] `state`  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__onfillcommandslistbackground"></a>  CMFCVisualManagerWindows::OnFillCommandsListBackground  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual COLORREF OnFillCommandsListBackground(  
    CDC* pDC,  
    CRect rect,  
    BOOL bIsSelected = FALSE);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rect`  
  [in] `bIsSelected`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__onfillminiframecaption"></a>  CMFCVisualManagerWindows::OnFillMiniFrameCaption  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual COLORREF OnFillMiniFrameCaption(  
    CDC* pDC,  
    CRect rectCaption,  
    CPaneFrameWnd* pFrameWnd,  
    BOOL bActive );  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rectCaption`  
  [in] `pFrameWnd`  
  [in] `bActive`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__onfilloutlookpagebutton"></a>  CMFCVisualManagerWindows::OnFillOutlookPageButton  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnFillOutlookPageButton(  
    CDC* pDC,  
    const CRect& rect,  
    BOOL bIsHighlighted,  
    BOOL bIsPressed,  
    COLORREF& clrText );  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rect`  
  [in] `bIsHighlighted`  
  [in] `bIsPressed`  
  [in] `clrText`  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__onfilltasksgroupinterior"></a>  CMFCVisualManagerWindows::OnFillTasksGroupInterior  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnFillTasksGroupInterior(  
    CDC* pDC,  
    CRect rect,  
    BOOL bSpecial = FALSE);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rect`  
  [in] `bSpecial`  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__onfilltaskspanebackground"></a>  CMFCVisualManagerWindows::OnFillTasksPaneBackground  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnFillTasksPaneBackground(  
    CDC* pDC,  
    CRect rectWorkArea );  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rectWorkArea`  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__onhighlightmenuitem"></a>  CMFCVisualManagerWindows::OnHighlightMenuItem  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnHighlightMenuItem(  
    CDC * pDC,  
    CMFCToolBarMenuButton* pButton,  
    CRect rect,  
    COLORREF& clrText );  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pButton`  
  [in] `rect`  
  [in] `clrText`  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__onhighlightrarelyusedmenuitems"></a>  CMFCVisualManagerWindows::OnHighlightRarelyUsedMenuItems  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnHighlightRarelyUsedMenuItems(  
    CDC* pDC,  
    CRect rectRarelyUsed );  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rectRarelyUsed`  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__onupdatesystemcolors"></a>  CMFCVisualManagerWindows::OnUpdateSystemColors  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnUpdateSystemColors();  
```  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows__setofficestylemenus"></a>  CMFCVisualManagerWindows::SetOfficeStyleMenus  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
void SetOfficeStyleMenus(  
    BOOL bOn = TRUE);  
```  
  
### Parameters  
 [in] `bOn`  
  
### Remarks  
  
## See Also  
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [Classes](../VS_visualcpp/MFC-Classes.md)   
 [CMFCVisualManager Class](../VS_visualcpp/CMFCVisualManager-Class.md)   
 [CMFCVisualManagerOfficeXP Class](../VS_visualcpp/CMFCVisualManagerOfficeXP-Class.md)   
 [CMFCVisualManager::SetDefaultManager](../VS_visualcpp/CMFCVisualManager-Class.md#cmfcvisualmanager__setdefaultmanager)