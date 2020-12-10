---
description: "Learn more about: CMFCRibbonColorButton Class"
title: "CMFCRibbonColorButton Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCRibbonColorButton", "AFXRIBBONCOLORBUTTON/CMFCRibbonColorButton", "AFXRIBBONCOLORBUTTON/CMFCRibbonColorButton::CMFCRibbonColorButton", "AFXRIBBONCOLORBUTTON/CMFCRibbonColorButton::AddColorsGroup", "AFXRIBBONCOLORBUTTON/CMFCRibbonColorButton::EnableAutomaticButton", "AFXRIBBONCOLORBUTTON/CMFCRibbonColorButton::EnableOtherButton", "AFXRIBBONCOLORBUTTON/CMFCRibbonColorButton::GetAutomaticColor", "AFXRIBBONCOLORBUTTON/CMFCRibbonColorButton::GetColor", "AFXRIBBONCOLORBUTTON/CMFCRibbonColorButton::GetColorBoxSize", "AFXRIBBONCOLORBUTTON/CMFCRibbonColorButton::GetColumns", "AFXRIBBONCOLORBUTTON/CMFCRibbonColorButton::GetHighlightedColor", "AFXRIBBONCOLORBUTTON/CMFCRibbonColorButton::RemoveAllColorGroups", "AFXRIBBONCOLORBUTTON/CMFCRibbonColorButton::SetColor", "AFXRIBBONCOLORBUTTON/CMFCRibbonColorButton::SetColorBoxSize", "AFXRIBBONCOLORBUTTON/CMFCRibbonColorButton::SetColorName", "AFXRIBBONCOLORBUTTON/CMFCRibbonColorButton::SetColumns", "AFXRIBBONCOLORBUTTON/CMFCRibbonColorButton::SetDocumentColors", "AFXRIBBONCOLORBUTTON/CMFCRibbonColorButton::SetPalette", "AFXRIBBONCOLORBUTTON/CMFCRibbonColorButton::UpdateColor"]
helpviewer_keywords: ["CMFCRibbonColorButton [MFC], CMFCRibbonColorButton", "CMFCRibbonColorButton [MFC], AddColorsGroup", "CMFCRibbonColorButton [MFC], EnableAutomaticButton", "CMFCRibbonColorButton [MFC], EnableOtherButton", "CMFCRibbonColorButton [MFC], GetAutomaticColor", "CMFCRibbonColorButton [MFC], GetColor", "CMFCRibbonColorButton [MFC], GetColorBoxSize", "CMFCRibbonColorButton [MFC], GetColumns", "CMFCRibbonColorButton [MFC], GetHighlightedColor", "CMFCRibbonColorButton [MFC], RemoveAllColorGroups", "CMFCRibbonColorButton [MFC], SetColor", "CMFCRibbonColorButton [MFC], SetColorBoxSize", "CMFCRibbonColorButton [MFC], SetColorName", "CMFCRibbonColorButton [MFC], SetColumns", "CMFCRibbonColorButton [MFC], SetDocumentColors", "CMFCRibbonColorButton [MFC], SetPalette", "CMFCRibbonColorButton [MFC], UpdateColor"]
ms.assetid: 6b4b4ee3-8cc0-41b4-a4eb-93e8847008e1
---
# CMFCRibbonColorButton Class

The `CMFCRibbonColorButton` class implements a color button that you can add to a ribbon bar. The ribbon color button displays a drop-down menu that contains one or more color palettes.

## Syntax

```
class CMFCRibbonColorButton : public CMFCRibbonGallery
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CMFCRibbonColorButton::CMFCRibbonColorButton](#cmfcribboncolorbutton)||

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMFCRibbonColorButton::AddColorsGroup](#addcolorsgroup)|Adds a group of colors to the regular color area.|
|[CMFCRibbonColorButton::EnableAutomaticButton](#enableautomaticbutton)|Specifies whether the **Automatic** button is enabled.|
|[CMFCRibbonColorButton::EnableOtherButton](#enableotherbutton)|Enables the **Other** button.|
|[CMFCRibbonColorButton::GetAutomaticColor](#getautomaticcolor)||
|[CMFCRibbonColorButton::GetColor](#getcolor)|Returns the currently selected color.|
|[CMFCRibbonColorButton::GetColorBoxSize](#getcolorboxsize)|Returns the size of the color elements that appear on the color bar.|
|[CMFCRibbonColorButton::GetColumns](#getcolumns)||
|[CMFCRibbonColorButton::GetHighlightedColor](#gethighlightedcolor)|Returns the color of the currently selected element on the popup color palette.|
|[CMFCRibbonColorButton::RemoveAllColorGroups](#removeallcolorgroups)|Removes all color groups from the regular color area.|
|[CMFCRibbonColorButton::SetColor](#setcolor)|Selects a color from the regular color area.|
|[CMFCRibbonColorButton::SetColorBoxSize](#setcolorboxsize)|Sets the size of all the color elements that appear on the color bar.|
|[CMFCRibbonColorButton::SetColorName](#setcolorname)||
|[CMFCRibbonColorButton::SetColumns](#setcolumns)||
|[CMFCRibbonColorButton::SetDocumentColors](#setdocumentcolors)|Specifies a list of RGB values to display in the document color area.|
|[CMFCRibbonColorButton::SetPalette](#setpalette)||
|[CMFCRibbonColorButton::UpdateColor](#updatecolor)||

## Remarks

The ribbon color button displays a color bar when a user presses it. By default, this color bar contains a color selection palette called the regular color area. Optionally, the color bar can display an **Automatic** button, which allows the user to select a default color, and an **Other** button, which displays a popup color palette that contains additional colors.

## Example

The following example demonstrates how to use various methods in the `CMFCRibbonColorButton` class. The example shows how to construct a `CMFCRibbonColorButton` object, set the large image, enable the **Automatic** button, enable the **Other** button, set the number of columns, set the size of all the color elements that appear on the color bar, add a group of colors to the regular color area, and specify a list of RGB values to display in the document color area. This code snippet is part of the [Draw Client sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_DrawClient#3](../../mfc/reference/codesnippet/cpp/cmfcribboncolorbutton-class_1.cpp)]

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)

[CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)

[CMFCRibbonGallery](../../mfc/reference/cmfcribbongallery-class.md)

[CMFCRibbonColorButton](../../mfc/reference/cmfcribboncolorbutton-class.md)

## Requirements

**Header:** afxribboncolorbutton.h

## <a name="addcolorsgroup"></a> CMFCRibbonColorButton::AddColorsGroup

Adds a group of colors to the regular color area.

```cpp
void AddColorsGroup(
    LPCTSTR lpszName,
    const CList<COLORREF,COLORREF>& lstColors,
    BOOL bContiguousColumns=FALSE);
```

### Parameters

*lpszName*<br/>
[in] The group name.

*lstColors*<br/>
[in] The list of colors.

*bContiguousColumns*<br/>
[in] Controls how the color items are displayed in the group. If TRUE, the color items are drawn without a vertical spacing. If FALSE, the color items are drawn with a vertical spacing.

### Remarks

Use this function to make the color pop-up display several groups of colors. You can control how the colors are displayed in group.

## <a name="cmfcribboncolorbutton"></a> CMFCRibbonColorButton::CMFCRibbonColorButton

Constructs a `CMFCRibbonColorButton` object.

```
CMFCRibbonColorButton();

CMFCRibbonColorButton(
    UINT nID,
    LPCTSTR lpszText,
    int nSmallImageIndex,
    COLORREF color = RGB(0, 0, 0));

CMFCRibbonColorButton(
    UINT nID,
    LPCTSTR lpszText,
    BOOL bSimpleButtonLook,
    int nSmallImageIndex,
    int nLargeImageIndex,
    COLORREF color = RGB(0, 0, 0));
```

### Parameters

*nID*<br/>
[in] Specifies the command ID of the command to execute when a user clicks the button.

*lpszText*<br/>
[in] Specifies the text to appear on the button.

*nSmallImageIndex*<br/>
[in] The zero-based index of the small image to appear on the button.

*color*<br/>
[in] The color of the button (defaults to black).

*bSimpleButtonLook*<br/>
[in] If TRUE, the button is drawn as a simple rectangle.

*nLargeImageIndex*<br/>
[in] The zero-based index of the large image to appear on the button.

### Return Value

### Remarks

## <a name="enableautomaticbutton"></a> CMFCRibbonColorButton::EnableAutomaticButton

Specifies whether the **Automatic** button is enabled.

```cpp
void EnableAutomaticButton(
    LPCTSTR lpszLabel,
    COLORREF colorAutomatic,
    BOOL bEnable=TRUE,
    LPCTSTR lpszToolTip=NULL,
    BOOL bOnTop=TRUE,
    BOOL bDrawBorder=FALSE);
```

### Parameters

*lpszLabel*<br/>
[in] The label for the **Automatic** button.

*colorAutomatic*<br/>
[in] An RGB value that specifies the **Automatic** button's default color.

*bEnable*<br/>
[in] TRUE if the **Automatic** button is enabled; FALSE if it is disabled.

*lpszToolTip*<br/>
[in] The tooltip of the **Automatic** button.

*bOnTop*<br/>
[in] Specifies whether the **Automatic** button is at the top, before color palette.

*bDrawBorder*<br/>
[in] TRUE if the application draws a border around the color bar on the ribbon color button. Color bar displays the currently selected color. FALSE if the application does not draw a border

## <a name="enableotherbutton"></a> CMFCRibbonColorButton::EnableOtherButton

Enables the **Other** button.

```cpp
void EnableOtherButton(
    LPCTSTR lpszLabel,
    LPCTSTR lpszToolTip=NULL);
```

### Parameters

*lpszLabel*<br/>
The button's label.

*lpszToolTip*<br/>
The tooltip text for the **Other** button.

### Remarks

The **Other** button is the button that is displayed below the group of colors. When the user clicks the **Other** button, it displays a color dialog.

## <a name="getautomaticcolor"></a> CMFCRibbonColorButton::GetAutomaticColor

Retrieves the current automatic-button color.

```
COLORREF GetAutomaticColor() const;
```

### Return Value

An RGB color value that represents the current automatic-button color.

### Remarks

The automatic-button color is set by the `colorAutomatic` parameter passed to the `CMFCRibbonColorButton::EnableAutomaticButton` method.

## <a name="getcolor"></a> CMFCRibbonColorButton::GetColor

Returns the currently selected color.

```
COLORREF GetColor() const;
```

### Return Value

The color selected by clicking the button.

## <a name="getcolorboxsize"></a> CMFCRibbonColorButton::GetColorBoxSize

Returns the size of the color elements that appear on the color bar.

```
CSize GetColorBoxSize() const;
```

### Return Value

The size of the color buttons in the drop-down color palette.

## <a name="getcolumns"></a> CMFCRibbonColorButton::GetColumns

Gets the number of items in a row of the ribbon color button’s gallery display.

```
int GetColumns() const;
```

### Return Value

Returns the number of icons in each row.

### Remarks

## <a name="gethighlightedcolor"></a> CMFCRibbonColorButton::GetHighlightedColor

Returns the color of the currently selected element on the pop-up color palette.

```
COLORREF GetHighlightedColor() const;
```

### Return Value

The color of currently selected element on the pop-up color palette.

## <a name="removeallcolorgroups"></a> CMFCRibbonColorButton::RemoveAllColorGroups

Removes all color groups from the regular color area.

```cpp
void RemoveAllColorGroups();
```

## <a name="setcolor"></a> CMFCRibbonColorButton::SetColor

Selects a color from the regular color area.

```cpp
void SetColor(COLORREF color);
```

### Parameters

*color*<br/>
[in] A color to set.

## <a name="setcolorboxsize"></a> CMFCRibbonColorButton::SetColorBoxSize

Sets the size of all the color elements that appear on the color bar.

```cpp
void SetColorBoxSize(CSize sizeBox);
```

### Parameters

*sizeBox*<br/>
[in] The new size of the color buttons in the color palette.

## <a name="setcolorname"></a> CMFCRibbonColorButton::SetColorName

Sets a new name for a specified color.

```
static void __stdcall SetColorName(
    COLORREF color,
    const CString& strName);
```

### Parameters

*color*<br/>
[in] The RGB value of a color.

*strName*<br/>
[in] The new name for the specified color.

### Remarks

Because it calls `CMFCColorBar::SetColorName`, this method changes the name of the specified color in all `CMFCColorBar` objects in your application.

## <a name="setcolumns"></a> CMFCRibbonColorButton::SetColumns

Sets the number of columns displayed in the table of colors that is presented to the user during the user's color selection process.

```cpp
void SetColumns(int nColumns);
```

### Parameters

*nColumns*<br/>
[in] The number of color icons to display in each row.

### Remarks

## <a name="setdocumentcolors"></a> CMFCRibbonColorButton::SetDocumentColors

Specifies a list of RGB values to display in the document color area.

```cpp
void SetDocumentColors(
    LPCTSTR lpszLabel,
    CList<COLORREF,COLORREF>& lstColors);
```

### Parameters

*lpszLabel*<br/>
[in] The text to be displayed with the document colors.

*lstColors*<br/>
[in] A reference to a list of RGB values.

## <a name="setpalette"></a> CMFCRibbonColorButton::SetPalette

Specifies the standard colors to display in the color table that the color button displays.

```cpp
void SetPalette(CPalette* pPalette);
```

### Parameters

*pPalette*<br/>
[in] A pointer to a color palette.

### Remarks

## <a name="updatecolor"></a> CMFCRibbonColorButton::UpdateColor

Called by the framework when the user selects a color from the color table displayed when the user clicks the color button.

```cpp
void UpdateColor(COLORREF color);
```

### Parameters

*color*<br/>
[in] A color selected by the user.

### Remarks

The `CMFCRibbonColorButton::UpdateColor` method changes the currently selected button's color and notifies its parent by sending a WM_COMMAND message with a BN_CLICKED standard notification. Use the [CMFCRibbonColorButton::GetColor](#getcolor) method to retrieve the selected color.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CMFCRibbonGallery Class](../../mfc/reference/cmfcribbongallery-class.md)
