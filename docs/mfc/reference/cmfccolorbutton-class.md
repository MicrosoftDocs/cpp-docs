---
description: "Learn more about: CMFCColorButton Class"
title: "CMFCColorButton Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCColorButton", "AFXCOLORBUTTON/CMFCColorButton", "AFXCOLORBUTTON/CMFCColorButton::CMFCColorButton", "AFXCOLORBUTTON/CMFCColorButton::EnableAutomaticButton", "AFXCOLORBUTTON/CMFCColorButton::EnableOtherButton", "AFXCOLORBUTTON/CMFCColorButton::GetAutomaticColor", "AFXCOLORBUTTON/CMFCColorButton::GetColor", "AFXCOLORBUTTON/CMFCColorButton::SetColor", "AFXCOLORBUTTON/CMFCColorButton::SetColorName", "AFXCOLORBUTTON/CMFCColorButton::SetColumnsNumber", "AFXCOLORBUTTON/CMFCColorButton::SetDocumentColors", "AFXCOLORBUTTON/CMFCColorButton::SetPalette", "AFXCOLORBUTTON/CMFCColorButton::SizeToContent", "AFXCOLORBUTTON/CMFCColorButton::IsDrawXPTheme", "AFXCOLORBUTTON/CMFCColorButton::OnDraw", "AFXCOLORBUTTON/CMFCColorButton::OnDrawBorder", "AFXCOLORBUTTON/CMFCColorButton::OnDrawFocusRect", "AFXCOLORBUTTON/CMFCColorButton::OnShowColorPopup", "AFXCOLORBUTTON/CMFCColorButton::RebuildPalette", "AFXCOLORBUTTON/CMFCColorButton::UpdateColor", "AFXCOLORBUTTON/CMFCColorButton::m_bEnabledInCustomizeMode"]
helpviewer_keywords: ["CMFCColorButton [MFC], CMFCColorButton", "CMFCColorButton [MFC], EnableAutomaticButton", "CMFCColorButton [MFC], EnableOtherButton", "CMFCColorButton [MFC], GetAutomaticColor", "CMFCColorButton [MFC], GetColor", "CMFCColorButton [MFC], SetColor", "CMFCColorButton [MFC], SetColorName", "CMFCColorButton [MFC], SetColumnsNumber", "CMFCColorButton [MFC], SetDocumentColors", "CMFCColorButton [MFC], SetPalette", "CMFCColorButton [MFC], SizeToContent", "CMFCColorButton [MFC], IsDrawXPTheme", "CMFCColorButton [MFC], OnDraw", "CMFCColorButton [MFC], OnDrawBorder", "CMFCColorButton [MFC], OnDrawFocusRect", "CMFCColorButton [MFC], OnShowColorPopup", "CMFCColorButton [MFC], RebuildPalette", "CMFCColorButton [MFC], UpdateColor", "CMFCColorButton [MFC], m_bEnabledInCustomizeMode"]
ms.assetid: 9fdf34ae-4cc5-4c5e-9d89-1c50e8a73699
---
# CMFCColorButton Class

The `CMFCColorButton` and [CMFCColorBar Class](../../mfc/reference/cmfccolorbar-class.md) classes are used together to implement a color picker control.

## Syntax

```
class CMFCColorButton : public CMFCButton
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CMFCColorButton::CMFCColorButton](#cmfccolorbutton)|Constructs a new `CMFCColorButton` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMFCColorButton::EnableAutomaticButton](#enableautomaticbutton)|Enables and disables an "automatic" button that is positioned above the regular color buttons. (The standard system automatic button is labeled **Automatic**.)|
|[CMFCColorButton::EnableOtherButton](#enableotherbutton)|Enables and disables an "other" button that is positioned below the regular color buttons. (The standard system "other" button is labeled **More Colors**.)|
|[CMFCColorButton::GetAutomaticColor](#getautomaticcolor)|Retrieves the current automatic color.|
|[CMFCColorButton::GetColor](#getcolor)|Retrieves a button's color.|
|[CMFCColorButton::SetColor](#setcolor)|Sets a button's color.|
|[CMFCColorButton::SetColorName](#setcolorname)|Sets a color name.|
|[CMFCColorButton::SetColumnsNumber](#setcolumnsnumber)|Sets the number of columns on the color picker dialog box.|
|[CMFCColorButton::SetDocumentColors](#setdocumentcolors)|Specifies a list of document-specific colors that are displayed on the color picker dialog box.|
|[CMFCColorButton::SetPalette](#setpalette)|Specifies a palette of standard display colors.|
|[CMFCColorButton::SizeToContent](#sizetocontent)|Changes the size of the button control, depending on its text and image size.|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[CMFCColorButton::IsDrawXPTheme](#isdrawxptheme)|Indicates whether the current color button is displayed in the visual style of Windows XP.|
|[CMFCColorButton::OnDraw](#ondraw)|Called by the framework to display an image of the button.|
|[CMFCColorButton::OnDrawBorder](#ondrawborder)|Called by the framework to display the button's border.|
|[CMFCColorButton::OnDrawFocusRect](#ondrawfocusrect)|Called by the framework to display a focus rectangle when the button has a focus.|
|[CMFCColorButton::OnShowColorPopup](#onshowcolorpopup)|Called by the framework when the color picker dialog box is about to be displayed.|
|[CMFCColorButton::RebuildPalette](#rebuildpalette)|Initializes the `m_pPalette` protected data member to the specified palette or the default system palette.|
|[CMFCColorButton::UpdateColor](#updatecolor)|Called by the framework when the user selects a color from the palette of the color picker dialog box.|

### Data Members

|Name|Description|
|----------|-----------------|
|`m_bAltColorDlg`|A Boolean. If TRUE, the framework displays the [CMFCColorDialog](../../mfc/reference/cmfccolordialog-class.md) color dialog box when the *other* button is clicked, or if FALSE, the system color dialog box. The default value is TRUE. For more information, see [CMFCColorButton::EnableOtherButton](#enableotherbutton).|
|`m_bAutoSetFocus`|A Boolean. If TRUE, the framework sets the focus on the color menu when the menu is displayed, or if FALSE, does not change the focus. The default value is TRUE.|
|[CMFCColorButton::m_bEnabledInCustomizeMode](#m_benabledincustomizemode)|Indicates whether customization mode is enabled for the color button.|
|`m_Color`|A [COLORREF](/windows/win32/gdi/colorref) value. Contains the currently selected color.|
|`m_ColorAutomatic`|A [COLORREF](/windows/win32/gdi/colorref) value. Contains the currently selected default color.|
|`m_Colors`|A [CArray](../../mfc/reference/carray-class.md) of [COLORREF](/windows/win32/gdi/colorref) values. Contains the currently available colors.|
|`m_lstDocColors`|A [CList](../../mfc/reference/clist-class.md) of [COLORREF](/windows/win32/gdi/colorref) values. Contains the current document colors.|
|`m_nColumns`|An integer. Contains the number of columns to display in the grid of colors in a color selection menu.|
|`m_pPalette`|A pointer to a [CPalette](../../mfc/reference/cpalette-class.md). Contains the colors that are available in the current color selection menu.|
|`m_pPopup`|A pointer to a [CMFCColorPopupMenu Class](../../mfc/reference/cmfccolorpopupmenu-class.md) object. The color selection menu that is displayed when you click the color button.|
|`m_strAutoColorText`|A string. The label of the "automatic" button in a color selection menu.|
|`m_strDocColorsText`|A string. The label of the button in a color selection menu that displays the document colors.|
|`m_strOtherText`|A string. The label of the "other" button in a color selection menu.|

## Remarks

By default, the `CMFCColorButton` class behaves as a push button that opens a color picker dialog box. The color picker dialog box contains an array of small color buttons and an "other" button that displays a custom color picker. (The standard system "other" button is labeled **More Colors**.) When a user selects a new color, the `CMFCColorButton` object reflects the change and displays the selected color.

Create a color button control either directly in your code, or by using the **ClassWizard** tool and a dialog box template. If you create a color button control directly, add a `CMFCColorButton` variable to your application, and then call the constructor and `Create` methods of the `CMFCColorButton` object. If you use the **ClassWizard**, add a `CButton` variable to your application, and then change the type of the variable from `CButton` to `CMFCColorButton`.

The color picker dialog box ( [CMFCColorBar Class](../../mfc/reference/cmfccolorbar-class.md)) is displayed by the [CMFCColorButton::OnShowColorPopup](#onshowcolorpopup) method when the framework calls the `OnLButtonDown` event handler. The [CMFCColorButton::OnShowColorPopup](#onshowcolorpopup) method can be overridden to support custom color selection.

The `CMFCColorButton` object notifies its parent that a color is changing by sending it a WM_COMMAND | BN_CLICKED notification. The parent uses the [CMFCColorButton::GetColor](#getcolor) method to retrieve the current color.

## Example

The following example demonstrates how to configure a color button by using various methods in the `CMFCColorButton` class. The methods set the color of the color button and its number of columns, and enable the automatic and the other buttons. This example is part of the [Status Bar Demo sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_StatusBarDemo#10](../../mfc/reference/codesnippet/cpp/cmfccolorbutton-class_1.h)]
[!code-cpp[NVC_MFC_StatusBarDemo#11](../../mfc/reference/codesnippet/cpp/cmfccolorbutton-class_2.cpp)]

## Requirements

**Header:** afxcolorbutton.h

## <a name="cmfccolorbutton"></a> CMFCColorButton::CMFCColorButton

Constructs a new `CMFCColorButton` object.

```
CMFCColorButton();
```

## <a name="enableautomaticbutton"></a> CMFCColorButton::EnableAutomaticButton

Enable or disable the "automatic" button of a color picker control and set the automatic (default) color.

```cpp
void EnableAutomaticButton(
    LPCTSTR lpszLabel,
    COLORREF colorAutomatic,
    BOOL bEnable=TRUE);
```

### Parameters

*lpszLabel*<br/>
[in] Specifies the automatic button's text.

*colorAutomatic*<br/>
[in] An RGB value that specifies the automatic button's default color.

*bEnable*<br/>
[in] Specifies whether the automatic button is enabled or disabled.

### Remarks

## <a name="enableotherbutton"></a> CMFCColorButton::EnableOtherButton

Enable or disable the "other" button, which appears below regular color buttons.

```cpp
void EnableOtherButton(
    LPCTSTR lpszLabel,
    BOOL bAltColorDlg=TRUE,
    BOOL bEnable=TRUE);
```

### Parameters

*lpszLabel*<br/>
[in] Specifies the button's text.

*bAltColorDlg*<br/>
[in] Specifies whether the [CMFCColorDialog](../../mfc/reference/cmfccolordialog-class.md) dialog box or the system color dialog box is opened when the user clicks the button.

*bEnable*<br/>
[in] Specifies whether the "other" button is enabled or disabled.

### Remarks

Click the "other" button to display a color dialog box. If the *bAltColorDlg* parameter is TRUE, the [CMFCColorDialog Class](../../mfc/reference/cmfccolordialog-class.md) is displayed; otherwise, the system color dialog box is displayed.

## <a name="getautomaticcolor"></a> CMFCColorButton::GetAutomaticColor

Retrieves the current automatic (default) color.

```
COLORREF GetAutomaticColor() const;
```

### Return Value

An RGB value representing the current automatic color.

### Remarks

The current automatic color is set by the [CMFCColorButton::EnableAutomaticButton](#enableautomaticbutton) method.

## <a name="getcolor"></a> CMFCColorButton::GetColor

Retrieves the currently selected color.

```
COLORREF GetColor() const;
```

### Return Value

An RGB value.

### Remarks

## <a name="isdrawxptheme"></a> CMFCColorButton::IsDrawXPTheme

Indicates whether the current color button is displayed in the visual style of Windows XP.

```
BOOL IsDrawXPTheme() const;
```

### Return Value

TRUE if visual styles are supported and the current color button is displayed in the visual style of Windows XP; otherwise, FALSE.

## <a name="m_benabledincustomizemode"></a> CMFCColorButton::m_bEnabledInCustomizeMode

Sets a color button to customization mode.

```
BOOL m_bEnabledInCustomizeMode;
```

### Remarks

If you need to add a color button to a customization dialog's page (or allow the user to make another color selection during customization), enable the button by setting the `m_bEnabledInCustomizeMode` member to TRUE. By default, this member is set to FALSE.

## <a name="ondraw"></a> CMFCColorButton::OnDraw

Called by the framework to render an image of the button.

```
virtual void OnDraw(
    CDC* pDC,
    const CRect& rect,
    UINT uiState);
```

### Parameters

*pDC*<br/>
[in] Points to the device context that is used to render the image of the button.

*rect*<br/>
[in] A rectangle that bounds the button.

*uiState*<br/>
[in] Specifies the visual state of the button.

### Remarks

Override this method to customize the rendering process.

## <a name="ondrawborder"></a> CMFCColorButton::OnDrawBorder

Called by the framework to display the border of the button.

```
virtual void OnDrawBorder(
    CDC* pDC,
    CRect& rectClient,
    UINT uiState);
```

### Parameters

*pDC*<br/>
[in] Points to the device context used to draw the border.

*rectClient*<br/>
[in] A rectangle in the device context that is specified by the *pDC* parameter that defines the boundaries of the button to be drawn.

*uiState*<br/>
[in] Specifies the visual state of the button.

### Remarks

Override this function to customize the color button's border appearance.

## <a name="ondrawfocusrect"></a> CMFCColorButton::OnDrawFocusRect

Called by the framework to display a focus rectangle when the button has focus.

```
virtual void OnDrawFocusRect(
    CDC* pDC,
    const CRect& rectClient);
```

### Parameters

*pDC*<br/>
[in] Points to the device context used to draw the focus rectangle.

*rectClient*<br/>
[in] A rectangle in the device context specified by the *pDC* parameter that defines the boundaries of the button.

### Remarks

Override this method to customize appearance of the focus rectangle.

## <a name="onshowcolorpopup"></a> CMFCColorButton::OnShowColorPopup

Called before the popup color bar is displayed.

```
virtual void OnShowColorPopup();
```

### Remarks

## <a name="rebuildpalette"></a> CMFCColorButton::RebuildPalette

Initializes the `m_pPalette` protected data member to the specified palette or the default system palette.

```cpp
void RebuildPalette(CPalette* pPal);
```

### Parameters

*pPal*\
[in] A pointer to a logical palette or NULL. If NULL, the default system palette is used.

## <a name="setcolor"></a> CMFCColorButton::SetColor

Specifies the color of the button.

```cpp
void SetColor(COLORREF color);
```

### Parameters

*color*<br/>
[in] An RGB value.

### Remarks

## <a name="setcolorname"></a> CMFCColorButton::SetColorName

Specifies the name of a color.

```
static void SetColorName(
    COLORREF color,
    const CString& strName);
```

### Parameters

*color*<br/>
[in] The color's RGB value.

*strName*<br/>
[in] The color's name.

### Remarks

The list of color names is global per application. Consequently, this method transfers its parameters to [CMFCColorBar::SetColorName](../../mfc/reference/cmfccolorbar-class.md#setcolorname).

## <a name="setcolumnsnumber"></a> CMFCColorButton::SetColumnsNumber

Defines the number of columns that are displayed in the table of colors that is presented to the user during the user's color selection process.

```cpp
void SetColumnsNumber(int nColumns);
```

### Parameters

*nColumns*<br/>
[in] Specifies the number of columns.

### Remarks

The user can select a color from a popup color bar that displays a table of predefined colors. Use this method to define the number of columns in the table.

## <a name="setdocumentcolors"></a> CMFCColorButton::SetDocumentColors

Specifies a set of colors and the set's name. The set of colors is displayed using a [CMFCColorBar Class](../../mfc/reference/cmfccolorbar-class.md) object.

```cpp
void SetDocumentColors(
    LPCTSTR lpszLabel,
    CList<COLORREF,COLORREF>& lstColors);
```

### Parameters

*lpszLabel*<br/>
[in] Specifies the label to be displayed with the set of document colors.

*lstColors*<br/>
[in] A reference to a list of RGB values.

### Remarks

A `CMFCColorButton` object maintains a list of RGB values that are transferred to a [CMFCColorBar Class](../../mfc/reference/cmfccolorbar-class.md) object. When the color bar is displayed, these colors are shown in a special section whose label is specified by the *lpszLabel* parameter.

## <a name="setpalette"></a> CMFCColorButton::SetPalette

Specifies the standard colors to display on the popup color bar.

```cpp
void SetPalette(CPalette* pPalette);
```

### Parameters

*pPalette*<br/>
[in] A pointer to a color palette.

### Remarks

## <a name="sizetocontent"></a> CMFCColorButton::SizeToContent

Resizes the button control to fit its text and image.

```
virtual CSize SizeToContent(BOOL bCalcOnly=FALSE);
```

### Parameters

*bCalcOnly*<br/>
[in] If nonzero, the new size of the button control is calculated but the actual size is not changed.

### Return Value

A `CSize` object that specifies a new button control size.

### Remarks

## <a name="updatecolor"></a> CMFCColorButton::UpdateColor

Called by the framework when the user selects a color from the color bar that displays when the user clicks the color button.

```
virtual void UpdateColor(COLORREF color);
```

### Parameters

*color*<br/>
[in] A color selected by the user.

### Remarks

The `UpdateColor` function changes the currently selected button's color and notifies its parent by sending a WM_COMMAND message with a BN_CLICKED standard notification. Use the [CMFCColorButton::GetColor](#getcolor) method to retrieve the selected color.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CMFCButton Class](../../mfc/reference/cmfcbutton-class.md)<br/>
[CMFCColorBar Class](../../mfc/reference/cmfccolorbar-class.md)<br/>
[CMFCColorButton::OnShowColorPopup](#onshowcolorpopup)<br/>
[COLORREF](/windows/win32/gdi/colorref)<br/>
[CPalette Class](../../mfc/reference/cpalette-class.md)<br/>
[CArray Class](../../mfc/reference/carray-class.md)<br/>
[CList Class](../../mfc/reference/clist-class.md)<br/>
[CString](../../atl-mfc-shared/reference/cstringt-class.md)
