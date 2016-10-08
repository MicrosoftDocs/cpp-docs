---
title: "CMFCVisualManagerOffice2007 Class"
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
ms.assetid: fb687c74-6d08-4c72-8acf-27f75dda6d6b
caps.latest.revision: 31
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
# CMFCVisualManagerOffice2007 Class
`CMFCVisualManagerOffice2007` gives an application a Microsoft Office 2007 appearance.  
  
## Syntax  
  
```  
class CMFCVisualManagerOffice2007 : public CMFCVisualManagerOffice2003  
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCVisualManagerOffice2007::AlwaysHighlight3DTabs](#cmfcvisualmanageroffice2007__alwayshighlight3dtabs)||  
|[CMFCVisualManagerOffice2007::CleanStyle](#cmfcvisualmanageroffice2007__cleanstyle)||  
|[CMFCVisualManagerOffice2007::GetCaptionBarTextColor](#cmfcvisualmanageroffice2007__getcaptionbartextcolor)||  
|[CMFCVisualManagerOffice2007::GetHighlightedMenuItemTextColor](#cmfcvisualmanageroffice2007__gethighlightedmenuitemtextcolor)||  
|[CMFCVisualManagerOffice2007::GetMenuItemTextColor](#cmfcvisualmanageroffice2007__getmenuitemtextcolor)||  
|[CMFCVisualManagerOffice2007::GetNcBtnSize](#cmfcvisualmanageroffice2007__getncbtnsize)||  
|[CMFCVisualManagerOffice2007::GetRibbonBar](#cmfcvisualmanageroffice2007__getribbonbar)||  
|[CMFCVisualManagerOffice2007::GetRibbonHyperlinkTextColor](#cmfcvisualmanageroffice2007__getribbonhyperlinktextcolor)||  
|[CMFCVisualManagerOffice2007::GetRibbonPopupBorderSize](#cmfcvisualmanageroffice2007__getribbonpopupbordersize)||  
|[CMFCVisualManagerOffice2007::GetRibbonQuickAccessToolBarChevronOffset](#cmfcvisualmanageroffice2007__getribbonquickaccesstoolbarchevronoffset)||  
|[CMFCVisualManagerOffice2007::GetRibbonQuickAccessToolBarRightMargin](#cmfcvisualmanageroffice2007__getribbonquickaccesstoolbarrightmargin)||  
|[CMFCVisualManagerOffice2007::GetRibbonQuickAccessToolBarTextColor](#cmfcvisualmanageroffice2007__getribbonquickaccesstoolbartextcolor)||  
|[CMFCVisualManagerOffice2007::GetRibbonStatusBarTextColor](#cmfcvisualmanageroffice2007__getribbonstatusbartextcolor)||  
|[CMFCVisualManagerOffice2007::GetShowAllMenuItemsHeight](#cmfcvisualmanageroffice2007__getshowallmenuitemsheight)||  
|[CMFCVisualManagerOffice2007::GetStatusBarPaneTextColor](#cmfcvisualmanageroffice2007__getstatusbarpanetextcolor)||  
|`CMFCVisualManagerOffice2007::GetStyle`|Returns the current color scheme of the `CMFCVisualManagerOffice2007` GUI which, in turn, mimics the Microsoft Office 2007 GUI.|  
|[CMFCVisualManagerOffice2007::GetTabFrameColors](#cmfcvisualmanageroffice2007__gettabframecolors)||  
|[CMFCVisualManagerOffice2007::GetTabHorzMargin](#cmfcvisualmanageroffice2007__gettabhorzmargin)||  
|[CMFCVisualManagerOffice2007::GetTabTextColor](#cmfcvisualmanageroffice2007__gettabtextcolor)||  
|[CMFCVisualManagerOffice2007::GetToolbarButtonTextColor](#cmfcvisualmanageroffice2007__gettoolbarbuttontextcolor)||  
|[CMFCVisualManagerOffice2007::GetToolbarDisabledTextColor](#cmfcvisualmanageroffice2007__gettoolbardisabledtextcolor)||  
|[CMFCVisualManagerOffice2007::GetToolTipInfo](#cmfcvisualmanageroffice2007__gettooltipinfo)||  
|[CMFCVisualManagerOffice2007::IsHighlightWholeMenuItem](#cmfcvisualmanageroffice2007__ishighlightwholemenuitem)||  
|[CMFCVisualManagerOffice2007::IsLayeredRibbonKeyTip](#cmfcvisualmanageroffice2007__islayeredribbonkeytip)||  
|[CMFCVisualManagerOffice2007::IsOwnerDrawCaption](#cmfcvisualmanageroffice2007__isownerdrawcaption)||  
|[CMFCVisualManagerOffice2007::IsOwnerDrawMenuCheck](#cmfcvisualmanageroffice2007__isownerdrawmenucheck)||  
|[CMFCVisualManagerOffice2007::IsRibbonPresent](#cmfcvisualmanageroffice2007__isribbonpresent)||  
|[CMFCVisualManagerOffice2007::OnDrawBarGripper](#cmfcvisualmanageroffice2007__ondrawbargripper)||  
|[CMFCVisualManagerOffice2007::OnDrawButtonBorder](#cmfcvisualmanageroffice2007__ondrawbuttonborder)||  
|[CMFCVisualManagerOffice2007::OnDrawButtonSeparator](#cmfcvisualmanageroffice2007__ondrawbuttonseparator)||  
|[CMFCVisualManagerOffice2007::OnDrawCaptionBarInfoArea](#cmfcvisualmanageroffice2007__ondrawcaptionbarinfoarea)||  
|[CMFCVisualManagerOffice2007::OnDrawCheckBoxEx](#cmfcvisualmanageroffice2007__ondrawcheckboxex)||  
|[CMFCVisualManagerOffice2007::OnDrawComboBorder](#cmfcvisualmanageroffice2007__ondrawcomboborder)||  
|[CMFCVisualManagerOffice2007::OnDrawComboDropButton](#cmfcvisualmanageroffice2007__ondrawcombodropbutton)||  
|[CMFCVisualManagerOffice2007::OnDrawDefaultRibbonImage](#cmfcvisualmanageroffice2007__ondrawdefaultribbonimage)||  
|[CMFCVisualManagerOffice2007::OnDrawEditBorder](#cmfcvisualmanageroffice2007__ondraweditborder)||  
|[CMFCVisualManagerOffice2007::OnDrawFloatingToolbarBorder](#cmfcvisualmanageroffice2007__ondrawfloatingtoolbarborder)||  
|[CMFCVisualManagerOffice2007::OnDrawHeaderCtrlBorder](#cmfcvisualmanageroffice2007__ondrawheaderctrlborder)||  
|[CMFCVisualManagerOffice2007::OnDrawMenuBorder](#cmfcvisualmanageroffice2007__ondrawmenuborder)||  
|[CMFCVisualManagerOffice2007::OnDrawMenuCheck](#cmfcvisualmanageroffice2007__ondrawmenucheck)||  
|[CMFCVisualManagerOffice2007::OnDrawMenuItemButton](#cmfcvisualmanageroffice2007__ondrawmenuitembutton)||  
|[CMFCVisualManagerOffice2007::OnDrawMenuLabel](#cmfcvisualmanageroffice2007__ondrawmenulabel)||  
|[CMFCVisualManagerOffice2007::OnDrawMenuResizeBar](#cmfcvisualmanageroffice2007__ondrawmenuresizebar)||  
|[CMFCVisualManagerOffice2007::OnDrawMenuScrollButton](#cmfcvisualmanageroffice2007__ondrawmenuscrollbutton)||  
|[CMFCVisualManagerOffice2007::OnDrawMenuSystemButton](#cmfcvisualmanageroffice2007__ondrawmenusystembutton)||  
|[CMFCVisualManagerOffice2007::OnDrawMiniFrameBorder](#cmfcvisualmanageroffice2007__ondrawminiframeborder)||  
|[CMFCVisualManagerOffice2007::OnDrawOutlookBarSplitter](#cmfcvisualmanageroffice2007__ondrawoutlookbarsplitter)||  
|[CMFCVisualManagerOffice2007::OnDrawOutlookPageButtonBorder](#cmfcvisualmanageroffice2007__ondrawoutlookpagebuttonborder)||  
|[CMFCVisualManagerOffice2007::OnDrawPaneCaption](#cmfcvisualmanageroffice2007__ondrawpanecaption)||  
|[CMFCVisualManagerOffice2007::OnDrawPopupWindowCaption](#cmfcvisualmanageroffice2007__ondrawpopupwindowcaption)||  
|[CMFCVisualManagerOffice2007::OnDrawPropertySheetListItem](#cmfcvisualmanageroffice2007__ondrawpropertysheetlistitem)||  
|[CMFCVisualManagerOffice2007::OnDrawRibbonApplicationButton](#cmfcvisualmanageroffice2007__ondrawribbonapplicationbutton)||  
|[CMFCVisualManagerOffice2007::OnDrawRibbonButtonBorder](#cmfcvisualmanageroffice2007__ondrawribbonbuttonborder)||  
|[CMFCVisualManagerOffice2007::OnDrawRibbonButtonsGroup](#cmfcvisualmanageroffice2007__ondrawribbonbuttonsgroup)||  
|[CMFCVisualManagerOffice2007::OnDrawRibbonCaption](#cmfcvisualmanageroffice2007__ondrawribboncaption)||  
|[CMFCVisualManagerOffice2007::OnDrawRibbonCaptionButton](#cmfcvisualmanageroffice2007__ondrawribboncaptionbutton)||  
|[CMFCVisualManagerOffice2007::OnDrawRibbonCategory](#cmfcvisualmanageroffice2007__ondrawribboncategory)||  
|[CMFCVisualManagerOffice2007::OnDrawRibbonCategoryCaption](#cmfcvisualmanageroffice2007__ondrawribboncategorycaption)||  
|[CMFCVisualManagerOffice2007::OnDrawRibbonCategoryScroll](#cmfcvisualmanageroffice2007__ondrawribboncategoryscroll)||  
|[CMFCVisualManagerOffice2007::OnDrawRibbonCategoryTab](#cmfcvisualmanageroffice2007__ondrawribboncategorytab)||  
|[CMFCVisualManagerOffice2007::OnDrawRibbonCheckBoxOnList](#cmfcvisualmanageroffice2007__ondrawribboncheckboxonlist)||  
|[CMFCVisualManagerOffice2007::OnDrawRibbonDefaultPaneButton](#cmfcvisualmanageroffice2007__ondrawribbondefaultpanebutton)||  
|[CMFCVisualManagerOffice2007::OnDrawRibbonDefaultPaneButtonIndicator](#cmfcvisualmanageroffice2007__ondrawribbondefaultpanebuttonindicator)||  
|[CMFCVisualManagerOffice2007::OnDrawRibbonGalleryBorder](#cmfcvisualmanageroffice2007__ondrawribbongalleryborder)||  
|[CMFCVisualManagerOffice2007::OnDrawRibbonGalleryButton](#cmfcvisualmanageroffice2007__ondrawribbongallerybutton)||  
|[CMFCVisualManagerOffice2007::OnDrawRibbonKeyTip](#cmfcvisualmanageroffice2007__ondrawribbonkeytip)||  
|[CMFCVisualManagerOffice2007::OnDrawRibbonMainPanelButtonBorder](#cmfcvisualmanageroffice2007__ondrawribbonmainpanelbuttonborder)||  
|[CMFCVisualManagerOffice2007::OnDrawRibbonMainPanelFrame](#cmfcvisualmanageroffice2007__ondrawribbonmainpanelframe)||  
|[CMFCVisualManagerOffice2007::OnDrawRibbonMenuCheckFrame](#cmfcvisualmanageroffice2007__ondrawribbonmenucheckframe)||  
|[CMFCVisualManagerOffice2007::OnDrawRibbonPanel](#cmfcvisualmanageroffice2007__ondrawribbonpanel)||  
|[CMFCVisualManagerOffice2007::OnDrawRibbonPanelCaption](#cmfcvisualmanageroffice2007__ondrawribbonpanelcaption)||  
|[CMFCVisualManagerOffice2007::OnDrawRibbonProgressBar](#cmfcvisualmanageroffice2007__ondrawribbonprogressbar)||  
|[CMFCVisualManagerOffice2007::OnDrawRibbonRecentFilesFrame](#cmfcvisualmanageroffice2007__ondrawribbonrecentfilesframe)||  
|[CMFCVisualManagerOffice2007::OnDrawRibbonSliderChannel](#cmfcvisualmanageroffice2007__ondrawribbonsliderchannel)||  
|[CMFCVisualManagerOffice2007::OnDrawRibbonSliderThumb](#cmfcvisualmanageroffice2007__ondrawribbonsliderthumb)||  
|[CMFCVisualManagerOffice2007::OnDrawRibbonSliderZoomButton](#cmfcvisualmanageroffice2007__ondrawribbonsliderzoombutton)||  
|[CMFCVisualManagerOffice2007::OnDrawRibbonStatusBarPane](#cmfcvisualmanageroffice2007__ondrawribbonstatusbarpane)||  
|[CMFCVisualManagerOffice2007::OnDrawRibbonTabsFrame](#cmfcvisualmanageroffice2007__ondrawribbontabsframe)||  
|[CMFCVisualManagerOffice2007::OnDrawScrollButtons](#cmfcvisualmanageroffice2007__ondrawscrollbuttons)||  
|[CMFCVisualManagerOffice2007::OnDrawSeparator](#cmfcvisualmanageroffice2007__ondrawseparator)||  
|[CMFCVisualManagerOffice2007::OnDrawShowAllMenuItems](#cmfcvisualmanageroffice2007__ondrawshowallmenuitems)||  
|[CMFCVisualManagerOffice2007::OnDrawStatusBarPaneBorder](#cmfcvisualmanageroffice2007__ondrawstatusbarpaneborder)||  
|[CMFCVisualManagerOffice2007::OnDrawStatusBarSizeBox](#cmfcvisualmanageroffice2007__ondrawstatusbarsizebox)||  
|[CMFCVisualManagerOffice2007::OnDrawTab](#cmfcvisualmanageroffice2007__ondrawtab)||  
|[CMFCVisualManagerOffice2007::OnDrawTabsButtonBorder](#cmfcvisualmanageroffice2007__ondrawtabsbuttonborder)||  
|[CMFCVisualManagerOffice2007::OnDrawTask](#cmfcvisualmanageroffice2007__ondrawtask)||  
|[CMFCVisualManagerOffice2007::OnDrawTasksGroupCaption](#cmfcvisualmanageroffice2007__ondrawtasksgroupcaption)||  
|[CMFCVisualManagerOffice2007::OnDrawTearOffCaption](#cmfcvisualmanageroffice2007__ondrawtearoffcaption)||  
|[CMFCVisualManagerOffice2007::OnEraseMDIClientArea](#cmfcvisualmanageroffice2007__onerasemdiclientarea)||  
|[CMFCVisualManagerOffice2007::OnEraseTabsArea](#cmfcvisualmanageroffice2007__onerasetabsarea)||  
|[CMFCVisualManagerOffice2007::OnEraseTabsButton](#cmfcvisualmanageroffice2007__onerasetabsbutton)||  
|[CMFCVisualManagerOffice2007::OnEraseTabsFrame](#cmfcvisualmanageroffice2007__onerasetabsframe)||  
|[CMFCVisualManagerOffice2007::OnFillBarBackground](#cmfcvisualmanageroffice2007__onfillbarbackground)||  
|[CMFCVisualManagerOffice2007::OnFillButtonInterior](#cmfcvisualmanageroffice2007__onfillbuttoninterior)||  
|[CMFCVisualManagerOffice2007::OnFillCaptionBarButton](#cmfcvisualmanageroffice2007__onfillcaptionbarbutton)||  
|[CMFCVisualManagerOffice2007::OnFillHighlightedArea](#cmfcvisualmanageroffice2007__onfillhighlightedarea)||  
|[CMFCVisualManagerOffice2007::OnFillMiniFrameCaption](#cmfcvisualmanageroffice2007__onfillminiframecaption)||  
|[CMFCVisualManagerOffice2007::OnFillOutlookBarCaption](#cmfcvisualmanageroffice2007__onfilloutlookbarcaption)||  
|[CMFCVisualManagerOffice2007::OnFillOutlookPageButton](#cmfcvisualmanageroffice2007__onfilloutlookpagebutton)||  
|[CMFCVisualManagerOffice2007::OnFillPopupWindowBackground](#cmfcvisualmanageroffice2007__onfillpopupwindowbackground)||  
|[CMFCVisualManagerOffice2007::OnFillRibbonButton](#cmfcvisualmanageroffice2007__onfillribbonbutton)||  
|[CMFCVisualManagerOffice2007::OnFillRibbonEdit](#cmfcvisualmanageroffice2007__onfillribbonedit)||  
|[CMFCVisualManagerOffice2007::OnFillRibbonMainPanelButton](#cmfcvisualmanageroffice2007__onfillribbonmainpanelbutton)||  
|[CMFCVisualManagerOffice2007::OnFillRibbonMenuFrame](#cmfcvisualmanageroffice2007__onfillribbonmenuframe)||  
|[CMFCVisualManagerOffice2007::OnFillRibbonQuickAccessToolBarPopup](#cmfcvisualmanageroffice2007__onfillribbonquickaccesstoolbarpopup)||  
|[CMFCVisualManagerOffice2007::OnFillTab](#cmfcvisualmanageroffice2007__onfilltab)||  
|[CMFCVisualManagerOffice2007::OnHighlightMenuItem](#cmfcvisualmanageroffice2007__onhighlightmenuitem)||  
|[CMFCVisualManagerOffice2007::OnHighlightRarelyUsedMenuItems](#cmfcvisualmanageroffice2007__onhighlightrarelyusedmenuitems)||  
|[CMFCVisualManagerOffice2007::OnNcActivate](#cmfcvisualmanageroffice2007__onncactivate)||  
|[CMFCVisualManagerOffice2007::OnNcPaint](#cmfcvisualmanageroffice2007__onncpaint)||  
|[CMFCVisualManagerOffice2007::OnSetWindowRegion](#cmfcvisualmanageroffice2007__onsetwindowregion)||  
|[CMFCVisualManagerOffice2007::OnUpdateSystemColors](#cmfcvisualmanageroffice2007__onupdatesystemcolors)||  
|[CMFCVisualManagerOffice2007::SetResourceHandle](#cmfcvisualmanageroffice2007__setresourcehandle)||  
|`CMFCVisualManagerOffice2007::SetStyle`|Sets the color scheme of the `CMFCVisualManagerOffice2007` GUI.|  
  
## Remarks  
 Use `CMFCVisualManagerOffice2007` to change the visual appearance of your application to resemble that of Microsoft Office 2007. This visual manager requires that you set the style before you use it. Before you pass this visual manager to `CMFCVisualManager::SetDefaultManager`, you must call the static function `CMFCVisualManagerOffice2007::SetStyle`.  
  
## Example  
 The following example demonstrates how to use the visual manager Office 2007. This code snippet is part of the [Desktop Alert Demo sample](../VS_visualcpp/Visual-C---Samples.md).  
  
 [!CODE [NVC_MFC_DesktopAlertDemo#7](../CodeSnippet/VS_Snippets_Misc/NVC_MFC_DesktopAlertDemo#7)]  
  
## Inheritance Hierarchy  
 [CObject](../VS_visualcpp/CObject-Class.md)  
  
 [CMFCBaseVisualManager](../VS_visualcpp/CMFCBaseVisualManager-Class.md)  
  
 [CMFCVisualManager](../VS_visualcpp/CMFCVisualManager-Class.md)  
  
 [CMFCVisualManagerOfficeXP](../VS_visualcpp/CMFCVisualManagerOfficeXP-Class.md)  
  
 [CMFCVisualManagerOffice2003](../VS_visualcpp/CMFCVisualManagerOffice2003-Class.md)  
  
 [CMFCVisualManagerOffice2007](../VS_visualcpp/CMFCVisualManagerOffice2007-Class.md)  
  
## Requirements  
 **Header:** afxvisualmanageroffice2007.h  
  
##  <a name="cmfcvisualmanageroffice2007__alwayshighlight3dtabs"></a>  CMFCVisualManagerOffice2007::AlwaysHighlight3DTabs  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL AlwaysHighlight3DTabs() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__cleanstyle"></a>  CMFCVisualManagerOffice2007::CleanStyle  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
static void __stdcall CleanStyle();  
```  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__getcaptionbartextcolor"></a>  CMFCVisualManagerOffice2007::GetCaptionBarTextColor  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual COLORREF GetCaptionBarTextColor(  
   CMFCCaptionBar* pBar  
);  
```  
  
### Parameters  
 [in] `pBar`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__gethighlightedmenuitemtextcolor"></a>  CMFCVisualManagerOffice2007::GetHighlightedMenuItemTextColor  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual COLORREF GetHighlightedMenuItemTextColor(  
   CMFCToolBarMenuButton* pButton  
);  
```  
  
### Parameters  
 [in] `pButton`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__getmenuitemtextcolor"></a>  CMFCVisualManagerOffice2007::GetMenuItemTextColor  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual COLORREF GetMenuItemTextColor(  
   CMFCToolBarMenuButton* pButton,  
   BOOL bHighlighted,  
   BOOL bDisabled  
);  
```  
  
### Parameters  
 [in] `pButton`  
  [in] `bHighlighted`  
  [in] `bDisabled`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__getncbtnsize"></a>  CMFCVisualManagerOffice2007::GetNcBtnSize  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual CSize GetNcBtnSize(  
   BOOL bSmall  
) const;  
```  
  
### Parameters  
 [in] `bSmall`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__getribbonbar"></a>  CMFCVisualManagerOffice2007::GetRibbonBar  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
CMFCRibbonBar* GetRibbonBar(  
   CWnd* pWnd  
) const;  
```  
  
### Parameters  
 [in] `pWnd`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__getribbonhyperlinktextcolor"></a>  CMFCVisualManagerOffice2007::GetRibbonHyperlinkTextColor  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual COLORREF GetRibbonHyperlinkTextColor(  
   CMFCRibbonLinkCtrl* pHyperLink  
);  
```  
  
### Parameters  
 [in] `pHyperLink`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__getribbonpopupbordersize"></a>  CMFCVisualManagerOffice2007::GetRibbonPopupBorderSize  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual int GetRibbonPopupBorderSize(  
   const CMFCRibbonPanelMenu* pPopup  
) const;  
```  
  
### Parameters  
 [in] `pPopup`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__getribbonquickaccesstoolbarchevronoffset"></a>  CMFCVisualManagerOffice2007::GetRibbonQuickAccessToolBarChevronOffset  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual int GetRibbonQuickAccessToolBarChevronOffset();  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__getribbonquickaccesstoolbarrightmargin"></a>  CMFCVisualManagerOffice2007::GetRibbonQuickAccessToolBarRightMargin  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual int GetRibbonQuickAccessToolBarRightMargin();  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__getribbonquickaccesstoolbartextcolor"></a>  CMFCVisualManagerOffice2007::GetRibbonQuickAccessToolBarTextColor  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual COLORREF GetRibbonQuickAccessToolBarTextColor(  
   BOOL bDisabled = FALSE  
);  
```  
  
### Parameters  
 [in] `bDisabled`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__getribbonstatusbartextcolor"></a>  CMFCVisualManagerOffice2007::GetRibbonStatusBarTextColor  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual COLORREF GetRibbonStatusBarTextColor(  
   CMFCRibbonStatusBar* pStatusBar  
);  
```  
  
### Parameters  
 [in] `pStatusBar`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__getshowallmenuitemsheight"></a>  CMFCVisualManagerOffice2007::GetShowAllMenuItemsHeight  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual int GetShowAllMenuItemsHeight(  
   CDC* pDC,  
   const CSize& sizeDefault  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `sizeDefault`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__getstatusbarpanetextcolor"></a>  CMFCVisualManagerOffice2007::GetStatusBarPaneTextColor  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual COLORREF GetStatusBarPaneTextColor(  
   CMFCStatusBar* pStatusBar,  
   CMFCStatusBarPaneInfo* pPane  
);  
```  
  
### Parameters  
 [in] `pStatusBar`  
  [in] `pPane`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__gettabframecolors"></a>  CMFCVisualManagerOffice2007::GetTabFrameColors  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void GetTabFrameColors(  
   const CMFCBaseTabCtrl* pTabWnd,  
   COLORREF& clrDark,  
   COLORREF& clrBlack,  
   COLORREF& clrHighlight,  
   COLORREF& clrFace,  
   COLORREF& clrDarkShadow,  
   COLORREF& clrLight,  
   CBrush*& pbrFace,  
   CBrush*& pbrBlack  
);  
```  
  
### Parameters  
 [in] `pTabWnd`  
  [in] `clrDark`  
  [in] `clrBlack`  
  [in] `clrHighlight`  
  [in] `clrFace`  
  [in] `clrDarkShadow`  
  [in] `clrLight`  
  [in] `pbrFace`  
  [in] `pbrBlack`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__gettabhorzmargin"></a>  CMFCVisualManagerOffice2007::GetTabHorzMargin  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual int GetTabHorzMargin(  
   const CMFCBaseTabCtrl* pTabWnd  
);  
```  
  
### Parameters  
 [in] `pTabWnd`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__gettabtextcolor"></a>  CMFCVisualManagerOffice2007::GetTabTextColor  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual COLORREF GetTabTextColor(  
   const CMFCBaseTabCtrl* pTabWnd,  
   int iTab,  
   BOOL bIsActive  
);  
```  
  
### Parameters  
 [in] `pTabWnd`  
  [in] `iTab`  
  [in] `bIsActive`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__gettoolbarbuttontextcolor"></a>  CMFCVisualManagerOffice2007::GetToolbarButtonTextColor  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual COLORREF GetToolbarButtonTextColor(  
   CMFCToolBarButton* pButton,  
   CMFCVisualManager::AFX_BUTTON_STATE state  
);  
```  
  
### Parameters  
 [in] `pButton`  
  [in] `state`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__gettoolbardisabledtextcolor"></a>  CMFCVisualManagerOffice2007::GetToolbarDisabledTextColor  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual COLORREF GetToolbarDisabledTextColor();  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__gettooltipinfo"></a>  CMFCVisualManagerOffice2007::GetToolTipInfo  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL GetToolTipInfo(  
   CMFCToolTipInfo& params,  
   UINT nType = (UINT)(-1)  
);  
```  
  
### Parameters  
 [in] `params`  
  [in] `nType`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ishighlightwholemenuitem"></a>  CMFCVisualManagerOffice2007::IsHighlightWholeMenuItem  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL IsHighlightWholeMenuItem();  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__islayeredribbonkeytip"></a>  CMFCVisualManagerOffice2007::IsLayeredRibbonKeyTip  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL IsLayeredRibbonKeyTip() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__isownerdrawcaption"></a>  CMFCVisualManagerOffice2007::IsOwnerDrawCaption  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL IsOwnerDrawCaption();  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__isownerdrawmenucheck"></a>  CMFCVisualManagerOffice2007::IsOwnerDrawMenuCheck  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL IsOwnerDrawMenuCheck();  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__isribbonpresent"></a>  CMFCVisualManagerOffice2007::IsRibbonPresent  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
BOOL IsRibbonPresent(  
   CWnd* pWnd  
) const;  
```  
  
### Parameters  
 [in] `pWnd`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawbargripper"></a>  CMFCVisualManagerOffice2007::OnDrawBarGripper  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawBarGripper(  
   CDC* pDC,  
   CRect rectGripper,  
   BOOL bHorz,  
   CBasePane* pBar  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rectGripper`  
  [in] `bHorz`  
  [in] `pBar`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawbuttonborder"></a>  CMFCVisualManagerOffice2007::OnDrawButtonBorder  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawButtonBorder(  
   CDC* pDC,  
   CMFCToolBarButton* pButton,  
   CRect rect,  
   CMFCVisualManager::AFX_BUTTON_STATE state  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pButton`  
  [in] `rect`  
  [in] `state`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawbuttonseparator"></a>  CMFCVisualManagerOffice2007::OnDrawButtonSeparator  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawButtonSeparator(  
   CDC* pDC,  
   CMFCToolBarButton* pButton,  
   CRect rect,  
   CMFCVisualManager::AFX_BUTTON_STATE state,  
   BOOL bHorz  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pButton`  
  [in] `rect`  
  [in] `state`  
  [in] `bHorz`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawcaptionbarinfoarea"></a>  CMFCVisualManagerOffice2007::OnDrawCaptionBarInfoArea  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawCaptionBarInfoArea(  
   CDC* pDC,  
   CMFCCaptionBar* pBar,  
   CRect rect  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pBar`  
  [in] `rect`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawcheckboxex"></a>  CMFCVisualManagerOffice2007::OnDrawCheckBoxEx  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawCheckBoxEx(  
   CDC * pDC,  
   CRect rect,  
   int nState,  
   BOOL bHighlighted,  
   BOOL bPressed,  
   BOOL bEnabled  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rect`  
  [in] `nState`  
  [in] `bHighlighted`  
  [in] `bPressed`  
  [in] `bEnabled`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawcomboborder"></a>  CMFCVisualManagerOffice2007::OnDrawComboBorder  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawComboBorder(  
   CDC* pDC,  
   CRect rect,  
   BOOL bDisabled,  
   BOOL bIsDropped,  
   BOOL bIsHighlighted,  
   CMFCToolBarComboBoxButton* pButton  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rect`  
  [in] `bDisabled`  
  [in] `bIsDropped`  
  [in] `bIsHighlighted`  
  [in] `pButton`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawcombodropbutton"></a>  CMFCVisualManagerOffice2007::OnDrawComboDropButton  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawComboDropButton(  
   CDC* pDC,  
   CRect rect,  
   BOOL bDisabled,  
   BOOL bIsDropped,  
   BOOL bIsHighlighted,  
   CMFCToolBarComboBoxButton* pButton  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rect`  
  [in] `bDisabled`  
  [in] `bIsDropped`  
  [in] `bIsHighlighted`  
  [in] `pButton`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawdefaultribbonimage"></a>  CMFCVisualManagerOffice2007::OnDrawDefaultRibbonImage  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawDefaultRibbonImage(  
   CDC* pDC,  
   CRect rectImage,  
   BOOL bIsDisabled = FALSE,  
   BOOL bIsPressed = FALSE,  
   BOOL bIsHighlighted = FALSE  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rectImage`  
  [in] `bIsDisabled`  
  [in] `bIsPressed`  
  [in] `bIsHighlighted`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondraweditborder"></a>  CMFCVisualManagerOffice2007::OnDrawEditBorder  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawEditBorder(  
   CDC* pDC,  
   CRect rect,  
   BOOL bDisabled,  
   BOOL bIsHighlighted,  
   CMFCToolBarEditBoxButton* pButton  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rect`  
  [in] `bDisabled`  
  [in] `bIsHighlighted`  
  [in] `pButton`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawfloatingtoolbarborder"></a>  CMFCVisualManagerOffice2007::OnDrawFloatingToolbarBorder  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawFloatingToolbarBorder(  
   CDC* pDC,  
   CMFCBaseToolBar* pToolBar,  
   CRect rectBorder,  
   CRect rectBorderSize  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pToolBar`  
  [in] `rectBorder`  
  [in] `rectBorderSize`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawheaderctrlborder"></a>  CMFCVisualManagerOffice2007::OnDrawHeaderCtrlBorder  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawHeaderCtrlBorder(  
   CMFCHeaderCtrl* pCtrl,  
   CDC* pDC,  
   CRect& rect,  
   BOOL bIsPressed,  
   BOOL bIsHighlighted  
);  
```  
  
### Parameters  
 [in] `pCtrl`  
  [in] `pDC`  
  [in] `rect`  
  [in] `bIsPressed`  
  [in] `bIsHighlighted`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawmenuborder"></a>  CMFCVisualManagerOffice2007::OnDrawMenuBorder  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawMenuBorder(  
   CDC* pDC,  
   CMFCPopu* pMenu,  
   CRect rect  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pMenu`  
  [in] `rect`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawmenucheck"></a>  CMFCVisualManagerOffice2007::OnDrawMenuCheck  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawMenuCheck(  
   CDC* pDC,  
   CMFCToolBarMenuButton* pButton,  
   CRect rect,  
   BOOL bHighlight,  
   BOOL bIsRadio  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pButton`  
  [in] `rect`  
  [in] `bHighlight`  
  [in] `bIsRadio`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawmenuitembutton"></a>  CMFCVisualManagerOffice2007::OnDrawMenuItemButton  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawMenuItemButton(  
   CDC* pDC,  
   CMFCToolBarMenuButton* pButton,  
   CRect rectButton,  
   BOOL bHighlight,  
   BOOL bDisabled  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pButton`  
  [in] `rectButton`  
  [in] `bHighlight`  
  [in] `bDisabled`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawmenulabel"></a>  CMFCVisualManagerOffice2007::OnDrawMenuLabel  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual COLORREF OnDrawMenuLabel(  
   CDC* pDC,  
   CRect rect  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rect`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawmenuresizebar"></a>  CMFCVisualManagerOffice2007::OnDrawMenuResizeBar  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawMenuResizeBar(  
   CDC* pDC,  
   CRect rect,  
   int nResizeFlags  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rect`  
  [in] `nResizeFlags`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawmenuscrollbutton"></a>  CMFCVisualManagerOffice2007::OnDrawMenuScrollButton  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawMenuScrollButton(  
   CDC* pDC,  
   CRect rect,  
   BOOL bIsScrollDown,  
   BOOL bIsHighlited,  
   BOOL bIsPressed,  
   BOOL bIsDisabled  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rect`  
  [in] `bIsScrollDown`  
  [in] `bIsHighlited`  
  [in] `bIsPressed`  
  [in] `bIsDisabled`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawmenusystembutton"></a>  CMFCVisualManagerOffice2007::OnDrawMenuSystemButton  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawMenuSystemButton(  
   CDC* pDC,  
   CRect rect,  
   UINT uiSystemCommand,  
   UINT nStyle,  
   BOOL bHighlight  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rect`  
  [in] `uiSystemCommand`  
  [in] `nStyle`  
  [in] `bHighlight`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawminiframeborder"></a>  CMFCVisualManagerOffice2007::OnDrawMiniFrameBorder  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawMiniFrameBorder(  
   CDC* pDC,  
   CPaneFrameWnd* pFrameWnd,  
   CRect rectBorder,  
   CRect rectBorderSize  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pFrameWnd`  
  [in] `rectBorder`  
  [in] `rectBorderSize`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawoutlookbarsplitter"></a>  CMFCVisualManagerOffice2007::OnDrawOutlookBarSplitter  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawOutlookBarSplitter(  
   CDC* pDC,  
   CRect rectSplitter  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rectSplitter`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawoutlookpagebuttonborder"></a>  CMFCVisualManagerOffice2007::OnDrawOutlookPageButtonBorder  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawOutlookPageButtonBorder(  
   CDC* pDC,  
   CRect& rectBtn,  
   BOOL bIsHighlighted,  
   BOOL bIsPressed  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rectBtn`  
  [in] `bIsHighlighted`  
  [in] `bIsPressed`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawpanecaption"></a>  CMFCVisualManagerOffice2007::OnDrawPaneCaption  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual COLORREF OnDrawPaneCaption(  
   CDC* pDC,  
   CDockablePane* pBar,  
   BOOL bActive,  
   CRect rectCaption,  
   CRect rectButtons  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pBar`  
  [in] `bActive`  
  [in] `rectCaption`  
  [in] `rectButtons`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawpopupwindowcaption"></a>  CMFCVisualManagerOffice2007::OnDrawPopupWindowCaption  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual COLORREF OnDrawPopupWindowCaption(  
   CDC* pDC,  
   CRect rectCaption,  
   CMFCDesktopAlertWnd* pPopupWnd  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rectCaption`  
  [in] `pPopupWnd`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawpropertysheetlistitem"></a>  CMFCVisualManagerOffice2007::OnDrawPropertySheetListItem  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual COLORREF OnDrawPropertySheetListItem(  
   CDC* pDC,  
   CMFCPropertySheet* pParent,  
   CRect rect,  
   BOOL bIsHighlihted,  
   BOOL bIsSelected  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pParent`  
  [in] `rect`  
  [in] `bIsHighlihted`  
  [in] `bIsSelected`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawribbonapplicationbutton"></a>  CMFCVisualManagerOffice2007::OnDrawRibbonApplicationButton  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawRibbonApplicationButton(  
   CDC* pDC,  
   CMFCRibbonButton* pButton  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pButton`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawribbonbuttonborder"></a>  CMFCVisualManagerOffice2007::OnDrawRibbonButtonBorder  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawRibbonButtonBorder(  
   CDC* pDC,  
   CMFCRibbonButton* pButton  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pButton`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawribbonbuttonsgroup"></a>  CMFCVisualManagerOffice2007::OnDrawRibbonButtonsGroup  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual COLORREF OnDrawRibbonButtonsGroup(  
   CDC* pDC,  
   CMFCRibbonButtonsGroup* pGroup,  
   CRect rectGroup  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pGroup`  
  [in] `rectGroup`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawribboncaption"></a>  CMFCVisualManagerOffice2007::OnDrawRibbonCaption  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawRibbonCaption(  
   CDC* pDC,  
   CMFCRibbonBar* pBar,  
   CRect rectCaption,  
   CRect rectText  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pBar`  
  [in] `rectCaption`  
  [in] `rectText`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawribboncaptionbutton"></a>  CMFCVisualManagerOffice2007::OnDrawRibbonCaptionButton  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawRibbonCaptionButton(  
   CDC* pDC,  
   CMFCRibbonCaptionButton* pButton  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pButton`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawribboncategory"></a>  CMFCVisualManagerOffice2007::OnDrawRibbonCategory  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawRibbonCategory(  
   CDC* pDC,  
   CMFCRibbonCategory* pCategory,  
   CRect rectCategory  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pCategory`  
  [in] `rectCategory`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawribboncategorycaption"></a>  CMFCVisualManagerOffice2007::OnDrawRibbonCategoryCaption  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual COLORREF OnDrawRibbonCategoryCaption(  
   CDC* pDC,  
   CMFCRibbonContextCaption* pContextCaption  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pContextCaption`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawribboncategoryscroll"></a>  CMFCVisualManagerOffice2007::OnDrawRibbonCategoryScroll  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawRibbonCategoryScroll(  
   CDC* pDC,  
   CRibbonCategoryScroll* pScroll  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pScroll`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawribboncategorytab"></a>  CMFCVisualManagerOffice2007::OnDrawRibbonCategoryTab  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual COLORREF OnDrawRibbonCategoryTab(  
   CDC* pDC,  
   CMFCRibbonTab* pTab,  
   BOOL bIsActive  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pTab`  
  [in] `bIsActive`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawribboncheckboxonlist"></a>  CMFCVisualManagerOffice2007::OnDrawRibbonCheckBoxOnList  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawRibbonCheckBoxOnList(  
   CDC* pDC,  
   CMFCRibbonCheckBox* pCheckBox,  
   CRect rect,  
   BOOL bIsSelected,  
   BOOL bHighlighted  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pCheckBox`  
  [in] `rect`  
  [in] `bIsSelected`  
  [in] `bHighlighted`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawribbondefaultpanebutton"></a>  CMFCVisualManagerOffice2007::OnDrawRibbonDefaultPaneButton  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawRibbonDefaultPaneButton(  
   CDC* pDC,  
   CMFCRibbonButton* pButton  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pButton`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawribbondefaultpanebuttonindicator"></a>  CMFCVisualManagerOffice2007::OnDrawRibbonDefaultPaneButtonIndicator  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawRibbonDefaultPaneButtonIndicator(  
   CDC* pDC,  
   CMFCRibbonButton* pButton,  
   CRect rect,  
   BOOL bIsSelected,  
   BOOL bHighlighted  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pButton`  
  [in] `rect`  
  [in] `bIsSelected`  
  [in] `bHighlighted`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawribbongalleryborder"></a>  CMFCVisualManagerOffice2007::OnDrawRibbonGalleryBorder  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawRibbonGalleryBorder(  
   CDC* pDC,  
   CMFCRibbonGallery* pButton,  
   CRect rectBorder  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pButton`  
  [in] `rectBorder`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawribbongallerybutton"></a>  CMFCVisualManagerOffice2007::OnDrawRibbonGalleryButton  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawRibbonGalleryButton(  
   CDC* pDC,  
   CMFCRibbonGalleryIcon* pButton  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pButton`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawribbonkeytip"></a>  CMFCVisualManagerOffice2007::OnDrawRibbonKeyTip  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawRibbonKeyTip(  
   CDC* pDC,  
   CMFCRibbonBaseElement* pElement,  
   CRect rect,  
   CString str  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pElement`  
  [in] `rect`  
  [in] `str`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawribbonmainpanelbuttonborder"></a>  CMFCVisualManagerOffice2007::OnDrawRibbonMainPanelButtonBorder  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawRibbonMainPanelButtonBorder(  
   CDC* pDC,  
   CMFCRibbonButton* pButton  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pButton`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawribbonmainpanelframe"></a>  CMFCVisualManagerOffice2007::OnDrawRibbonMainPanelFrame  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawRibbonMainPanelFrame(  
   CDC* pDC,  
   CMFCRibbonMainPanel* pPanel,  
   CRect rect  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pPanel`  
  [in] `rect`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawribbonmenucheckframe"></a>  CMFCVisualManagerOffice2007::OnDrawRibbonMenuCheckFrame  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawRibbonMenuCheckFrame(  
   CDC* pDC,  
   CMFCRibbonButton* pButton,  
   CRect rect  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pButton`  
  [in] `rect`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawribbonpanel"></a>  CMFCVisualManagerOffice2007::OnDrawRibbonPanel  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual COLORREF OnDrawRibbonPanel(  
   CDC* pDC,  
   CMFCRibbonPanel* pPanel,  
   CRect rectPanel,  
   CRect rectCaption  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pPanel`  
  [in] `rectPanel`  
  [in] `rectCaption`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawribbonpanelcaption"></a>  CMFCVisualManagerOffice2007::OnDrawRibbonPanelCaption  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawRibbonPanelCaption(  
   CDC* pDC,  
   CMFCRibbonPanel* pPanel,  
   CRect rectCaption  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pPanel`  
  [in] `rectCaption`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawribbonprogressbar"></a>  CMFCVisualManagerOffice2007::OnDrawRibbonProgressBar  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawRibbonProgressBar(  
   CDC* pDC,  
   CMFCRibbonProgressBar* pProgress,  
   CRect rectProgress,  
   CRect rectChunk,  
   BOOL bInfiniteMode  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pProgress`  
  [in] `rectProgress`  
  [in] `rectChunk`  
  [in] `bInfiniteMode`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawribbonrecentfilesframe"></a>  CMFCVisualManagerOffice2007::OnDrawRibbonRecentFilesFrame  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawRibbonRecentFilesFrame(  
   CDC* pDC,  
   CMFCRibbonMainPanel* pPanel,  
   CRect rect  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pPanel`  
  [in] `rect`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawribbonsliderchannel"></a>  CMFCVisualManagerOffice2007::OnDrawRibbonSliderChannel  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawRibbonSliderChannel(  
   CDC* pDC,  
   CMFCRibbonSlider* pSlider,  
   CRect rect  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pSlider`  
  [in] `rect`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawribbonsliderthumb"></a>  CMFCVisualManagerOffice2007::OnDrawRibbonSliderThumb  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawRibbonSliderThumb(  
   CDC* pDC,  
   CMFCRibbonSlider* pSlider,  
   CRect rect,  
   BOOL bIsHighlighted,  
   BOOL bIsPressed,  
   BOOL bIsDisabled  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pSlider`  
  [in] `rect`  
  [in] `bIsHighlighted`  
  [in] `bIsPressed`  
  [in] `bIsDisabled`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawribbonsliderzoombutton"></a>  CMFCVisualManagerOffice2007::OnDrawRibbonSliderZoomButton  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawRibbonSliderZoomButton(  
   CDC* pDC,  
   CMFCRibbonSlider* pSlider,  
   CRect rect,  
   BOOL bIsZoomOut,  
   BOOL bIsHighlighted,  
   BOOL bIsPressed,  
   BOOL bIsDisabled  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pSlider`  
  [in] `rect`  
  [in] `bIsZoomOut`  
  [in] `bIsHighlighted`  
  [in] `bIsPressed`  
  [in] `bIsDisabled`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawribbonstatusbarpane"></a>  CMFCVisualManagerOffice2007::OnDrawRibbonStatusBarPane  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual COLORREF OnDrawRibbonStatusBarPane(  
   CDC* pDC,  
   CMFCRibbonStatusBar* pBar,  
   CMFCRibbonStatusBarPane* pPane  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pBar`  
  [in] `pPane`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawribbontabsframe"></a>  CMFCVisualManagerOffice2007::OnDrawRibbonTabsFrame  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual COLORREF OnDrawRibbonTabsFrame(  
   CDC* pDC,  
   CMFCRibbonBar* pWndRibbonBar,  
   CRect rectTab  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pWndRibbonBar`  
  [in] `rectTab`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawscrollbuttons"></a>  CMFCVisualManagerOffice2007::OnDrawScrollButtons  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawScrollButtons(  
   CDC* pDC,  
   const CRect& rect,  
   const int nBorderSize,  
   int iImage,  
   BOOL bHilited  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rect`  
  [in] `nBorderSize`  
  [in] `iImage`  
  [in] `bHilited`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawseparator"></a>  CMFCVisualManagerOffice2007::OnDrawSeparator  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawSeparator(  
   CDC* pDC,  
   CBasePane* pBar,  
   CRect rect,  
   BOOL bIsHoriz  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pBar`  
  [in] `rect`  
  [in] `bIsHoriz`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawshowallmenuitems"></a>  CMFCVisualManagerOffice2007::OnDrawShowAllMenuItems  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawShowAllMenuItems(  
   CDC* pDC,  
   CRect rect,  
   CMFCVisualManager::AFX_BUTTON_STATE state  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rect`  
  [in] `state`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawstatusbarpaneborder"></a>  CMFCVisualManagerOffice2007::OnDrawStatusBarPaneBorder  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawStatusBarPaneBorder(  
   CDC* pDC,  
   CMFCStatusBar* pBar,  
   CRect rectPane,  
   UINT uiID,  
   UINT nStyle  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pBar`  
  [in] `rectPane`  
  [in] `uiID`  
  [in] `nStyle`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawstatusbarsizebox"></a>  CMFCVisualManagerOffice2007::OnDrawStatusBarSizeBox  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawStatusBarSizeBox(  
   CDC* pDC,  
   CMFCStatusBar* pStatBar,  
   CRect rectSizeBox  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pStatBar`  
  [in] `rectSizeBox`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawtab"></a>  CMFCVisualManagerOffice2007::OnDrawTab  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawTab(  
   CDC* pDC,  
   CRect rectTab,  
   int iTab,  
   BOOL bIsActive,  
   const CMFCBaseTabCtrl* pTabWnd  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rectTab`  
  [in] `iTab`  
  [in] `bIsActive`  
  [in] `pTabWnd`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawtabsbuttonborder"></a>  CMFCVisualManagerOffice2007::OnDrawTabsButtonBorder  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawTabsButtonBorder(  
   CDC* pDC,  
   CRect& rect,  
   CMFCButton* pButton,  
   UINT uiState,  
   CMFCBaseTabCtrl* pWndTab  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rect`  
  [in] `pButton`  
  [in] `uiState`  
  [in] `pWndTab`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawtask"></a>  CMFCVisualManagerOffice2007::OnDrawTask  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawTask(  
   CDC* pDC,  
   CMFCTasksPaneTask* pTask,  
   CImageList* pIcons,  
   BOOL bIsHighlighted = FALSE,  
   BOOL bIsSelected = FALSE  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pTask`  
  [in] `pIcons`  
  [in] `bIsHighlighted`  
  [in] `bIsSelected`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawtasksgroupcaption"></a>  CMFCVisualManagerOffice2007::OnDrawTasksGroupCaption  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawTasksGroupCaption(  
   CDC* pDC,  
   CMFCTasksPaneTaskGroup* pGroup,  
   BOOL bIsHighlighted = FALSE,  
   BOOL bIsSelected = FALSE,  
   BOOL bCanCollapse = FALSE  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pGroup`  
  [in] `bIsHighlighted`  
  [in] `bIsSelected`  
  [in] `bCanCollapse`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__ondrawtearoffcaption"></a>  CMFCVisualManagerOffice2007::OnDrawTearOffCaption  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDrawTearOffCaption(  
   CDC* pDC,  
   CRect rect,  
   BOOL bIsActive  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rect`  
  [in] `bIsActive`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__onerasemdiclientarea"></a>  CMFCVisualManagerOffice2007::OnEraseMDIClientArea  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL OnEraseMDIClientArea(  
   CDC* pDC,  
   CRect rectClient  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rectClient`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__onerasetabsarea"></a>  CMFCVisualManagerOffice2007::OnEraseTabsArea  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnEraseTabsArea(  
   CDC* pDC,  
   CRect rect,  
   const CMFCBaseTabCtrl* pTabWnd  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rect`  
  [in] `pTabWnd`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__onerasetabsbutton"></a>  CMFCVisualManagerOffice2007::OnEraseTabsButton  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnEraseTabsButton(  
   CDC* pDC,  
   CRect rect,  
   CMFCButton* pButton,  
   CMFCBaseTabCtrl* pWndTab  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rect`  
  [in] `pButton`  
  [in] `pWndTab`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__onerasetabsframe"></a>  CMFCVisualManagerOffice2007::OnEraseTabsFrame  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL OnEraseTabsFrame(  
   CDC* pDC,  
   CRect rect,  
   const CMFCBaseTabCtrl* pTabWnd  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rect`  
  [in] `pTabWnd`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__onfillbarbackground"></a>  CMFCVisualManagerOffice2007::OnFillBarBackground  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnFillBarBackground(  
   CDC* pDC,  
   CBasePane* pBar,  
   CRect rectClient,  
   CRect rectClip,  
   BOOL bNCArea = FALSE  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pBar`  
  [in] `rectClient`  
  [in] `rectClip`  
  [in] `bNCArea`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__onfillbuttoninterior"></a>  CMFCVisualManagerOffice2007::OnFillButtonInterior  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnFillButtonInterior(  
   CDC* pDC,  
   CMFCToolBarButton* pButton,  
   CRect rect,  
   CMFCVisualManager::AFX_BUTTON_STATE state  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pButton`  
  [in] `rect`  
  [in] `state`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__onfillcaptionbarbutton"></a>  CMFCVisualManagerOffice2007::OnFillCaptionBarButton  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual COLORREF OnFillCaptionBarButton(  
   CDC* pDC,  
   CMFCCaptionBar* pBar,  
   CRect rect,  
   BOOL bIsPressed,  
   BOOL bIsHighlighted,  
   BOOL bIsDisabled,  
   BOOL bHasDropDownArrow,  
   BOOL bIsSysButton  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pBar`  
  [in] `rect`  
  [in] `bIsPressed`  
  [in] `bIsHighlighted`  
  [in] `bIsDisabled`  
  [in] `bHasDropDownArrow`  
  [in] `bIsSysButton`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__onfillhighlightedarea"></a>  CMFCVisualManagerOffice2007::OnFillHighlightedArea  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnFillHighlightedArea(  
   CDC* pDC,  
   CRect rect,  
   CBrush* pBrush,  
   CMFCToolBarButton* pButton  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rect`  
  [in] `pBrush`  
  [in] `pButton`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__onfillminiframecaption"></a>  CMFCVisualManagerOffice2007::OnFillMiniFrameCaption  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual COLORREF OnFillMiniFrameCaption(  
   CDC* pDC,  
   CRect rectCaption,  
   CPaneFrameWnd* pFrameWnd,  
   BOOL bActive  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rectCaption`  
  [in] `pFrameWnd`  
  [in] `bActive`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__onfilloutlookbarcaption"></a>  CMFCVisualManagerOffice2007::OnFillOutlookBarCaption  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnFillOutlookBarCaption(  
   CDC* pDC,  
   CRect rectCaption,  
   COLORREF& clrText  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rectCaption`  
  [in] `clrText`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__onfilloutlookpagebutton"></a>  CMFCVisualManagerOffice2007::OnFillOutlookPageButton  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnFillOutlookPageButton(  
   CDC* pDC,  
   const CRect& rect,  
   BOOL bIsHighlighted,  
   BOOL bIsPressed,  
   COLORREF& clrText  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rect`  
  [in] `bIsHighlighted`  
  [in] `bIsPressed`  
  [in] `clrText`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__onfillpopupwindowbackground"></a>  CMFCVisualManagerOffice2007::OnFillPopupWindowBackground  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnFillPopupWindowBackground(  
   CDC* pDC,  
   CRect rect  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rect`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__onfillribbonbutton"></a>  CMFCVisualManagerOffice2007::OnFillRibbonButton  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual COLORREF OnFillRibbonButton(  
   CDC* pDC,  
   CMFCRibbonButton* pButton  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pButton`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__onfillribbonedit"></a>  CMFCVisualManagerOffice2007::OnFillRibbonEdit  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnFillRibbonEdit(  
   CDC* pDC,  
   CMFCRibbonRichEditCtrl* pEdit,  
   CRect rect,  
   BOOL bIsHighlighted,  
   BOOL bIsPaneHighlighted,  
   BOOL bIsDisabled,  
   COLORREF& clrText,  
   COLORREF& clrSelBackground,  
   COLORREF& clrSelText  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pEdit`  
  [in] `rect`  
  [in] `bIsHighlighted`  
  [in] `bIsPaneHighlighted`  
  [in] `bIsDisabled`  
  [in] `clrText`  
  [in] `clrSelBackground`  
  [in] `clrSelText`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__onfillribbonmainpanelbutton"></a>  CMFCVisualManagerOffice2007::OnFillRibbonMainPanelButton  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual COLORREF OnFillRibbonMainPanelButton(  
   CDC* pDC,  
   CMFCRibbonButton* pButton  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pButton`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__onfillribbonmenuframe"></a>  CMFCVisualManagerOffice2007::OnFillRibbonMenuFrame  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnFillRibbonMenuFrame(  
   CDC* pDC,  
   CMFCRibbonMainPanel* pPanel,  
   CRect rect  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pPanel`  
  [in] `rect`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__onfillribbonquickaccesstoolbarpopup"></a>  CMFCVisualManagerOffice2007::OnFillRibbonQuickAccessToolBarPopup  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnFillRibbonQuickAccessToolBarPopup(  
   CDC* pDC,  
   CMFCRibbonPanelMenuBar* pMenuBar,  
   CRect rect  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pMenuBar`  
  [in] `rect`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__onfilltab"></a>  CMFCVisualManagerOffice2007::OnFillTab  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnFillTab(  
   CDC* pDC,  
   CRect rectFill,  
   CBrush* pbrFill,  
   int iTab,  
   BOOL bIsActive,  
   const CMFCBaseTabCtrl* pTabWnd  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rectFill`  
  [in] `pbrFill`  
  [in] `iTab`  
  [in] `bIsActive`  
  [in] `pTabWnd`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__onhighlightmenuitem"></a>  CMFCVisualManagerOffice2007::OnHighlightMenuItem  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnHighlightMenuItem(  
   CDC * pDC,  
   CMFCToolBarMenuButton* pButton,  
   CRect rect,  
   COLORREF& clrText  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `pButton`  
  [in] `rect`  
  [in] `clrText`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__onhighlightrarelyusedmenuitems"></a>  CMFCVisualManagerOffice2007::OnHighlightRarelyUsedMenuItems  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnHighlightRarelyUsedMenuItems(  
   CDC* pDC,  
   CRect rectRarelyUsed  
);  
```  
  
### Parameters  
 [in] `pDC`  
  [in] `rectRarelyUsed`  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__onncactivate"></a>  CMFCVisualManagerOffice2007::OnNcActivate  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL OnNcActivate(  
   CWnd* pWnd,  
   BOOL bActive  
);  
```  
  
### Parameters  
 [in] `pWnd`  
  [in] `bActive`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__onncpaint"></a>  CMFCVisualManagerOffice2007::OnNcPaint  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL OnNcPaint(  
   CWnd* pWnd,  
   const CObList& lstSysButtons,  
   CRect rectRedraw  
);  
```  
  
### Parameters  
 [in] `pWnd`  
  [in] `lstSysButtons`  
  [in] `rectRedraw`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__onsetwindowregion"></a>  CMFCVisualManagerOffice2007::OnSetWindowRegion  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL OnSetWindowRegion(  
   CWnd* pWnd,  
   CSize sizeWindow  
);  
```  
  
### Parameters  
 [in] `pWnd`  
  [in] `sizeWindow`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__onupdatesystemcolors"></a>  CMFCVisualManagerOffice2007::OnUpdateSystemColors  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnUpdateSystemColors();  
```  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2007__setresourcehandle"></a>  CMFCVisualManagerOffice2007::SetResourceHandle  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
static void __stdcall SetResourceHandle(  
   HINSTANCE hinstRes  
);  
```  
  
### Parameters  
 [in] `hinstRes`  
  
### Remarks  
  
## See Also  
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [Classes](../VS_visualcpp/MFC-Classes.md)   
 [CMFCVisualManager Class](../VS_visualcpp/CMFCVisualManager-Class.md)   
 [CMFCVisualManagerOfficeXP Class](../VS_visualcpp/CMFCVisualManagerOfficeXP-Class.md)   
 [CMFCVisualManagerWindows Class](../VS_visualcpp/CMFCVisualManagerWindows-Class.md)   
 [CMFCVisualManager::SetDefaultManager](../VS_visualcpp/CMFCVisualManager-Class.md#cmfcvisualmanager__setdefaultmanager)