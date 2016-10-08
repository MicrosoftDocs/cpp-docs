---
title: "CMFCVisualManagerWindows7 Class"
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
ms.assetid: e8d87df1-0c09-4b58-8ade-4e911f796e42
caps.latest.revision: 17
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
# CMFCVisualManagerWindows7 Class
The `CMFCVisualManagerWindows7` gives an application the appearance of a Windows 7 application.  
  
## Syntax  
  
```  
class CMFCVisualManagerWindows7 : public CMFCVisualManagerWindows;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCVisualManagerWindows7::CMFCVisualManagerWindows7](#cmfcvisualmanagerwindows7__cmfcvisualmanagerwindows7)|Default constructor.|  
|[CMFCVisualManagerWindows7::~CMFCVisualManagerWindows7](#cmfcvisualmanagerwindows7__~cmfcvisualmanagerwindows7)|Default destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|`CMFCVisualManagerWindows7::CleanStyle`|Clears the current visual style and resets the default visual style.|  
|`CMFCVisualManagerWindows7::CleanUp`|Clears all of the objects in the user interface and resets the menus.|  
|`CMFCVisualManagerWindows7::DrawNcBtn`|Draws a button in the non-client area on the frame. The framework uses this method to draw minimize, maximize, close and restore buttons in the upper right corner of the window frame. This method is not called when the program uses a non-Aero theme.|  
|`CMFCVisualManagerWindows7::DrawNcText`|Draws text in the non-client area on the frame. The framework uses this method to draw the application title in the title bar at the top of the frame window.|  
|`CMFCVisualManagerWindows7::DrawSeparator`|Draws a separator on the [CMFCToolBar Class](../VS_visualcpp/CMFCToolBar-Class.md).|  
|`CMFCVisualManagerWindows7::GetRibbonBar`|Retrieves the [CMFCRibbonBar Class](../VS_visualcpp/CMFCRibbonBar-Class.md) associated with the user interface.|  
|[CMFCVisualManagerWindows7::GetRibbonEditBackgroundColor](#cmfcvisualmanagerwindows7__getribboneditbackgroundcolor)|Obtains a Ribbon edit box background color.|  
|`CMFCVisualManagerWindows7::GetRibbonPopupBorderSize`|Overrides [CMFCVisualManager::GetRibbonPopupBorderSize](../VS_visualcpp/CMFCVisualManager-Class.md#cmfcvisualmanager__getribbonpopupbordersize)|  
|`CMFCVisualManagerWindows7::GetRibbonQuickAccessToolBarChevronOffset`|Overrides [CMFCVisualManager::GetRibbonQuickAccessToolBarChevronOffset](../VS_visualcpp/CMFCVisualManager-Class.md#cmfcvisualmanager__getribbonquickaccesstoolbarchevronoffset)|  
|`CMFCVisualManagerWindows7::GetRibbonQuickAccessToolBarRightMargin`|Overrides [CMFCVisualManager::GetRibbonQuickAccessToolBarRightMargin](../VS_visualcpp/CMFCVisualManager-Class.md#cmfcvisualmanager__getribbonquickaccesstoolbarrightmargin)|  
|`CMFCVisualManagerWindows7::IsHighlightWholeMenuItem`|Overrides [CMFCVisualManagerWindows::IsHighlightWholeMenuItem](../VS_visualcpp/CMFCVisualManagerWindows-Class.md#cmfcvisualmanagerwindows__ishighlightwholemenuitem)|  
|`CMFCVisualManagerWindows7::IsOwnerDrawMenuCheck`|Overrides [CMFCVisualManager::IsOwnerDrawMenuCheck](../VS_visualcpp/CMFCVisualManager-Class.md#cmfcvisualmanager__isownerdrawmenucheck)|  
|`CMFCVisualManagerWindows7::IsRibbonPresent`|Determines whether a `CMFCRibbonBar` is present and visible.|  
|`CMFCVisualManagerWindows7::OnDrawButtonBorder`|Overrides [CMFCVisualManagerWindows::OnDrawButtonBorder](../VS_visualcpp/CMFCVisualManagerWindows-Class.md#cmfcvisualmanagerwindows__ondrawbuttonborder)|  
|`CMFCVisualManagerWindows7::OnDrawCheckBoxEx`|Overrides [CMFCVisualManagerWindows::OnDrawCheckBoxEx](../VS_visualcpp/CMFCVisualManagerWindows-Class.md#cmfcvisualmanagerwindows__ondrawcheckboxex)|  
|`CMFCVisualManagerWindows7::OnDrawComboDropButton`|Overrides [CMFCVisualManagerWindows::OnDrawComboDropButton](../VS_visualcpp/CMFCVisualManagerWindows-Class.md#cmfcvisualmanagerwindows__ondrawcombodropbutton)|  
|`CMFCVisualManagerWindows7::OnDrawDefaultRibbonImage`|Overrides [CMFCVisualManager::OnDrawDefaultRibbonImage](../VS_visualcpp/CMFCVisualManager-Class.md#cmfcvisualmanager__ondrawdefaultribbonimage)|  
|`CMFCVisualManagerWindows7::OnDrawMenuBorder`|Overrides [CMFCVisualManagerWindows::OnDrawMenuBorder](../VS_visualcpp/CMFCVisualManagerWindows-Class.md#cmfcvisualmanagerwindows__ondrawmenuborder)|  
|`CMFCVisualManagerWindows7::OnDrawMenuCheck`|Overrides [CMFCVisualManager::OnDrawMenuCheck](../VS_visualcpp/CMFCVisualManager-Class.md#cmfcvisualmanager__ondrawmenucheck)|  
|`CMFCVisualManagerWindows7::OnDrawMenuLabel`|Overrides [CMFCVisualManager::OnDrawMenuLabel](../VS_visualcpp/CMFCVisualManager-Class.md#cmfcvisualmanager__ondrawmenulabel)|  
|`CMFCVisualManagerWindows7::OnDrawRadioButton`|Overrides `CMFCVisualManager::OnDrawRadioButton`|  
|`CMFCVisualManagerWindows7::OnDrawRibbonApplicationButton`|Overrides [CMFCVisualManager::OnDrawRibbonApplicationButton](../VS_visualcpp/CMFCVisualManager-Class.md#cmfcvisualmanager__ondrawribbonapplicationbutton)|  
|`CMFCVisualManagerWindows7::OnDrawRibbonButtonBorder`|Overrides [CMFCVisualManager::OnDrawRibbonButtonBorder](../VS_visualcpp/CMFCVisualManager-Class.md#cmfcvisualmanager__ondrawribbonbuttonborder)|  
|`CMFCVisualManagerWindows7::OnDrawRibbonCaption`|Overrides [CMFCVisualManager::OnDrawRibbonCaption](../VS_visualcpp/CMFCVisualManager-Class.md#cmfcvisualmanager__ondrawribboncaption)|  
|`CMFCVisualManagerWindows7::OnDrawRibbonCaptionButton`|Overrides [CMFCVisualManager::OnDrawRibbonCaptionButton](../VS_visualcpp/CMFCVisualManager-Class.md#cmfcvisualmanager__ondrawribboncaptionbutton)|  
|`CMFCVisualManagerWindows7::OnDrawRibbonCategory`|Overrides [CMFCVisualManager::OnDrawRibbonCategory](../VS_visualcpp/CMFCVisualManager-Class.md#cmfcvisualmanager__ondrawribboncategory)|  
|`CMFCVisualManagerWindows7::OnDrawRibbonCategoryTab`|Overrides [CMFCVisualManager::OnDrawRibbonCategoryTab](../VS_visualcpp/CMFCVisualManager-Class.md#cmfcvisualmanager__ondrawribboncategorytab)|  
|`CMFCVisualManagerWindows7::OnDrawRibbonDefaultPaneButton`|Overrides [CMFCVisualManager::OnDrawRibbonDefaultPaneButton](../VS_visualcpp/CMFCVisualManager-Class.md#cmfcvisualmanager__ondrawribbondefaultpanebutton)|  
|`CMFCVisualManagerWindows7::OnDrawRibbonGalleryButton`|Overrides [CMFCVisualManager::OnDrawRibbonGalleryButton](../VS_visualcpp/CMFCVisualManager-Class.md#cmfcvisualmanager__ondrawribbongallerybutton)|  
|`CMFCVisualManagerWindows7::OnDrawRibbonLaunchButton`|Overrides `CMFCVisualManager::OnDrawRibbonLaunchButton`|  
|`CMFCVisualManagerWindows7::OnDrawRibbonMenuCheckFrame`|Overrides [CMFCVisualManager::OnDrawRibbonMenuCheckFrame](../VS_visualcpp/CMFCVisualManager-Class.md#cmfcvisualmanager__ondrawribbonmenucheckframe)|  
|`CMFCVisualManagerWindows7::OnDrawRibbonPanel`|Overrides [CMFCVisualManager::OnDrawRibbonPanel](../VS_visualcpp/CMFCVisualManager-Class.md#cmfcvisualmanager__ondrawribbonpanel)|  
|`CMFCVisualManagerWindows7::OnDrawRibbonPanelCaption`|Overrides [CMFCVisualManager::OnDrawRibbonPanelCaption](../VS_visualcpp/CMFCVisualManager-Class.md#cmfcvisualmanager__ondrawribbonpanelcaption)|  
|`CMFCVisualManagerWindows7::OnDrawRibbonProgressBar`|Overrides [CMFCVisualManager::OnDrawRibbonProgressBar](../VS_visualcpp/CMFCVisualManager-Class.md#cmfcvisualmanager__ondrawribbonprogressbar)|  
|`CMFCVisualManagerWindows7::OnDrawRibbonRecentFilesFrame`|Overrides [CMFCVisualManager::OnDrawRibbonRecentFilesFrame](../VS_visualcpp/CMFCVisualManager-Class.md#cmfcvisualmanager__ondrawribbonrecentfilesframe)|  
|`CMFCVisualManagerWindows7::OnDrawRibbonSliderChannel`|Overrides [CMFCVisualManager::OnDrawRibbonSliderChannel](../VS_visualcpp/CMFCVisualManager-Class.md#cmfcvisualmanager__ondrawribbonsliderchannel)|  
|`CMFCVisualManagerWindows7::OnDrawRibbonSliderThumb`|Overrides [CMFCVisualManager::OnDrawRibbonSliderThumb](../VS_visualcpp/CMFCVisualManager-Class.md#cmfcvisualmanager__ondrawribbonsliderthumb)|  
|`CMFCVisualManagerWindows7::OnDrawRibbonSliderZoomButton`|Overrides [CMFCVisualManager::OnDrawRibbonSliderZoomButton](../VS_visualcpp/CMFCVisualManager-Class.md#cmfcvisualmanager__ondrawribbonsliderzoombutton)|  
|`CMFCVisualManagerWindows7::OnDrawRibbonStatusBarPane`|Overrides [CMFCVisualManager::OnDrawRibbonStatusBarPane](../VS_visualcpp/CMFCVisualManager-Class.md#cmfcvisualmanager__ondrawribbonstatusbarpane)|  
|`CMFCVisualManagerWindows7::OnDrawRibbonTabsFrame`|Overrides [CMFCVisualManager::OnDrawRibbonTabsFrame](../VS_visualcpp/CMFCVisualManager-Class.md#cmfcvisualmanager__ondrawribbontabsframe)|  
|`CMFCVisualManagerWindows7::OnDrawStatusBarSizeBox`|Overrides [CMFCVisualManagerWindows::OnDrawStatusBarSizeBox](../VS_visualcpp/CMFCVisualManagerWindows-Class.md#cmfcvisualmanagerwindows__ondrawstatusbarsizebox)|  
|`CMFCVisualManagerWindows7::OnFillBarBackground`|Overrides [CMFCVisualManagerWindows::OnFillBarBackground](../VS_visualcpp/CMFCVisualManagerWindows-Class.md#cmfcvisualmanagerwindows__onfillbarbackground)|  
|`CMFCVisualManagerWindows7::OnFillButtonInterior`|Overrides [CMFCVisualManagerWindows::OnFillButtonInterior](../VS_visualcpp/CMFCVisualManagerWindows-Class.md#cmfcvisualmanagerwindows__onfillbuttoninterior)|  
|[CMFCVisualManagerWindows7::OnFillMenuImageRect](#cmfcvisualmanagerwindows7__onfillmenuimagerect)|The framework calls this method when it fills area around menu item images.|  
|`CMFCVisualManagerWindows7::OnFillRibbonButton`|Overrides [CMFCVisualManager::OnFillRibbonButton](../VS_visualcpp/CMFCVisualManager-Class.md#cmfcvisualmanager__onfillribbonbutton)|  
|`CMFCVisualManagerWindows7::OnFillRibbonQuickAccessToolBarPopup`|Overrides [CMFCVisualManager::OnFillRibbonQuickAccessToolBarPopup](../VS_visualcpp/CMFCVisualManager-Class.md#cmfcvisualmanager__onfillribbonquickaccesstoolbarpopup)|  
|`CMFCVisualManagerWindows7::OnHighlightMenuItem`|Overrides [CMFCVisualManagerWindows::OnHighlightMenuItem](../VS_visualcpp/CMFCVisualManagerWindows-Class.md#cmfcvisualmanagerwindows__onhighlightmenuitem)|  
|`CMFCVisualManagerWindows7::OnNcActivate`|Overrides [CMFCVisualManager::OnNcActivate](../VS_visualcpp/CMFCVisualManager-Class.md#cmfcvisualmanager__onncactivate)|  
|`CMFCVisualManagerWindows7::OnNcPaint`|Overrides [CMFCVisualManager::OnNcPaint](../VS_visualcpp/CMFCVisualManager-Class.md#cmfcvisualmanager__onncpaint)|  
|`CMFCVisualManagerWindows7::OnUpdateSystemColors`|Overrides [CMFCVisualManagerWindows::OnUpdateSystemColors](../VS_visualcpp/CMFCVisualManagerWindows-Class.md#cmfcvisualmanagerwindows__onupdatesystemcolors)|  
|`CMFCVisualManagerWindows7::SetResourceHandle`|Sets the resource handle that describes the attributes of the visual manager.|  
|`CMFCVisualManagerWindows7::SetStyle`|Sets the color scheme of the `CMFCVisualManagerWindows7` GUI.|  
  
## Remarks  
 Use the `CMFCVisualManagerWindows7` class to change the appearance of your application to mimic a default Windows 7 application. This class might not be valid if your application is running on a version of Windows earlier than Windows 7. In that scenario, the application uses the default visual manager defined in [CMFCVisualManager](../VS_visualcpp/CMFCVisualManager-Class.md).  
  
 The CMFCVisualManagerWindows7 inherits multiple methods from both the [CMFCVisualManagerWindows Class](../VS_visualcpp/CMFCVisualManagerWindows-Class.md) and the `CMFCVisualManager` class. The methods listed in the previous section are methods new to the `CMFCVisualManagerWindows7` class.  
  
## Inheritance Hierarchy  
 [CObject](../VS_visualcpp/CObject-Class.md)  
  
 [CMFCBaseVisualManager](../VS_visualcpp/CMFCBaseVisualManager-Class.md)  
  
 [CMFCVisualManager](../VS_visualcpp/CMFCVisualManager-Class.md)  
  
 [CMFCVisualManagerOfficeXP](../VS_visualcpp/CMFCVisualManagerOfficeXP-Class.md)  
  
 [CMFCVisualManagerWindows](../VS_visualcpp/CMFCVisualManagerWindows-Class.md)  
  
 `CMFCVisualManagerWindows7`  
  
## Requirements  
 **Header:** afxvisualmanagerwindows7.h  
  
##  <a name="cmfcvisualmanagerwindows7___dtorcmfcvisualmanagerwindows7"></a>  CMFCVisualManagerWindows7::~CMFCVisualManagerWindows7  
 Default destructor.  
  
```  
virtual ~CMFCVisualManagerWindows7();  
```  
  
##  <a name="cmfcvisualmanagerwindows7__cmfcvisualmanagerwindows7"></a>  CMFCVisualManagerWindows7::CMFCVisualManagerWindows7  
 Default constructor.  
  
```  
CMFCVisualManagerWindows7();  
```  
  
##  <a name="cmfcvisualmanagerwindows7__getribboneditbackgroundcolor"></a>  CMFCVisualManagerWindows7::GetRibbonEditBackgroundColor  
 Obtains the background color of a ribbon edit box.  
  
```  
virtual COLORREF GetRibbonEditBackgroundColor (  
    CMFCRibbonRichEditCtrl* pEdit,  
    BOOL bIsHighlighted,  
    BOOL bIsPaneHighlighted,  
    BOOL bIsDisabled );  
```  
  
### Parameters  
 [in] `pEdit`  
 A pointer to the edit control. This value cannot be `NULL`.  
  
 [out] `bIsHighlighted`  
 Returns whether the ribbon box is highlighted.  
  
 [out] `bIsPaneHighlighted`  
 Returns `TRUE` if the ribbon panel that contains `pEdit` is highlighted.  
  
 [out] `bIsDisabled`  
 Returns whether `pEdit` is disabled.  
  
### Return Value  
 The background color of the edit box `pEdit`.  
  
### Remarks  
  
##  <a name="cmfcvisualmanagerwindows7__onfillmenuimagerect"></a>  CMFCVisualManagerWindows7::OnFillMenuImageRect  
 The framework calls this method when it fills area around a menu item image.  
  
```  
virtual void OnFillMenuImageRect(  
    CDC* pDC,  
    CMFCToolBarButton* pButton,  
    CRect rect,  
    CMFCVisualManager::AFX_BUTTON_STATE state );  
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to the device context of a menu button.  
  
 [in] `pButton`  
 A pointer to a `CMFCToolBarButton`. The framework fills the background for this button.  
  
 [in] `rect`  
 A rectangle that specifies the boundaries of the menu button image area.  
  
 [in] `state`  
 The button state.  
  
### Remarks  
  
## See Also  
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [Classes](../VS_visualcpp/MFC-Classes.md)   
 [CMFCVisualManager Class](../VS_visualcpp/CMFCVisualManager-Class.md)   
 [CMFCVisualManagerWindows Class](../VS_visualcpp/CMFCVisualManagerWindows-Class.md)   
 [CMFCVisualManager::SetDefaultManager](../VS_visualcpp/CMFCVisualManager-Class.md#cmfcvisualmanager__setdefaultmanager)