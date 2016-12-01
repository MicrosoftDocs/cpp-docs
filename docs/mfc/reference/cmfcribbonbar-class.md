---
title: "CMFCRibbonBar Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCRibbonBar"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCRibbonBar class"
ms.assetid: a65d06fa-1a28-4cc0-8971-bc9d7c9198fe
caps.latest.revision: 41
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
# CMFCRibbonBar Class
The `CMFCRibbonBar` class implements a ribbon bar similar to that used in Office 2007.  
  
## Syntax  
  
```  
class CMFCRibbonBar : public CPane  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|`CMFCRibbonBar::CMFCRibbonBar`|Default constructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCRibbonBar::ActivateContextCategory](#cmfcribbonbar__activatecontextcategory)|Activates a context category that is already visible.|  
|[CMFCRibbonBar::AddCategory](#cmfcribbonbar__addcategory)|Adds a new ribbon category to the ribbon.|  
|[CMFCRibbonBar::AddContextCategory](#cmfcribbonbar__addcontextcategory)|Adds a context category.|  
|[CMFCRibbonBar::AddMainCategory](#cmfcribbonbar__addmaincategory)|Adds a new main ribbon category.|  
|[CMFCRibbonBar::AddPrintPreviewCategory](#cmfcribbonbar__addprintpreviewcategory)||  
|[CMFCRibbonBar::AddQATOnlyCategory](#cmfcribbonbar__addqatonlycategory)||  
|[CMFCRibbonBar::AddToTabs](#cmfcribbonbar__addtotabs)|Add a ribbon element to the right side of a ribbon bar.|  
|[CMFCRibbonBar::CreateEx](#cmfcribbonbar__createex)|Creates a control bar and attaches it to the [CPane](../../mfc/reference/cpane-class.md) object. (Overrides [CPane::CreateEx](../../mfc/reference/cpane-class.md#cpane__createex).)|  
|[CMFCRibbonBar::Create](#cmfcribbonbar__create)|Creates a ribbon bar control and attaches it to a ribbon bar.|  
|[CMFCRibbonBar::DeactivateKeyboardFocus](#cmfcribbonbar__deactivatekeyboardfocus)||  
|[CMFCRibbonBar::DrawMenuImage](#cmfcribbonbar__drawmenuimage)||  
|[CMFCRibbonBar::DWMCompositionChanged](#cmfcribbonbar__dwmcompositionchanged)||  
|[CMFCRibbonBar::EnableKeyTips](#cmfcribbonbar__enablekeytips)|Enable or disable key tips for the ribbon control.|  
|[CMFCRibbonBar::EnablePrintPreview](#cmfcribbonbar__enableprintpreview)|Enable the **Print Preview** tab.|  
|[CMFCRibbonBar::EnableToolTips](#cmfcribbonbar__enabletooltips)|Enables or disables tooltips and tooltip descriptions on the ribbon bar.|  
|[CMFCRibbonBar::FindByData](#cmfcribbonbar__findbydata)|Find a ribbon element by using data that a user specifies.|  
|[CMFCRibbonBar::FindByID](#cmfcribbonbar__findbyid)|Finds a ribbon element that has the specified command id.|  
|[CMFCRibbonBar::FindCategoryIndexByData](#cmfcribbonbar__findcategoryindexbydata)|Finds the index of the ribbon category that contains the user-defined data.|  
|[CMFCRibbonBar::ForceRecalcLayout](#cmfcribbonbar__forcerecalclayout)||  
|[CMFCRibbonBar::GetActiveCategory](#cmfcribbonbar__getactivecategory)|Gets a pointer to an active category.|  
|[CMFCRibbonBar::GetCaptionHeight](#cmfcribbonbar__getcaptionheight)|Returns the caption height. (Overrides [CBasePane::GetCaptionHeight](../../mfc/reference/cbasepane-class.md#cbasepane__getcaptionheight).)|  
|[CMFCRibbonBar::GetCategory](#cmfcribbonbar__getcategory)|Gets the pointer to a category located at a specified index.|  
|[CMFCRibbonBar::GetCategoryCount](#cmfcribbonbar__getcategorycount)|Gets the number of the ribbon categories in the ribbon bar.|  
|[CMFCRibbonBar::GetCategoryHeight](#cmfcribbonbar__getcategoryheight)||  
|[CMFCRibbonBar::GetCategoryIndex](#cmfcribbonbar__getcategoryindex)|Returns the index of a ribbon category.|  
|[CMFCRibbonBar::GetContextName](#cmfcribbonbar__getcontextname)|Retrieves the name of the context category caption that you specify by using an ID.|  
|[CMFCRibbonBar::GetDroppedDown](#cmfcribbonbar__getdroppeddown)||  
|[CMFCRibbonBar::GetElementsByID](#cmfcribbonbar__getelementsbyid)|Gets an array that contains the pointers to all the ribbon elements that have the specified ID.|  
|[CMFCRibbonBar::GetApplicationButton](#cmfcribbonbar__getapplicationbutton)|Gets a pointer to a ribbon button.|  
|[CMFCRibbonBar::GetFocused](#cmfcribbonbar__getfocused)|Returns a focused element.|  
|[CMFCRibbonBar::GetHideFlags](#cmfcribbonbar__gethideflags)||  
|[CMFCRibbonBar::GetItemIDsList](#cmfcribbonbar__getitemidslist)||  
|[CMFCRibbonBar::GetKeyboardNavigationLevel](#cmfcribbonbar__getkeyboardnavigationlevel)||  
|[CMFCRibbonBar::GetKeyboardNavLevelCurrent](#cmfcribbonbar__getkeyboardnavlevelcurrent)||  
|[CMFCRibbonBar::GetKeyboardNavLevelParent](#cmfcribbonbar__getkeyboardnavlevelparent)||  
|[CMFCRibbonBar::GetMainCategory](#cmfcribbonbar__getmaincategory)|Returns a pointer to the ribbon category that is currently selected.|  
|[CMFCRibbonBar::GetQATCommandsLocation](#cmfcribbonbar__getqatcommandslocation)||  
|[CMFCRibbonBar::GetQATDroppedDown](#cmfcribbonbar__getqatdroppeddown)||  
|[CMFCRibbonBar::GetQuickAccessCommands](#cmfcribbonbar__getquickaccesscommands)|Fills a list that contains the command IDs of all the elements that appear on the Quick Access Toolbar.|  
|[CMFCRibbonBar::GetQuickAccessToolbarLocation](#cmfcribbonbar__getquickaccesstoolbarlocation)||  
|[CMFCRibbonBar::GetTabTrancateRatio](#cmfcribbonbar__gettabtrancateratio)||  
|[CMFCRibbonBar::GetTooltipFixedWidthLargeImage](#cmfcribbonbar__gettooltipfixedwidthlargeimage)||  
|[CMFCRibbonBar::GetTooltipFixedWidthRegular](#cmfcribbonbar__gettooltipfixedwidthregular)||  
|[CMFCRibbonBar::GetVisibleCategoryCount](#cmfcribbonbar__getvisiblecategorycount)||  
|[CMFCRibbonBar::HideAllContextCategories](#cmfcribbonbar__hideallcontextcategories)|Hides all the categories that are active and visible.|  
|[CMFCRibbonBar::HideKeyTips](#cmfcribbonbar__hidekeytips)||  
|[CMFCRibbonBar::HitTest](#cmfcribbonbar__hittest)|Finds a pointer to the ribbon element that is located at the specified point in the ribbon bar's client coordinates.|  
|[CMFCRibbonBar::IsKeyTipEnabled](#cmfcribbonbar__iskeytipenabled)|Determines whether keytips are enabled.|  
|[CMFCRibbonBar::IsMainRibbonBar](#cmfcribbonbar__ismainribbonbar)||  
|[CMFCRibbonBar::IsPrintPreviewEnabled](#cmfcribbonbar__isprintpreviewenabled)|Determines whether the **Print Preview** tab is enabled.|  
|[CMFCRibbonBar::IsQATEmpty](#cmfcribbonbar__isqatempty)||  
|[CMFCRibbonBar::IsQuickAccessToolbarOnTop](#cmfcribbonbar__isquickaccesstoolbarontop)|Specifies whether the Quick Access Toolbar is located above the ribbon bar.|  
|[CMFCRibbonBar::IsReplaceFrameCaption](#cmfcribbonbar__isreplaceframecaption)|Determines whether the ribbon bar replaces the main frame caption, or is added below the frame caption.|  
|[CMFCRibbonBar::IsShowGroupBorder](#cmfcribbonbar__isshowgroupborder)||  
|[CMFCRibbonBar::IsToolTipDescrEnabled](#cmfcribbonbar__istooltipdescrenabled)|Determines whether the tooltip descriptions are enabled.|  
|[CMFCRibbonBar::IsToolTipEnabled](#cmfcribbonbar__istooltipenabled)|Determines whether the tooltips for the ribbon bar are enabled.|  
|[CMFCRibbonBar::IsTransparentCaption](#cmfcribbonbar__istransparentcaption)||  
|[CMFCRibbonBar::IsWindows7Look](#cmfcribbonbar__iswindows7look)|Indicates whether the ribbon has Windows 7-style look (small rectangular application button).|  
|[CMFCRibbonBar::LoadFromResource](#cmfcribbonbar__loadfromresource)|Overloaded. Loads a Ribbon Bar from application resources.|  
|[CMFCRibbonBar::OnClickButton](#cmfcribbonbar__onclickbutton)||  
|[CMFCRibbonBar::OnEditContextMenu](#cmfcribbonbar__oneditcontextmenu)||  
|[CMFCRibbonBar::OnRTLChanged](#cmfcribbonbar__onrtlchanged)|(Overrides `CPane::OnRTLChanged`.)|  
|[CMFCRibbonBar::OnSetAccData](#cmfcribbonbar__onsetaccdata)|(Overrides [CBasePane::OnSetAccData](../../mfc/reference/cbasepane-class.md#cbasepane__onsetaccdata).)|  
|[CMFCRibbonBar::OnShowRibbonContextMenu](#cmfcribbonbar__onshowribboncontextmenu)||  
|[CMFCRibbonBar::OnShowRibbonQATMenu](#cmfcribbonbar__onshowribbonqatmenu)||  
|[CMFCRibbonBar::OnSysKeyDown](#cmfcribbonbar__onsyskeydown)||  
|[CMFCRibbonBar::OnSysKeyUp](#cmfcribbonbar__onsyskeyup)||  
|[CMFCRibbonBar::PopTooltip](#cmfcribbonbar__poptooltip)||  
|[CMFCRibbonBar::PreTranslateMessage](#cmfcribbonbar__pretranslatemessage)|(Overrides `CBasePane::PreTranslateMessage`.)|  
|[CMFCRibbonBar::RecalcLayout](#cmfcribbonbar__recalclayout)|(Overrides [CPane::RecalcLayout](../../mfc/reference/cpane-class.md#cpane__recalclayout).)|  
|[CMFCRibbonBar::RemoveAllCategories](#cmfcribbonbar__removeallcategories)|Removes all the ribbon categories from the ribbon bar.|  
|[CMFCRibbonBar::RemoveAllFromTabs](#cmfcribbonbar__removeallfromtabs)|Removes all ribbon elements from the tab area.|  
|[CMFCRibbonBar::RemoveCategory](#cmfcribbonbar__removecategory)|Removes the ribbon category that is located at the specified index.|  
|[CMFCRibbonBar::SaveToXMLBuffer](#cmfcribbonbar__savetoxmlbuffer)|Saves the Ribbon Bar to a buffer.|  
|[CMFCRibbonBar::SaveToXMLFile](#cmfcribbonbar__savetoxmlfile)|Saves the Ribbon Bar to XML file.|  
|[CMFCRibbonBar::SetActiveCategory](#cmfcribbonbar__setactivecategory)|Sets a specified ribbon category to active.|  
|[CMFCRibbonBar::SetActiveMDIChild](#cmfcribbonbar__setactivemdichild)||  
|[CMFCRibbonBar::SetElementKeys](#cmfcribbonbar__setelementkeys)|Sets the specified keytips for all ribbon elements that have the specified command ID.|  
|[CMFCRibbonBar::SetApplicationButton](#cmfcribbonbar__setapplicationbutton)|Assigns an application ribbon button to the ribbon bar.|  
|[CMFCRibbonBar::SetKeyboardNavigationLevel](#cmfcribbonbar__setkeyboardnavigationlevel)||  
|[CMFCRibbonBar::SetMaximizeMode](#cmfcribbonbar__setmaximizemode)||  
|[CMFCRibbonBar::SetQuickAccessCommands](#cmfcribbonbar__setquickaccesscommands)|Adds one or more ribbon elements to the Quick Access Toolbar.|  
|[CMFCRibbonBar::SetQuickAccessDefaultState](#cmfcribbonbar__setquickaccessdefaultstate)|Specifies the default state for the Quick Access Toolbar.|  
|[CMFCRibbonBar::SetQuickAccessToolbarOnTop](#cmfcribbonbar__setquickaccesstoolbarontop)|Positions the Quick Access Toolbar (QAT) above or below the ribbon bar.|  
|[CMFCRibbonBar::SetTooltipFixedWidth](#cmfcribbonbar__settooltipfixedwidth)||  
|[CMFCRibbonBar::SetWindows7Look](#cmfcribbonbar__setwindows7look)|Enable/disable ribbon Windows 7-style look (small rectangular application button)|  
|[CMFCRibbonBar::ShowCategory](#cmfcribbonbar__showcategory)|Shows or hides the specified ribbon category.|  
|[CMFCRibbonBar::ShowContextCategories](#cmfcribbonbar__showcontextcategories)|Shows or hides the context categories that have the specified ID.|  
|[CMFCRibbonBar::ShowKeyTips](#cmfcribbonbar__showkeytips)||  
|[CMFCRibbonBar::ToggleMimimizeState](#cmfcribbonbar__togglemimimizestate)|Toggles the ribbon bar between the minimized and maximized states..|  
|[CMFCRibbonBar::TranslateChar](#cmfcribbonbar__translatechar)||  
  
## Remarks  
 Microsoft introduced the Office Fluent Ribbon when it simultaneously released Microsoft Office 2007. This ribbon bar is not just a new control. It represents a new user-interface paradigm. The ribbon is a pane that contains a set of tabs called categories. Each category is logically split into ribbon panels and each panel can contain various controls and command buttons.  
  
 The elements that appear on the ribbon bar expand and contract to make the best use of available space. For example, if a ribbon panel has insufficient space to display its elements, it becomes a menu button that displays subitems on a pop-up menu. The ribbon bar behaves as a static (non-floating) control bar and can be docked at the top of a frame.  
  
 You can use the `CMFCRibbonStatusBar` class to implement a status bar similar to the one used in Office 2007. A ribbon category contains (and displays) a group of [ribbon panels](../../mfc/reference/cmfcribbonpanel-class.md). Each ribbon panel contains one or more ribbon elements, which are derived from [CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md).  
  
 For information about how to add a ribbon bar to your existing MFC application, see [Walkthrough: Updating the MFC Scribble Application](../../mfc/walkthrough-updating-the-mfc-scribble-application-part-1.md).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md)  
  
 [CPane](../../mfc/reference/cpane-class.md)  
  
 [CMFCRibbonBar](../../mfc/reference/cmfcribbonbar-class.md)  
  
## Requirements  
 **Header:** afxribbonbar.h  
  
##  <a name="cmfcribbonbar__activatecontextcategory"></a>  CMFCRibbonBar::ActivateContextCategory  
 Activates a context category that is already visible.  
  
```  
BOOL ActivateContextCategory(UINT uiContextID);
```  
  
### Parameters  
 [in] `uiContextID`  
 The context category ID.  
  
### Return Value  
 `TRUE` if a context category with `uiContextID` is found and activated; otherwise `FALSE`.  
  
##  <a name="cmfcribbonbar__addcategory"></a>  CMFCRibbonBar::AddCategory  
 Creates and initializes a new ribbon category for the ribbon bar.  
  
```  
CMFCRibbonCategory* AddCategory(
    LPCTSTR lpszName,  
    UINT uiSmallImagesResID,  
    UINT uiLargeImagesResID,  
    CSize sizeSmallImage= CSize(16,
    16),  
    CSize sizeLargeImage= CSize(32,
    32),  
    int nInsertAt = -1,  
    CRuntimeClass* pRTI= NULL);
```  
  
### Parameters  
 [in] `lpszName`  
 Name of the ribbon category.  
  
 [in] `uiSmallImagesResID`  
 Resource ID of the small image list for the ribbon category.  
  
 [in] `uiLargeImagesResID`  
 Resource ID of the large image list for the ribbon category.  
  
 [in] `sizeSmallImage`  
 Specifies the size of small images for the ribbon category.  
  
 [in] `sizeLargeImage`  
 Specifies the size of large images for the ribbon category.  
  
 [in] `nInsertAt`  
 Zero based index of the category location.  
  
 [in] `pRTI`  
 Pointer to a [CMFCRibbonCategory Class](../../mfc/reference/cmfcribboncategory-class.md) run-time class to dynamically create a ribbon category at run-time.  
  
### Return Value  
 A pointer to the new ribbon category if the method was successful; otherwise, `NULL`.  
  
### Remarks  
 If the `pRTI` parameter is not `NULL`, the new ribbon category is created dynamically using the run-time class.  
  
### Example  
 The following example demonstrates how to use the `AddCategory` method in the `CMFCRibbonBar` class.  
  
 [!code-cpp[NVC_MFC_RibbonApp#5](../../mfc/reference/codesnippet/cpp/cmfcribbonbar-class_1.cpp)]  
  
##  <a name="cmfcribbonbar__addcontextcategory"></a>  CMFCRibbonBar::AddContextCategory  
 Creates and initializes a new context category for the ribbon bar.  
  
```  
CMFCRibbonCategory* AddContextCategory(
    LPCTSTR lpszName,  
    LPCTSTR lpszContextName,  
    UINT uiContextID,  
    AFX_RibbonCategoryColor clrContext,  
    UINT uiSmallImagesResID,  
    UINT uiLargeImagesResID,  
    CSize sizeSmallImage = CSize(16,
    16),  
    CSize sizeLargeImage = CSize(32,
    32),  
    CRuntimeClass* pRTI = NULL);
```  
  
### Parameters  
 [in] `lpszName`  
 Name of the category.  
  
 [in] `lpszContextName`  
 Name of the context category caption.  
  
 [in] `uiContextID`  
 Context ID.  
  
 [in] `clrContext`  
 Color of the context category caption.  
  
 [in] `uiSmallImagesResID`  
 Resource ID of the small image of a context category.  
  
 [in] `uiLargeImagesResID`  
 Resource ID of the large image of a context category.  
  
 [in] `sizeSmallImage`  
 Size of a small image.  
  
 [in] `sizeLargeImage`  
 Size of a large image.  
  
 [in] `pRTI`  
 Pointer to a runtime class.  
  
### Return Value  
 A pointer to the newly created category, or `NULL` if the `CreateObject` method of `pRTI` cannot create the specified category.  
  
### Remarks  
 Use this function to add a context category. Context categories are a special type of category that can be shown or hidden at runtime, depending on the current application context. For example, when the user selects an object, you can display special tabs with context categories which you use to change the specific selected object.  
  
 The color of a context category can be one of the following values:  
  
-   AFX_CategoryColor_None  
  
-   AFX_CategoryColor_Red  
  
-   AFX_CategoryColor_Orange  
  
-   AFX_CategoryColor_Yellow  
  
-   AFX_CategoryColor_Green  
  
-   AFX_CategoryColor_Blue  
  
-   AFX_CategoryColor_Indigo  
  
-   AFX_CategoryColor_Violet  
  
##  <a name="cmfcribbonbar__addmaincategory"></a>  CMFCRibbonBar::AddMainCategory  
 Creates a new main ribbon category for the ribbon bar.  
  
```  
CMFCRibbonMainPanel* AddMainCategory(
    LPCTSTR lpszName,  
    UINT uiSmallImagesResID,  
    UINT uiLargeImagesResID,  
    CSize sizeSmallImage = CSize(16,
    16),  
    CSize sizeLargeImage = CSize(32,
    32));
```  
  
### Parameters  
 [in] `lpszName`  
 Name of the main ribbon category.  
  
 [in] `uiSmallImagesResID`  
 Resource ID of small images.  
  
 [in] `uiLargeImagesResID`  
 Resource ID of large images.  
  
 [in] `sizeSmallImage`  
 The size of small images.  
  
 [in] `sizeLargeImage`  
 The size of large images.  
  
### Return Value  
 Pointer to the new main ribbon category if the method was successful; otherwise, `NULL`.  
  
### Remarks  
 If a main ribbon category already exists, it is deleted.  
  
### Example  
 The following example demonstrates how to use the `AddMainCategory` method in the `CMFCRibbonBar` class.  
  
 [!code-cpp[NVC_MFC_RibbonApp#4](../../mfc/reference/codesnippet/cpp/cmfcribbonbar-class_2.cpp)]  
  
##  <a name="cmfcribbonbar__addprintpreviewcategory"></a>  CMFCRibbonBar::AddPrintPreviewCategory  
 Creates a print preview category on the ribbon bar.  
  
```  
CMFCRibbonCategory* AddPrintPreviewCategory();
```  
  
### Return Value  
 A pointer to the new ribbon category if the method was successful; otherwise, `NULL`.  
  
### Remarks  
 This method creates a ribbon category and the controls that it needs in order to provide a print preview.  
  
##  <a name="cmfcribbonbar__addqatonlycategory"></a>  CMFCRibbonBar::AddQATOnlyCategory  
 Creates a quick access toolbar ribbon category.  
  
```  
CMFCRibbonCategory* AddQATOnlyCategory(
    LPCTSTR lpszName,  
    UINT uiSmallImagesResID,  
    CSize sizeSmallImage = CSize(16,
    16));
```  
  
### Parameters  
 [in] `lpszName`  
 Name of the category.  
  
 [in] `uiSmallImagesResID`  
 Resource ID of the image list for the category.  
  
 [in] `sizeSmallImage`  
 Size of images for ribbon elements in the category.  
  
### Return Value  
 A pointer to the new category if the method was successful; otherwise, `NULL`.  
  
### Remarks  
 The quick access toolbar ribbon category is only used on the quick access toolbar customization dialog box.  
  
##  <a name="cmfcribbonbar__addtotabs"></a>  CMFCRibbonBar::AddToTabs  
 Adds the specified ribbon element to the tabs row of the ribbon bar.  
  
```  
void AddToTabs(CMFCRibbonBaseElement* pElement);
```  
  
### Parameters  
 [in] `pElement`  
 Pointer to a ribbon element.  
  
### Remarks  
 The ribbon element is positioned before any system buttons.  
  
##  <a name="cmfcribbonbar__cmfcribbonbar"></a>  CMFCRibbonBar::CMFCRibbonBar  
 Constructs and initializes a [CMFCRibbonBar](../../mfc/reference/cmfcribbonbar-class.md) object.  
  
```  
CMFCRibbonBar(BOOL bReplaceFrameCaption = TRUE);
```  
  
### Parameters  
 [in] `bReplaceFrameCaption`  
 `TRUE` for the ribbon bar to replace the caption of the main frame window; `FALSE` to locate the ribbon bar under the caption of the main frame window.  
  
### Remarks  
  
##  <a name="cmfcribbonbar__create"></a>  CMFCRibbonBar::Create  
 Creates a window for the ribbon bar.  
  
```  
BOOL Create(
    CWnd* pParentWnd,  
    DWORD dwStyle = WS_CHILD | WS_VISIBLE | CBRS_TOP,  
    UINT nID = AFX_IDW_RIBBON_BAR);
```  
  
### Parameters  
 [in] `pParentWnd`  
 Pointer to the parent window for the ribbon bar.  
  
 [in] `dwStyle`  
 A logical combination of styles for the new window.  
  
 [in] `nID`  
 ID of the new window.  
  
### Return Value  
 `TRUE` if the window was created; otherwise `FALSE`.  
  
### Remarks  
  
### Example  
 The following example demonstrates how to use the `Create` method of the `CMFCRibbonBar` class.  
  
 [!code-cpp[NVC_MFC_RibbonApp#1](../../mfc/reference/codesnippet/cpp/cmfcribbonbar-class_3.cpp)]  
  
##  <a name="cmfcribbonbar__createex"></a>  CMFCRibbonBar::CreateEx  
 Creates a window for the ribbon bar.  
  
```  
BOOL CreateEx(
    CWnd* pParentWnd,  
    DWORD dwCtrlStyle = 0,  
    DWORD dwStyle = WS_CHILD | WS_VISIBLE | CBRS_TOP,  
    UINT nID = AFX_IDW_RIBBON_BAR);
```  
  
### Parameters  
 [in] `pParentWnd`  
 Pointer to the parent window for the ribbon bar.  
  
 [in] `dwCtrlStyle`  
 This parameter is not used.  
  
 [in] `dwStyle`  
 A logical combination of styles for the new window.  
  
 [in] `nID`  
 ID of the new window.  
  
### Return Value  
 `TRUE` if the window was created; otherwise `FALSE`.  
  
### Remarks  
  
##  <a name="cmfcribbonbar__deactivatekeyboardfocus"></a>  CMFCRibbonBar::DeactivateKeyboardFocus  
 Closes all keytip controls on the ribbon bar.  
  
```  
void DeactivateKeyboardFocus(BOOL bSetFocus = TRUE);
```  
  
### Parameters  
 [in] `bSetFocus`  
 `TRUE` to set the focus to the parent window of the ribbon bar.  
  
### Remarks  
  
##  <a name="cmfcribbonbar__drawmenuimage"></a>  CMFCRibbonBar::DrawMenuImage  
 Draws the image for a menu button.  
  
```  
BOOL DrawMenuImage(
    CDC* pDC,  
    const CMFCToolBarMenuButton* pMenuItem,  
    const CRect& rectImage);
```  
  
### Parameters  
 [in] `pDC`  
 Pointer to a device context for the menu button.  
  
 [in] `pMenuItem`  
 Pointer to a toolbar menu button.  
  
 [in] `rectImage`  
 The display rectangle for a menu button.  
  
### Return Value  
 `TRUE` if the image was drawn; otherwise `FALSE`.  
  
### Remarks  
  
##  <a name="cmfcribbonbar__dwmcompositionchanged"></a>  CMFCRibbonBar::DWMCompositionChanged  
 Adjusts the display of the ribbon bar when Desktop Window Manager (DWM) composition is enabled or disabled.  
  
```  
virtual void DWMCompositionChanged();
```  
  
### Remarks  
  
##  <a name="cmfcribbonbar__enablekeytips"></a>  CMFCRibbonBar::EnableKeyTips  
 Enables or disables the keytip feature for the ribbon bar.  
  
```  
void EnableKeyTips(BOOL bEnable = TRUE);
```  
  
### Parameters  
 [in] `bEnable`  
 `TRUE` to enable the keytips feature; `FALSE` to disable the keytips feature.  
  
### Remarks  
 When you enable this feature, key tips are displayed when the user presses the ALT or F10 button. When the user presses ALT key, key tips are displayed with a 200 millisecond delay. This delay allows for shortcuts to be executed so that the pressed ALT key does not interfere with other combinations that include the ALT key.  
  
##  <a name="cmfcribbonbar__enableprintpreview"></a>  CMFCRibbonBar::EnablePrintPreview  
 Enables or disables the **Print Preview** feature.  
  
```  
void EnablePrintPreview(BOOL bEnable = TRUE);
```  
  
### Parameters  
 [in] `bEnable`  
 `TRUE` to enable the **Print Preview** feature; `FALSE` to disable the **Print Preview** feature.  
  
### Remarks  
 If `bEnable` is `FALSE` and a print preview category exists, it is deleted.  
  
 By default the **Print Preview** feature is enabled.  
  
##  <a name="cmfcribbonbar__enabletooltips"></a>  CMFCRibbonBar::EnableToolTips  
 Enables or disables tooltips and optional tooltip descriptions on the ribbon bar.  
  
```  
void EnableToolTips(
    BOOL bEnable = TRUE,  
    BOOL bEnableDescr = TRUE);
```  
  
### Parameters  
 [in] `bEnable`  
 `TRUE` to enable tooltips on the ribbon bar; `FALSE` to disable tooltips on the ribbon bar.  
  
 [in] `bEnableDescr`  
 `TRUE` to enable tooltip descriptions on the tooltip; `FALSE` to disable tooltip descriptions on the tooltip.  
  
### Remarks  
 The `bEnable` parameter determines whether tooltips are displayed when the mouse hovers over a ribbon element. The `bEnableDescr` parameter determines whether additional descriptive text appears with the tooltip text.  
  
##  <a name="cmfcribbonbar__findbydata"></a>  CMFCRibbonBar::FindByData  
 Retrieves a pointer to a ribbon element if it has the specified data and visibility.  
  
```  
CMFCRibbonBaseElement* FindByData(
    DWORD_PTR dwData,  
    BOOL bVisibleOnly = TRUE) const;

 
```  
  
### Parameters  
 [in] `dwData`  
 The data associated with a ribbon element.  
  
 [in] `bVisibleOnly`  
 `TRUE` to search visible ribbon elements only; `FALSE` to search all ribbon elements.  
  
### Return Value  
 A pointer to a ribbon element if it has the specified data and visibility; otherwise `NULL`.  
  
### Remarks  
 A ribbon element is any control that you can add to the ribbon, such as a ribbon button, or a ribbon category, or a ribbon slider.  
  
##  <a name="cmfcribbonbar__findbyid"></a>  CMFCRibbonBar::FindByID  
 Retrieves a pointer to the ribbon element that has the specified command ID and search values.  
  
```  
CMFCRibbonBaseElement* FindByID(
    UINT uiCmdID,  
    BOOL bVisibleOnly = TRUE,  
    BOOL bExcludeQAT = FALSE) const;

 
```  
  
### Parameters  
 [in] `uiCmdID`  
 Command ID for a ribbon element.  
  
 [in] `bVisibleOnly`  
 `TRUE` to search visible ribbon elements only; `FALSE` to search all ribbon elements.  
  
 [in] `bExcludeQAT`  
 `TRUE` to exclude quick access toolbar elements from the search; otherwise, `FALSE`.  
  
### Return Value  
 A pointer to a ribbon element if it has the specified command ID and search values; otherwise, `NULL`.  
  
### Remarks  
 A ribbon element is any ribbon control that can be added to the ribbon, such as a ribbon button, or a ribbon category, or a ribbon slider.  
  
 In general, there can be more than one ribbon element that has the same command ID. If you want to obtain pointers to all ribbon elements that use a specified command ID, use the [CMFCRibbonBar::GetElementsByID](#cmfcribbonbar__getelementsbyid) method.  
  
##  <a name="cmfcribbonbar__findcategoryindexbydata"></a>  CMFCRibbonBar::FindCategoryIndexByData  
 Retrieves the index of the ribbon category that contains the specified data.  
  
```  
int FindCategoryIndexByData(DWORD dwData) const;

 
```  
  
### Parameters  
 [in] `dwData`  
 The data associated with a ribbon category.  
  
### Return Value  
 The zero-based index of a ribbon category if the method was successful; otherwise -1.  
  
##  <a name="cmfcribbonbar__forcerecalclayout"></a>  CMFCRibbonBar::ForceRecalcLayout  
 Adjusts the layout of all items in the ribbon bar and parent window and redraws the whole window.  
  
```  
void ForceRecalcLayout();
```  
  
### Remarks  
  
##  <a name="cmfcribbonbar__getactivecategory"></a>  CMFCRibbonBar::GetActiveCategory  
 Retrieves a pointer to the active ribbon category.  
  
```  
CMFCRibbonCategory* GetActiveCategory() const;

 
```  
  
### Return Value  
 A pointer to the active ribbon category; or `NULL` if no category is active.  
  
### Remarks  
 A category is active if it has the focus. By default, the active category is the first category on the left side of the ribbon bar.  
  
 The main category is displayed when the user presses the application button and it cannot be the active category.  
  
##  <a name="cmfcribbonbar__getapplicationbutton"></a>  CMFCRibbonBar::GetApplicationButton  
 Retrieves a pointer to the application button.  
  
```  
CMFCRibbonApplicationButton* GetApplicationButton() const;

 
```  
  
### Return Value  
 A pointer to the application button; or `NULL` if the button has not been set.  
  
##  <a name="cmfcribbonbar__getcaptionheight"></a>  CMFCRibbonBar::GetCaptionHeight  
 Retrieves the height of the caption area for the ribbon bar.  
  
```  
int GetCaptionHeight() const;

 
```  
  
### Return Value  
 The height, in pixels, of the caption area for the ribbon bar.  
  
### Remarks  
  
##  <a name="cmfcribbonbar__getcategory"></a>  CMFCRibbonBar::GetCategory  
 Retrieves a pointer to the ribbon category at the specified index.  
  
```  
CMFCRibbonCategory* GetCategory(int nIndex) const;

 
```  
  
### Parameters  
 [in] `nIndex`  
 The zero-based index of a ribbon category in the list of ribbon categories that is contained in the ribbon bar.  
  
### Return Value  
 A pointer to the ribbon category at the specified index; otherwise, `NULL` if `nIndex` was out of range.  
  
##  <a name="cmfcribbonbar__getcategorycount"></a>  CMFCRibbonBar::GetCategoryCount  
 Retrieves the number of ribbon categories in the ribbon bar.  
  
```  
int GetCategoryCount() const;

 
```  
  
### Return Value  
 The number of the ribbon categories in the ribbon bar.  
  
##  <a name="cmfcribbonbar__getcategoryheight"></a>  CMFCRibbonBar::GetCategoryHeight  
 Retrieves the height of the category.  
  
```  
int GetCategoryHeight() const;

 
```  
  
### Return Value  
 The height of the category.  
  
### Remarks  
 The category height includes the height of the category tab.  
  
##  <a name="cmfcribbonbar__getcategoryindex"></a>  CMFCRibbonBar::GetCategoryIndex  
 Retrieves the index of the specified ribbon category.  
  
```  
int GetCategoryIndex(CMFCRibbonCategory* pCategory) const;

 
```  
  
### Parameters  
 [in] `pCategory`  
 Pointer to a ribbon category.  
  
### Return Value  
 The zero-based index of a ribbon category specified by `pCategory`; or -1 if the ribbon category is not found.  
  
##  <a name="cmfcribbonbar__getcontextname"></a>  CMFCRibbonBar::GetContextName  
 Retrieves the name of the context category caption specified by a context ID.  
  
```  
BOOL GetContextName(
    UINT uiContextID,  
    CString& strName) const;

 
```  
  
### Parameters  
 [in] `uiContextID`  
 A ribbon category context ID.  
  
 [out] `strName`  
 The name of a context category caption.  
  
### Return Value  
 `TRUE` if the method was successful; otherwise, `FALSE` if `uiContextID` was zero or the context category caption was not found.  
  
##  <a name="cmfcribbonbar__getdroppeddown"></a>  CMFCRibbonBar::GetDroppedDown  
 Retrieves the ribbon element that is currently dropped down.  
  
```  
virtual CMFCRibbonBaseElement* GetDroppedDown();
```  
  
### Return Value  
 The ribbon element that is currently dropped down; or `NULL` if no ribbon element is currently dropped down.  
  
### Remarks  
  
##  <a name="cmfcribbonbar__getelementsbyid"></a>  CMFCRibbonBar::GetElementsByID  
 Retrieves an array of pointers to all ribbon elements that have a specific command ID.  
  
```  
void GetElementsByID(
    UINT uiCmdID,  
    CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>& arButtons);
```  
  
### Parameters  
 [in] `uiCmdID`  
 Command ID of a ribbon element.  
  
 [out] `arButtons`  
 An array of pointers to ribbon elements.  
  
### Remarks  
 Multiple ribbon elements can have the same command ID because some ribbon elements can be copied to the quick access toolbar.  
  
##  <a name="cmfcribbonbar__gethideflags"></a>  CMFCRibbonBar::GetHideFlags  
 Retrieves the flags that indicate how much of the ribbon bar is visible.  
  
```  
DWORD GetHideFlags() const;

 
```  
  
### Return Value  
 The flags that indicate how much of the ribbon bar is visible.  
  
### Remarks  
 The following table lists the possible combination of flags for the return value:  
  
 `AFX_RIBBONBAR_HIDE_ELEMENTS`  
 The ribbon bar is minimized vertically and only the category tabs, main button, and quick access toolbar are visible.  
  
 `AFX_RIBBONBAR_HIDE_ALL`  
 The width of the ribbon bar is less than the minimum width and is completely hidden.  
  
##  <a name="cmfcribbonbar__getitemidslist"></a>  CMFCRibbonBar::GetItemIDsList  
 Retrieves the command IDs for the specified collection of ribbon elements on the ribbon bar.  
  
```  
void GetItemIDsList(CList<UINT, UINT>& lstItems,  
    BOOL bHiddenOnly = FALSE) const;

 
```  
  
### Parameters  
 [out] `lstItems`  
 The list of command IDs for ribbon elements that are contained in the ribbon bar.  
  
 [in] `bHiddenOnly`  
 `TRUE` to exclude ribbon elements that are displayed; `FALSE` to include all ribbon elements in the ribbon bar.  
  
### Remarks  
  
##  <a name="cmfcribbonbar__getkeyboardnavigationlevel"></a>  CMFCRibbonBar::GetKeyboardNavigationLevel  
 Retrieves the current navigation level as the user presses the keytips that are contained on the ribbon bar.  
  
```  
int GetKeyboardNavigationLevel() const;

 
```  
  
### Return Value  
 The current navigation level as the user presses the keytips that are contained on the ribbon bar. The following table lists possible return values:  
  
 -1  
 Keytips are not displayed.  
  
 0  
 Keytips are displayed.  
  
 1  
 User has pressed a displayed keytip.  
  
### Remarks  
  
##  <a name="cmfcribbonbar__getkeyboardnavlevelcurrent"></a>  CMFCRibbonBar::GetKeyboardNavLevelCurrent  
 Retrieves the current keyboard navigation object on the ribbon bar.  
  
```  
CObject* GetKeyboardNavLevelCurrent() const;

 
```  
  
### Return Value  
 The current keyboard navigation object on the ribbon bar; otherwise `NULL` if no object currently displays keytips.  
  
### Remarks  
 The object that is currently displaying keytips is the current keyboard navigation object.  
  
##  <a name="cmfcribbonbar__getkeyboardnavlevelparent"></a>  CMFCRibbonBar::GetKeyboardNavLevelParent  
 Retrieves the parent keyboard navigation object on the ribbon bar.  
  
```  
CObject* GetKeyboardNavLevelParent() const;

 
```  
  
### Return Value  
 The parent keyboard navigation object on the ribbon bar; otherwise `NULL`.  
  
### Remarks  
 When the user presses a keytip on the ribbon bar, the current keyboard navigation object becomes the parent keyboard navigation object.  
  
##  <a name="cmfcribbonbar__getmaincategory"></a>  CMFCRibbonBar::GetMainCategory  
 Retrieves a pointer to the main ribbon category.  
  
```  
CMFCRibbonCategory* GetMainCategory() const;

 
```  
  
### Return Value  
 A pointer to the main ribbon category.  
  
### Remarks  
 The main ribbon category contains the main ribbon panel.  
  
##  <a name="cmfcribbonbar__getqatcommandslocation"></a>  CMFCRibbonBar::GetQATCommandsLocation  
 Retrieves the display rectangle for the commands section of the quick access toolbar.  
  
```  
CRect GetQATCommandsLocation() const;

 
```  
  
### Return Value  
 The display rectangle for the commands section of the quick access toolbar.  
  
### Remarks  
 The commands section of the display rectangle does not include the customization button.  
  
##  <a name="cmfcribbonbar__getqatdroppeddown"></a>  CMFCRibbonBar::GetQATDroppedDown  
 Retrieves a pointer to the ribbon element on the quick access toolbar that has its pop-up menu dropped down.  
  
```  
CMFCRibbonBaseElement* GetQATDroppedDown();
```  
  
### Return Value  
 A pointer to the ribbon element on the quick access toolbar that has its pop-up menu dropped down.  
  
### Remarks  
  
##  <a name="cmfcribbonbar__getquickaccesscommands"></a>  CMFCRibbonBar::GetQuickAccessCommands  
 Retrieves a list of command IDs for the ribbon elements on the quick access toolbar.  
  
```  
void GetQuickAccessCommands(
    CList<UINT,UINT>& lstCommands);
```  
  
### Parameters  
 [out] `lstCommands`  
 The list of command IDs for the ribbon elements on the quick access toolbar.  
  
### Remarks  
 The list does not contain ribbon elements that are control separators.  
  
##  <a name="cmfcribbonbar__getquickaccesstoolbarlocation"></a>  CMFCRibbonBar::GetQuickAccessToolbarLocation  
 Retrieves the display rectangle for the quick access toolbar.  
  
```  
CRect GetQuickAccessToolbarLocation() const;

 
```  
  
### Return Value  
 The display rectangle for the quick access toolbar.  
  
### Remarks  
  
##  <a name="cmfcribbonbar__gettabtrancateratio"></a>  CMFCRibbonBar::GetTabTrancateRatio  
 Retrieves the percent size reduction in the display width of the category tabs.  
  
```  
int GetTabTrancateRatio() const;

 
```  
  
### Return Value  
 The percent size reduction in the display width of the category tabs.  
  
### Remarks  
 Category tabs are reduced in width when there is not enough width on the ribbon bar.  
  
##  <a name="cmfcribbonbar__gettooltipfixedwidthlargeimage"></a>  CMFCRibbonBar::GetTooltipFixedWidthLargeImage  
 Retrieves the large size of tooltip width for the ribbon bar.  
  
```  
int GetTooltipFixedWidthLargeImage() const;

 
```  
  
### Return Value  
 The large size of tooltip width in pixels.  
  
### Remarks  
 If the large size of tooltip width is 0, the width varies.  
  
##  <a name="cmfcribbonbar__gettooltipfixedwidthregular"></a>  CMFCRibbonBar::GetTooltipFixedWidthRegular  
 Retrieves the regular size of tooltip width for the ribbon bar.  
  
```  
int GetTooltipFixedWidthRegular() const;

 
```  
  
### Return Value  
 The regular size of tooltip width in pixels.  
  
### Remarks  
 If the regular size of tooltip width is 0, the width varies.  
  
##  <a name="cmfcribbonbar__getvisiblecategorycount"></a>  CMFCRibbonBar::GetVisibleCategoryCount  
 Retrieves the number of visible categories on the ribbon bar.  
  
```  
int GetVisibleCategoryCount() const;

 
```  
  
### Return Value  
 The number of visible categories on the ribbon bar.  
  
### Remarks  
  
##  <a name="cmfcribbonbar__hideallcontextcategories"></a>  CMFCRibbonBar::HideAllContextCategories  
 Hides all the context categories on the ribbon bar.  
  
```  
BOOL HideAllContextCategories();
```  
  
### Return Value  
 `TRUE` if at least one context category was hidden; otherwise, `FALSE`.  
  
### Remarks  
 If a context category is active, the active category is reset to the first visible category in the category list.  
  
##  <a name="cmfcribbonbar__hidekeytips"></a>  CMFCRibbonBar::HideKeyTips  
 Hides all keytips on the ribbon bar.  
  
```  
void HideKeyTips();
```  
  
### Remarks  
  
##  <a name="cmfcribbonbar__hittest"></a>  CMFCRibbonBar::HitTest  
 Retrieves a pointer to the ribbon element specified by the location of the point.  
  
```  
virtual CMFCRibbonBaseElement* HitTest(
    CPoint point,  
    BOOL bCheckActiveCategory= FALSE,  
    BOOL bCheckPanelCaption= FALSE);
```  
  
### Parameters  
 [in] `point`  
 Location of the point in ribbon bar coordinates.  
  
 [in] `bCheckActiveCategory`  
 `TRUE` to search the active category; `FALSE` not to search the active category.  
  
 [in] `bCheckPanelCaption`  
 `TRUE` to test the caption of the ribbon panel with the point located in it; `FALSE` not to test the caption of the ribbon panel with the point located in it. See the Remarks section for more information.  
  
### Return Value  
 A pointer to the ribbon element located at the specified point; otherwise `NULL` if the point is not located in a ribbon element.  
  
### Remarks  
 The caption of the ribbon panel with the point located in it is not tested unless the `bCheckActiveCategory` parameter is `TRUE`.  
  
##  <a name="cmfcribbonbar__iskeytipenabled"></a>  CMFCRibbonBar::IsKeyTipEnabled  
 Indicates whether the keytips feature is enabled.  
  
```  
BOOL IsKeyTipEnabled() const;

 
```  
  
### Return Value  
 `TRUE` if the keytips feature is enabled; otherwise `FALSE`.  
  
##  <a name="cmfcribbonbar__ismainribbonbar"></a>  CMFCRibbonBar::IsMainRibbonBar  
 Indicates whether the ribbon bar is the primary ribbon bar.  
  
```  
virtual BOOL IsMainRibbonBar() const;

 
```  
  
### Return Value  
 Always returns `TRUE`.  
  
### Remarks  
 By default this method always returns `TRUE`. Override this method to indicate whether the ribbon bar is the primary ribbon bar.  
  
##  <a name="cmfcribbonbar__isprintpreviewenabled"></a>  CMFCRibbonBar::IsPrintPreviewEnabled  
 Indicates whether the **Print Preview** feature is enabled.  
  
```  
BOOL IsPrintPreviewEnabled() const;

 
```  
  
### Return Value  
 `TRUE` if the **Print Preview** feature is enabled; otherwise `FALSE`.  
  
##  <a name="cmfcribbonbar__isqatempty"></a>  CMFCRibbonBar::IsQATEmpty  
 Indicates whether the quick access toolbar contains command buttons.  
  
```  
BOOL IsQATEmpty() const;

 
```  
  
### Return Value  
 `TRUE` if the quick access toolbar contains command buttons; otherwise `FALSE`.  
  
### Remarks  
  
##  <a name="cmfcribbonbar__isquickaccesstoolbarontop"></a>  CMFCRibbonBar::IsQuickAccessToolbarOnTop  
 Indicates whether the quick access toolbar is located over or under the ribbon bar.  
  
```  
BOOL IsQuickAccessToolbarOnTop() const;

 
```  
  
### Return Value  
 `TRUE` if the quick access toolbar is located over the ribbon bar; `FALSE` if the quick access toolbar is located under the ribbon bar.  
  
##  <a name="cmfcribbonbar__isreplaceframecaption"></a>  CMFCRibbonBar::IsReplaceFrameCaption  
 Indicates whether the ribbon bar replaces or is under the caption of the main frame window.  
  
```  
BOOL IsReplaceFrameCaption() const;

 
```  
  
### Return Value  
 `TRUE` if the ribbon bar replaces the caption of the main frame window; `FALSE` if ribbon bar is under the caption of the main frame window.  
  
##  <a name="cmfcribbonbar__isshowgroupborder"></a>  CMFCRibbonBar::IsShowGroupBorder  
 Indicates whether button groups located on the ribbon bar display a group border.  
  
```  
virtual BOOL IsShowGroupBorder(CMFCRibbonButtonsGroup* pGroup) const;

 
```  
  
### Parameters  
 [in] `pGroup`  
 This parameter is not used.  
  
### Return Value  
 Always returns `FALSE`.  
  
### Remarks  
 By default this method always returns `FALSE`. Override this method to indicate whether button groups located on the ribbon bar display a group border.  
  
##  <a name="cmfcribbonbar__istooltipdescrenabled"></a>  CMFCRibbonBar::IsToolTipDescrEnabled  
 Indicates whether tooltip descriptions are enabled.  
  
```  
BOOL IsToolTipDescrEnabled() const;

 
```  
  
### Return Value  
 `TRUE` if tooltip descriptions are enabled; `FALSE` if tooltip descriptions are disabled.  
  
### Remarks  
 Tooltip descriptions are additional descriptive text displayed with the tooltip text.  
  
##  <a name="cmfcribbonbar__istooltipenabled"></a>  CMFCRibbonBar::IsToolTipEnabled  
 Indicates whether tooltips are enabled or disabled for the ribbon bar.  
  
```  
BOOL IsToolTipEnabled() const;

 
```  
  
### Return Value  
 `TRUE` if tooltips are enabled; `FALSE` if tooltips are disabled.  
  
##  <a name="cmfcribbonbar__istransparentcaption"></a>  CMFCRibbonBar::IsTransparentCaption  
 Indicates whether the display is set for Windows Aero color scheme.  
  
```  
BOOL IsTransparentCaption() const;

 
```  
  
### Return Value  
 `TRUE` if the color scheme is Windows Aero; otherwise `FALSE`.  
  
### Remarks  
  
##  <a name="cmfcribbonbar__onclickbutton"></a>  CMFCRibbonBar::OnClickButton  
 This method is retained for backward compatibility with existing applications and should not be used for new development.  
  
```  
virtual void OnClickButton(
    CMFCRibbonButton* pButton,  
    CPoint point);
```  
  
### Parameters  
 [in] `pButton`  
 Pointer to the button that was clicked.  
  
 [in] `point`  
 This parameter is not used.  
  
### Remarks  
  
##  <a name="cmfcribbonbar__oneditcontextmenu"></a>  CMFCRibbonBar::OnEditContextMenu  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnEditContextMenu(
    CMFCRibbonRichEditCtrl* pEdit,  
    CPoint point);
```  
  
### Parameters  
 [in] `pEdit`  
 [in] `point`  
  
### Remarks  
  
##  <a name="cmfcribbonbar__onrtlchanged"></a>  CMFCRibbonBar::OnRTLChanged  
 Called by the framework when the layout changes direction.  
  
```  
virtual void OnRTLChanged(BOOL bIsRTL);
```  
  
### Parameters  
 [in] `bIsRTL`  
 `TRUE` if the layout is right-to-left; `FALSE` if the layout is left-to-right.  
  
### Remarks  
 This method adjusts the layout of all controls on the ribbon bar for the new layout direction.  
  
##  <a name="cmfcribbonbar__onsetaccdata"></a>  CMFCRibbonBar::OnSetAccData  
 This method is internal to the Framework and is not intended to be called from user code.  
  
```  
BOOL OnSetAccData(long lVal);
```  
  
### Parameters  
 long `lVal`  
 The index of the accessible object.  
  
### Return Value  
 S_OK if successful; otherwise FALSE or S_FALSE.  
  
### Remarks  
  
##  <a name="cmfcribbonbar__onshowribboncontextmenu"></a>  CMFCRibbonBar::OnShowRibbonContextMenu  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL OnShowRibbonContextMenu(
    CWnd* pWnd,  
    int x,  
    int y,  
    CMFCRibbonBaseElement* pHit);
```  
  
### Parameters  
 [in] `pWnd`  
 [in] `x`  
 [in] `y`  
 [in] `pHit`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbonbar__onshowribbonqatmenu"></a>  CMFCRibbonBar::OnShowRibbonQATMenu  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL OnShowRibbonQATMenu(
    CWnd* pWnd,  
    int x,  
    int y,  
    CMFCRibbonBaseElement* pHit);
```  
  
### Parameters  
 [in] `pWnd`  
 [in] `x`  
 [in] `y`  
 [in] `pHit`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbonbar__onsyskeydown"></a>  CMFCRibbonBar::OnSysKeyDown  
 Called by the framework when the user presses the F10 key or holds down the ALT key and then presses another key.  
  
```  
BOOL OnSysKeyDown(
    CFrameWnd* pFrameWnd,  
    WPARAM wParam,  
    LPARAM lParam);
```  
  
### Parameters  
 [in] `pFrameWnd`  
 Pointer to the parent main frame window of the ribbon bar.  
  
 [in] `wParam`  
 Virtual key code of the key being pressed.  
  
 [in] `lParam`  
 Keyboard state flags when the key was pressed.  
  
### Return Value  
 `TRUE` if the keystroke event was processed; otherwise `FALSE`.  
  
### Remarks  
  
##  <a name="cmfcribbonbar__onsyskeyup"></a>  CMFCRibbonBar::OnSysKeyUp  
 Called by the framework when the user releases the F10 key, the ALT key, or a key that was pressed when the ALT key was held down.  
  
```  
BOOL OnSysKeyUp(
    CFrameWnd* pFrameWnd,  
    WPARAM wParam,  
    LPARAM lParam);
```  
  
### Parameters  
 [in] `pFrameWnd`  
 Pointer to the parent main frame window of the ribbon bar.  
  
 [in] `wParam`  
 Virtual key code of the key being released.  
  
 [in] `lParam`  
 This parameter is not used.  
  
### Return Value  
 `TRUE` if the keystroke event was processed; otherwise `FALSE`.  
  
### Remarks  
  
##  <a name="cmfcribbonbar__poptooltip"></a>  CMFCRibbonBar::PopTooltip  
 Removes a tooltip from view.  
  
```  
void PopTooltip();
```  
  
### Remarks  
  
##  <a name="cmfcribbonbar__pretranslatemessage"></a>  CMFCRibbonBar::PreTranslateMessage  
 Determines if the specified message is processed by the ribbon bar.  
  
```  
virtual BOOL PreTranslateMessage(MSG* pMsg);
```  
  
### Parameters  
 [in] `pMsg`  
 Pointer to a message.  
  
### Return Value  
 `TRUE` if the message was processed by the ribbon bar; otherwise `FALSE`.  
  
### Remarks  
  
##  <a name="cmfcribbonbar__recalclayout"></a>  CMFCRibbonBar::RecalcLayout  
 Adjusts the layout of all controls on the ribbon bar.  
  
```  
virtual void RecalcLayout();
```  
  
### Remarks  
 After layout adjustment, the display of the ribbon bar is updated.  
  
##  <a name="cmfcribbonbar__removeallcategories"></a>  CMFCRibbonBar::RemoveAllCategories  
 Deletes all ribbon categories from the ribbon bar.  
  
```  
void RemoveAllCategories();
```  
  
### Remarks  
 This method deletes all ribbon categories from memory and from the category list.  
  
##  <a name="cmfcribbonbar__removeallfromtabs"></a>  CMFCRibbonBar::RemoveAllFromTabs  
 Removes all ribbon elements from the tab area.  
  
```  
void RemoveAllFromTabs();
```  
  
### Remarks  
 Use this function if you want to remove all the elements that you added to the tab area by using [CMFCRibbonBar::AddToTabs](#cmfcribbonbar__addtotabs) method.  
  
##  <a name="cmfcribbonbar__removecategory"></a>  CMFCRibbonBar::RemoveCategory  
 Deletes the specified ribbon category from the ribbon bar.  
  
```  
BOOL RemoveCategory(int nIndex);
```  
  
### Parameters  
 [in] `nIndex`  
 The zero-based index of a category in the list of ribbon categories that is contained in the ribbon bar.  
  
### Return Value  
 `TRUE` if the specified ribbon category was deleted; otherwise `FALSE`.  
  
### Remarks  
 The specified ribbon category is deleted from memory and from the category list.  
  
##  <a name="cmfcribbonbar__setactivecategory"></a>  CMFCRibbonBar::SetActiveCategory  
 Sets the specified ribbon category as the active category.  
  
```  
BOOL SetActiveCategory(
    CMFCRibbonCategory* pCategory,  
    BOOL bForceRestore= FALSE);
```  
  
### Parameters  
 [in] `pCategory`  
 A ribbon category that is contained in the ribbon bar.  
  
 [in] `bForceRestore`  
 `TRUE` to maximize the ribbon bar if it is minimized; `FALSE` to display the active category in a pop-up window if the ribbon bar is minimized.  
  
### Return Value  
 `TRUE` if the specified category was set as the active category; otherwise `FALSE`.  
  
### Remarks  
 The main ribbon category cannot be the active category.  
  
 If the category specified by `pCategory` is not displayed, it cannot be set as the active category.  
  
##  <a name="cmfcribbonbar__setactivemdichild"></a>  CMFCRibbonBar::SetActiveMDIChild  
 Associates the system buttons on the ribbon bar that belong to a multiple-document interface (MDI) child window to the specified MDI child window.  
  
```  
void SetActiveMDIChild(CWnd* pWnd);
```  
  
### Parameters  
 [in] `pWnd`  
 Pointer to an MDI child window.  
  
### Remarks  
  
##  <a name="cmfcribbonbar__setapplicationbutton"></a>  CMFCRibbonBar::SetApplicationButton  
 Assigns an application ribbon button to the ribbon bar.  
  
```  
void SetApplicationButton(
    CMFCRibbonApplicationButton* pButton,  
    CSize sizeButton);
```  
  
### Parameters  
 [in] `pButton`  
 A pointer to the application ribbon button.  
  
 [in] `sizeButton`  
 The size of the application ribbon button.  
  
### Remarks  
 The application ribbon button is a large rounded button located at the upper-left corner of Ribbon control.  
  
### Example  
 The following example demonstrates how to use the `SetApplicationButton` method in the `CMFCRibbonBar` class.  
  
 [!code-cpp[NVC_MFC_RibbonApp#3](../../mfc/reference/codesnippet/cpp/cmfcribbonbar-class_4.cpp)]  
  
##  <a name="cmfcribbonbar__setelementkeys"></a>  CMFCRibbonBar::SetElementKeys  
 Sets the keytips for all ribbon elements that have the specified command ID.  
  
```  
BOOL SetElementKeys(
    UINT uiCmdID,  
    LPCTSTR lpszKeys,  
    LPCTSTR lpszMenuKeys= NULL);
```  
  
### Parameters  
 [in] `uiCmdID`  
 The command ID of a ribbon element.  
  
 [in] `lpszKeys`  
 The keytip.  
  
 [in] `lpszMenuKeys`  
 The menu keytip.  
  
### Return Value  
 `TRUE` if the keytips of at least one ribbon element are set; otherwise `FALSE`.  
  
### Remarks  
 The optional menu keytip is for ribbon elements with a split button that opens a popup menu.  
  
##  <a name="cmfcribbonbar__setkeyboardnavigationlevel"></a>  CMFCRibbonBar::SetKeyboardNavigationLevel  
 Sets the keyboard navigation level as the user presses the keytips that are contained on the ribbon bar.  
  
```  
void SetKeyboardNavigationLevel(
    CObject* pLevel,  
    BOOL bSetFocus = TRUE);
```  
  
### Parameters  
 [in] `pLevel`  
 Pointer to the current keyboard navigation object.  
  
 [in] `bSetFocus`  
 `TRUE` to set the keyboard focus to the ribbon bar.  
  
### Remarks  
 Keyboard navigation of the ribbon bar starts when the user presses the ALT or F10 key. The user selects the next navigation level by pressing a keytip on the ribbon bar. The user can return to the previous navigation level by pressing the escape key.  
  
##  <a name="cmfcribbonbar__setmaximizemode"></a>  CMFCRibbonBar::SetMaximizeMode  
 Adjusts the ribbon bar when the window size of a multiple-document interface (MDI) child window enters or leaves the maximized state.  
  
```  
void SetMaximizeMode(
    BOOL bMax,  
    CWnd* pWnd = NULL);
```  
  
### Parameters  
 [in] `bMax`  
 `TRUE` to display the system buttons for an MDI child window on the ribbon bar; `FALSE` to remove the system buttons for an MDI child window from the ribbon bar.  
  
 [in] `pWnd`  
 Pointer to the main frame window for the ribbon bar.  
  
### Remarks  
 The ribbon bar displays system buttons for an MDI child window in the tab row when an MDI child window is maximized.  
  
##  <a name="cmfcribbonbar__setquickaccesscommands"></a>  CMFCRibbonBar::SetQuickAccessCommands  
 Adds one or more ribbon elements to the Quick Access Toolbar.  
  
```  
void SetQuickAccessCommands(
    const CList<UINT,UINT>& lstCommands,  
    BOOL bRecalcLayout=TRUE);
```  
  
### Parameters  
 [in] `lstCommands`  
 The list of commands to be placed on the Quick Access Toolbar.  
  
 [in] `bRecalcLayout`  
 `TRUE` if want to redraw the ribbon after you add the ribbon elements; `FALSE` otherwise.  
  
### Example  
 The following example demonstrates how to use the `SetQuickAccessCommands` method in the `CMFCRibbonBar` class.  
  
 [!code-cpp[NVC_MFC_RibbonApp#8](../../mfc/reference/codesnippet/cpp/cmfcribbonbar-class_5.cpp)]  
  
##  <a name="cmfcribbonbar__setquickaccessdefaultstate"></a>  CMFCRibbonBar::SetQuickAccessDefaultState  
 Sets the quick access toolbar to the default state.  
  
```  
void SetQuickAccessDefaultState(const CMFCRibbonQuickAccessToolBarDefaultState& state);
```  
  
### Parameters  
 [in] `state`  
 The quick access toolbar default state.  
  
### Remarks  
 The quick access toolbar state includes a list of commands and their visibility.  
  
### Example  
 The following example demonstrates how to use the `SetQuickAccessDefaultState` method in the `CMFCRibbonBar` class.  
  
 [!code-cpp[NVC_MFC_RibbonApp#9](../../mfc/reference/codesnippet/cpp/cmfcribbonbar-class_6.cpp)]  
  
##  <a name="cmfcribbonbar__setquickaccesstoolbarontop"></a>  CMFCRibbonBar::SetQuickAccessToolbarOnTop  
 Positions the quick access toolbar above or below the ribbon bar.  
  
```  
void SetQuickAccessToolbarOnTop(BOOL bOnTop);
```  
  
### Parameters  
 [in] `bOnTop`  
 `TRUE` to position the quick access toolbar above the ribbon bar; `FALSE` to position the quick access toolbar below the ribbon bar.  
  
##  <a name="cmfcribbonbar__settooltipfixedwidth"></a>  CMFCRibbonBar::SetTooltipFixedWidth  
 Sets the regular and large sizes of tooltip fixed widths for the ribbon bar.  
  
```  
void SetTooltipFixedWidth(
    int nWidthRegular,  
    int nWidthLargeImage);
```  
  
### Parameters  
 [in] `nWidthRegular`  
 The width, in pixels, of a regular fixed sized tooltip.  
  
 [in] `nWidthLargeImage`  
 The width, in pixels, of a large fixed sized tooltip.  
  
### Remarks  
 Setting a parameter to 0 causes the corresponding width to vary.  
  
##  <a name="cmfcribbonbar__showcategory"></a>  CMFCRibbonBar::ShowCategory  
 Shows or hides the specified ribbon category.  
  
```  
void ShowCategory(
    int nIndex,  
    BOOL bShow=TRUE);
```  
  
### Parameters  
 [in] `nIndex`  
 The index of the ribbon category.  
  
 [in] `bShow`  
 If `TRUE`, show the ribbon category; otherwise, hide the ribbon category.  
  
##  <a name="cmfcribbonbar__showcontextcategories"></a>  CMFCRibbonBar::ShowContextCategories  
 Shows or hides the context categories that have the specified ID.  
  
```  
void ShowContextCategories(
    UINT uiContextID,  
    BOOL bShow=TRUE);
```  
  
### Parameters  
 [in] `uiContextID`  
 The context category ID.  
  
 [in] `bShow`  
 If `TRUE`, show the categories that have the specified ID; otherwise, hide the categories that have the specified ID.  
  
##  <a name="cmfcribbonbar__showkeytips"></a>  CMFCRibbonBar::ShowKeyTips  
 Shows the keytips for each ribbon element on the ribbon bar.  
  
```  
void ShowKeyTips();
```  
  
### Remarks  
  
##  <a name="cmfcribbonbar__togglemimimizestate"></a>  CMFCRibbonBar::ToggleMimimizeState  
 Toggles the ribbon bar between the minimized and maximized states.  
  
```  
void ToggleMimimizeState();
```  
  
### Remarks  
 The misspelling in the method name is a known issue.  
  
 In the minimized state, the ribbon control is hidden and only the tabs are displayed. When the user clicks a tab, the ribbon control is displayed as a popup window. The window closes when the user clicks away or executes a command.  
  
##  <a name="cmfcribbonbar__translatechar"></a>  CMFCRibbonBar::TranslateChar  
 Determines whether the specified keystroke character code is processed by the ribbon bar.  
  
```  
virtual BOOL TranslateChar(UINT nChar);
```  
  
### Parameters  
 [in] `nChar`  
 A user keystroke character code.  
  
### Return Value  
 `TRUE` if the character code was processed by the ribbon bar; otherwise `FALSE`.  
  
### Remarks  
 The keytips feature enables users to navigate the ribbon bar by using the keyboard.  
  
##  <a name="cmfcribbonbar__getfocused"></a>  CMFCRibbonBar::GetFocused  
 Returns a focused element.  
  
```  
virtual CMFCRibbonBaseElement* GetFocused();
```  
  
### Return Value  
 A pointer to a focused element or `NULL`.  
  
### Remarks  
  
##  <a name="cmfcribbonbar__iswindows7look"></a>  CMFCRibbonBar::IsWindows7Look  
 Indicates whether the ribbon has Windows 7 look (small rectangular application button).  
  
```  
BOOL IsWindows7Look() const;

 
```  
  
### Return Value  
 `TRUE` if the ribbon has Windows 7 look; otherwise `FALSE`.  
  
### Remarks  
  
##  <a name="cmfcribbonbar__loadfromresource"></a>  CMFCRibbonBar::LoadFromResource  
 Overloaded. Loads a Ribbon Bar from application resources.  
  
```  
virtual BOOL LoadFromResource(
    UINT uiXMLResID,  
    LPCTSTR lpszResType = RT_RIBBON,  
    HINSTANCE hInstance = NULL);

 
virtual BOOL LoadFromResource(
    LPCTSTR lpszXMLResID,  
    LPCTSTR lpszResType = RT_RIBBON,  
    HINSTANCE hInstance = NULL);
```  
  
### Parameters  
 `uiXMLResID`  
 Specifies resource ID of XML string with Ribbon Bar information.  
  
 `lpszResType`  
 Specifies type of the resource located at `uiXMLResID`.  
  
 `hInstance`  
 Handle to the module whose executable file contains the resource. If `hInstance` is `NULL`, the system loads the resource from the module that was used to create the current process.  
  
 `lpszXMLResID`  
 Specifies resource ID (in string form) with Ribbon Bar information.  
  
### Return Value  
 `TRUE` if load succeeds; otherwise `FALSE`.  
  
### Remarks  
  
##  <a name="cmfcribbonbar__savetoxmlbuffer"></a>  CMFCRibbonBar::SaveToXMLBuffer  
 Saves the Ribbon Bar to a buffer.  
  
```  
UINT SaveToXMLBuffer(LPBYTE* ppBuffer) const;

 
```  
  
### Parameters  
 `ppBuffer`  
 When this function returns, `ppBuffer` points to a buffer allocated by this method and contains Ribbon Bar information in XML format.  
  
### Return Value  
 `TRUE` if successful; otherwise `FALSE`.  
  
### Remarks  
  
##  <a name="cmfcribbonbar__savetoxmlfile"></a>  CMFCRibbonBar::SaveToXMLFile  
 Saves the Ribbon Bar to an XML file.  
  
```  
BOOL SaveToXMLFile(LPCTSTR lpszFilePath) const;

 
```  
  
### Parameters  
 `lpszFilePath`  
 Specifies the output file.  
  
### Return Value  
 `TRUE` if successful; otherwise `FALSE`.  
  
### Remarks  
  
##  <a name="cmfcribbonbar__setwindows7look"></a>  CMFCRibbonBar::SetWindows7Look  
 Enables or disables Windows 7 look (small rectangular application button) for the Ribbon.  
  
```  
void SetWindows7Look(
    BOOL bWindows7Look,  
    BOOL bRecalc = TRUE);
```  
  
### Parameters  
 `bWindows7Look`  
 `TRUE` sets Windows 7 look; `FALSE` otherwise.  
  
 `bRecalc`  
 `TRUE` recalculates the ribbon layout; `FALSE` otherwise.  
  
### Remarks  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CPane Class](../../mfc/reference/cpane-class.md)   
 [CMFCRibbonCategory Class](../../mfc/reference/cmfcribboncategory-class.md)   
 [CMFCRibbonPanel Class](../../mfc/reference/cmfcribbonpanel-class.md)   
 [CMFCRibbonBaseElement Class](../../mfc/reference/cmfcribbonbaseelement-class.md)   
 [Walkthrough: Updating the MFC Scribble Application](../../mfc/walkthrough-updating-the-mfc-scribble-application-part-1.md)



