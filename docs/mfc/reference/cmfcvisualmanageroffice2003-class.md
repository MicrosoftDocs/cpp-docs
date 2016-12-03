---
title: "CMFCVisualManagerOffice2003 Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCVisualManagerOffice2003"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCVisualManagerOffice2003 class"
ms.assetid: 115482cd-e349-450a-8dc4-c6023d092aab
caps.latest.revision: 31
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
# CMFCVisualManagerOffice2003 Class
`CMFCVisualManagerOffice2003` gives an application a Microsoft Office 2003 appearance.  
  
## Syntax  
  
```  
class CMFCVisualManagerOffice2003 : public CMFCVisualManagerOfficeXP  
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCVisualManagerOffice2003::DrawComboBorderWinXP](#cmfcvisualmanageroffice2003__drawcomboborderwinxp)|Draws the combo box border using the current Windows XP theme. (Overrides [CMFCVisualManager::DrawComboBorderWinXP](../../mfc/reference/cmfcvisualmanager-class.md#cmfcvisualmanager__drawcomboborderwinxp).)|  
|[CMFCVisualManagerOffice2003::DrawComboDropButtonWinXP](#cmfcvisualmanageroffice2003__drawcombodropbuttonwinxp)|Draws a combo box drop-down button using the current Windows XP theme. (Overrides [CMFCVisualManager::DrawComboDropButtonWinXP](../../mfc/reference/cmfcvisualmanager-class.md#cmfcvisualmanager__drawcombodropbuttonwinxp).)|  
|[CMFCVisualManagerOffice2003::DrawCustomizeButton](#cmfcvisualmanageroffice2003__drawcustomizebutton)|Draws a customize button.|  
|[CMFCVisualManagerOffice2003::DrawPushButtonWinXP](#cmfcvisualmanageroffice2003__drawpushbuttonwinxp)|Draws a push button using the current Windows XP theme. (Overrides [CMFCVisualManager::DrawPushButtonWinXP](../../mfc/reference/cmfcvisualmanager-class.md#cmfcvisualmanager__drawpushbuttonwinxp).)|  
|[CMFCVisualManagerOffice2003::GetBaseThemeColor](#cmfcvisualmanageroffice2003__getbasethemecolor)|Gets the base theme color.|  
|[CMFCVisualManagerOffice2003::GetHighlightMenuItemColor](#cmfcvisualmanageroffice2003__gethighlightmenuitemcolor)|Gets the color used for the highlighted menu item.|  
|[CMFCVisualManagerOffice2003::GetPropertyGridGroupColor](#cmfcvisualmanageroffice2003__getpropertygridgroupcolor)|The framework calls this method to get the background color of a property list. (Overrides `CMFCVisualManagerOfficeXP::GetPropertyGridGroupColor`.)|  
|[CMFCVisualManagerOffice2003::GetPropertyGridGroupTextColor](#cmfcvisualmanageroffice2003__getpropertygridgrouptextcolor)|The framework calls this method to retrieve the text color of a property list. (Overrides `CMFCVisualManagerOfficeXP::GetPropertyGridGroupTextColor`.)|  
|[CMFCVisualManagerOffice2003::GetShowAllMenuItemsHeight](#cmfcvisualmanageroffice2003__getshowallmenuitemsheight)|Returns the height of all menu items. (Overrides [CMFCVisualManager::GetShowAllMenuItemsHeight](../../mfc/reference/cmfcvisualmanager-class.md#cmfcvisualmanager__getshowallmenuitemsheight).)|  
|[CMFCVisualManagerOffice2003::GetSmartDockingBaseGuideColors](#cmfcvisualmanageroffice2003__getsmartdockingbaseguidecolors)|Sets the specified base group background color and border color. (Overrides `CMFCVisualManagerOfficeXP::GetSmartDockingBaseGuideColors`.)|  
|[CMFCVisualManagerOffice2003::GetSmartDockingHighlightToneColor](#cmfcvisualmanageroffice2003__getsmartdockinghighlighttonecolor)|Gets the highlight tone color. (Overrides [CMFCVisualManager::GetSmartDockingHighlightToneColor](../../mfc/reference/cmfcvisualmanager-class.md#cmfcvisualmanager__getsmartdockinghighlighttonecolor).)|  
|[CMFCVisualManagerOffice2003::GetTabFrameColors](#cmfcvisualmanageroffice2003__gettabframecolors)|The framework calls this function when it has to retrieve the set of colors for drawing a tab window. (Overrides [CMFCVisualManager::GetTabFrameColors](../../mfc/reference/cmfcvisualmanager-class.md#cmfcvisualmanager__gettabframecolors).)|  
|[CMFCVisualManagerOffice2003::GetToolBarCustomizeButtonMargin](#cmfcvisualmanageroffice2003__gettoolbarcustomizebuttonmargin)|Gets the margin of the toolbar Customize button. (Overrides `CMFCVisualManager::GetToolBarCustomizeButtonMargin`.)|  
|[CMFCVisualManagerOffice2003::GetToolbarDisabledColor](#cmfcvisualmanageroffice2003__gettoolbardisabledcolor)|Gets the disabled color for the toolbar. (Overrides `CMFCVisualManager::GetToolbarDisabledColor`.)|  
|[CMFCVisualManagerOffice2003::GetToolTipInfo](#cmfcvisualmanageroffice2003__gettooltipinfo)|Called by the framework to get tooltip information. (Overrides [CMFCVisualManager::GetToolTipInfo](../../mfc/reference/cmfcvisualmanager-class.md#cmfcvisualmanager__gettooltipinfo).)|  
|[CMFCVisualManagerOffice2003::IsDefaultWinXPColorsEnabled](#cmfcvisualmanageroffice2003__isdefaultwinxpcolorsenabled)|Indicates whether the visual manager uses native Windows XP theme colors.|  
|[CMFCVisualManagerOffice2003::IsDockingTabHasBorder](#cmfcvisualmanageroffice2003__isdockingtabhasborder)|Returns whether the current visual manager draws borders around panes that are docked and tabbed. (Overrides [CMFCVisualManager::IsDockingTabHasBorder](../../mfc/reference/cmfcvisualmanager-class.md#cmfcvisualmanager__isdockingtabhasborder).)|  
|[CMFCVisualManagerOffice2003::IsHighlightOneNoteTabs](#cmfcvisualmanageroffice2003__ishighlightonenotetabs)|Indicates whether OneNote tabs should be highlighted. (Overrides `CMFCVisualManager::IsHighlightOneNoteTabs`.)|  
|[CMFCVisualManagerOffice2003::IsOffsetPressedButton](#cmfcvisualmanageroffice2003__isoffsetpressedbutton)|Called by the framework when drawing a toolbar button. (Overrides `CMFCVisualManager::IsOffsetPressedButton`.)|  
|[CMFCVisualManagerOffice2003::IsStatusBarOfficeXPLook](#cmfcvisualmanageroffice2003__isstatusbarofficexplook)|Indicates whether there is a status bar with an Office XP look.|  
|[CMFCVisualManagerOffice2003::IsToolbarRoundShape](#cmfcvisualmanageroffice2003__istoolbarroundshape)|Indicates whether a specified toolbar has a round shape. (Overrides [CMFCVisualManager::IsToolbarRoundShape](../../mfc/reference/cmfcvisualmanager-class.md#cmfcvisualmanager__istoolbarroundshape).)|  
|[CMFCVisualManagerOffice2003::IsUseGlobalTheme](#cmfcvisualmanageroffice2003__isuseglobaltheme)|Indicates whether a global Windows XP theme is used.|  
|[CMFCVisualManagerOffice2003::IsWindowsThemingSupported](#cmfcvisualmanageroffice2003__iswindowsthemingsupported)|Indicates whether Windows theming is supported. (Overrides [CMFCVisualManager::IsWindowsThemingSupported](../../mfc/reference/cmfcvisualmanager-class.md#cmfcvisualmanager__iswindowsthemingsupported).)|  
|[CMFCVisualManagerOffice2003::OnDrawAutoHideButtonBorder](#cmfcvisualmanageroffice2003__ondrawautohidebuttonborder)|The framework calls this method when it draws the border of an auto-hide button. (Overrides [CMFCVisualManager::OnDrawAutoHideButtonBorder](../../mfc/reference/cmfcvisualmanager-class.md#cmfcvisualmanager__ondrawautohidebuttonborder).)|  
|[CMFCVisualManagerOffice2003::OnDrawBarGripper](#cmfcvisualmanageroffice2003__ondrawbargripper)|Called by the framework when it draws the gripper for a control bar. (Overrides `CMFCVisualManagerOfficeXP::OnDrawBarGripper`.)|  
|[CMFCVisualManagerOffice2003::OnDrawBrowseButton](#cmfcvisualmanageroffice2003__ondrawbrowsebutton)|The framework calls this method when it draws the browse button for an edit control. (Overrides `CMFCVisualManagerOfficeXP::OnDrawBrowseButton`.)|  
|[CMFCVisualManagerOffice2003::OnDrawButtonBorder](#cmfcvisualmanageroffice2003__ondrawbuttonborder)|The framework calls this method when it draws the border of a toolbar button. (Overrides `CMFCVisualManagerOfficeXP::OnDrawButtonBorder`.)|  
|[CMFCVisualManagerOffice2003::OnDrawCaptionBarBorder](#cmfcvisualmanageroffice2003__ondrawcaptionbarborder)|The framework calls this method when it draws the border of a [CMFCCaptionBar Class](../../mfc/reference/cmfccaptionbar-class.md) object. (Overrides [CMFCVisualManager::OnDrawCaptionBarBorder](../../mfc/reference/cmfcvisualmanager-class.md#cmfcvisualmanager__ondrawcaptionbarborder).)|  
|[CMFCVisualManagerOffice2003::OnDrawCheckBoxEx](#cmfcvisualmanageroffice2003__ondrawcheckboxex)|The framework calls this method when it draws a checkbox. (Overrides [CMFCVisualManager::OnDrawCheckBoxEx](../../mfc/reference/cmfcvisualmanager-class.md#cmfcvisualmanager__ondrawcheckboxex).)|  
|[CMFCVisualManagerOffice2003::OnDrawComboBorder](#cmfcvisualmanageroffice2003__ondrawcomboborder)|The framework calls this method when it draws the border around a [CMFCToolBarComboBoxButton Class](../../mfc/reference/cmfctoolbarcomboboxbutton-class.md) object. (Overrides `CMFCVisualManagerOfficeXP::OnDrawComboBorder`.)|  
|[CMFCVisualManagerOffice2003::OnDrawComboDropButton](#cmfcvisualmanageroffice2003__ondrawcombodropbutton)|The framework calls this method when it draws the drop button of a [CMFCToolBarComboBoxButton Class](../../mfc/reference/cmfctoolbarcomboboxbutton-class.md). (Overrides `CMFCVisualManagerOfficeXP::OnDrawComboDropButton`.)|  
|[CMFCVisualManagerOffice2003::OnDrawControlBorder](#cmfcvisualmanageroffice2003__ondrawcontrolborder)|The framework calls this method when it draws the border of a control. (Overrides [CMFCVisualManager::OnDrawControlBorder](../../mfc/reference/cmfcvisualmanager-class.md#cmfcvisualmanager__ondrawcontrolborder).)|  
|[CMFCVisualManagerOffice2003::OnDrawExpandingBox](#cmfcvisualmanageroffice2003__ondrawexpandingbox)|The framework calls this method when it draws an expanding box. (Overrides [CMFCVisualManager::OnDrawExpandingBox](../../mfc/reference/cmfcvisualmanager-class.md#cmfcvisualmanager__ondrawexpandingbox).)|  
|[CMFCVisualManagerOffice2003::OnDrawHeaderCtrlBorder](#cmfcvisualmanageroffice2003__ondrawheaderctrlborder)|The framework calls this method when it draws the border around an instance of the [CMFCHeaderCtrl Class](../../mfc/reference/cmfcheaderctrl-class.md). (Overrides [CMFCVisualManager::OnDrawHeaderCtrlBorder](../../mfc/reference/cmfcvisualmanager-class.md#cmfcvisualmanager__ondrawheaderctrlborder).)|  
|[CMFCVisualManagerOffice2003::OnDrawMenuBorder](#cmfcvisualmanageroffice2003__ondrawmenuborder)|The framework calls this method when it draws the border of a [CMFCPopupMenu Class](../../mfc/reference/cmfcpopupmenu-class.md). (Overrides `CMFCVisualManagerOfficeXP::OnDrawMenuBorder`.)|  
|[CMFCVisualManagerOffice2003::OnDrawOutlookBarSplitter](#cmfcvisualmanageroffice2003__ondrawoutlookbarsplitter)|The framework calls this method when it draws the splitter for an Outlook bar. (Overrides [CMFCVisualManager::OnDrawOutlookBarSplitter](../../mfc/reference/cmfcvisualmanager-class.md#cmfcvisualmanager__ondrawoutlookbarsplitter).)|  
|[CMFCVisualManagerOffice2003::OnDrawOutlookPageButtonBorder](#cmfcvisualmanageroffice2003__ondrawoutlookpagebuttonborder)|Called by the framework when it draws the border of an Outlook page button. (Overrides [CMFCVisualManager::OnDrawOutlookPageButtonBorder](../../mfc/reference/cmfcvisualmanager-class.md#cmfcvisualmanager__ondrawoutlookpagebuttonborder).)|  
|[CMFCVisualManagerOffice2003::OnDrawPaneBorder](#cmfcvisualmanageroffice2003__ondrawpaneborder)|The framework calls this method when it draws the border of a [CPane Class](../../mfc/reference/cpane-class.md) object. (Overrides `CMFCVisualManagerOfficeXP::OnDrawPaneBorder`.)|  
|[CMFCVisualManagerOffice2003::OnDrawPaneCaption](#cmfcvisualmanageroffice2003__ondrawpanecaption)|The framework calls this method when it draws a caption for a [CDockablePane Class](../../mfc/reference/cdockablepane-class.md) object. (Overrides `CMFCVisualManagerOfficeXP::OnDrawPaneCaption`.)|  
|[CMFCVisualManagerOffice2003::OnDrawPopupWindowBorder](#cmfcvisualmanageroffice2003__ondrawpopupwindowborder)|The framework calls this method when it draws the border of a popup window. (Overrides `CMFCVisualManagerOfficeXP::OnDrawPopupWindowBorder`.)|  
|[CMFCVisualManagerOffice2003::OnDrawPopupWindowButtonBorder](#cmfcvisualmanageroffice2003__ondrawpopupwindowbuttonborder)|The framework calls this method when it draws the border of a button in a popup window. (Overrides `CMFCVisualManagerOfficeXP::OnDrawPopupWindowButtonBorder`.)|  
|[CMFCVisualManagerOffice2003::OnDrawPopupWindowCaption](#cmfcvisualmanageroffice2003__ondrawpopupwindowcaption)|The framework calls this method when it draws the caption of a popup window. (Overrides `CMFCVisualManagerOfficeXP::OnDrawPopupWindowCaption`.)|  
|[CMFCVisualManagerOffice2003::OnDrawRibbonButtonsGroup](#cmfcvisualmanageroffice2003__ondrawribbonbuttonsgroup)|The framework calls this method when it draws a group of buttons on the ribbon. (Overrides [CMFCVisualManager::OnDrawRibbonButtonsGroup](../../mfc/reference/cmfcvisualmanager-class.md#cmfcvisualmanager__ondrawribbonbuttonsgroup).)|  
|[CMFCVisualManagerOffice2003::OnDrawRibbonCategoryCaption](#cmfcvisualmanageroffice2003__ondrawribboncategorycaption)|The framework calls this method when it draws the caption bar for a ribbon category. (Overrides [CMFCVisualManager::OnDrawRibbonCategoryCaption](../../mfc/reference/cmfcvisualmanager-class.md#cmfcvisualmanager__ondrawribboncategorycaption).)|  
|[CMFCVisualManagerOffice2003::OnDrawRibbonCategoryTab](#cmfcvisualmanageroffice2003__ondrawribboncategorytab)|The framework calls this method when it draws the tab for a ribbon category. (Overrides [CMFCVisualManager::OnDrawRibbonCategoryTab](../../mfc/reference/cmfcvisualmanager-class.md#cmfcvisualmanager__ondrawribboncategorytab).)|  
|[CMFCVisualManagerOffice2003::OnDrawRibbonProgressBar](#cmfcvisualmanageroffice2003__ondrawribbonprogressbar)|The framework calls this method when it draws a [CMFCRibbonProgressBar Class](../../mfc/reference/cmfcribbonprogressbar-class.md). (Overrides [CMFCVisualManager::OnDrawRibbonProgressBar](../../mfc/reference/cmfcvisualmanager-class.md#cmfcvisualmanager__ondrawribbonprogressbar).)|  
|[CMFCVisualManagerOffice2003::OnDrawRibbonQuickAccessToolBarSeparator](#cmfcvisualmanageroffice2003__ondrawribbonquickaccesstoolbarseparator)|The framework calls this method when it draws a separator on the Quick Access Toolbar of a ribbon. (Overrides `CMFCVisualManagerOfficeXP::OnDrawRibbonQuickAccessToolBarSeparator`.)|  
|[CMFCVisualManagerOffice2003::OnDrawRibbonSliderChannel](#cmfcvisualmanageroffice2003__ondrawribbonsliderchannel)|The framework calls this method when it draws the channel of a [CMFCRibbonSlider Class](../../mfc/reference/cmfcribbonslider-class.md). (Overrides [CMFCVisualManager::OnDrawRibbonSliderChannel](../../mfc/reference/cmfcvisualmanager-class.md#cmfcvisualmanager__ondrawribbonsliderchannel).)|  
|[CMFCVisualManagerOffice2003::OnDrawRibbonSliderThumb](#cmfcvisualmanageroffice2003__ondrawribbonsliderthumb)|The framework calls this method when it draws the thumb of a [CMFCRibbonSlider](../../mfc/reference/cmfcribbonslider-class.md) object. (Overrides [CMFCVisualManager::OnDrawRibbonSliderThumb](../../mfc/reference/cmfcvisualmanager-class.md#cmfcvisualmanager__ondrawribbonsliderthumb).)|  
|[CMFCVisualManagerOffice2003::OnDrawRibbonSliderZoomButton](#cmfcvisualmanageroffice2003__ondrawribbonsliderzoombutton)|The framework calls this method when it draws the zoom buttons for a [CMFCRibbonSlider](../../mfc/reference/cmfcribbonslider-class.md) object. (Overrides [CMFCVisualManager::OnDrawRibbonSliderZoomButton](../../mfc/reference/cmfcvisualmanager-class.md#cmfcvisualmanager__ondrawribbonsliderzoombutton).)|  
|[CMFCVisualManagerOffice2003::OnDrawRibbonStatusBarPane](#cmfcvisualmanageroffice2003__ondrawribbonstatusbarpane)|The framework calls this method when it draws a pane on the status bar. (Overrides `CMFCVisualManagerOfficeXP::OnDrawRibbonStatusBarPane`.)|  
|[CMFCVisualManagerOffice2003::OnDrawScrollButtons](#cmfcvisualmanageroffice2003__ondrawscrollbuttons)|The framework calls this method when it draws scroll buttons. (Overrides `CMFCVisualManagerOfficeXP::OnDrawScrollButtons`.)|  
|[CMFCVisualManagerOffice2003::OnDrawSeparator](#cmfcvisualmanageroffice2003__ondrawseparator)|The framework calls this method when it draws a separator. (Overrides `CMFCVisualManagerOfficeXP::OnDrawSeparator`.)|  
|[CMFCVisualManagerOffice2003::OnDrawShowAllMenuItems](#cmfcvisualmanageroffice2003__ondrawshowallmenuitems)|The framework calls this method when it draws all the items in a menu. (Overrides [CMFCVisualManager::OnDrawShowAllMenuItems](../../mfc/reference/cmfcvisualmanager-class.md#cmfcvisualmanager__ondrawshowallmenuitems).)|  
|[CMFCVisualManagerOffice2003::OnDrawStatusBarPaneBorder](#cmfcvisualmanageroffice2003__ondrawstatusbarpaneborder)|The framework calls this method when it draws the border for a [CMFCStatusBar Class](../../mfc/reference/cmfcstatusbar-class.md) object. (Overrides `CMFCVisualManagerOfficeXP::OnDrawStatusBarPaneBorder`.)|  
|[CMFCVisualManagerOffice2003::OnDrawStatusBarProgress](#cmfcvisualmanageroffice2003__ondrawstatusbarprogress)|The framework calls this method when it draws the progress indicator on the [CMFCStatusBar](../../mfc/reference/cmfcstatusbar-class.md) object. (Overrides [CMFCVisualManager::OnDrawStatusBarProgress](../../mfc/reference/cmfcvisualmanager-class.md#cmfcvisualmanager__ondrawstatusbarprogress).)|  
|[CMFCVisualManagerOffice2003::OnDrawStatusBarSizeBox](#cmfcvisualmanageroffice2003__ondrawstatusbarsizebox)|The framework calls this method when it draws the size box for a [CMFCStatusBar](../../mfc/reference/cmfcstatusbar-class.md). (Overrides [CMFCVisualManager::OnDrawStatusBarSizeBox](../../mfc/reference/cmfcvisualmanager-class.md#cmfcvisualmanager__ondrawstatusbarsizebox).)|  
|[CMFCVisualManagerOffice2003::OnDrawTab](#cmfcvisualmanageroffice2003__ondrawtab)|The framework calls this method when it draws the tabs for a [CMFCBaseTabCtrl Class](../../mfc/reference/cmfcbasetabctrl-class.md) object. (Overrides `CMFCVisualManagerOfficeXP::OnDrawTab`.)|  
|[CMFCVisualManagerOffice2003::OnDrawTabsButtonBorder](#cmfcvisualmanageroffice2003__ondrawtabsbuttonborder)|The framework calls this method when it draws the border of a tab button. (Overrides `CMFCVisualManagerOfficeXP::OnDrawTabsButtonBorder`.)|  
|[CMFCVisualManagerOffice2003::OnDrawTask](#cmfcvisualmanageroffice2003__ondrawtask)|The framework calls this method when it draws a [CMFCTasksPaneTask Class](../../mfc/reference/cmfctaskspanetask-class.md) object. (Overrides `CMFCVisualManagerOfficeXP::OnDrawTask`.)|  
|[CMFCVisualManagerOffice2003::OnDrawTasksGroupAreaBorder](#cmfcvisualmanageroffice2003__ondrawtasksgroupareaborder)|The framework calls this method when it draws a border around a group on a [CMFCTasksPane Class](../../mfc/reference/cmfctaskspane-class.md) object. (Overrides `CMFCVisualManagerOfficeXP::OnDrawTasksGroupAreaBorder`.)|  
|[CMFCVisualManagerOffice2003::OnDrawTasksGroupCaption](#cmfcvisualmanageroffice2003__ondrawtasksgroupcaption)|The framework calls this method when it draws the caption for a [CMFCTasksPaneTaskGroup Class](../../mfc/reference/cmfctaskspanetaskgroup-class.md) object. (Overrides `CMFCVisualManagerOfficeXP::OnDrawTasksGroupCaption`.)|  
|[CMFCVisualManagerOffice2003::OnDrawTearOffCaption](#cmfcvisualmanageroffice2003__ondrawtearoffcaption)|The framework calls this method when it draws the caption for a [CMFCPopupMenu Class](../../mfc/reference/cmfcpopupmenu-class.md) object. (Overrides `CMFCVisualManagerOfficeXP::OnDrawTearOffCaption`.)|  
|[CMFCVisualManagerOffice2003::OnErasePopupWindowButton](#cmfcvisualmanageroffice2003__onerasepopupwindowbutton)|The framework calls this method when it erases a button in a popup window. (Overrides `CMFCVisualManagerOfficeXP::OnErasePopupWindowButton`.)|  
|[CMFCVisualManagerOffice2003::OnEraseTabsArea](#cmfcvisualmanageroffice2003__onerasetabsarea)|The framework calls this method when it erases the tab area of a tab window. (Overrides `CMFCVisualManagerOfficeXP::OnEraseTabsArea`.)|  
|[CMFCVisualManagerOffice2003::OnEraseTabsButton](#cmfcvisualmanageroffice2003__onerasetabsbutton)|The framework calls this method when it erases the text and icon of a tab button. (Overrides `CMFCVisualManagerOfficeXP::OnEraseTabsButton`.)|  
|[CMFCVisualManagerOffice2003::OnEraseTabsFrame](#cmfcvisualmanageroffice2003__onerasetabsframe)|The framework calls this method when it erases a frame on a [CMFCBaseTabCtrl Class](../../mfc/reference/cmfcbasetabctrl-class.md). (Overrides [CMFCVisualManager::OnEraseTabsFrame](../../mfc/reference/cmfcvisualmanager-class.md#cmfcvisualmanager__onerasetabsframe).)|  
|[CMFCVisualManagerOffice2003::OnFillAutoHideButtonBackground](#cmfcvisualmanageroffice2003__onfillautohidebuttonbackground)|The framework calls this method when it fills the background of an auto-hide button. (Overrides [CMFCVisualManager::OnFillAutoHideButtonBackground](../../mfc/reference/cmfcvisualmanager-class.md#cmfcvisualmanager__onfillautohidebuttonbackground).)|  
|[CMFCVisualManagerOffice2003::OnFillBarBackground](#cmfcvisualmanageroffice2003__onfillbarbackground)|The framework calls this method when it fills the background of a [CBasePane Class](../../mfc/reference/cbasepane-class.md) object. (Overrides `CMFCVisualManagerOfficeXP::OnFillBarBackground`.)|  
|[CMFCVisualManagerOffice2003::OnFillButtonInterior](#cmfcvisualmanageroffice2003__onfillbuttoninterior)|The framework calls this method when it fills the background of a toolbar button. (Overrides `CMFCVisualManagerOfficeXP::OnFillButtonInterior`.)|  
|[CMFCVisualManagerOffice2003::OnFillCommandsListBackground](#cmfcvisualmanageroffice2003__onfillcommandslistbackground)|The framework calls this method when it fills the background of a toolbar button that belongs to a command list. (Overrides `CMFCVisualManagerOfficeXP::OnFillCommandsListBackground`.)|  
|[CMFCVisualManagerOffice2003::OnFillHeaderCtrlBackground](#cmfcvisualmanageroffice2003__onfillheaderctrlbackground)|The framework calls this method when it fills the background of a header control. (Overrides [CMFCVisualManager::OnFillHeaderCtrlBackground](../../mfc/reference/cmfcvisualmanager-class.md#cmfcvisualmanager__onfillheaderctrlbackground).)|  
|[CMFCVisualManagerOffice2003::OnFillHighlightedArea](#cmfcvisualmanageroffice2003__onfillhighlightedarea)|The framework calls this method when it fills the highlighted area of a toolbar button. (Overrides `CMFCVisualManagerOfficeXP::OnFillHighlightedArea`.)|  
|[CMFCVisualManagerOffice2003::OnFillOutlookBarCaption](#cmfcvisualmanageroffice2003__onfilloutlookbarcaption)|The framework calls this method when it fills the background of an Outlook caption bar. (Overrides [CMFCVisualManager::OnFillOutlookBarCaption](../../mfc/reference/cmfcvisualmanager-class.md#cmfcvisualmanager__onfilloutlookbarcaption).)|  
|[CMFCVisualManagerOffice2003::OnFillOutlookPageButton](#cmfcvisualmanageroffice2003__onfilloutlookpagebutton)|The framework calls this method when it fills the interior of an Outlook page button. (Overrides [CMFCVisualManager::OnFillOutlookPageButton](../../mfc/reference/cmfcvisualmanager-class.md#cmfcvisualmanager__onfilloutlookpagebutton).)|  
|[CMFCVisualManagerOffice2003::OnFillPopupWindowBackground](#cmfcvisualmanageroffice2003__onfillpopupwindowbackground)|The framework calls this method when it fills the background of a pop-up window. (Overrides `CMFCVisualManagerOfficeXP::OnFillPopupWindowBackground`.)|  
|[CMFCVisualManagerOffice2003::OnFillTab](#cmfcvisualmanageroffice2003__onfilltab)|The framework calls this method when it fills the background of a tab window. (Overrides `CMFCVisualManagerOfficeXP::OnFillTab`.)|  
|[CMFCVisualManagerOffice2003::OnFillTasksGroupInterior](#cmfcvisualmanageroffice2003__onfilltasksgroupinterior)|The framework calls this method when it fills the interior of a [CMFCTasksPaneTaskGroup Class](../../mfc/reference/cmfctaskspanetaskgroup-class.md) object. (Overrides `CMFCVisualManagerOfficeXP::OnFillTasksGroupInterior`.)|  
|[CMFCVisualManagerOffice2003::OnFillTasksPaneBackground](#cmfcvisualmanageroffice2003__onfilltaskspanebackground)|The framework calls this method when it fills the background of a [CMFCTasksPane](../../mfc/reference/cmfctaskspane-class.md) control. (Overrides [CMFCVisualManager::OnFillTasksPaneBackground](../../mfc/reference/cmfcvisualmanager-class.md#cmfcvisualmanager__onfilltaskspanebackground).)|  
|[CMFCVisualManagerOffice2003::OnHighlightQuickCustomizeMenuButton](#cmfcvisualmanageroffice2003__onhighlightquickcustomizemenubutton)|The framework calls this method when it draws a highlighted quick-customize menu button. (Overrides `CMFCVisualManagerOfficeXP::OnHighlightQuickCustomizeMenuButton`.)|  
|[CMFCVisualManagerOffice2003::OnHighlightRarelyUsedMenuItems](#cmfcvisualmanageroffice2003__onhighlightrarelyusedmenuitems)|The framework calls this method when it draws a highlighted menu command. (Overrides `CMFCVisualManagerOfficeXP::OnHighlightRarelyUsedMenuItems`.)|  
|[CMFCVisualManagerOffice2003::OnUpdateSystemColors](#cmfcvisualmanageroffice2003__onupdatesystemcolors)|The framework calls this function when the system colors change. (Overrides `CMFCVisualManagerOfficeXP::OnUpdateSystemColors`.)|  
|[CMFCVisualManagerOffice2003::SetDefaultWinXPColors](#cmfcvisualmanageroffice2003__setdefaultwinxpcolors)|Specifies whether the visual manager should use native Windows XP theme colors or colors obtained from [GetSysColor](http://msdn.microsoft.com/library/windows/desktop/ms724371).|  
|[CMFCVisualManagerOffice2003::SetStatusBarOfficeXPLook](#cmfcvisualmanageroffice2003__setstatusbarofficexplook)|Specifies that the Windows XP global theme should be used.|  
|[CMFCVisualManagerOffice2003::SetUseGlobalTheme](#cmfcvisualmanageroffice2003__setuseglobaltheme)|Specifies whether the visual manager uses a global theme.|  
  
## Remarks  
 You use the `CMFCVisualManagerOffice2003` class to change the visual appearance of your application to resemble Microsoft Office 2003.  
  
## Example  
 The following example demonstrates how to set the office 2003 visual manager. This code snippet is part of the [Desktop Alert Demo sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_DesktopAlertDemo#6](../../mfc/reference/codesnippet/cpp/cmfcvisualmanageroffice2003-class_1.cpp)]  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCBaseVisualManager](../../mfc/reference/cmfcbasevisualmanager-class.md)  
  
 [CMFCVisualManager](../../mfc/reference/cmfcvisualmanager-class.md)  
  
 [CMFCVisualManagerOfficeXP](../../mfc/reference/cmfcvisualmanagerofficexp-class.md)  
  
 [CMFCVisualManagerOffice2003](../../mfc/reference/cmfcvisualmanageroffice2003-class.md)  
  
## Requirements  
 **Header:** afxvisualmanageroffice2003.h  
  
##  <a name="cmfcvisualmanageroffice2003__drawcomboborderwinxp"></a>  CMFCVisualManagerOffice2003::DrawComboBorderWinXP  
 Draws the combo box border using the current Windows XP theme.  
  
```  
virtual BOOL DrawComboBorderWinXP(
    CDC* pDC,  
    CRect rect,  
    BOOL bDisabled,  
    BOOL bIsDropped,  
    BOOL bIsHighlighted);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rect`  
 Bounding rectangle of the combo box border.  
  
 [in] `bDisabled`  
 Specifies whether the combo box border is disabled.  
  
 [in] `bIsDropped`  
 Specifies whether the combo box border is dropped down.  
  
 [in] `bIsHighlighted`  
 Specifies whether the combo box border is highlighted.  
  
### Return Value  
 Returns `TRUE` if the theme API is enabled or `FALSE` if not.  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2003__drawcombodropbuttonwinxp"></a>  CMFCVisualManagerOffice2003::DrawComboDropButtonWinXP  
 Draws a combo box drop-down button using the current Windows XP theme.  
  
```  
virtual BOOL DrawComboDropButtonWinXP(
    CDC* pDC,  
    CRect rect,  
    BOOL bDisabled,  
    BOOL bIsDropped,  
    BOOL bIsHighlighted);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rect`  
 The bounding rectangle of the combo box drop-down button.  
  
 [in] `bDisabled`  
 Specifies whether the combo box drop-down button is disabled.  
  
 [in] `bIsDropped`  
 Specifies whether the combo box drop-down button is dropped down.  
  
 [in] `bIsHighlighted`  
 Specifies whether the combo box drop-down button is highlighted.  
  
### Return Value  
 Returns `TRUE` if the theme API is enabled or `FALSE` if not.  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2003__drawcustomizebutton"></a>  CMFCVisualManagerOffice2003::DrawCustomizeButton  
 Draws a customize button.  
  
```  
virtual void DrawCustomizeButton(
    CDC* pDC,  
    CRect rect,  
    BOOL bIsHorz,  
    CMFCVisualManager::AFX_BUTTON_STATE state,  
    BOOL bIsCustomize,  
    BOOL bIsMoreButtons);
```  
  
### Parameters  
 [in] `pDC`  
 Pointer to a display context.  
  
 [in] `rect`  
 The bounding rectangle of the button  
  
 [in] `bIsHorz`  
 `TRUE` if the button is horizontal, or `FALSE` if it is vertical.  
  
 [in] `state`  
 The state of the button as it is to be drawn (regular, pressed or highlighted).  
  
 [in] `bIsCustomize`  
 `TRUE` if the customize arrow-down or arrow-left image should be drawn in the button rectangle, or `FALSE` if not.  
  
 [in] `bIsMoreButtons`  
 `TRUE` if the horizontal or vertical customize More-Buttons image should be drawn in the button rectangle, or `FALSE` if not.  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2003__drawpushbuttonwinxp"></a>  CMFCVisualManagerOffice2003::DrawPushButtonWinXP  
 Draws a push button using the current Windows XP theme.  
  
```  
virtual BOOL DrawPushButtonWinXP(
    CDC* pDC,  
    CRect rect,  
    CMFCButton* pButton,  
    UINT uiState);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rect`  
 The bounding rectangle of the push button.  
  
 [in] `pButton`  
 A pointer to the [CMFCButton Class](../../mfc/reference/cmfcbutton-class.md) object to draw.  
  
 [in] `uiState`  
 Ignored. The state is taken from `pButton`.  
  
### Return Value  
 `TRUE` if the Theme API is enabled; otherwise `FALSE`.  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2003__getbasethemecolor"></a>  CMFCVisualManagerOffice2003::GetBaseThemeColor  
 Gets the base theme color.  
  
```  
virtual COLORREF GetBaseThemeColor();
```  
  
### Return Value  
 Returns the theme color of the base theme, if one is set, or the color-bar face color.  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2003__gethighlightmenuitemcolor"></a>  CMFCVisualManagerOffice2003::GetHighlightMenuItemColor  
 Gets the color used for the highlighted menu item.  
  
```  
virtual COLORREF GetHighlightMenuItemColor() const;

 
```  
  
### Return Value  
 Returns the color used for the highlighted menu item.  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2003__getpropertygridgroupcolor"></a>  CMFCVisualManagerOffice2003::GetPropertyGridGroupColor  
 The framework calls this method to get the background color of a property list.  
  
```  
virtual COLORREF GetPropertyGridGroupColor(CMFCPropertyGridCtrl* pPropList);
```  
  
### Parameters  
 [in] `pPropList`  
 A pointer to the property list that the framework is drawing.  
  
### Return Value  
 Returns the background color of `pPropList`.  
  
### Remarks  
 Override this function to customize the background color of a property list in your application.  
  
##  <a name="cmfcvisualmanageroffice2003__getpropertygridgrouptextcolor"></a>  CMFCVisualManagerOffice2003::GetPropertyGridGroupTextColor  
 The framework calls this method to retrieve the text color of a property list.  
  
```  
virtual COLORREF GetPropertyGridGroupTextColor(CMFCPropertyGridCtrl* pPropList);
```  
  
### Parameters  
 [in] `pPropList`  
 A pointer to the property list.  
  
### Return Value  
 Returns the text color of the specified property list.  
  
### Remarks  
 Override this function to customize the text color of a property list in your application.  
  
##  <a name="cmfcvisualmanageroffice2003__getshowallmenuitemsheight"></a>  CMFCVisualManagerOffice2003::GetShowAllMenuItemsHeight  
 Returns the height of all menu items.  
  
```  
virtual int GetShowAllMenuItemsHeight(
    CDC* pDC,  
    const CSize& sizeDefault);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to the device context.  
  
 [in] `sizeDefault`  
 Default menu size.  
  
### Return Value  
 By default, returns the height of all menu images plus margins.  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2003__getsmartdockingbaseguidecolors"></a>  CMFCVisualManagerOffice2003::GetSmartDockingBaseGuideColors  
 Sets the specified base group background color and border color.  
  
```  
virtual void GetSmartDockingBaseGuideColors(
    COLORREF& clrBaseGroupBackground,  
    COLORREF& clrBaseGroupBorder);
```  
  
### Parameters  
 [in] `clrBaseGroupBackground`  
 Reference to a [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) to set to the background color.  
  
 [in] `clrBaseGroupBorder`  
 Reference to a [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) to set to the border color.  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2003__getsmartdockinghighlighttonecolor"></a>  CMFCVisualManagerOffice2003::GetSmartDockingHighlightToneColor  
 Returns the highlight tone color.  
  
```  
virtual COLORREF GetSmartDockingHighlightToneColor();
```  
  
### Return Value  
 Returns a [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) that contains the highlight tone color.  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2003__gettabframecolors"></a>  CMFCVisualManagerOffice2003::GetTabFrameColors  
 The framework calls this function when it has to retrieve the set of colors for drawing a tab window.  
  
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
    CBrush*& pbrBlack);
```  
  
### Parameters  
 [in] `pTabWnd`  
 A pointer to the tabbed window where the frame is drawing a tab.  
  
 [out] `clrDark`  
 A reference to a [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) parameter where this method stores the color for the dark border of a tab.  
  
 [out] `clrBlack`  
 A reference to a `COLORREF` parameter where this method stores the color for the border of the tab window. The default color for the border is black.  
  
 [out] `clrHighlight`  
 A reference to a `COLORREF` parameter where this method stores the color for the highlight state of the tab window.  
  
 [out] `clrFace`  
 A reference to a `COLORREF` parameter where this method stores the color for face of the tab window.  
  
 [out] `clrDarkShadow`  
 A reference to a `COLORREF` parameter where this method stores the color for the shadow of the tab window.  
  
 [out] `clrLight`  
 A reference to a `COLORREF` parameter where this method stores the color for the light edge of the tab window.  
  
 [out] `pbrFace`  
 A pointer to a reference for a brush. This method stores the brush that it uses to fill the face of the tab window in this parameter.  
  
 [out] `pbrBlack`  
 A pointer to a reference for a brush. This method stores the brush it uses to fill the black edge of the tab window in this parameter.  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2003__gettoolbarcustomizebuttonmargin"></a>  CMFCVisualManagerOffice2003::GetToolBarCustomizeButtonMargin  
 Gets the margin for the toolbar Customize button.  
  
```  
virtual int GetToolBarCustomizeButtonMargin() const;

 
```  
  
### Return Value  
 Returns the margin for the toolbar Customize button.  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2003__gettoolbardisabledcolor"></a>  CMFCVisualManagerOffice2003::GetToolbarDisabledColor  
 Gets the disabled color for the toolbar.  
  
```  
virtual COLORREF GetToolbarDisabledColor() const;

 
```  
  
### Return Value  
 Returns a [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) that contains the disabled color.  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2003__gettooltipinfo"></a>  CMFCVisualManagerOffice2003::GetToolTipInfo  
 Called by the framework to get tooltip information.  
  
```  
virtual BOOL GetToolTipInfo(
    CMFCToolTipInfo& params,  
    UINT nType = (UINT)(-1));
```  
  
### Parameters  
 [out] `params`  
 A reference to a [CMFCToolTipInfo Class](../../mfc/reference/cmfctooltipinfo-class.md) object where this method returns tooltip information.  
  
 [in] `nType`  
 Type information for the tooltip information to be returned.  
  
### Return Value  
 Returns `TRUE` if tooltip information is returned, and `FALSE` otherwise.  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2003__isdefaultwinxpcolorsenabled"></a>  CMFCVisualManagerOffice2003::IsDefaultWinXPColorsEnabled  
 Indicates whether the visual manager uses theme colors that are native to Windows XP.  
  
```  
static BOOL IsDefaultWinXPColorsEnabled();
```  
  
### Return Value  
 `TRUE` if the visual manager uses native colors; otherwise, `FALSE`.  
  
### Remarks  
 For more information about native colors, see [CMFCVisualManagerOffice2003::SetDefaultWinXPColors](#cmfcvisualmanageroffice2003__setdefaultwinxpcolors).  
  
##  <a name="cmfcvisualmanageroffice2003__isdockingtabhasborder"></a>  CMFCVisualManagerOffice2003::IsDockingTabHasBorder  
 Returns whether the current visual manager draws borders around panes that are docked and tabbed.  
  
```  
virtual BOOL IsDockingTabHasBorder();
```  
  
### Return Value  
 `TRUE` if the visual manager draws borders around panes that are docked and tabbed; `FALSE` otherwise.  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2003__ishighlightonenotetabs"></a>  CMFCVisualManagerOffice2003::IsHighlightOneNoteTabs  
 Indicates whether OneNote tabs should be highlighted.  
  
```  
virtual BOOL IsHighlightOneNoteTabs() const;

 
```  
  
### Return Value  
 Returns `TRUE`.  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2003__isoffsetpressedbutton"></a>  CMFCVisualManagerOffice2003::IsOffsetPressedButton  
 Called by the framework while drawing a toolbar button.  
  
```  
virtual BOOL IsOffsetPressedButton() const;

 
```  
  
### Return Value  
  
### Remarks  
 The default implementation returns `FALSE`.  
  
##  <a name="cmfcvisualmanageroffice2003__isstatusbarofficexplook"></a>  CMFCVisualManagerOffice2003::IsStatusBarOfficeXPLook  
 Indicates whether there is a status bar with an Office XP look.  
  
```  
static BOOL __stdcall IsStatusBarOfficeXPLook();
```  
  
### Return Value  
  
### Remarks  
 Returns `TRUE` if there is a status bar with an Office XP look, or `FALSE` if not.  
  
##  <a name="cmfcvisualmanageroffice2003__istoolbarroundshape"></a>  CMFCVisualManagerOffice2003::IsToolbarRoundShape  
 Indicates whether a specified toolbar is round.  
  
```  
virtual BOOL IsToolbarRoundShape(CMFCToolBar* pToolBar);
```  
  
### Parameters  
 [in] `pToolBar`  
 Pointer to the toolbar in question.  
  
### Return Value  
 Returns `TRUE` if the toolbar is round, or `FALSE` if it is a menu bar.  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2003__isuseglobaltheme"></a>  CMFCVisualManagerOffice2003::IsUseGlobalTheme  
 Indicates whether your application uses a Windows XP theme.  
  
```  
static BOOL IsUseGlobalTheme();
```  
  
### Return Value  
 `TRUE` if the visual manager uses a Windows XP theme; otherwise, `FALSE`.  
  
### Remarks  
 Use the method [CMFCVisualManagerOffice2003::SetUseGlobalTheme](#cmfcvisualmanageroffice2003__setuseglobaltheme) to change whether your visual manager uses a Windows XP theme.  
  
##  <a name="cmfcvisualmanageroffice2003__iswindowsthemingsupported"></a>  CMFCVisualManagerOffice2003::IsWindowsThemingSupported  
 Indicates whether Windows theming is supported.  
  
```  
virtual BOOL IsWindowsThemingSupported() const;

 
```  
  
### Return Value  
 Returns `TRUE` if Windows theming is supported, or `FALSE` if not.  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2003__ondrawautohidebuttonborder"></a>  CMFCVisualManagerOffice2003::OnDrawAutoHideButtonBorder  
 The framework calls this method when it draws the border of an auto-hide button.  
  
```  
virtual void OnDrawAutoHideButtonBorder(
    CDC* pDC,  
    CRect rectBounds,  
    CRect rectBorderSize,  
    CMFCAutoHideButton* pButton);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rectBounds`  
 The size and location of the auto-hide button.  
  
 [in] `rectBorderSize`  
 The sizes of the borders.  
  
 [in] `pButton`  
 A pointer to the auto-hide button. The framework is drawing the border for this button.  
  
### Remarks  
 Override this method in a derived class if you want to customize the appearance of the border of an auto-hide button. By default, this method fills a flat border with the default shadow color for your application.  
  
 The `rectBorderSize` parameter does not contain the coordinates of the border. It contains the size of the border in the `top`, `bottom`, `left`, and `right` data members. A value less than or equal to 0 indicates no border on that side of the auto-hide button.  
  
##  <a name="cmfcvisualmanageroffice2003__ondrawbargripper"></a>  CMFCVisualManagerOffice2003::OnDrawBarGripper  
 Called by the framework when it draws the gripper for a control bar.  
  
```  
virtual void OnDrawBarGripper(
    CDC* pDC,  
    CRect rectGripper,  
    BOOL bHorz,  
    CBasePane* pBar);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to the device context for a control bar.  
  
 [in] `rectGripper`  
 The bounding rectangle for the control bar.  
  
 [in] `bHorz`  
 A Boolean parameter that specifies whether the control bar is docked horizontally or vertically.  
  
 [in] `pBar`  
 A pointer to a control bar. The visual manager draws the gripper of this control bar.  
  
### Remarks  
 The default implementation of this method displays the standard gripper. To customize the appearance of the gripper, override this method in a custom class derived from the [CMFCVisualManagerOffice2003](../../mfc/reference/cmfcvisualmanageroffice2003-class.md) Class.  
  
##  <a name="cmfcvisualmanageroffice2003__ondrawbrowsebutton"></a>  CMFCVisualManagerOffice2003::OnDrawBrowseButton  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL OnDrawBrowseButton(
    CDC* pDC,  
    CRect rect,  
    CMFCEditBrowseCtrl* pEdit,  
    CMFCVisualManager::AFX_BUTTON_STATE state,  
    COLORREF& clrText);
```  
  
### Parameters  
 [in] `pDC`  
 [in] `rect`  
 [in] `pEdit`  
 [in] `state`  
 [in] `clrText`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2003__ondrawbuttonborder"></a>  CMFCVisualManagerOffice2003::OnDrawButtonBorder  
 The framework calls this method when it draws the border of a toolbar button.  
  
```  
virtual void OnDrawButtonBorder(
    CDC* pDC,  
    CMFCToolBarButton* pButton,  
    CRect rect,  
    CMFCVisualManager::AFX_BUTTON_STATE state);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to the device context of a toolbar button.  
  
 [in] `pButton`  
 A pointer to a toolbar button. The framework draws the border of this button.  
  
 [in] `rect`  
 A rectangle that specifies the boundaries of the toolbar button.  
  
 [in] `state`  
 An enumerated data type that specifies the current state of the toolbar button.  
  
### Remarks  
 The default implementation of this method displays the standard border. Override this method in a derived visual manager to customize the appearance of the border of a toolbar button.  
  
 The possible states of a toolbar button are `ButtonsIsRegular`, `ButtonsIsPressed`, or `ButtonsIsHighlighted`.  
  
##  <a name="cmfcvisualmanageroffice2003__ondrawcaptionbarborder"></a>  CMFCVisualManagerOffice2003::OnDrawCaptionBarBorder  
 The framework calls this method when it draws the border of a [CMFCCaptionBar Class](../../mfc/reference/cmfccaptionbar-class.md) object.  
  
```  
virtual void OnDrawCaptionBarBorder(
    CDC* pDC,  
    CMFCCaptionBar* pBar,  
    CRect rect,  
    COLORREF clrBarBorder,  
    BOOL bFlatBorder);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `pBar`  
 A pointer to a [CMFCCaptionBar Class](../../mfc/reference/cmfccaptionbar-class.md) object. The framework draws this caption bar.  
  
 [in] `rect`  
 A rectangle that specifies the boundaries of the caption bar.  
  
 [in] `clrBarBorder`  
 The color of the border.  
  
 [in] `bFlatBorder`  
 `TRUE` if the border should have a flat, 2D appearance, or `FALSE` if not.  
  
### Remarks  
 Override this method in a derived class to customize the appearance of the border of a caption bar.  
  
##  <a name="cmfcvisualmanageroffice2003__ondrawcheckboxex"></a>  CMFCVisualManagerOffice2003::OnDrawCheckBoxEx  
 Called by the framework when drawing a checkbox.  
  
```  
virtual void OnDrawCheckBoxEx(
    CDC* pDC,  
    CRect rect,  
    int nState,  
    BOOL bHighlighted,  
    BOOL bPressed,  
    BOOL bEnabled);
```  
  
### Parameters  
 [in] `pDC`  
 Pointer to a device context.  
  
 [in] `rect`  
 The bounding rectangle of the checkbox.  
  
 [in] `nState`  
 The state of the checkbox: 0 if unchecked, 1 if checked, 2 if checked mixed.  
  
 [in] `bHighlighted`  
 `TRUE` if the checkbox is highlighted, or `FALSE` if not.  
  
 [in] `bPressed`  
 `TRUE` if the checkbox is pressed, or `FALSE` if not.  
  
 [in] `bEnabled`  
 `TRUE` if the checkbox is enabled, or `FALSE` if not.  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2003__ondrawcomboborder"></a>  CMFCVisualManagerOffice2003::OnDrawComboBorder  
 The framework calls this method when it draws the border around an instance of a [CMFCToolBarComboBoxButton Class](../../mfc/reference/cmfctoolbarcomboboxbutton-class.md).  
  
```  
virtual void OnDrawComboBorder(
    CDC* pDC,  
    CRect rect,  
    BOOL bDisabled,  
    BOOL bIsDropped,  
    BOOL bIsHighlighted,  
    CMFCToolBarComboBoxButton* pButton);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to the device context of a combo box button.  
  
 [in] `rect`  
 A rectangle that specifies the boundaries of the combo box button.  
  
 [in] `bDisabled`  
 A Boolean parameter that indicates whether the combo box button is unavailable.  
  
 [in] `bIsDropped`  
 A Boolean parameter that indicates whether the combo box is dropped down.  
  
 [in] `bIsHighlighted`  
 A Boolean parameter that indicates whether the combo box button is highlighted.  
  
 [in] `pButton`  
 A pointer to a `CMFCToolBarComboBoxButton` object. The framework draws this combo box button.  
  
### Remarks  
 Override this method in your derived visual manager to customize the appearance of the border of the combo box.  
  
##  <a name="cmfcvisualmanageroffice2003__ondrawcombodropbutton"></a>  CMFCVisualManagerOffice2003::OnDrawComboDropButton  
 The framework calls this method when it draws the drop button of a [CMFCToolBarComboBoxButton Class](../../mfc/reference/cmfctoolbarcomboboxbutton-class.md).  
  
```  
virtual void OnDrawComboDropButton(
    CDC* pDC,  
    CRect rect,  
    BOOL bDisabled,  
    BOOL bIsDropped,  
    BOOL bIsHighlighted,  
    CMFCToolBarComboBoxButton* pButton);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rect`  
 A rectangle that specifies the boundaries of the drop button.  
  
 [in] `bDisabled`  
 A Boolean parameter that indicates whether the drop button is unavailable.  
  
 [in] `bIsDropped`  
 A Boolean parameter that indicates whether the combo box is dropped down.  
  
 [in] `bIsHighlighted`  
 A Boolean parameter that indicates whether the drop button is highlighted.  
  
 [in] `pButton`  
 A pointer to a `CMFCToolBarComboBoxButton` object. The framework draws the drop button for this combo box button  
  
### Remarks  
 Override this method in your derived visual manager to customize the appearance of the drop button of a combo box button.  
  
##  <a name="cmfcvisualmanageroffice2003__ondrawcontrolborder"></a>  CMFCVisualManagerOffice2003::OnDrawControlBorder  
 The framework calls this method when it draws the border of a control.  
  
```  
virtual void OnDrawControlBorder(CWnd* pWndCtrl);
```  
  
### Parameters  
 [in] `pWndCtrl`  
 Pointer to a [CWnd Class](../../mfc/reference/cwnd-class.md) object representing the control for which to draw the border.  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2003__ondrawexpandingbox"></a>  CMFCVisualManagerOffice2003::OnDrawExpandingBox  
 Called by the framework while drawing an expanding box.  
  
```  
virtual void OnDrawExpandingBox(
    CDC* pDC,  
    CRect rect,  
    BOOL bIsOpened,  
    COLORREF colorBox);
```  
  
### Parameters  
 [in] `pDC`  
 Pointer to the display context in which the expanding box is to be drawn.  
  
 [in] `rect`  
 The bounding rectangle of the expanding box to be drawn.  
  
 [in] `bIsOpened`  
 `TRUE` if the box to be drawn is opened, or `FALSE` if not.  
  
 [in] `colorBox`  
 The color of the outside border of the box to be drawn.  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2003__ondrawheaderctrlborder"></a>  CMFCVisualManagerOffice2003::OnDrawHeaderCtrlBorder  
 The framework calls this method when it draws the border around an instance of the [CMFCHeaderCtrl Class](../../mfc/reference/cmfcheaderctrl-class.md).  
  
```  
virtual void OnDrawHeaderCtrlBorder(
    CMFCHeaderCtrl* pCtrl,  
    CDC* pDC,  
    CRect& rect,  
    BOOL bIsPressed,  
    BOOL bIsHighlighted);
```  
  
### Parameters  
 [in] `pCtrl`  
 A pointer to a [CMFCHeaderCtrl Class](../../mfc/reference/cmfcheaderctrl-class.md) object. The framework draws the border of this header control.  
  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rect`  
 A rectangle that specifies the boundaries of the header control.  
  
 [in] `bIsPressed`  
 [in] `bIsHighlighted`  
 A Boolean parameter that indicates whether the header control is pressed.  
  
### Remarks  
 Override this method in a derived visual manager to customize the border of the header control.  
  
##  <a name="cmfcvisualmanageroffice2003__ondrawmenuborder"></a>  CMFCVisualManagerOffice2003::OnDrawMenuBorder  
 The framework calls this method when it draws the border of a [CMFCPopupMenu Class](../../mfc/reference/cmfcpopupmenu-class.md).  
  
```  
virtual void OnDrawMenuBorder(
    CDC* pDC,  
    CMFCPopu* pMenu,  
    CRect rect);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to the device context for a [CMFCPopupMenu Class](../../mfc/reference/cmfcpopupmenu-class.md) object.  
  
 [in] `pMenu`  
 A pointer to a [CMFCPopupMenu Class](../../mfc/reference/cmfcpopupmenu-class.md) object. The framework draws a border around this popup menu.  
  
 [in] `rect`  
 A rectangle that specifies the boundaries of the popup menu.  
  
### Remarks  
 The default implementation of this method displays the standard menu border. Override this method in a derived visual manager to customize the appearance of the menu border.  
  
##  <a name="cmfcvisualmanageroffice2003__ondrawoutlookbarsplitter"></a>  CMFCVisualManagerOffice2003::OnDrawOutlookBarSplitter  
 The framework calls this method when it draws the splitter for an Outlook bar.  
  
```  
virtual void OnDrawOutlookBarSplitter(
    CDC* pDC,  
    CRect rectSplitter);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rectSplitter`  
 A rectangle that specifies the boundaries of the splitter.  
  
### Remarks  
 Override this method in a derived visual manager to customize the appearance of splitters on an Outlook bar.  
  
##  <a name="cmfcvisualmanageroffice2003__ondrawoutlookpagebuttonborder"></a>  CMFCVisualManagerOffice2003::OnDrawOutlookPageButtonBorder  
 Called by the framework when it draws the border of an Outlook page button.  
  
```  
virtual void OnDrawOutlookPageButtonBorder(
    CDC* pDC,  
    CRect& rectBtn,  
    BOOL bIsHighlighted,  
    BOOL bIsPressed);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rectBtn`  
 A rectangle that specifies the boundary of the Outlook page button.  
  
 [in] `bIsHighlighted`  
 A Boolean that specifies whether the button is highlighted.  
  
 [in] `bIsPressed`  
 A Boolean that specifies whether the button is pressed.  
  
### Remarks  
 Override this method in a custom visual manager to change the appearance of the Outlook page button.  
  
##  <a name="cmfcvisualmanageroffice2003__ondrawpaneborder"></a>  CMFCVisualManagerOffice2003::OnDrawPaneBorder  
 The framework calls this method when it draws the border of a [CPane Class](../../mfc/reference/cpane-class.md) object.  
  
```  
virtual void OnDrawPaneBorder(
    CDC* pDC,  
    CBasePane* pBar,  
    CRect& rect);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to the device context of a control bar.  
  
 [in] `pBar`  
 A pointer to a pane. The visual manager draws the border of this pane.  
  
 [in] `rect`  
 A rectangle that indicates the boundaries of the pane.  
  
### Remarks  
 The default implementation of this method displays the standard border. Override this method in a derived class to customize the appearance of the border.  
  
##  <a name="cmfcvisualmanageroffice2003__ondrawpanecaption"></a>  CMFCVisualManagerOffice2003::OnDrawPaneCaption  
 The framework calls this method when it draws a caption for a [CDockablePane Class](../../mfc/reference/cdockablepane-class.md) object.  
  
```  
virtual COLORREF OnDrawPaneCaption(
    CDC* pDC,  
    CDockablePane* pBar,  
    BOOL bActive,  
    CRect rectCaption,  
    CRect rectButtons);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `pBar`  
 A pointer to a [CDockablePane Class](../../mfc/reference/cdockablepane-class.md) object. The framework draws the caption for this pane.  
  
 [in] `bActive`  
 A Boolean parameter that indicates whether the control bar is active.  
  
 [in] `rectCaption`  
 A rectangle that specifies the boundaries of the caption.  
  
 [in] `rectButtons`  
 A rectangle that specifies the boundaries of the caption buttons.  
  
### Return Value  
 A [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) parameter that indicates the text color of the caption.  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2003__ondrawpopupwindowborder"></a>  CMFCVisualManagerOffice2003::OnDrawPopupWindowBorder  
 The framework calls this method when it draws the border of a popup window.  
  
```  
virtual void OnDrawPopupWindowBorder(
    CDC* pDC,  
    CRect rect);
```  
  
### Parameters  
 [in] `pDC`  
 Pointer to the device context of the popup window.  
  
 [in] `rect`  
 The bounding rectangle of the popup window.  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2003__ondrawpopupwindowbuttonborder"></a>  CMFCVisualManagerOffice2003::OnDrawPopupWindowButtonBorder  
 The framework calls this method when it draws the border of button in a popup window.  
  
```  
virtual void OnDrawPopupWindowButtonBorder(
    CDC* pDC,  
    CRect rectClient,  
    CMFCDesktopAlertWndButton* pButton);
```  
  
### Parameters  
 [in] `pDC`  
 Pointer to the device context of the button.  
  
 [in] `rectClient`  
 Bounding rectangle of the button.  
  
 [in] `pButton`  
 Pointer to the button (a [CMFCDesktopAlertWndButton Class](../../mfc/reference/cmfcdesktopalertwndbutton-class.md) object).  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2003__ondrawpopupwindowcaption"></a>  CMFCVisualManagerOffice2003::OnDrawPopupWindowCaption  
 The framework calls this method when it draws the caption of a popup window.  
  
```  
virtual COLORREF OnDrawPopupWindowCaption(
    CDC* pDC,  
    CRect rectCaption,  
    CMFCDesktopAlertWnd* pPopupWnd);
```  
  
### Parameters  
 [in] `pDC`  
 Pointer to the device context of the caption.  
  
 [in] `rectCaption`  
 Bounding rectangle of the caption.  
  
 [in] `pPopupWnd`  
 Pointer to the popup window for which the caption is to be drawn.  
  
### Return Value  
 The text color of the caption.  
  
### Remarks  
 Override this method in a derived visual manager to customize the appearance of popup-window captions.  
  
##  <a name="cmfcvisualmanageroffice2003__ondrawribbonbuttonsgroup"></a>  CMFCVisualManagerOffice2003::OnDrawRibbonButtonsGroup  
 The framework calls this method when it draws a group of buttons on the ribbon.  
  
```  
virtual COLORREF OnDrawRibbonButtonsGroup(
    CDC* pDC,  
    CMFCRibbonButtonsGroup* pGroup,  
    CRect rectGroup);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `pGroup`  
 A pointer to a group of buttons on the ribbon. The framework draws this group of buttons.  
  
 [in] `rectGroup`  
 A rectangle that specifies the boundaries of the group.  
  
### Return Value  
 A reserved value. The default implementation returns -1.  
  
### Remarks  
 Override this method in a derived visual manager to customize the appearance of a group of buttons on the ribbon.  
  
##  <a name="cmfcvisualmanageroffice2003__ondrawribboncategorycaption"></a>  CMFCVisualManagerOffice2003::OnDrawRibbonCategoryCaption  
 The framework calls this method when it draws the caption bar for a ribbon category.  
  
```  
virtual COLORREF OnDrawRibbonCategoryCaption(
    CDC* pDC,  
    CMFCRibbonContextCaption* pContextCaption);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to the device context of the ribbon category.  
  
 [in] `pContextCaption`  
 A pointer to a caption bar. The visual manager draws this [CMFCRibbonContextCaption Class](../../mfc/reference/cmfcribboncontextcaption-class.md).  
  
### Return Value  
 A [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) parameter that indicates the color of the text on the caption bar.  
  
### Remarks  
 Override this method in a derived class to customize the appearance of the caption bar for a ribbon category.  
  
##  <a name="cmfcvisualmanageroffice2003__ondrawribboncategorytab"></a>  CMFCVisualManagerOffice2003::OnDrawRibbonCategoryTab  
 The framework calls this method when it draws the tab for a ribbon category.  
  
```  
virtual COLORREF OnDrawRibbonCategoryTab(
    CDC* pDC,  
    CMFCRibbonTab* pTab,  
    BOOL bIsActive);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `pTab`  
 A pointer to a ribbon tab object. The framework draws this tab.  
  
 [in] `bIsActive`  
 `TRUE` if the tab is active, or `FALSE` if not.  
  
### Return Value  
 The color that is used for text on the ribbon category tab.  
  
### Remarks  
 Override this method in a derived visual manager to customize the appearance of a ribbon category tab.  
  
##  <a name="cmfcvisualmanageroffice2003__ondrawribbonprogressbar"></a>  CMFCVisualManagerOffice2003::OnDrawRibbonProgressBar  
 The framework calls this method when it draws a [CMFCRibbonProgressBar Class](../../mfc/reference/cmfcribbonprogressbar-class.md)object.  
  
```  
virtual void OnDrawRibbonProgressBar(
    CDC* pDC,  
    CMFCRibbonProgressBar* pProgress,  
    CRect rectProgress,  
    CRect rectChunk,  
    BOOL bInfiniteMode);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `pProgress`  
 A pointer to a [CMFCRibbonProgressBar Class](../../mfc/reference/cmfcribbonprogressbar-class.md) object. The framework draws this progress bar.  
  
 [in] `rectProgress`  
 A rectangle that specifies the boundaries of the progress bar.  
  
 [in] `rectChunk`  
 A rectangle that specifies the boundaries of the area surrounding the progress bar.  
  
 [in] `bInfiniteMode`  
 `TRUE` if the bar is in infinite mode, or `FALSE` if not. The default implementation does not use this parameter.  
  
### Remarks  
 Override this method in a derived class to customize the appearance of a progress bar  
  
##  <a name="cmfcvisualmanageroffice2003__ondrawribbonquickaccesstoolbarseparator"></a>  CMFCVisualManagerOffice2003::OnDrawRibbonQuickAccessToolBarSeparator  
 The framework calls this method when it draws a separator on the Quick Access Toolbar of a ribbon.  
  
```  
virtual void OnDrawRibbonQuickAccessToolBarSeparator(
    CDC* pDC,  
    CMFCRibbonSeparator* pSeparator,  
    CRect rect);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `pSeparator`  
 A pointer to a [CMFCRibbonSeparator Class](../../mfc/reference/cmfcribbonseparator-class.md) object. The framework draws this ribbon separator.  
  
 [in] `rect`  
 A rectangle that specifies the boundaries of the separator.  
  
### Remarks  
 Override this method in a derived class to customize the appearance of ribbon separators on the Quick Access Toolbar.  
  
##  <a name="cmfcvisualmanageroffice2003__ondrawribbonsliderchannel"></a>  CMFCVisualManagerOffice2003::OnDrawRibbonSliderChannel  
 The framework calls this method when it draws the channel of a [CMFCRibbonSlider Class](../../mfc/reference/cmfcribbonslider-class.md).  
  
```  
virtual void OnDrawRibbonSliderChannel(
    CDC* pDC,  
    CMFCRibbonSlider* pSlider,  
    CRect rect);
```  
  
### Parameters  
 [in] `pDC`  
 Pointer to a device context.  
  
 [in] `pSlider`  
 A pointer to a [CMFCRibbonSlider Class](../../mfc/reference/cmfcribbonslider-class.md) object. The framework draws the channel for this ribbon slider.  
  
 [in] `rect`  
 A rectangle that specifies the boundaries for the channel of the ribbon slider.  
  
### Remarks  
 Override this method in a derived class to customize the appearance of the channel of the ribbon slider.  
  
##  <a name="cmfcvisualmanageroffice2003__ondrawribbonsliderthumb"></a>  CMFCVisualManagerOffice2003::OnDrawRibbonSliderThumb  
 The framework calls this method when it draws the thumb of a [CMFCRibbonSlider Class](../../mfc/reference/cmfcribbonslider-class.md) object  
  
```  
virtual void OnDrawRibbonSliderThumb(
    CDC* pDC,  
    CMFCRibbonSlider* pSlider,  
    CRect rect,  
    BOOL bIsHighlighted,  
    BOOL bIsPressed,  
    BOOL bIsDisabled);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `pSlider`  
 A pointer to a [CMFCRibbonSlider Class](../../mfc/reference/cmfcribbonslider-class.md). The framework draws the thumb for this ribbon slider.  
  
 [in] `rect`  
 A rectangle that specifies the boundaries of the thumb for the ribbon slider.  
  
 [in] `bIsHighlighted`  
 A Boolean parameter that indicates whether the thumb is highlighted.  
  
 [in] `bIsPressed`  
 A Boolean parameter that indicates whether the thumb is pressed.  
  
 [in] `bIsDisabled`  
 A Boolean parameter that indicates whether the thumb is unavailable.  
  
### Remarks  
 Override this method in a derived visual manager to customize the appearance of the thumb for a ribbon slider.  
  
##  <a name="cmfcvisualmanageroffice2003__ondrawribbonsliderzoombutton"></a>  CMFCVisualManagerOffice2003::OnDrawRibbonSliderZoomButton  
 The framework calls this method when it draws the zoom buttons for a [CMFCRibbonSlider Class](../../mfc/reference/cmfcribbonslider-class.md) object.  
  
```  
virtual void OnDrawRibbonSliderZoomButton(
    CDC* pDC,  
    CMFCRibbonSlider* pSlider,  
    CRect rect,  
    BOOL bIsZoomOut,  
    BOOL bIsHighlighted,  
    BOOL bIsPressed,  
    BOOL bIsDisabled);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `pSlider`  
 A pointer to a [CMFCRibbonSlider Class](../../mfc/reference/cmfcribbonslider-class.md) object. The framework draws this ribbon slider.  
  
 [in] `rect`  
 A rectangle that specifies the boundaries of the zoom buttons on the ribbon slider.  
  
 [in] `bIsZoomOut`  
 `TRUE` if the framework should draw the left button with a " **-**" for zoom out, or `FALSE` if the framework should draw the right button with a " **+**" for zoom in.  
  
 [in] `bIsHighlighted`  
 A Boolean parameter that indicates whether the button is highlighted.  
  
 [in] `bIsPressed`  
 A Boolean parameter that indicates whether the button is pressed.  
  
 [in] `bIsDisabled`  
 A Boolean parameter that indicates whether the button is unavailable.  
  
### Remarks  
 By default, the zoom buttons on the ribbon slider are a circle with either a **+** or **-** sign in the center. To customize the appearance of zoom buttons, override this method in a derived visual manager.  
  
##  <a name="cmfcvisualmanageroffice2003__ondrawribbonstatusbarpane"></a>  CMFCVisualManagerOffice2003::OnDrawRibbonStatusBarPane  
 The framework calls this method when it draws a pane on the status bar.  
  
```  
virtual COLORREF OnDrawRibbonStatusBarPane(
    CDC* pDC,  
    CMFCRibbonStatusBar* pBar,  
    CMFCRibbonStatusBarPane* pPane);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `pBar`  
 A pointer to the status bar that contains the pane.  
  
 [in] `pPane`  
 A pointer to a status bar pane. The framework draws this [CMFCRibbonStatusBarPane Class](../../mfc/reference/cmfcribbonstatusbarpane-class.md) object.  
  
### Return Value  
 A reserved value. The default implementation returns -1.  
  
### Remarks  
 Override this method in a derived visual manager to customize the appearance of a pane on the status bar.  
  
##  <a name="cmfcvisualmanageroffice2003__ondrawscrollbuttons"></a>  CMFCVisualManagerOffice2003::OnDrawScrollButtons  
 The framework calls this method when it draws scroll buttons.  
  
```  
virtual void OnDrawScrollButtons(
    CDC* pDC,  
    const CRect& rect,  
    const int nBorderSize,  
    int iImage,  
    BOOL bHilited);
```  
  
### Parameters  
 [in] `pDC`  
 Pointer to a device context.  
  
 [in] `rect`  
 The bounding rectangle of the scroll buttons.  
  
 [in] `nBorderSize`  
 The size of the border to draw around the scroll buttons.  
  
 [in] `iImage`  
 An identifier of the image to draw in the scroll buttons.  
  
 [in] `bHilited`  
 `TRUE` if the scroll buttons are highlighted, or `FALSE` if not.  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2003__ondrawseparator"></a>  CMFCVisualManagerOffice2003::OnDrawSeparator  
 The framework calls this method when it draws a separator.  
  
```  
virtual void OnDrawSeparator(
    CDC* pDC,  
    CBasePane* pBar,  
    CRect rect,  
    BOOL bIsHoriz);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to the device context for a control bar.  
  
 [in] `pBar`  
 A pointer to a pane that contains the separator.  
  
 [in] `rect`  
 A rectangle that specifies the boundaries of the separator.  
  
 [in] `bIsHoriz`  
 `TRUE` if the pane is docked horizontally, or `FALSE` if the pane is docked vertically.  
  
### Remarks  
 Separators are used on control bars to separate groups of related icons. The default implementation for this method displays the standard separator. Override this method in a derived visual manager to customize the appearance of the separator.  
  
##  <a name="cmfcvisualmanageroffice2003__ondrawshowallmenuitems"></a>  CMFCVisualManagerOffice2003::OnDrawShowAllMenuItems  
 The framework calls this method when it draws all the items in a menu  
  
```  
virtual void OnDrawShowAllMenuItems(
    CDC* pDC,  
    CRect rect,  
    CMFCVisualManager::AFX_BUTTON_STATE state);
```  
  
### Parameters  
 [in] `pDC`  
 Pointer to a device context.  
  
 [in] `rect`  
 The bounding rectangle of the menu to be drawn.  
  
 [in] `state`  
 The button state.  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2003__ondrawstatusbarpaneborder"></a>  CMFCVisualManagerOffice2003::OnDrawStatusBarPaneBorder  
 The framework calls this method when it draws the border for a [CMFCStatusBar Class](../../mfc/reference/cmfcstatusbar-class.md) object.  
  
```  
virtual void OnDrawStatusBarPaneBorder(
    CDC* pDC,  
    CMFCStatusBar* pBar,  
    CRect rectPane,  
    UINT uiID,  
    UINT nStyle);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `pBar`  
 A pointer to a [CMFCStatusBar Class](../../mfc/reference/cmfcstatusbar-class.md) object. The framework draws this status bar object.  
  
 [in] `rectPane`  
 A rectangle that specifies the boundaries of the status bar.  
  
 [in] `uiID`  
 The ID of the status bar.  
  
 [in] `nStyle`  
 The style of the status bar.  
  
### Remarks  
 Override this method in a derived visual manager to customize the appearance of the border for a `CMFCStatusBar` object.  
  
##  <a name="cmfcvisualmanageroffice2003__ondrawstatusbarprogress"></a>  CMFCVisualManagerOffice2003::OnDrawStatusBarProgress  
 The framework calls this method when it draws the progress indicator on the [CMFCStatusBar Class](../../mfc/reference/cmfcstatusbar-class.md) object  
  
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
    BOOL bProgressText);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to the device context for the status bar  
  
 [in] `pStatusBar`  
 The [CMFCStatusBar Class](../../mfc/reference/cmfcstatusbar-class.md) object that contains the progress bar.  
  
 [in] `rectProgress`  
 A rectangle that specifies the boundaries of the progress bar.  
  
 [in] `nProgressTotal`  
 The total number for the progress bar.  
  
 [in] `nProgressCurr`  
 The current progress for the progress bar.  
  
 [in] `clrBar`  
 The initial color for the progress bar. The value is either the start of a color gradient or the complete color of the progress bar.  
  
 [in] `clrProgressBarDest`  
 [in] `clrProgressText`  
 [in] `bProgressText`  
  
### Remarks  
 Override this method in a derived visual manager to customize the appearance of the progress bar on a status bar.  
  
##  <a name="cmfcvisualmanageroffice2003__ondrawstatusbarsizebox"></a>  CMFCVisualManagerOffice2003::OnDrawStatusBarSizeBox  
 The framework calls this method when it draws the size box for a [CMFCStatusBar Class](../../mfc/reference/cmfcstatusbar-class.md).  
  
```  
virtual void OnDrawStatusBarSizeBox(
    CDC* pDC,  
    CMFCStatusBar* pStatBar,  
    CRect rectSizeBox);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `pStatBar`  
 A pointer to a status bar. The framework draws the size box for this status bar.  
  
 [in] `rectSizeBox`  
 A rectangle that specifies the boundaries of the size box.  
  
### Remarks  
 Override this method in a derived visual manager to customize the appearance of the size box on a status bar.  
  
##  <a name="cmfcvisualmanageroffice2003__ondrawtab"></a>  CMFCVisualManagerOffice2003::OnDrawTab  
 The framework calls this method when it draws the tabs for a [CMFCBaseTabCtrl Class](../../mfc/reference/cmfcbasetabctrl-class.md) object.  
  
```  
virtual void OnDrawTab(
    CDC* pDC,  
    CRect rectTab,  
    int iTab,  
    BOOL bIsActive,  
    const CMFCBaseTabCtrl* pTabWnd);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rectTab`  
 A rectangle that specifies the boundaries of the tab control.  
  
 [in] `iTab`  
 The index of the tab that the framework draws.  
  
 [in] `bIsActive`  
 A Boolean parameter that specifies whether the tab is active.  
  
 [in] `pTabWnd`  
 A pointer to a [CMFCBaseTabCtrl Class](../../mfc/reference/cmfcbasetabctrl-class.md) object. The framework draws this tab control.  
  
### Remarks  
 A `CMFCBaseTabCtrl` object calls this method when it processes the `WM_PAINT` message.Override this method in a derived class to customize the look of tabs.  
  
##  <a name="cmfcvisualmanageroffice2003__ondrawtabsbuttonborder"></a>  CMFCVisualManagerOffice2003::OnDrawTabsButtonBorder  
 The framework calls this method when it draws the border of a tab button.  
  
```  
virtual void OnDrawTabsButtonBorder(
    CDC* pDC,  
    CRect& rect,  
    CMFCButton* pButton,  
    UINT uiState,  
    CMFCBaseTabCtrl* pWndTab);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rect`  
 A rectangle that specifies the boundaries of the tab button.  
  
 [in] `pButton`  
 A pointer to the [CMFCButton Class](../../mfc/reference/cmfcbutton-class.md) for which the framework draws the border.  
  
 [in] `uiState`  
 The state of the button (see [CButton::GetState](../../mfc/reference/cbutton-class.md#cbutton__getstate)).  
  
 [in] `pWndTab`  
 A pointer to the parent tab window.  
  
### Remarks  
 Override this method in a derived visual manager to customize the appearance of the border of the tab button.  
  
##  <a name="cmfcvisualmanageroffice2003__ondrawtask"></a>  CMFCVisualManagerOffice2003::OnDrawTask  
 The framework calls this method when it draws a [CMFCTasksPaneTask Class](../../mfc/reference/cmfctaskspanetask-class.md) object.  
  
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
 A pointer to a device context.  
  
 [in] `pTask`  
 A pointer to a [CMFCTasksPaneTask Class](../../mfc/reference/cmfctaskspanetask-class.md) object. The framework draws this task.  
  
 [in] `pIcons`  
 A pointer to the image list associated with the task pane. Each task contains an index for an image in this list.  
  
 [in] `bIsHighlighted`  
 A Boolean parameter that specifies whether the displayed task is highlighted.  
  
 [in] `bIsSelected`  
 A Boolean parameter that specifies whether the displayed task is selected.  
  
### Remarks  
 The framework displays tasks on the task bar as both an icon and text. The `pIcons` parameter contains the icon for the task indicated by `pTask`. Override this method in a derived class to customize the appearance of tasks on the task bar.  
  
##  <a name="cmfcvisualmanageroffice2003__ondrawtasksgroupareaborder"></a>  CMFCVisualManagerOffice2003::OnDrawTasksGroupAreaBorder  
 The framework calls this method when it draws a border around a group on a [CMFCTasksPane Class](../../mfc/reference/cmfctaskspane-class.md) object.  
  
```  
virtual void OnDrawTasksGroupAreaBorder(
    CDC* pDC,  
    CRect rect,  
    BOOL bSpecial = FALSE,  
    BOOL bNoTitle = FALSE);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rect`  
 A rectangle that specifies the boundaries of the group area on the task pane.  
  
 [in] `bSpecial`  
 A Boolean parameter that specifies if the border is highlighted. A value of `TRUE` indicates that the border is highlighted.  
  
 [in] `bNoTitle`  
 A Boolean parameter that specifies whether the group area has a title. A value of `TRUE` indicates that the group area does not have a title.  
  
### Remarks  
 Override this function in a derived class to customize the border around a group area on the task pane.  
  
##  <a name="cmfcvisualmanageroffice2003__ondrawtasksgroupcaption"></a>  CMFCVisualManagerOffice2003::OnDrawTasksGroupCaption  
 The framework calls this method when it draws the caption for a [CMFCTasksPaneTaskGroup Class](../../mfc/reference/cmfctaskspanetaskgroup-class.md) object.  
  
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
 A pointer to a device context.  
  
 [in] `pGroup`  
 A pointer to a [CMFCTasksPaneTaskGroup Class](../../mfc/reference/cmfctaskspanetaskgroup-class.md) object. The framework draws the caption for this group.  
  
 [in] `bIsHighlighted`  
 A Boolean parameter that indicates whether the group is highlighted.  
  
 [in] `bIsSelected`  
 A Boolean parameter that indicates whether the group is currently selected.  
  
 [in] `bCanCollapse`  
 A Boolean parameter that indicates whether the group can be collapsed.  
  
### Remarks  
 Override this method in a derived class to customize the caption for a `CMFCTasksPaneTaskGroup`.  
  
##  <a name="cmfcvisualmanageroffice2003__ondrawtearoffcaption"></a>  CMFCVisualManagerOffice2003::OnDrawTearOffCaption  
 The framework calls this method when it draws the caption for a [CMFCPopupMenu Class](../../mfc/reference/cmfcpopupmenu-class.md) object.  
  
```  
virtual void OnDrawTearOffCaption(
    CDC* pDC,  
    CRect rect,  
    BOOL bIsActive);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rect`  
 A rectangle that specifies the boundaries of the caption.  
  
 [in] `bIsActive`  
 `TRUE` if the caption is active; `FALSE` otherwise.  
  
### Remarks  
 This function is called by the framework when a [CMFCPopupMenu Class](../../mfc/reference/cmfcpopupmenu-class.md) object processes a `WM_PAINT` message and must draw a tear-off caption.  
  
 Override this method in a derived class to customize the look of captions for tear-off bars.  
  
##  <a name="cmfcvisualmanageroffice2003__onerasepopupwindowbutton"></a>  CMFCVisualManagerOffice2003::OnErasePopupWindowButton  
 The framework calls this method when it erases a button in a popup window.  
  
```  
virtual void OnErasePopupWindowButton(
    CDC* pDC,  
    CRect rectClient,  
    CMFCDesktopAlertWndButton* pButton);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rectClient`  
 The rectangle that specifies the client area of the popup window.  
  
 [in] `pButton`  
 Pointer to the button to be erased.  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2003__onerasetabsarea"></a>  CMFCVisualManagerOffice2003::OnEraseTabsArea  
 The framework calls this method when it erases the tab area of a tab window.  
  
```  
virtual void OnEraseTabsArea(
    CDC* pDC,  
    CRect rect,  
    const CMFCBaseTabCtrl* pTabWnd);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rect`  
 A rectangle that specifies the boundaries of the tab area.  
  
 [in] `pTabWnd`  
 A pointer to a tab window. The framework erases the tab area for the specified tab window.  
  
### Remarks  
 This function is called by the framework when a [CMFCBaseTabCtrl Class](../../mfc/reference/cmfcbasetabctrl-class.md) object processes a `WM_PAINT` message and erases the tab area.  
  
 Override this method in a derived visual manager to customize the appearance of tabs.  
  
##  <a name="cmfcvisualmanageroffice2003__onerasetabsbutton"></a>  CMFCVisualManagerOffice2003::OnEraseTabsButton  
 The framework calls this method when it erases the text and icon of a tab button.  
  
```  
virtual void OnEraseTabsButton(
    CDC* pDC,  
    CRect rect,  
    CMFCButton* pButton,  
    CMFCBaseTabCtrl* pWndTab);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rect`  
 A rectangle that specifies the boundaries of the tab button.  
  
 [in] `pButton`  
 A pointer to a tab button. The framework erases the text and icon for this button.  
  
 [in] `pWndTab`  
 A pointer to the tab control that contains the tab button.  
  
### Remarks  
 The framework erases the text and icon for a button when a [CMFCBaseTabCtrl Class](../../mfc/reference/cmfcbasetabctrl-class.md) object processes the `WM_ERASEBKGND` message  
  
 Override this method in a derived visual manager to customize the appearance of tab buttons.  
  
##  <a name="cmfcvisualmanageroffice2003__onerasetabsframe"></a>  CMFCVisualManagerOffice2003::OnEraseTabsFrame  
 The framework calls this method when it erases a frame on a [CMFCBaseTabCtrl Class](../../mfc/reference/cmfcbasetabctrl-class.md) object.  
  
```  
virtual BOOL OnEraseTabsFrame(
    CDC* pDC,  
    CRect rect,  
    const CMFCBaseTabCtrl* pTabWnd);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rect`  
 A rectangle that specifies the boundaries of the tab window.  
  
 [in] `pTabWnd`  
 A pointer to a tab window. The framework erases a frame for this [CMFCBaseTabCtrl Class](../../mfc/reference/cmfcbasetabctrl-class.md).  
  
### Return Value  
 `TRUE` if the method is successful or `FALSE` if not.  
  
### Remarks  
 This method fills the area indicated by `rect` with the background color of the active tab. It is called when a `CMFCBaseTabCtrl` object processes a `WM_PAINT` message and erases a tab frame.  
  
##  <a name="cmfcvisualmanageroffice2003__onfillautohidebuttonbackground"></a>  CMFCVisualManagerOffice2003::OnFillAutoHideButtonBackground  
 The framework calls this method when it fills the background of an auto-hide button.  
  
```  
virtual void OnFillAutoHideButtonBackground(
    CDC* pDC,  
    CRect rect,  
    CMFCAutoHideButton* pButton);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rect`  
 A rectangle that specifies the boundaries of the auto-hide button.  
  
 [in] `pButton`  
 A pointer to a [CMFCAutoHideButton Class](../../mfc/reference/cmfcautohidebutton-class.md) object. The framework fills the background for this auto-hide button.  
  
### Remarks  
 Override this method in a derived visual manager to customize the appearance of an auto-hide button.  
  
##  <a name="cmfcvisualmanageroffice2003__onfillbarbackground"></a>  CMFCVisualManagerOffice2003::OnFillBarBackground  
 The framework calls this method when it fills the background of a [CBasePane Class](../../mfc/reference/cbasepane-class.md) object.  
  
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
 A pointer to the device context for a control bar.  
  
 [in] `pBar`  
 A pointer to a [CBasePane Class](../../mfc/reference/cbasepane-class.md) object. The framework fills the background of this pane.  
  
 [in] `rectClient`  
 A rectangle that specifies the boundaries of the pane.  
  
 [in] `rectClip`  
 A rectangle that specifies the clipping area of the pane.  
  
 [in] `bNCArea`  
 A reserved value.  
  
### Remarks  
 The default implementation of this method fills the background of the bar with the 3d background color from the global variable `afxGlobalData`.  
  
 Override this method in a derived visual manager to customize the background of a pane.  
  
##  <a name="cmfcvisualmanageroffice2003__onfillbuttoninterior"></a>  CMFCVisualManagerOffice2003::OnFillButtonInterior  
 The framework calls this method when it fills the background of a toolbar button.  
  
```  
virtual void OnFillButtonInterior(
    CDC* pDC,  
    CMFCToolBarButton* pButton,  
    CRect rect,  
    CMFCVisualManager::AFX_BUTTON_STATE state);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to the device context of a toolbar button.  
  
 [in] `pButton`  
 A pointer to the button for which the framework is filling the background.  
  
 [in] `rect`  
 A rectangle that specifies the boundaries of the toolbar button.  
  
 [in] `state`  
 The state of the toolbar button (the possible states of a toolbar button are `ButtonsIsRegular`, `ButtonsIsPressed`, or `ButtonsIsHighlighted`).  
  
### Remarks  
 The default implementation of this method uses the default color to fill the background. Override this method in a derived visual manager to customize the background of a toolbar button.  
  
##  <a name="cmfcvisualmanageroffice2003__onfillcommandslistbackground"></a>  CMFCVisualManagerOffice2003::OnFillCommandsListBackground  
 The framework calls this method when it fills the background of a toolbar button that belongs to a command list. This command list is part of the customization dialog.  
  
```  
virtual COLORREF OnFillCommandsListBackground(
    CDC* pDC,  
    CRect rect,  
    BOOL bIsSelected = FALSE);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rect`  
 A rectangle that specifies the boundaries of the button.  
  
 [in] `bIsSelected`  
 A Boolean parameter that indicates whether the button is selected.  
  
### Return Value  
 The text color for the toolbar button.  
  
### Remarks  
 For more information about the customization list, see [CMFCToolBarButton::OnDrawOnCustomizeList](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__ondrawoncustomizelist). The default implementation for this method fills the background based on the color scheme of the currently selected skin.  
  
##  <a name="cmfcvisualmanageroffice2003__onfillheaderctrlbackground"></a>  CMFCVisualManagerOffice2003::OnFillHeaderCtrlBackground  
 The framework calls this method when it fills the background of a header control.  
  
```  
virtual void OnFillHeaderCtrlBackground(
    CMFCHeaderCtrl* pCtrl,  
    CDC* pDC,  
    CRect rect);
```  
  
### Parameters  
 [in] `pCtrl`  
 A pointer to a [CMFCHeaderCtrl Class](../../mfc/reference/cmfcheaderctrl-class.md) object. The framework fills the background for this header control.  
  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rect`  
 A rectangle that specifies the boundaries of the header control.  
  
### Remarks  
 Override this method in a derived visual manager to customize the appearance of a header control.  
  
##  <a name="cmfcvisualmanageroffice2003__onfillhighlightedarea"></a>  CMFCVisualManagerOffice2003::OnFillHighlightedArea  
 The framework calls this method when it fills the highlighted area of a toolbar button.  
  
```  
virtual void OnFillHighlightedArea(
    CDC* pDC,  
    CRect rect,  
    CBrush* pBrush,  
    CMFCToolBarButton* pButton);
```  
  
### Parameters  
 [in] `pDC`  
 Pointer to a device context.  
  
 [in] `rect`  
 The bounding rectangle of the highlighted area to fill.  
  
 [in] `pBrush`  
 The brush to use in filling the highlighted area.  
  
 [in] `pButton`  
 Pointer to the [CMFCToolBarButton Class](../../mfc/reference/cmfctoolbarbutton-class.md) object for which to fill the highlighted area.  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2003__onfilloutlookbarcaption"></a>  CMFCVisualManagerOffice2003::OnFillOutlookBarCaption  
 The framework calls this method when it fills the background of an Outlook caption bar.  
  
```  
virtual void OnFillOutlookBarCaption(
    CDC* pDC,  
    CRect rectCaption,  
    COLORREF& clrText);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rectCaption`  
 A rectangle that specifies the boundaries of the caption bar.  
  
 [out] `clrText`  
 A reference to a `COLORREF` object to which this method writes the color of text on the caption bar.  
  
### Remarks  
 The default implementation of this method fills the caption bar with the color for shadows based on the current skin.  
  
 Override this method in a derived visual manager to customize the color of the Outlook caption bar.  
  
##  <a name="cmfcvisualmanageroffice2003__onfilloutlookpagebutton"></a>  CMFCVisualManagerOffice2003::OnFillOutlookPageButton  
 The framework calls this method when it fills the interior of an Outlook page button.  
  
```  
virtual void OnFillOutlookPageButton(
    CDC* pDC,  
    const CRect& rect,  
    BOOL bIsHighlighted,  
    BOOL bIsPressed,  
    COLORREF& clrText);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rect`  
 A rectangle that specifies the boundaries of the Outlook page button.  
  
 [in] `bIsHighlighted`  
 A Boolean parameter that specifies whether the button is highlighted.  
  
 [in] `bIsPressed`  
 A Boolean parameter that specifies whether the button is pressed.  
  
 [out] `clrText`  
 A reference to a `COLORREF` object where this method stores the text color of the outlook page button.  
  
### Remarks  
 Override this function in a derived visual manager to customize the appearance of Outlook page buttons.  
  
##  <a name="cmfcvisualmanageroffice2003__onfillpopupwindowbackground"></a>  CMFCVisualManagerOffice2003::OnFillPopupWindowBackground  
 The framework calls this method when it fills the background of a pop-up window.  
  
```  
virtual void OnFillPopupWindowBackground(
    CDC* pDC,  
    CRect rect);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rect`  
 A rectangle that specifies the boundaries of the popup window.  
  
### Remarks  
 Override this method in a derived visual manager to customize the appearance of pop-up windows.  
  
##  <a name="cmfcvisualmanageroffice2003__onfilltab"></a>  CMFCVisualManagerOffice2003::OnFillTab  
 The framework calls this method when it fills the background of a tab window.  
  
```  
virtual void OnFillTab(
    CDC* pDC,  
    CRect rectFill,  
    CBrush* pbrFill,  
    int iTab,  
    BOOL bIsActive,  
    const CMFCBaseTabCtrl* pTabWnd);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rectFill`  
 A rectangle that specifies the boundaries for the tab window.  
  
 [in] `pbrFill`  
 A pointer to the brush that the framework is using to fill the tab window.  
  
 [in] `iTab`  
 The zero-based tab index of a tab for which the framework fills the background.  
  
 [in] `bIsActive`  
 `TRUE` if the tab is active or `FALSE` if not.  
  
 [in] `pTabWnd`  
 A pointer to the parent tab control.  
  
### Remarks  
 Override this method in a derived visual manager to customize the appearance of tabs.  
  
##  <a name="cmfcvisualmanageroffice2003__onfilltasksgroupinterior"></a>  CMFCVisualManagerOffice2003::OnFillTasksGroupInterior  
 The framework calls this method when it fills the interior of a [CMFCTasksPaneTaskGroup Class](../../mfc/reference/cmfctaskspanetaskgroup-class.md) object.  
  
```  
virtual void OnFillTasksGroupInterior(
    CDC* pDC,  
    CRect rect,  
    BOOL bSpecial = FALSE);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rect`  
 A rectangle that specifies the boundaries of the task group.  
  
 [in] `bSpecial`  
 A Boolean that indicates if the interior is filled with a special color.  
  
### Remarks  
 Override this method in a derived visual manager to customize the appearance of a task group.  
  
##  <a name="cmfcvisualmanageroffice2003__onfilltaskspanebackground"></a>  CMFCVisualManagerOffice2003::OnFillTasksPaneBackground  
 The framework calls this method when it fills the background of a [CMFCTasksPane Class](../../mfc/reference/cmfctaskspane-class.md) control.  
  
```  
virtual void OnFillTasksPaneBackground(
    CDC* pDC,  
    CRect rectWorkArea);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rectWorkArea`  
 A rectangle that specifies the boundaries of the task pane.  
  
### Remarks  
 Override this method in a derived visual manager to customize the appearance of a [CMFCTasksPane Class](../../mfc/reference/cmfctaskspane-class.md) object.  
  
##  <a name="cmfcvisualmanageroffice2003__onhighlightquickcustomizemenubutton"></a>  CMFCVisualManagerOffice2003::OnHighlightQuickCustomizeMenuButton  
 The framework calls this method when it draws a highlighted quick-customize menu button.  
  
```  
virtual void OnHighlightQuickCustomizeMenuButton(
    CDC* pDC,  
    CMFCToolBarMenuButton* pButton,  
    CRect rect);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to the device context for the button.  
  
 [in] `pButton`  
 A pointer to the button.  
  
 [in] `rect`  
 The bounding rectangle of the button.  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2003__onhighlightrarelyusedmenuitems"></a>  CMFCVisualManagerOffice2003::OnHighlightRarelyUsedMenuItems  
 The framework calls this method when it draws a highlighted menu command.  
  
```  
virtual void OnHighlightRarelyUsedMenuItems(
    CDC* pDC,  
    CRect rectRarelyUsed);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rectRarelyUsed`  
 A rectangle that specifies the boundaries of the highlighted command.  
  
### Remarks  
 Override this method in a derived visual manager to customize the appearance of highlighted menu commands.  
  
##  <a name="cmfcvisualmanageroffice2003__onupdatesystemcolors"></a>  CMFCVisualManagerOffice2003::OnUpdateSystemColors  
 The framework calls this function when the system colors change.  
  
```  
virtual void OnUpdateSystemColors();
```  
  
### Remarks  
 The framework calls this method as a part of processing the `WM_SYSCOLORCHANGE` message. Override this method in a derived visual manager if you want to execute custom code when the colors change in your application.  
  
##  <a name="cmfcvisualmanageroffice2003__setdefaultwinxpcolors"></a>  CMFCVisualManagerOffice2003::SetDefaultWinXPColors  
 Specifies whether the visual manager should use native Windows XP theme colors or colors obtained from [GetSysColor](http://msdn.microsoft.com/library/windows/desktop/ms724371).  
  
```  
static void SetDefaultWinXPColors(BOOL bDefaultWinXPColors = TRUE);
```  
  
### Parameters  
 [in] `bDefaultWinXPColors`  
 Specifies whether the visual manager will use native Windows XP colors.  
  
### Remarks  
 If `bDefaultWinXPColors` is `TRUE`, the visual manager will use native Windows XP colors such as blue, olive, or silver. Otherwise, the visual manager will use the colors obtained from `GetSysColor`. The visual manager uses visual elements such as `COLOR_3DFACE`, `COLOR_3DSHADOW`, `COLOR_3DHIGHLIGHT`, `COLOR_3DDKSHADOW`, and `COLOR_3DLIGHT`.  
  
 By default, a `CMFCVisualManagerOffice2003` object uses native Windows XP theme colors.  
  
##  <a name="cmfcvisualmanageroffice2003__setstatusbarofficexplook"></a>  CMFCVisualManagerOffice2003::SetStatusBarOfficeXPLook  
 Specifies that the Windows XP global theme should be used.  
  
```  
static void __stdcall SetStatusBarOfficeXPLook(BOOL bStatusBarOfficeXPLook = TRUE);
```  
  
### Parameters  
 [in] `bStatusBarOfficeXPLook`  
 `TRUE` if the Windows XP global theme should be used (the default), or `FALSE` if not.  
  
### Remarks  
  
##  <a name="cmfcvisualmanageroffice2003__setuseglobaltheme"></a>  CMFCVisualManagerOffice2003::SetUseGlobalTheme  
 Specifies whether the visual manager uses a global theme.  
  
```  
static void SetUseGlobalTheme(BOOL bUseGlobalTheme = TRUE);
```  
  
### Parameters  
 [in] `bUseGlobalTheme`  
 `TRUE` if you want the visual manager to use a global theme; `FALSE` otherwise.  
  
### Remarks  
 If a `CMFCVisualManagerOffice2003` object uses a global theme, it draws the GUI elements by using the [CMFCVisualManagerWindows Class](../../mfc/reference/cmfcvisualmanagerwindows-class.md).  
  
 If a `CMFCVisualManagerOffice2003` object does not use a global theme, it draws the GUI elements by using the [CMFCVisualManagerOfficeXP Class](../../mfc/reference/cmfcvisualmanagerofficexp-class.md).  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CMFCVisualManager Class](../../mfc/reference/cmfcvisualmanager-class.md)   
 [CMFCVisualManagerOfficeXP Class](../../mfc/reference/cmfcvisualmanagerofficexp-class.md)   
 [CMFCVisualManagerWindows Class](../../mfc/reference/cmfcvisualmanagerwindows-class.md)
