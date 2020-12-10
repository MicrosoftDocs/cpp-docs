---
description: "Learn more about: CMFCVisualManagerWindows7 Class"
title: "CMFCVisualManagerWindows7 Class"
ms.date: "03/27/2019"
f1_keywords: ["CMFCVisualManagerWindows7", "AFXVISUALMANAGERWINDOWS7/CMFCVisualManagerWindows7", "AFXVISUALMANAGERWINDOWS7/CMFCVisualManagerWindows7::CMFCVisualManagerWindows7", "AFXVISUALMANAGERWINDOWS7/CMFCVisualManagerWindows7::GetRibbonEditBackgroundColor", "AFXVISUALMANAGERWINDOWS7/CMFCVisualManagerWindows7::OnFillMenuImageRect"]
helpviewer_keywords: ["CMFCVisualManagerWindows7 Class [MFC]"]
ms.assetid: e8d87df1-0c09-4b58-8ade-4e911f796e42
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
|[CMFCVisualManagerWindows7::CMFCVisualManagerWindows7](#cmfcvisualmanagerwindows7)|Default constructor.|
|[CMFCVisualManagerWindows7::~CMFCVisualManagerWindows7](#_dtorcmfcvisualmanagerwindows7)|Default destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|`CMFCVisualManagerWindows7::CleanStyle`|Clears the current visual style and resets the default visual style.|
|`CMFCVisualManagerWindows7::CleanUp`|Clears all of the objects in the user interface and resets the menus.|
|`CMFCVisualManagerWindows7::DrawNcBtn`|Draws a button in the non-client area on the frame. The framework uses this method to draw minimize, maximize, close and restore buttons in the upper right corner of the window frame. This method is only called when the program uses an `Aero` theme.|
|`CMFCVisualManagerWindows7::DrawNcText`|Draws text in the non-client area on the frame. The framework uses this method to draw the application title in the title bar at the top of the frame window.|
|`CMFCVisualManagerWindows7::DrawSeparator`|Draws a separator on the [CMFCToolBar Class](../../mfc/reference/cmfctoolbar-class.md).|
|`CMFCVisualManagerWindows7::GetRibbonBar`|Retrieves the [CMFCRibbonBar Class](../../mfc/reference/cmfcribbonbar-class.md) associated with the user interface.|
|[CMFCVisualManagerWindows7::GetRibbonEditBackgroundColor](#getribboneditbackgroundcolor)|Obtains a Ribbon edit box background color.|
|`CMFCVisualManagerWindows7::GetRibbonPopupBorderSize`|Overrides [CMFCVisualManager::GetRibbonPopupBorderSize](../../mfc/reference/cmfcvisualmanager-class.md#getribbonpopupbordersize)|
|`CMFCVisualManagerWindows7::GetRibbonQuickAccessToolBarChevronOffset`|Overrides [CMFCVisualManager::GetRibbonQuickAccessToolBarChevronOffset](../../mfc/reference/cmfcvisualmanager-class.md#getribbonquickaccesstoolbarchevronoffset)|
|`CMFCVisualManagerWindows7::GetRibbonQuickAccessToolBarRightMargin`|Overrides [CMFCVisualManager::GetRibbonQuickAccessToolBarRightMargin](../../mfc/reference/cmfcvisualmanager-class.md#getribbonquickaccesstoolbarrightmargin)|
|`CMFCVisualManagerWindows7::IsHighlightWholeMenuItem`|Overrides [CMFCVisualManagerWindows::IsHighlightWholeMenuItem](../../mfc/reference/cmfcvisualmanagerwindows-class.md#ishighlightwholemenuitem)|
|`CMFCVisualManagerWindows7::IsOwnerDrawMenuCheck`|Overrides [CMFCVisualManager::IsOwnerDrawMenuCheck](../../mfc/reference/cmfcvisualmanager-class.md#isownerdrawmenucheck)|
|`CMFCVisualManagerWindows7::IsRibbonPresent`|Determines whether a `CMFCRibbonBar` is present and visible.|
|`CMFCVisualManagerWindows7::OnDrawButtonBorder`|Overrides [CMFCVisualManagerWindows::OnDrawButtonBorder](../../mfc/reference/cmfcvisualmanagerwindows-class.md#ondrawbuttonborder)|
|`CMFCVisualManagerWindows7::OnDrawCheckBoxEx`|Overrides [CMFCVisualManagerWindows::OnDrawCheckBoxEx](../../mfc/reference/cmfcvisualmanagerwindows-class.md#ondrawcheckboxex)|
|`CMFCVisualManagerWindows7::OnDrawComboDropButton`|Overrides [CMFCVisualManagerWindows::OnDrawComboDropButton](../../mfc/reference/cmfcvisualmanagerwindows-class.md#ondrawcombodropbutton)|
|`CMFCVisualManagerWindows7::OnDrawDefaultRibbonImage`|Overrides [CMFCVisualManager::OnDrawDefaultRibbonImage](../../mfc/reference/cmfcvisualmanager-class.md#ondrawdefaultribbonimage)|
|`CMFCVisualManagerWindows7::OnDrawMenuBorder`|Overrides [CMFCVisualManagerWindows::OnDrawMenuBorder](../../mfc/reference/cmfcvisualmanagerwindows-class.md#ondrawmenuborder)|
|`CMFCVisualManagerWindows7::OnDrawMenuCheck`|Overrides [CMFCVisualManager::OnDrawMenuCheck](../../mfc/reference/cmfcvisualmanager-class.md#ondrawmenucheck)|
|`CMFCVisualManagerWindows7::OnDrawMenuLabel`|Overrides [CMFCVisualManager::OnDrawMenuLabel](../../mfc/reference/cmfcvisualmanager-class.md#ondrawmenulabel)|
|`CMFCVisualManagerWindows7::OnDrawRadioButton`|Overrides `CMFCVisualManager::OnDrawRadioButton`|
|`CMFCVisualManagerWindows7::OnDrawRibbonApplicationButton`|Overrides [CMFCVisualManager::OnDrawRibbonApplicationButton](../../mfc/reference/cmfcvisualmanager-class.md#ondrawribbonapplicationbutton)|
|`CMFCVisualManagerWindows7::OnDrawRibbonButtonBorder`|Overrides [CMFCVisualManager::OnDrawRibbonButtonBorder](../../mfc/reference/cmfcvisualmanager-class.md#ondrawribbonbuttonborder)|
|`CMFCVisualManagerWindows7::OnDrawRibbonCaption`|Overrides [CMFCVisualManager::OnDrawRibbonCaption](../../mfc/reference/cmfcvisualmanager-class.md#ondrawribboncaption)|
|`CMFCVisualManagerWindows7::OnDrawRibbonCaptionButton`|Overrides [CMFCVisualManager::OnDrawRibbonCaptionButton](../../mfc/reference/cmfcvisualmanager-class.md#ondrawribboncaptionbutton)|
|`CMFCVisualManagerWindows7::OnDrawRibbonCategory`|Overrides [CMFCVisualManager::OnDrawRibbonCategory](../../mfc/reference/cmfcvisualmanager-class.md#ondrawribboncategory)|
|`CMFCVisualManagerWindows7::OnDrawRibbonCategoryTab`|Overrides [CMFCVisualManager::OnDrawRibbonCategoryTab](../../mfc/reference/cmfcvisualmanager-class.md#ondrawribboncategorytab)|
|`CMFCVisualManagerWindows7::OnDrawRibbonDefaultPaneButton`|Overrides [CMFCVisualManager::OnDrawRibbonDefaultPaneButton](../../mfc/reference/cmfcvisualmanager-class.md#ondrawribbondefaultpanebutton)|
|`CMFCVisualManagerWindows7::OnDrawRibbonGalleryButton`|Overrides [CMFCVisualManager::OnDrawRibbonGalleryButton](../../mfc/reference/cmfcvisualmanager-class.md#ondrawribbongallerybutton)|
|`CMFCVisualManagerWindows7::OnDrawRibbonLaunchButton`|Overrides `CMFCVisualManager::OnDrawRibbonLaunchButton`|
|`CMFCVisualManagerWindows7::OnDrawRibbonMenuCheckFrame`|Overrides [CMFCVisualManager::OnDrawRibbonMenuCheckFrame](../../mfc/reference/cmfcvisualmanager-class.md#ondrawribbonmenucheckframe)|
|`CMFCVisualManagerWindows7::OnDrawRibbonPanel`|Overrides [CMFCVisualManager::OnDrawRibbonPanel](../../mfc/reference/cmfcvisualmanager-class.md#ondrawribbonpanel)|
|`CMFCVisualManagerWindows7::OnDrawRibbonPanelCaption`|Overrides [CMFCVisualManager::OnDrawRibbonPanelCaption](../../mfc/reference/cmfcvisualmanager-class.md#ondrawribbonpanelcaption)|
|`CMFCVisualManagerWindows7::OnDrawRibbonProgressBar`|Overrides [CMFCVisualManager::OnDrawRibbonProgressBar](../../mfc/reference/cmfcvisualmanager-class.md#ondrawribbonprogressbar)|
|`CMFCVisualManagerWindows7::OnDrawRibbonRecentFilesFrame`|Overrides [CMFCVisualManager::OnDrawRibbonRecentFilesFrame](../../mfc/reference/cmfcvisualmanager-class.md#ondrawribbonrecentfilesframe)|
|`CMFCVisualManagerWindows7::OnDrawRibbonSliderChannel`|Overrides [CMFCVisualManager::OnDrawRibbonSliderChannel](../../mfc/reference/cmfcvisualmanager-class.md#ondrawribbonsliderchannel)|
|`CMFCVisualManagerWindows7::OnDrawRibbonSliderThumb`|Overrides [CMFCVisualManager::OnDrawRibbonSliderThumb](../../mfc/reference/cmfcvisualmanager-class.md#ondrawribbonsliderthumb)|
|`CMFCVisualManagerWindows7::OnDrawRibbonSliderZoomButton`|Overrides [CMFCVisualManager::OnDrawRibbonSliderZoomButton](../../mfc/reference/cmfcvisualmanager-class.md#ondrawribbonsliderzoombutton)|
|`CMFCVisualManagerWindows7::OnDrawRibbonStatusBarPane`|Overrides [CMFCVisualManager::OnDrawRibbonStatusBarPane](../../mfc/reference/cmfcvisualmanager-class.md#ondrawribbonstatusbarpane)|
|`CMFCVisualManagerWindows7::OnDrawRibbonTabsFrame`|Overrides [CMFCVisualManager::OnDrawRibbonTabsFrame](../../mfc/reference/cmfcvisualmanager-class.md#ondrawribbontabsframe)|
|`CMFCVisualManagerWindows7::OnDrawStatusBarSizeBox`|Overrides [CMFCVisualManagerWindows::OnDrawStatusBarSizeBox](../../mfc/reference/cmfcvisualmanagerwindows-class.md#ondrawstatusbarsizebox)|
|`CMFCVisualManagerWindows7::OnFillBarBackground`|Overrides [CMFCVisualManagerWindows::OnFillBarBackground](../../mfc/reference/cmfcvisualmanagerwindows-class.md#onfillbarbackground)|
|`CMFCVisualManagerWindows7::OnFillButtonInterior`|Overrides [CMFCVisualManagerWindows::OnFillButtonInterior](../../mfc/reference/cmfcvisualmanagerwindows-class.md#onfillbuttoninterior)|
|[CMFCVisualManagerWindows7::OnFillMenuImageRect](#onfillmenuimagerect)|The framework calls this method when it fills area around menu item images.|
|`CMFCVisualManagerWindows7::OnFillRibbonButton`|Overrides [CMFCVisualManager::OnFillRibbonButton](../../mfc/reference/cmfcvisualmanager-class.md#onfillribbonbutton)|
|`CMFCVisualManagerWindows7::OnFillRibbonQuickAccessToolBarPopup`|Overrides [CMFCVisualManager::OnFillRibbonQuickAccessToolBarPopup](../../mfc/reference/cmfcvisualmanager-class.md#onfillribbonquickaccesstoolbarpopup)|
|`CMFCVisualManagerWindows7::OnHighlightMenuItem`|Overrides [CMFCVisualManagerWindows::OnHighlightMenuItem](../../mfc/reference/cmfcvisualmanagerwindows-class.md#onhighlightmenuitem)|
|`CMFCVisualManagerWindows7::OnNcActivate`|Overrides [CMFCVisualManager::OnNcActivate](../../mfc/reference/cmfcvisualmanager-class.md#onncactivate)|
|`CMFCVisualManagerWindows7::OnNcPaint`|Overrides [CMFCVisualManager::OnNcPaint](../../mfc/reference/cmfcvisualmanager-class.md#onncpaint)|
|`CMFCVisualManagerWindows7::OnUpdateSystemColors`|Overrides [CMFCVisualManagerWindows::OnUpdateSystemColors](../../mfc/reference/cmfcvisualmanagerwindows-class.md#onupdatesystemcolors)|
|`CMFCVisualManagerWindows7::SetResourceHandle`|Sets the resource handle that describes the attributes of the visual manager.|
|`CMFCVisualManagerWindows7::SetStyle`|Sets the color scheme of the `CMFCVisualManagerWindows7` GUI.|

## Remarks

Use the `CMFCVisualManagerWindows7` class to change the appearance of your application to mimic a default Windows 7 application. This class might not be valid if your application is running on a version of Windows earlier than Windows 7. In that scenario, the application uses the default visual manager defined in [CMFCVisualManager](../../mfc/reference/cmfcvisualmanager-class.md).

The CMFCVisualManagerWindows7 inherits multiple methods from both the [CMFCVisualManagerWindows Class](../../mfc/reference/cmfcvisualmanagerwindows-class.md) and the `CMFCVisualManager` class. The methods listed in the previous section are methods new to the `CMFCVisualManagerWindows7` class.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CMFCBaseVisualManager](../../mfc/reference/cmfcbasevisualmanager-class.md)

[CMFCVisualManager](../../mfc/reference/cmfcvisualmanager-class.md)

[CMFCVisualManagerOfficeXP](../../mfc/reference/cmfcvisualmanagerofficexp-class.md)

[CMFCVisualManagerWindows](../../mfc/reference/cmfcvisualmanagerwindows-class.md)

`CMFCVisualManagerWindows7`

## Requirements

**Header:** afxvisualmanagerwindows7.h

## <a name="_dtorcmfcvisualmanagerwindows7"></a> CMFCVisualManagerWindows7::~CMFCVisualManagerWindows7

Default destructor.

```
virtual ~CMFCVisualManagerWindows7();
```

## <a name="cmfcvisualmanagerwindows7"></a> CMFCVisualManagerWindows7::CMFCVisualManagerWindows7

Default constructor.

```
CMFCVisualManagerWindows7();
```

## <a name="getribboneditbackgroundcolor"></a> CMFCVisualManagerWindows7::GetRibbonEditBackgroundColor

Obtains the background color of a ribbon edit box.

```
virtual COLORREF GetRibbonEditBackgroundColor (
    CMFCRibbonRichEditCtrl* pEdit,
    BOOL bIsHighlighted,
    BOOL bIsPaneHighlighted,
    BOOL bIsDisabled);
```

### Parameters

*pEdit*<br/>
[in] A pointer to the edit control. This value cannot be NULL.

*bIsHighlighted*<br/>
[out] Returns whether the ribbon box is highlighted.

*bIsPaneHighlighted*<br/>
[out] Returns TRUE if the ribbon panel that contains *pEdit* is highlighted.

*bIsDisabled*<br/>
[out] Returns whether *pEdit* is disabled.

### Return Value

The background color of the edit box *pEdit*.

### Remarks

## <a name="onfillmenuimagerect"></a> CMFCVisualManagerWindows7::OnFillMenuImageRect

The framework calls this method when it fills area around a menu item image.

```
virtual void OnFillMenuImageRect(
    CDC* pDC,
    CMFCToolBarButton* pButton,
    CRect rectangle,
    CMFCVisualManager::AFX_BUTTON_STATE state);
```

### Parameters

*pDC*<br/>
[in] A pointer to the device context of a menu button.

*pButton*<br/>
[in] A pointer to a `CMFCToolBarButton`. The framework fills the background for this button.

*rectangle*<br/>
[in] A rectangle that specifies the boundaries of the menu button image area.

*state*<br/>
[in] The button state.

### Remarks

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CMFCVisualManager Class](../../mfc/reference/cmfcvisualmanager-class.md)<br/>
[CMFCVisualManagerWindows Class](../../mfc/reference/cmfcvisualmanagerwindows-class.md)
