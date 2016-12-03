---
title: "CMFCVisualManager Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCVisualManager"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCVisualManager class"
ms.assetid: beed80f7-36a2-4d64-9f09-e807cfefc3fe
caps.latest.revision: 58
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
# CMFCVisualManager Class
Provides support for changing the appearance of your application at a global level. The `CMFCVisualManager` class works together with a class that provides instructions to draw the GUI controls of your application using a consistent style. These other classes are referred to as visual managers and they inherit from `CMFCBaseVisualManager`.  
  
## Syntax  
  
```  
class CMFCVisualManager : public CMFCBaseVisualManager  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|`CMFCVisualManager::CMFCVisualManager`|Default constructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCVisualManager::AdjustFrames](#cmfcvisualmanager__adjustframes)||  
|[CMFCVisualManager::AdjustToolbars](#cmfcvisualmanager__adjusttoolbars)||  
|[CMFCVisualManager::AlwaysHighlight3DTabs](#cmfcvisualmanager__alwayshighlight3dtabs)|Called by the framework to determine whether 3D tabs should always be drawn by using a highlight color.|  
|[CMFCVisualManager::DestroyInstance](#cmfcvisualmanager__destroyinstance)||  
|[CMFCVisualManager::DoDrawHeaderSortArrow](#cmfcvisualmanager__dodrawheadersortarrow)||  
|[CMFCVisualManager::DrawComboDropButtonWinXP](#cmfcvisualmanager__drawcombodropbuttonwinxp)||  
|[CMFCVisualManager::DrawPushButtonWinXP](#cmfcvisualmanager__drawpushbuttonwinxp)||  
|[CMFCVisualManager::DrawTextOnGlass](#cmfcvisualmanager__drawtextonglass)||  
|[CMFCVisualManager::GetAutoHideButtonTextColor](#cmfcvisualmanager__getautohidebuttontextcolor)|Called by the framework to retrieve the text color for an auto-hide button.|  
|[CMFCVisualManager::GetButtonExtraBorder](#cmfcvisualmanager__getbuttonextraborder)|Called by the framework to retrieve the increased button size that the current visual manager requires to draw a button.|  
|[CMFCVisualManager::GetCaptionBarTextColor](#cmfcvisualmanager__getcaptionbartextcolor)|Called by the framework to retrieve the text color of a caption bar.|  
|[CMFCVisualManager::GetDockingTabsBordersSize](#cmfcvisualmanager__getdockingtabsborderssize)|Called by the framework to retrieve the size for the border of a docked tabbed bar.|  
|[CMFCVisualManager::GetHighlightedMenuItemTextColor](#cmfcvisualmanager__gethighlightedmenuitemtextcolor)||  
|[CMFCVisualManager::GetInstance](#cmfcvisualmanager__getinstance)|Returns a pointer to the `CMFCVisualManager` object.|  
|[CMFCVisualManager::GetMDITabsBordersSize](#cmfcvisualmanager__getmditabsborderssize)|Called by the framework to retrieve the border size of the MDITabs window.|  
|[CMFCVisualManager::GetMenuItemTextColor](#cmfcvisualmanager__getmenuitemtextcolor)||  
|[CMFCVisualManager::GetMenuShadowDepth](#cmfcvisualmanager__getmenushadowdepth)|Returns a value that determines the width and height of a menu shadow.|  
|[CMFCVisualManager::GetNcBtnSize](#cmfcvisualmanager__getncbtnsize)|Called by the framework to determine the size of the system buttons based on the current visual manager. The system buttons are the buttons in the caption of the main frame that map to the commands **Close**, **Minimize**, **Maximize**, and **Restore**.|  
|[CMFCVisualManager::GetPopupMenuBorderSize](#cmfcvisualmanager__getpopupmenubordersize)|Called by the framework to retrieve the size of the border for a popup menu.|  
|[CMFCVisualManager::GetPropertyGridGroupColor](#cmfcvisualmanager__getpropertygridgroupcolor)|Called by the framework to retrieve the background color of a property list.|  
|[CMFCVisualManager::GetPropertyGridGroupTextColor](#cmfcvisualmanager__getpropertygridgrouptextcolor)|Called by the framework to retrieve the text color of a property list.|  
|[CMFCVisualManager::GetRibbonHyperlinkTextColor](#cmfcvisualmanager__getribbonhyperlinktextcolor)||  
|[CMFCVisualManager::GetRibbonPopupBorderSize](#cmfcvisualmanager__getribbonpopupbordersize)||  
|[CMFCVisualManager::GetRibbonQuickAccessToolBarTextColor](#cmfcvisualmanager__getribbonquickaccesstoolbartextcolor)||  
|[CMFCVisualManager::GetRibbonSliderColors](#cmfcvisualmanager__getribbonslidercolors)||  
|[CMFCVisualManager::GetShowAllMenuItemsHeight](#cmfcvisualmanager__getshowallmenuitemsheight)||  
|[CMFCVisualManager::GetSmartDockingBaseGuideColors](#cmfcvisualmanager__getsmartdockingbaseguidecolors)||  
|[CMFCVisualManager::GetSmartDockingHighlightToneColor](#cmfcvisualmanager__getsmartdockinghighlighttonecolor)||  
|[CMFCVisualManager::GetSmartDockingTheme](#cmfcvisualmanager__getsmartdockingtheme)|Returns a theme used to display smart docking markers.|  
|[CMFCVisualManager::GetStatusBarPaneTextColor](#cmfcvisualmanager__getstatusbarpanetextcolor)||  
|[CMFCVisualManager::GetTabFrameColors](#cmfcvisualmanager__gettabframecolors)|Called by the framework to retrieve the set of colors to use when it draws a tab frame.|  
|[CMFCVisualManager::GetTabTextColor](#cmfcvisualmanager__gettabtextcolor)||  
|[CMFCVisualManager::GetToolbarButtonTextColor](#cmfcvisualmanager__gettoolbarbuttontextcolor)|Called by the framework to retrieve the current color of the text on the toolbar button. This color varies based on the current visual manager and the button state.|  
|[CMFCVisualManager::GetToolbarDisabledTextColor](#cmfcvisualmanager__gettoolbardisabledtextcolor)|Called by the framework to determine the color of the text that is displayed on disabled toolbar elements.|  
|[CMFCVisualManager::GetToolbarHighlightColor](#cmfcvisualmanager__gettoolbarhighlightcolor)||  
|[CMFCVisualManager::GetToolTipInfo](#cmfcvisualmanager__gettooltipinfo)||  
|[CMFCVisualManager::HasOverlappedAutoHideButtons](#cmfcvisualmanager__hasoverlappedautohidebuttons)|Specifies whether auto-hide buttons overlap.|  
|[CMFCVisualManager::IsDockingTabHasBorder](#cmfcvisualmanager__isdockingtabhasborder)|Specifies whether the current visual manager draws a border around tabbed docking bars.|  
|[CMFCVisualManager::IsEmbossDisabledImage](#cmfcvisualmanager__isembossdisabledimage)|Specifies whether disabled images should be embossed.|  
|[CMFCVisualManager::IsFadeInactiveImage](#cmfcvisualmanager__isfadeinactiveimage)|Called by the framework to determine whether inactive images on a toolbar or menu appear dimmed.|  
|[CMFCVisualManager::IsMenuFlatLook](#cmfcvisualmanager__ismenuflatlook)|Specifies whether menu buttons have a flattened appearance.|  
|[CMFCVisualManager::IsOfficeXPStyleMenus](#cmfcvisualmanager__isofficexpstylemenus)|Specifies whether the visual manager implements Office XP-style menus.|  
|[CMFCVisualManager::IsOwnerDrawCaption](#cmfcvisualmanager__isownerdrawcaption)|Specifies whether the current visual manager implements owner-drawn captions of a frame window.|  
|[CMFCVisualManager::IsShadowHighlightedImage](#cmfcvisualmanager__isshadowhighlightedimage)|Specifies whether a highlighted image has a shadow.|  
|[CMFCVisualManager::OnDrawAutoHideButtonBorder](#cmfcvisualmanager__ondrawautohidebuttonborder)|Called by the framework when it draws the border for an auto-hide button.|  
|[CMFCVisualManager::OnDrawBarGripper](#cmfcvisualmanager__ondrawbargripper)|Called by the framework when it draws the gripper of a control bar. The user must click the gripper in order to move the control bar.|  
|[CMFCVisualManager::OnDrawBrowseButton](#cmfcvisualmanager__ondrawbrowsebutton)|Called by the framework when it draws a browse button that belongs to an edit control ( [CMFCEditBrowseCtrl Class](../../mfc/reference/cmfceditbrowsectrl-class.md)).|  
|[CMFCVisualManager::OnDrawButtonBorder](#cmfcvisualmanager__ondrawbuttonborder)|Called by the framework when it draws the border of a toolbar button.|  
|[CMFCVisualManager::OnDrawButtonSeparator](#cmfcvisualmanager__ondrawbuttonseparator)||  
|[CMFCVisualManager::OnDrawCaptionBarBorder](#cmfcvisualmanager__ondrawcaptionbarborder)|Called by the framework when it draws the caption bar border.|  
|[CMFCVisualManager::OnDrawCaptionBarButtonBorder](#cmfcvisualmanager__ondrawcaptionbarbuttonborder)||  
|[CMFCVisualManager::OnDrawCaptionBarInfoArea](#cmfcvisualmanager__ondrawcaptionbarinfoarea)||  
|[CMFCVisualManager::OnDrawCaptionButton](#cmfcvisualmanager__ondrawcaptionbutton)|Called by the framework when it draws a caption button.|  
|[CMFCVisualManager::OnDrawCheckBox](#cmfcvisualmanager__ondrawcheckbox)||  
|[CMFCVisualManager::OnDrawCheckBoxEx](#cmfcvisualmanager__ondrawcheckboxex)||  
|[CMFCVisualManager::OnDrawComboBorder](#cmfcvisualmanager__ondrawcomboborder)|Called by the framework when it draws the border of a combo box button.|  
|[CMFCVisualManager::OnDrawComboDropButton](#cmfcvisualmanager__ondrawcombodropbutton)|Called by the framework when it draws a combo box drop button.|  
|[CMFCVisualManager::OnDrawControlBorder](#cmfcvisualmanager__ondrawcontrolborder)||  
|[CMFCVisualManager::OnDrawDefaultRibbonImage](#cmfcvisualmanager__ondrawdefaultribbonimage)|Called by the framework when it draws the default ribbon image.|  
|[CMFCVisualManager::OnDrawEditBorder](#cmfcvisualmanager__ondraweditborder)|Called by the framework when it draws a border around a [CMFCToolBarEditBoxButton](../../mfc/reference/cmfctoolbareditboxbutton-class.md) object.|  
|[CMFCVisualManager::OnDrawExpandingBox](#cmfcvisualmanager__ondrawexpandingbox)||  
|[CMFCVisualManager::OnDrawFloatingToolbarBorder](#cmfcvisualmanager__ondrawfloatingtoolbarborder)|Called by the framework when it draws the borders of a floating toolbar. The floating toolbar is a toolbar that appears as a mini-frame window.|  
|[CMFCVisualManager::OnDrawHeaderCtrlBorder](#cmfcvisualmanager__ondrawheaderctrlborder)|Called by the framework when it draws the border that contains the header control.|  
|[CMFCVisualManager::OnDrawHeaderCtrlSortArrow](#cmfcvisualmanager__ondrawheaderctrlsortarrow)|Called by the framework when it draws the header control sort arrow.|  
|[CMFCVisualManager::OnDrawMenuArrowOnCustomizeList](#cmfcvisualmanager__ondrawmenuarrowoncustomizelist)||  
|[CMFCVisualManager::OnDrawMenuBorder](#cmfcvisualmanager__ondrawmenuborder)|Called by the framework when it draws a menu border.|  
|[CMFCVisualManager::OnDrawMenuCheck](#cmfcvisualmanager__ondrawmenucheck)||  
|[CMFCVisualManager::OnDrawMenuItemButton](#cmfcvisualmanager__ondrawmenuitembutton)||  
|[CMFCVisualManager::OnDrawMenuLabel](#cmfcvisualmanager__ondrawmenulabel)||  
|[CMFCVisualManager::OnDrawMenuResizeBar](#cmfcvisualmanager__ondrawmenuresizebar)||  
|[CMFCVisualManager::OnDrawMenuScrollButton](#cmfcvisualmanager__ondrawmenuscrollbutton)|Called by the framework when it draws a menu scroll button.|  
|[CMFCVisualManager::OnDrawMenuShadow](#cmfcvisualmanager__ondrawmenushadow)||  
|[CMFCVisualManager::OnDrawMenuSystemButton](#cmfcvisualmanager__ondrawmenusystembutton)|Called by the framework when it draws the menu system buttons **Close**, **Minimize**, **Maximize**, and **Restore**.|  
|[CMFCVisualManager::OnDrawMiniFrameBorder](#cmfcvisualmanager__ondrawminiframeborder)||  
|[CMFCVisualManager::OnDrawOutlookBarSplitter](#cmfcvisualmanager__ondrawoutlookbarsplitter)|Called by the framework when it draws the splitter for an Outlook bar. The splitter is a horizontal bar used to group controls.|  
|[CMFCVisualManager::OnDrawOutlookPageButtonBorder](#cmfcvisualmanager__ondrawoutlookpagebuttonborder)|Called by the framework when it draws the border of an Outlook page button. Outlook page buttons appear if the Outlook bar pane contains more buttons than it can display.|  
|[CMFCVisualManager::OnDrawPaneBorder](#cmfcvisualmanager__ondrawpaneborder)|Called by the framework when it draws the border of a [CPane Class](../../mfc/reference/cpane-class.md).|  
|[CMFCVisualManager::OnDrawPaneCaption](#cmfcvisualmanager__ondrawpanecaption)|Called by the framework when it draws the caption for a `CPane`.|  
|[CMFCVisualManager::OnDrawPaneDivider](#cmfcvisualmanager__ondrawpanedivider)||  
|[CMFCVisualManager::OnDrawPopupWindowBorder](#cmfcvisualmanager__ondrawpopupwindowborder)||  
|[CMFCVisualManager::OnDrawPopupWindowButtonBorder](#cmfcvisualmanager__ondrawpopupwindowbuttonborder)||  
|[CMFCVisualManager::OnDrawPopupWindowCaption](#cmfcvisualmanager__ondrawpopupwindowcaption)||  
|[CMFCVisualManager::OnDrawRibbonApplicationButton](#cmfcvisualmanager__ondrawribbonapplicationbutton)|Called by the framework when it draws the **Main Button** on the ribbon.|  
|[CMFCVisualManager::OnDrawRibbonButtonBorder](#cmfcvisualmanager__ondrawribbonbuttonborder)|Called by the framework when it draws the border of a ribbon button.|  
|[CMFCVisualManager::OnDrawRibbonButtonsGroup](#cmfcvisualmanager__ondrawribbonbuttonsgroup)|Called by the framework when it draws a group of buttons on the ribbon.|  
|[CMFCVisualManager::OnDrawRibbonCaption](#cmfcvisualmanager__ondrawribboncaption)|Called by the framework when it draws the caption of the main frame, but only if the ribbon bar is integrated with the frame.|  
|[CMFCVisualManager::OnDrawRibbonCaptionButton](#cmfcvisualmanager__ondrawribboncaptionbutton)|Called by the framework when it draws a caption button located on the ribbon bar.|  
|[CMFCVisualManager::OnDrawRibbonCategory](#cmfcvisualmanager__ondrawribboncategory)|Called by the framework when it draws a ribbon category.|  
|[CMFCVisualManager::OnDrawRibbonCategoryCaption](#cmfcvisualmanager__ondrawribboncategorycaption)|Called by the framework when it draws the caption for a ribbon category.|  
|[CMFCVisualManager::OnDrawRibbonCategoryScroll](#cmfcvisualmanager__ondrawribboncategoryscroll)||  
|[CMFCVisualManager::OnDrawRibbonCategoryTab](#cmfcvisualmanager__ondrawribboncategorytab)|Called by the framework when it draws the tab for a ribbon category.|  
|[CMFCVisualManager::OnDrawRibbonCheckBoxOnList](#cmfcvisualmanager__ondrawribboncheckboxonlist)||  
|[CMFCVisualManager::OnDrawRibbonColorPaletteBox](#cmfcvisualmanager__ondrawribboncolorpalettebox)||  
|[CMFCVisualManager::OnDrawRibbonDefaultPaneButtonContext](#cmfcvisualmanager__ondrawribbondefaultpanebuttoncontext)||  
|[CMFCVisualManager::OnDrawRibbonDefaultPaneButton](#cmfcvisualmanager__ondrawribbondefaultpanebutton)|Called by the framework when it draws the ribbon pane default button. The default button appears when the user shrinks a ribbon panel so that it is too small to display the ribbon elements. The default button is drawn instead and the ribbon elements are added as items on a drop down menu.|  
|[CMFCVisualManager::OnDrawRibbonDefaultPaneButtonIndicator](#cmfcvisualmanager__ondrawribbondefaultpanebuttonindicator)||  
|[CMFCVisualManager::OnDrawRibbonGalleryBorder](#cmfcvisualmanager__ondrawribbongalleryborder)||  
|[CMFCVisualManager::OnDrawRibbonGalleryButton](#cmfcvisualmanager__ondrawribbongallerybutton)||  
|[CMFCVisualManager::OnDrawRibbonKeyTip](#cmfcvisualmanager__ondrawribbonkeytip)||  
|[CMFCVisualManager::OnDrawRibbonLabel](#cmfcvisualmanager__ondrawribbonlabel)|Called by the framework when it draws the ribbon label.|  
|[CMFCVisualManager::OnDrawRibbonMainPanelButtonBorder](#cmfcvisualmanager__ondrawribbonmainpanelbuttonborder)|Called by the framework when it draws the border of a ribbon button that is positioned on the **Main** panel. The **Main** panel is the panel that appears when a user clicks the **Main Button**.|  
|[CMFCVisualManager::OnDrawRibbonMainPanelFrame](#cmfcvisualmanager__ondrawribbonmainpanelframe)|Called by the framework when it draws the frame around the **Main** panel.|  
|[CMFCVisualManager::OnDrawRibbonMenuCheckFrame](#cmfcvisualmanager__ondrawribbonmenucheckframe)||  
|[CMFCVisualManager::OnDrawRibbonPanel](#cmfcvisualmanager__ondrawribbonpanel)|Called by the framework when it draws a ribbon panel.|  
|[CMFCVisualManager::OnDrawRibbonPanelCaption](#cmfcvisualmanager__ondrawribbonpanelcaption)|Called by the framework when it draws the caption of a ribbon panel.|  
|[CMFCVisualManager::OnDrawRibbonProgressBar](#cmfcvisualmanager__ondrawribbonprogressbar)|Called by the framework when it draws a [CMFCRibbonProgressBar](../../mfc/reference/cmfcribbonprogressbar-class.md) object.|  
|[CMFCVisualManager::OnDrawRibbonQuickAccessToolBarSeparator](#cmfcvisualmanager__ondrawribbonquickaccesstoolbarseparator)|Called by the framework when it draws a separator on a ribbon's **Quick Access Toolbar**.|  
|[CMFCVisualManager::OnDrawRibbonRecentFilesFrame](#cmfcvisualmanager__ondrawribbonrecentfilesframe)|Called by the framework when it draws a frame around a recent files list.|  
|[CMFCVisualManager::OnDrawRibbonSliderChannel](#cmfcvisualmanager__ondrawribbonsliderchannel)|Called by the framework when it draws the channel of a [CMFCRibbonSlider](../../mfc/reference/cmfcribbonslider-class.md) object.|  
|[CMFCVisualManager::OnDrawRibbonSliderThumb](#cmfcvisualmanager__ondrawribbonsliderthumb)|Called by the framework when it draws the thumb of a `CMFCRibbonSlider` object.|  
|[CMFCVisualManager::OnDrawRibbonSliderZoomButton](#cmfcvisualmanager__ondrawribbonsliderzoombutton)|Called by the framework when it draws the zoom buttons of a `CMFCRibbonSlider` object.|  
|[CMFCVisualManager::OnDrawRibbonStatusBarPane](#cmfcvisualmanager__ondrawribbonstatusbarpane)|Called by the framework when it draws the status-bar pane of a ribbon.|  
|[CMFCVisualManager::OnDrawRibbonTabsFrame](#cmfcvisualmanager__ondrawribbontabsframe)|Called by the framework when it draws a frame around a set of ribbon tabs.|  
|[CMFCVisualManager::OnDrawScrollButtons](#cmfcvisualmanager__ondrawscrollbuttons)||  
|[CMFCVisualManager::OnDrawSeparator](#cmfcvisualmanager__ondrawseparator)|Called by the framework when it draws a separator. The separator is typically used on a control bar to separate groups of icons.|  
|[CMFCVisualManager::OnDrawShowAllMenuItems](#cmfcvisualmanager__ondrawshowallmenuitems)||  
|[CMFCVisualManager::OnDrawSpinButtons](#cmfcvisualmanager__ondrawspinbuttons)|Called by the framework when it draws spin buttons.|  
|[CMFCVisualManager::OnDrawSplitterBorder](#cmfcvisualmanager__ondrawsplitterborder)|Called by the framework when it draws the border of a split window.|  
|[CMFCVisualManager::OnDrawSplitterBox](#cmfcvisualmanager__ondrawsplitterbox)|Called by the framework when it draws the splitter drag box for a split window.|  
|[CMFCVisualManager::OnDrawStatusBarPaneBorder](#cmfcvisualmanager__ondrawstatusbarpaneborder)|Called by the framework when it draws the border for a status-bar pane.|  
|[CMFCVisualManager::OnDrawStatusBarProgress](#cmfcvisualmanager__ondrawstatusbarprogress)|Called by the framework when it draws the status-bar progress indicator.|  
|[CMFCVisualManager::OnDrawStatusBarSizeBox](#cmfcvisualmanager__ondrawstatusbarsizebox)|Called by the framework when it draws the status-bar size box.|  
|[CMFCVisualManager::OnDrawTab](#cmfcvisualmanager__ondrawtab)|Called by the framework when it draws a [CMFCTabCtrl](../../mfc/reference/cmfctabctrl-class.md) object.|  
|[CMFCVisualManager::OnDrawTabCloseButton](#cmfcvisualmanager__ondrawtabclosebutton)|Called by the framework when it draws the **Close** button on the active tab.|  
|[CMFCVisualManager::OnDrawTabContent](#cmfcvisualmanager__ondrawtabcontent)|Called by the framework when it draws the tab interior (images, texts).|  
|[CMFCVisualManager::OnDrawTabsButtonBorder](#cmfcvisualmanager__ondrawtabsbuttonborder)|Called by the framework when it draws the border of a tab button.|  
|[CMFCVisualManager::OnDrawTask](#cmfcvisualmanager__ondrawtask)|Called by the framework when it draws a task on the task pane.|  
|[CMFCVisualManager::OnDrawTasksGroupAreaBorder](#cmfcvisualmanager__ondrawtasksgroupareaborder)|Called by the framework when it draws a border around a group area on the task pane.|  
|[CMFCVisualManager::OnDrawTasksGroupCaption](#cmfcvisualmanager__ondrawtasksgroupcaption)|Called by the framework when it draws the caption for a task group on the task pane.|  
|[CMFCVisualManager::OnDrawTasksGroupIcon](#cmfcvisualmanager__ondrawtasksgroupicon)||  
|[CMFCVisualManager::OnDrawTearOffCaption](#cmfcvisualmanager__ondrawtearoffcaption)|Called by the framework when it draws the tear-off caption for a tear-off bar.|  
|[CMFCVisualManager::OnDrawToolBoxFrame](#cmfcvisualmanager__ondrawtoolboxframe)||  
|[CMFCVisualManager::OnEraseMDIClientArea](#cmfcvisualmanager__onerasemdiclientarea)|Called by the framework when it erases the MDI client area.|  
|[CMFCVisualManager::OnErasePopupWindowButton](#cmfcvisualmanager__onerasepopupwindowbutton)||  
|[CMFCVisualManager::OnEraseTabsArea](#cmfcvisualmanager__onerasetabsarea)|Called by the framework when it erases the tab area in a tab window.|  
|[CMFCVisualManager::OnEraseTabsButton](#cmfcvisualmanager__onerasetabsbutton)|Called by the framework when it erases the icon and text of a tab button.|  
|[CMFCVisualManager::OnEraseTabsFrame](#cmfcvisualmanager__onerasetabsframe)|Called by the framework when it erases a tab frame.|  
|[CMFCVisualManager::OnFillAutoHideButtonBackground](#cmfcvisualmanager__onfillautohidebuttonbackground)|Called by the framework when it fills the background of an auto-hide button.|  
|[CMFCVisualManager::OnFillBarBackground](#cmfcvisualmanager__onfillbarbackground)|Called by the framework when it fills the background of a control bar.|  
|[CMFCVisualManager::OnFillButtonInterior](#cmfcvisualmanager__onfillbuttoninterior)|Called by the framework when it fills the background of a toolbar button.|  
|[CMFCVisualManager::OnFillCaptionBarButton](#cmfcvisualmanager__onfillcaptionbarbutton)||  
|[CMFCVisualManager::OnFillCommandsListBackground](#cmfcvisualmanager__onfillcommandslistbackground)|Called by the framework when it fills the background of a toolbar button that belongs to a command list that, in turn, is part of a customization dialog box.|  
|[CMFCVisualManager::OnFillHeaderCtrlBackground](#cmfcvisualmanager__onfillheaderctrlbackground)|Called by the framework when it fills the background of a header control.|  
|[CMFCVisualManager::OnFillMiniFrameCaption](#cmfcvisualmanager__onfillminiframecaption)|Called by the framework when it fills the caption of a mini frame window.|  
|[CMFCVisualManager::OnFillOutlookBarCaption](#cmfcvisualmanager__onfilloutlookbarcaption)|Called by the framework when it fills the background of an Outlook bar caption.|  
|[CMFCVisualManager::OnFillOutlookPageButton](#cmfcvisualmanager__onfilloutlookpagebutton)|Called by the framework when it fills the interior of an Outlook page button.|  
|[CMFCVisualManager::OnFillPopupWindowBackground](#cmfcvisualmanager__onfillpopupwindowbackground)|Called by the framework when it fills the background of a popup window.|  
|[CMFCVisualManager::OnFillRibbonButton](#cmfcvisualmanager__onfillribbonbutton)|Called by the framework when it fills the interior of a ribbon button.|  
|[CMFCVisualManager::OnFillRibbonEdit](#cmfcvisualmanager__onfillribbonedit)|Called by the framework when it fills the interior of a ribbon edit control.|  
|[CMFCVisualManager::OnFillRibbonMainPanelButton](#cmfcvisualmanager__onfillribbonmainpanelbutton)|Called by the framework when it fills the interior of a ribbon button located on the **Main** panel.|  
|[CMFCVisualManager::OnFillRibbonMenuFrame](#cmfcvisualmanager__onfillribbonmenuframe)|Called by the framework when it fills the menu frame of the main ribbon panel.|  
|[CMFCVisualManager::OnFillRibbonQuickAccessToolBarPopup](#cmfcvisualmanager__onfillribbonquickaccesstoolbarpopup)||  
|[CMFCVisualManager::OnFillSplitterBackground](#cmfcvisualmanager__onfillsplitterbackground)|Called by the framework when it fills the background of a split window.|  
|[CMFCVisualManager::OnFillTab](#cmfcvisualmanager__onfilltab)|Called by the framework when it fills the background of a tab.|  
|[CMFCVisualManager::OnFillTasksGroupInterior](#cmfcvisualmanager__onfilltasksgroupinterior)|Called by the framework when it fills the interior of a [CMFCTasksPaneTaskGroup](../../mfc/reference/cmfctaskspanetaskgroup-class.md) object on the [CMFCTasksPane](../../mfc/reference/cmfctaskspane-class.md).|  
|[CMFCVisualManager::OnFillTasksPaneBackground](#cmfcvisualmanager__onfilltaskspanebackground)|Called by the framework when it fills the background of a `CMFCTasksPane` control.|  
|[CMFCVisualManager::OnHighlightMenuItem](#cmfcvisualmanager__onhighlightmenuitem)|Called by the framework when it draws a highlighted menu item.|  
|[CMFCVisualManager::OnHighlightRarelyUsedMenuItems](#cmfcvisualmanager__onhighlightrarelyusedmenuitems)|Called by the framework when it draws a highlighted and rarely used menu item.|  
|[CMFCVisualManager::OnNcPaint](#cmfcvisualmanager__onncpaint)|Called by the framework when it draws the non-client area.|  
|[CMFCVisualManager::OnSetWindowRegion](#cmfcvisualmanager__onsetwindowregion)|Called by the framework when it sets a region that contains frames and popup menus.|  
|[CMFCVisualManager::OnUpdateSystemColors](#cmfcvisualmanager__onupdatesystemcolors)|Called by the framework when it changes the system color setting.|  
|[CMFCVisualManager::RedrawAll](#cmfcvisualmanager__redrawall)|Redraws all control bars in the application.|  
|[CMFCVisualManager::RibbonCategoryColorToRGB](#cmfcvisualmanager__ribboncategorycolortorgb)||  
|[CMFCVisualManager::SetDefaultManager](#cmfcvisualmanager__setdefaultmanager)|Sets the default visual manager.|  
|[CMFCVisualManager::SetEmbossDisabledImage](#cmfcvisualmanager__setembossdisabledimage)|Enables or disables the embossed mode for disabled toolbar images.|  
|[CMFCVisualManager::SetFadeInactiveImage](#cmfcvisualmanager__setfadeinactiveimage)|Enables or disables the lighting effect for inactive images on a menu or toolbar.|  
|[CMFCVisualManager::SetMenuFlatLook](#cmfcvisualmanager__setmenuflatlook)|Sets a flag indicating whether the application menu buttons have a flattened appearance.|  
|[CMFCVisualManager::SetMenuShadowDepth](#cmfcvisualmanager__setmenushadowdepth)|Sets the width and height of the menu shadow.|  
|[CMFCVisualManager::SetShadowHighlightedImage](#cmfcvisualmanager__setshadowhighlightedimage)|Sets a flag that indicates whether to display the shadow when rendering highlighted images.|  
  
## Remarks  
 Because the `CMFCVisualManager` class controls the application's GUI, each application can have either one instance of a `CMFCVisualManager`, or one instance of a class derived from `CMFCVisualManager`. Your application can also function without a `CMFCVisualManager`. Use the static method `GetInstance` to obtain a pointer to the current `CMFCVisualManager`-derived object.  
  
 To change the appearance of your application you must use other classes that provide methods for drawing all of the visual elements of your application. Some examples of these classes are [CMFCVisualManagerOfficeXP Class](../../mfc/reference/cmfcvisualmanagerofficexp-class.md), [CMFCVisualManagerOffice2003 Class](../../mfc/reference/cmfcvisualmanageroffice2003-class.md), and [CMFCVisualManagerOffice2007 Class](../../mfc/reference/cmfcvisualmanageroffice2007-class.md). When you want to change the appearance of your application, pass one of these visual managers into the method `SetDefaultManager`. For an example that demonstrates how your application can mimic the appearance of Microsoft Office 2003, see [CMFCVisualManagerOffice2003 Class](../../mfc/reference/cmfcvisualmanageroffice2003-class.md).  
  
 All of the drawing methods are virtual. This enables you to create a custom visual style for the GUI of your application. If you want to create your own visual style, derive a class from one of the visual manager classes and override the drawing methods that you want to change.  
  
## Example  
 This sample demonstrates how to instantiate the standard and custom `CMFCVisualManager` objects.  
  
```  
void CMFCSkinsApp::SetSkin (int iIndex)  
{   // destroy the current visual manager  
    if (CMFCVisualManager::GetInstance () != NULL)  
 {  
    delete CMFCVisualManager::GetInstance ();

 }  
    switch (iIndex)  
 {  
    case 0:  
    CMFCVisualManager::GetInstance ();

// create the standard visual manager  
    break; 
    case 1:  
    new CMyVisualManager ();

// create the first custom visual manager  
    break; 
    case 2:  
    new CMacStyle ();
*// create the second custom visual manager  
    break; 
 }  
 *// access the manager and set it properly  
    CMFCVisualManager::GetInstance ()->SetLook2000 ();
CMFCVisualManager::GetInstance ()->RedrawAll ();

}  
```  
  
## Example  
 The following example demonstrates how to retrieve the default values of a `CMFCVisualManager` object. This code snippet is part of the [Tasks Pane sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_TasksPane#1](../../mfc/reference/codesnippet/cpp/cmfcvisualmanager-class_1.h)]  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCBaseVisualManager](../../mfc/reference/cmfcbasevisualmanager-class.md)  
  
 [CMFCVisualManager](../../mfc/reference/cmfcvisualmanager-class.md)  
  
## Requirements  
 **Header:** afxvisualmanager.h  
  
##  <a name="cmfcvisualmanager__adjustframes"></a>  CMFCVisualManager::AdjustFrames  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
static void __stdcall AdjustFrames();
```  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__adjusttoolbars"></a>  CMFCVisualManager::AdjustToolbars  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
static void __stdcall AdjustToolbars();
```  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__alwayshighlight3dtabs"></a>  CMFCVisualManager::AlwaysHighlight3DTabs  
 The framework calls this method to determine whether 3D tabs should always be highlighted in the application.  
  
```  
virtual BOOL AlwaysHighlight3DTabs() const;

 
```  
  
### Return Value  
 `TRUE` if 3D tabs should be highlighted.  
  
### Remarks  
 Override this function in a derived visual manager and return `TRUE` if 3D tabs should always be highlighted. The default implementation of this method returns `FALSE`.  
  
##  <a name="cmfcvisualmanager__cmfcvisualmanager"></a>  CMFCVisualManager::CMFCVisualManager  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CMFCVisualManager(BOOL bTemporary = FALSE);
```  
  
### Parameters  
 [in] `bTemporary`  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__destroyinstance"></a>  CMFCVisualManager::DestroyInstance  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
static void __stdcall DestroyInstance(BOOL bAutoDestroyOnly = FALSE);
```  
  
### Parameters  
 [in] `bAutoDestroyOnly`  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__dodrawheadersortarrow"></a>  CMFCVisualManager::DoDrawHeaderSortArrow  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void DoDrawHeaderSortArrow(
    CDC* pDC,  
    CRect rect,  
    BOOL bIsUp,  
    BOOL bDlgCtrl);
```  
  
### Parameters  
 [in] `pDC`  
 [in] `rect`  
 [in] `bIsUp`  
 [in] `bDlgCtrl`  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__drawcomboborderwinxp"></a>  CMFCVisualManager::DrawComboBorderWinXP  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL DrawComboBorderWinXP(CDC*,
    CRect,
    BOOL,
    BOOL,
    BOOL);
```  
  
### Parameters  
 [in] `CDC*`  
 [in] `CRect`  
 [in] `BOOL`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__drawcombodropbuttonwinxp"></a>  CMFCVisualManager::DrawComboDropButtonWinXP  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL DrawComboDropButtonWinXP(CDC*,
    CRect,
    BOOL,
    BOOL,
    BOOL);
```  
  
### Parameters  
 [in] `CDC*`  
 [in] `CRect`  
 [in] `BOOL`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__drawpushbuttonwinxp"></a>  CMFCVisualManager::DrawPushButtonWinXP  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL DrawPushButtonWinXP(CDC*,
    CRect,
    CMFCButton*,
    UINT);
```  
  
### Parameters  
 [in] `CDC*`  
 [in] `CRect`  
 [in] `CMFCButton*`  
 [in] `UINT`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__drawtextonglass"></a>  CMFCVisualManager::DrawTextOnGlass  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL DrawTextOnGlass(
    CDC* pDC,  
    CString strText,  
    CRect rect,  
    DWORD dwFlags,  
    int nGlowSize = 0,  
    COLORREF clrText = (COLORREF)-1);
```  
  
### Parameters  
 [in] `pDC`  
 [in] `strText`  
 [in] `rect`  
 [in] `dwFlags`  
 [in] `nGlowSize`  
 [in] `clrText`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__enabletoolbarbuttonfill"></a>  CMFCVisualManager::EnableToolbarButtonFill  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void EnableToolbarButtonFill(BOOL bEnable = TRUE);
```  
  
### Parameters  
 [in] `bEnable`  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__getautohidebuttontextcolor"></a>  CMFCVisualManager::GetAutoHideButtonTextColor  
 The framework calls this method to retrieve the text color of an auto-hide button.  
  
```  
virtual COLORREF GetAutoHideButtonTextColor(CMFCAutoHideButton* pButton);
```  
  
### Parameters  
 [in] `pButton`  
 A pointer to an auto-hide button.  
  
### Return Value  
 A [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) parameter that specifies the text color of `pButton`.  
  
### Remarks  
 Override this method in a derived class to customize the text color of an auto-hide button in your application. To do this, return the color that you want your application to use as the text color.  
  
##  <a name="cmfcvisualmanager__getbuttonextraborder"></a>  CMFCVisualManager::GetButtonExtraBorder  
 The framework calls this method when it draws a toolbar button.  
  
```  
virtual CSize GetButtonExtraBorder() const;

 
```  
  
### Return Value  
 A [CSize](../../atl-mfc-shared/reference/csize-class.md) object that contains the extra size of the border for toolbar buttons.  
  
### Remarks  
 Some skins have to extend the borders of toolbar buttons. Override this method in a custom visual manager to extend the borders of toolbar buttons in your application. The default implementation of this method returns an empty size.  
  
##  <a name="cmfcvisualmanager__getcaptionbartextcolor"></a>  CMFCVisualManager::GetCaptionBarTextColor  
 The framework calls this method to retrieve the color of the text in the caption bar.  
  
```  
virtual COLORREF GetCaptionBarTextColor(CMFCCaptionBar* pBar);
```  
  
### Parameters  
 [in] `pBar`  
 A pointer to a caption bar.  
  
### Return Value  
 A [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) parameter that indicates the color of the text in `pBar`.  
  
### Remarks  
 Override this method in your derived class to customize the text color for a caption bar. In your overridden method, return the desired color.  
  
##  <a name="cmfcvisualmanager__getcaptionbuttonextraborder"></a>  CMFCVisualManager::GetCaptionButtonExtraBorder  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual CSize GetCaptionButtonExtraBorder() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__getdockingpanecaptionextraheight"></a>  CMFCVisualManager::GetDockingPaneCaptionExtraHeight  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual int GetDockingPaneCaptionExtraHeight() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__getdockingtabsborderssize"></a>  CMFCVisualManager::GetDockingTabsBordersSize  
 The framework calls this method when it draws a pane that is docked and tabbed.  
  
```  
virtual int GetDockingTabsBordersSize();
```  
  
### Return Value  
 An integer that indicates the border size of a pane that is docked and tabbed.  
  
### Remarks  
 A docked pane becomes tabbed when the user docks multiple panes to the same location in your application.  
  
 Override this method in a custom visual manager to change the border size of docked tabbed control bars. The default implementation returns -1.  
  
##  <a name="cmfcvisualmanager__gethighlightedmenuitemtextcolor"></a>  CMFCVisualManager::GetHighlightedMenuItemTextColor  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual COLORREF GetHighlightedMenuItemTextColor(CMFCToolBarMenuButton* pButton);
```  
  
### Parameters  
 [in] `pButton`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__getinstance"></a>  CMFCVisualManager::GetInstance  
 Returns a pointer to the current [CMFCVisualManager Class](../../mfc/reference/cmfcvisualmanager-class.md) object for the application.  
  
```  
static CMFCVisualManager* GetInstance();
```  
  
### Return Value  
 A pointer to a `CMFCVisualManager` object.  
  
### Remarks  
 An application can only have one `CMFCVisualManager` object associated with it. This includes any object derived from the `CMFCVisualManager` class. This method returns a pointer to the associated `CMFCVisualManager` object. If the application does not have an associated `CMFCVisualManager` object, this method will create one and associate it with the application.  
  
##  <a name="cmfcvisualmanager__getmditabsborderssize"></a>  CMFCVisualManager::GetMDITabsBordersSize  
 The framework calls this method to determine the border size of a MDITabs window before it draws the window.  
  
```  
virtual int GetMDITabsBordersSize();
```  
  
### Return Value  
 The border size of the MDITabs window.  
  
### Remarks  
 Override this function in a derived class to customize the border size of the MDITabs window.  
  
##  <a name="cmfcvisualmanager__getmenuimagemargin"></a>  CMFCVisualManager::GetMenuImageMargin  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual int GetMenuImageMargin() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__getmenuitemtextcolor"></a>  CMFCVisualManager::GetMenuItemTextColor  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual COLORREF GetMenuItemTextColor(
    CMFCToolBarMenuButton* pButton,  
    BOOL bHighlighted,  
    BOOL bDisabled);
```  
  
### Parameters  
 [in] `pButton`  
 [in] `bHighlighted`  
 [in] `bDisabled`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__getmenushadowdepth"></a>  CMFCVisualManager::GetMenuShadowDepth  
 Retrieves the width and height of the menu shadow.  
  
```  
int GetMenuShadowDepth() const;

 
```  
  
### Return Value  
 The width and height of the menu shadow in pixels.  
  
### Remarks  
 The width and height of the menu shadow are equivalent. The default value is 7 pixels.  
  
##  <a name="cmfcvisualmanager__getncbtnsize"></a>  CMFCVisualManager::GetNcBtnSize  
 Called by the framework when it has to retrieve the size of the system buttons.  
  
```  
virtual CSize GetNcBtnSize(BOOL bSmall) const;

 
```  
  
### Parameters  
 [in] `bSmall`  
 A Boolean parameter that indicates whether `GetNcBtnSize` should retrieve the size of a small or large system button. If `bSmall` is `TRUE`, `GetNcBtnSize` returns the size of a small system button. Otherwise, it returns the size of a large system button.  
  
### Return Value  
 A [CSize](../../atl-mfc-shared/reference/csize-class.md) parameter that indicate the size of the system buttons.  
  
### Remarks  
 The system buttons are the buttons in the caption of the frame window that map to the commands **Close**, **Minimize**, **Maximize**, and **Restore**. The size of these buttons depends on the current visual manager. Override this method if you want to customize the size of the system buttons in your application.  
  
##  <a name="cmfcvisualmanager__getpopupmenubordersize"></a>  CMFCVisualManager::GetPopupMenuBorderSize  
 The framework calls this method to obtain the border size of pop-up menus.  
  
```  
virtual int GetPopupMenuBorderSize() const;

 
```  
  
### Return Value  
 An integer that specifies the border size of pop-up menus.  
  
### Remarks  
 Override this method to customize the border size of pop-up menus in your application.  
  
##  <a name="cmfcvisualmanager__getpopupmenugap"></a>  CMFCVisualManager::GetPopupMenuGap  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual int GetPopupMenuGap() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__getpropertygridgroupcolor"></a>  CMFCVisualManager::GetPropertyGridGroupColor  
 The framework calls this method to get the background color of a property list.  
  
```  
virtual COLORREF GetPropertyGridGroupColor(CMFCPropertyGridCtrl* pPropList);
```  
  
### Parameters  
 [in] `pPropList`  
 A pointer to the property list that the framework is drawing.  
  
### Return Value  
 A [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) parameter that indicates the background color of `pPropList`.  
  
### Remarks  
 Override this function to customize the background color of a property list in your application.  
  
##  <a name="cmfcvisualmanager__getpropertygridgrouptextcolor"></a>  CMFCVisualManager::GetPropertyGridGroupTextColor  
 The framework calls this method to retrieve the text color of a property list.  
  
```  
virtual COLORREF GetPropertyGridGroupTextColor(CMFCPropertyGridCtrl* pPropList);
```  
  
### Parameters  
 [in] `pPropList`  
 A pointer to the property list.  
  
### Return Value  
 A [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) parameter that indicates the text color of the property list.  
  
### Remarks  
 Override this function to customize the text color of a property list in your application.  
  
##  <a name="cmfcvisualmanager__getribbonhyperlinktextcolor"></a>  CMFCVisualManager::GetRibbonHyperlinkTextColor  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual COLORREF GetRibbonHyperlinkTextColor(CMFCRibbonLinkCtrl* pHyperLink);
```  
  
### Parameters  
 [in] `pHyperLink`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__getribbonpopupbordersize"></a>  CMFCVisualManager::GetRibbonPopupBorderSize  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual int GetRibbonPopupBorderSize(const CMFCRibbonPanelMenu*) const;

 
```  
  
### Parameters  
 [in] `CMFCRibbonPanelMenu*`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__getribbonquickaccesstoolbarchevronoffset"></a>  CMFCVisualManager::GetRibbonQuickAccessToolBarChevronOffset  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual int GetRibbonQuickAccessToolBarChevronOffset();
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__getribbonquickaccesstoolbarrightmargin"></a>  CMFCVisualManager::GetRibbonQuickAccessToolBarRightMargin  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual int GetRibbonQuickAccessToolBarRightMargin();
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__getribbonquickaccesstoolbartextcolor"></a>  CMFCVisualManager::GetRibbonQuickAccessToolBarTextColor  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual COLORREF GetRibbonQuickAccessToolBarTextColor(BOOL bDisabled = FALSE);
```  
  
### Parameters  
 [in] `bDisabled`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__getribbonslidercolors"></a>  CMFCVisualManager::GetRibbonSliderColors  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void GetRibbonSliderColors(
    CMFCRibbonSlider* pSlider,  
    BOOL bIsHighlighted,  
    BOOL bIsPressed,  
    BOOL bIsDisabled,  
    COLORREF& clrLine,  
    COLORREF& clrFill);
```  
  
### Parameters  
 [in] `pSlider`  
 [in] `bIsHighlighted`  
 [in] `bIsPressed`  
 [in] `bIsDisabled`  
 [in] `clrLine`  
 [in] `clrFill`  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__getribbonstatusbartextcolor"></a>  CMFCVisualManager::GetRibbonStatusBarTextColor  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual COLORREF GetRibbonStatusBarTextColor(CMFCRibbonStatusBar* pStatusBar);
```  
  
### Parameters  
 [in] `pStatusBar`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__getshowallmenuitemsheight"></a>  CMFCVisualManager::GetShowAllMenuItemsHeight  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual int GetShowAllMenuItemsHeight(
    CDC* pDC,  
    const CSize& sizeDefault);
```  
  
### Parameters  
 [in] `pDC`  
 [in] `sizeDefault`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__getsmartdockingbaseguidecolors"></a>  CMFCVisualManager::GetSmartDockingBaseGuideColors  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void GetSmartDockingBaseGuideColors(
    COLORREF& clrBaseGroupBackground,  
    COLORREF& clrBaseGroupBorder);
```  
  
### Parameters  
 [in] `clrBaseGroupBackground`  
 [in] `clrBaseGroupBorder`  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__getsmartdockinghighlighttonecolor"></a>  CMFCVisualManager::GetSmartDockingHighlightToneColor  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual COLORREF GetSmartDockingHighlightToneColor();
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__getsmartdockingtheme"></a>  CMFCVisualManager::GetSmartDockingTheme  
 Returns a theme used to display smart docking markers.  
  
```  
virtual AFX_SMARTDOCK_THEME GetSmartDockingTheme();
```  
  
### Return Value  
 Returns one of the following enumerated values: AFX_SDT_DEFAULT, AFX_SDT_VS2005, AFX_SDT_VS2008.  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__getstatusbarpanetextcolor"></a>  CMFCVisualManager::GetStatusBarPaneTextColor  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual COLORREF GetStatusBarPaneTextColor(
    CMFCStatusBar* pStatusBar,  
    CMFCStatusBarPaneInfo* pPane);
```  
  
### Parameters  
 [in] `pStatusBar`  
 [in] `pPane`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__gettabframecolors"></a>  CMFCVisualManager::GetTabFrameColors  
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
 Override this function in a derived class if you want to customize the set of colors that the framework uses when it draws a tab window.  
  
##  <a name="cmfcvisualmanager__gettabhorzmargin"></a>  CMFCVisualManager::GetTabHorzMargin  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual int GetTabHorzMargin(const CMFCBaseTabCtrl*);
```  
  
### Parameters  
 [in] `CMFCBaseTabCtrl*`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__gettabtextcolor"></a>  CMFCVisualManager::GetTabTextColor  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual COLORREF GetTabTextColor(
    const CMFCBaseTabCtrl*,
    int,
    BOOL);
```  
  
### Parameters  
 [in] `CMFCBaseTabCtrl*`  
 [in] `int`  
 [in] `BOOL`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__gettaskspanegroupcaptionheight"></a>  CMFCVisualManager::GetTasksPaneGroupCaptionHeight  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
int GetTasksPaneGroupCaptionHeight() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__gettaskspanegroupcaptionhorzoffset"></a>  CMFCVisualManager::GetTasksPaneGroupCaptionHorzOffset  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
int GetTasksPaneGroupCaptionHorzOffset() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__gettaskspanegroupcaptionvertoffset"></a>  CMFCVisualManager::GetTasksPaneGroupCaptionVertOffset  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
int GetTasksPaneGroupCaptionVertOffset() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__gettaskspanegroupvertoffset"></a>  CMFCVisualManager::GetTasksPaneGroupVertOffset  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
int GetTasksPaneGroupVertOffset() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__gettaskspanehorzmargin"></a>  CMFCVisualManager::GetTasksPaneHorzMargin  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
int GetTasksPaneHorzMargin() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__gettaskspaneiconhorzoffset"></a>  CMFCVisualManager::GetTasksPaneIconHorzOffset  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
int GetTasksPaneIconHorzOffset() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__gettaskspaneiconvertoffset"></a>  CMFCVisualManager::GetTasksPaneIconVertOffset  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
int GetTasksPaneIconVertOffset() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__gettaskspanetaskhorzoffset"></a>  CMFCVisualManager::GetTasksPaneTaskHorzOffset  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
int GetTasksPaneTaskHorzOffset() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__gettaskspanevertmargin"></a>  CMFCVisualManager::GetTasksPaneVertMargin  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
int GetTasksPaneVertMargin() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__gettoolbarbuttontextcolor"></a>  CMFCVisualManager::GetToolbarButtonTextColor  
 The framework calls this method to determine the text color of a toolbar button.  
  
```  
virtual COLORREF GetToolbarButtonTextColor(
    CMFCToolBarButton* pButton,  
    CMFCVisualManager::AFX_BUTTON_STATE state);
```  
  
### Parameters  
 [in] `pButton`  
 A pointer to the toolbar button.  
  
 [in] `state`  
 The state of the toolbar button.  
  
### Return Value  
 The text color of `pButton` when it has the state indicated by `state`.  
  
### Remarks  
 The text color of a [CMFCToolBarButton Class](../../mfc/reference/cmfctoolbarbutton-class.md) object depends on the state of the button. The possible states of a toolbar button are `ButtonsIsRegular`, `ButtonsIsPressed`, or `ButtonsIsHighlighted`.  
  
 Override this function to customize the text color of a toolbar button in your application.  
  
##  <a name="cmfcvisualmanager__gettoolbarcustomizebuttonmargin"></a>  CMFCVisualManager::GetToolBarCustomizeButtonMargin  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual int GetToolBarCustomizeButtonMargin() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__gettoolbardisabledcolor"></a>  CMFCVisualManager::GetToolbarDisabledColor  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual COLORREF GetToolbarDisabledColor() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__gettoolbardisabledtextcolor"></a>  CMFCVisualManager::GetToolbarDisabledTextColor  
 The framework calls this function to determine the text color of toolbar buttons that are unavailable.  
  
```  
virtual COLORREF GetToolbarDisabledTextColor();
```  
  
### Return Value  
 The color that the framework uses for the text color of toolbar buttons that are unavailable.  
  
### Remarks  
 Override this method in a custom visual manager to set the text color of toolbar buttons that are unavailable .  
  
##  <a name="cmfcvisualmanager__gettoolbarhighlightcolor"></a>  CMFCVisualManager::GetToolbarHighlightColor  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual COLORREF GetToolbarHighlightColor();
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__gettooltipinfo"></a>  CMFCVisualManager::GetToolTipInfo  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL GetToolTipInfo(
    CMFCToolTipInfo& params,  
    UINT nType = (UINT)(-1));
```  
  
### Parameters  
 [in] `params`  
 [in] `nType`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__hasoverlappedautohidebuttons"></a>  CMFCVisualManager::HasOverlappedAutoHideButtons  
 Returns whether auto-hide buttons overlap in the current visual manager.  
  
```  
virtual BOOL HasOverlappedAutoHideButtons() const;

 
```  
  
### Return Value  
 `TRUE` if auto-hide buttons overlap; `FALSE` if they do not.  
  
##  <a name="cmfcvisualmanager__isautodestroy"></a>  CMFCVisualManager::IsAutoDestroy  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsAutoDestroy() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__isdefaultwinxppopupbutton"></a>  CMFCVisualManager::IsDefaultWinXPPopupButton  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL IsDefaultWinXPPopupButton(CMFCDesktopAlertWndButton*) const;

 
```  
  
### Parameters  
 [in] `CMFCDesktopAlertWndButton*`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__isdockingtabhasborder"></a>  CMFCVisualManager::IsDockingTabHasBorder  
 Returns whether the current visual manager draws borders around panes that are docked and tabbed.  
  
```  
virtual BOOL IsDockingTabHasBorder();
```  
  
### Return Value  
 `TRUE` if the visual manager draws borders around panes that are docked and tabbed; `FALSE` otherwise.  
  
### Remarks  
 Docked panes become tabbed when multiple panes are docked to the same location.  
  
##  <a name="cmfcvisualmanager__isembossdisabledimage"></a>  CMFCVisualManager::IsEmbossDisabledImage  
 Specifies whether the framework embosses images that are unavailable.  
  
```  
BOOL IsEmbossDisabledImage() const;

 
```  
  
### Return Value  
 Nonzero if the framework embosses images that are unavailable; otherwise 0.  
  
### Remarks  
 This method is called by [CMFCToolBarImages::Draw](../../mfc/reference/cmfctoolbarimages-class.md#cmfctoolbarimages__draw) when it draws an image on the toolbar that is unavailable.  
  
##  <a name="cmfcvisualmanager__isfadeinactiveimage"></a>  CMFCVisualManager::IsFadeInactiveImage  
 The framework calls this method when it draws inactive images on the toolbar or in a menu.  
  
```  
BOOL IsFadeInactiveImage() const;

 
```  
  
### Return Value  
 Nonzero if the framework uses the lighting effect when it draws inactive images on the toolbar or in a menu; otherwise 0.  
  
### Remarks  
 You can activate or deactivate the lighting effect by calling [CMFCVisualManager::SetFadeInactiveImage](#cmfcvisualmanager__setfadeinactiveimage). The lighting effect is what makes unavailable images appear faded.  
  
##  <a name="cmfcvisualmanager__isframemenucheckeditems"></a>  CMFCVisualManager::IsFrameMenuCheckedItems  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsFrameMenuCheckedItems() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__ishighlightonenotetabs"></a>  CMFCVisualManager::IsHighlightOneNoteTabs  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL IsHighlightOneNoteTabs() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__ishighlightwholemenuitem"></a>  CMFCVisualManager::IsHighlightWholeMenuItem  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL IsHighlightWholeMenuItem();
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__islayeredribbonkeytip"></a>  CMFCVisualManager::IsLayeredRibbonKeyTip  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL IsLayeredRibbonKeyTip() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__ismenuflatlook"></a>  CMFCVisualManager::IsMenuFlatLook  
 Indicates whether menu buttons appear flat.  
  
```  
BOOL IsMenuFlatLook() const;

 
```  
  
### Return Value  
 Nonzero if menu buttons appear flat; 0 otherwise.  
  
### Remarks  
 By default, menu buttons do not appear flat. Use the [CMFCVisualManager::SetMenuFlatLook](#cmfcvisualmanager__setmenuflatlook) method to change this behavior. When menu buttons appear flat, they do not change appearance when the user clicks on them.  
  
##  <a name="cmfcvisualmanager__isofficexpstylemenus"></a>  CMFCVisualManager::IsOfficeXPStyleMenus  
 Indicates whether the visual manager implements Office XP-style menus.  
  
```  
virtual BOOL IsOfficeXPStyleMenus() const;

 
```  
  
### Return Value  
 Nonzero if the visual manager displays Office XP-style menus; otherwise 0.  
  
### Remarks  
 The [CMFCPopupMenu Class](../../mfc/reference/cmfcpopupmenu-class.md) calls this method when it has to draw the menu and shadow. By default, this method returns `FALSE`. If you want to use pop-up menus similar to the pop-up menus in Office XP, override this method in a custom visual manager and return `TRUE`.  
  
##  <a name="cmfcvisualmanager__isoffsetpressedbutton"></a>  CMFCVisualManager::IsOffsetPressedButton  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL IsOffsetPressedButton() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__isownerdrawcaption"></a>  CMFCVisualManager::IsOwnerDrawCaption  
 Indicates whether the current visual manager implements owner-drawn captions.  
  
```  
virtual BOOL IsOwnerDrawCaption();
```  
  
### Return Value  
 `TRUE` if all the frame windows in the application have owner-draw captions; `FALSE` otherwise.  
  
##  <a name="cmfcvisualmanager__isownerdrawmenucheck"></a>  CMFCVisualManager::IsOwnerDrawMenuCheck  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL IsOwnerDrawMenuCheck();
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__isshadowhighlightedimage"></a>  CMFCVisualManager::IsShadowHighlightedImage  
 Indicates whether the visual manager displays shadows when rendering highlighted images.  
  
```  
BOOL IsShadowHighlightedImage() const;

 
```  
  
### Return Value  
 Nonzero when the visual manager displays shadows under highlighted images; 0 otherwise.  
  
##  <a name="cmfcvisualmanager__istoolbarbuttonfillenabled"></a>  CMFCVisualManager::IsToolbarButtonFillEnabled  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsToolbarButtonFillEnabled() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__istoolbarroundshape"></a>  CMFCVisualManager::IsToolbarRoundShape  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL IsToolbarRoundShape(CMFCToolBar*);
```  
  
### Parameters  
 [in] `CMFCToolBar*`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__iswindowsthemingsupported"></a>  CMFCVisualManager::IsWindowsThemingSupported  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL IsWindowsThemingSupported() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__onactivateapp"></a>  CMFCVisualManager::OnActivateApp  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnActivateApp(
    CWnd* pWnd,  
    BOOL bActive);
```  
  
### Parameters  
 [in] `pWnd`  
 [in] `bActive`  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__ondrawautohidebuttonborder"></a>  CMFCVisualManager::OnDrawAutoHideButtonBorder  
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
 A [CRect](../../atl-mfc-shared/reference/crect-class.md) parameter that contains the sizes of the borders.  
  
 [in] `pButton`  
 A pointer to the auto-hide button. The framework is drawing the border for this button.  
  
### Remarks  
 Override this method in a derived class if you want to customize the appearance of the border of an auto-hide button. By default, this method fills a flat border with the default shadow color for your application.  
  
 The `rectBorderSize` parameter does not contain the coordinates of the border. It contains the size of the border in the `top`, `bottom`, `left`, and `right` data members. A value less than or equal to 0 indicates no border on that side of the auto-hide button.  
  
##  <a name="cmfcvisualmanager__ondrawbargripper"></a>  CMFCVisualManager::OnDrawBarGripper  
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
 The default implementation of this method displays the standard gripper. To customize the appearance of the gripper, override this method in a custom class derived from the [CMFCVisualManager Class](../../mfc/reference/cmfcvisualmanager-class.md).  
  
##  <a name="cmfcvisualmanager__ondrawbrowsebutton"></a>  CMFCVisualManager::OnDrawBrowseButton  
 The framework calls this method when it draws the browse button for an edit control.  
  
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
 A pointer to a device context.  
  
 [in] `rect`  
 A rectangle that specifies the boundary for the browse button.  
  
 [in] `pEdit`  
 A pointer to an edit control. The visual manager draws the browse button for this edit control.  
  
 [in] `state`  
 An enumerated value that specifies the state of the button.  
  
 [out] `clrText`  
 A reference to a [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) parameter. This is a reserved value and is currently unused.  
  
### Return Value  
 `TRUE` if successful; otherwise `FALSE`.  
  
### Remarks  
 Override this function in a derived class if you want to customize the appearance of browse buttons in instances of the [CMFCEditBrowseCtrl Class](../../mfc/reference/cmfceditbrowsectrl-class.md). The possible values for the state of the button are `ButtonsIsRegular`, `ButtonsIsPressed`, and `ButtonsIsHighlighted`.  
  
##  <a name="cmfcvisualmanager__ondrawbuttonborder"></a>  CMFCVisualManager::OnDrawButtonBorder  
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
  
##  <a name="cmfcvisualmanager__ondrawbuttonseparator"></a>  CMFCVisualManager::OnDrawButtonSeparator  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawButtonSeparator(
    CDC* pDC,  
    CMFCToolBarButton* pButton,  
    CRect rect,  
    CMFCVisualManager::AFX_BUTTON_STATE state,  
    BOOL bHorz);
```  
  
### Parameters  
 [in] `pDC`  
 [in] `pButton`  
 [in] `rect`  
 [in] `state`  
 [in] `bHorz`  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__ondrawcaptionbarborder"></a>  CMFCVisualManager::OnDrawCaptionBarBorder  
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
 A pointer to a `CMFCCaptionBar` object. The framework draws this caption bar.  
  
 [in] `rect`  
 A rectangle that specifies the boundaries of the caption bar.  
  
 [in] `clrBarBorder`  
 The color of the border.  
  
 [in] `bFlatBorder`  
 A Boolean parameter that specifies whether the border has a flat, 2D appearance.  
  
### Remarks  
 Override this method in a derived class to customize the appearance of the border of a caption bar.  
  
##  <a name="cmfcvisualmanager__ondrawcaptionbarbuttonborder"></a>  CMFCVisualManager::OnDrawCaptionBarButtonBorder  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawCaptionBarButtonBorder(
    CDC* pDC,  
    CMFCCaptionBar* pBar,  
    CRect rect,  
    BOOL bIsPressed,  
    BOOL bIsHighlighted,  
    BOOL bIsDisabled,  
    BOOL bHasDropDownArrow,  
    BOOL bIsSysButton);
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
  
### Remarks  
  
##  <a name="cmfcvisualmanager__ondrawcaptionbarinfoarea"></a>  CMFCVisualManager::OnDrawCaptionBarInfoArea  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawCaptionBarInfoArea(
    CDC* pDC,  
    CMFCCaptionBar* pBar,  
    CRect rect);
```  
  
### Parameters  
 [in] `pDC`  
 [in] `pBar`  
 [in] `rect`  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__ondrawcaptionbutton"></a>  CMFCVisualManager::OnDrawCaptionButton  
 The framework calls this method when it draws a [CMFCCaptionButton](../../mfc/reference/cmfccaptionbutton-class.md) object.  
  
```  
virtual void OnDrawCaptionButton (
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
 A pointer to a device context.  
  
 [in] `pButton`  
 A pointer to a `CMFCCaptionButton` object. The framework draws this caption button.  
  
 [in] `bActive`  
 A Boolean parameter that specifies whether the button is active.  
  
 [in] `bHorz`  
 A Boolean parameter that specifies whether the caption is horizontal.  
  
 [in] `bMaximized`  
 A Boolean parameter that specifies whether the parent pane is maximized.  
  
 [in] `bDisabled`  
 A Boolean parameter that specifies whether the caption button is disabled.  
  
 [in] `nImageID`  
 The image index for the icon to use for the button. If `nImageID` is -1, this method uses the image index recorded in `pButton`.  
  
### Remarks  
 The default implementation of this method displays a small button from the global instance of the `CMenuImages` class. The buttons are listed in the header file for `CMenuImages`. Some examples include `CMenuImages::IdClose`, `CMenuImages::IdArowLeft`, `CMenuImages::IdArowRight`, `CMenuImages::IdArowDown`, `CMenuImages::IdArowUp`, and `CMenuImages::IdPinHorz`.  
  
 Override this method in a derived class to customize the appearance of caption buttons.  
  
##  <a name="cmfcvisualmanager__ondrawcheckbox"></a>  CMFCVisualManager::OnDrawCheckBox  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawCheckBox(
    CDC* pDC,  
    CRect rect,  
    BOOL bHighlighted,  
    BOOL bChecked,  
    BOOL bEnabled);
```  
  
### Parameters  
 [in] `pDC`  
 [in] `rect`  
 [in] `bHighlighted`  
 [in] `bChecked`  
 [in] `bEnabled`  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__ondrawcheckboxex"></a>  CMFCVisualManager::OnDrawCheckBoxEx  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
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
 [in] `rect`  
 [in] `nState`  
 [in] `bHighlighted`  
 [in] `bPressed`  
 [in] `bEnabled`  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__ondrawcomboborder"></a>  CMFCVisualManager::OnDrawComboBorder  
 The framework calls this method when it draws the border around an instance of the [CMFCToolBarComboBoxButton Class](../../mfc/reference/cmfctoolbarcomboboxbutton-class.md).  
  
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
  
##  <a name="cmfcvisualmanager__ondrawcombodropbutton"></a>  CMFCVisualManager::OnDrawComboDropButton  
 The framework calls this method when it draws the drop button of a [CMFCToolBarComboBoxButton](../../mfc/reference/cmfctoolbarcomboboxbutton-class.md).  
  
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
 A pointer to a `CMFCToolBarComboBoxButton` object. The framework draws the drop button for this combo box button.  
  
### Remarks  
 Override this method in your derived visual manager to customize the appearance of the drop button of a combo box button.  
  
##  <a name="cmfcvisualmanager__ondrawcontrolborder"></a>  CMFCVisualManager::OnDrawControlBorder  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawControlBorder(CWnd* pWndCtrl);
```  
  
### Parameters  
 [in] `pWndCtrl`  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__ondrawdefaultribbonimage"></a>  CMFCVisualManager::OnDrawDefaultRibbonImage  
 The framework calls this method when it draws the default image that is used for the ribbon button.  
  
```  
virtual void OnDrawDefaultRibbonImage(
    CDC* pDC,  
    CRect rectImage,  
    BOOL bIsDisabled = FALSE,  
    BOOL bIsPressed = FALSE,  
    BOOL bIsHighlighted = FALSE);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rectImage`  
 A rectangle that specifies the boundaries of the default image.  
  
 [in] `bIsDisabled`  
 A Boolean parameter that indicates whether the ribbon button is unavailable.  
  
 [in] `bIsPressed`  
 A Boolean parameter that indicates whether the ribbon button is pressed.  
  
 [in] `bIsHighlighted`  
 A Boolean parameter that indicates whether the ribbon button is highlighted.  
  
### Remarks  
 Override this method in a derived visual manager if you want to customize the image that is used for the ribbon button.  
  
##  <a name="cmfcvisualmanager__ondraweditborder"></a>  CMFCVisualManager::OnDrawEditBorder  
 The framework calls this method when it draws the border around an instance of the [CMFCToolBarEditBoxButton Class](../../mfc/reference/cmfctoolbareditboxbutton-class.md).  
  
```  
virtual void OnDrawEditBorder(
    CDC* pDC,  
    CRect rect,  
    BOOL bDisabled,  
    BOOL bIsHighlighted,  
    CMFCToolBarEditBoxButton* pButton);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rect`  
 A rectangle that specifies the boundaries of the `CMFCToolBarEditBoxButton` object.  
  
 [in] `bDisabled`  
 A Boolean parameter that indicates whether the button is unavailable.  
  
 [in] `bIsHighlighted`  
 A Boolean parameter that indicates whether the button is highlighted.  
  
 [in] `pButton`  
 A pointer to a `CMFCToolBarEditBoxButton` object. The framework draws the border of this edit box button.  
  
### Remarks  
 Override this method in a derived visual manager to customize the border of a `CMFCToolBarEditBoxButton` object.  
  
##  <a name="cmfcvisualmanager__ondrawexpandingbox"></a>  CMFCVisualManager::OnDrawExpandingBox  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawExpandingBox(
    CDC* pDC,  
    CRect rect,  
    BOOL bIsOpened,  
    COLORREF colorBox);
```  
  
### Parameters  
 [in] `pDC`  
 [in] `rect`  
 [in] `bIsOpened`  
 [in] `colorBox`  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__ondrawfloatingtoolbarborder"></a>  CMFCVisualManager::OnDrawFloatingToolbarBorder  
 The framework calls this method when it draws the border of a floating toolbar.  
  
```  
virtual void OnDrawFloatingToolbarBorder(
    CDC* pDC,  
    CMFCBaseToolBar* pToolBar,  
    CRect rectBorder,  
    CRect rectBorderSize);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `pToolBar`  
 A pointer to the floating toolbar.  
  
 [in] `rectBorder`  
 A rectangle that specifies the boundaries of the floating toolbar.  
  
 [in] `rectBorderSize`  
 A rectangle that specifies the border size of the toolbar.  
  
### Remarks  
 A floating toolbar is a toolbar that appears as a mini-frame window. Usually, this occurs when a user drags a toolbar so that it is no longer docked.  
  
 The size of the border is specified by the corresponding parameter in `rectBorderSize`. For example, the width of the top border of the toolbar is specified by `rectBorderSize.top`.  
  
 Override this method in a derived visual manager to customize the appearance of the border of a floating toolbar.  
  
##  <a name="cmfcvisualmanager__ondrawheaderctrlborder"></a>  CMFCVisualManager::OnDrawHeaderCtrlBorder  
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
 A pointer to a `CMFCHeaderCtrl` object. The framework draws the border of this header control.  
  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rect`  
 A rectangle that specifies the boundaries of the header control.  
  
 [in] `bIsPressed`  
 A Boolean parameter that indicates whether the header control is pressed.  
  
 [in] `bIsHighlighted`  
 A Boolean parameter that indicates whether the header control is highlighted.  
  
### Remarks  
 Override this method in a derived visual manager to customize the border of the header control.  
  
##  <a name="cmfcvisualmanager__ondrawheaderctrlsortarrow"></a>  CMFCVisualManager::OnDrawHeaderCtrlSortArrow  
 The framework calls this function when it draws the sort arrow of a header control.  
  
```  
virtual void OnDrawHeaderCtrlSortArrow(
    CMFCHeaderCtrl* pCtrl,  
    CDC* pDC,  
    CRect& rect,  
    BOOL bIsUp);
```  
  
### Parameters  
 [in] `pCtrl`  
 A pointer to a header control. The visual manager draws the sort arrow of this [CMFCHeaderCtrl Class](../../mfc/reference/cmfcheaderctrl-class.md) object.  
  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rect`  
 A rectangle that specifies the boundaries of the sort arrow.  
  
 [in] `bIsUp`  
 A Boolean that specifies the direction of the sort arrow.  
  
### Remarks  
 If `bIsUp` is `TRUE`, the visual manager draws an up sort arrow. If it is `FALSE`, the visual manager draws a down sort arrow. Override `OnDrawHeaderCtrlSortArrow` in a derived class to customize the appearance of the sort button.  
  
##  <a name="cmfcvisualmanager__ondrawmenuarrowoncustomizelist"></a>  CMFCVisualManager::OnDrawMenuArrowOnCustomizeList  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawMenuArrowOnCustomizeList(
    CDC* pDC,  
    CRect rectCommand,  
    BOOL bSelected);
```  
  
### Parameters  
 [in] `pDC`  
 [in] `rectCommand`  
 [in] `bSelected`  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__ondrawmenuborder"></a>  CMFCVisualManager::OnDrawMenuBorder  
 The framework calls this method when it draws the border of a [CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md).  
  
```  
virtual void OnDrawMenuBorder(
    CDC* pDC,  
    CMFCPopupMenu* pMenu,  
    CRect rect);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to the device context for a `CMFCPopupMenu` object.  
  
 [in] `pMenu`  
 A pointer to a `CMFCPopupMenu` object. The framework draws a border around this popup menu.  
  
 [in] `rect`  
 A rectangle that specifies the boundaries of the popup menu.  
  
### Remarks  
 The default implementation of this method displays the standard menu border. Override this method in a derived visual manager to customize the appearance of the menu border.  
  
##  <a name="cmfcvisualmanager__ondrawmenucheck"></a>  CMFCVisualManager::OnDrawMenuCheck  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawMenuCheck(
    CDC* pDC,  
    CMFCToolBarMenuButton* pButton,  
    CRect rect,  
    BOOL bHighlight,  
    BOOL bIsRadio);
```  
  
### Parameters  
 [in] `pDC`  
 [in] `pButton`  
 [in] `rect`  
 [in] `bHighlight`  
 [in] `bIsRadio`  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__ondrawmenuitembutton"></a>  CMFCVisualManager::OnDrawMenuItemButton  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawMenuItemButton(
    CDC* pDC,  
    CMFCToolBarMenuButton* pButton,  
    CRect rectButton,  
    BOOL bHighlight,  
    BOOL bDisabled);
```  
  
### Parameters  
 [in] `pDC`  
 [in] `pButton`  
 [in] `rectButton`  
 [in] `bHighlight`  
 [in] `bDisabled`  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__ondrawmenulabel"></a>  CMFCVisualManager::OnDrawMenuLabel  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual COLORREF OnDrawMenuLabel(
    CDC* pDC,  
    CRect rect);
```  
  
### Parameters  
 [in] `pDC`  
 [in] `rect`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__ondrawmenuresizebar"></a>  CMFCVisualManager::OnDrawMenuResizeBar  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawMenuResizeBar(
    CDC* pDC,  
    CRect rect,  
    int nResizeFlags);
```  
  
### Parameters  
 [in] `pDC`  
 [in] `rect`  
 [in] `nResizeFlags`  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__ondrawmenuscrollbutton"></a>  CMFCVisualManager::OnDrawMenuScrollButton  
 The framework calls this method when it draws a menu scroll button.  
  
```  
virtual void OnDrawMenuScrollButton(
    CDC* pDC,  
    CRect rect,  
    BOOL bIsScrollDown,  
    BOOL bIsHighlited,  
    BOOL bIsPressed,  
    BOOL bIsDisabled);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rect`  
 A rectangle that specifies the boundaries of the scroll button.  
  
 [in] `bIsScrollDown`  
 A Boolean that indicates which type of button the visual manager draws. A value of `TRUE` indicates the visual manager draws a down button.  
  
 [in] `bIsHighlited`  
 A Boolean that indicates whether the button is highlighted.  
  
 [in] `bIsPressed`  
 A Boolean that indicates whether the button is pressed.  
  
 [in] `bIsDisabled`  
 A Boolean that indicates whether the button is disabled.  
  
### Remarks  
 Override this method in a derived visual manager to customize the appearance of menu scroll buttons. Menu scroll buttons appear on the edge of pop-up menus when the total height of the menu items exceeds the height of the pop-up menu.  
  
##  <a name="cmfcvisualmanager__ondrawmenushadow"></a>  CMFCVisualManager::OnDrawMenuShadow  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawMenuShadow(
    CDC* pDC,  
    const CRect& rectClient,  
    const CRect& rectExclude,  
    int nDepth,  
    int iMinBrightness,  
    int iMaxBrightness,  
    CBitmap* pBmpSaveBottom,  
    CBitmap* pBmpSaveRight,  
    BOOL bRTL);
```  
  
### Parameters  
 [in] `pDC`  
 [in] `rectClient`  
 [in] `rectExclude`  
 [in] `nDepth`  
 [in] `iMinBrightness`  
 [in] `iMaxBrightness`  
 [in] `pBmpSaveBottom`  
 [in] `pBmpSaveRight`  
 [in] `bRTL`  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__ondrawmenusystembutton"></a>  CMFCVisualManager::OnDrawMenuSystemButton  
 The framework calls this method when it draws a menu system button for the application.  
  
```  
virtual void OnDrawMenuSystemButton(
    CDC* pDC,  
    CRect rect,  
    UINT uiSystemCommand,  
    UINT nStyle,  
    BOOL bHighlight);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rect`  
 A rectangle that specifies the boundaries of the button.  
  
 [in] `uiSystemCommand`  
 A flag that specifies which system command is associated with the button. Possible values are SC_CLOSE, SC_MINIMIZE, and SC_RESTORE.  
  
 [in] `nStyle`  
 A flag that specifies the current style of the button. Possible values are TBBS_PRESSED, TBBS_DISABLED, and 0.  
  
 [in] `bHighlight`  
 A Boolean parameter that specifies whether the button is highlighted.  
  
### Remarks  
 The menu system buttons are the **Close**, **Minimize**, **Maximize**, and **Restore** buttons located on the title bar.  
  
 The default implementation for this method calls [CDC::DrawFrameControl](../../mfc/reference/cdc-class.md#cdc__drawframecontrol) with the `DFC_CAPTION` type. Override this method in your derived visual manager class to customize the appearance of system buttons.  
  
##  <a name="cmfcvisualmanager__ondrawminiframeborder"></a>  CMFCVisualManager::OnDrawMiniFrameBorder  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawMiniFrameBorder(
    CDC* pDC,  
    CPaneFrameWnd* pFrameWnd,  
    CRect rectBorder,  
    CRect rectBorderSize);
```  
  
### Parameters  
 [in] `pDC`  
 [in] `pFrameWnd`  
 [in] `rectBorder`  
 [in] `rectBorderSize`  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__ondrawoutlookbarsplitter"></a>  CMFCVisualManager::OnDrawOutlookBarSplitter  
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
  
##  <a name="cmfcvisualmanager__ondrawoutlookpagebuttonborder"></a>  CMFCVisualManager::OnDrawOutlookPageButtonBorder  
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
  
##  <a name="cmfcvisualmanager__ondrawpaneborder"></a>  CMFCVisualManager::OnDrawPaneBorder  
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
  
##  <a name="cmfcvisualmanager__ondrawpanecaption"></a>  CMFCVisualManager::OnDrawPaneCaption  
 The framework calls this method when it draws a caption for an instance of the [CDockablePane Class](../../mfc/reference/cdockablepane-class.md).  
  
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
 A pointer to a `CDockablePane` object. The framework draws the caption for this pane.  
  
 [in] `bActive`  
 A Boolean parameter that indicates whether the control bar is active.  
  
 [in] `rectCaption`  
 A rectangle that specifies the boundaries of the caption.  
  
 [in] `rectButtons`  
 A rectangle that specifies the boundaries of the caption buttons.  
  
### Return Value  
 A [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) parameter that indicates the text color of the caption.  
  
### Remarks  
 Override this method in a derived visual manager to customize the appearance of pane captions.  
  
##  <a name="cmfcvisualmanager__ondrawpanedivider"></a>  CMFCVisualManager::OnDrawPaneDivider  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawPaneDivider(
    CDC* pDC,  
    CPaneDivider* pSlider,  
    CRect rect,  
    BOOL bAutoHideMode);
```  
  
### Parameters  
 [in] `pDC`  
 [in] `pSlider`  
 [in] `rect`  
 [in] `bAutoHideMode`  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__ondrawpopupwindowborder"></a>  CMFCVisualManager::OnDrawPopupWindowBorder  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawPopupWindowBorder(
    CDC* pDC,  
    CRect rect);
```  
  
### Parameters  
 [in] `pDC`  
 [in] `rect`  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__ondrawpopupwindowbuttonborder"></a>  CMFCVisualManager::OnDrawPopupWindowButtonBorder  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawPopupWindowButtonBorder(
    CDC* pDC,  
    CRect rectClient,  
    CMFCDesktopAlertWndButton* pButton);
```  
  
### Parameters  
 [in] `pDC`  
 [in] `rectClient`  
 [in] `pButton`  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__ondrawpopupwindowcaption"></a>  CMFCVisualManager::OnDrawPopupWindowCaption  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual COLORREF OnDrawPopupWindowCaption(
    CDC* pDC,  
    CRect rectCaption,  
    CMFCDesktopAlertWnd* pPopupWnd);
```  
  
### Parameters  
 [in] `pDC`  
 [in] `rectCaption`  
 [in] `pPopupWnd`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__ondrawribbonapplicationbutton"></a>  CMFCVisualManager::OnDrawRibbonApplicationButton  
 The framework calls this method when it draws the **Main Button** on the ribbon.  
  
```  
virtual void OnDrawRibbonApplicationButton(
    CDC* pDC,  
    CMFCRibbonButton* pButton);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `pButton`  
 A pointer to the **Main Button** on the ribbon.  
  
### Remarks  
 Override this method in a derived visual manager if you want to customize the appearance of the **Main Button**.  
  
##  <a name="cmfcvisualmanager__ondrawribbonbuttonborder"></a>  CMFCVisualManager::OnDrawRibbonButtonBorder  
 The framework calls this method when it draws the border of a button on the ribbon.  
  
```  
virtual void OnDrawRibbonButtonBorder(
    CDC* pDC,  
    CMFCRibbonButton* pButton);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `pButton`  
 A pointer to a [CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md) object. The framework draws the border for this ribbon button.  
  
### Remarks  
 Override this method in a derived visual manager to customize the appearance of a `CMFCRibbonButton`.  
  
##  <a name="cmfcvisualmanager__ondrawribbonbuttonsgroup"></a>  CMFCVisualManager::OnDrawRibbonButtonsGroup  
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
  
##  <a name="cmfcvisualmanager__ondrawribboncaption"></a>  CMFCVisualManager::OnDrawRibbonCaption  
 The framework calls this method when it draws the caption bar of the main frame window. The framework calls this method only if the ribbon is integrated with the main frame.  
  
```  
virtual void OnDrawRibbonCaption(
    CDC* pDC,  
    CMFCRibbonBar* pBar,  
    CRect rect,  
    CRect rectText);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `pBar`  
 A pointer to a ribbon bar. The visual manager draws this ribbon bar.  
  
 [in] `rect`  
 A rectangle that specifies the boundaries of the ribbon bar.  
  
 [in] `rectText`  
 A rectangle that specifies the boundaries for the text of the caption bar.  
  
### Remarks  
 Override this function in a derived visual manager to customize the appearance of the caption bar. This method affects the caption bar only if the ribbon is integrated with the main frame window.  
  
##  <a name="cmfcvisualmanager__ondrawribboncaptionbutton"></a>  CMFCVisualManager::OnDrawRibbonCaptionButton  
 The framework calls this method when it draws a caption button located on the ribbon bar.  
  
```  
virtual void OnDrawRibbonCaptionButton(
    CDC* pDC,  
    CMFCRibbonCaptionButton* pButton);
```  
  
### Parameters  
 `pDC`  
 A pointer to a device context.  
  
 `pButton`  
 A pointer to a `CMFCRibbonCaptionButton` class. The framework draws this caption button.  
  
### Remarks  
 Override this method in a derived visual manager to customize the appearance of a caption button on the ribbon.  
  
##  <a name="cmfcvisualmanager__ondrawribboncategory"></a>  CMFCVisualManager::OnDrawRibbonCategory  
 The framework calls this method when it draws a [CMFCRibbonCategory](../../mfc/reference/cmfcribboncategory-class.md) object.  
  
```  
virtual void OnDrawRibbonCategory(
    CDC* pDC,  
    CMFCRibbonCategory* pCategory,  
    CRect rectCategory);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `pCategory`  
 A pointer to a `CMFCRibbonCategory` object. The framework draws this ribbon category.  
  
 [in] `rectCategory`  
 A rectangle that specifies the boundary of all the category panels on the ribbon.  
  
### Remarks  
 A ribbon category is a logical grouping of menu commands. For more information about ribbon categories, see [CMFCRibbonCategory Class](../../mfc/reference/cmfcribboncategory-class.md).  
  
 Override this method in a derived visual manager to customize the appearance of a ribbon category.  
  
##  <a name="cmfcvisualmanager__ondrawribboncategorycaption"></a>  CMFCVisualManager::OnDrawRibbonCategoryCaption  
 The framework calls this method when it draws the caption bar for a ribbon category.  
  
```  
virtual COLORREF OnDrawRibbonCategoryCaption(
    CDC* pDC,  
    CMFCRibbonContextCaption* pContextCaption);
```  
  
### Parameters  
 [in] `pDC`  
 The drawing context.  
  
 [in] `pContextCaption`  
 A pointer to a caption bar. The visual manager draws this [CMFCRibbonContextCaption Class](../../mfc/reference/cmfcribboncontextcaption-class.md) object.  
  
### Return Value  
 A [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) parameter that indicates the color of the text on the caption bar.  
  
### Remarks  
 Override this method in a derived class to customize the appearance of the caption bar for a ribbon category. For more information about the caption bar, see [CMFCRibbonContextCaption Class](../../mfc/reference/cmfcribboncontextcaption-class.md).  
  
##  <a name="cmfcvisualmanager__ondrawribboncategoryscroll"></a>  CMFCVisualManager::OnDrawRibbonCategoryScroll  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawRibbonCategoryScroll(
    CDC* pDC,  
    CRibbonCategoryScroll* pScroll);
```  
  
### Parameters  
 [in] `pDC`  
 [in] `pScroll`  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__ondrawribboncategorytab"></a>  CMFCVisualManager::OnDrawRibbonCategoryTab  
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
 A pointer to an instance of the `CMFCRibbonTab` class. The framework draws this tab.  
  
 [in] `bIsActive`  
 A Boolean parameter that indicates whether the tab is active.  
  
### Return Value  
 The color that is used for text on the ribbon category tab.  
  
### Remarks  
 Override this method in a derived visual manager to customize the appearance of a ribbon category tab. For more information about ribbon categories, see [CMFCRibbonCategory Class](../../mfc/reference/cmfcribboncategory-class.md).  
  
##  <a name="cmfcvisualmanager__ondrawribboncheckboxonlist"></a>  CMFCVisualManager::OnDrawRibbonCheckBoxOnList  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawRibbonCheckBoxOnList(
    CDC* pDC,  
    CMFCRibbonCheckBox* pCheckBox,  
    CRect rect,  
    BOOL bIsSelected,  
    BOOL bHighlighted);
```  
  
### Parameters  
 [in] `pDC`  
 [in] `pCheckBox`  
 [in] `rect`  
 [in] `bIsSelected`  
 [in] `bHighlighted`  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__ondrawribboncolorpalettebox"></a>  CMFCVisualManager::OnDrawRibbonColorPaletteBox  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawRibbonColorPaletteBox(
    CDC* pDC,  
    CMFCRibbonColorButton* pColorButton,  
    CMFCRibbonGalleryIcon* pIcon,  
    COLORREF color,  
    CRect rect,  
    BOOL bDrawTopEdge,  
    BOOL bDrawBottomEdge,  
    BOOL bIsHighlighted,  
    BOOL bIsChecked,  
    BOOL bIsDisabled);
```  
  
### Parameters  
 [in] `pDC`  
 [in] `pColorButton`  
 [in] `pIcon`  
 [in] `color`  
 [in] `rect`  
 [in] `bDrawTopEdge`  
 [in] `bDrawBottomEdge`  
 [in] `bIsHighlighted`  
 [in] `bIsChecked`  
 [in] `bIsDisabled`  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__ondrawribbondefaultpanebutton"></a>  CMFCVisualManager::OnDrawRibbonDefaultPaneButton  
 The framework calls this method when it draws the default button for the ribbon pane.  
  
```  
virtual void OnDrawRibbonDefaultPaneButton(
    CDC* pDC,  
    CMFCRibbonButton* pButton);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `pButton`  
 A pointer to the default button for the ribbon pane.  
  
### Remarks  
 The framework displays the default button when a ribbon pane is resized to its minimal size and there is no area to display the content for the panel. When the user clicks on the default button, the framework displays a drop down menu that contains the content for the panel.  
  
 Override this method in a derived visual manager to customize the appearance of the default button.  
  
##  <a name="cmfcvisualmanager__ondrawribbondefaultpanebuttoncontext"></a>  CMFCVisualManager::OnDrawRibbonDefaultPaneButtonContext  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawRibbonDefaultPaneButtonContext(
    CDC* pDC,  
    CMFCRibbonButton* pButton);
```  
  
### Parameters  
 [in] `pDC`  
 [in] `pButton`  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__ondrawribbondefaultpanebuttonindicator"></a>  CMFCVisualManager::OnDrawRibbonDefaultPaneButtonIndicator  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawRibbonDefaultPaneButtonIndicator(
    CDC* pDC,  
    CMFCRibbonButton* pButton,  
    CRect rect,  
    BOOL bIsSelected,  
    BOOL bHighlighted);
```  
  
### Parameters  
 [in] `pDC`  
 [in] `pButton`  
 [in] `rect`  
 [in] `bIsSelected`  
 [in] `bHighlighted`  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__ondrawribbongalleryborder"></a>  CMFCVisualManager::OnDrawRibbonGalleryBorder  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawRibbonGalleryBorder(
    CDC* pDC,  
    CMFCRibbonGallery* pButton,  
    CRect rectBorder);
```  
  
### Parameters  
 [in] `pDC`  
 [in] `pButton`  
 [in] `rectBorder`  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__ondrawribbongallerybutton"></a>  CMFCVisualManager::OnDrawRibbonGalleryButton  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawRibbonGalleryButton(
    CDC* pDC,  
    CMFCRibbonGalleryIcon* pButton);
```  
  
### Parameters  
 [in] `pDC`  
 [in] `pButton`  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__ondrawribbonkeytip"></a>  CMFCVisualManager::OnDrawRibbonKeyTip  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawRibbonKeyTip(
    CDC* pDC,  
    CMFCRibbonBaseElement* pElement,  
    CRect rect,  
    CString str);
```  
  
### Parameters  
 [in] `pDC`  
 [in] `pElement`  
 [in] `rect`  
 [in] `str`  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__ondrawribbonlabel"></a>  CMFCVisualManager::OnDrawRibbonLabel  
 The framework calls this method when it draws the label of the ribbon.  
  
```  
virtual void OnDrawRibbonLabel(
    CDC* pDC,  
    CMFCRibbonLabel* pLabel,  
    CRect rect);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `pLabel`  
 A pointer to a [CMFCRibbonLabel](../../mfc/reference/cmfcribbonlabel-class.md) object. The framework draws this ribbon label.  
  
 [in] `rect`  
 A rectangle that specifies the boundaries of the ribbon panel.  
  
### Remarks  
 Override this method in a derived class to customize the ribbon label.  
  
##  <a name="cmfcvisualmanager__ondrawribbonmainpanelbuttonborder"></a>  CMFCVisualManager::OnDrawRibbonMainPanelButtonBorder  
 The framework calls this method when it draws the border of a [CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md) that is positioned on the **Main** panel.  
  
```  
virtual void OnDrawRibbonMainPanelButtonBorder(
    CDC* pDC,  
    CMFCRibbonButton* pButton);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `pButton`  
 A pointer to a `CMFCRibbonButton` located on the main panel of the ribbon. The framework draws the border for this button.  
  
### Remarks  
 Override this method in a derived visual manager to customize the appearance of the border for a `CMFCRibbonButton` on the **Main** panel.  
  
##  <a name="cmfcvisualmanager__ondrawribbonmainpanelframe"></a>  CMFCVisualManager::OnDrawRibbonMainPanelFrame  
 The framework calls this method when it draws the frame around the [CMFCRibbonMainPanel](../../mfc/reference/cmfcribbonmainpanel-class.md).  
  
```  
virtual void OnDrawRibbonMainPanelFrame(
    CDC* pDC,  
    CMFCRibbonMainPanel* pPanel,  
    CRect rect);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `pPanel`  
 A pointer to the `CMFCRibbonMainPanel`.  
  
 [in] `rect`  
 A rectangle that specifies the boundaries of the `CMFCRibbonMainPanel`.  
  
### Remarks  
 Override this method in a derived visual manager to customize the appearance of the frame for the `CMFCRibbonMainPanel`.  
  
##  <a name="cmfcvisualmanager__ondrawribbonmenucheckframe"></a>  CMFCVisualManager::OnDrawRibbonMenuCheckFrame  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawRibbonMenuCheckFrame(
    CDC* pDC,  
    CMFCRibbonButton* pButton,  
    CRect rect);
```  
  
### Parameters  
 [in] `pDC`  
 [in] `pButton`  
 [in] `rect`  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__ondrawribbonpanel"></a>  CMFCVisualManager::OnDrawRibbonPanel  
 The framework calls this method when it draws a [CMFCRibbonPanel](../../mfc/reference/cmfcribbonpanel-class.md) object.  
  
```  
virtual COLORREF OnDrawRibbonPanel(
    CDC* pDC,  
    CMFCRibbonPanel* pPanel,  
    CRect rectPanel,  
    CRect rectCaption);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `pPanel`  
 A pointer to a `CMFCRibbonPanel` object. The framework draws this ribbon panel.  
  
 [in] `rectPanel`  
 A rectangle that specifies the boundaries of the panel.  
  
 [in] `rectCaption`  
 A rectangle that specifies the boundaries of the caption for the panel.  
  
### Return Value  
 The color of text on the ribbon panel.  
  
### Remarks  
 Override this method in a derived class to customize the appearance of a ribbon panel.  
  
##  <a name="cmfcvisualmanager__ondrawribbonpanelcaption"></a>  CMFCVisualManager::OnDrawRibbonPanelCaption  
 The framework calls this method when it draws the caption of a [CMFCRibbonPanel Class](../../mfc/reference/cmfcribbonpanel-class.md).  
  
```  
virtual void OnDrawRibbonPanelCaption(
    CDC* pDC,  
    CMFCRibbonPanel* pPanel,  
    CRect rectCaption);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `pPanel`  
 A pointer to a `CMFCRibbonPanel` object. The framework draws the caption for this ribbon panel.  
  
 [in] `rectCaption`  
 A rectangle that specifies the boundaries of the caption for the ribbon panel.  
  
### Remarks  
 Override this method in a derived class to customize the appearance of captions for ribbon panels.  
  
##  <a name="cmfcvisualmanager__ondrawribbonprogressbar"></a>  CMFCVisualManager::OnDrawRibbonProgressBar  
 The framework calls this method when it draws a [CMFCRibbonProgressBar Class](../../mfc/reference/cmfcribbonprogressbar-class.md).  
  
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
 A pointer to a `CMFCRibbonProgressBar` object. The framework draws this progress bar.  
  
 [in] `rectProgress`  
 A rectangle that specifies the boundaries of the progress bar.  
  
 [in] `rectChunk`  
 A rectangle that specifies the boundaries of the area surrounding the progress bar.  
  
 [in] `bInfiniteMode`  
 A Boolean parameter that indicates the mode of the progress bar. A value of `TRUE` means the bar is in infinite mode. The default implementation does not use this parameter.  
  
### Remarks  
 Override this method in a derived class to customize the appearance of a progress bar.  
  
##  <a name="cmfcvisualmanager__ondrawribbonquickaccesstoolbarseparator"></a>  CMFCVisualManager::OnDrawRibbonQuickAccessToolBarSeparator  
 The framework calls this method when it draws a separator on the **Quick Access Toolbar** of a ribbon.  
  
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
 A pointer to a [CMFCRibbonSeparator](../../mfc/reference/cmfcribbonseparator-class.md) object. The framework draws this ribbon separator.  
  
 [in] `rect`  
 A rectangle that specifies the boundaries of the separator.  
  
### Remarks  
 Override this method in a derived class to customize the appearance of ribbon separators on the **Quick Access Toolbar**.  
  
##  <a name="cmfcvisualmanager__ondrawribbonrecentfilesframe"></a>  CMFCVisualManager::OnDrawRibbonRecentFilesFrame  
 The framework calls this method when it draws a frame around a list of recent files.  
  
```  
virtual void OnDrawRibbonRecentFilesFrame(
    CDC* pDC,  
    CMFCRibbonMainPanel* pPanel,  
    CRect rect);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `pPanel`  
 A pointer to the **Main** panel on the ribbon.  
  
 [in] `rect`  
 A rectangle that specifies the boundaries of the frame for the list of recent files.  
  
### Remarks  
 Override this method in a derived visual manager to customize the appearance of the list of recent files.  
  
##  <a name="cmfcvisualmanager__ondrawribbonsliderchannel"></a>  CMFCVisualManager::OnDrawRibbonSliderChannel  
 The framework calls this method when it draws the channel of a [CMFCRibbonSlider Class](../../mfc/reference/cmfcribbonslider-class.md).  
  
```  
virtual void OnDrawRibbonSliderChannel(
    CDC* pDC,  
    CMFCRibbonSlider* pSlider,  
    CRect rect);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `pSlider`  
 A pointer to a CMFCRibbonSlider object. The framework draws the channel for this ribbon slider.  
  
 [in] `rect`  
 A rectangle that specifies the boundaries for the channel of the ribbon slider.  
  
### Remarks  
 Override this method in a derived class to customize the appearance of the channel of the ribbon slider.  
  
##  <a name="cmfcvisualmanager__ondrawribbonsliderthumb"></a>  CMFCVisualManager::OnDrawRibbonSliderThumb  
 The framework calls this method when it draws the thumb of a [CMFCRibbonSlider](../../mfc/reference/cmfcribbonslider-class.md) object.  
  
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
 A pointer to a `CMFCRibbonSlider`. The framework draws the thumb for this ribbon slider.  
  
 [in] `rect`  
 A rectangle that specifies the boundaries of the thumb for the ribbon slider.  
  
 [in] `bIsHighlighted`  
 A Boolean parameter that indicates if the thumb is highlighted.  
  
 [in] `bIsPressed`  
 A Boolean parameter that indicates if the thumb is pressed.  
  
 [in] `bIsDisabled`  
 A Boolean parameter that indicates if the thumb is unavailable.  
  
### Remarks  
 Override this method in a derived visual manager to customize the appearance of the thumb for a `CMFCRibbonSlider`.  
  
##  <a name="cmfcvisualmanager__ondrawribbonsliderzoombutton"></a>  CMFCVisualManager::OnDrawRibbonSliderZoomButton  
 The framework calls this method when it draws the zoom buttons for a [CMFCRibbonSlider](../../mfc/reference/cmfcribbonslider-class.md) object.  
  
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
 A pointer to a `CMFCRibbonSlider` object. The framework draws this ribbon slider.  
  
 [in] `rect`  
 A rectangle that specifies the boundaries of the zoom buttons on the ribbon slider.  
  
 [in] `bIsZoomOut`  
 A Boolean parameter that indicates which button the framework draws. A value of `TRUE` indicates the left button with a "-" for zoom out. A value of `FALSE` indicates the right button with a "+" for zoom in.  
  
 [in] `bIsHighlighted`  
 A Boolean parameter that indicates whether the button is highlighted.  
  
 [in] `bIsPressed`  
 A Boolean parameter that indicates whether the button is pressed.  
  
 [in] `bIsDisabled`  
 A Boolean parameter that indicates whether the button is unavailable.  
  
### Remarks  
 By default, the zoom buttons on the ribbon slider are a circle with either a + or - sign in the center. To customize the appearance of zoom buttons, override this method in a derived visual manager.  
  
##  <a name="cmfcvisualmanager__ondrawribbonstatusbarpane"></a>  CMFCVisualManager::OnDrawRibbonStatusBarPane  
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
 A pointer to a status bar pane. The framework draws this [CMFCRibbonStatusBarPane](../../mfc/reference/cmfcribbonstatusbarpane-class.md) object.  
  
### Return Value  
 A reserved value. The default implementation returns -1.  
  
### Remarks  
 Override this method in a derived visual manager to customize the appearance of a pane on the status bar.  
  
##  <a name="cmfcvisualmanager__ondrawribbontabsframe"></a>  CMFCVisualManager::OnDrawRibbonTabsFrame  
 The framework calls this method when it draws the frame around a set of ribbon tabs.  
  
```  
virtual COLORREF OnDrawRibbonTabsFrame(
    CDC* pDC,  
    CMFCRibbonBar* pWndRibbonBar,  
    CRect rectTab);
```  
  
### Parameters  
 `pDC`  
 A pointer to a device context.  
  
 `pWndRibbonBar`  
 A pointer to a [CMFCRibbonBar](../../mfc/reference/cmfcribbonbar-class.md) object. The framework draws the frame for this ribbon bar.  
  
 `rectTab`  
 A rectangle that specifies the boundaries of the ribbon tabs.  
  
### Return Value  
 A reserved value. By default, this method returns -1.  
  
### Remarks  
 Override this method in a derived visual manager to customize the frame around a set of tabs on the ribbon.  
  
##  <a name="cmfcvisualmanager__ondrawscrollbuttons"></a>  CMFCVisualManager::OnDrawScrollButtons  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
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
 [in] `rect`  
 [in] `nBorderSize`  
 [in] `iImage`  
 [in] `bHilited`  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__ondrawseparator"></a>  CMFCVisualManager::OnDrawSeparator  
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
 A Boolean parameter that indicates the orientation of a docked pane. A value of `TRUE` indicates that the pane is docked horizontally. A value of `FALSE` indicates that the pane is docked vertically.  
  
### Remarks  
 Separators are used on control bars to separate groups of related icons. The default implementation for this method displays the standard separator. Override this method in a derived visual manager to customize the appearance of the separator.  
  
##  <a name="cmfcvisualmanager__ondrawshowallmenuitems"></a>  CMFCVisualManager::OnDrawShowAllMenuItems  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawShowAllMenuItems(
    CDC* pDC,  
    CRect rect,  
    CMFCVisualManager::AFX_BUTTON_STATE state);
```  
  
### Parameters  
 [in] `pDC`  
 [in] `rect`  
 [in] `state`  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__ondrawspinbuttons"></a>  CMFCVisualManager::OnDrawSpinButtons  
 The framework calls this method when it draws an instance of the [CMFCSpinButtonCtrl Class](../../mfc/reference/cmfcspinbuttonctrl-class.md).  
  
```  
virtual void OnDrawSpinButtons(
    CDC* pDC,  
    CRect rectSpin,  
    int nState,  
    BOOL bOrientation,  
    CMFCSpinButtonCtrl* pSpinCtrl);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rectSpin`  
 A rectangle that specifies the boundaries of the spin control.  
  
 [in] `nState`  
 A flag that indicates the state of the spin control. See the Remarks section for more information.  
  
 [in] `bOrientation`  
 A Boolean parameter that specifies the orientation of the spin control. A value of `TRUE` indicates the spin control is horizontal. Otherwise, it is vertical.  
  
 [in] `pSpinCtrl`  
 A pointer to a spin control. The framework draws the buttons for this control.  
  
### Remarks  
 The `nState` parameter indicates the state of the spin control. The parameter is one of the following values:  
  
-   AFX_SPIN_PRESSEDUP  
  
-   AFX_SPIN_PRESSEDDOWN  
  
-   AFX_SPIN_HIGHLIGHTEDUP  
  
-   AFX_SPIN_HIGHLIGHTEDDOWN  
  
-   AFX_SPIN_DISABLED  
  
 Override this method in a derived visual manager to customize the appearance of a spin control.  
  
##  <a name="cmfcvisualmanager__ondrawsplitterborder"></a>  CMFCVisualManager::OnDrawSplitterBorder  
 The framework calls this method when it draws the border around an instance of the [CSplitterWndEx Class](csplitterwndex-class.md).  
  
```  
virtual void OnDrawSplitterBorder(
    CDC* pDC,  
    CSplitterWndEx* pSplitterWnd,  
    CRect rect);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `pSplitterWnd`  
 A pointer to a splitter window. The framework draws the border for this window.  
  
 [in] `rect`  
 A rectangle that specifies the boundaries of the splitter window.  
  
### Remarks  
 Override this method in a derived visual manager to customize the appearance of the border for a splitter window.  
  
##  <a name="cmfcvisualmanager__ondrawsplitterbox"></a>  CMFCVisualManager::OnDrawSplitterBox  
 The framework calls this method when it draws the drag box for an instance of the [CSplitterWndEx Class](csplitterwndex-class.md). The drag box appears when the user selects the splitter bar and changes the dimensions of the child windows.  
  
```  
virtual void OnDrawSplitterBox(
    CDC* pDC,  
    CSplitterWndEx* pSplitterWnd,  
    CRect& rect);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `pSplitterWnd`  
 A pointer to a splitter window. The framework draws the box for this splitter window.  
  
 [in] `rect`  
 A rectangle that specifies the boundaries of the splitter window.  
  
### Remarks  
 Override this method in a derived visual manager to customize the appearance of the drag box for a splitter window.  
  
##  <a name="cmfcvisualmanager__ondrawstatusbarpaneborder"></a>  CMFCVisualManager::OnDrawStatusBarPaneBorder  
 The framework calls this method when it draws the border for a [CMFCStatusBar](../../mfc/reference/cmfcstatusbar-class.md) object.  
  
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
 A pointer to a `CMFCStatusBar` object. The framework draws this status bar object.  
  
 [in] `rectPane`  
 A rectangle that specifies the boundaries of the status bar.  
  
 [in] `uiID`  
 The ID of the status bar.  
  
 [in] `nStyle`  
 The style of the status bar.  
  
### Remarks  
 Override this method in a derived visual manager to customize the appearance of the border for a `CMFCStatusBar` object.  
  
##  <a name="cmfcvisualmanager__ondrawstatusbarprogress"></a>  CMFCVisualManager::OnDrawStatusBarProgress  
 The framework calls this method when it draws the progress indicator on the [CMFCStatusBar](../../mfc/reference/cmfcstatusbar-class.md) object.  
  
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
 A pointer to the device context for the status bar.  
  
 [in] `pStatusBar`  
 The `CMFCStatusBar` object that contains the progress bar.  
  
 [in] `rectProgress`  
 A rectangle that specifies the boundaries of the progress bar.  
  
 [in] `nProgressTotal`  
 The total number for the progress bar.  
  
 [in] `nProgressCurr`  
 The current progress for the progress bar.  
  
 [in] `clrBar`  
 A [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) parameter that indicates the initial color for the progress bar. The value is either the start of a color gradient or the complete color of the progress bar.  
  
 [in] `clrProgressBarDest`  
 A `COLORREF` parameter that indicates the end of a color gradient for the progress bar. If `clrProgressBarDest` is -1, the framework does not draw the progress bar as a color gradient. Instead, it fills the whole progress bar with the color specified by `clrBar`.  
  
 [in] `clrProgressText`  
 A `COLORREF` parameter that indicates the text color for the textual representation of the current progress. This parameter is ignored if `bProgressText` is set to `FALSE`.  
  
 [in] `bProgressText`  
 A Boolean parameter that indicates whether to display the textual representation of the current progress.  
  
### Remarks  
 Override this method in a derived visual manager to customize the appearance of the `CMFCStatusBar` object.  
  
##  <a name="cmfcvisualmanager__ondrawstatusbarsizebox"></a>  CMFCVisualManager::OnDrawStatusBarSizeBox  
 The framework calls this method when it draws the size box for a [CMFCStatusBar](../../mfc/reference/cmfcstatusbar-class.md).  
  
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
 Override this method in a derived visual manager to customize the appearance of the size box on a `CMFCStatusBar`.  
  
##  <a name="cmfcvisualmanager__ondrawtab"></a>  CMFCVisualManager::OnDrawTab  
 The framework calls this method when it draws the tabs for a [CMFCBaseTabCtrl](../../mfc/reference/cmfcbasetabctrl-class.md) object.  
  
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
 A pointer to a `CMFCBaseTabCtrl` object. The framework draws this tab control.  
  
### Remarks  
 A `CMFCBaseTabCtrl` object calls this method when it processes the WM_PAINT message.  
  
 Override this method in a derived class to customize the look of tabs.  
  
##  <a name="cmfcvisualmanager__ondrawtabclosebutton"></a>  CMFCVisualManager::OnDrawTabCloseButton  
 The framework calls this method when it draws the **Close** button on the active tab.  
  
```  
virtual void OnDrawTabCloseButton(
    CDC* pDC,  
    CRect rect,  
    const CMFCBaseTabCtrl* pTabWnd,  
    BOOL bIsHighlighted,  
    BOOL bIsPressed,  
    BOOL bIsDisabled);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rect`  
 A rectangle that specifies the boundaries of the **Close** button.  
  
 [in] `pTabWnd`  
 A pointer to a tab control. The framework draws the **Close** button for this tab control.  
  
 [in] `bIsHighlighted`  
 A Boolean parameter that indicates whether the **Close** button is highlighted.  
  
 [in] `bIsPressed`  
 A Boolean parameter that indicates whether the **Close** button is pressed.  
  
 [in] `bIsDisabled`  
 A Boolean parameter that indicates whether the **Close** button is disabled.  
  
### Remarks  
 Override this method in a derived visual manager to customize the appearance of the **Close** button on the active tab of `pTabWnd`.  
  
##  <a name="cmfcvisualmanager__ondrawtabcontent"></a>  CMFCVisualManager::OnDrawTabContent  
 The framework calls this method when it draws the contents located on the interior of an instance of the [CMFCBaseTabCtrl Class](../../mfc/reference/cmfcbasetabctrl-class.md).  
  
```  
virtual void OnDrawTabContent(
    CDC* pDC,  
    CRect rectTab,  
    int iTab,  
    BOOL bIsActive,  
    const CMFCBaseTabCtrl* pTabWnd,  
    COLORREF clrText);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rectTab`  
 A rectangle that specifies the boundaries of the tab interior.  
  
 [in] `iTab`  
 The zero-based index of the tab. The framework draws the interior of this tab.  
  
 [in] `bIsActive`  
 A Boolean parameter that indicates whether a tab is active.  
  
 [in] `pTabWnd`  
 A pointer to the tabbed control that contains the tab being drawn.  
  
 [in] `clrText`  
 The color of text on the interior of the tab.  
  
### Remarks  
 The interior of a tab contains the text and icons of the tab. Override this method in a derived visual manager to customize the appearance of tabs.  
  
##  <a name="cmfcvisualmanager__ondrawtabsbuttonborder"></a>  CMFCVisualManager::OnDrawTabsButtonBorder  
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
 A pointer to a [CMFCButton](../../mfc/reference/cmfcbutton-class.md) object. The framework draws the border for this `CMFCButton` instance.  
  
 [in] `uiState`  
 An unsigned integer that specifies the state of the button.  
  
 [in] `pWndTab`  
 A pointer to the parent tab window.  
  
### Remarks  
 Override this method in a derived visual manager to customize the appearance of the border of the tab button.  
  
##  <a name="cmfcvisualmanager__ondrawtask"></a>  CMFCVisualManager::OnDrawTask  
 The framework calls this method when it draws a [CMFCTasksPane](../../mfc/reference/cmfctaskspane-class.md) object.  
  
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
 A pointer to a [CMFCTasksPaneTask](../../mfc/reference/cmfctaskspanetask-class.md) object. The framework draws this task.  
  
 [in] `pIcons`  
 A pointer to the image list associated with the task pane. Each task contains an index for an image in this list.  
  
 [in] `bIsHighlighted`  
 A Boolean parameter that specifies whether the displayed task is highlighted.  
  
 [in] `bIsSelected`  
 A Boolean parameter that specifies whether the displayed task is selected.  
  
### Remarks  
 The framework displays tasks on the task bar as both an icon and text. The `pIcons` parameter contains the icon for the task indicated by `pTask`.  
  
 Override this method in a derived class to customize the appearance of tasks on the task bar.  
  
##  <a name="cmfcvisualmanager__ondrawtasksgroupareaborder"></a>  CMFCVisualManager::OnDrawTasksGroupAreaBorder  
 The framework calls this method when it draws a border around a group on a [CMFCTasksPane Class](../../mfc/reference/cmfctaskspane-class.md).  
  
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
  
##  <a name="cmfcvisualmanager__ondrawtasksgroupcaption"></a>  CMFCVisualManager::OnDrawTasksGroupCaption  
 The framework calls this method when it draws the caption for a [CMFCTasksPaneTaskGroup](../../mfc/reference/cmfctaskspanetaskgroup-class.md) object.  
  
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
 A pointer to a `CMFCTasksPaneTaskGroup` object. The framework draws the caption for this group.  
  
 [in] `bIsHighlighted`  
 A Boolean parameter that indicates whether the group is highlighted.  
  
 [in] `bIsSelected`  
 A Boolean parameter that indicates whether the group is currently selected.  
  
 [in] `bCanCollapse`  
 A Boolean parameter that indicates whether the group can be collapsed.  
  
### Remarks  
 The task groups appear on the [CMFCTasksPane](../../mfc/reference/cmfctaskspane-class.md) object.  
  
 Override this method in a derived class to customize the caption for a `CMFCTasksPaneTaskGroup`.  
  
##  <a name="cmfcvisualmanager__ondrawtasksgroupicon"></a>  CMFCVisualManager::OnDrawTasksGroupIcon  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawTasksGroupIcon(
    CDC* pDC,  
    CMFCTasksPaneTaskGroup* pGroup,  
    int nIconHOffset = 5,  
    BOOL bIsHighlighted = FALSE,  
    BOOL bIsSelected = FALSE,  
    BOOL bCanCollapse = FALSE);
```  
  
### Parameters  
 [in] `pDC`  
 [in] `pGroup`  
 [in] `nIconHOffset`  
 [in] `bIsHighlighted`  
 [in] `bIsSelected`  
 [in] `bCanCollapse`  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__ondrawtearoffcaption"></a>  CMFCVisualManager::OnDrawTearOffCaption  
 The framework calls this method when it draws the caption for a [CMFCPopupMenu Class](../../mfc/reference/cmfcpopupmenu-class.md).  
  
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
 This function is called by the framework when a `CMFCPopupMenu` object processes a WM_PAINT message and must draw a tear-off caption.  
  
 Override this method in a derived class to customize the look of captions for tear-off bars.  
  
##  <a name="cmfcvisualmanager__ondrawtoolboxframe"></a>  CMFCVisualManager::OnDrawToolBoxFrame  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawToolBoxFrame(
    CDC* pDC,  
    const CRect& rect);
```  
  
### Parameters  
 [in] `pDC`  
 [in] `rect`  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__onerasemdiclientarea"></a>  CMFCVisualManager::OnEraseMDIClientArea  
 The framework calls this method when it erases the MDI client area.  
  
```  
virtual BOOL OnEraseMDIClientArea(
    CDC* pDC,  
    CRect rectClient);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rectClient`  
 A rectangle that specifies the boundaries of the MDI client area.  
  
### Return Value  
 A reserved value. The default implementation returns `FALSE`.  
  
### Remarks  
 Override this method to execute custom code when the visual manager erases the MDI client area.  
  
##  <a name="cmfcvisualmanager__onerasepopupwindowbutton"></a>  CMFCVisualManager::OnErasePopupWindowButton  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnErasePopupWindowButton(
    CDC* pDC,  
    CRect rectClient,  
    CMFCDesktopAlertWndButton* pButton);
```  
  
### Parameters  
 [in] `pDC`  
 [in] `rectClient`  
 [in] `pButton`  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__onerasetabsarea"></a>  CMFCVisualManager::OnEraseTabsArea  
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
  
##  <a name="cmfcvisualmanager__onerasetabsbutton"></a>  CMFCVisualManager::OnEraseTabsButton  
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
 The framework erases the text and icon for a button when a [CMFCBaseTabCtrl](../../mfc/reference/cmfcbasetabctrl-class.md) object processes the `WM_ERASEBKGND` message.  
  
 Override this method in a derived visual manager to customize the appearance of tab buttons.  
  
##  <a name="cmfcvisualmanager__onerasetabsframe"></a>  CMFCVisualManager::OnEraseTabsFrame  
 The framework calls this method when it erases a frame on a [CMFCBaseTabCtrl Class](../../mfc/reference/cmfcbasetabctrl-class.md).  
  
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
 A pointer to a tab window. The framework erases a frame for this `CMFCBaseTabCtrl`.  
  
### Return Value  
 `TRUE` if the method is successful; `FALSE` otherwise.  
  
### Remarks  
 This method fills the area indicated by `rect` with the background color of the active tab. It is called when a `CMFCBaseTabCtrl` object processes a `WM_PAINT` message and erases a tab frame.  
  
##  <a name="cmfcvisualmanager__onfillautohidebuttonbackground"></a>  CMFCVisualManager::OnFillAutoHideButtonBackground  
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
 A pointer to a [CMFCAutoHideButton](../../mfc/reference/cmfcautohidebutton-class.md) object. The framework fills the background for this auto-hide button.  
  
### Remarks  
 Override this method in a derived visual manager to customize the appearance of an auto-hide button.  
  
##  <a name="cmfcvisualmanager__onfillbarbackground"></a>  CMFCVisualManager::OnFillBarBackground  
 The framework calls this method when it fills the background of a [CBasePane](../../mfc/reference/cbasepane-class.md) object.  
  
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
 A pointer to a `CBasePane` object. The framework fills the background of this pane.  
  
 [in] `rectClient`  
 A rectangle that specifies the boundaries of the pane.  
  
 [in] `rectClip`  
 A rectangle that specifies the clipping area of the pane.  
  
 [in] `bNCArea`  
 A reserved value.  
  
### Remarks  
 The default implementation of this method fills the background of the bar with the 3d background color from the global variable `afxGlobalData`. Override this method in a derived visual manager to customize the background of a pane.  
  
### Example  
 The following example demonstrates how to use the `OnFillBarBackground` in the `CMFCVisualManager` class. This code snippet is part of the [Outlook Demo sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_OutlookDemo#4](../../mfc/reference/codesnippet/cpp/cmfcvisualmanager-class_2.cpp)]  
  
##  <a name="cmfcvisualmanager__onfillbuttoninterior"></a>  CMFCVisualManager::OnFillButtonInterior  
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
 A pointer to a [CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md). The framework fills the background for this button.  
  
 [in] `rect`  
 A rectangle that specifies the boundaries of the toolbar button.  
  
 [in] `state`  
 The state of the toolbar button.  
  
### Remarks  
 The default implementation of this method uses the default color to fill the background. Override this method in a derived visual manager to customize the background of a toolbar button.  
  
 The possible states of a toolbar button are `ButtonsIsRegular`, `ButtonsIsPressed`, or `ButtonsIsHighlighted`.  
  
##  <a name="cmfcvisualmanager__onfillcaptionbarbutton"></a>  CMFCVisualManager::OnFillCaptionBarButton  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual COLORREF OnFillCaptionBarButton(
    CDC* pDC,  
    CMFCCaptionBar* pBar,  
    CRect rect,  
    BOOL bIsPressed,  
    BOOL bIsHighlighted,  
    BOOL bIsDisabled,  
    BOOL bHasDropDownArrow,  
    BOOL bIsSysButton);
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
  
##  <a name="cmfcvisualmanager__onfillcommandslistbackground"></a>  CMFCVisualManager::OnFillCommandsListBackground  
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
  
##  <a name="cmfcvisualmanager__onfillheaderctrlbackground"></a>  CMFCVisualManager::OnFillHeaderCtrlBackground  
 The framework calls this method when it fills the background of a header control.  
  
```  
virtual void OnFillHeaderCtrlBackground(
    CMFCHeaderCtrl* pCtrl,  
    CDC* pDC,  
    CRect rect);
```  
  
### Parameters  
 [in] `pCtrl`  
 A pointer to a [CMFCHeaderCtrl](../../mfc/reference/cmfcheaderctrl-class.md) object. The framework fills the background for this header control.  
  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rect`  
 A rectangle that specifies the boundaries of the header control.  
  
### Remarks  
 Override this method in a derived visual manager to customize the appearance of a header control.  
  
##  <a name="cmfcvisualmanager__onfillminiframecaption"></a>  CMFCVisualManager::OnFillMiniFrameCaption  
 The framework calls this method when it fills the caption bar of a mini frame window.  
  
```  
virtual COLORREF OnFillMiniFrameCaption(
    CDC* pDC,  
    CRect rectCaption,  
    CPaneFrameWnd* pFrameWnd,  
    BOOL bActive);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rectCaption`  
 A rectangle that specifies the boundaries of the caption bar.  
  
 [in] `pFrameWnd`  
 A pointer to a mini frame window. The framework draws the caption bar for this window.  
  
 [in] `bActive`  
 A Boolean parameter that indicates if the window is active.  
  
### Return Value  
 The color that is used to fill the background of the caption bar.  
  
### Remarks  
 The default implementation for this method fills the caption bar with the current caption color for the active skin.  
  
##  <a name="cmfcvisualmanager__onfilloutlookbarcaption"></a>  CMFCVisualManager::OnFillOutlookBarCaption  
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
 A reference to a [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) parameter. The method writes the color of text on the caption bar to this parameter.  
  
### Remarks  
 The default implementation of this method fills the caption bar with the color for shadows based on the current skin. Override this method in a derived visual manager to customize the color of the Outlook caption bar.  
  
##  <a name="cmfcvisualmanager__onfilloutlookpagebutton"></a>  CMFCVisualManager::OnFillOutlookPageButton  
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
 A reference to a [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) parameter. This method stores the text color of the outlook page button in this parameter.  
  
### Remarks  
 Override this function in a derived visual manager to customize the appearance of Outlook page buttons.  
  
##  <a name="cmfcvisualmanager__onfillpopupwindowbackground"></a>  CMFCVisualManager::OnFillPopupWindowBackground  
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
  
##  <a name="cmfcvisualmanager__onfillribbonbutton"></a>  CMFCVisualManager::OnFillRibbonButton  
 The framework calls this method when it fills the interior of a ribbon button.  
  
```  
virtual COLORREF OnFillRibbonButton(
    CDC* pDC,  
    CMFCRibbonButton* pButton);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `pButton`  
 A pointer to a [CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md) object. The framework fills the interior of this ribbon button.  
  
### Return Value  
 The color of text for the ribbon button specified by `pButton` if the ribbon button supports text. A value of -1 if text is invalid for the ribbon button.  
  
### Remarks  
 Override this method in a derived visual manager to customize the appearance of ribbon buttons.  
  
##  <a name="cmfcvisualmanager__onfillribbonedit"></a>  CMFCVisualManager::OnFillRibbonEdit  
 The framework calls this method when it fills the interior of an instance of the `CMFCRibbonRichEditCtrl` class.  
  
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
    COLORREF& clrSelText);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `pEdit`  
 A pointer to a `CMFCRibbonRichEditCtrl` object. The framework fills the interior of this edit control.  
  
 [in] `rect`  
 A rectangle that specifies the boundaries of the edit control.  
  
 [in] `bIsHighlighted`  
 A Boolean parameter that indicates whether the edit control is highlighted.  
  
 [in] `bIsPaneHighlighted`  
 A Boolean parameter that indicates whether the parent pane is highlighted.  
  
 [in] `bIsDisabled`  
 A Boolean parameter that indicates whether the edit control is unavailable.  
  
 [in] `clrText`  
 A reference to the text color of the edit control.  
  
 [in] `clrSelBackground`  
 A reference to the background color of the edit control when it is highlighted.  
  
 [in] `clrSelText`  
 A reference to the color of selected text on the edit control.  
  
### Remarks  
 The `CMFCRibbonRichEditCtrl` indicated by `pEdit` can be a part of a combo box button on the ribbon.  
  
 Override this method in a derived visual manager to customize the appearance of a `CMFCRibbonRichEditCtrl`.  
  
##  <a name="cmfcvisualmanager__onfillribbonmainpanelbutton"></a>  CMFCVisualManager::OnFillRibbonMainPanelButton  
 The framework calls this method when it fills the interior of a ribbon button located on the **Main** panel.  
  
```  
virtual COLORREF OnFillRibbonMainPanelButton(
    CDC* pDC,  
    CMFCRibbonButton* pButton);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `pButton`  
 A pointer to a [CMFCRibbonButton Class](../../mfc/reference/cmfcribbonbutton-class.md) object. The framework fills this ribbon button.  
  
### Return Value  
 The color of text for the ribbon button specified by `pButton` if the ribbon button supports text. A value of -1 if text is invalid for the ribbon button.  
  
### Remarks  
 Override this method in a derived visual manager to customize the appearance of ribbon buttons on the **Main** panel.  
  
##  <a name="cmfcvisualmanager__onfillribbonmenuframe"></a>  CMFCVisualManager::OnFillRibbonMenuFrame  
 The framework calls this method when it fills the menu frame of the ribbon panel.  
  
```  
virtual void OnFillRibbonMenuFrame(
    CDC* pDC,  
    CMFCRibbonMainPanel* pPanel,  
    CRect rect);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `pPanel`  
 A pointer to an instance of the [CMFCRibbonMainPanel Class](../../mfc/reference/cmfcribbonmainpanel-class.md). The framework fills the menu frame for this ribbon panel.  
  
 [in] `rect`  
 A rectangle that specifies the boundaries of the menu frame.  
  
### Remarks  
 Override this method in a derived visual manager to customize the appearance of the menu bar for the `CMFCRibbonMainPanel`.  
  
##  <a name="cmfcvisualmanager__onfillribbonquickaccesstoolbarpopup"></a>  CMFCVisualManager::OnFillRibbonQuickAccessToolBarPopup  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnFillRibbonQuickAccessToolBarPopup(
    CDC* pDC,  
    CMFCRibbonPanelMenuBar* pMenuBar,  
    CRect rect);
```  
  
### Parameters  
 [in] `pDC`  
 [in] `pMenuBar`  
 [in] `rect`  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__onfillsplitterbackground"></a>  CMFCVisualManager::OnFillSplitterBackground  
 The framework calls this method when it fills the background of a splitter window.  
  
```  
virtual void OnFillSplitterBackground(
    CDC* pDC,  
    CSplitterWndEx* pSplitterWnd,  
    CRect rect);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `pSplitterWnd`  
 A pointer to an instance of the [CSplitterWndEx Class](csplitterwndex-class.md). The framework fills the background for this splitter window.  
  
 [in] `rect`  
 A rectangle that specifies the boundaries of the splitter window.  
  
### Remarks  
 Override this method in a derived visual manager to customize the appearance of a splitter window.  
  
##  <a name="cmfcvisualmanager__onfilltab"></a>  CMFCVisualManager::OnFillTab  
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
 A pointer to a brush. The framework uses this brush to fill the tab window.  
  
 [in] `iTab`  
 The zero-based tab index of a tab for which the framework fills the background.  
  
 [in] `bIsActive`  
 `TRUE` if the tab is active; otherwise `FALSE`.  
  
 [in] `pTabWnd`  
 A pointer to the parent tab control.  
  
### Remarks  
 Override this method in a derived visual manager to customize the appearance of tabs.  
  
##  <a name="cmfcvisualmanager__onfilltasksgroupinterior"></a>  CMFCVisualManager::OnFillTasksGroupInterior  
 The framework calls this method when it fills the interior of a [CMFCTasksPaneTaskGroup](../../mfc/reference/cmfctaskspanetaskgroup-class.md) object.  
  
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
  
##  <a name="cmfcvisualmanager__onfilltaskspanebackground"></a>  CMFCVisualManager::OnFillTasksPaneBackground  
 The framework calls this method when it fills the background of a [CMFCTasksPane](../../mfc/reference/cmfctaskspane-class.md) control.  
  
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
 Override this method in a derived visual manager to customize the appearance of a `CMFCTasksPane` object.  
  
##  <a name="cmfcvisualmanager__onhighlightmenuitem"></a>  CMFCVisualManager::OnHighlightMenuItem  
 The framework calls this method when it draws a highlighted menu item.  
  
```  
virtual void OnHighlightMenuItem(
    CDC* pDC,  
    CMFCToolBarMenuButton* pButton,  
    CRect rect,  
    COLORREF& clrText);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to the device context for a menu.  
  
 [in] `pButton`  
 A pointer to a [CMFCToolBarMenuButton](../../mfc/reference/cmfctoolbarmenubutton-class.md) object to display. The default implementation does not use this parameter.  
  
 [in] `rect`  
 A rectangle that specifies the boundaries of the menu item.  
  
 [in] `clrText`  
 The current text color of highlighted menu items. The default implementation does not use this parameter.  
  
### Remarks  
 The default implementation of this method does not use the parameters `pButton` or `clrText`. It fills the rectangle specified by `rect` with the standard background color.  
  
 Override this method in a derived visual manager to customize the appearance of highlighted menu items. Use the `clrText` parameter to modify the text color of a highlighted menu item.  
  
##  <a name="cmfcvisualmanager__onhighlightrarelyusedmenuitems"></a>  CMFCVisualManager::OnHighlightRarelyUsedMenuItems  
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
  
##  <a name="cmfcvisualmanager__onncactivate"></a>  CMFCVisualManager::OnNcActivate  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL OnNcActivate(
    CWnd* pWnd,  
    BOOL bActive);
```  
  
### Parameters  
 [in] `pWnd`  
 [in] `bActive`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__onncpaint"></a>  CMFCVisualManager::OnNcPaint  
 The framework calls this method when it draws the non-client area.  
  
```  
virtual BOOL OnNcPaint(
    CWnd* pWnd,  
    const CObList& lstSysButtons,  
    CRect rectRedraw);
```  
  
### Parameters  
 [in] `pWnd`  
 A pointer to the window whose non-client area the framework draws.  
  
 [in] `lstSysButtons`  
 A list of system buttons. These are also known as caption buttons.  
  
 [in] `rectRedraw`  
 A rectangle that specifies the boundaries of the non-client area.  
  
### Return Value  
 A reserved value. The default implementation returns `FALSE`.  
  
### Remarks  
 Override this method in a derived visual manager to customize the appearance of the window frame and caption buttons.  
  
##  <a name="cmfcvisualmanager__onsetwindowregion"></a>  CMFCVisualManager::OnSetWindowRegion  
 The framework calls this method after it sets a region that contains frames and pop-up menus.  
  
```  
virtual BOOL OnSetWindowRegion(
    CWnd* pWnd,  
    CSize sizeWindow);
```  
  
### Parameters  
 [in] `pWnd`  
 A pointer to the window with the region that changed.  
  
 [in] `sizeWindow`  
 The size of the window.  
  
### Return Value  
 `TRUE` if the method is successful; `FALSE` otherwise.  
  
### Remarks  
 The framework calls this method to notify the visual manager that a region has been set for frames and pop-up menus. For more information, see [CWindow::SetWindowRgn](../../atl/reference/cwindow-class.md#cwindow__setwindowrgn).  
  
##  <a name="cmfcvisualmanager__onupdatesystemcolors"></a>  CMFCVisualManager::OnUpdateSystemColors  
 The framework calls this function when it changes the system colors.  
  
```  
virtual void OnUpdateSystemColors();
```  
  
### Remarks  
 The framework calls this method as a part of processing the `WM_SYSCOLORCHANGE` message. The default implementation does nothing. Override this method in a derived visual manager if you want to execute custom code when the colors change in your application.  
  
##  <a name="cmfcvisualmanager__redrawall"></a>  CMFCVisualManager::RedrawAll  
 Immediately redraws all the control bars in the application.  
  
```  
static void RedrawAll();
```  
  
##  <a name="cmfcvisualmanager__ribboncategorycolortorgb"></a>  CMFCVisualManager::RibbonCategoryColorToRGB  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual COLORREF RibbonCategoryColorToRGB(AFX_RibbonCategoryColor color);
```  
  
### Parameters  
 [in] `color`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcvisualmanager__setdefaultmanager"></a>  CMFCVisualManager::SetDefaultManager  
 Sets the default manager.  
  
```  
static void SetDefaultManager(CRuntimeClass* pRTI);
```  
  
### Parameters  
 [in] `pRTI`  
 A pointer to the runtime information for a visual manager.  
  
### Remarks  
 Use the [CMFCVisualManager Class](../../mfc/reference/cmfcvisualmanager-class.md) and any derived visual managers to customize the appearance of your application. After you set the default visual manager, this method redraws your application by using the new visual manager. For more information about how to use visual managers, see [Visualization Manager](../../mfc/visualization-manager.md).  
  
 Use this method to change the visual manager that your application uses.  
  
##  <a name="cmfcvisualmanager__setembossdisabledimage"></a>  CMFCVisualManager::SetEmbossDisabledImage  
 Enables or disables the embossed mode for disabled toolbar images.  
  
```  
void SetEmbossDisabledImage (BOOL bEmboss = TRUE);
```  
  
### Parameters  
 [in] `bEmboss`  
 A Boolean parameter that indicates whether to enable embossed mode for disabled toolbar images.  
  
### Remarks  
 Use the function [CMFCVisualManager::IsEmbossDisabledImage](#cmfcvisualmanager__isembossdisabledimage) to determine whether embossed mode is enabled.  
  
##  <a name="cmfcvisualmanager__setfadeinactiveimage"></a>  CMFCVisualManager::SetFadeInactiveImage  
 Enables or disables the lighting effect for inactive images on a menu or toolbar.  
  
```  
void SetFadeInactiveImage(BOOL bFade = TRUE);
```  
  
### Parameters  
 [in] `bFade`  
 A Boolean parameter that specifies whether to enable the lighting effect.  
  
### Remarks  
 This feature controls whether inactive images appear faded on a menu or toolbar. Use the method [CMFCVisualManager::IsFadeInactiveImage](#cmfcvisualmanager__isfadeinactiveimage) to determine whether this feature is enabled.  
  
##  <a name="cmfcvisualmanager__setmenuflatlook"></a>  CMFCVisualManager::SetMenuFlatLook  
 Sets a flag that indicates whether the menu buttons appear flat. Otherwise, they appear three-dimensional.  
  
```  
void SetMenuFlatLook(BOOL bMenuFlatLook = TRUE);
```  
  
### Parameters  
 [in] `bMenuFlatLook`  
 A Boolean parameter that indicates whether the menu buttons appear flat.  
  
### Remarks  
 By default, this feature is not enabled.  
  
##  <a name="cmfcvisualmanager__setmenushadowdepth"></a>  CMFCVisualManager::SetMenuShadowDepth  
 Sets the width and height of the menu shadow.  
  
```  
void SetMenuShadowDepth(int nDepth);
```  
  
### Parameters  
 [in] `nDepth`  
 An integer that specifies the depth of the menu shadow in pixels.  
  
### Remarks  
 The height and width of the menu shadow must be identical. The default value is 7 pixels.  
  
##  <a name="cmfcvisualmanager__setshadowhighlightedimage"></a>  CMFCVisualManager::SetShadowHighlightedImage  
 Sets a flag that indicates whether the [CMFCVisualManager](../../mfc/reference/cmfcvisualmanager-class.md) displays shadows for highlighted images.  
  
```  
void SetShadowHighlightedImage(BOOL bShadow = TRUE);
```  
  
### Parameters  
 [in] `bShadow`  
 A Boolean parameter that indicates whether the visual manager displays a shadow under highlighted images.  
  
### Remarks  
 By default, this feature is disabled.  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CMFCVisualManager::GetInstance](#cmfcvisualmanager__getinstance)   
 [Visualization Manager](../../mfc/visualization-manager.md)


