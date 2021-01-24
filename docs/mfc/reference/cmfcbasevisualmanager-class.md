---
description: "Learn more about: CMFCBaseVisualManager Class"
title: "CMFCBaseVisualManager Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCBaseVisualManager", "AFXVISUALMANAGER/CMFCBaseVisualManager", "AFXVISUALMANAGER/CMFCBaseVisualManager::CMFCBaseVisualManager", "AFXVISUALMANAGER/CMFCBaseVisualManager::DrawCheckBox", "AFXVISUALMANAGER/CMFCBaseVisualManager::DrawComboBorder", "AFXVISUALMANAGER/CMFCBaseVisualManager::DrawComboDropButton", "AFXVISUALMANAGER/CMFCBaseVisualManager::DrawPushButton", "AFXVISUALMANAGER/CMFCBaseVisualManager::DrawRadioButton", "AFXVISUALMANAGER/CMFCBaseVisualManager::DrawStatusBarProgress", "AFXVISUALMANAGER/CMFCBaseVisualManager::FillReBarPane", "AFXVISUALMANAGER/CMFCBaseVisualManager::GetStandardWindowsTheme", "AFXVISUALMANAGER/CMFCBaseVisualManager::CleanUpThemes", "AFXVISUALMANAGER/CMFCBaseVisualManager::UpdateSystemColors"]
helpviewer_keywords: ["CMFCBaseVisualManager [MFC], CMFCBaseVisualManager", "CMFCBaseVisualManager [MFC], DrawCheckBox", "CMFCBaseVisualManager [MFC], DrawComboBorder", "CMFCBaseVisualManager [MFC], DrawComboDropButton", "CMFCBaseVisualManager [MFC], DrawPushButton", "CMFCBaseVisualManager [MFC], DrawRadioButton", "CMFCBaseVisualManager [MFC], DrawStatusBarProgress", "CMFCBaseVisualManager [MFC], FillReBarPane", "CMFCBaseVisualManager [MFC], GetStandardWindowsTheme", "CMFCBaseVisualManager [MFC], CleanUpThemes", "CMFCBaseVisualManager [MFC], UpdateSystemColors"]
ms.assetid: d56f3afc-cdea-4de1-825a-a08999c571e0
---
# CMFCBaseVisualManager Class

A layer between derived visual managers and the Windows Theme API.

`CMFCBaseVisualManager` loads UxTheme.dll, if available, and manages access to Windows Theme API methods.

This class is for internal use only.

## Syntax

```
class CMFCBaseVisualManager: public CObject
```

## Members

### Public Constructors

|Name|Description|
|-|-|
|[CMFCBaseVisualManager::CMFCBaseVisualManager](#cmfcbasevisualmanager)|Constructs and initializes a `CMFCBaseVisualManager` object.|
|`CMFCBaseVisualManager::~CMFCBaseVisualManager`|Destructor.|

### Public Methods

|Name|Description|
|-|-|
|[CMFCBaseVisualManager::DrawCheckBox](#drawcheckbox)|Draws a check box control by using the current Windows theme.|
|[CMFCBaseVisualManager::DrawComboBorder](#drawcomboborder)|Draws a combo box border using the current Windows theme.|
|[CMFCBaseVisualManager::DrawComboDropButton](#drawcombodropbutton)|Draws a combo box drop-down button using the current Windows theme.|
|[CMFCBaseVisualManager::DrawPushButton](#drawpushbutton)|Draws a push button using the current Windows theme.|
|[CMFCBaseVisualManager::DrawRadioButton](#drawradiobutton)|Draws a radio button control by using the current Windows theme.|
|[CMFCBaseVisualManager::DrawStatusBarProgress](#drawstatusbarprogress)|Draws a progress bar on a status bar control ( [CMFCStatusBar Class](../../mfc/reference/cmfcstatusbar-class.md)) using the current Windows theme.|
|[CMFCBaseVisualManager::FillReBarPane](#fillrebarpane)|Fills the background of the rebar control by using the current Windows theme.|
|[CMFCBaseVisualManager::GetStandardWindowsTheme](#getstandardwindowstheme)|Gets the current Windows theme.|

### Protected Methods

|Name|Description|
|-|-|
|[CMFCBaseVisualManager::CleanUpThemes](#cleanupthemes)|Calls `CloseThemeData` for all handles obtained in `UpdateSystemColors`.|
|[CMFCBaseVisualManager::UpdateSystemColors](#updatesystemcolors)|Calls `OpenThemeData` to obtain handles for drawing various controls: windows, toolbars, buttons, and so on.|

## Remarks

You do not have to instantiate objects of this class directly.

Because it is a base class for all visual managers, you can just call [CMFCVisualManager::GetInstance](../../mfc/reference/cmfcvisualmanager-class.md#getinstance), obtain a pointer to the current Visual Manager, and access the methods for `CMFCBaseVisualManager` using that pointer. However, if you have to display a control by using the current Windows theme, it is better to use the `CMFCVisualManagerWindows` interface.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CMFCBaseVisualManager](../../mfc/reference/cmfcbasevisualmanager-class.md)

## Requirements

**Header:** afxvisualmanager.h

## <a name="cleanupthemes"></a> CMFCBaseVisualManager::CleanUpThemes

Calls `CloseThemeData` for all handles obtained in `UpdateSystemColors`.

```cpp
void CleanUpThemes();
```

### Remarks

For internal use only.

## <a name="cmfcbasevisualmanager"></a> CMFCBaseVisualManager::CMFCBaseVisualManager

Constructs and initializes a `CMFCBaseVisualManager` object.

```
CMFCBaseVisualManager();
```

## <a name="drawcheckbox"></a> CMFCBaseVisualManager::DrawCheckBox

Draws a check box control by using the current Windows theme.

```
virtual BOOL DrawCheckBox(
    CDC* pDC,
    CRect rect,
    BOOL bHighlighted,
    int nState,
    BOOL bEnabled,
    BOOL bPressed);

);
```

### Parameters

*pDC*<br/>
[in] A pointer to a device context

*rect*<br/>
[in] The bounding rectangle of the check box.

*bHighlighted*<br/>
[in] Specifies whether the check box is highlighted.

*nState*<br/>
[in] 0 for unchecked, 1 for checked normal,

2 for mixed normal.

*bEnabled*<br/>
[in] Specifies whether the check box is enabled.

*bPressed*<br/>
[in] Specifies whether the check box is pressed.

### Return Value

TRUE if Theme API is enabled; otherwise FALSE.

### Remarks

The values of *nState* correspond to the following check box styles.

|nState|Check box style|
|------------|---------------------|
|0|CBS_UNCHECKEDNORMAL|
|1|CBS_CHECKEDNORMAL|
|2|CBS_MIXEDNORMAL|

## <a name="drawcomboborder"></a> CMFCBaseVisualManager::DrawComboBorder

Draws the combo box border using the current Windows theme.

```
virtual BOOL DrawComboBorder(
    CDC* pDC,
    CRect rect,
    BOOL bDisabled,
    BOOL bIsDropped,
    BOOL bIsHighlighted);
```

### Parameters

*pDC*<br/>
[in] A pointer to a device context.

*rect*<br/>
[in] Bounding rectangle of the combo box border.

*bDisabled*<br/>
[in] Specifies whether the combo box border is disabled.

*bIsDropped*<br/>
[in] Specifies whether the combo box border is dropped down.

*bIsHighlighted*<br/>
[in] Specifies whether the combo box border is highlighted.

### Return Value

TRUE if Theme API is enabled; otherwise FALSE.

## <a name="drawcombodropbutton"></a> CMFCBaseVisualManager::DrawComboDropButton

Draws a combo box drop-down button using the current Windows theme.

```
virtual BOOL DrawComboDropButton(
    CDC* pDC,
    CRect rect,
    BOOL bDisabled,
    BOOL bIsDropped,
    BOOL bIsHighlighted);
```

### Parameters

*pDC*\
[in] A pointer to a device context.

*rect*\
[in] The bounding rectangle of the combo box drop-down button.

*bDisabled*\
[in] Specifies whether the combo box drop-down button is disabled.

*bIsDropped*\
[in] Specifies whether the combo box drop-down button is dropped down.

*bIsHighlighted*\
[in] Specifies whether the combo box drop-down button is highlighted.

### Return Value

TRUE if Theme API is enabled; otherwise FALSE.

## <a name="drawpushbutton"></a> CMFCBaseVisualManager::DrawPushButton

Draws a push button using the current Windows theme.

```
virtual BOOL DrawPushButton(
    CDC* pDC,
    CRect rect,
    CMFCButton* pButton,
    UINT uiState);
```

### Parameters

*pDC*<br/>
[in] A pointer to a device context.

*rect*<br/>
[in] The bounding rectangle of the push button.

*pButton*<br/>
[in] A pointer to the [CMFCButton Class](../../mfc/reference/cmfcbutton-class.md) object to draw.

*uiState*<br/>
[in] Ignored. The state is taken from *pButton*.

### Return Value

TRUE if Theme API is enabled; otherwise FALSE.

## <a name="drawradiobutton"></a> CMFCBaseVisualManager::DrawRadioButton

Draws a radio button control by using the current Windows theme.

```
virtual BOOL DrawRadioButton(
    CDC* pDC,
    CRect rect,
    BOOL bHighlighted,
    BOOL bChecked,
    BOOL bEnabled,
    BOOL bPressed);
```

### Parameters

*pDC*<br/>
[in] A pointer to a device context.

*rect*<br/>
[in] The bounding rectangle of the radio button.

*bHighlighted*<br/>
[in] Specifies whether the radio button is highlighted.

*bChecked*<br/>
[in] Specifies whether the radio button is checked.

*bEnabled*<br/>
[in] Specifies whether the radio button is enabled.

*bPressed*<br/>
[in] Specifies whether the radio button is pressed.

### Return Value

TRUE if Theme API is enabled; otherwise FALSE.

## <a name="drawstatusbarprogress"></a> CMFCBaseVisualManager::DrawStatusBarProgress

Draws progress bar on status bar control ( [CMFCStatusBar Class](../../mfc/reference/cmfcstatusbar-class.md)) using the current Windows theme.

```
virtual BOOL DrawStatusBarProgress(
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

*pDC*<br/>
[in] A pointer to a device context.

*pStatusBar*<br/>
[in] A pointer to status bar. This value is ignored.

*rectProgress*<br/>
[in] The bounding rectangle of the progress bar in *pDC* coordinates.

*nProgressTotal*<br/>
[in] The total progress value.

*nProgressCurr*<br/>
[in] The current progress value.

*clrBar*<br/>
[in] The start color. `CMFCBaseVisualManager` ignores this. Derived classes can use it for color gradients.

*clrProgressBarDest*<br/>
[in] The end color. `CMFCBaseVisualManager` ignores this. Derived classes can use it for color gradients.

*clrProgressText*<br/>
[in] Progress text color. `CMFCBaseVisualManager` ignores this. The text color is defined by `afxGlobalData.clrBtnText`.

*bProgressText*<br/>
[in] Specifies whether to display progress text.

### Return Value

TRUE if Theme API is enabled; otherwise FALSE.

## <a name="fillrebarpane"></a> CMFCBaseVisualManager::FillReBarPane

Fills the background of the rebar control by using the current Windows theme.

```
virtual void FillReBarPane(
    CDC* pDC,
    CBasePane* pBar,
    CRect rectClient);
```

### Parameters

*pDC*<br/>
[in] A pointer to a device context.

*pBar*<br/>
[in] A pointer to a pane whose background should be drawn.

*rectClient*<br/>
[in] The bounding rectangle of the area to be filled.

### Return Value

TRUE if Theme API is enabled; otherwise FALSE.

## <a name="getstandardwindowstheme"></a> CMFCBaseVisualManager::GetStandardWindowsTheme

Gets the current Windows theme.

```
virtual WinXpTheme GetStandardWindowsTheme();
```

### Return Value

The currently selected Windows Theme color. Can be one of the following enumerated values:

- `WinXpTheme_None` - there is no theme enabled.

- `WinXpTheme_NonStandard` - non standard theme is selected (meaning a theme is selected, but none from the list below).

- `WinXpTheme_Blue` - blue theme (Luna).

- `WinXpTheme_Olive` - olive theme.

- `WinXpTheme_Silver` - silver theme.

## <a name="updatesystemcolors"></a> CMFCBaseVisualManager::UpdateSystemColors

Calls `OpenThemeData` to obtain handles for drawing various controls: windows, toolbars, buttons, and so on.

```cpp
void UpdateSystemColors();
```

### Remarks

For internal use only.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)
